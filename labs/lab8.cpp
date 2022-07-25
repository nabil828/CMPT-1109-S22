#include <iostream>

using namespace std;

class Movie
{
private:
    string name;
    string MBAA;
    int *arr;

public:
    Movie(string name, string MBAA)
    {
        this->name = name;
        this->MBAA = MBAA;
   
        arr = new int[5];
        for (int i = 0; i < 5; i++)
        {
            arr[i] = 0;
        }
    }

    Movie()
    {
       
        arr = new int[5];
        for (int i = 0; i < 5; i++)
        {
            arr[i] = 0;
        }
    }

    void addRating(int category)
    {
        if (category < 1 || category > 5)
        {
            cout << "Bad category. Plz try again" << endl;
        }
        else
            arr[category - 1]++;
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
        int sum = 0;
        int sum2 = 0;
        for( int i = 0 ; i < 5 ; i++){
            sum += arr[i] * (i+1);
            sum2 += arr[i];
        }
        return sum / (sum2 *1.0);
    
    }

    void operator=(Movie x){
        // deep copy
        for(int i = 0; i < 5; i++){
            this->arr[i] = x.arr[i];
        }
    }

    ~Movie(){
        delete []arr;
    }

};

int main()
{
    Movie movie1("300", "R");
    movie1.addRating(1);                 // Terrible
    movie1.addRating(1);                 // Terrible
    movie1.addRating(3);                 // OK
    movie1.addRating(3);                 // OK
    movie1.addRating(5);                 // Great
    cout << movie1.getName() << endl;    // "300",
    cout << movie1.getMBAA() << endl;    //  "R";
    cout << movie1.getAverage() << endl; // 2.6

    Movie movie2;
    movie2.setName("The GodFather");
    movie2.setMBAA("PG-13");
    movie2.addRating(1);                 // Terrible
    movie2.addRating(3);                 // Terrible
    movie2.addRating(5);                 // OK
    movie2.addRating(5);                 // OK
    movie2.addRating(5);                 // Great
    cout << movie2.getName() << endl;    // "The GodFather"
    cout << movie2.getMBAA() << endl;    //"PG-13"
    cout << movie2.getAverage() << endl; // 3.8

    movie1 = movie2;
    movie1.getAverage() // 3.8;
    return -100;
}