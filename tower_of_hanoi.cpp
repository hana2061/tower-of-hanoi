#include<iostream>
using namespace std;

void ToH(int n, char S, char A, char D){
    if (n==1)
        {cout<<"move from source "<<S<<" to destination "<<D<<endl;
        return;}
    ToH(n-1,S,D,A);
    cout<<"move from source "<< S << " to destination "<<D<< endl;
    ToH(n-1,A,S,D);
}

int main()
{int N;
cout<<"enter number of rings: ";
cin>>N;
ToH(N,'A','B','C');
return 0;
}
