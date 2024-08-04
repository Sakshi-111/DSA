#include <iostream>
using namespace std;
class Student {
    private:
    int health=7;

    public:

    int name;
    int age;
    int hight;
    
    void print(){
        cout<<name;
    }
    int gethealth(){
        return health;
    }
    int sethealth(int health){
        this->health=health;
    }
    Student(){
        name=0;
    }
    Student(int name){
        this->name=name;
    }
    Student(int name,int age){
        this->name=name;
        this->age= age;
    }


};
int main(){
    //static
    Student a;
    a.name=1;
    a.age=1;
    Student rj(0);
    Student jh(0,0);

    //dynamic
    Student *b=new Student;
    Student *rjj=new Student(0);
    Student *th =new Student(0,0);
    b->age;
    b->name;
    (*b).name;
    (*b).age;
    cout<<b->gethealth();
    // b->sethealth(5);
    // cout<<b->gethealth();
}
//if any constructor is made , parameterised and no default then automatic constructor does not exist and object cant be created without any parameter in case a parameterised constructor is made
