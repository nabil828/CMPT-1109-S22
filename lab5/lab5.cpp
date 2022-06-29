#include <iostream>
#include <fstream>

using namespace std;
int NEXT_CHAPTER = 18;
int get_next_number()
{
    if (NEXT_CHAPTER == 0)
    {
        NEXT_CHAPTER = 18;
        return NEXT_CHAPTER--;
    }
    return NEXT_CHAPTER--;
}
int main()
{
    ifstream inStream;

    inStream.open("answers.txt");

    if (inStream.fail())
    {
        cout << "Something is wrong!." << endl;
    }
    else
    {
        cout << "Everything is OK." << endl;
    }

    while (true)
    {
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
        bool ignore_the_N = false;
        // read the next char.
        inStream.get(anAnswer[counter++]);
        while (!inStream.eof())
        {
            // I need to read the whole line
            if (anAnswer[counter - 1] == '\n')
            {
                // provide an answer
                cout << anAnswer << endl;
                counter = 0;
            }
            else if (anAnswer[counter - 1] == '#')
            {
                // let us get the next number and
                // it to the answer array
                int x = 16; //  get_next_number();
                if (x >= 10)
                {
                    anAnswer[counter - 1] = '1';
                    anAnswer[counter++] = (x - 10) + '0'; // '6'
                }
                else
                {
                    anAnswer[counter - 1] = x + '0'; // '6'
                }
                ignore_the_N = true;
            }
            else if (ignore_the_N && anAnswer[counter - 1] == 'N')
            {
                counter--;
                inStream.get(anAnswer[counter++]);
                continue;
            }

            // continue reading the character
            // read the next char.
            inStream.get(anAnswer[counter++]);
        }
    }

    return -77;
}