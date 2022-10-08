#include <iostream>
using namespace std;
int main()
{
    int arr[5]={2};
    
    // cout << "Enter The Elements in array \n";
    // for (auto i : arr) //range based loops cannot be used  for enterting elements from user.
    // {
    //     cin >> i;
        
    // }
    for (auto i : arr)
        cout << i << endl;
}
