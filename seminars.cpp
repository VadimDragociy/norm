
//1
#include <iostream>

using namespace std;

int main(){
    int n = 0;
    int F1=1;
    int F2=1;
    int k=0;

    cout<< " Введите n ";
    cin>> n;
    
    for (int i=0;i<n-2;i++){
        k=F2;
        F2=F1+F2;
        F1=k;
    }
    cout<< F2;
}

