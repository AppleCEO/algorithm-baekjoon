#include <stdio.h>

int main(){
    int month, day, week;
    scanf("%d %d", &month, &day);
    
    switch(month){
        case 2:
            day += 31;
            break;
        case 3:
            day += 59;
            break;
        case 4:
            day += 90;
            break;
        case 5:
            day += 120;
            break;
        case 6:
            day += 151;
            break;
        case 7:
            day += 181;
            break;
        case 8:
            day += 212;
            break;
        case 9:
            day += 243;
            break;
        case 10:
            day += 273;
            break;
        case 11:
            day += 304;
            break;
        case 12:
            day += 334;
            break;
    }
    
    week = day%7;
    
    switch(week){
        case 0:
            printf("SUN");
            break;
        case 1:
            printf("MON");
            break;
        case 2:
            printf("TUE");
            break;
        case 3:
            printf("WED");
            break;
        case 4:
            printf("THU");
            break;
        case 5:
            printf("FRI");
            break;
        case 6:
            printf("SAT");
            break;
    }
    
    return 0;
}
