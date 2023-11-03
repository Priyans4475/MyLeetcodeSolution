class Solution {
public:
    int leastInterval(vector<char>& tasks, int n) {
        priority_queue<int> pq;
        vector<int>mp(26,0);

        for(char i:tasks){
            mp[i-'A']++;  // count the number of cnts a task needs to be done
        }   
        for(int i=0;i<26;++i){
            if(mp[i]) 
            pq.push(mp[i]);
        }

        int cnt=0; // stores the total cnt taken 
        while(!pq.empty()){
            vector<int>arr;
            int cycle=n+1;  // n+1 is the CPU cycle length, if n is the cooldown period then after a task A there will be n more tasks. Hence n+1.

            while(cycle and !pq.empty()){
                int max_freq=pq.top(); 
                // the task at the top should be first assigned the CPU as it has highest frequency
                pq.pop();
                if(max_freq>1){ 
                    // task with more than one occurrence, the next occurrence will be done in the next cycle 
                    arr.push_back(max_freq-1); // add it to arring task list
                }
                ++cnt; 
                --cycle; 
            }

            for(int count:arr){
                pq.push(count); 
            }

           
            if(pq.empty())break; // if the priority queue is empty than all tasks are completed and we don't need to include the idle cnt
            cnt+=cycle; // this counts the idle cnt 
        }
        return cnt;
    }
};