#include <iostream>
#include <vector>

using namespace std;

void findValueCombination(vector<int>& arrayToCheck, vector<int>& currCombination, int target, int start, int& sum, bool& found) {
    if (sum == target) {
        found = true;
        return;
    }

    for (int i = start; i < arrayToCheck.size(); i++) {
        if (sum + arrayToCheck[i] <= target) {
            sum += arrayToCheck[i];
            currCombination.push_back(arrayToCheck[i]);
            findValueCombination(arrayToCheck, currCombination, target, i+1, sum, found);
            if (found) {
                return;
            }
            sum -= arrayToCheck[i];
            currCombination.pop_back();
        }
    }
}

void printValueCombination(vector<int>& currCombination) {
    for (int i = 0; i < currCombination.size(); i++) {
        cout<<"A"<<"["<<i<<"]"<<"="<<currCombination[i]<<endl;
    }
}

int main() {
    vector<int> A = {2, 50, 8, 3, 7};
    int x = 0;
    int menu =0;

    vector<int> currCombination;
    int sum = 0;
    bool found = false;

    while(menu !=2) {
        cout<<"select an option:"<<endl;
        cout<<"1 -run find combination algorithm:"<<endl;
        cout<<"2-end application:"<<endl;
        cin>>menu;
        cout<<".........................................................."<<endl;
        
        if(menu ==1){
            cout<<"input a value to be used as target value"<<endl;
            cin>>x;
            sum = 0;
            found = false;
            currCombination.clear();
            cout<<".........................................................."<<endl;
            findValueCombination(A, currCombination, x, 0, sum, found);
            

            if (found) {
                cout << "yes" << endl;
                printValueCombination(currCombination);
                cout<<".........................................................."<<endl;
            }
            else {
                cout << "no" << endl;
                
            }

        }

        if(menu ==2){
            cout<<"ended app"<<endl;
            return 0;
        }
    }
    
}
