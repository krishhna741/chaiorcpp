#include<iostream>
#include<vector>
#include<string>
using namespace std;

class chai{
public:
    string* teaname;
    int servings;
    vector<string>ingredients;

    //parameter constructor..
    chai(string name, int serve, vector<string>ingre){
        teaname = new string(name);
        servings = serve;
        ingredients = ingre;
        cout<<"parameter Constructor called"<<endl; 
    }
    
    //copy constructor..
    chai(chai& other){
        teaname = new string(*other.teaname);
        servings = other.servings;
        ingredients = other.ingredients;
        cout<<"copy Constructor called"<<endl; 
    }

~chai(){
    delete teaname;
    cout<<"destructor called"<<endl;
}


   void displaychaidetails()
    {
        cout << "teaname : " << *teaname << endl;
        cout << "servings : " << servings << endl;
        cout << "ingredients : ";
        for (string ingre : ingredients)
        {
            cout << ingre << "  ";
        }
    }
};

int main()
{
  chai lemontea("Lemon Tea", 3, {"water", "lemon", "tealeaves", "honey"});
  lemontea.displaychaidetails();

// copy the object.
chai copiedchai = lemontea;
copiedchai.displaychaidetails();

*lemontea.teaname = "modifed lemon tea";

cout<<"lemon tea----"<<endl;
lemontea.displaychaidetails();
cout<<"copied tea----"<<endl;
copiedchai.displaychaidetails();  

return 0;
}