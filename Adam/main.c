//
//  main.c
//  Adam
//
//  Created by Alex on 2015-06-09.
//  Copyright (c) 2015 Alex. All rights reserved.
//

#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <ctype.h>

void talkToAdam();
bool isUpperCaseString(char *str);

int main(int argc, const char * argv[]) {
    talkToAdam();
}

void talkToAdam() {
    char response[256];
  
    while (strcmp(response, "exit") != 0) {
        printf("Hey dude ");
        scanf("%s", response);
        
            if (strcmp(response, "Adam") == 0) {
            printf("Fine be that way! \n");
                }
        
            else if(strcmp(&response[strlen(response)-1], "?") == 0) {
                printf("Sure \n");
            }
            
            else if (isUpperCaseString(response)){
                printf("Whoa chill out. Don't shout. \n");
            }
            
            else if (strcmp(response, "exit") != 0) {
                printf("Whatever \n");
            }
        }
}

bool isUpperCaseString(char *str) {
    for(int i = 0; i < strlen(str); i++) {
        if(isupper(str[i]) == 0) {
            return false;
        }
    }
    return true;
}

           