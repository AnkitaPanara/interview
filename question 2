/* 2. Create a c program to solve the given problem:
Create N number of threads. Each thread will print out a message and its
thread ID. Make the main
thread sleep for 10 second for every alternate thread it creates.*/

#include <stdio.h>
#include <stdlib.h>
#include <pthread.h>
#include <unistd.h>

// Thread function that prints a message with its thread ID
void *thread_func(void *arg) {
    int tid = *(int *)arg; // Get the thread ID
    printf("Thread %d: hii \n", tid); // Print the message with the thread ID
    return NULL;
}

int main(int argc, char *argv[]) {
    // Check if the command-line argument is provided
    if (argc < 2) {
        printf("Usage: %s <number of threads>\n", argv[0]);
        return 1;
    }

    // Parse the command-line argument to get the number of threads
    int num_threads = atoi(argv[1]);

    // Allocate an array of pthread_t structures to hold the thread IDs
    pthread_t *threads = malloc(sizeof(pthread_t) * num_threads);

    // Loop through the array of thread IDs and create a new thread for each one
    for (int i = 0; i < num_threads; i++) {
        int *tid = malloc(sizeof(int)); // Allocate memory for the thread ID
        *tid = i; // Assign the current index as the thread ID
        pthread_create(&threads[i], NULL, thread_func, tid); // Create the thread with the thread function and the thread ID as the argument

        // Check if the index is odd, and if so, sleep for 10 seconds before creating the next thread
        if (i % 2 == 1) {
            sleep(10);
        }
    }

    // Wait for all the threads to finish by calling pthread_join for each one
    for (int i = 0; i < num_threads; i++) {
        pthread_join(threads[i], NULL);
    }

    // Free the memory used for the thread IDs
    free(threads);

    return 0; // Return 0 to indicate success
}
