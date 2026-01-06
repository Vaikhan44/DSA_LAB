#include <stdio.h>
struct Student{
    char name[50];
    int roll_no;
    float marks;
};
int main(){
    int age=17;
    int height = 185;
    int number[4] = {10,20,30,40};
    char city[20] = "New York";
    struct Student student1 = {"Alice",101,89.5};
    printf("primitive data types addresses:\n");
    printf("age: %p\n",&age);
    printf("height: %p\n",&height);
    printf("city array: %p\n",city);
    printf("non primitive data types :\n");
    for(int i=0;i<4;i++){
        printf("number[%d]: %d\n",i,number[i]);
    printf("\n");
    printf("student1 name: %d\n",student1.name);
    printf("student1 roll_no: %d\n",student1.roll_no);
    printf("student1 marks: %d\n",student1.marks);
    return 0;
    }
    
    
}