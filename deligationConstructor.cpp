#include<iostream>
#include<vector>
using namespace std;

class chai{
    public:
         string teaname;
         int servings;
         vector<string>ingredients;

         //deligation constructor...
         chai(string name):chai(name, 1, {"water", "milk", "Tea leave"}){}

         //main constructor...
         chai(string name, int serve, vector<string>ingre){
            teaname= name;
            servings= serve;
            ingredients=ingre;
        
        cout<<"main constructor called:"<<endl;
         }

         void displaychaidetails()
       {
        cout << "teaname : " << teaname << endl;
        cout << "servings : " << servings << endl;
        cout << "ingredients : ";
        for (string ingre : ingredients){
            cout << ingre << "  ";
        }
        cout<<endl;
       }
};
int main()
{
chai quickchai("Quick chai");
quickchai.displaychaidetails();
return 0;
}