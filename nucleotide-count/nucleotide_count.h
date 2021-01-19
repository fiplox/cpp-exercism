#if !defined(NUCLEOTIDE_COUNT_H)
#define NUCLEOTIDE_COUNT_H
#include <map>
#include <string>
namespace nucleotide_count {
    class counter {
      private:
        std::map<char, int> dna{{'A', 0}, {'T', 0}, {'C', 0}, {'G', 0}};
        bool is_valid(std::string s) const;

      public:
        counter(std::string dna_s);
        std::map<char, int> nucleotide_counts() const;
        int count(char nucleotide) const;
    };

}  // namespace nucleotide_count

#endif  // NUCLEOTIDE_COUNT_H
