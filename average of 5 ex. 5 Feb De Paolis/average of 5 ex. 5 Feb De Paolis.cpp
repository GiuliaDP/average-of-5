// average of 5 ex. 5 Feb De Paolis.cpp : Questo file contiene la funzione 'main', in cui inizia e termina l'esecuzione del programma.
//

#include  <iostream>
using namespace std;

int main() {
	//prompt to get 3 user's numbers

	cout << "Please enter number 1: ";
	float num1;
	cin >> num1;

	cout << "Please enter number 2: ";
	float num2;
	cin >> num2;

	cout << "Please enter number 3: ";
	float num3;
	cin >> num3;

	cout << "Please enter number 4: ";
	float num4;
	cin >> num4;

	cout << "Please enter number 5: ";
	float num5;
	cin >> num5;

	//calculate sum
	float sum = num1 + num2 + num3 + num4 + num5;

	//get the average
	float average = sum / 5;

	//print average
	cout << "Your average is  " << average;
}



// Per eseguire il programma: CTRL+F5 oppure Debug > Avvia senza eseguire debug
// Per eseguire il debug del programma: F5 oppure Debug > Avvia debug

// Suggerimenti per iniziare: 
//   1. Usare la finestra Esplora soluzioni per aggiungere/gestire i file
//   2. Usare la finestra Team Explorer per connettersi al controllo del codice sorgente
//   3. Usare la finestra di output per visualizzare l'output di compilazione e altri messaggi
//   4. Usare la finestra Elenco errori per visualizzare gli errori
//   5. Passare a Progetto > Aggiungi nuovo elemento per creare nuovi file di codice oppure a Progetto > Aggiungi elemento esistente per aggiungere file di codice esistenti al progetto
//   6. Per aprire di nuovo questo progetto in futuro, passare a File > Apri > Progetto e selezionare il file con estensione sln
