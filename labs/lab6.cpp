#include <iostream>

using namespace std;

const int ROWS = 4;
int COLUMNS_PER_ROW_ARR[ROWS] = {5, 6, 4, 3};
int **arr = new int *[ROWS];

void display();

int main()
{

    arr[0] = new int[5];
    arr[1] = new int[6];
    arr[2] = new int[4];
    arr[3] = new int[3];

    for (int i = 0; i < ROWS; i++)
    {
        for (int j = 0; j < COLUMNS_PER_ROW_ARR[i]; j++)
        {
            arr[i][j] = 0;
        }
        cout << endl;
    }

    int selection = -7;
    do
    {
        cout << "choose one of the following" << endl;
        cout << "1 - Login " << endl;
        cout << "2- Log off " << endl;
        cout << "3- Search" << endl;
        cout << "4- Exist" << endl;

        cin >> selection;
        switch (selection)
        {
        case 1:
        {

            int user_id = 49193;
            int machine = 2;
            int lab = 3;
            cout << "enter id, lab, & machine " << endl;
            cin >> user_id >> machine >> lab;
            // simulate a login operation
            arr[lab - 1][machine - 1] = user_id;
            display();
            break;
        }
        default:
            break;
        }

    } while (selection != 4);

    return 223;
}

void display()
{
    for (int i = 0; i < ROWS; i++)
    {
        for (int j = 0; j < COLUMNS_PER_ROW_ARR[i]; j++)
        {
            if (arr[i][j] == 0)
                cout << "empty ";
            else
                cout << arr[i][j] << " ";
        }
        cout << endl;
    }
}