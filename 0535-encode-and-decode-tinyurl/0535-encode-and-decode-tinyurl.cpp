class Solution {
public:

    // Encodes a URL to a shortened URL.
    string domain="https://devurl.com/";
    int count=0;
    unordered_map<int,string>mp;    
    string encode(string longUrl) {
        count++;
        mp[count]=longUrl;
        return (this->domain+to_string(count));
        

    }

    // Decodes a shortened URL to its original URL.
    string decode(string shortUrl) {
       string id = shortUrl.substr(domain.length());
    int num = stoi(id);
    return mp[num];
    }
};

// Your Solution object will be instantiated and called as such:
// Solution solution;
// solution.decode(solution.encode(url));