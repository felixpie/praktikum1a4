/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: Felix Piesker
 * Programmbeschreibung: Der Nutzer wird aufgefordert 3 ganze Zahlen zwischen 0 und 999 einzugeben. Das
 * Programm berechnet die Summe und das Produkt der 3 Zahlen sowie den Quotienten
 * und die Differenz für jeweils aufeinanderfolgende Zahlen.
 * Created on April 20, 2018, 7:16 PM
 */

#include <iostream>

using std::cout;
using std::cin;

/*
 * 
 */
int main() {
    int ix{};   // Deklaration, Definition und Initialisierung der Variablen
    int iy{};
    int iz{};
     
    while(true){
        
            cout<<"Bitte 3 ganze Zahlen zwischen 0 und 999 eingeben und mit Enter bestaetigen.\n";
             if(!(cin>> ix >> iy >> iz)){
                cout<<"Fehler: Ungueltiges Zeichen eingegeben\n"; 
                cin.clear();
                cin.ignore(10000, '\n');
                ix = 0;
                iy = 0;
                iz = 0;
             }// Eingabe der 3 Zahlen durch den Nutzer  
             else if (ix > 999 || ix < 0 || iy > 999 || iy < 0 || iz > 999 || iz < 0){
                cout<<"Fehler: Ungueltiger Wertebereich\n";
             }    
             else {
                break;  
             }
                                     
    }
    
    
    // Überprüfung ob die Zahlen im angegebenen Bereich liegen. Nutzereingabe wird so lange wiederholt bis der Bereich stimmt
    
    
    
    int sum  {ix + iy + iz}; // Berechnen der Summe
    int prod {ix * iy * iz}; // Berechnen des Produktes
    //Ausgabe von Summe und Produkt
    cout << "Summe von " << ix << " und " << iy << " und "  << iz << ": " << sum << "\n";
    cout << "Produkt von " << ix << " und " << iy << " und " << " und " << iz << ": " << prod << "\n";
    
    double diff1 = ix - iy; // Berechnen der Differenzen
    double diff2 = iy - iz;
    
        // Ausgabe der Differenzen 
    cout << "Differenz von " << ix << " und " << iy << ": " << diff1 << "\n";
    cout << "Differenz von " << iy << " und " << iz << ": " << diff2 << "\n";
    
   
    double dx = ix; // Umwandlung der Integervariablen in double zur Berechnung des Quotienten
    double dy = iy;
    double dz = iz;
    if(dy!=0){ // Überprüfung ob Divisor 0 ist
        double quot1{dx / dy}; // Berechnung der Quotienten
        cout << "Quotient von " << ix << " und " << iy << ": " << quot1 << "\n";
    }
    else{ // Es darf nicht durch 0 geteilt werden
        cout << "Fehler dy ist 0 und es darf nicht durch 0 geteilt werden\n";
    }
    
    if(dz!=0){ // Überprüfung ob Divisor 0 ist
        double quot2 {dy / dz}; // Berechnung der Quotienten
        cout << "Quotient von " << iy << " und " << iz << ": " << quot2 << "\n";
    }
    else{   // Es darf nicht durch 0 geteilt werden
        cout << "Fehler dz ist 0 und es darf nicht durch 0 geteilt werden\n";
    }
    
    return 0;
}

