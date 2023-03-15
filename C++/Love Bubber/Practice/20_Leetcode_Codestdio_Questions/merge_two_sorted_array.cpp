#include <iostream>
#include <vector>
using namespace std;
vector<int> mergeVector(vector<int> v1, vector<int> v2)
{
    
}
int main()
{
    vector<int> v1;
    v1.push_back(14);
    v1.push_back(17);
    v1.push_back(19);
    v1.push_back(24);
    v1.push_back(28);

    vector<int> v2;
    v2.push_back(52);
    v2.push_back(62);
    v2.push_back(72);
    v2.push_back(82);
    v2.push_back(98);

    vector<int> v3 = mergeVector(v1, v2);
    for (auto i : v3)
    {
        cout << i << "   ";
    }
    cout << endl;
    return 0;
}