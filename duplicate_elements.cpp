#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> nums = {4, 3, 2, 7, 8, 2, 3, 1};
    vector<int> duplicates;
    
    for(int i = 0; i < nums.size(); i++) {
            int index = abs(nums[i]) - 1;
            if (nums[index] < 0) {
                duplicates.push_back(abs(nums[i]));
            } else {
                nums[index] = -nums[index];
            }
        }
        
    cout << "Duplicates: ";
    for(int num : duplicates) {
        cout << num << " ";
    }
    cout << endl;
    
    return 0;
}
