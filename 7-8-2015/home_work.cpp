#include<iostream>
using namespace std;

class travel{

    private:
        int no_adults, no_child;
        double dist, totl_fare;

    public:
        void setInput(int child, int adult, double distance){
            no_adults = adult;
            no_child = child;
            dist = distance;
        }

        float totalFare(){
            float adult_fare, child_fare;

            if(dist <= 500){
                adult_fare = no_adults * dist * 20;
                child_fare = no_child * dist * 10;
                return adult_fare + child_fare;
            } else {
                adult_fare = no_adults * dist * 30;
                child_fare = no_child * dist * 20;
                return adult_fare + child_fare;
            }
        }
};

int main(){
    int child, adult;
    double distance;
    travel t;

    cout << "Enter the number of adults = ";
    cin >> adult;
    cout << "Enter the number of child = ";
    cin >> child;
    cout << "Enter the total distance = ";
    cin >> distance;

    t.setInput(child, adult, distance);
    cout << "Total fare of the journey is " << t.totalFare();

}
