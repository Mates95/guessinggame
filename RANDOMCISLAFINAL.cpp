//Guessing game, random cislo <1,100>, INPUT: tip pouzivatela, 7x pokusov, mensie alebo vacsie, urobte to ako cyklus
#include <ctime>
#include <iostream>
using namespace std;

int main()
{
    char pokracovanie='a';
    srand(time(NULL));
    int random,tip;
    int body=0;

    while (pokracovanie=='a')
    {
        int uhadnute=0;
        int i=0;
        random = rand()%100+1;
        cout<<endl<<random<<endl;

        while ((uhadnute==0)&&(i<=6))
        {

            cout<<endl<<"Zadajte Vas celociselny tip: "<<endl;
            cin>>tip;
            if(tip==random)
            {
                cout<<endl<<"Gratulujem, uhadli ste cislo, zadane cislo bolo: "<<random<<endl;
                uhadnute++;
            }
            else if(tip>random)
            {
                cout<<endl<<"Hadane cislo je mensie ako ste zadali."<<endl;

            }
            else if(tip<random)
            {
                cout<<endl<<"Hadane cislo je vacsie ako ste zadali"<<endl;

            }
            i++;

        }
        if(uhadnute==0)
        {
            cout<<endl<<"Neuhadli ste zadane cislo v 7 pokusoch"<<endl;
        }
        if (uhadnute==1)
        {
            body=body+(8-i);

        }
        cout<<endl<<"Pokial chcete zacat dalsiu hru zadajte: a; pokial nechcete pokracovat v hrani zadajte: n"<<endl;
        cin>>pokracovanie;
    }
    cout<<endl<<"Vase finalne skore je: "<<body;

    return 0;
}
