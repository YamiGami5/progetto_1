#include <stdio.h>
#include <cs50.h>

void spaziperordine(void);
void PrintMenu(void);

int main()
{
    int OptionNumber = 0;

    while(OptionNumber!=-1)
    {
        OptionNumber = get_int("Scegliere tra le varie opzioni, digitare \"-1\" per terminare l'esecuzione del programma.\n"
                               "premere \"1\" per la lista dei comandi disponibili\n");
        spaziperordine();
        switch(OptionNumber)
        {
            case 1:
                PrintMenu();
                break;
            case -1:
                printf("programma arrestato\n\n");
                break;
            default:
                printf("an error had occoured\n");
                break;
        }
    }
}


void PrintMenu(void)
{
     printf("premere 10 per inserire un alunno nella lista alunni\n"
                       "premere 11 per inserire voto\n"
                       "premere 12 per rimuovere un alunno dalla lista alunni\n"
                       "premere 13 per visualizzare la lista alunni\n"
                       "premere 14 per cercare un alunno nella lista alunni\n"
                       "premere 15 per ordinare gli alunni per media\n"
                       "premere 16 per ordinare gli alunni secondo ordine alfabetico\n");
    spaziperordine();
}

void spaziperordine(void)
{
    printf("\n\n\n");
}
