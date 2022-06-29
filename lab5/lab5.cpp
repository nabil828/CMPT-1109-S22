#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    ifstream inStream;

    inStream.open("answers.txt");

    if (inStream.fail()){
        cout << "Something is wrong!." << endl;
    }
    else    {
         cout << "Everything is OK." << endl;
    }

    while(true){
        cout << "Plz, enter your next question" << endl;
        string question;

        cin >> question;
    
        // provide an answer - todo 
        string answer;;
        if(inStream >> answer)
            cout << answer << endl;
        else    {
            inStream.close();
            inStream.open("answers.txt");
            inStream >> answer;
            cout << answer << endl;
        }
            
    }

    return -77;
}