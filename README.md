ข้อ (4)  SELECT * FROM Customers

        WHERE Used > 500000;

ข้อ (5)  SELECT * FROM Customers

INNER JOIN Order ON Customers.ID = Order.ID;

ข้อ (6) 6.1 https://ibb.co/YQF7gv2

ข้อ (7) ใช้ .c 

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

ข้อ (8)
#include <stdio.h>

int main() {

    int rows, i, j;
    
    printf("Enter number of rows: ");
    
    scanf("%d", &rows);
    
    for (i = 1; i <= rows; i++) {
    
        for (j = 1; j < i; j++) {
        
            printf(" ");
        }
        for (j = i; j <= rows; j++) {
        
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}


ข้อ 9 - 12 ![image] https://i.ibb.co/fxZXJrs/IMG-3563.jpg
