#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> arr = {2, 7, 11, 15};
    int target = 9;

    int i = 0;
    int j = arr.size() - 1;
    while (i < j)
    {
        if ((arr[i] + arr[j]) == target)
        {
            cout << arr[i] << arr[j];
            break;
        }else if((arr[i]+arr[j])>target){
            j--;
        }else{
            i++;
        }
    }

    return 0;
}
