#include <stdio.h>
#include <stdlib.h>

#define BUFFER_SIZE 5

typedef struct{
    int buffer[BUFFER_SIZE];
    int head;
    int count;
    }CircularLogger;
void initLogger(CircularLogger * logger){
    logger->head = 0;
    logger->count = 0;
}
void insertSample(CircularLogger *logger, int value){
    logger->buffer[logger->head] = value;

    logger->head = (logger->head + 1) % BUFFER_SIZE;

    if(logger->count < BUFFER_SIZE){
        logger->count++;
    }
}

void printSamples(const CircularLogger *logger){
    if (logger->count == 0){
        printf("Buffer is empty.\n");
        return;
    }

    int oldestIndex = (logger->count < BUFFER_SIZE) ? 0 : logger->head;

    printf("Stored samples (oldest -> newest):[");
    for(int i = 0; i < logger->count;i++){
        int currentIndex = (oldestIndex + i) % BUFFER_SIZE;
        printf("%d",logger->buffer[currentIndex]);
    }
    printf("]\n\n");
}


int main()
{
    CircularLogger logger;
    initLogger(&logger);

    int input;

    printf("Circular Sensor Data Logger (Size: %d)\n",BUFFER_SIZE);
    printf("Enter integer sensor readings continuously.\n");
    printf("Enter any non-numeric character (e.g., 'q') to exit.\n\n");

    while(1){
        printf("Enter sensor value:");

        if(scanf("%d",&input) !=1){
            printf("Exiting data logger.\n");
            break;
        }
        insertSample(&logger, input);
        printSamples(&logger);
    }
    return 0;

}
