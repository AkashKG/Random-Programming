#include<iostream>
#include<cstring>
using namespace std;

int main(){
    const int len = 3;
    int arr[len][len] = {
                        {
                            1,0,1
                        },{
                            0,1,1
                        },{
                            1,1,1
                        }
                    };
    /*
        Take additional Row & Col
    */

    bool row[len]={false}, col[len]={false}; /*optimized space | only row and col position needed.*/
    for(int i=0;i<len;i++){
        for(int j=0;j<len;j++){
            if(!arr[i][j]){                  /*If it is found to be 0*/
                row[i]=true;
                col[i]=true;
            }
        }
    }

    for(int i=0;i<len;i++){
        for(int j=0;j<len;j++){
            if(row[i]||col[j]){             /*Operation*/
                arr[i][j]=0;
            }
        }
    }

    for(int i=0;i<len;i++){
        for(int j=0;j<len;j++){
            cout<<arr[i][j]<< " ";
        }
        cout<<"\n";
    }
}
