#include <iostream>

using namespace std;


int main()

{

	float p,r,t,i;

	cout<<"Enter Principle Amount :";

	cin>>p;

	cout<<"Enter Rate :";

	cin>>r;

	cout<<"Enter Time :";

	cin>>t;

	i=(p*r*t)/100;
	cout<<"Simple Interest :"<<i;

	return 0;

}
