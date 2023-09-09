
//1
// #include <iostream>

// using namespace std;

// int main(){
//     int n = 0;
//     int F1=1;
//     int F2=1;
//     int k=0;

//     cout<< " Введите n ";
//     cin>> n;
    
//     for (int i=0;i<n-2;i++){
//         k=F2;
//         F2=F1+F2;
//         F1=k;
//     }
//     cout<< F2;
// }

//2

// #include <iostream>
// #include <vector>
// #include <string>
// using namespace std;

// int main(){
//     string n="";
//     cout<<" введите число "<< endl;
//     cin>>n;
//     for (int i =n.length();i>-1;i--){
//         cout<< n[i];
//     }
// }


//3

// #include <iostream>
// #include <vector>
// #include <string>
// #include <cmath>
// using namespace std;

// int main(){
//     int n=0;
//     int m=0;
//     cout<<" введите число "<< endl;
//     cin>>n;
//     for (int i =2;i<= pow(n,0.5);i++){
//         if( n%i==0){
//             cout<< " Число не является простым ";
//             m=0;
//             break;
//         }
//         else{
//             m=1;
//         }
//     }
//     if ((m=1) or (n =1) or (n=2)){
//         cout<< " Число простое ";
//     }
// }


//4.1


// #include <iostream>
// #include <vector>
// #include <string>
// #include <cmath>
// using namespace std;

// int main(){
//     float sum=1;
//     float fact=1;
//     for (int i =1;i<10;i++){
//         fact=1;
//         for (int j =1;j<=2*i;j++){
//             fact = fact*j;
            
//         }


//         sum = sum + 1/(fact);
//         cout<< sum- ((exp(1)+ pow(exp(1),-1))/2)<<endl;
        
//     }


// }

//4.2

// #include <iostream>
// #include <vector>
// #include <string>
// #include <cmath>
// using namespace std;

// int main(){
//     float sum=1;
//     for (int k=1;k<1000;k++){
//         sum=sum*4*k*k/(4*k*k-1);
//         cout<< sum - (M_PI)/2<<endl;
//     }
    

// }


//4.3

#include <iostream>
#include <vector>
#include <string>
#include <cmath>
using namespace std;

int factorial(int fact){
    int frog =1;

    for( int i =1;i<=fact;i++){
        frog=frog*i;

    }
    return frog;
}
int main(){
    float e=1;
    float fact=1;
    float n=0;
    for (int k=1;k<100;k++){
        fact=factorial(k);
        

        n=1/float(k);
     
        e=k/pow(fact,n);
        
        cout<< e - exp(1)<<endl;
        
    }
    

}
