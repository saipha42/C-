#include<iostream>
#include<string>

using namespace std;

int main() {

    string p1="";
    string p2="";

    cout<<"Enter palyer 1 name :";
    getline(cin, p1);
    cout<<"Enter palyer 2 name : ";
    getline(cin, p2);


    string longest_string = p1;

    if (p1.length() < p2.length()){
        longest_string = p2;
    }

    string row1= "+"+string( longest_string.length() +2,'=')+"+";
    string row2 = "|" + string(longest_string.length()+2, ' ') + "|";
    string row_p1 ="| " + p1+ string(( p1.length() < p2.length() ? (p2.length() - p1.length()) : 0), ' ') +" |";
    string row_p2 = "| "+ p2 + string(( p2.length() < p1.length() ? (p1.length() - p2.length()) : 0), ' ') +" |";



    cout<<row1<<endl;
    cout<<row2<<endl;
    cout<<row_p1<<endl;
    cout<<row2<<endl;
    cout<<row1<<endl;
    cout<<row2<<endl;
    cout<<row_p2<<endl;
    cout<<row2<<endl;
    cout<<row1<<endl;


    return 0;
}