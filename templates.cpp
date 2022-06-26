#include <iostream>
#include <conio.h>

using namespace std;


template <class TYPE>
TYPE func(TYPE a);

struct clients
{
    int id;
    string name;
    int age;
};

int main() {
    
    clients my_client[10];

    cout << "Enter the customer id: ";
    cin >> my_client[0].id;
    cout << "Enter the customer name: ";
    cin >> my_client[0].name;
    cout << "Enter the customer age: ";
    cin >> my_client[0].age;

    cout << " The customer id is: " << my_client[0].id << endl;
    cout << " The customer name is: "<< my_client[0].name << endl;
    cout << " The customer age is: " << my_client[0].age << endl;

    cout << func(12);

    return 0;
}

template <class TYPE> 
TYPE func(TYPE a) {

    if(typeid(a).name() == typeid(int).name()){
        cout << "Inteiro";
    }

    if(typeid(a).name() == typeid(double).name()) {
        cout << "Double";
    } 

    return a + 1;
}

