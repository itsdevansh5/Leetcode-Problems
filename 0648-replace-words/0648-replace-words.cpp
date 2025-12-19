class Solution {
public:
    string replaceWords(vector<string>& dictionary, string sentence) {
        unordered_set<string> dict(dictionary.begin(), dictionary.end());
        string output;
        int i = 0;

        while (i < sentence.size()) {
            string word;

            while (i < sentence.size() && sentence[i] != ' ') {
                word += sentence[i];
                i++;

                if (dict.count(word)) {
                    break;
                }
            }

            
            while (i < sentence.size() && sentence[i] != ' ') {
                i++;
            }

            output += word;

            if (i < sentence.size()) {
                output += ' ';
                i++;
            }
        }

        return output;
    }
};
