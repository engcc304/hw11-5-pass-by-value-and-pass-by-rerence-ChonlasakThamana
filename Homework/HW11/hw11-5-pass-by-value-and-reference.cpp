/*
    จากชุดข้อมูลต่อไปนี้ จงเขียนฟังก์ชันเมื่อหาค่ามากที่สุดภายในอาเรย์ โดยที่
        ฟังก์ชันแรก ให้สร้างฟังก์ชันแบบ Pass by value เพื่อหาค่าความสูงที่สุดในอาเรย์ Height
        ฟังก์ชันสอง ให้สร้างฟังก์ชันแบบ Pass by reference เพื่อหาค่าอายุที่มากที่สุดในอาเรย์ Age

    int Height[10] = { 159, 168, 191, 188, 154, 152, 167, 165, 178, 177 } ;
    int Age[10] = { 18, 19, 18, 17, 16, 18, 17, 18, 18, 18 } ;

    Test case:
        
    Output:
        Max Height = 191
        Max Age = 19

*/#include <stdio.h>

void findMaxHeightByValue(int Height[], int size) {
    int max = Height[0];
    for (int i = 1; i < size; i++) {
        if (Height[i] > max) {
            max = Height[i];
        }
    }
    printf("Max Height = %d\n", max);
}

void findMaxAgeByReference(int Age[], int size, int *maxAge) {
    *maxAge = Age[0];
    for (int i = 1; i < size; i++) {
        if (Age[i] > *maxAge) {
            *maxAge = Age[i];
        }
    }
}

int main() {
    int Height[10] = { 159, 168, 191, 188, 154, 152, 167, 165, 178, 177 };
    int Age[10] = { 18, 19, 18, 17, 16, 18, 17, 18, 18, 18 };
    
    int maxAge; // สร้างตัวแปรเพื่อเก็บค่าอายุสูงสุด
    
    findMaxHeightByValue(Height, 10);
    findMaxAgeByReference(Age, 10, &maxAge);
    
    printf("Max Age = %d\n", maxAge);
    
    return 0;
}


