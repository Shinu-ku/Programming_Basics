#include<stdio.h>
int main(){
    int std;
    printf ("Enter The number of Students: ");
    scanf("%d", &std);
    int rollno[std];
    char name[std][50];

    for (int i = 0; i < std; i++){
        getchar();
        printf("Enter the Name of Student %d : ",(i+1));
        fgets(name[i],sizeof(name),stdin);
        printf("Enter the Rollno of Student %d : ",(i+1));
        scanf("%d", &rollno[i]);
    }
    printf ("\n List of Students \n");
    for (int i = 0; i < std; i++){
        printf("The Name of Students %d %s : \n",(i+1),name[i]);
        printf("The Rollno of Students %d %d : \n",(i+1),rollno[i]);
    }
    return 0;
}