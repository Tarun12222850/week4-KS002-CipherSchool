//  Lecture 26 - Functions in Class

#include <iostream>
using namespace std;

class student{
    public:
    string name;
    int mids;
    float ends;
    bool pre_ads;

    void cal_mark(){
        float total_marks;
        total_marks = mids*0.5 + ends*0.75;
        cout << "The marks of " << name << " is " << total_marks << endl;
    }

    void totalmarksincludingproject(int project_marks){
        cout << "Project marks is : " << mids+ends+project_marks << endl;
    }

    void calculate_fail_probability(){
        if(ends<=10) cout << "Yeah this student needs to attend the same class for one more year." << endl;
    }
};

class vehicle{
    public:
    string car_name;
    string tyre_name;
    int number_of_tyre;
    int number_of_seats;
    int number_of_miles_travelled;

    void distancetravelledbycar(){
        cout << "Number of miles the car travelled is " << number_of_miles_travelled << endl;
    }
};

int main(){
    student a, b, c; // object of a particular class
    vehicle jaguar, hyundai, suzuki, ferrari;

    a.name = "Aadi";
    a.mids = 50;
    a.ends = 99.5;
    a.pre_ads = 1;
    a.cal_mark();
    a.totalmarksincludingproject(10);

    jaguar.car_name = "F Pace";
    jaguar.tyre_name = "Apollo";
    jaguar.number_of_tyre = 4;
    jaguar.number_of_seats = 2;
    jaguar.number_of_miles_travelled = 10000;
    jaguar.distancetravelledbycar();
    return 0;
}