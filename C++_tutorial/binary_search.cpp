#include <iostream>
#include <vector>
using namespace std;

class Solution {

    public:
        bool isFound(vector<int> &arr, int num) {
            int left = 0;
            int right = arr.size()-1;
            while(left <= right) {
                int mid = left + (right-left)/2;
                if (num == arr[mid]) {
                    cout << "value found at: " << mid << endl;
                    return true;
                } else if(num < arr[mid]) {
                    right = mid - 1;
                } else {
                    left = mid + 1;
                }
            }
            return false;
        }

};

int main() {

    vector <int> arr{1, 2, 3, 4, 5, 6};
    int num = 2;
    Solution solution;
    cout << boolalpha << solution.isFound(arr, num) << endl;

    return 0;

}