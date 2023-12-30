
class Solution {
public:
    vector<vector<int>> findSolution(CustomFunction& customfunction, int z) {
        vector<vector<int>>ans;
        
        for(int i=1;i<=1000;i++)
        {
            for(int j=1;j<=1000;j++)
            {
                vector<int>temp;
                if(customfunction.f(i,j)==z)
                {
                    temp.push_back(i);
                    temp.push_back(j);
                    ans.push_back(temp);
                }
               
            }
        }
        return ans;
    }
};