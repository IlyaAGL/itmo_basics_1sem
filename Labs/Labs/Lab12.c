#include <stdio.h>
#include <time.h>

int main() {
    FILE* file = fopen("dates.txt", "w");

    time_t now;
    struct tm* date;
    char dateStr[11];

    time(&now);
    date = localtime(&now);

    for (int i = 0; i < 10; i++) {
        date->tm_mday += 1;
        mktime(date);
        strftime(dateStr, 11, "%d.%m.%Y", date);
        fprintf(file, "%s\n", dateStr);
    }

    fclose(file);
    

    return 0;
}
