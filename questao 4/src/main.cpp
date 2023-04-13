#include <iostream>
#include<string>
#include<vector>

#include "Person.h"


using namespace std;

template <typename T>

Person print(T object) {
   cout<<object<<endl;
   return object;
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
        cout << "1 - compare ages" << endl;
        cout << "2 - edit person entry:" << endl;
        cout << "3 - end application" << endl;
        cin >> menu;
        cout << "................................." << endl;   

        if (menu == 1) {
            cout << "................................." << endl;
            cout << "avaliable options to compare:" << endl;
            person1.printPersonData();
            cout<<"to:"<<endl;
            person2.printPersonData();
            cout << "................................." << endl;
            if(person1>person2) {
                cout<<person1;
            }else {
                cout<<person2;
            }
        }
        if(menu == 2) {
            cout << "avaliable person's data to edit" << endl;
            cout << "1 - "<< person1.getName() << endl;
            cout << "2 - "<< person2.getName() << endl;
            cin>>subMenu;
            cout << "................................." << endl;       
            
            cout << "avaliable options  to edit" << endl;
            cout << "1 - name "<< endl;
            cout << "2 - age" << endl;
            cout << "3 - height" << endl;
            cout << "4 - all of the above" << endl;
            cin>>subMenuOption;
            cout << "................................." << endl;       

            switch (subMenuOption)
            {
                case 1:
                    if(subMenu == 1){
                        person1.setName();
                    }else {
                        person2.setName();
                    }
                break;
                case 2:
                    if(subMenu == 2){
                        person1.setAge();
                    }else {
                        person2.setAge();
                    }
                break;
                case 3:
                    if(subMenu == 3){
                        person1.setHeight();
                    }else {
                        person2.setHeight();
                    }
                break;
                case 4:
                    if(subMenu == 4){
                        person1.setAllInfo();
                    }else {
                        person2.setAllInfo();
                    }
                break;
                efault:
                    cout<< "invalid option, returning to main menu..."<<endl;
                break;
            }
        }
        if (menu == 3){
            cout << "................................." << endl;
            cout << "ended program" << endl;
            return 0;
        }

        menu = 0;
    }

}
