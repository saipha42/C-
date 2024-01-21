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

    string row1(( ( p1.length())+4+(p2.length())+3 ),'*');
    string row2_1_space( (p1.length())+2,' ');
    string row2_2_space( p2.length()+2, ' ');
    string row2 = "*" + row2_1_space + "*"+ row2_2_space+"*";
    string row3 ="* "+ p1 + " * "+p2+" *";


    cout<<row1<<endl;
    cout<<row2<<endl;
    cout<<row3<<endl;
    cout<<row2<<endl;
    cout<<row1<<endl;


    return 0;
}