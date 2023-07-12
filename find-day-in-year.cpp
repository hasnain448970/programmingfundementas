#include <stdio.h>

int main() {
    int year, month, date, days = 0;
    printf("Year: ");
    scanf("%d", &year);
    printf("Month: ");
    scanf("%d", &month);
    printf("Date: ");
    scanf("%d", &date);

    switch (month - 1) {
        case 11:
            days += 30;
        case 10:
            days += 31;
        case 9:
            days += 30;
        case 8:
            days += 31;
        case 7:
            days += 31;
        case 6:
            days += 30;
        case 5:
            days += 31;
        case 4:
            days += 30;
        case 3:
            days += 31;
        case 2:
            days += 28;
            if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0) {
                days++;
            }
        case 1:
            days += 31;
            default:
    			days += date;
    }
    
	printf("Today is %d th day of year.\n", days);

    return 0;
}
