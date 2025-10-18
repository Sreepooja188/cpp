#include <iostream>  
using namespace std;  
class Father {  
public:  
void quality() {  
cout << "Quality from Father" << endl;                                                                                          
}  
};  
class Mother {  
public:  
void skill() {  
cout << "Skill from Mother" << endl;  
}  
};  
class Child : public Father, public Mother {  
public: 
void own() {  
    cout << "Own feature of Child" << endl;  
}  
};  
int main() {  
    cout<<"24B11AI185"<<endl; 
    Child obj;  
    obj.quality();   
    obj.skill();     
    obj.own();     
return 0; 
}
