#include <iostream>
#include<string>
#include<vector>

#include "Person.h"


using namespace std;

template <typename T>

Person print(T object) {
   cout<<object<<endl;
}



int main() {

    
    int menu = 1;
    int subMenu = 0;
    int subMenuOption = 0;

    
    Person person1( "Sylvie",22,1.58);
    Person person2("Luis",23,1.80);

    while (menu != 3) {
        cout << "................................." << endl;
        cout << "choose one of the following options:" << endl;
        cout << "1 - compare heights" << endl;
        cout << "2 - compare ages" << endl; 
        cout << "3 - end application" << endl;
        cin >> menu;

        if (menu == 1) {
            cout << "................................." << endl;
            cout << "avaliable options to compare:" << endl;
            cout << "1 - person 1"<<endl;
            cout << "2 - person 2"<<endl;
            cin>>subMenu;
            cout << "avaliable options to compare to:" << endl;
            switch (subMenu)
            {
            case 1:
                cout << "2 - person 2"<<endl;
                cin>>subMenuOption;
                if(person1 > person2) {
                    print(person1)
                }else {
                      print(person2)  
                }
            break;
             case 2:
                cout << "1 - person 1"<<endl;
                cin>>subMenuOption;
                if(person2 > person1) {
                    print(person2)
                }else {
                      print(person1)  
                }
            break;
            default:
            break;
            }
            subMenu=0;
            subMenuOption=0;
        }

        if (menu == 2) {
            cout << "................................." << endl;
        }

        if (menu == 3) {
            cout << "................................." << endl;
            cout << "ended program" << endl;
            return 0;
        }

        menu = 0;
    }

}