#include <string.h>
#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    // Variable declaration
    string word1;
    string word2;
    string state;
    bool terminate = true;

    while (terminate)
    {

        // Get input data from the user
        cout << "Please enter your first word" << endl;
        cin >> word1;
        cout << "Please enter your second word" << endl;
        cin >> word2;

        // Check for the length of the words given by the user 
        if (word1.length() > word2.length())
        {
            cout << word1 + " is longer than " + word2 << endl;
        }
        else if (word1.length() < word2.length())
        {
            cout << word2 + " is longer than " + word1 << endl;
        }
        else
        {
            cout << "Both words are equally long!" << endl;
        }        

        // Check if user wants to quit the program
        cout << "Do you want to quit? (y/n)" << endl;
        cin >> state;
        if (state == "y")
            terminate = false;
    }
   
    return 0;
}
