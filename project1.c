#include <stdio.h>
#include <string.h>
#include <time.h>

typedef struct {
    const char *name;
} Unit;

int main() {
    printf("=============== THIS SEMESTER UNITS ===============\n");

    Unit units[] = {
        {"ELECTRONICS 1"},
        {"MECHATRONICS"},
        {"ANALOGUE ELECTRONICS 2"},
        {"SIGNALS 1"},
        {"ELECTRICAL MACHINES"},
        {"COMPUTER NETWORKS"},
        {"MATHEMATICS 1"},
        {"DISCRETE MATH"},
        {"MATHEMATICS FOR SCIENCE"}
    };

    int total_units = sizeof(units) / sizeof(units[0]);
    int i;

    for (i = 0; i < total_units; i++) {
        printf("%d. %s\n", i + 1, units[i].name);
    }

    char name[50];
    printf("\nEnter your Name: ");
    fgets(name, sizeof(name), stdin);
    name[strcspn(name, "\n")] = '\0';  

    int birth_day, birth_month, birth_year;
    printf("Enter your Date of Birth (DD MM YYYY): ");
    scanf("%d %d %d", &birth_day, &birth_month, &birth_year);

    time_t t = time(NULL);
    struct tm today = *localtime(&t);

    int current_day   = today.tm_mday;
    int current_month = today.tm_mon + 1;
    int current_year  = today.tm_year + 1900;

    int age = current_year - birth_year;
    if (current_month < birth_month ||
       (current_month == birth_month && current_day < birth_day)) {
        age--;
    }

    int fee_payable = 12000, fee_paid;
    printf("Enter fee amount to pay (1 - 12000): ");
    scanf("%d", &fee_paid);

    int fee_bal = fee_payable - fee_paid;

    if (fee_bal >= 5000) {
        printf("\nSorry %s, you must clear your fees before registering.\n", name);
        return 0;  
    }

    int units_reg;
    printf("Enter number of units to register: ");
    scanf("%d", &units_reg);

    printf("\n=============================================================================\n");
    printf("Welcome, %s!\n", name);
    printf("Your Date of Birth: %02d-%02d-%04d\n", birth_day, birth_month, birth_year);
    printf("Today's Date:       %02d-%02d-%04d\n", current_day, current_month, current_year);
    printf("Your Age: %d years old\n", age);
   	if (units_reg == total_units) {
       printf("\n-------Your registration is completed!! You registered for:--------\n");
       	   for (i = 0; i < total_units; i++) {
           	   printf("- %s\n", units[i].name);
        }
    } else {
        printf("\nRegistration failed!!!.You must register all %d units as listed above.\n", total_units);
    }
    printf("=============================================================================\n");

    return 0;
}
