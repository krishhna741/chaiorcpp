#include <iostream>
#include<vector>
using namespace std;

class chai
{
public:
    // data members(attributes)
    string teaname;             // name oa the tea.
    int serving;                // number of serving.
    vector<string> ingredients; // list of ingredient for the tea ;

    // member function..
    void displaychaidetails()
    {
        cout << "teaname : " << teaname << endl;
        cout << "serving : " << serving << endl;
        cout << "ingredients : " << endl;
        for (string ingre : ingredients)
        {
            cout << ingre << "  \n";
        }
    }
};

int
main()
{
   chai chaiOne;
   chaiOne.teaname = "lemon tea";
   chaiOne.serving = 2 ;
    chaiOne.ingredients = {"water", "lemon", "tealeaves", "honey"};
    
    chai chaitwo;
    chaitwo.teaname = "Msala tea";
    chaitwo.serving = 5 ;
     chaitwo.ingredients = {"water", "Msala", "tealeaves", "honey"};
    

   chaiOne.displaychaidetails();

   chaitwo.displaychaidetails();
   return 0;
}