#include "car.h"

Car::Car(int num, string nam): Vehicle(num,nam,0){
	cout << "Finish building a car with "  << wheels.get_num() << " wheels and a "<< engine.get_name()<<" engine."<<endl;
}

void Car::describe(){
    cout<<"A car with "<<wheels.get_num()<<" wheels and a "<< engine.get_name()<<" engine."<<endl;
}
