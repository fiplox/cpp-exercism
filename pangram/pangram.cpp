#include "pangram.h"
#include <map>
#include <algorithm>
#include <ctype.h>
#include <unordered_set>

namespace pangram {
	bool is_pangram(std::string s) 
	{
		std::unordered_set<char> char_set;

		for (char c : s){
			c = std::tolower(c);
			if (c > 96 && c < 123)
				char_set.insert(std::tolower(c));
		}
		return char_set.size() == 26;
	}
}  // namespace pangram
