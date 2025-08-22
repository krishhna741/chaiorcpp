//Employ Management System....
#include<iostream>
#include<vector>
#include<algorithm>
#include<numeric>
#include<iterator>
#include<string>

using namespace std;

struct employee{
    int id;
    string name;
    double salary;
};

void displayemployee(const employee& emp){
    cout<<" ID: "<<emp.id<<" , name: "<<emp.name<<" , salary: $"<<emp.salary<<endl;
}

int main(){

    vector<employee> employees={
        {101, "John", 100000},
        {102, "Soal", 400000},
        {103, "Max", 700000},
        {104, "Roan", 400000},
        {105, "Boob", 300000},
    };

    // Sort by salary descending...
    sort(employees.begin(), employees.end(), [](const employee& e1, const employee& e2){
        return e1.salary > e2.salary;
    });

    cout<<" Employee sorted by salary --> Highest to lowest\n";
    for_each(employees.begin(), employees.end(), displayemployee); 
    
    // High Earners...
    vector<employee> highEarners;
     copy_if(
        employees.begin(),
        employees.end(),
        back_inserter(highEarners),
        [](const employee& e){
            return e.salary > 500000;
        });
        
        cout<<" Employee who are high Earner\n";
        for_each(highEarners.begin(), highEarners.end(), displayemployee); 

        // Total & Average Salary.....
        double totalsalary = accumulate(employees.begin(), employees.end(), 0.0, 
        [](double sum, const employee& e){ 
            return sum + e.salary;
        });

        double avgsalary = totalsalary / employees.size();
         cout << "\nTotal Salary: $" << totalsalary << endl;
         cout << "Average Salary: $" << avgsalary << endl;

         // Highest Paid Employee...
        auto highestpaid = max_element(employees.begin(), employees.end(), [](const employee& e1, const employee& e2){
            return e1.salary < e2.salary;
        });

         if(highestpaid != employees.end()){
        cout << "\nHighest Paid Employee:\n";
        displayemployee(*highestpaid);
    }
        
    return 0;
}
