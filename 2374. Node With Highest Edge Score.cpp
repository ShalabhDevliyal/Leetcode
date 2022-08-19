class Solution {
public:
    int edgeScore(vector<int>& edges) {
        map<int,long long>m;
        pair<int,long long>p;
        p.first=-1;
        p.second=-1;
       
        for(int i=0;i<edges.size();i++)
        {
            m[edges[i]]+=i;
        }
        
        for(auto it=m.begin();it!=m.end();it++)
        {
            // cout<<it->first<<" -> "<<it->second<<endl;
            if(p.second<it->second){
                    p.first=it->first;
                    p.second=it->second;
                }
        }
        return p.first;
    }
};