#include <iostream>
#include <vector>

using namespace std;
int m;
int n;
vector <vector <int>> Vec (n, vector <int> (m));

int main(){
    int sum=0;
    int p=1;
    int ili=0;
    int n=0;
    int m=0;
    int swich=0;

    cout<<" Выберите размер "<< endl;
    cout<<" Сначала введите высоту, затем ширину исходной позиции "<< endl;
    cin >> n;
    cin >> m;

    cout<<" Выберите сложность "<< endl;
    cout<<" (Сложность зависит от того, кто ходит первым: Вы или робот) "<< endl;
    cout<<" Введите цифру 1, чтобы ходить первым или введите цифру 2, чтобы ходить вторым "<< endl;

    cin>>swich;




    vector <int> Sum(n,0);

    for (int i =0;i< 3; i++){
        for (int j =0;j<3;j++){
            sum+= Vec[i][j];
            
        }
        Sum[i]=sum;
        cout<< sum<<" - " <<Sum[i]<< endl;
        
        sum=0;
    }

    
    for( int i =0;i< 3;i++){
        for( int j =1;j< Sum[i]+1;j++){
            ili=Sum[i]-j;
            for( int k =0;k< 3;k++){
                if(k!=i){
                    ili= ili^Sum[k];
                }
            }
            cout<<ili<<endl;
            if (ili=0){
                cout<<1;
            }
        }
    }

    

    


}




void vivod(int n,int m){
    for(int i =0;i<n;i++){
        for(int j =0;j<m;j++){
            cout<< Vec[i][j]<<"  ";
        
    }
    cout<< endl;
   
    }

}

void fill(){
    int p=1;
    for(int i =0;i<n;i++){
        for(int j =0;j<p;j++){
            Vec[i][j]=1;
        
    }
    p++;
    }
}




