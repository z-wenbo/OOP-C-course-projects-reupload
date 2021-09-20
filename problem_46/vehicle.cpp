#include "vehicle.h"

Vehicle::Vehicle(int num, string nam): wheels(num), engine(nam) {
	cout << "Finish building a vehicle with "  << wheels.get_num() << " wheels and a "<< engine.get_name()<<" engine."<<endl;
}

Vehicle::Vehicle(int num, string nam, int mark): wheels(num), engine(nam) { }
 
void Vehicle::describe(){
    cout<<"A vehicle with "<<wheels.get_num()<<" wheels and a "<< engine.get_name()<<" engine."<<endl;
}
