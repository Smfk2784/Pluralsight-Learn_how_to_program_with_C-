#include <iostream>
#include <string>
#include <vector>
#include <algorithm> // for sort and count

using namespace std;

int main(int argc, char const *argv[])
{
    // Declare vector of type integer
    vector<int> vi;

    // Member function off class vector --> Put item to end of the vector
    for (int i = 0; i < 10; i++)
    {
        vi.push_back(i);
    }

    // Range based "for", for every element in the vector, do this
    for (auto item:vi)
    {
        cout << item << " ";
    }

    vector<string> vs;

    cout << "enter three words ";
    for (int i = 0; i < 3; i++)
    {
        string s;
        cin >> s;
        vs.push_back(s);
    } 

    for (auto item:vs)
    {
        cout << item << " ";
    }
    cout << endl;

    cout << "int vector vi has " << vi.size() << " elements." << endl;

    vi[5] = 3;
    vi[6] = -1;
    vi[1] = 99;

    for (auto item : vi)
    {
        cout << item << " ";
    }
    cout << endl;

    return 0;
}
