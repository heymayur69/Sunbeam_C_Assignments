#include <stdio.h>
#include <string.h>
int main() {
    char *strings[] = {"hello", "world", "hello", "test", "world", "apple"};
    int count = 6;
    int printed[6] = {0}; 

    printf("Duplicate strings:\n");
    for (int i = 0; i < count; i++)
    {   
        if (printed[i]) {
            continue; 
        }
        for (int j = i +1; j < count; j++)
        {
            if(strcmp(strings[i], strings[j]) ==0){
                printf("%s\n", strings[i]);
                printed[i] = 1; 
                break; 
            }
        }
        
    }
    
    return 0;
}