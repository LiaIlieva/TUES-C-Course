#include <stdio.h>

int changeLights(unsigned char lights, char op) {
    char lightToSwitchOn;
    if (op == '1') {
        printf("Enter the number of the light which you want to switch on (1-8): ");
        scanf(" %c", &lightToSwitchOn);
        getchar();

        switch (lightToSwitchOn) {
            case '1':
                lights ^= (1 << 0);
                break;
            case '2':
                lights ^= (1 << 1);
                break;
            case '3':
                lights ^= (1 << 2);
                break;
            case '4':
                lights ^= (1 << 3);
                break;
            case '5':
                lights ^= (1 << 4);
                break;
            case '6':
                lights ^= (1 << 5);
                break;
            case '7':
                lights ^= (1 << 6);
                break;
            case '8':
                lights ^= (1 << 7);
                break;
            default:
                printf("Invalid light number.\n");
                break;
        }
    } else if (op == '2') {
        printf("The light is on in rooms: ");
        int size = sizeof(lights) * 8; 
        for (int i = 0; i < size; i++) {
            if((lights >> i) & 1){
                printf("%d ", i + 1);
            }
        }
        printf("\n");
    } 
    return lights;
}

// Function to get user option
char getOption() {
    char op;
    printf("Choose an option: Switch lights(1), Print state(2), or Exit(3): ");
    scanf(" %c", &op); 
    getchar(); 
    return op;
}

int main() {
    unsigned char lights = 0;
    char op;
    op = getOption();

    while (op != '3') { 
        
        lights = changeLights(lights, op);
        op = getOption();
    }

    return 0;
}
