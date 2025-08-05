#include<iostream>
using namespace std;

int main(){
cout<<"Enter a PRN:";
string PRN;
cin >> PRN;
if(PRN.length() != 10) {
cout << "PRN must be exactly 10 characters." << endl;
return 1;
}

cout<<"Reversed PRN:";
for(int i = PRN.length() - 1; i >= 0; --i) {
cout << PRN[i];
}
return 0;
}