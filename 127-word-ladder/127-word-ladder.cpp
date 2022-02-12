class Solution {
public:
    int ladderLength(string beginWord, string endWord, vector<string>& wordList) {
        if(find(wordList.begin(),wordList.end(),endWord)==wordList.end())                                  //finding if word is already present
            return 0;
        
        set<string> s;                                                                     //storing all word permutations given in a set
        for(auto i: wordList)
            s.insert(i);
        
        queue<string> q;                                                                  // queue for bfs implementation
        q.push(beginWord);
        int depth =0;                                                                          // depth of bfs currently
        
        while(!q.empty()){                                                                                 
            depth++;
            int n= q.size();
            while(n--){
                string curr = q.front();
                q.pop();
                
                for( int i=0; i< curr.length(); i++){                                            // for each word
                    string temp = curr;
                    for(char c='a'; c<= 'z'; c++){                                                // for each letter
                        temp[i] = c;
                        if(temp == curr) continue;                                               // if same letter
                        if(temp == endWord) return depth+1;                                              // if found
                        if(s.find(temp)!= s.end()){                                                 // otherwise push in queue
                            q.push(temp);
                            s.erase(temp);
                        }
                    }
                }
            }
            
        }
        return 0;       
    }
};