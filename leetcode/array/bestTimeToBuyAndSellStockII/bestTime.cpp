#include <iostream>
#include <vector>
using namespace std;


class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int ans = 0;

        return ans;
    }
};


int main() {
    vector<vector<int>> test = {
        {7,1,5,3,6,4},
        {1,2,3,4,5},
        {7,6,4,3,1}
    };
    // int output[] = {1, 1, 1};
    // int output[] = {0, 0, 0};
    int output[] = {7, 4, 0};
    for (long unsigned int i = 0; i < test.size(); ++i){
        auto curr = Solution();
        int ans = curr.maxProfit(test[i]);
        if(ans == output[i]) 
            cout << "\033[32m" << "Success" << endl; 
        else
            cout << "\033[31m" << "Failure" << endl;
    }
    return 0;
}