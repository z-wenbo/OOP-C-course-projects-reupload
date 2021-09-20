#include "motor.h"

Motor::Motor(int num, string nam): Vehicle(num,nam,0){
	cout << "Finish building a motor with "  << wheels.get_num() << " wheels and a "<< engine.get_name()<<" engine."<<endl;
}

void Motor::describe(){
    cout<<"A motor with "<<wheels.get_num()<<" wheels and a "<< engine.get_name()<<" engine."<<endl;
}

void Motor::sell(){
    cout<<"A motor is sold! "<<endl;
}