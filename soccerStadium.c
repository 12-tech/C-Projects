#include <stdio.h>
#include <stdlib.h>
#include <pthread.h>

#define MAX_FANS 3000
int total_fans = 0;
pthread_mutex_t mutex = PTHREAD_MUTEX_INITIALIZER;

void *entrance (void* thread_id)
{
    pthread_mutex_lock(&mutex);
    if(total_fans < MAX_FANS){ 
        char *t_id = (char*)thread_id;
        total_fans+=1;
        printf("Total fans: %d, entrance: %s\n", total_fans, t_id);   
    }
    else{
        printf("The stadium has no more capacity\n");
        total_fans+=1;
    }
    pthread_mutex_unlock(&mutex);
}


int main ()
{
    pthread_t entr;
    while (total_fans < MAX_FANS)
    {   
        pthread_create(&entr, NULL, &entrance, "North");
        pthread_create(&entr, NULL, &entrance, "South");
        pthread_create(&entr, NULL, &entrance, "East ");
        pthread_create(&entr, NULL, &entrance, "West ");
    }
    
}