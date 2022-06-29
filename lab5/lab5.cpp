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
        // string anAnswer;;
        char anAnswer[100];

        // if(inStream >> anAnswer)
        //     cout << anAnswer << endl;
        // else    {
        //     inStream.close();
        //     inStream.open("answers.txt");
        //     inStream >> anAnswer;
        //     cout << anAnswer << endl;
        // }
        int counter = 0;
        // read the next char.
        inStream.get(anAnswer[counter++]); 
        while(!inStream.eof()){
            // I need to read the whole line 
            if(anAnswer[counter-1] == '\n'){
                // provide an answer
                cout << anAnswer << endl;
                counter = 0;
            }
            
            // continue reading the character
            // read the next char.
            inStream.get(anAnswer[counter++]);
        }    
    }

    return -77;
}