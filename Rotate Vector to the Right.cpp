#include <iostream>
#include<vector>

using namespace std;

int main()
{
    int size, shift;
    vector<int> input, output;
    cin >> size;
    for (int i = 0; i < size; ++i)
    {
        int x;
        cin >> x;
        input.push_back(x);
    }
    cin >> shift;
    for (int i = size-shift; i < size; ++i)
        output.push_back(input[i]);

    for (int i = 0; i < size-shift; ++i)
        output.push_back(input[i]);

    for (int number : output)
        cout << number << " ";

    return 0;
}