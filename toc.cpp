#include <iostream>
using namespace std;
class Employee {
   public:
       int id;    
       string name;
       float salary;


         Employee()    // Default Constructor
        {    
            cout<<"Default Constructor Invoked"<<endl;    
        }    



          ~Employee()  // Destructor   
        {    
            cout<<"Destructor Invoked"<<endl;    
        }  

          Employee(Employee &e)   /*Copy constructor */
          {
         id = e.id;
         name = e.name;
         salary=e.salary;
         }

        Employee(int i,string n){
            id=i;                   // For constuctor overloading
            name=id;
        }


       Employee(int i, string n, float s)  // Parameterized constructor
        {  
            id = i;  
            name = n;  
            salary = s;
        }  
       void display()  
        {  
            cout<<id<<"  "<<name<<"  "<<salary<<endl;  
        }  
};
int main(void) {
    Employee e1 =Employee(101, "Sonoo", 890000); //creating an object of Employee 
    Employee e2=Employee(102, "Nakul", 59000); 
    e1.display();  
    e2.display();  
    return 0;
}