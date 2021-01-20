#include "pangram.h"
#include <map>
#include <cctype>
#include <unordered_set>

namespace pangram {
	bool is_pangram(std::string const & s) 
	{
		std::unordered_set<char> char_set;

		for (char c : s){
			c = std::tolower(c);
			if (std::islower(c))
				char_set.insert(c);
		}
		return char_set.size() == 26;
	}
}  // namespace pangram
