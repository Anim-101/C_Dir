#include<stdio.h>

void tictactoe();

int main(){
    printf("\tWelcome to Play Tic Tac Toe Game\n\n\n");

    int choice;

    printf("Place Your Choice Please -\n");
    printf("1. Play Game\n");
    printf("2. Quit\n\n");

    scanf("%d", &choice);

    switch(choice){
    case 1:
        printf("Playing The Game Opposite First Person and Second Person!!\n");
		tictactoe();
       break;
    case 2:
    default:
        printf("Thanks for Playing this Game\n");
        break;
    }
    return 0;
}

void tictactoe()
{
    int arr[9][9];
    int counter = 0;
    for(int i = 0; i < 9; i++)
    {
        for(int j = 0; j < 9; j++)
        {
            if((i == 1 || i == 4 || i == 7) && (j == 1 || j == 4 || j == 7))
            {
                counter++;
                arr[i][j] = counter;
                printf("%d", arr[i][j]);
            }
            else if(i == 0 || j == 0 || i == 8 || j == 8)
            {
                printf("*");
                arr[i][j] = 6;
            }
            else
            {
                printf(" ");
                arr[i][j] = 6;
            }
        }
        printf("\n");
    }

    int mov = 0;
    int choice = 0;
    int firstPerson = 0;
    int secondPerson = 1;
    int personCounter = 1;
    int numberOne = 0, numberTwo = 0, numberThree = 0, numberFour = 0, numberFive = 0, numberSix = 0, numberSeven = 0, numberEight = 0, numberNine = 0;
    int result[3][3] = {
                        {16,16,16},
                        {16,16,16},
                        {16,16,16}};
    int resultFind = 0;

    while(mov < 9)
    {
        printf("Select A Choice From 1 to 9 - ");

        if(personCounter % 2 == 1)
        {
            printf("\nFirst Person's Choice -");
        }
        else
        {
            printf("\nSecond Person's Choice -");
        }

        scanf("%d", &choice);

        counter = 0;

        switch(choice)
        {
            case 1:
                    if(numberOne == 0)
                       {
                        for(int i = 0; i < 9; i++)
                        {
                            for(int j = 0; j < 9; j++)
                            {
                                if((i == 1 || i == 4 || i == 7) && (j == 1 || j == 4 || j == 7))
                                {
                                    counter++;
                                    if(i== 1 && j == 1)
                                    {
                                        if(personCounter % 2 == 1)
                                        {
                                            arr[i][j] = firstPerson;
                                            result[0][0] = firstPerson;
                                            printf("%d", arr[i][j]);

                                            if((result[0][0] == 0 && result[0][1] == 0 && result[0][2] == 0) || (result[0][0] == 0 && result[1][0] == 0 && result[2][0] == 0) || (result[2][0] == 0 && result[2][1] == 0 && result[2][2] == 0) || (result[0][2] == 0 && result[1][2] == 0 && result[2][2] == 0) || (result[1][0] == 0 && result[1][1] == 0 && result[1][2] == 0) || (result[0][0] == 0 && result[1][1] == 0 && result[2][2] == 0) || (result[0][2] == 0 && result[1][1] ==0 && result[2][0] == 0))
                                            {
                                                printf("\n\nFirst Person Has Won The Game !!\n\n");
                                                mov = 9;
                                                resultFind = 1;
                                                break;
                                            }
                                            personCounter++;
                                        }
                                        else
                                        {
                                            arr[i][j] = secondPerson;
                                            result[0][0] = secondPerson;
                                            printf("%d", arr[i][j]);
                                            if((result[0][0] == 1 && result[0][1] == 1 && result[0][2] == 1) || (result[0][0] == 1 && result[1][0] == 1 && result[2][0] == 1) || (result[2][0] == 1 && result[2][1] == 1 && result[2][2] == 1) || (result[0][2] == 1 && result[1][2] == 1 && result[2][2] == 1) || (result[1][0] == 1 && result[1][1] == 1 && result[1][2] == 1) || (result[0][0] == 1 && result[1][1] == 1 && result[2][2] == 1) || (result[0][2] == 1 && result[1][1] == 1 && result[2][0] == 1))
                                            {
                                                printf("\n\nSecond Person Has Won The Game !!\n\n");
                                                mov = 9;
                                                resultFind = 1;
                                                break;
                                            }
                                            personCounter++;
                                        }
                                    }
                                    else
                                    {
                                        if(resultFind == 0)
                                        {
                                            if(arr[i][j] == 1 || arr[i][j] == 0)
                                            {
                                                printf("%d", arr[i][j]);
                                            }
                                            else
                                            {
                                                arr[i][j] = counter;
                                                printf("%d", arr[i][j]);
                                            }
                                        }
                                    }

                                }
                                else if(i == 0 || j == 0 || i == 8 || j == 8)
                                {
                                    if(resultFind == 0)
                                    {
                                        printf("*");
                                        arr[i][j] = 6;
                                    }
                                }
                                else
                                {
                                    if(resultFind == 0)
                                    {
                                        printf(" ");
                                        arr[i][j] = 6;
                                    }
                                }
                            }
                            printf("\n");
                        }
                        mov ++;
                        numberOne = 16;
                        break;
                    }
                    else
                    {
                        printf("\n\nAlready, This Position Has Been Used !!\n\n");
                        break;
                    }
            case 2:
                    if(numberTwo == 0)
                        {for(int i = 0; i < 9; i++)
                        {
                            for(int j = 0; j < 9; j++)
                            {
                                if((i == 1 || i == 4 || i == 7) && (j == 1 || j == 4 || j == 7))
                                {
                                    counter++;
                                    if(i== 1 && j == 4)
                                    {
                                        if(personCounter % 2 == 1)
                                        {
                                            arr[i][j] = firstPerson;
                                            result[0][1] = firstPerson;
                                            printf("%d", arr[i][j]);
                                            if((result[0][0] == 0 && result[0][1] == 0 && result[0][2] == 0) || (result[0][0] == 0 && result[1][0] == 0 && result[2][0] == 0) || (result[2][0] == 0 && result[2][1] == 0 && result[2][2] == 0) || (result[0][2] == 0 && result[1][2] == 0 && result[2][2] == 0) || (result[1][0] == 0 && result[1][1] == 0 && result[1][2] == 0) || (result[0][0] == 0 && result[1][1] == 0 && result[2][2] == 0) || (result[0][2] == 0 && result[1][1] ==0 && result[2][0] == 0))
                                            {
                                                printf("\n\nFirst Person Has Won The Game !!\n\n");
                                                mov = 9;
                                                resultFind = 1;
                                                break;
                                            }
                                            personCounter++;
                                        }
                                        else
                                        {
                                            arr[i][j] = secondPerson;
                                            result[0][1] = secondPerson;
                                            printf("%d", arr[i][j]);
                                            if((result[0][0] == 1 && result[0][1] == 1 && result[0][2] == 1) || (result[0][0] == 1 && result[1][0] == 1 && result[2][0] == 1) || (result[2][0] == 1 && result[2][1] == 1 && result[2][2] == 1) || (result[0][2] == 1 && result[1][2] == 1 && result[2][2] == 1) || (result[1][0] == 1 && result[1][1] == 1 && result[1][2] == 1) || (result[0][0] == 1 && result[1][1] == 1 && result[2][2] == 1) || (result[0][2] == 1 && result[1][1] == 1 && result[2][0] == 1))
                                            {
                                                printf("\n\nSecond Person Has Won The Game !!\n\n");
                                                mov = 9;
                                                resultFind = 1;
                                                break;
                                            }
                                            personCounter++;
                                        }
                                    }
                                    else
                                    {
                                        if(resultFind == 0)
                                        {
                                            if(arr[i][j] == 1 || arr[i][j] == 0)
                                            {
                                                printf("%d", arr[i][j]);
                                            }
                                            else
                                            {
                                                arr[i][j] = counter;
                                                printf("%d", arr[i][j]);
                                            }
                                        }
                                    }

                                }
                                else if(i == 0 || j == 0 || i == 8 || j == 8)
                                {
                                    if(resultFind == 0)
                                    {
                                        printf("*");
                                        arr[i][j] = 6;
                                    }
                                }
                                else
                                {
                                    if(resultFind == 0)
                                    {
                                        printf(" ");
                                        arr[i][j] = 6;
                                    }
                                }
                            }
                            printf("\n");
                        }
                        mov ++;
                        numberTwo = 16;
                        break;
                    }
                    else
                    {
                        printf("\n\nAlready, This Position Has Been Used !!\n\n");
                        break;
                    }
            case 3:
                    if(numberThree == 0)
                    {
                        for(int i = 0; i < 9; i++)
                        {
                            for(int j = 0; j < 9; j++)
                            {
                                if((i == 1 || i == 4 || i == 7) && (j == 1 || j == 4 || j == 7))
                                {
                                    counter++;
                                    if(i== 1 && j == 7)
                                    {
                                        if(personCounter % 2 == 1)
                                        {
                                            arr[i][j] = firstPerson;
                                            result[0][2] = firstPerson;
                                            printf("%d", arr[i][j]);
                                            if((result[0][0] == 0 && result[0][1] == 0 && result[0][2] == 0) || (result[0][0] == 0 && result[1][0] == 0 && result[2][0] == 0) || (result[2][0] == 0 && result[2][1] == 0 && result[2][2] == 0) || (result[0][2] == 0 && result[1][2] == 0 && result[2][2] == 0) || (result[1][0] == 0 && result[1][1] == 0 && result[1][2] == 0) || (result[0][0] == 0 && result[1][1] == 0 && result[2][2] == 0) || (result[0][2] == 0 && result[1][1] ==0 && result[2][0] == 0))
                                            {
                                                printf("\n\nFirst Person Has Won The Game !!\n\n");
                                                mov = 9;
                                                resultFind = 1;
                                                break;
                                            }
                                            personCounter++;
                                        }
                                        else
                                        {
                                            arr[i][j] = secondPerson;
                                            result[0][2] = secondPerson;
                                            printf("%d", arr[i][j]);
                                            if((result[0][0] == 1 && result[0][1] == 1 && result[0][2] == 1) || (result[0][0] == 1 && result[1][0] == 1 && result[2][0] == 1) || (result[2][0] == 1 && result[2][1] == 1 && result[2][2] == 1) || (result[0][2] == 1 && result[1][2] == 1 && result[2][2] == 1) || (result[1][0] == 1 && result[1][1] == 1 && result[1][2] == 1) || (result[0][0] == 1 && result[1][1] == 1 && result[2][2] == 1) || (result[0][2] == 1 && result[1][1] == 1 && result[2][0] == 1))
                                            {
                                                printf("\n\nSecond Person Has Won The Game !!\n\n");
                                                mov = 9;
                                                resultFind = 1;
                                                break;
                                            }
                                            personCounter++;
                                        }
                                    }
                                    else
                                    {
                                        if(resultFind == 0)
                                        {
                                            if(arr[i][j] == 1 || arr[i][j] == 0)
                                            {
                                                printf("%d", arr[i][j]);
                                            }
                                            else
                                            {
                                                arr[i][j] = counter;
                                                printf("%d", arr[i][j]);
                                            }
                                        }
                                    }

                                }
                                else if(i == 0 || j == 0 || i == 8 || j == 8)
                                {
                                    if(resultFind == 0)
                                    {
                                        printf("*");
                                        arr[i][j] = 6;
                                    }
                                }
                                else
                                {
                                    if(resultFind == 0)
                                    {
                                        printf(" ");
                                        arr[i][j] = 6;
                                    }
                                }
                            }
                            printf("\n");
                        }
                        mov ++;
                        numberThree = 16;
                        break;
                    }
                    else
                    {
                        printf("\n\nAlready, This Position Has Been Used !!\n\n");
                        break;
                    }
            case 4:
                    if(numberFour == 0)
                     {
                         for(int i = 0; i < 9; i++)
                            {
                                for(int j = 0; j < 9; j++)
                                {
                                    if((i == 1 || i == 4 || i == 7) && (j == 1 || j == 4 || j == 7))
                                    {
                                        counter++;
                                        if(i== 4 && j == 1)
                                        {
                                            if(personCounter % 2 == 1)
                                            {
                                                arr[i][j] = firstPerson;
                                                result[1][0] = firstPerson;
                                                printf("%d", arr[i][j]);
                                                if((result[0][0] == 0 && result[0][1] == 0 && result[0][2] == 0) || (result[0][0] == 0 && result[1][0] == 0 && result[2][0] == 0) || (result[2][0] == 0 && result[2][1] == 0 && result[2][2] == 0) || (result[0][2] == 0 && result[1][2] == 0 && result[2][2] == 0) || (result[1][0] == 0 && result[1][1] == 0 && result[1][2] == 0) || (result[0][0] == 0 && result[1][1] == 0 && result[2][2] == 0) || (result[0][2] == 0 && result[1][1] ==0 && result[2][0] == 0))
                                                {
                                                    printf("\n\nFirst Person Has Won The Game !!\n\n");
                                                    mov = 9;
                                                    resultFind = 1;
                                                    break;
                                                }
                                                personCounter++;
                                            }
                                            else
                                            {
                                                arr[i][j] = secondPerson;
                                                result[1][0] = secondPerson;
                                                printf("%d", arr[i][j]);
                                                if((result[0][0] == 1 && result[0][1] == 1 && result[0][2] == 1) || (result[0][0] == 1 && result[1][0] == 1 && result[2][0] == 1) || (result[2][0] == 1 && result[2][1] == 1 && result[2][2] == 1) || (result[0][2] == 1 && result[1][2] == 1 && result[2][2] == 1) || (result[1][0] == 1 && result[1][1] == 1 && result[1][2] == 1) || (result[0][0] == 1 && result[1][1] == 1 && result[2][2] == 1) || (result[0][2] == 1 && result[1][1] == 1 && result[2][0] == 1))
                                                {
                                                    printf("\n\nSecond Person Has Won The Game !!\n\n");
                                                    mov = 9;
                                                    resultFind = 1;
                                                    break;
                                                }
                                                personCounter++;
                                            }
                                        }
                                        else
                                        {
                                            if(resultFind == 0)
                                            {
                                                if(arr[i][j] == 1 || arr[i][j] == 0)
                                                {
                                                    printf("%d", arr[i][j]);
                                                }
                                                else
                                                {
                                                    arr[i][j] = counter;
                                                    printf("%d", arr[i][j]);
                                                }
                                            }
                                        }

                                    }
                                    else if(i == 0 || j == 0 || i == 8 || j == 8)
                                    {
                                        if(resultFind == 0)
                                        {
                                            printf("*");
                                            arr[i][j] = 6;
                                        }
                                    }
                                    else
                                    {
                                        if(resultFind == 0)
                                        {
                                            printf(" ");
                                            arr[i][j] = 6;
                                        }
                                    }
                                }
                                printf("\n");
                            }
                            mov ++;
                            numberFour = 16;
                            break;
                     }
                     else
                     {
                        printf("\n\nAlready, This Position Has Been Used !!\n\n");
                        break;
                     }
            case 5:
                    if(numberFive == 0)
                    {
                        for(int i = 0; i < 9; i++)
                            {
                                for(int j = 0; j < 9; j++)
                                {
                                    if((i == 1 || i == 4 || i == 7) && (j == 1 || j == 4 || j == 7))
                                    {
                                        counter++;
                                        if(i== 4 && j == 4)
                                        {
                                            if(personCounter % 2 == 1)
                                            {
                                                arr[i][j] = firstPerson;
                                                result[1][1] = firstPerson;
                                                printf("%d", arr[i][j]);
                                                if((result[0][0] == 0 && result[0][1] == 0 && result[0][2] == 0) || (result[0][0] == 0 && result[1][0] == 0 && result[2][0] == 0) || (result[2][0] == 0 && result[2][1] == 0 && result[2][2] == 0) || (result[0][2] == 0 && result[1][2] == 0 && result[2][2] == 0) || (result[1][0] == 0 && result[1][1] == 0 && result[1][2] == 0) || (result[0][0] == 0 && result[1][1] == 0 && result[2][2] == 0) || (result[0][2] == 0 && result[1][1] ==0 && result[2][0] == 0))
                                                {
                                                    printf("\n\nFirst Person Has Won The Game !!\n\n");
                                                    mov = 9;
                                                    resultFind = 1;
                                                    break;
                                                }
                                                personCounter++;
                                            }
                                            else
                                            {
                                                arr[i][j] = secondPerson;
                                                result[1][1] = secondPerson;
                                                printf("%d", arr[i][j]);
                                                if((result[0][0] == 1 && result[0][1] == 1 && result[0][2] == 1) || (result[0][0] == 1 && result[1][0] == 1 && result[2][0] == 1) || (result[2][0] == 1 && result[2][1] == 1 && result[2][2] == 1) || (result[0][2] == 1 && result[1][2] == 1 && result[2][2] == 1) || (result[1][0] == 1 && result[1][1] == 1 && result[1][2] == 1) || (result[0][0] == 1 && result[1][1] == 1 && result[2][2] == 1) || (result[0][2] == 1 && result[1][1] == 1 && result[2][0] == 1))
                                                {
                                                    printf("\n\nSecond Person Has Won The Game !!\n\n");
                                                    mov = 9;
                                                    resultFind = 1;
                                                    break;
                                                }
                                                personCounter++;
                                            }
                                        }
                                        else
                                        {
                                            if(resultFind == 0)
                                            {
                                                if(arr[i][j] == 1 || arr[i][j] == 0)
                                                {
                                                    printf("%d", arr[i][j]);
                                                }
                                                else
                                                {
                                                    arr[i][j] = counter;
                                                    printf("%d", arr[i][j]);
                                                }
                                            }
                                        }

                                    }
                                    else if(i == 0 || j == 0 || i == 8 || j == 8)
                                    {
                                        if(resultFind == 0)
                                        {
                                            printf("*");
                                            arr[i][j] = 6;
                                        }
                                    }
                                    else
                                    {
                                        if(resultFind == 0)
                                        {
                                            printf(" ");
                                            arr[i][j] = 6;
                                        }
                                    }
                                }
                                printf("\n");
                            }
                            mov ++;
                            numberFour = 16;
                            break;
                     }
                     else
                     {
                        printf("\n\nAlready, This Position Has Been Used !!\n\n");
                        break;
                     }
            case 6:
                    if(numberSix == 0)
                       {
                           for(int i = 0; i < 9; i++)
                                {
                                    for(int j = 0; j < 9; j++)
                                    {
                                        if((i == 1 || i == 4 || i == 7) && (j == 1 || j == 4 || j == 7))
                                        {
                                            counter++;
                                            if(i== 4 && j == 7)
                                            {
                                                if(personCounter % 2 == 1)
                                                {
                                                    arr[i][j] = firstPerson;
                                                    result[1][2] = firstPerson;
                                                    printf("%d", arr[i][j]);
                                                    if((result[0][0] == 0 && result[0][1] == 0 && result[0][2] == 0) || (result[0][0] == 0 && result[1][0] == 0 && result[2][0] == 0) || (result[2][0] == 0 && result[2][1] == 0 && result[2][2] == 0) || (result[0][2] == 0 && result[1][2] == 0 && result[2][2] == 0) || (result[1][0] == 0 && result[1][1] == 0 && result[1][2] == 0) || (result[0][0] == 0 && result[1][1] == 0 && result[2][2] == 0) || (result[0][2] == 0 && result[1][1] ==0 && result[2][0] == 0))
                                                    {
                                                        printf("\n\nFirst Person Has Won The Game !!\n\n");
                                                        mov = 9;
                                                        resultFind = 1;
                                                        break;
                                                    }
                                                    personCounter++;
                                                }
                                                else
                                                {
                                                    arr[i][j] = secondPerson;
                                                    result[1][2] = secondPerson;
                                                    printf("%d", arr[i][j]);
                                                if((result[0][0] == 1 && result[0][1] == 1 && result[0][2] == 1) || (result[0][0] == 1 && result[1][0] == 1 && result[2][0] == 1) || (result[2][0] == 1 && result[2][1] == 1 && result[2][2] == 1) || (result[0][2] == 1 && result[1][2] == 1 && result[2][2] == 1) || (result[1][0] == 1 && result[1][1] == 1 && result[1][2] == 1) || (result[0][0] == 1 && result[1][1] == 1 && result[2][2] == 1) || (result[0][2] == 1 && result[1][1] == 1 && result[2][0] == 1))
                                                    {
                                                        printf("\n\nSecond Person Has Won The Game !!\n\n");
                                                        mov = 9;
                                                        resultFind = 1;
                                                        break;
                                                    }
                                                    personCounter++;
                                                }
                                            }
                                            else
                                            {
                                                if(resultFind == 0)
                                                {
                                                    if(arr[i][j] == 1 || arr[i][j] == 0)
                                                    {
                                                        printf("%d", arr[i][j]);
                                                    }
                                                    else
                                                    {
                                                        arr[i][j] = counter;
                                                        printf("%d", arr[i][j]);
                                                    }
                                                }
                                            }

                                        }
                                        else if(i == 0 || j == 0 || i == 8 || j == 8)
                                        {
                                            if(resultFind == 0)
                                            {
                                                printf("*");
                                                arr[i][j] = 6;
                                            }
                                        }
                                        else
                                        {
                                            if(resultFind == 0)
                                            {
                                                printf(" ");
                                                arr[i][j] = 6;
                                            }
                                        }
                                    }
                                    printf("\n");
                                }
                                mov ++;
                                numberSix = 16;
                                break;
                         }
                         else
                         {
                            printf("\n\nAlready, This Position Has Been Used !!\n\n");
                            break;
                         }
            case 7:
                    if(numberSeven == 0)
                    {
                        for(int i = 0; i < 9; i++)
                            {
                                for(int j = 0; j < 9; j++)
                                {
                                    if((i == 1 || i == 4 || i == 7) && (j == 1 || j == 4 || j == 7))
                                    {
                                        counter++;
                                        if(i== 7 && j == 1)
                                        {
                                            if(personCounter % 2 == 1)
                                            {
                                                arr[i][j] = firstPerson;
                                                result[2][0] = firstPerson;
                                                printf("%d", arr[i][j]);
                                                if((result[0][0] == 0 && result[0][1] == 0 && result[0][2] == 0) || (result[0][0] == 0 && result[1][0] == 0 && result[2][0] == 0) || (result[2][0] == 0 && result[2][1] == 0 && result[2][2] == 0) || (result[0][2] == 0 && result[1][2] == 0 && result[2][2] == 0) || (result[1][0] == 0 && result[1][1] == 0 && result[1][2] == 0) || (result[0][0] == 0 && result[1][1] == 0 && result[2][2] == 0) || (result[0][2] == 0 && result[1][1] ==0 && result[2][0] == 0))
                                                {
                                                    printf("\n\nFirst Person Has Won The Game !!\n\n");
                                                    mov = 9;
                                                    resultFind = 1;
                                                    break;
                                                }
                                                personCounter++;
                                            }
                                            else
                                            {
                                                arr[i][j] = secondPerson;
                                                result[2][0] = secondPerson;
                                                printf("%d", arr[i][j]);
                                                if((result[0][0] == 1 && result[0][1] == 1 && result[0][2] == 1) || (result[0][0] == 1 && result[1][0] == 1 && result[2][0] == 1) || (result[2][0] == 1 && result[2][1] == 1 && result[2][2] == 1) || (result[0][2] == 1 && result[1][2] == 1 && result[2][2] == 1) || (result[1][0] == 1 && result[1][1] == 1 && result[1][2] == 1) || (result[0][0] == 1 && result[1][1] == 1 && result[2][2] == 1) || (result[0][2] == 1 && result[1][1] == 1 && result[2][0] == 1))
                                                {
                                                    printf("\n\nSecond Person Has Won The Game !!\n\n");
                                                    mov = 9;
                                                    resultFind = 1;
                                                    break;
                                                }
                                                personCounter++;
                                            }
                                        }
                                        else
                                        {
                                            if(resultFind == 0)
                                            {
                                                if(arr[i][j] == 1 || arr[i][j] == 0)
                                                {
                                                    printf("%d", arr[i][j]);
                                                }
                                                else
                                                {
                                                    arr[i][j] = counter;
                                                    printf("%d", arr[i][j]);
                                                }
                                            }
                                        }

                                    }
                                    else if(i == 0 || j == 0 || i == 8 || j == 8)
                                    {
                                        if(resultFind == 0)
                                        {
                                            printf("*");
                                            arr[i][j] = 6;
                                        }
                                    }
                                    else
                                    {
                                        if(resultFind == 0)
                                        {
                                            printf(" ");
                                            arr[i][j] = 6;
                                        }
                                    }
                                }
                                printf("\n");
                            }
                            mov ++;
                            numberSeven = 16;
                            break;
                     }
                     else
                     {
                        printf("\nAlready, This Position Has Been Used !!\n\n");
                        break;
                     }
            case 8:
                    if(numberEight == 0)
                    {
                        for(int i = 0; i < 9; i++)
                            {
                                for(int j = 0; j < 9; j++)
                                {
                                    if((i == 1 || i == 4 || i == 7) && (j == 1 || j == 4 || j == 7))
                                    {
                                        counter++;
                                        if(i == 7 && j == 4)
                                        {
                                            if(personCounter % 2 == 1)
                                            {
                                                arr[i][j] = firstPerson;
                                                result[2][1] = firstPerson;
                                                printf("%d", arr[i][j]);
                                                if((result[0][0] == 0 && result[0][1] == 0 && result[0][2] == 0) || (result[0][0] == 0 && result[1][0] == 0 && result[2][0] == 0) || (result[2][0] == 0 && result[2][1] == 0 && result[2][2] == 0) || (result[0][2] == 0 && result[1][2] == 0 && result[2][2] == 0) || (result[1][0] == 0 && result[1][1] == 0 && result[1][2] == 0) || (result[0][0] == 0 && result[1][1] == 0 && result[2][2] == 0) || (result[0][2] == 0 && result[1][1] ==0 && result[2][0] == 0))
                                                {
                                                    printf("\n\nFirst Person Has Won The Game !!\n\n");
                                                    mov = 9;
                                                    resultFind = 1;
                                                    break;
                                                }
                                                personCounter++;
                                            }
                                            else
                                            {
                                                arr[i][j] = secondPerson;
                                                result[2][1] = secondPerson;
                                                printf("%d", arr[i][j]);
                                                if((result[0][0] == 1 && result[0][1] == 1 && result[0][2] == 1) || (result[0][0] == 1 && result[1][0] == 1 && result[2][0] == 1) || (result[2][0] == 1 && result[2][1] == 1 && result[2][2] == 1) || (result[0][2] == 1 && result[1][2] == 1 && result[2][2] == 1) || (result[1][0] == 1 && result[1][1] == 1 && result[1][2] == 1) || (result[0][0] == 1 && result[1][1] == 1 && result[2][2] == 1) || (result[0][2] == 1 && result[1][1] == 1 && result[2][0] == 1))
                                                {
                                                    printf("\n\nSecond Person Has Won The Game !!\n\n");
                                                    mov = 9;
                                                    resultFind = 1;
                                                    break;
                                                }
                                                personCounter++;
                                            }
                                        }
                                        else
                                        {
                                            if(resultFind == 0)
                                            {
                                                if(arr[i][j] == 1 || arr[i][j] == 0)
                                                {
                                                    printf("%d", arr[i][j]);
                                                }
                                                else
                                                {
                                                    arr[i][j] = counter;
                                                    printf("%d", arr[i][j]);
                                                }
                                            }
                                        }

                                    }
                                    else if(i == 0 || j == 0 || i == 8 || j == 8)
                                    {
                                        if(resultFind == 0)
                                        {
                                            printf("*");
                                            arr[i][j] = 6;
                                        }
                                    }
                                    else
                                    {
                                        if(resultFind == 0)
                                        {
                                            printf(" ");
                                            arr[i][j] = 6;
                                        }
                                    }
                                }
                                printf("\n");
                            }
                            mov ++;
                            numberEight = 16;
                            break;
                     }
                     else
                     {
                        printf("\nAlready, This Position Has Been Used !!\n\n");
                        break;
                     }
            case 9:
                    if(numberNine == 0)
                    {
                        for(int i = 0; i < 9; i++)
                            {
                                for(int j = 0; j < 9; j++)
                                {
                                    if((i == 1 || i == 4 || i == 7) && (j == 1 || j == 4 || j == 7))
                                    {
                                        counter++;
                                        if(i == 7 && j == 7)
                                        {
                                            if(personCounter % 2 == 1)
                                            {
                                                arr[i][j] = firstPerson;
                                                result[2][2] = firstPerson;
                                                printf("%d", arr[i][j]);
                                                if((result[0][0] == 0 && result[0][1] == 0 && result[0][2] == 0) || (result[0][0] == 0 && result[1][0] == 0 && result[2][0] == 0) || (result[2][0] == 0 && result[2][1] == 0 && result[2][2] == 0) || (result[0][2] == 0 && result[1][2] == 0 && result[2][2] == 0) || (result[1][0] == 0 && result[1][1] == 0 && result[1][2] == 0) || (result[0][0] == 0 && result[1][1] == 0 && result[2][2] == 0) || (result[0][2] == 0 && result[1][1] ==0 && result[2][0] == 0))
                                                {
                                                    printf("\n\nFirst Person Has Won The Game !!\n\n");
                                                    mov = 9;
                                                    resultFind = 1;
                                                    break;
                                                }
                                                personCounter++;
                                            }
                                            else
                                            {
                                                arr[i][j] = secondPerson;
                                                result[2][2] = secondPerson;
                                                printf("%d", arr[i][j]);
                                                if((result[0][0] == 1 && result[0][1] == 1 && result[0][2] == 1) || (result[0][0] == 1 && result[1][0] == 1 && result[2][0] == 1) || (result[2][0] == 1 && result[2][1] == 1 && result[2][2] == 1) || (result[0][2] == 1 && result[1][2] == 1 && result[2][2] == 1) || (result[1][0] == 1 && result[1][1] == 1 && result[1][2] == 1) || (result[0][0] == 1 && result[1][1] == 1 && result[2][2] == 1) || (result[0][2] == 1 && result[1][1] == 1 && result[2][0] == 1))
                                                {
                                                    printf("\n\nSecond Person Has Won The Game !!\n\n");
                                                    mov = 9;
                                                    resultFind = 1;
                                                    break;
                                                }
                                                personCounter++;
                                            }
                                        }
                                        else
                                        {
                                            if(resultFind == 0)
                                            {
                                                if(arr[i][j] == 1 || arr[i][j] == 0)
                                                {
                                                    printf("%d", arr[i][j]);
                                                }
                                                else
                                                {
                                                    arr[i][j] = counter;
                                                    printf("%d", arr[i][j]);
                                                }
                                            }
                                        }

                                    }
                                    else if(i == 0 || j == 0 || i == 8 || j == 8)
                                    {
                                        if(resultFind == 0)
                                        {
                                            printf("*");
                                            arr[i][j] = 6;
                                        }
                                    }
                                    else
                                    {
                                        if(resultFind == 0)
                                        {
                                            printf(" ");
                                            arr[i][j] = 6;
                                        }
                                    }
                                }
                                printf("\n");
                            }
                            mov ++;
                            numberNine = 16;
                            break;
                     }
                     else
                     {
                        printf("\nAlready, This Position Has Been Used !!\n\n");
                        break;
                     }
            default:
                    printf("Print Place Number Between 1 to 9 Place. Remember You Can Choose One Place only Once during Playing Time!!\n\n");
                    break;
        }
    }
}