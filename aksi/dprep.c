#include <stdio.h>
#include "./prepaksi.h"
#include "../boolean.h"
#include <stdlib.h>
#include "../array/array.h"
#include "../mesin/mesinkar.h"
#include "../mesin/mesinkata.h"
#include "../Tree/bintree.h"
#include "../stack/stack.h"
#include "../Jam/jam.h"
#include "../matriks/matriks.h"
#include "../point/point.h"

// gcc -std=c99 -o dprep dprep.c prepaksi.o ../array/array.o ../mesin/mesinkata.o ../mesin/mesinkar.o ../stack/stack.o ../jam/jam.o
// gcc -std=c99 -o dprep dprep.c ./prepaksi.o ../mesin/mesinkata.o ../array/array.o ../mesin/mesinkar.o ../Tree/bintree.o ../stack/ stack.o ../jam/jam.o ../matriks/matriks.o ../point/point.o ../Graph/graph.o
int main() {
    TabInt Inven;
    aksitype CurrentAksi;
    int CurrentWahana, CurrentUpgrades;
    boolean cek;
    MakeEmpty(&Inven);
    BinTree W1,W2,W3;
    MATRIKS M1;
    
    BacaWahana(&W1,&W2,&W3);
    int money = 5000;
    printf("Initial Money: %d", money);
    BacaMaterial(&Inven);
    SetAllValueX(&Inven, 0);
    TulisIsiTab(Inven);
    printf("\n");
    printf("Initial Inventory:");
    TulisIsiTab(Inven);
    printf("\n");
    MenuUpgrade(&Inven, W1, W2, W3, 3, &cek, &CurrentUpgrades);
    // TulisIsiTab(Inven);
    // printf("\nFinal Money: %d\n", money);
    // printf("Initial Inventory:");
    // TulisIsiTab(Inven);
    if(cek){
        Upgrade(&M1, &Inven, W1, W2, W3, 3, CurrentUpgrades);
    }
    TulisIsiTab(Inven);
    printf("\n");
    return 0;
}

// gcc -std=c99 -o dprep dprep.c ./prepaksi.o ../mesin/mesinkata.o ../array/array.o ../mesin/mesinkar.o ../Tree/bintree.o ../stack/stack.o ../jam/jam.o ../matriks/matriks.o ../point/point.o ../Graph/graph.o