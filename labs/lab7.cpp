#include <iostream>

using namespace std;

class Movie
{
private:
    string name;
    string MBAA;
    int terrible_count;
    int bad_count;
    int ok_count;
    int good_count;
    int great_count;

public:
    Movie(string name, string MBAA)
    {
        this->name = name;
        this->MBAA = MBAA;
        terrible_count = 0;
        bad_count = 0;
        ok_count = 0;
        good_count = 0;
        great_count = 0;
    }

    Movie()
    {
        terrible_count = 0;
        bad_count = 0;
        ok_count = 0;
        good_count = 0;
        great_count = 0;
    }

    void addRating(int category)
    {
        if (category == 1)
        {
            terrible_count++;
        }
        else if (category == 2)
        {
            bad_count++;
        }
        else if (category == 3)
        {
            ok_count++;
        }
        else if (category == 4)
        {
            good_count++;
        }
        else if (category == 5)
        {
            great_count++;
        }
        else
        {
            cout << "Bad category. Plz try again" << endl;
        }
    }

    string getName()
    {
        return name;
    }

    string getMBAA()
    {
        return MBAA;
    }

    void setName(string name)
    {
        this->name = name;
    }

    void setMBAA(string MBAA)
    {
        this->MBAA = MBAA;
    }

    double getAverage()
    {
        return (
                   terrible_count * 1 +
                   bad_count * 2 +
                   ok_count * 3 +
                   good_count * 4 +
                   great_count * 5
                ) /
               (terrible_count + bad_count + ok_count + good_count + great_count * 1.0);
    }

};

int main()
{
    Movie movie1("300", "R");
    movie1.addRating(1);         // Terrible
    movie1.addRating(1);         // Terrible
    movie1.addRating(3);         // OK
    movie1.addRating(3);         // OK
    movie1.addRating(5);         // Great
    cout << movie1.getName()<< endl;            // "300",
    cout << movie1.getMBAA()<< endl;            //  "R";
    cout << movie1.getAverage() << endl; // 2.6

    Movie movie2;
    movie2.setName("The GodFather");
    movie2.setMBAA("PG-13");
    movie2.addRating(1);         // Terrible
    movie2.addRating(3);         // Terrible
    movie2.addRating(5);         // OK
    movie2.addRating(5);         // OK
    movie2.addRating(5);         // Great
    cout << movie2.getName()<< endl;            // "The GodFather"
    cout << movie2.getMBAA()<< endl;            //"PG-13"
    cout << movie2.getAverage()<< endl; // 3.8

    return -100;
}