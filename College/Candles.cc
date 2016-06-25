/*You are given heights of n candles. First day you lit one candle s Second day you need to lit two candles Third day you need to lit three candles .......... ........
till possible. After lighting candles the height of candles deduced by 1 each day.You can also extinguish any candle you want but only at the end of day.
So you need to tell the maximum number number of days , you can carry on lighting the candles.
 Example : there are three candles of heights {2 , 2 ,2 } Answer : 3 1.You light first candle on day one. heights -> {1,2,2}
2.You light second and third and extinguish first one . heights ->{1, 1,1}
3.You light all the candles. heights -{0,0,0} */

#include<algorithm>
#include<iostream>
using namespace std;

bool anyLeft(int *candles, int day, int len){
    int i=0;
    for(i;i<len-1;i++){
        if(candles[i]!=0)
            break;
    }
    if(i>len-day-1)
        return false;
    return true;
}

void decrementCandles(int *candles,int day, int len){
    for(int i=len-1;i>len-day-1;i--){
        candles[i]--;
    }
}

int main(){
    int *candles, num, day = 0;
    cin>>num;
    candles = new int[num];
    for(int i=0;i<num;i++)
        cin>>candles[i];
    sort(candles+0,candles+num);
    while(anyLeft(candles,day, num)){
        day++;
        decrementCandles(candles, day, num);
        sort(candles+0,candles+num);
    }
    cout<<day;
}
