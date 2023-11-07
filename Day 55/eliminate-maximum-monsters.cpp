
//idea : min heap and check for all monsters


class Solution {
public:
    int eliminateMaximum(vector<int>& dist, vector<int>& speed) {

        int res = 0;
        vector<float> time;

        for (int i = 0; i < dist.size(); i++) {
            time.push_back((float)dist[i] / speed[i]);
        }

        sort(time.begin(), time.end());

        for (int i = 0; i < time.size(); i++) {
            if (time[i] <= i) {
                break;
            }
            res++;
        }
        return res;
        //    priority_queue<float, vector<float>, greater<float>> pq;

        //    for (int i =0;i < dist.size() ; i++){
        //        pq.push((float)dist[i] /speed[i]);
        //    }
        //     while (!pq.empty()){


        //         if   (pq.top() <= res) 
        //                 break;
        //         res++;
        //         pq.pop();        
        //     }

        //   return res;

    }
};