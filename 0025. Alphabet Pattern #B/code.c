#include<stdio.h>

int main(){

    int height, width;
    
    printf("\nEnter the Height of B :");
    scanf("%d", &height);

    width = (2 * height) - 1;
    


    int i, j, half = (height / 2);
    for (i = 0; i < height; i++) {
        printf("*");
        for (j = 0; j < width; j++) {
            if ((i == 0 || i == height - 1 || i == half)
                && j < (width - 2))
                printf("*");
            else if (j == (width - 2)
                     && !(i == 0 || i == height - 1
                          || i == half))
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }

    printf("\n\n");

    return 0;
}
