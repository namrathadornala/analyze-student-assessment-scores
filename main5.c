#include <stdio.h>

int main() {
    int n, i;
    char name[10][50];  
    int marks[10];

    printf("Enter number of students: ");
    scanf("%d", &n);

    for(i = 0; i < n; i++) {
        printf("\nEnter name of student %d: ", i+1);
        scanf("%s", name[i]);
        printf("Enter marks of %s: ", name[i]);
        scanf("%d", &marks[i]);
    }

    printf("\n--- Student Results ---\n");
    for(i = 0; i < n; i++) {
        printf("%s: %d - ", name[i], marks[i]);
        if(marks[i] >= 35)
            printf("Pass\n");
        else
            printf("Fail\n");
    }

    return 0;
}

