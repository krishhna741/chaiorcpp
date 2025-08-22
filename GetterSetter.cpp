#include<iostream>
#include<vector>
using namespace std;

class chai{
    private:
         string teaname;
         int servings;
         vector<string>ingredients;

    public:
         chai(){
            teaname = "'unknow tea";
            servings = 1;
            ingredients = {"water", "Tea leaves", "Milk"};
         }
         
         //parameterized constructor...
         chai(string name, int serve, vector<string>ingre){
            teaname = name;
            servings = serve;
            ingredients = ingre;
         }

         //Getter!..for Tea name..
         string getTeaName(){
            return teaname;
         }

         //Setter!..for Tea name..
         void setTeaName(string name){

            teaname = name;
         }

         //Getter!..for servings..
         int getservings(){
             return servings;
            }
            
            //Setter!..for servings..
            void setservings(int serve){
                servings = serve;
            }

         //Getter!..for Ingredients..
         vector<string>getingredients(){
            return ingredients;
         }

         //Setter!..for Ingredients..
          void setingredients(vector<string>ingre){
              ingredients = ingre;
          }

     void displaychaidetails()
       {
        cout << "teaname : " << teaname << endl;
        cout << "servings : " << servings << endl;
        cout << "ingredients : ";
        for (string ingre : ingredients)
        {
            cout << ingre << "  ";
        }
        cout<<endl;
       }
    };




int main()
{
    chai chai;
    chai.setTeaName("Ginger Tea");

return 0;
}