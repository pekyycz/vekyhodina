#include <iostream>
using namespace std;

void vypisVeku (int pole [], int pocet){
    cout << "veky jsou: ";
    for (int i = 0; i < pocet; i++){
        cout << pole [i] << " " << endl;
    }
    cout<<endl;
}

float vypocitejPrumer (int pole [], int pocet){
    int soucet = 0;
    for (int i = 0; i < pocet;i++){
        soucet = soucet + pole[i];
    }
    float prumer = (float)soucet / pocet;
    cout << "prumer veku je: " << prumer << endl;
}

void soucetNezletilych (int pole [], int pocet){
    int pocetNezletilych = 0;
    for (int i = 0; i < pocet; i++){
        if (pole[i] < 18){
            pocetNezletilych++;
        }
    }
    cout << "Pocet nezletilych je: " << pocetNezletilych << endl;
}


void najdiExtrema(int pole[], int pocet, int &minimum, int &maximum){
            if (pocet == 0){
        cout << "nebylo nalezeno zadne cislo."<<endl;
        return;
    }

    minimum = pole[0];
    maximum = pole[0];

    for (int i = 1; i < pocet; i++){
        if (pole[i] < minimum){
            minimum = pole [i];
        }
        if (pole[i] > maximum){
        maximum = pole[i];
    }

}
}

int main (){
    int pole [10], pocet = 0;
    int volba;

    cout << "zadejte maximalne 10 veku: " << endl;
    while (pocet < 10 && cin >> pole[pocet]){
        pocet++;
    }


    do {
        cout << "-------------- MENU --------------" << endl;
        cout << "1 - Zobrazit vsechna veky"<<endl;
        cout << "2 - vypocitani prumeru"<<endl;
        cout << "3 - pocet nezletilych" << endl;
        cout << "4 - najit nejmensi a nejvetsi cislo"<<endl;
        cout << "5 - ukonceni programu" << endl;
        cout << "------- vyber moznost ------- (1-5) : " <<endl;

        cin >> volba;

        switch (volba){
        case 1:
            vypisVeku (pole, pocet);
            break;
        case 2:
            vypocitejPrumer (pole, pocet);
            break;
        case 3:
            soucetNezletilych (pole, pocet);
            break;
        case 4:{
           int min, max;
           najdiExtrema(pole, pocet, min, max);
           cout << "nejmensi cislo je: " << min << endl;
           cout << "nejvetsi cislo je: " << max << endl;
           break;
        }
        case 5:
            cout << "ukonceni programu"<<endl;
            break;
        default:
            cout << "neplatne cislo, zkuste to znovu"<<endl;
}
    } while (volba != 5);

    return 0;

    }
