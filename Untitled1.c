#include <stdio.h>
#include<conio.h>
#include <stdlib.h>
#include <string.h>
#include <windows.h>

COORD coord = {0, 0};
void gotoxy(int x,int y)
{
    coord.X = x;
    coord.Y = y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
}
void line();
void word();
void omit_word();
void omit_line();
void notify_check();
void clear();
void input();

int main()
{
    system("COLOR F0");
    input();
    getch();
}
void clear()
{
    FILE *file5 = fopen("file5.txt", "w");
    fclose(file5);
}
void input()
{
    int j = 0, x,t,z=0;
    char ch[600];
    char main[100][100] = {" Main Menu", "Line By Line", "Word By Word", "Omitting Word", "Notify And Check","Insert text in the console","Insert text in a text file"};
    there:
    system("cls");
    printf("\t\t\t***************************************************************\n\n");
    printf("\t\t\t\t\t\tProfanity Censor\n\n");
    printf("\t\t\t***************************************************************\n\n");
    gotoxy(41, 7);
    printf("*****%s****\n", main[0]);
    gotoxy(41, 9);
    printf("[1]-%s\n", main[1]);
    gotoxy(41, 11);
    printf("[2]-%s\n", main[2]);
    gotoxy(41, 13);
    printf("[3]-%s\n", main[3]);
    gotoxy(41, 15);
    printf("[4]-Omitting Line\n");
    gotoxy(41, 17);
    printf("[5]-%s\n", main[4]);
    gotoxy(41, 19);
    printf("[6]-Enter New Text \n");
    gotoxy(41, 21);
    printf("[7]-Exit \n");
    gotoxy(34, 23);
    printf("Enter your option : ");
    //gotoxy(56, 21);
    here:
    scanf("%d", &x);
    if (x == 1)
    {
        if(z==0)
        {
            z=1;
            system("cls");
            gotoxy(38,8);
            printf("[1]-%s\n",main[5]);
            gotoxy(38,10);
            printf("[2]-%s\n",main[6]);
            gotoxy(38,12);
            printf("Enter your choice : ");
            scanf("%d",&t);
            clear();
            if(t==1)
            {
                FILE *file5 = fopen("file5.txt", "a");
                system("cls");
                while (1)
                {
                    scanf("%s", ch);
                    if (strcmp(ch, "end_") == 0)
                        break;
                    fputs(ch, file5);
                    fputs("\n", file5);
                }
                fclose(file5);
            }
            else
                system("E:/profanity_censor/file5.txt");

        }
        line();
    }
    else if (x == 2)
    {
        if(z==0)
        {
            z=1;
            system("cls");
            gotoxy(38,8);
            printf("[1]-%s\n",main[5]);
            gotoxy(38,10);
            printf("[2]-%s\n",main[6]);
            gotoxy(38,12);
            printf("Enter your choice : ");
            scanf("%d",&t);
            clear();
            if(t==1)
            {
                FILE *file5 = fopen("file5.txt", "a");
                system("cls");
                while (1)
                {
                    scanf("%s", ch);
                    if (strcmp(ch, "end_") == 0)
                        break;
                    fputs(ch, file5);
                    fputs("\n", file5);
                }
                fclose(file5);
            }
            else
                system("E:/profanity_censor/file5.txt");

        }
        word();
    }
    else if (x == 3)
    {
        if(z==0)
        {
            z=1;
            system("cls");
            gotoxy(38,8);
            printf("[1]-%s\n",main[5]);
            gotoxy(38,10);
            printf("[2]-%s\n",main[6]);
            gotoxy(38,12);
            printf("Enter your choice : ");
            scanf("%d",&t);
            clear();
            if(t==1)
            {
                FILE *file5 = fopen("file5.txt", "a");
                system("cls");
                while (1)
                {
                    scanf("%s", ch);
                    if (strcmp(ch, "end_") == 0)
                        break;
                    fputs(ch, file5);
                    fputs("\n", file5);
                }
                fclose(file5);
            }
            else
                system("E:/profanity_censor/file5.txt");

        }
        omit_word();
    }

        else if (x == 4)
    {
        if(z==0)
        {
            z=1;
            system("cls");
            gotoxy(38,8);
            printf("[1]-%s\n",main[5]);
            gotoxy(38,10);
            printf("[2]-%s\n",main[6]);
            gotoxy(38,12);
            printf("Enter your choice : ");
            scanf("%d",&t);
            clear();
            if(t==1)
            {
                FILE *file5 = fopen("file5.txt", "a");
                system("cls");
                while (1)
                {
                    scanf("%s", ch);
                    if (strcmp(ch, "end_") == 0)
                        break;
                    fputs(ch, file5);
                    fputs("\n", file5);
                }
                fclose(file5);
            }
            else
                system("E:/profanity_censor/file5.txt");

        }
        omit_line();
    }
    else if (x == 5)
    {
        if(z==0)
        {
            z=1;
            system("cls");
            gotoxy(38,8);
            printf("[1]-%s\n",main[5]);
            gotoxy(38,10);
            printf("[2]-%s\n",main[6]);
            gotoxy(38,12);
            printf("Enter your choice : ");
            scanf("%d",&t);
            clear();
            if(t==1)
            {
                FILE *file5 = fopen("file5.txt", "a");
                system("cls");
                while (1)
                {
                    scanf("%s", ch);
                    if (strcmp(ch, "end_") == 0)
                        break;
                    fputs(ch, file5);
                    fputs("\n", file5);
                }
                fclose(file5);
            }
            else
                system("E:/profanity_censor/file5.txt");

        }
        notify_check();
    }
    else if (x == 6)
    {
        system("cls");
        gotoxy(38,8);
        printf("[1]-%s\n",main[5]);
        gotoxy(38,10);
        printf("[2]-%s\n",main[6]);
        gotoxy(38,12);
        printf("Enter your choice : ");
        scanf("%d",&t);
        z=1;
        clear();
        if(t==1)
        {
            FILE *file5 = fopen("file5.txt", "a");
            system("cls");
            while (1)
            {
                scanf("%s", ch);
                if (strcmp(ch, "end_") == 0)
                    break;
                fputs(ch, file5);
                fputs("\n", file5);
            }
            fclose(file5);
        }
        else
            system("E:/profanity_censor/file5.txt");

        goto there;
    }
    else if(x==7)
    {
        getch();
        exit(0);
    }
    else if(x==0)
        goto there;
    printf("[0]-Main Manu ");
    if(x!=1) printf("\t[1]-%s ", main[1]);
    if(x!=2)  printf("\t[2]-%s ", main[2]);
    if(x!=3)  printf("\t[3]-%s ", main[3]);
    if(x!=4) printf("\t[4]-Omitting Line\n");
    if(x!=5)  printf("\t[5]-%s ", main[4]);
    printf("\t [6]-Enter New Text ");
    printf("\t[7]-Exit ");
    goto here;
}
void line()
{
    int i, j = 0, k, m, n, z, l, word_num;
    char ch[600][20], dh[60][20], eh[60][20], fh[60][20], gh[60][20], kh[39];
    FILE *file1 = fopen("curse.txt", "r");
    FILE *file2 = fopen("hateful.txt", "r");
    FILE *file3 = fopen("obscene.txt", "r");
    FILE *file4 = fopen("insulting.txt", "r");
    FILE *file5 = fopen("file5.txt", "r");
    while (!feof(file1))
    {
        fgets(dh[j], sizeof(kh), file1);
        if (dh[j][strlen(dh[j]) - 1] == '\n')
            dh[j][strlen(dh[j]) - 1] = '\0';
        // printf("%s\n",dh[j]);
        j++;
    }
    fclose(file1);
    j = 0;
    while (!feof(file2))
    {
        fgets(gh[j], sizeof(kh), file2);
        if (gh[j][strlen(gh[j]) - 1] == '\n')
            gh[j][strlen(gh[j]) - 1] = '\0';
        // printf("%s",dh[j]);
        j++;
    }
    fclose(file2);
    j = 0;
    while (!feof(file3))
    {
        fgets(eh[j], sizeof(kh), file3);
        if (eh[j][strlen(eh[j]) - 1] == '\n')
            eh[j][strlen(eh[j]) - 1] = '\0';
        // printf("%s\n",eh[j]);
        j++;
    }
    fclose(file3);
    j = 0;
    while (!feof(file4))
    {
        fgets(fh[j], sizeof(kh), file4);
        if (fh[j][strlen(fh[j]) - 1] == '\n')
            fh[j][strlen(fh[j]) - 1] = '\0';
        // printf("%s\n",fh[j]);
        j++;
    }
    fclose(file4);
    j = word_num = 0;
    while (!feof(file5))
    {
        fgets(ch[j], sizeof(kh), file5);
        if (ch[j][strlen(ch[j]) - 1] == '\n')
            ch[j][strlen(ch[j]) - 1] = '\0';
        // printf("%s\n",ch[j]);
        j++;
        word_num++;
    }
    fclose(file5);
    int cntk = 0, cntm = 0, cntn = 0, cntz = 0;
    system("cls");
    printf("\t\t\t***************************************************************\n\n");
    printf("\t\t\t\t\t\tLine Wise Filter\n\n");
    printf("\t\t\t***************************************************************\n\n");
    for (j = 0; j < word_num - 1; j++)
    {

        k = m = n = z = l = 0;
        for (l = j; j < word_num - 1; j++)
        {
            for (int i = 0; i < 30; i++)
            {
                if (strcmp(dh[i], ch[j]) == 0)
                {

                    k = 1;
                    cntk++;

                }
                else if (strcmp(gh[i], ch[j]) == 0)
                {

                    m = 1;
                    cntm++;
                }

                else if (strcmp(eh[i], ch[j]) == 0)
                {

                    n = 1;
                    cntn++;

                }

                else if (strcmp(fh[i], ch[j]) == 0)
                {

                    z = 1;
                    cntz++;

                }
                if (k + m + n + z != 0) break;
            }
            char x = ch[j][strlen(ch[j]) - 1];
            if (x == '.' || strcmp(ch[j], ".") == 0 || x == '!' || strcmp(ch[j],"!")==0 || x == '?')
            {
                //  printf("yes\n");
                break;
            }
        }
        if (k + m + n + z == 0)
        {
            for (l; l <= j; l++)
            {
                printf("%s ", ch[l]);
            }
        }
        else
        {
            if (k)
                printf(" *(the line has got some curse word)* ");
            if (m)
                printf(" *(the line has got some hateful word)* ");
            if (n)
                printf(" *(the line has got some obscene word)* ");
            if (z)
                printf(" *(the line has got some insulting word)* ");
        }
    }
    printf("\n\n\n        the content has got %d cursed line\n", cntk);
    printf("\n\n\n        the content has got %d hateful line\n", cntm);
    printf("\n\n\n        the content has got %d obscene line\n", cntn);
    printf("\n\n\n        the content has got %d insulting line\n\n", cntz);
    // printf("yes");
}

void word()
{
    int j = 0, x, word_num;
    char ch[600][20], dh[60][20], eh[60][20], fh[60][20], gh[60][20], kh[39];
    FILE *file1 = fopen("curse.txt", "r");
    FILE *file2 = fopen("hateful.txt", "r");
    FILE *file3 = fopen("obscene.txt", "r");
    FILE *file4 = fopen("insulting.txt", "r");
    FILE *file5 = fopen("file5.txt", "r");
    while (!feof(file1))
    {
        fgets(dh[j], sizeof(kh), file1);
        if (dh[j][strlen(dh[j]) - 1] == '\n')
            dh[j][strlen(dh[j]) - 1] = '\0';
        // printf("%s",dh[j]);
        j++;
    }
    fclose(file1);
    j = 0;
    while (!feof(file2))
    {
        fgets(gh[j], sizeof(kh), file2);
        if (gh[j][strlen(gh[j]) - 1] == '\n')
            gh[j][strlen(gh[j]) - 1] = '\0';
        // printf("%s",dh[j]);
        j++;
    }
    fclose(file2);
    j = 0;
    while (!feof(file3))
    {
        fgets(eh[j], sizeof(kh), file3);
        if (eh[j][strlen(eh[j]) - 1] == '\n')
            eh[j][strlen(eh[j]) - 1] = '\0';
        // printf("%s\n",eh[j]);
        j++;
    }
    fclose(file3);
    j = 0;
    while (!feof(file4))
    {
        fgets(fh[j], sizeof(kh), file4);
        if (fh[j][strlen(fh[j]) - 1] == '\n')
            fh[j][strlen(fh[j]) - 1] = '\0';
        // printf("%s\n",fh[j]);
        j++;
    }
    fclose(file4);
    j = word_num = 0;
    while (!feof(file5))
    {
        fgets(ch[j], sizeof(kh), file5);
        if (ch[j][strlen(ch[j]) - 1] == '\n')
            ch[j][strlen(ch[j]) - 1] = '\0';
        // printf("%s\n",fh[j]);
        word_num++;
        j++;
    }
    fclose(file5);
    system("cls");
    printf("\t\t\t***************************************************************\n\n");
    printf("\t\t\t\t\t\tWord Wise Filter\n\n");
    printf("\t\t\t***************************************************************\n\n");
    int cntk = 0, cntm = 0, cntn = 0, cntz = 0;
    for (j = 0; j < word_num - 1; j++)
    {

        int k = 0;
        for (int i = 0; i < 30 ; i++)
        {

            if (strcmp(dh[i], ch[j]) == 0)
            {

                k = 1;
                printf("  ***(there is some curse word)***  ");
                cntk++;
            }

            // char kh=dh[i];
            else if (strcmp(gh[i], ch[j]) == 0)
            {

                k = 1;
                cntm++;
                printf("  ***(there is some hateful word)***  ");
            }


            // char kh=dh[i];
            else if (strcmp(eh[i], ch[j]) == 0)
            {

                k = 1;
                cntn++;
                printf("  ***(there is some obscene word)***  ");
            }


            // char kh=dh[i];
            else if (strcmp(fh[i], ch[j]) == 0)
            {

                k = 1;
                cntz++;
                printf("  ***(there is some insulting word)***  ");
            }
            if(k==1) break;
        }
        if (k == 0)
            printf("%s ", ch[j]);
    }
    printf("\n\n\n        the content has got %d cursed line\n", cntk);
    printf("\n\n\n        the content has got %d hateful line\n", cntm);
    printf("\n\n\n        the content has got %d obscene line\n", cntn);
    printf("\n\n\n        the content has got %d insulting line\n\n", cntz);
}

void omit_word()
{

    int i, j=0, k, m, n, z, l, word_num;
    char ch[600][20], dh[60][20], eh[60][20], fh[60][20], gh[60][20], kh[39];
    FILE *file1 = fopen("curse.txt", "r");
    FILE *file2 = fopen("hateful.txt", "r");
    FILE *file3 = fopen("obscene.txt", "r");
    FILE *file4 = fopen("insulting.txt", "r");
    FILE *file5 = fopen("file5.txt", "r");
    while (!feof(file1))
    {
        fgets(dh[j], sizeof(kh), file1);
        if (dh[j][strlen(dh[j]) - 1] == '\n')
            dh[j][strlen(dh[j]) - 1] = '\0';
        // printf("%s\n",dh[j]);
        j++;
    }
    fclose(file1);
    printf("lol");
    j = 0;
    while (!feof(file2))
    {
        fgets(gh[j], sizeof(kh), file2);
        if (gh[j][strlen(gh[j]) - 1] == '\n')
            gh[j][strlen(gh[j]) - 1] = '\0';
        //   printf("%s",gh[j]);
        j++;
    }
    fclose(file2);
    j = 0;
    while (!feof(file3))
    {
        fgets(eh[j], sizeof(kh), file3);
        if (eh[j][strlen(eh[j]) - 1] == '\n')
            eh[j][strlen(eh[j]) - 1] = '\0';
        // printf("%s\n",eh[j]);
        j++;
    }
    fclose(file3);
    j = 0;
    while (!feof(file4))
    {
        fgets(fh[j], sizeof(kh), file4);
        if (fh[j][strlen(fh[j]) - 1] == '\n')
            fh[j][strlen(fh[j]) - 1] = '\0';
        // printf("%s\n",fh[j]);
        j++;
    }
    fclose(file4);
    j = word_num = 0;
    while (!feof(file5))
    {
        fgets(ch[j], sizeof(kh), file5);
        if (ch[j][strlen(ch[j]) - 1] == '\n')
            ch[j][strlen(ch[j]) - 1] = '\0';
        // printf("%s\n",ch[j]);
        j++;
        word_num++;
    }
    fclose(file5);
    //    int cntk=0,cntm=0,cntn=0,cntz=0;
    system("cls");
    printf("\t\t\t***************************************************************\n\n");
    printf("\t\t\t\t\t\tWord Omitting Filter\n\n");
    printf("\t\t\t***************************************************************\n\n");
    for (j = 0; j < word_num - 1; j++)
    {

        k = m = n = z = l = 0;
        for (int i = 0; i < 30; i++)
        {

            if (strcmp(dh[i], ch[j]) == 0)
            {

                k = 1;
                //           cntk++;
            }


            else if (strcmp(gh[i], ch[j]) == 0)
            {

                m = 1;
                //               cntm++;
            }

            else if (strcmp(eh[i], ch[j]) == 0)
            {

                n = 1;
                //                cntn++;
            }

            else if (strcmp(fh[i], ch[j]) == 0)
            {

                z = 1;
                //  cntz++;
            }
        }

        if (k + m + n + z == 0)
        {
            printf("%s ", ch[j]);
        }

    }
}

void notify_check()
{
    int j = 0, x, word_num;
    char ch[600][20], dh[60][20], eh[60][20], fh[60][20], gh[60][20], kh[39];
    FILE *file1 = fopen("curse.txt", "r");
    FILE *file2 = fopen("hateful.txt", "r");
    FILE *file3 = fopen("obscene.txt", "r");
    FILE *file4 = fopen("insulting.txt", "r");
    FILE *file5 = fopen("file5.txt", "r");
    while (!feof(file1))
    {
        fgets(dh[j], sizeof(kh), file1);
        if (dh[j][strlen(dh[j]) - 1] == '\n')
            dh[j][strlen(dh[j]) - 1] = '\0';
        // printf("%s",dh[j]);
        j++;
    }
    fclose(file1);
    j = 0;
    while (!feof(file2))
    {
        fgets(gh[j], sizeof(kh), file2);
        if (gh[j][strlen(gh[j]) - 1] == '\n')
            gh[j][strlen(gh[j]) - 1] = '\0';
        // printf("%s",dh[j]);
        j++;
    }
    fclose(file2);
    j = 0;
    while (!feof(file3))
    {
        fgets(eh[j], sizeof(kh), file3);
        if (eh[j][strlen(eh[j]) - 1] == '\n')
            eh[j][strlen(eh[j]) - 1] = '\0';
        // printf("%s\n",eh[j]);
        j++;
    }
    fclose(file3);
    j = 0;
    while (!feof(file4))
    {
        fgets(fh[j], sizeof(kh), file4);
        if (fh[j][strlen(fh[j]) - 1] == '\n')
            fh[j][strlen(fh[j]) - 1] = '\0';
        // printf("%s\n",fh[j]);
        j++;
    }
    fclose(file4);
    j = word_num = 0;
    while (!feof(file5))
    {
        fgets(ch[j], sizeof(kh), file5);
        if (ch[j][strlen(ch[j]) - 1] == '\n')
            ch[j][strlen(ch[j]) - 1] = '\0';
        // printf("%s\n",fh[j]);
        word_num++;
        j++;
    }
    fclose(file5);
    int cntk = 0, cntm = 0, cntn = 0, cntz = 0;
    system("cls");
    printf("\t\t\t***************************************************************\n\n");
    printf("\t\t\t\t\t\tCheck And Notify Filter\n\n");
    printf("\t\t\t***************************************************************\n\n");
    for (j = 0; j < word_num - 1; j++)
    {

        int k = 0;
        for (int i = 0; i < 30 ; i++)
        {

            if(strcmp(dh[i], ch[j]) == 0)
            {

                k = 1;
                printf("\n        There is some curse word if you want to see it then press 1 if don't then press 2 \n         ");
                scanf("%d", &cntz);
                if (cntz == 1)
                {
                    fputs("\033[A\033[2K\033[A\033[2K", stdout);
                    printf(" *%s ", ch[j]);
                    break;
                }
                else
                    fputs("\033[A\033[2K\033[A\033[2K", stdout);
            }


            // char kh=dh[i];
            else if (strcmp(gh[i], ch[j]) == 0)
            {

                k = 1;

                printf("\n      There is some hateful word if you want to see it then press 1 if don't then press 2 \n         ");
                scanf("%d", &cntz);
                if (cntz == 1)
                {
                    fputs("\033[A\033[2K\033[A\033[2K", stdout);
                    printf(" *%s ", ch[j]);
                    break;
                }
                else
                    fputs("\033[A\033[2K\033[A\033[2K", stdout);
            }

            // char kh=dh[i];
            else if (strcmp(eh[i], ch[j]) == 0)
            {

                k = 1;
                printf("\n      There is some obscene word if you want to see it then press 1 if don't then press 2 \n         ");
                scanf("%d", &cntz);
                if (cntz == 1)
                {
                    fputs("\033[A\033[2K\033[A\033[2K", stdout);
                    printf(" *%s ", ch[j]);
                    break;
                }
                else
                    fputs("\033[A\033[2K\033[A\033[2K", stdout);
            }


            // char kh=dh[i];
            else if (strcmp(fh[i], ch[j]) == 0)
            {

                k = 1;
                printf("\n      There is some insulting word if you wnat to see it then press 1 if don't then press 2  \n      ");
                scanf("%d", &cntz);
                if (cntz == 1)
                {
                    fputs("\033[A\033[2K\033[A\033[2K", stdout);
                    printf(" *%s ", ch[j]);
                    break;
                }
                else
                    fputs("\033[A\033[2K\033[A\033[2K", stdout);
            }
        }
        if (k == 0)

            printf("%s ", ch[j]);
    }
}
void omit_line()
{
    int i, j = 0, k, m, n, z, l, word_num;
    char ch[600][20], dh[60][20], eh[60][20], fh[60][20], gh[60][20], kh[39];
    FILE *file1 = fopen("curse.txt", "r");
    FILE *file2 = fopen("hateful.txt", "r");
    FILE *file3 = fopen("obscene.txt", "r");
    FILE *file4 = fopen("insulting.txt", "r");
    FILE *file5 = fopen("file5.txt", "r");
    while (!feof(file1))
    {
        fgets(dh[j], sizeof(kh), file1);
        if (dh[j][strlen(dh[j]) - 1] == '\n')
            dh[j][strlen(dh[j]) - 1] = '\0';
        // printf("%s\n",dh[j]);
        j++;
    }
    fclose(file1);
    j = 0;
    while (!feof(file2))
    {
        fgets(gh[j], sizeof(kh), file2);
        if (gh[j][strlen(gh[j]) - 1] == '\n')
            gh[j][strlen(gh[j]) - 1] = '\0';
        // printf("%s",dh[j]);
        j++;
    }
    fclose(file2);
    j = 0;
    while (!feof(file3))
    {
        fgets(eh[j], sizeof(kh), file3);
        if (eh[j][strlen(eh[j]) - 1] == '\n')
            eh[j][strlen(eh[j]) - 1] = '\0';
        // printf("%s\n",eh[j]);
        j++;
    }
    fclose(file3);
    j = 0;
    while (!feof(file4))
    {
        fgets(fh[j], sizeof(kh), file4);
        if (fh[j][strlen(fh[j]) - 1] == '\n')
            fh[j][strlen(fh[j]) - 1] = '\0';
        // printf("%s\n",fh[j]);
        j++;
    }
    fclose(file4);
    j = word_num = 0;
    while (!feof(file5))
    {
        fgets(ch[j], sizeof(kh), file5);
        if (ch[j][strlen(ch[j]) - 1] == '\n')
            ch[j][strlen(ch[j]) - 1] = '\0';
        // printf("%s\n",ch[j]);
        j++;
        word_num++;
    }
    fclose(file5);
    int cntk = 0, cntm = 0, cntn = 0, cntz = 0;
    system("cls");
    printf("\t\t\t***************************************************************\n\n");
    printf("\t\t\t\t\t\tLine Omitting Filter\n\n");
    printf("\t\t\t***************************************************************\n\n");
    for (j = 0; j < word_num - 1; j++)
    {

        k = m = n = z = l = 0;
        for (l = j; j < word_num - 1; j++)
        {
            for (int i = 0; i < 30; i++)
            {
                if (strcmp(dh[i], ch[j]) == 0)
                {

                    k = 1;
                    cntk++;

                }
                else if (strcmp(gh[i], ch[j]) == 0)
                {

                    m = 1;
                    cntm++;
                }

                else if (strcmp(eh[i], ch[j]) == 0)
                {

                    n = 1;
                    cntn++;

                }

                else if (strcmp(fh[i], ch[j]) == 0)
                {

                    z = 1;
                    cntz++;

                }
                if (k + m + n + z != 0) break;
            }
            char x = ch[j][strlen(ch[j]) - 1];
            if (x == '.' || strcmp(ch[j], ".") == 0 || x == '!' || strcmp(ch[j],"!")==0 || x == '?')
            {
                //  printf("yes\n");
                break;
            }
        }
        if (k + m + n + z == 0)
        {
            for (l; l <= j; l++)
            {
                printf("%s ", ch[l]);
            }
        }

    }
    printf("\n\n\n        the content has got %d cursed line\n", cntk);
    printf("\n\n\n        the content has got %d hateful line\n", cntm);
    printf("\n\n\n        the content has got %d obscene line\n", cntn);
    printf("\n\n\n        the content has got %d insulting line\n\n", cntz);
    // printf("yes");
}
