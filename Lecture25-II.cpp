// Lecture 25 II - Introduction to Classes Pt 2

#include <iostream>
using namespace std;

class student{
    public:
    string name;
    int mids;
    float ends;
    bool pre_ads;
};

class vehicle{
    public:
    string car_name;
    string tyre_name;
    int number_of_tyre;
    int number_of_seats;
};

int main(){
    student a, b, c; // object of a particular class
    vehicle hyundai, suzuki, ferrari;
    return 0;
}