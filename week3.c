#include<stdio.h>
#include<stdlib.h>
struct student{
    int rollno;
    int age;
    int marks;
    char name[100];
};
int main(){
    int no_stud=0;
    char choice;
    struct student *s=(struct student *)malloc(sizeof(struct student));
    if(s==NULL){
        printf("No memory\n");
        return 1;
    }
    do{
        printf("Name:-");
        scanf("%s",s[no_stud].name);
        printf("Age:-");
        scanf("%d",&s[no_stud].age);
        printf("Roll number:-");
        scanf("%d",&s[no_stud].rollno);
        printf("marks:-");
        scanf("%d",&s[no_stud].marks);
        no_stud++;
        printf("Want to enter next student??(Y/N):-");
        scanf(" %c",&choice);
    }while (choice =='Y' || choice=='y');
    printf("Students with the Quota\n");
    for(int i=0;i<no_stud;i++){
        if(s[i].marks>60 && s[i].marks<=80){
            printf("%s\n",s[i].name);
            printf("%d\n",s[i].rollno);
            printf("%d\n",s[i].marks);
        }
    }
    free(s);
    
    

}