#include <iostream>

using namespace std;

class Movie{
    private:
        string name;
        string MBAA;
        int terrible_count;
        int bad_count;
        int ok_count;
        int good_count;
        int great_count;

    public:
        Movie(string name, string MBAA){
            //todo 
        }

        Movie(){
            //todo 
        }
        void addRating(int category){
            if(category == 1){
                terrible_count++;
            }
            //todo
        }
        string getName(){
            // todo
        }
        
        string getMBAA(){
            // todo
        }

        
        void setName(string Name){
            // todo
        }

        void setMBAA(string Name){
            // todo
        }

        double getAverage(){
            // todo
        }

    
};

int main (){
    Movie movie1("300", "R");
    movie1.addRating(1); // Terrible   
    movie1.addRating(1); // Terrible   
    movie1.addRating(3); // OK
    movie1.addRating(3); // OK
    movie1.addRating(5); // Great
    movie1.getName(); // "300",
    movie1.getMBAA(); //  "R";
    cout << movie1.getAverage(); // 3.2

    Movie movie2;
    movie2.setName("The GodFather");
    movie2.setMBAA("PG-13");
    movie2.addRating(1); // Terrible   
    movie2.addRating(3); // Terrible   
    movie2.addRating(5); // OK
    movie2.addRating(5); // OK
    movie2.addRating(5); // Great
    movie2.getName(); // "The GodFather"
    movie2.getMBAA(); //"PG-13"
    cout << movie2.getAverage(); // 3.8

    return -100;
}