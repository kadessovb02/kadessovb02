#include <iostream>
#include <cstring>
#include <cmath>
using namespace std;
struct Luggage {
	
	char *description = new char[50];
	int count;
	double weight;
};

struct Passenger {
	int luggageSize;
	char *name = new char[50];
	Luggage *luggage = new Luggage[20];
};
void findMax(Passenger *p, int n){
    double max = 0;
    int maxind = 0;
    int maxjnd = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (p[i].luggage[j].weight > max)
            {
                max = p[i].luggage[j].weight;
                maxind = i;
                maxjnd = j;
            }
        }
    }
    cout<<p[maxind].name<<endl;
    cout<<p[maxind].luggage[maxjnd].description;
}
int main(){
    int n;
    cin>>n;
    Passenger *p = new Passenger[n]; // dynamic for luggage TRY!!!
    for (int i = 0; i < n; i++)
    {
        cin>>p[i].name >> p[i].luggageSize;
        for (int j = 0; j < p[i].luggageSize; j++)
        {
            cin>>p[i].luggage[j].description >> p[i].luggage[j].count >> p[i].luggage[j].weight;
        }   
    }
    findMax(p, n);
}