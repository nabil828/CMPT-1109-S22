#include <iostream>

using namespace std;

void draw_triangle_left(int rows, char x)
{
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            cout << x;
        }
        cout << endl;
    }
}

void draw_triangle_right(int rows, char x)
{
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < (rows - i - 1); j++)
        {
            cout << ' ';
        }
        for (int j = 0; j <= i; j++)
        {
            cout << x;
        }
        cout << endl;
    }
}

void draw_equal_sided_triangle(int number_of_rows, char the_char){
    for(int i = 0 ; i < number_of_rows ; i++){
        // spaces
        for(int j = number_of_rows - i -1; j > 0 ; j--){
            cout << " ";
        }

        // stars
        for(int k = 1; k <= ((i+1)*2 -1) ; k++){
            cout << the_char;
        }
        cout << endl;
    }
}

int main()
{

    // draw_triangle_left(4, '*');
    // draw_triangle_right(4, '*') ; // 2
    // draw_triangle_right_tilted()
    //  draw_triangle_left_tilted()
    // draw diamond()?
    draw_equal_sided_triangle(4, '*');
    return -1;
}