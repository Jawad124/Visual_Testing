


#include "pch.h"
#include <iostream>

using namespace std;

class car_details {
private:
	int modal, price, av_speed;


public:

	car_details() {
		modal = 0;
		price = 0;
		av_speed = 0;
	}
	void get_data() {

		cout << "enter car price :" << endl;
		cin >> price;
		cout << "enter car modal :" << endl;
		cin >> modal;
		cout << "enter car average speed :" << endl;
		cin >> av_speed;
	}
	void show_data() {
		cout << "car price is : " << price << endl;
		cout << "car modal is : " << modal << endl;
		cout << "car average speed is : " << av_speed<< endl;

	}
	
};

int main()
{
	
			car_details c1;
			
	}


