#include <iostream>
#include<string>
#include<vector>

#include "Person.h"


using namespace std;

template<typename T>
void printTallerPerson(T a, T b) {
    if(a>b) {
    cout <<a.getName()<< " is taller"<< endl;
    }
    else {
        cout <<b.getName()<< " is taller"<< endl;
    }
}

int main() {

    
    int menu = 1;
    int subMenu = 0;
    int subMenuOption = 0;

    vector <Person>  people = { 
        Person ( "Sylvie",22,1.58),
        Person ("Luis",23,1.80),
        Person ("Joao",26,1.90),
        Person ("Vinicius",20,1.72)
    };

    
   

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
            cout << "1 - Sylvie"<<endl;
            cout << "2 - Luis"<<endl;
            cout << "3 - Joao"<<endl;
            cout << "4 - Vinicius"<<endl;
            cin>>subMenu;
            cout << "avaliable options to compare to:" << endl;
            switch (subMenu)
            {
            case 1:
                cout << "2 - Luis"<<endl;
                cout << "3 - Joao"<<endl;
                cout << "4 - Vinicius"<<endl;
                cin>>subMenuOption;
                printTallerPerson(people[0], people[subMenuOption - 1]); 
            break;
            case 2:
                cout << "1 - Sylvie"<<endl;
                cout << "3 - Joao"<<endl;
                cout << "4 - Vinicius"<<endl;
                cin>>subMenuOption;
                printTallerPerson(people[1], people[subMenuOption - 1]); 
            break;
            case 3:
                cout << "1 - Sylvie"<<endl;
                cout << "2 - Luis"<<endl;
                cout << "4 - Vinicius"<<endl;
                cin>>subMenuOption;
                printTallerPerson(people[2], people[subMenuOption - 1]);
            break;      
            case 4:
                cout << "1 - Sylvie"<<endl;
                cout << "2 - Luis"<<endl;
                cout << "3 - Joao"<<endl;
                cin>>subMenuOption;
                printTallerPerson(people[3], people[subMenuOption - 1]); 
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