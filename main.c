#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n_d, n_m, n_y;
    int dd1 = 24;
    int mm1 = 7;
    int yy1 = 2024;
    int dd2, mm2, yy2;
    printf("Enter the day 1 - 31: ");
    scanf("%d", &dd2);
    printf("Enter the month 1 - 12: ");
    scanf("%d", &mm2);
    printf("Enter the year 0000: ");
    scanf("%d", &yy2);


    while(mm2 < 1 || mm2 > 12 || yy2 < 1 || dd2 < 1 || dd2 > 31 || (mm2 == 2 && dd2 > 29)){
        printf("Invalid, Please enter a correct date! \n");
        printf("Enter the day 1 - 31: ");
        scanf("%d", &dd2);
        printf("Enter the month 1 - 12: ");
        scanf("%d", &mm2);
        printf("Enter the year 0000: ");
        scanf("%d", &yy2);
    }
    while(yy2 > yy1){
        printf("Welcome Future Person!");
        break;
    }


    if(mm1 - mm2 < 0){
        n_y = (yy1 - yy2) - 1;
        if (dd1 - dd2 < 0){
            n_m = 12 + (mm1 - mm2) - 1;
            if (n_m >= 12){
                n_y += 1;
                n_m -= 12;
            }
            if(mm2 % 2 != 0){
                n_d = 31 + (dd1 - dd2);
                printf("%d Years, %d Months %d Days", n_y, n_m, n_d);
            }
            else if(mm2 % 2 == 0 && mm2 != 2){
                n_d = 30 + (dd1 - dd2);
                printf("%d Years, %d Months %d Days", n_y, n_m, n_d);
            }
            else if(mm2 % 2 != 0 && mm2 == 2){
                n_d = 29 + (dd1 - dd2);

                printf("%d Years, %d Months %d Days", n_y, n_m, n_d);
            }
        }
        if(dd1 - dd2 >= 0){
            n_m = 12 + (mm1 - mm2);
            if (n_m >= 12){
                n_y += 1;
                n_m -= 12;

            }
            if(mm2 % 2 != 0 ){
                n_d = 31 - (31 - (dd1 - dd2));
                printf("%d Years, %d Months %d Days", n_y, n_m, n_d);
            }
            else if(mm2 % 2 == 0 && mm2 != 2){
                n_d = 30 - (30 - (dd1 - dd2));
                printf("%d Years, %d Months %d Days", n_y, n_m, n_d);
            }
            else if(mm2 % 2 == 0 && mm2 == 2){
                n_d = 29 - (29 - (dd1 - dd2));
                printf("%d Years, %d Months %d Days", n_y, n_m, n_d);
            }
        }
    }
    if(mm1 - mm2 >= 0){
        n_y = (yy1 - yy2) - 1;
        if (dd1 - dd2 < 0){
            n_m = 12 + (mm1 - mm2) - 1;
            if (n_m >= 12){
                n_y += 1;
                n_m -= 12;
            }
            if(mm2 % 2 != 0){
                n_d = 31 + (dd1 - dd2);
                printf("%d Years, %d Months %d Days", n_y, n_m, n_d);
            }
            else if(mm2 % 2 == 0 && mm2 != 2){
                n_d = 30 + (dd1 - dd2);
                printf("%d Years, %d Months %d Days", n_y, n_m, n_d);
            }
            else if(mm2 % 2 != 0 && mm2 == 2){
                n_d = 29 + (dd1 - dd2);

                printf("%d Years, %d Months %d Days", n_y, n_m, n_d);
            }
        }
        if(dd1 - dd2 >= 0){
            n_m = 12 - (mm1 - mm2);
            if (n_m >= 12){
                n_y += 1;
                n_m -= 12;

            }

            if(mm2 % 2 != 0 ){
                n_d = 31 - (31 - (dd1 - dd2));
                printf("%d Years, %d Months %d Days", n_y, n_m, n_d);
            }
            else if(mm2 % 2 == 0 && mm2 != 2){
                n_d = 30 - (30 - (dd1 - dd2));
                printf("%d Years, %d Months %d Days", n_y, n_m, n_d);
            }
            else if(mm2 % 2 == 0 && mm2 == 2){
                n_d = 29 - (29 - (dd1 - dd2));
                printf("%d Years, %d Months %d Days", n_y, n_m, n_d);
            }
        }
    }
    return 0;
}
