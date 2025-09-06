#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <numeric>
#include <iterator>

using namespace std;

struct Employee {
    int id;
    string name;
    double salary;
};

void  displayEmployee(const Employee& emp){
    cout << "ID: " << emp.id << " , Name: " << emp.name << " , Salary: " << emp.salary << endl;
}

int main(){

    vector <Employee> employee = {
        {101,"shinu",100000},
        {102,"daksh",200000},
        {103,"kabish",300000},
        {104,"pranav",400000},
        {105,"soumya",500000},
    };

    sort(employee.begin(), employee.end(), [](const Employee& a, const Employee& b){
        return a.salary > b.salary;
    });

    cout << "Sorted Employee List:" << endl;

    for_each(employee.begin(), employee.end(), displayEmployee);

    vector<Employee> highEarners;

    copy_if(employee.begin(), employee.end(), back_inserter(highEarners), [](const Employee& e){
        return e.salary > 400000;
    });

    cout << "\nHigh Earners List:" << endl;
    for_each(highEarners.begin(), highEarners.end(), displayEmployee);

    double totalSalary = accumulate(employee.begin(),  employee.end(), 0.0,[](double sum , const Employee& e){
        return sum + e.salary;
    });

    double averageSalary = totalSalary / employee.size();
    
    auto highestPaid = max_element(employee.begin(), employee.end(), [](const Employee& a, const Employee& b){
        return a.salary < b.salary;
    });
    
    return 0;
}