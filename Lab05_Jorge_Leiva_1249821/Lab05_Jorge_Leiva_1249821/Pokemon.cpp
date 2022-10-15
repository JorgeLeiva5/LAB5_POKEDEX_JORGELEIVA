#pragma once
#include<vector>
using namespace std;
#include"Pokemon.h"
#include"MyForm.h"

Orden* POKEMON = new Orden;

void Orden::SelectionSort(double v[], int n) {
    int indice_menor;
    for (int i = 0; i < (n - 1); i++) {
        indice_menor = i;
        for (int j = (i + 1); j < n; j++) {
            if (v[j] < v[indice_menor]) {
                indice_menor = j;
            }
        }
        swap(v[i], v[indice_menor]);
    }
}


void Orden::QuickSort(double v[], int inicio, int final) {
    int p;
    if (inicio < final) {
        p = DividirVector(v, inicio, final);
        QuickSort(v, inicio, p - 1);
        QuickSort(v, p + 1, final);
    }
}
int Orden::DividirVector(double v[], int inicio, int final) {
    int p = v[inicio];
    int i = inicio + 1;
    for (int j = i; j <= final; j++) {
        if (v[j] < p) {
            swap(v[i], v[j]);
            i++;
        }
    }
    swap(v[inicio], v[i - 1]);
    return i - 1;
}


void Orden::ShellSort(double v[], int n) {
    for (int i = n / 2; i > 0; i /= 2)
    {
        for (int j = i; j < n; j += 1)
        {
            double temp = v[j];
            int k;
            for (k = j; k >= i && v[k - i] > temp; k -= i)
            {
                v[k] = v[k - i];
            }
            v[k] = temp;
        }
    }
}