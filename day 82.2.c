#include <stdio.h>
enum TrafficLight {
    RED,    
    YELLOW, 
    GREEN   };

int main() {
    enum TrafficLight light;
    printf("Enter traffic light (0 for RED, 1 for YELLOW, 2 for GREEN): ");
    scanf("%d", &light);
    switch (light) {
        case RED:
            printf("Stop\n");
            break;
        case YELLOW:
            printf("Wait\n");
            break;
        case GREEN:
            printf("Go\n");
            break;
        default:
            printf("Invalid traffic light value\n");
            break;
    }

    return 0;
}
