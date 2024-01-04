#include <iostream>
using namespace std;

main(){
	int area;
	int w;
	int sq;
	int wid, len;
	int rec;
	cout << "1) Compute area of square.";
	cout << "\n2) Compute area of rectangle.";
	cout << "\nWhat do you want to do (1-2)?";
	cin >> area;
	
	switch(area){
		case 1:
			cout << "Enter width of square: ";
			cin >> w;
			sq = w*w;
			cout << "The area of square is " << sq << " square meters.";
			break;
			
		case 2:
			cout << "Enter width of rectangle: ";
			cin >> wid;
			cout << "Enter length of rectangle: ";
			cin >> len;
			rec = wid * len;
			cout << "The area of rectangle is " << rec << " square meters.";
			break;
			
		default:
			cout << "Wrong Choice.";
			break;
	}
}
