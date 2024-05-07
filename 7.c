#include <stdio.h>

int Calculate(int x);
int main() {
    int water_tank = 5832;
    float y = Calculate(water_tank);
    printf("จำนวนน้ำที่เหลือในถังหลังจาก 7 วัน: %d ลิตร\n", y);
    return 0;
}

int Calculate(int x){
    int day1, day7, i;
    for(i=1; i<=7; i++){
        day1 = x / 3;
        x -= day1; 
    }
    return x;
}
