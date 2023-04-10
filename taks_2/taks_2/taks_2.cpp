#include <iostream>
using namespace std;
int main(){
	const int DAYS_OF_JANUARY = 31;
	int temp[DAYS_OF_JANUARY];

	srand(time(0));
	int sum = 0;
	int count = 0;
	for (int i = 0; i < DAYS_OF_JANUARY; i++) {
		temp[i] = rand() % 10;
		sum += temp[i];
		if (temp[i] < 6) {
			count++;
		}
	}
	cout << endl;
	int avg = sum / DAYS_OF_JANUARY;
	cout <<"average temperature for the month: "<< avg << endl;
	cout << "The number of days when the temperature fell below: "<<count << endl;
}

