//STL--> Standard Template Library

#include<iostream>
#include<vector>
#include<deque>
#include<list>
#include<set>
#include<map>
#include<string>
#include<ctime>
#include<unordered_set>
#include<unordered_map>
using namespace std;

struct product{
    int productID;
    string name;
    string category;
};

struct order{
    int orderID;
    int productID;
    int quantity;
    string customerID;
    time_t orderdate;
};

int main(){

    //products!...
    vector<product> products = {
        {101, "Leptop", "Electronics"},
        {102, "SmartPhone", "Electronics"},
        {103, "coffee machine", "Kitchen"},
        {104, "Blender", "Kitchen"},
        {105, "Desk lamp", "Home"},
    };

    // Recent customers!....
    deque<string> recentcustomers = {"C001", "C002", "C003"};
    recentcustomers.push_back("C004");
    recentcustomers.push_front("C005");

    // order History!...
    list<order> orderHistory;
    orderHistory.push_back({1, 101, 1, "C001", time(0)});
    orderHistory.push_back({2, 102, 2, "C002", time(0)});
    orderHistory.push_back({3, 103, 1, "C003", time(0)});

    // categories!....
    set<string> categories;
    for(const auto &product: products){
        categories.insert(product.category);
    }

    // Product stock!....
    map<int, int> productstock ={
        {101, 10},
        {102, 20},
        {103, 15},
        {104, 14},
        {105, 18},
    };

    // Customer orders 
    multimap<string, order> customerorders;
    for(const auto &order: orderHistory){
        customerorders.insert({order.customerID, order});
    }

    // customer Data
    unordered_map<string, string> customerData = {
        {"C001", "Alice"},
        {"C002", "Bob"},
        {"C003", "Max"},
        {"C004", "Nik"},
        {"C005", "Rock"},
    };

    // Unique productIDs
    unordered_set<int> uniqueproductID;
    for(const auto &product: products){
        uniqueproductID.insert(product.productID);

    }

    //-----------MENU------------//
    int choice;
    do
    {
        cout<< "======E-Commerce Menu====="<<endl;
        cout<< "1. Show all Products."<<endl;
        cout<< "2. Show Recent Customers."<<endl;
        cout<< "3. Show Order History."<<endl;
        cout<< "4. show Product categories"<<endl;
        cout<< "5. show product Stock"<<endl;
        cout<< "6. show Customer Orders"<<endl;
        cout<< "7. showcustomer Data"<<endl;
        cout<< "8. show Unique Product IDs"<<endl;
        cout<< "0 EXIT "<<endl;
        cout<< "Enter your choice"<<endl;
        cin>>choice;

        cout<<endl;

        switch (choice)
        {
        case 1:
            cout<<"Product List:\n";
            for(const auto &product: products){
                    cout << product.productID << " - " << product.name << " (" << product.category << ")\n";
                }
            break;
        case 2:
            cout<<"Recent Customers:\n";
            for(const auto &customer: recentcustomers){
                    cout << customer << "  ";
                }
                cout<<endl;
            break;
        case 3:
            cout<<"Order History:\n";
            for(const auto &order: orderHistory){
                   cout << "OrderID: " << order.orderID 
                        << ", ProductID: " << order.productID 
                        << ", Qty: " << order.quantity 
                        << ", CustomerID: " << order.customerID 
                        << ", Date: " << ctime(&order.orderdate);
                }
            break;
        case 4:
            cout<<"Categories:\n";
            for(const auto &category: categories){
                   cout<<category<<" ";
                }
                cout<<endl;
            break;
        case 5:
            cout<<"Product Stock:\n";
            for(const auto &ps: productstock){
                  cout << "ProductID: " << ps.first << " => Stock: " << ps.second << endl;
                }
            break;
        case 6:
            cout<<"Customer Order:\n";
            for(const auto &co: customerorders){
                 cout << co.first << " => OrderID: " << co.second.orderID 
                        << ", ProductID: " << co.second.productID 
                        << ", Qty: " << co.second.quantity << endl;
                }
            break;
        case 7:
            cout<<"Customer Data:\n";
            for(const auto &cd: customerData){
                  cout << cd.first << " => " << cd.second << endl;
                }
            break;
        case 8:
            cout<<"Unique Product IDs:\n";
            for(const auto &id: uniqueproductID){
                    cout << id << " ";
            }
            cout<<endl;
            break;
        case 0:
            cout<<"Exit Program..:\n";
            break;

        default:
            cout<<" Invalid Choice, Try Again!";
        }
        
    } while (choice != 0);

    return 0;
}