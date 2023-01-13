#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int resultPer;

int enhancePer() {
    int ra = 8;
    if(resultPer == 100) {
        resultPer = 100 - ra;
    } 
    else if(resultPer != 100) {
        resultPer = resultPer - ra;
    } 
    return resultPer;
}

int SuccessPer() {
    srand(time(NULL));
    int success = rand() % 100;
    return success; 
}

int main(void) {
    int select;
    int temp;
    int ItemLevel = 0;
    int tempLevel;

    while(1) {
        printf("Select a number.\n(1)Enhance (2)Exit\n>> ");
        scanf("%d", &select);

        if(select == 1) {
            char select1;
            resultPer = 100;
            int defalt_gold = 1000;

            while(1) {
                printf("\nEnhancement Success Probability : [%d]%%\n", resultPer);
                printf("Your Gold : [\033[0;33m%dG\033[0;37m]\n", defalt_gold);
                printf("Care to Enhance? [Y/N]\n>> ");
                scanf("%s", &select1);
                
                if(select1 == 'Y' || select1 == 'y') {
                    enhancePer();                    

                    if(defalt_gold >= 500) {

                        if(resultPer > SuccessPer()) {
                            ItemLevel++;
                            temp = resultPer;
                            tempLevel = ItemLevel;
                            defalt_gold -= 500;

                            printf("\n[\033[0;34mSuccess\033[0;37m] (+%d)\n", ItemLevel);

                            if(ItemLevel == 12) {
                                printf("Max Level\n"); 
                                break;
                            }
                        }

                        else if(resultPer < SuccessPer()) {
                            defalt_gold -= 500;
                            resultPer = temp;
                            printf("\n[\033[0;31mFail\033[0;37m] (+%d)\n", tempLevel);
                        }
                    }

                    else if(defalt_gold <= 499) {
                        printf("\n\033[0;31mYour money is not enough\033[0;37m\n");
                        resultPer = temp;
                        continue;
                    }
                }
                else if(select1 == 'N' || select1 == 'n') {
                    break;
                }
                else {
                    printf("\n\033[0;31mYou have entered it incorrectly\033[0;37m\n\n");
                    continue;
                }
            }
        }

        else if(select == 2){
            break;
        }

        else {
            printf("\n\033[0;31mYou have entered it incorrectly\033[0;37m\n\n");
            continue;
        }
        break;
    }
}

