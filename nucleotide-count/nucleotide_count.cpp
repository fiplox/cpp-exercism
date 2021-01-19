#include "nucleotide_count.h"

#include <algorithm>
#include <stdexcept>
namespace nucleotide_count {
    counter::counter(std::string dna_s)
    {
        if (!is_valid(dna_s))
            throw std::invalid_argument("Not a valid nucleotide");
        for (auto nucleotide : dna_s) {
            dna[nucleotide]++;
        }
    }

    std::map<char, int> counter::nucleotide_counts() const
    {
        return dna;
    }

    int counter::count(char nucleotide) const
    {
        if (nucleotide != 'A' && nucleotide != 'T' && nucleotide != 'G' &&
            nucleotide != 'C')
            throw std::invalid_argument("Not a valid nucleotide.");
        return dna.at(nucleotide);
    }

    bool counter::is_valid(std::string dna_s) const
    {
        return dna_s.find_first_not_of("ACGT") == std::string::npos;
    }
}  // namespace nucleotide_count
