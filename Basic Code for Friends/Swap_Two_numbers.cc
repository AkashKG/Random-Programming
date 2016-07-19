//Swap two numbers using only two variables;

#include<iostream>
using namespace std;

void swap_1(int &a, int &b){
    a = a ^ b;
    b = a ^ b;
    a = a ^ b;
}

void swap_2(int &a, int &b){
    a = a + b;
    b = a - b;
    a = a - b;
}

void swap_3(int *a, int *b){
    int temp = *a;
    *a = *b;
    *b = temp;
}

void swap_4(int &a, int &b){
    int temp = a;
    a = b;
    b = temp;

}

int main(){
    int a;
    int b;
    cin>>a>>b;
    /* METHOD 1 - Most efficient | Without any extra variable*/
    swap_1(a,b);
    cout<<"\n"<<a<<" "<<b;
    /* METHOD 2 - Efficient | Without any extra variable*/
    swap_2(a,b);//method 2;
    cout<<"\n"<<a<<" "<<b;
    /* METHOD 3 - Least Efficient | uses extra variable & pass by address*/
    swap_3(&a,&b);//method 3;
    cout<<"\n"<<a<<" "<<b;
    /* METHOD 4 - Least Efficient | uses extra variable & pass by reference*/
    swap_4(a,b);//method 4;
    cout<<"\n"<<a<<" "<<b;
    return 0;
}

/*NOTE: In pass by reference an Alias is created of the same variable. The changes in the reference variable is reflected in the passed variable. This
does not happen in pass by value. A separate copy is created in pass by value.

Probable Questions.

1. What is Pass by reference?
Answer:

2. What is pass by value?
Answer:

3. What is pass by address?
Answer:

4. What is a pointer?
Answer:
*/
