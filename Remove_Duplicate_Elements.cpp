#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int size;
    bool visited[1000] = {};
    cin >> size;
    vector<int> numbers(size);
    for (int i = 0; i < size; ++i)
    {
        cin >> numbers[i];
        visited[numbers[i]] = true;
    }

    for (vector<int>::iterator it = numbers.begin();it != numbers.end(); it++)
        if (visited[*it])
        {
            cout << *it << " ";
            visited[*it] = false;
        }

    return 0;
}