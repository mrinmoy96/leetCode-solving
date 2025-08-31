class Solution {
public:
    string frequencySort(string s) {
        unordered_map<char, int> freq;
        for (char c : s) {
            freq[c]++;
        }

        // Step 2: Create a vector of pairs (char, frequency)
        vector<pair<char, int>> freqVec(freq.begin(), freq.end());

        // Step 3: Sort by frequency in decreasing order
        sort(freqVec.begin(), freqVec.end(), [](auto &a, auto &b) {
            return a.second > b.second; // higher frequency first
        });

        // Step 4: Build the result string
        string result;
        for (auto &p : freqVec) {
            result.append(p.second, p.first); // repeat character
        }

        return result;
    }
};