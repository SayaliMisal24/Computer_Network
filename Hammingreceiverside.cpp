#include<iostream>
using namespace std;
int main()
{
    int D[11];
    int C[11];
    int i;
    int k;
    int R1,R2,R3,R4;
    cout<<"Enter the message bits:";
    for (i=0;i<11;i++){
        cin>>D[i];
        }
    for (i=0;i<11;i++){
        C[i]=D[i];
        }
    R1=C[3]^C[2]^C[1]^C[0];
    R2=C[7]^C[6]^C[5]^C[4];
    R3=C[9]^C[8]^C[5]^C[4]^C[1]^C[0];
    R4=C[10]^C[8]^C[6]^C[4]^C[2]^C[0];
    k = 8*R4+4*R3+2*R2+1*R1;
    if (k==0){
        cout<<"No Error";
    }
    else{
        C[11-k]=!C[11-k];
    }
    for (i=0;i<11;i++){
        cout<<C[i];
        }
    return 0;
}
