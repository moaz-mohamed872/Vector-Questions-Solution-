#include <iostream>
#include<vector>

using namespace std;

int main()
{
    int size, zero_counter = 0;
    vector<int> numbers;
    cin >> size;
    for (int i = 0; i < size; ++i)
    {
        int x;
        cin >> x;
        if (x == 0)
            zero_counter++;
        else
            numbers.push_back(x);
    }

    for (int i = 0; i < zero_counter; ++i)
        numbers.push_back(0);

    for (int num : numbers)
        cout << num << " ";

    return 0;
}