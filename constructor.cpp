// Constructor....
//1.default constructor.

/*#include<iostream>
#include<vector>
using namespace std;

class chai{
public:
    string teaname;
    int serving;
    vector<string>ingredient;

    //default constructor..
    chai(){
        teaname = "lemon tea";
        serving = 1;
        ingredient = {"water", "lemon", "tealeaves", "honey"};
        cout<<"Constructor called"<<endl;
    }


   void displaychaidetails()
    {
        cout << "teaname : " << teaname << endl;
        cout << "serving : " << serving << endl;
        cout << "ingredients : " << endl;
        for (string ingre : ingredient)
        {
            cout << ingre << "  ";
        }
    }
};

int main()
{
  chai defaultchai;
  defaultchai.displaychaidetails();

return 0;
}
*/

//2.Parameter constructor
/*
#include<iostream>
#include<vector>
#include<string>
using namespace std;

class chai{
public:
    string teaname;
    int servings;
    vector<string>ingredients;

    //parameter constructor..
    chai(string name, int serve, vector<string>ingre){
        teaname = name;
        servings = serve;
        ingredients = ingre;
        cout<<"parameter Constructor called"<<endl; 
    }


   void displaychaidetails()
    {
        cout << "teaname : " << teaname << endl;
        cout << "servings : " << servings << endl;
        cout << "ingredients : " << endl;
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

return 0;
}
*/

