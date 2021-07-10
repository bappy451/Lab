#include<bits/stdc++.h>
using namespace std;

struct emplyee
{
    string name;
    int age;
    double salary;
}typedef emp;

const int MAX = 1000;
emp emplyee_arr[MAX];
int added = 0;

void read_emp()
{
    cout<<"Enter name, age, salary for employee: ";
    cin>>emplyee_arr[added].name>>emplyee_arr[added].age>>emplyee_arr[added].salary;
    added++;
}

void print_emp()
{
    for(int i=0; i<added; i++){
        emp e = emplyee_arr[i];
        cout<<"Name: "<<e.name<<", Age: "<<e.age<<", Salary: "<<e.salary<<endl;
    }
}

void read_emp_o(emp &e)
{
    cout<<"Enter name, age, salary for employee: ";
    cin>>e.name>>e.age>>e.salary;
}

void printE(emp &e)
{
    cout<<"Name: "<<e.name<<", Age: "<<e.age<<", Salary: "<<e.salary<<endl;
}

void print_emp_o()
{
    for(int i=0; i<added; i++)
        printE(emplyee_arr[i]);
}

int main()
{
    emp first {"x", 10, 20};
    cout<<first.name<<endl;
    emplyee_arr[added++] = first;

    read_emp();
    print_emp();

    read_emp_o(emplyee_arr[added++]);
    print_emp_o();

    return 0;
}


