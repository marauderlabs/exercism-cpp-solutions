#include "pangram.h"

#include <unordered_set>

namespace pangram {

bool is_pangram(std::string str) {
    /**
     * Instead of the usual 'seen' check for 26, let's do
     * the reverse. Mark all as unseen and remove them
     * on seeing. If we've seen everything that we need to see
     * we're done!
     */
    std::bitset<26> not_seen;
    not_seen.set(); // Set all

    for (auto c: str) {
       auto l = tolower(c);
       if (!isalpha(l)) {
           continue;
       }

       not_seen.reset(l-'a');
       if (not_seen.none()) {
           return true;
       }
    }

    return false;
}

#if 0 // Alternate approach using hashmap
bool is_pangram(std::string str) {
    /**
     * Instead of the usual 'seen' check for 26, let's do
     * the reverse. Mark all as unseen and remove them
     * on seeing. If we've seen everything we need to see
     * we're done!
     */
    std::unordered_set<char> not_seen;

    for (char c = 'a'; c <= 'z'; c++) {
        not_seen.insert(c);
    }

    for (auto c: str) {
       auto l = tolower(c);
       if (not_seen.find(l) != not_seen.end()) {
           not_seen.erase(l);
       }

       if (not_seen.size() == 0) {
           return true;
       }
    }

    return false;
}
#endif

}  // namespace pangram
