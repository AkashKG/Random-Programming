#include<iostream>
using namespace std;

typedef struct Point{
    int x, y;
}point;

bool Overlap(point r1_tl, point r1_br, point r2_tl, point r2_br){
    if(r1_br.y > r2_tl.y || r2_br.y>r1_tl.y)
        return false;
    if(r1_br.x < r2_tl.x || r2_br.x <r1_tl.x)
        return false;
    return true;
}

int main(){
    point r1_top_left={0,10};
    point r1_bot_right={10,0};
    point r2_top_left={5,5};
    point r2_bot_right={15,0};
    if(Overlap(r1_top_left, r1_bot_right, r2_top_left, r2_bot_right)){
        cout<<"Overlap";
    }
    else{
        cout<<"Not Overlap";
    }

}
