#include<iostream>




using namespace std;

int main() {

    int num=0;

    cout <<"Enter an integer :";
    cin>>num;

    for (int i=1; i<=num; i++){
        cout<< string(i, '*')<<endl;
    }

    for(int i=num-1;i>0; i--){
        cout<<string(i, '*')<<endl;
    }
    return 0;
}