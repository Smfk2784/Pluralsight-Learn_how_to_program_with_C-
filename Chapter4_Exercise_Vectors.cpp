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

    // Print size of the vector
    cout << "int vector vi has " << vi.size() << " elements." << endl;

    vi[5] = 3;
    vi[6] = -1;
    vi[1] = 99;

    // Print all elements of the vector
    for (auto item : vi)
    {
        cout << item << " ";
    }
    cout << endl;

    // Sort whole vector alphabetically (string type)
    sort(begin(vs),end(vs));
    for(auto item : vs)
    {
        cout << item << " ";
    }
    cout << endl;

    // Count how many threes this vector of integers has
    int threes = count(begin(vi),end(vi),3);
    cout << "vector of ints has " << threes << " elements 3." << endl;

    // Count t's in the first word
    int tees = count(begin(vs[0]),end(vs[0]),'t');
    cout << "first word has " << tees << " letter t's."  << endl;

    return 0;
}
