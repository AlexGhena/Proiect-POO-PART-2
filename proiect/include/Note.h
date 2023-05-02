#ifndef NOTE_H
#define NOTE_H
#include <bits/stdc++.h>
#include <vector>
#include <iostream>
using namespace std;


class Note
{
private:
    int note[10];
    int nr_note;

public:
    Note() {
        nr_note = 0;
        for(int i=0;i<10;i++)
            note[i]=0;
    }

    void adauganota(int nota) {
    if(nr_note >= 10) {
        throw out_of_range("Numarul de note este limitat la 10.");
    }
    if(nota <= 0 || nota >= 11) {
        throw invalid_argument("Nota trebuie sa fie intre 1 si 10.");
    }
    note[nr_note] = nota;
    nr_note++;
}


    void afisnote() const {
        for(int i=0;i<nr_note;i++) {
            cout << note[i] << " ";
        }
        cout <<endl;
    }

    virtual int media() const {
        int suma = 0;
        for(int i=0;i<nr_note;i++) {
            suma += note[i];
        }
        return suma / nr_note;
    }

    virtual int max_nota() const {
        int max_n = 0;
        for(int i=0;i<nr_note;i++) {
            if(note[i] > max_n) {
                max_n = note[i];
            }
        }
        return max_n;
    }

    virtual int min_nota() const {
        int min_n = 10;
        for(int i=0;i<nr_note;i++) {
            if(note[i] < min_n) {
                min_n = note[i];
            }
        }
        return min_n;
    }


};

#endif // NOTE_H
