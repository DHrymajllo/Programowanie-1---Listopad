/*
1. Zmienne, komunikacja z u�ytkownikiem. Instrukcje warunkowe
Uwaga! Nale�y pami�ta� o dodaniu odpowiednich nag��wk�w do funkcji. Dla std::cin i std::cout jest to <iostream>, a dla printf i scanf jest
to <stdio.h> lub <cstdio.h>
*/
#include <iostream>
#include <math.h>

using namespace std;

void menu()
{
    cout << "1 --> 1.1" << endl;
    cout << "2 --> 1.2/*Patrz plik zrodlowy*/" << endl;
    cout << "3 --> 1.3" << endl;
    cout << "4 --> 1.4" << endl;
    cout << "5 --> 1.5" << endl;
    cout << "6 --> 1.6" << endl;
    cout << "7 --> 2.1" << endl;
    cout << "8 --> 2.2" << endl;
    cout << "9 --> 2.3" << endl;
    cout << "10 --> 2.4" << endl;
    cout << "11 --> 2.5" << endl;
    cout << "12 --> 2.6" << endl;
    cout << "13 --> 2.7" << endl;
    cout << "14 --> 2.8" << endl;
    cout << "15 --> 2.9" << endl;
    cout << "16 --> 3.1/*Patrz plik zrodlowy*/" << endl;
    cout << "17 --> 3.2/*Patrz plik zrodlowy*/" << endl;
    cout << "18 --> 3.3/*Patrz plik zrodlowy*/" << endl;
    cout << "19 --> 3.4/*Patrz plik zrodlowy*/" << endl;
}
/*
1.1. Zadeklarowac zmienne typu int, float, char. Przypisac do nich wartosc, wyswietlic je na ekran.
*/
void zadanie1_1()
{
    int x=1;
    float y=2;
    char z='k';
    cout << "Wartosci zmiennych:" << endl;
    cout << "int x=" << x << endl;
    cout << "float y=" << y << endl;
    cout << "char z=" << z << endl;
}
/*
1.2. Wyswietlic zmienna typu int na ekran. Nalezy uzyc metody printf i konstrukcji %d
*/
void zadanie1_2()
{
/*
int main()
{
    int x;
    printf("Podaj liczbe: ");
    scanf("%d", &x);
    printf("Twoja liczba to: %d \n", x);
}
*/
}
/*
1.3. Pobrac od u�ytkownika liczbe x. Wy�wietlic kwadrat liczby x.
*/
void zadanie1_3()
{
    int x,y=2;
    cout << "Jaka wartosc ma miec liczba x ?" << endl;
    cin >> x;
    cout << "Kwadrat liczby x jest rowny: " << pow(x,y) << endl;
}
/*
1.4. Zapozna� si� z instrukcjami warunkowymi (if, else if, else oraz switch). Pobra� od u�ywkownika liczb� i wy�wietli� informacj�, czy jest
ona: mniejsza, wi�ksza, czy r�wna 0.
*/
void zadanie1_4()
{
    int x;
    char z;
    switch(z)
    cout << endl;
    cout << "Wpisz wartosc liczby x: ";
    cin >> x;
    if (x<0){
        cout << "Wartosc funkcji x mniejsza od 0 !!!" << endl;
    }
    else if (x>0){
        cout << "Wartosc funkcji x wieksza od 0 !!!" << endl;
    }
    else if(x==0){
        cout << "Wartosc funkcji x rowna 0 !!!" << endl;
    }
    else{
        cout << "Zaden z warunkow nie zostal spelniony !!!" << endl;
    }
}
/*
1.5. Pobra� ud u�ytkownika 3 liczby (x1, x2, x3). Wy�wietli� informacj�, kt�ra z tych liczb jest najwi�ksza.
*/
void zadanie1_5()
{
    int x1,x2,x3;
    cout << "Wpisz wartosc zmiennej x1: ";
    cin >> x1;
    cout << "Wpisz wartosc zmiennej x2: ";
    cin >> x2;
    cout << "Wpisz wartosc zmiennej x3: ";
    cin >> x3;
    if(x1 > x2 && x1 > x3) cout << "Najwieksza wartosc ma zmienna x1: " << x1 << endl;
    if(x2 > x1 && x2 > x3) cout << "Najwieksza wartosc ma zmienna x2: " << x2 << endl;
    if(x3 > x1 && x3 > x2) cout << "Najwieksza wartosc ma zmienna x3: " << x3 << endl;
}
/*
1.6. Napisa� prosty kalkulator. Nale�y pobra� od u�ytkownika 2 liczby oraz operator (jeden z czterech: mno�enie, dzielenie, dodawanie,
odejmowanie). Wymagane jest utworzenie prostego menu u�ytkownika. Uwaga - nale�y pami�ta� o u�amkach (1/3 powinno da� 0.33, a nie
0)
*/
void zadanie1_6()
{
int x, y, z;
cout << "Wprowadz liczbe do operacji: ";
cin >> x;
cout << "Co chcesz zrobic? 1=dodac | 2=odjac | 3=pomnozyc | 4=podzielic" << endl;
cout << "Wybor nr: ";
cin >> z;

switch (z){
case 1:
    cout << "Ile dodac?: ";
    cin >> y;
    cout << "Liczba po zsumowaniu wynosi: " << x+y << endl;
    break;
case 2:
    cout << "Ile odjac?: ";
    cin >> y;
    cout << "Liczba po odjeciu wynosi: " << x-y << endl;
    break;
case 3:
    cout << "Ile razy pomnozyc?: ";
    cin >> y;
    cout << "Liczba po pomnozeniu wynosi: " << x*y << endl;
    break;
case 4:
    cout << "Przez jaka liczbe podzielic?: ";
    cin >> y;
    cout << "Liczba po podzieleniu wynosi: " << x/y << endl;
    break;
}
}
/*
2.1. Zapozna� si� z p�tl� while. P�tla ta s�u�y do wielokrotnego wykonania fragmentu kodu przez NIEZNAN� Z G�RY ilo�� razy. P�tla
wykonuje si� zawsze, je�li warunek jest prawdziwy (ewaluowany do true). Napisa� p�tl�, w kt�ej u�ytkownik podaje liczb� x. Nale�y
wy�wietli� t� liczb�. Je�eli u�ytkownik poda 0, nale�y zako�czy� program.
*/
void zadanie2_1()
{
    int x;
    do{
    cout << "Wpisz liczbe 0 aby zakonczyc petle" << endl;
    cout << "Wprowadz liczbe: ";
    cin >> x;
    cout << "Twoja liczba to: " << x << endl;
    cout << endl;
    } while(x != 0);
    cout << "Koniec petli" << endl;
}
/*
2.2. Przerobi� kalkulator z zadania 1.6. Teraz po ka�dym dzia�aniu program powinien spyta� u�ytkownika, czy ten chce powt�rzy�
wszystko od pocz�tku. Je�li tak - restartujemy kalkulator i zaczynamy od nowa. Je�li nie - ko�czymy program.
*/
void zadanie2_2()
{
char znak;
int x, y, z;
do{
cout << "Wprowadz liczbe do operacji: ";
cin >> x;
cout << "Co chcesz zrobic? 1=dodac | 2=odjac | 3=pomnozyc | 4=podzielic" << endl;
cout << "Wybor nr: ";
cin >> z;

switch (z){
case 1:
    cout << "Ile dodac?: ";
    cin >> y;
    cout << "Liczba po zsumowaniu wynosi: " << x+y << endl;
    break;
case 2:
    cout << "Ile odjac?: ";
    cin >> y;
    cout << "Liczba po odjeciu wynosi: " << x-y << endl;
    break;
case 3:
    cout << "Ile razy pomnozyc?: ";
    cin >> y;
    cout << "Liczba po pomnozeniu wynosi: " << x*y << endl;
    break;
case 4:
    cout << "Przez jaka liczbe podzielic?: ";
    cin >> y;
    cout << "Liczba po podzieleniu wynosi: " << x/y << endl;
    break;
}
cout <<"Czy chcesz powtorzyc wszystko od poczatku?"<< endl;
cout << "Wybor[t/n]: ";
cin >> znak;
}while (znak != 'n');
//return 0;
}
/*
2.3. Pobra� od u�ytkownika liczb� x. Nale�y wy�wietli� wszystkie kolejne pot�gi liczby x. Zako�czy� program, kiedy liczba przekroczy 100
000.
*/
void zadanie2_3()
{
    int x, y, i=2;
    cout << "Wprowadz liczbe: ";
    cin >> x;
    y=x;
    while(x <= 100000){
    x=x*y;
    cout << x << endl;
    i++;
    }
}
/*
2.4. Pobra� od u�ytkownika liczb� x. Je�li liczba jest niedodatnia - nale�y zako�czy� program. Nast�pnie nale�y wy�wietla� kolejno (w
nowej linii) wszystkie liczby mniejsze od x, a� osi�gni�te zostanie 0.
*/
void zadanie2_4()
{
    int x;
    cout << "Wprowadz liczbe: ";
    cin >> x;
    while (x<0){
       return void(0);
    }
    while (x>=0)
    {
        cout << x << endl;
        x--;
    }
}
/*
2.5. Zapozna� si� z instrukcjami continue; i break;. Pierwsza s�u�y do zako�czenia iteracji i przej�cia do nast�pnej, a druga natychmiast
ko�czy p�tl�. Przerobi� program z zadania 1.4, aby wy�wietla� tylko parzyste liczby (u�y� if oraz continue). Je�li liczba wynosi 40, nale�y
wyj�� z p�tli i zako�czy� program.
*/
void zadanie2_5() /*Tu powinno sie uzyc wlasciwie petli while?. Uzylem petli z zadania 2.3 (1.4 nic nie posiada)*/
{
    int x, y, i=2;
    cout << "Wprowadz liczbe: ";
    cin >> x;
    y=x;
    if (x == 40){
        return void (0);
    }
    while(x <= 40){
    x=x*y;
    cout << x << endl;
    i++;
    }
}
/*
2.6. Zapozna� si� z p�tl� for. P�tla s�u�y do wykonania danego fragmentu kodu ZNAN� Z G�RY okre�lon� ilo�� razy. Uwaga - ka�d� p�tl�
for mo�na zast�pi� p�tl� while i wzajemnie. Zwyczajowo obowiazuje zasada, �e je�li ilo�� iteracji jest znana - u�ywamy for, a je�li nie jest
znana (zale�y od u�ytkownika lub jakiego� stanu zewn�trznego) - u�ywamy p�tli while. P�tla for sk�ada si� z: ZMIENNEJ ITERACYJNEJ,
czyli stanu pocz�tkowego p�tli, np. int i = 0. Nast�pnie WARUNKU ZAKO�CZENIA P�TLI, np. i<10. Nast�pnie OPERACJI WYKONYWANEJ
PO KA�DEJ ITERACJI - zazwyczaj jest to zwi�kszenie iteratora o 1, czyli i = i + 1, b�d� w skr�cie i++. Napisa� p�tl� for, kt�ra wy�wietli cyfry
od 0 do 9.
*/
void zadanie2_6()
{
    for( int i = 0; i <= 9; i++ ){
        cout << i << endl;
    }
}
/*
2.7. Pobra� od u�ytkownika liczby x i y. Zak�adamy, �e y > x (zawsze, nie musimy tego sprawdza�). Za pomoc� p�tli for wypisa� liczby
mi�dzy x a y (do przemy�lenia - co jest stanem pocz�tkowym, a co warunkiem zako�czenia p�tli?)
*/
void zadanie2_7()
{
    int x, y;
    cout << "Podaj zakres liczb od "<
    cin >> x;
    cout << "do "<
    cin >> y;

    for(int i = x+1; i < y; i++){
        cout << i << endl;
    }
}
/*
2.8. Pobra� od u�ytkownika liczb� x. Za pomoc� p�tli for wypisa� wszystkie liczby mniejsze od x, ale wi�ksze ni� 0.
*/
void zadanie2_8()
{
    int x, y=0;
    cout << "Podaj wartosc liczby x: ";
    cin >> x;

    for(int i = y; i < x; i++){
        cout << i << endl;
    }
}
/*
2.9. Pobra� od u�ytkownika liczb� x. Za pomoc� p�tli for wypisywa� CO TRZECI� liczb� wi�ksz� od x. P�tla powinna si� zako�czy�, je�li
liczba przekroczy 100. Uwaga - prosz� nie u�ywa� operacji continue i break, a sterowa� tylko parametrami p�tli.
*/
void zadanie2_9()
{
    int x, y=100;
    cout << "Podaj wartosc liczby x: ";
    cin >> x;

    for(int i = x; i < y; i+=3){
        cout << i << endl;
    }
}
/*
3.1. Napisa� metod� void NewLine(). Powinna ona wypisa� na ekran pojedyncz� pust� lini�. U�y� tej metod� w main().
*/
void zadanie3_1() //Funkcja zostala uzyta w int main na dole***
{
    void NewLine();
    /* int main(){
        NewLine(1);
    }
    */
}
/*
3.2. Napisa� metod� void NewLines(int count). Powinna ona wypisa� tyle nowych linii, ile zosta�o podanych W PARAMETRZE count (nale�y
u�y� p�tli for). U�y� metod� w main()
*/
void zadanie3_2()
{
    void NewLines();
    /* int main(){
        NewLines(5);
    }
    */
}
/*
3.3. Napisa� metod� void WriteBiggerNumber(int x, int y). Metoda powinna pobra� 2 parametry i zwr�ci� wi�kszy z nich. Wykorzysta�
funckj� w metodzie main(). UWAGA - pobieranie liczb od u�ytkownika powinno odby� si� w funkcji main(), a NIE w WriteBiggerNumber! Do
funkcji nale�y jedynie przes�a� pobrane wcze�niej parametry.
*/
void zadanie3_3()
{
    void WriteBiggerNumber(int x, int y);
    /* int main(){
        cout << "Podaj wartosc x: ";
        cin >> x;
        cout << "Podaj wartosc y: ";
        cin >> y;
        cout << "Wiekssza liczba wynosi: << WriteBiggerNumber() << endl;
    }
    */
}
/*
3.4. Napisa� metod� Multiply(int x, int y) . Metoda powinna ZWR�CI� (s�owo kluczowe return) iloczyn dw�ch parametr�w. Uwaga! Metoda
NIE POWINNA wypisywa� wyniku - powinien on by� wy�wietlony w funkcji main!
*/
void zadanie3_4()
{
    void Multiply(int x, int y);
    /* int main(){
        cout << "Podaj wartosc x: ";
        cin >> x;
        cout << "Podaj wartosc y: ";
        cin >> y;
        cout << "Iloczyn liczb wynosi: << Multiply() << endl;
    }
    */
}
int main()
{
    cout << "Wpisz liczbe zadania (1/2/3/4 itp.)" << endl;
    cout << "*** Mozna otwierac nastepne zadania bez potrzeby zamykania konsoli" << endl;
    cout << endl;
    menu();
    cout << endl;

int x;
do{
    cout << "#";
    cin >> x;
           switch (x)
{
    case 1:
        zadanie1_1();
        break;
    case 2:
        zadanie1_2();
        break;
    case 3:
        zadanie1_3();
        break;
    case 4:
        zadanie1_4();
        break;
    case 5:
        zadanie1_5();
        break;
    case 6:
        zadanie1_6();
        break;
    case 7:
        zadanie2_1();
        break;
    case 8:
        zadanie2_2();
        break;
    case 9:
        zadanie2_3();
        break;
    case 10:
        zadanie2_4();
        break;
    case 11:
        zadanie2_5();
        break;
    case 12:
        zadanie2_6();
        break;
    case 13:
        zadanie2_7();
        break;
    case 14:
        zadanie2_8();
        break;
    case 15:
        zadanie2_9();
        break;
    case 16:
        zadanie3_1();
        break;
    case 17:
        zadanie3_2();
        break;
    case 18:
        zadanie3_3();
        break;
    case 19:
        zadanie3_4();
        break;
    default:
        break;
}
}while (x != 0);

return 0;
}

