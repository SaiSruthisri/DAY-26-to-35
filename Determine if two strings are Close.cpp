class Solution {
public:
    bool closeStrings(string word1, string word2) {
         ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

          map<char,int>mp1;
          map<char,int>mp2;
          bool c = true;
          int n= word1.size();
          int m= word2.size();

          if (n != m) return false;

          for(int i=0;i<n;i++)
          {
              mp1[word1[i]]++;
          }
           for(int i=0;i<n;i++)
          {
              mp2[word2[i]]++;
          }

        vector<int>freq1, freq2;
        for (auto x : mp1) {
            freq1.push_back(x.second);
        }
        for (auto x : mp2) {
            freq2.push_back(x.second);
        }

        vector<char>ch1, ch2;
        for (auto x : mp1) {
            ch1.push_back(x.first);
        }
        for (auto x : mp2) {
            ch2.push_back(x.first);
        }
        sort(freq1.begin(), freq1.end());
        sort(freq2.begin(), freq2.end());
        sort(ch1.begin(), ch1.end());
        sort(ch2.begin(), ch2.end());


        if (freq1 != freq2 || ch1!=ch2) c = false;

          return c;

    }
};
