// find time that after one second

#include <stdio.h>

struct time {
    int hour, minutes, seconds;
};

int main() {
    struct time timeUpdate (struct time now);
    struct time currentTime, nextTime;

    printf("Enter the time (hh:mm:ss) : ");
    scanf("%i:%i:%i", &currentTime.hour, &currentTime.minutes, &currentTime.seconds);

    nextTime = timeUpdate(currentTime);

    printf("Updated time is %.2i:%.2i:%.2i\n", nextTime.hour, nextTime.minutes, nextTime.seconds);

    return 0;
}


// add one second at input time
struct time timeUpdate(struct time now) {
    now.seconds++;
    
    if (now.seconds == 60) {
        now.seconds = 0;
        now.minutes++;

        if (now.minutes == 60) {
            now.minutes = 0;
            now.hour++;

            if (now.hour == 24) {
                now.hour = 0;
            }
        }
    }

    return now;
}
