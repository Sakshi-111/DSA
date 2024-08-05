#include <iostream>
using namespace std;
#include <cstring>


class Student {
    private:
    int health=7;

    public:
    char *id;

    int name;
    int age;
   
    
    void print(){
        cout<<this->health<<endl;
        cout<<this->age<<endl;
        cout<<this->id<<endl;
    }
    int gethealth(){
        return health;
    }
    void sethealth(int health){
        this->health=health;
    }
    void setage(int age){
        this->age=age;
    }
    int getage(){
        return age;
    }
       

    // simple constructor
    Student(){
        id=new char[100];
       
    }
     //setter for id

   //parameterised constructor
    Student(int name){
        this->name=name;
    }
    Student(int name,int age){
        this->name=name;
        this->age= age;
    }

    //copy constructor
    // Student (Student &temp){
    //     cout<<"copy constructor called"<<endl;
    //     this->name=temp.name;
    //     this->age=temp.age;
    // }
    //copy constructor for deep copy
    // Student(Student &temp){
    //     char*ch= new char[strelen(temp.id)];
    //     strcpy(ch,temp.id);
    //     this->id=ch;

void setid(char id[])
{
    strcpy(this->id,id);
}

    //pass by reffrence because in pass by value copy is made and it will get stuck in infinite loop.calling copy constructor again and again
~Student(){
    cout<<"destructor called"<<endl;
}

};
int main(){
    //static
    // Student a;
    // a.name=1;
    // a.age=1;
    // Student rj(0);
    // Student jh(0,0);
    // Student R(1,3);
    // R.print();
    // Student S(R);
    // S.print();


    //dynamic
    // Student *b=new Student;
    // Student *rjj=new Student(0);
    // Student *th =new Student(0,0);
    // b->age;
    // b->name;
    // (*b).name;
    // (*b).age;
    // cout<<b->gethealth();
    // b->sethealth(5);
    // cout<<b->gethealth();

    Student hero;
    hero.sethealth(0);
    cout<<hero.gethealth()<<" hero  gethealth called"<<endl;
    hero.setage(1);
   cout<< hero.getage()<<" hero  getage called"<<endl;
    char id[100]= "abcde";
    hero.setid(id);
    cout<<hero.id<<endl;
    Student hero1(hero);
    hero1.print();
    hero.age=20;
    hero.print();
    hero1.print();

    //for the hero object id is a pointer to a charachter array. so hero stores address to that array in id=new char[200],, shallow copy,
    //  so that address gets copied in hero1 , whereas variables such as age and health are not pointers so they are copied via deep copy  
    hero.id[0]='t';
    hero.print();
    hero1.print();
    hero1.id[0]='y';
    hero1.print();
    hero.print();
    Student *c = new Student;
    delete c;


}
//if any constructor is made , parameterised and no default then automatic constructor does not exist and object cant be created without any parameter in case a parameterised constructor is made. copy constructor does not get overwritten untill its written by programmer.
