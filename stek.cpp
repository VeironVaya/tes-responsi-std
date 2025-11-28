#include "stek.h"

void createStack(Stek &stek){
    top = 0;
}
Infotype inputData(){
    Infotype data;
    cout << "pid:";
    cin >> data.pid;
    cout << "name:";
    cin >> data.name;
    cout << "size:";
    cin >> pid.size;
    return data;
}
void push(Stek &stek,Infotype data)
{
    if (stek.stekArr[0] == nullptr) {
        stek.stekArr[0] = data;
        stek.top = 1;
    } else {
        int i = stek.top;
        while(i >= 0){
            stek.arr[i+1] = stek.arr[i];
            i--;
        }
        stek.top = stek.top + 1;
        stek.arr[0] = data;
    }


}
void pop(Stek &stek);

void printStack(Stek &stek){


}
