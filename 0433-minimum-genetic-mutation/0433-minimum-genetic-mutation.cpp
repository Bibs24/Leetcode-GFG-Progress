class Solution {
public:
    int minMutation(string start, string end, vector<string>& bank) {
         queue<string> q;
        unordered_set<string> vis; 
        
        q.push(start);
        vis.insert(start);
        
        int count=0;
        
            while(!q.empty())
            {
                int n = q.size();
                for(int i=0; i<n; i++)
                {
                    string node = q.front();
                    q.pop();
                    if(node==end) return count;
                    
                        for(char ch: "ACGT")
                        {   
                            for(int j=0; j<node.size(); j++)
                            {
                                string neighbour = node;
                                neighbour[j]=ch;
                                
                                if(!vis.count(neighbour) && 
                                 find(bank.begin(), bank.end(), neighbour) != bank.end())
                                {
                                    q.push(neighbour);
                                    vis.insert(neighbour);
                                }
                            }
                        }
                }
                count++;
            }
        
        return -1;
    }
};