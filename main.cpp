/*
1. Zmienne, komunikacja z u¿ytkownikiem. Instrukcje warunkowe
Uwaga! Nale¿y pamiêtaæ o dodaniu odpowiednich nag³ówków do funkcji. Dla std::cin i std::cout jest to <iostream>, a dla printf i scanf jest
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
1.3. Pobrac od u¿ytkownika liczbe x. Wyœwietlic kwadrat liczby x.
*/
void zadanie1_3()
{
    int x,y=2;
    cout << "Jaka wartosc ma miec liczba x ?" << endl;
    cin >> x;
    cout << "Kwadrat liczby x jest rowny: " << pow(x,y) << endl;
}
/*
1.4. Zapoznaæ siê z instrukcjami warunkowymi (if, else if, else oraz switch). Pobraæ od u¿ywkownika liczbê i wyœwietliæ informacjê, czy jest
ona: mniejsza, wiêksza, czy równa 0.
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
1.5. Pobraæ ud u¿ytkownika 3 liczby (x1, x2, x3). Wyœwietliæ informacjê, która z tych liczb jest najwiêksza.
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
1.6. Napisaæ prosty kalkulator. Nale¿y pobraæ od u¿ytkownika 2 liczby oraz operator (jeden z czterech: mno¿enie, dzielenie, dodawanie,
odejmowanie). Wymagane jest utworzenie prostego menu u¿ytkownika. Uwaga - nale¿y pamiêtaæ o u³amkach (1/3 powinno daæ 0.33, a nie
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
2.1. Zapoznaæ siê z pêtl¹ while. Pêtla ta s³u¿y do wielokrotnego wykonania fragmentu kodu przez NIEZNAN¥ Z GÓRY iloœæ razy. Pêtla
wykonuje siê zawsze, jeœli warunek jest prawdziwy (ewaluowany do true). Napisaæ pêtlê, w któej u¿ytkownik podaje liczbê x. Nale¿y
wyœwietliæ tê liczbê. Je¿eli u¿ytkownik poda 0, nale¿y zakoñczyæ program.
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
2.2. Przerobiæ kalkulator z zadania 1.6. Teraz po ka¿dym dzia³aniu program powinien spytaæ u¿ytkownika, czy ten chce powtórzyæ
wszystko od pocz¹tku. Jeœli tak - restartujemy kalkulator i zaczynamy od nowa. Jeœli nie - koñczymy program.
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
2.3. Pobraæ od u¿ytkownika liczbê x. Nale¿y wyœwietliæ wszystkie kolejne potêgi liczby x. Zakoñczyæ program, kiedy liczba przekroczy 100
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
2.4. Pobraæ od u¿ytkownika liczbê x. Jeœli liczba jest niedodatnia - nale¿y zakoñczyæ program. Nastêpnie nale¿y wyœwietlaæ kolejno (w
nowej linii) wszystkie liczby mniejsze od x, a¿ osi¹gniête zostanie 0.
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
2.5. Zapoznaæ siê z instrukcjami continue; i break;. Pierwsza s³u¿y do zakoñczenia iteracji i przejœcia do nastêpnej, a druga natychmiast
koñczy pêtlê. Przerobiæ program z zadania 1.4, aby wyœwietla³ tylko parzyste liczby (u¿yæ if oraz continue). Jeœli liczba wynosi 40, nale¿y
wyjœæ z pêtli i zakoñczyæ program.
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
2.6. Zapoznaæ siê z pêtl¹ for. Pêtla s³u¿y do wykonania danego fragmentu kodu ZNAN¥ Z GÓRY okreœlon¹ iloœæ razy. Uwaga - ka¿d¹ pêtlê
for mo¿na zast¹piæ pêtl¹ while i wzajemnie. Zwyczajowo obowiazuje zasada, ¿e jeœli iloœæ iteracji jest znana - u¿ywamy for, a jeœli nie jest
znana (zale¿y od u¿ytkownika lub jakiegoœ stanu zewnêtrznego) - u¿ywamy pêtli while. Pêtla for sk³ada siê z: ZMIENNEJ ITERACYJNEJ,
czyli stanu pocz¹tkowego pêtli, np. int i = 0. Nastêpnie WARUNKU ZAKOÑCZENIA PÊTLI, np. i<10. Nastêpnie OPERACJI WYKONYWANEJ
PO KA¯DEJ ITERACJI - zazwyczaj jest to zwiêkszenie iteratora o 1, czyli i = i + 1, b¹dŸ w skrócie i++. Napisaæ pêtlê for, która wyœwietli cyfry
od 0 do 9.
*/
void zadanie2_6()
{
    for( int i = 0; i <= 9; i++ ){
        cout << i << endl;
    }
}
/*
2.7. Pobraæ od u¿ytkownika liczby x i y. Zak³adamy, ¿e y > x (zawsze, nie musimy tego sprawdzaæ). Za pomoc¹ pêtli for wypisaæ liczby
miêdzy x a y (do przemyœlenia - co jest stanem pocz¹tkowym, a co warunkiem zakoñczenia pêtli?)
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
2.8. Pobraæ od u¿ytkownika liczbê x. Za pomoc¹ pêtli for wypisaæ wszystkie liczby mniejsze od x, ale wiêksze ni¿ 0.
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
2.9. Pobraæ od u¿ytkownika liczbê x. Za pomoc¹ pêtli for wypisywaæ CO TRZECI¥ liczbê wiêksz¹ od x. Pêtla powinna siê zakoñczyæ, jeœli
liczba przekroczy 100. Uwaga - proszê nie u¿ywaæ operacji continue i break, a sterowaæ tylko parametrami pêtli.
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
3.1. Napisaæ metodê void NewLine(). Powinna ona wypisaæ na ekran pojedyncz¹ pust¹ liniê. U¿yæ tej metodê w main().
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
3.2. Napisaæ metodê void NewLines(int count). Powinna ona wypisaæ tyle nowych linii, ile zosta³o podanych W PARAMETRZE count (nale¿y
u¿yæ pêtli for). U¿yæ metodê w main()
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
3.3. Napisaæ metodê void WriteBiggerNumber(int x, int y). Metoda powinna pobraæ 2 parametry i zwróciæ wiêkszy z nich. Wykorzystaæ
funckjê w metodzie main(). UWAGA - pobieranie liczb od u¿ytkownika powinno odbyæ siê w funkcji main(), a NIE w WriteBiggerNumber! Do
funkcji nale¿y jedynie przes³aæ pobrane wczeœniej parametry.
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
3.4. Napisaæ metodê Multiply(int x, int y) . Metoda powinna ZWRÓCIÆ (s³owo kluczowe return) iloczyn dwóch parametrów. Uwaga! Metoda
NIE POWINNA wypisywaæ wyniku - powinien on byæ wyœwietlony w funkcji main!
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

