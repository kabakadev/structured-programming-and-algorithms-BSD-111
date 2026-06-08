// Source - https://stackoverflow.com/a/14598879
// Posted by Abhay Budakoti, modified by community. See post 'Timeline' for change history
// Retrieved 2026-06-08, License - CC BY-SA 4.0

/* 
  AUthor: Ian Kabaka. 
  Admission number:BCS-03-0068/2026
  Date May 25 2026 
  
*/

    #include <stdio.h>

    
    int main()
    {
        int random_number(int min_num, int max_num);
  
        int the_random_number =  random_number(1,20);
        // printf("the random is %d\n", the_random_number);
        int user_input;

        do{
            printf("Enter any number here: ");
            scanf("%d", &user_input);

            if (user_input > the_random_number){
                printf("too high\n");
            } else if (user_input < the_random_number){
                printf("too low\n");
            } else if(user_input == the_random_number){
                printf("You got the number, it was %d\n",the_random_number );
            }
            
        } while(user_input != the_random_number);
        return 0;
    }

    int random_number(int min_num, int max_num)
    {
        int result = 0, low_num = 0, hi_num = 0;

        if (min_num < max_num)
        {
            low_num = min_num;
            hi_num = max_num + 1; // include max_num in output
        } else {
            low_num = max_num + 1; // include max_num in output
            hi_num = min_num;
        }

        srand(time(NULL));
        result = (rand() % (hi_num - low_num)) + low_num;
        return result;
    }
