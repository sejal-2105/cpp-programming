#include<iostream>
using namespace std;

int main(){
    int choice;
    cout<<"1.Open account"<<endl<<"2. Close account"<<endl<<"3. Add nominee"<<endl<<"4. Update personal details"<<endl<<"5. exit"<<endl;
    cout<<"Enter choice: ";
    cin>>choice;

    switch (choice){
        case 1:
        cout<<"Your account has been opended.Reach out front desk.";
        break;
        case 2:
        cout<<"Your account has been closed.Reach out front desk.";
        break;
        case 3:
        cout<<"Fill form 2A to add nominee.";
        break;
        case 4:
        cout<<"Fill form 5D to update personal details.";
        break;
        case 5:
        break;
        default:
        cout<<"wrong input";
    }

    return 0;
}