#include <iostream>
#include <ctime>
#include <random>

using namespace std;

int Numer_Pytania = 1;
int Poprawna = 0;
int Zla = 0;
bool zapytaj[13] = { true, true, true, true, true, true, true, true, true, true, true, true, true };

void strona_startowa();
void wyswietl_losowe_pytanie();
void wyswietl();
void pytanie(string pytanie, string a, string b, string c, string d, char poprawna_odpowiedz, char poprawna_odpowiedz2);
void rezultat();
void rysunek();
void rysunek2();
void rysunek3();

int main()
{
    rysunek();
    strona_startowa();

    return 0;
}

void wyswietl() {

    system("cls");
    cout << "Numer pytania: " << Numer_Pytania << "\t\tPoprawne odpowiedzi: " << Poprawna << "\t\tZle odpowiedzi: " << Zla << endl;
    cout << "==================================================================================\n\n";

    wyswietl_losowe_pytanie();

}

void wyswietl_losowe_pytanie() {

    srand(time(0));
    bool Czy_zostalo_pytanie = false;

    for (int i = 0; i < 13; i++)
    {
        if (zapytaj[i])
        {
            Czy_zostalo_pytanie = true;
            break;
        }
    }
    while (Czy_zostalo_pytanie)
    {
        int numer = rand() % 13;
        if (zapytaj[numer])
        {

            zapytaj[numer] = false;
            switch (numer)
            {
            case 0:
                pytanie("Ilu lacznie, bylo Bogow Olimpijskich? ", " 10", " 7", " 12", " 15", 'd', 'D');
                break;

            case 1:
                pytanie("Od czego zaczela sie mitologia grecka?", "Od Zeusa", "Od Chaosu", "Od Ziemi", "Od Afrodyty", 'b', 'B');
                break;

            case 2:
                pytanie("Co podarowala Gaja Herze na prezent slubny?", "Smoka, ktory bedzie ja chronil", "Bialego pawia, dzieki ktoremu zawsze bedzie radosna", "Lzy feniksa, ktore zawsze uzdrawiaja", "Drzewo ze zlotymi jablkami i niesmiertelnosci", 'd', 'D');
                break;

            case 3:
                pytanie("Kto byl najmlodszy z rodzenstwa tytanow?", "Kronos", "Rea", "Krios", "Byli w tym samym wieku", 'a', 'A');
                break;

            case 4:
                pytanie("Ktora trojka bogow nalezala do Wielkiej Trojki", "Dionizos, Hades i Hefajstos", "Apollo, Ares i Hermes", "Zeus, Hades i Posejdon", "Zadne z powyzszych odpowiedzi", 'c', 'C');
                break;

            case 5:
                pytanie("Jak urodzila sie Atena?", "Tak jak kazdy (Na polu kapusty)", "Powstala z mysli", "Wyszla z glowy Zeusa", "Nie wiadomo", 'c', 'C');
                break;

            case 6:
                pytanie("Hekate jest boginia?", "Zwierzat", "Magii", "Latania", "Madrosci", 'b', 'B');
                break;

            case 7:
                pytanie("Kim jest Artemida?", "Bogina lowow, zwierzat i natury", "Boginia walki", "Boginia milosci", "Boginia morskiej sily", 'a', 'A');
                break;

            case 8:
                pytanie("Dlaczego Atena nie miala meza?", "Poniewaz z bazylami nikt sie nie zadaje", "Byla innej orientacji", "Poniewaz przyzekla ze nie wyjdzie za maz", "W sumie to nie wiadomo", 'C', 'c');
                break;

            case 9:
                pytanie("Jak nazywa sie maz Afrodyty", "Eol", "Zeus", "Ares", "Hefajstos", 'd', 'D');
                break;

            case 10:
                pytanie("Boginia teczy jest: ", "Atena", "Iris", "Afrodyta", "Gaja", 'b', 'B');
                break;

            case 11:
                pytanie("Boreasz, Zefir, Notos, Euros to uosobienia:", "4 por roku", "4 wiatrow", "4 stron swiata", "Nie sa to uosobienia niczego z powyzszych", 'b', 'B');
                break;

            case 12:
                pytanie("Apollo byl bogiem: ", "Sztuki i wrozbiarstwa", "Urodzaju", "Wina", "Szybkich samochodow", 'a', 'A');
                break;

            }
        }
    }
    rezultat();
}

void rezultat() {

    system("cls");
    cout << "Z " << Numer_Pytania - 1 << " pytan udzieliles/as: \n" << endl;
    cout << "Poprawnych odpowiedzi: " << Poprawna << endl;
    cout << "Zlych odpowiedzi: " << Zla << endl;
    if (Poprawna > Zla) {
        cout << "\nBrawo nie jest z toba tak zle" << endl;
        cout << "\n";
        rysunek3();
    }
    else if (Zla > Poprawna) {
        cout << "\nUuuuu Nie dobrze... Chyba uciekles z fabryki gumolitu" << endl;
        cout << "\n\n";
        rysunek2();
    }
    else {
        cout << "50:50" << endl;
    }
}

void pytanie(string pytanie, string a, string b, string c, string d, char poprawna_odpowiedz, char poprawna_odpowiedz2) {

    char odpowiedz;

    cout << pytanie << endl;
    cout << "A.\t" << a << endl;
    cout << "B.\t" << b << endl;
    cout << "C.\t" << c << endl;
    cout << "D.\t" << d << endl;
    cout << endl;

    cout << "Twoja odpowiedz: "; cin >> odpowiedz;
    if (odpowiedz == poprawna_odpowiedz || odpowiedz == poprawna_odpowiedz2) {
        Poprawna++;
    }
    else {
        Zla++;
    }
    Numer_Pytania++;
    wyswietl();
}

void strona_startowa() {

    char odp;

    cout << "\tWitamy w naszym turbo ubogim quizie!!\n" << endl;
    cout << "\t\tCzytasz pytanie i wybierasz jedna z czterech odpowiedzi, proste nie?\n" << endl;

    cout << "\t\t\t\tCzy chcesz zagrac? T/N: "; cin >> odp;


    if (odp == 'T' || odp == 't') {
        wyswietl();
    }
    else {
        exit;
    }

}

void rysunek() {



    cout << "                                                                      .ooo+`                        \n";
    cout << "                                                                      +ooo/                         \n";
    cout << "                                                                     `++++.                         \n";
    cout << "                                                                                                    \n";
    cout << "              `                                                                                     \n";
    cout << "       `-/+ooooooo+:.   ////-        /+++:             ////.        -+++/      /+++++++++++++++++++:\n";
    cout << "     ./ooooooo++oooooo.-sooo`       `oooo.            -oooo`        oooo:     .sooooooooooooooooooo`\n";
    cout << "   `+ooooo:.      `-+oooooo/        /ooo+             +ooo/        -oooo`     `````````````.+oooo:` \n";
    cout << "  -ooooo-            /ooooo.       `oooo-            .oooo.        +ooo/                 `:oooo/`   \n";
    cout << " .oooo/`             `oooo+        :oooo             /ooo+        `oooo.               `:oooo/`     \n";
    cout << " oooo+                oooo-        oooo:            `oooo-        :ooo+               :oooo/`       \n";
    cout << "-oooo.               `sooo        -sooo             :oooo        `oooo-             -oooo+.         \n";
    cout << "/ooo+                /ooo:        +ooo:             oooo:        -oooo            -oooo+.           \n";
    cout << "/ooo+               -oooo`       .oooo`            :oooo`        +ooo:          -+ooo+.             \n";
    cout << "-oooo`             -oooo/        :ooo+            :oooo/        .sooo`        .+ooo+-               \n";
    cout << "`oooo+`          ./ooooo.        /ooo/          .+ooooo.        /ooo+       .+oooo-                 \n";
    cout << " .ooooo/-`` ``.:+oooooo+         :oooo/.`   `.:+oooooo+        `ooos.     .+oooo+---------------    \n";
    cout << "  `/ooooosooosooo/-oooo-          /ooooooooooooo:`+ooo-        :ooo+     `oooooooooooooooooooooo    \n";
    cout << "     .:/+ooo+/:-` -sooo            `:/+++++/:-.  `////         :///-     .:::::::::::::::::::::-    \n";
    cout << "                  +ooo:                                                                             \n";
    cout << "                 .sooo`                                                                             \n";
    cout << "                 /ooo/                                                                              \n";
    cout << "                `oooo.                                                                              \n";
    cout << "                -+++/                                                                               \n";
    cout << "\n\n";

}

void rysunek2() {

    cout << ". . . . . .. . . . . .,.-”. . . . . . . . . . . . . . . . . .“-.,\n";
    cout << ". . . . .. . . . . . ..,/. . . . . . . . . . . . . . . . . . . . . . . ”:,\n";
    cout << ". . . . . . . .. .,?. . . . . . . . . . . . . . . . . . . . . . . . . . .\,\n";
    cout << ". . . . . . . . . /. . . . . . . . . . . . . . . . . . . . . . . . . . . . ,}\n";
    cout << ". . . . . . . . ./. . . . . . . . . . . . . . . . . . . . . . . . . . ,:`^`.}\n";
    cout << ". . . . . . . ./. . . . . . . . . . . . . . . . . . . . . . . . . ,:”. . . ./\n";
    cout << ". . . . . . .?. . . __. . . . . . . . . . . . . . . . . . . . :`. . . ./\n";
    cout << ". . . . . . . /__.(. . .“~-,_. . . . . . . . . . . . . . ,:`. . . .. ./\n";
    cout << ". . . . . . /(_. . ”~,_. . . ..“~,_. . . . . . . . . .,:`. . . . _/\n";
    cout << ". . . .. .{.._$;_. . .”=,_. . . .“-,_. . . ,.-~-,}, .~”; /. .. .}\n";
    cout << ". . .. . .((. . .*~_. . . .”=-._. . .“;,,./`. . /” . . . ./. .. ../\n";
    cout << ". . . .. . .\`~,. . ..“~.,. . . . . . . . . ..`. . .}. . . . . . ../\n";
    cout << ". . . . . .(. ..`=-,,. . . .`. . . . . . . . . . . ..(. . . ;_,,-”\n";
    cout << ". . . . . ../.`~,. . ..`-.. . . . . . . . . . . . . . ..\. . /\"\n";
    cout << ". . . . . . \`~.*-,. . . . . . . . . . . . . . . . . ..|,./...\,__\n";
    cout << ",,_. . . . . }.>-._\. . . . . . . . . . . . . . . . . .|. . . . . . ..`=~-,\n";
    cout << ". .. `=~-,_\_. . . `\,. . . . . . . . . . . . . . . . .\ \n";
    cout << ". . . . . . . . . .`=~-,,.\,. . . . . . . . . . . . . . . .\n";
    cout << "\n";

}

void rysunek3() {

    cout << "                                                                                                    \n";
    cout << "            ``      .-::::--`                                                                       \n";
    cout << "           ./    -oso/-.``../+`                                                                     \n";
    cout << "           s`  :yh/.         s/                                  `                                  \n";
    cout << "           +/`sd+`          .h/                  -+/           -ss-                                 \n";
    cout << "            ohm/         `./y+                  +y-o          /d:+`                                 \n";
    cout << "            sm/:/:-..--/+oo:`  :+              +d.+`         /d::-               `s+                \n";
    cout << "           .ms    `....``      dy``   `.::-` -om+o/...  `-` :m//-  `-:-`    .--` ./.   .::`         \n";
    cout << "           :N:           `//  /+/hy  :hy:`// -m+/` om: .ds``do/` .sh/.-+  -yo.-s`my  -yy-//         \n";
    cout << "           .m/          `dNy -: /m- sd: `yd. hy-  om- `ds  sh-  :mo  +m: :m-  -`yh` :m+-::.         \n";
    cout << "            +d-       -/+om--: /m: om. .hd` sm`  om- .hy  om.  -m/  oN/ :m+    od. :mo.` ./         \n";
    cout << "             -oo+/////- .d+.-  hy.:ss.--do-:+d.-/yy`:-h/-//m``:/d.-:od.:-d+  -sm-`::d/ `::          \n";
    cout << "               `````   `h+     `:` `-.  .:`  --` `-.  `-`  --.  --` `:.  `--:/do:-` `--.`           \n";
    cout << "              `.---:::/ys:---.`                                       `-::/:sd:`                    \n";
    cout << "          `-+o+:.```.+s-``````                                      `+/.` .sy.                      \n";
    cout << "         -y+.`   `-/+-`                                             :/ `-os/`                       \n";
    cout << "         /y-..-://-.                                                `.-::.`                         \n";
    cout << "          `---.`                                                                                    \n";
    cout << "                                                                                                    \n";

}
