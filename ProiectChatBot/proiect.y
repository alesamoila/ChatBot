%{
void yyerror (char *s);
#include <stdio.h>     /* C declarations used in actions */
#include <stdlib.h> /* C exit function */
#include <string.h>
void cuprins();
extern int yylex();
char produs[50];
void mesajMachiajdeSeara();
void mesajMachiajdeZi();
void infoProdus(char* produs);
void folosireProdus(char* produs);
int symbolVal(char symbol);
void yyerror(char *errmsg);
void diferentaMachiaj();
void mesajSubton();
void mesajTipDeTen();
void corectieCearcane(char * adj);
void corectieOchi(char* adj);
int nivel=0 ;

 
%}

%union
{
	
	char* produs;
	
}

%union 
{
char* zona;
char* adj;
}

%token machiaj de ms mz da nu info vm diferentaM ceEste cumFolosesc fondDeTen multumesc ceEste2 salut mCorectie 
%token <produs> PRODUS
%token <zona> corectie
%token <adj> fCorectie

 
%start file

%%

file: file form '\n'
	  |
      ;
	  
form : info { cuprins(); } 
       |
	   ms { mesajMachiajdeSeara(); printf("Cu ce pot sa te mai ajut?\n"); }
	   |
	   mz {mesajMachiajdeZi(); printf("Cu ce pot sa te mai ajut?\n");}
	   |
       vm ms { mesajMachiajdeSeara();   printf("Cu ce pot sa te mai ajut?\n");  }
       |
       vm mz {mesajMachiajdeZi(); printf("Cu ce pot sa te mai ajut?\n");}
       |
       vm machiaj {printf("Ce fel de machiaj vrei sa faci? De zi sau de seara?\n"); } 
       |
       diferentaM {diferentaMachiaj(); printf("Cu ce pot sa te mai ajut?\n");} 
       |
	   ceEste2 PRODUS { infoProdus($2); } 
	   |
       ceEste PRODUS '?' { infoProdus($2);} 
       |
	   cumFolosesc PRODUS '?' { folosireProdus($2);}
	   |
	   discutieFondDeTen 
	   |
	   multumesc { printf(" Cu drag! Ma bucur sa te ajut! \n"); } 
	   |
	   salut {printf("Salut! Spune-mi cu ce te pot ajuta \n");} 
	   |
	   cumCorectez
	   |
       ;
	   
	   
discutieFondDeTen : fondDeTen '?' {nivel=0; printf("Fondul de ten se alege dupa tipul tenului, dupa subton si dupa nuanta. Nuanta se verifica pe mandibula. Stii ce tip de ten ai?\n"); }
                    |
					da  { if (nivel== 0) printf("Stii ce subton ai?\n");
             				if (nivel==1) printf("Tine cont de aceste 3 criterii si poti sa alegi cu usurinta fondul de ten cel mai potrivit.\n");
							nivel = nivel+1;  } 
					| 
					nu {if (nivel == 0) { mesajTipDeTen(); printf("Stii ce subton ai?\n");}
					       if (nivel==1) {mesajSubton(); printf("Tine cont de aceste 3 criterii (tipul tenului,subton si nuanta) si poti sa alegi cu usurinta fondul de ten cel mai potrivit.\n");} 						   
						   nivel++ ; }
					
					;
					
cumCorectez : mCorectie corectie fCorectie '?' {
                     if (($2) == "ochii" ) 
					    corectieOchi($3);
						
					else if (($2) == "cearcanele" )
					     corectieCearcane($3);
					}
					;
						
	                  

%%

void cuprins()
{ 
 printf("Intrebari pe care poti sa mi le adresezi : \n ");
 printf("Ce este rujul, eyelinerul, pudra(diferite tipuri), iluminatorul, fondul de ten sau rimelul si cum folosesti aceste produse. \n ");
 printf("Cum faci un machiaj de zi/seara si care e diferenta dintre ele. \n ");
 printf("Cum alegi corect fondul de ten. \n ");
 printf("\n");
 printf("Scrie info de fiecare data cand vrei sa revezi intrebarile \n");
 printf("Scrie exit cand vrei sa inchizi programul \n");
 printf("\n");
}

void mesajMachiajdeSeara() 
{
 printf("Machiajul de seara este un machiaj puternic, se foloseste mult negru. Etape : \n" );
 printf("Pasul 1. Este rezervat ingrijirii pielii. Un gomaj usor si o masca hidratanta/astringenta, urmate de o crema hidratanta vor ajuta tenul sa arate sanatos. In cazul unui ten matur, aplica un produs de lifting, care va da un aspect mai tanar tenului.  \n"); 
 printf("Pasul 2. Urmeaza aplicarea fondului de ten, ales in functie de rezultatul pe care il doresti : translucid, pentru o acoperire minima, sau opac, mat, daca dorim o acoperire mai mare.  \n"); 
 printf("Pasul 3. Foloseste corectorul pentru acoperirea cearcanelor.  \n"); 
 printf("Pasul 4. Fixeaza machiajului cu o pudra transparenta sau usor nuantata.  \n"); 
 printf("Pasul 5. Machiajul ochilor il poti realiza folosind culori de la medii la inchise. Cu ajutorul unui creion/contur lichid, subliniaza linia genelor. Machiajul de seara permite folosirea unor produse de genul glitter/glimmer.  \n"); 
 printf("Pasul 6. Aplica rimel si/sau gene false.  \n"); 
 printf("Pasul 7. Aplica un fard de obraz. Acesta trebuie sa fie in aceeasi tonalitate cu fardurile de pleoape alese.  \n"); 
 printf("Succes la realizarea machiajului! \n");
 

}

void mesajMachiajdeZi()
{
 printf("Machiajul de zi este un machiaj natural, lejer, fara culori inchise. Etape : \n");
 printf("Pasul 1. Dupa demachiere, aplia o crema hidratanta sau o baza, care sa pregateasca tenul pentru produsele care urmeaza.\n");
 printf("Pasul 2. Aplica apoi un fond de ten, de preferat lichid. \n"); 
 printf("Pasul 3. Foloseste un corector, preferabil lichid, pentru zona cearcanelor.  \n"); 
 printf("Pasul 4. Fixeaza totul cu ajutorul unei pudre transparente.  \n"); 
 printf("Pasul 5. Daca folosesti creioane sau farduri de pleoape, iti recomand sa folosesti tonuri neutre, care sa nu fie prea evidente.  \n"); 
 printf("Pasul 6. Pentru pometi, foloseste un blush intr-o nuanta naturala.  \n"); 
 printf("Pasul 7. Contureaza buzele cu un creion, folosind apoi un ruj sau un gloss.  \n"); 
 printf("Succes la realizarea machiajului! \n");
 
}

void infoProdus( char* produs){

if ((strcmp(produs, "ruj")==0) | (strcmp(produs, "rujul")==0))  
 printf( " Rujul se gaseste pe piata in mai multe forme de prezentare. In ceea ce priveste alegerea culorii potrivite, aceasta trebuie sa fie in armonie cu fardul de pleoape si apoi cu fardul de obraz. \n" ); 
 
if (strcmp(produs, "pudra compacta")==0)
 printf(" Pudra compacta are un grad mare de acoperire insa trebuie aplicata cu grija pentru a nu da senzatia de ten incarcat.\n");

if (strcmp(produs, "pudra pulbere")==0)
 printf(" Pudra pulbere se foloseste pentru fixarea fondului de ten si se gaseste sub diferite grade de acoperire.\n");

if (strcmp(produs, "pudra HD")==0)
  printf(" Pudra HD se foloseste pentru sedintele foto sau televiziune. Nu e recomandat sa fie folosita in alte situatii deoarece face tenul sa luceasca\n");

if (strcmp(produs, "pudra")==0){
 printf(" Pudra este un produs care se foloseste in general la fixarea machiajului.\n" );
 printf(" Pudra poate sa fie de 3 feluri : compacta, pulbere sau HD. \n");
 printf(" Pudra compacta are un grad mare de acoperire insa trebuie aplicata cu grija pentru a nu da senzatia de ten incarcat.\n");
 printf(" Pudra pulbere se foloseste pentru fixarea fondului de ten si se gaseste sub diferite grade de acoperire.\n");
 printf(" Pudra HD se foloseste pentru sedintele foto sau televiziune. Nu e recomandat sa fie folosita in alte situatii deoarece face tenul sa luceasca\n");   
 }
 
if ((strcmp(produs, "eyelinerul")==0) | (strcmp(produs, "eyelinerul")==0)) {
 printf( " Folosirea acestuia depinde de tendintele modei si de forma ochilor, fiind util in modificarea acesteia. Pentru machiajul de zi se vor folosi nuante de gri sau maro, negrul este mai potrivit pentru seara sau evenimente speciale.\n");
 printf( " Tipuri de contur de pleoape: lichid (eyeliner), solid (sub forma de creion sau sub forma de cake uscat) si gel. \n" );
 }
 
if ((strcmp(produs, "rimelul")==0) |  (strcmp(produs, "rimel")==0)){
 printf( " Se gaseste pe piata intr-o gama extrem de diversa, atat din puncte de vedere al proprietatilor, cat si din punct de vedere al culorilor.\n");
 printf( " Alegerea culorilor se va face in functie de rezultatul dorit, tinand cont si de momentul zilei.\n");
 printf( " Cel mai important aspect in alegerea unei mascara este peria, care determina modul in care dorim ca genele noastre sa arate.\n");
 printf( " Se recomanda utilizarea unei mascara waterproof pentru o mai buna rezistenta a machiajului.  \n");
}

if ((strcmp(produs, "iluminatorul")==0) | (strcmp(produs, "iluminator")==0)) {
 printf(" Iluminatorul este folosit pentru iluminarea anumitor parti ale fetei.\n");
 printf(" Pentru ceea ce dorim sa scoatem in evidenta sau sa marim, vom aplica iluminatorul.\n");
 printf(" Iluminatoarele sunt toate produsele uscate sau cremoase cu minim 2 tonuri mai deschise decat nuanta normala a tenului.\n" );
}

if (strcmp(produs, "fondul de ten")==0) {
 printf(" Fondurile de ten sunt de diferite tipuri, avand caracteristici diverse. Astfel, se pot clasifica in urmatoarele forme:\n");
 printf(" Fluide, cremoase, pan stick, pan cake, compacte, spuma. \n");
 printf(" Spune-mi despre care dintre aceastea vrei sa stii mai multe. \n");
 }
 
if ((strcmp(produs, "fondul de ten fluid")==0) | (strcmp(produs, "fondurile de ten fluide")==0) | (strcmp(produs, "fondul de ten spuma")==0) | (strcmp(produs, "fondurile de ten spuma")==0)){
 printf(" Fondurile de ten fluide sau spuma sunt produse care au putere redusa de acoperire, efectul obtinut fiind unul transparent, usor satinat. Acestea se pot folosi pe toate tipurile de ten.\n");
 }
 
 if ((strcmp(produs, "fondul de ten cremos")==0) | (strcmp(produs, "fondurile de ten cremoase")==0) ){
 printf(" Fondurile de ten cremoase sunt destinate in general pielii care are tendinta de a se usca, deoarece au puterea de a regla hidratarea prin continutul de ceramide. \n");
 }

 if ((strcmp(produs, "fondul de ten compact")==0) | (strcmp(produs, "fondurile de ten compacte")==0) | (strcmp(produs, "fondul de ten pan stick")==0) | (strcmp(produs, "fondurile de ten pan stick")==0) ){
 printf(" Fondurile de ten compacte sau pan stick sunt o categorie de produse care au o acoperire mare, asemeni pan stick-ului creat de Max Factor, el fiind primul care a folosit acest termen. Aceste baze sunt folosite frecvent in industria de divertisment, deoarece rezultatul obtinut este o baza omogena, compacta, care, de cele mai multe ori, are si putere de corectare.  \n");
 }
 
  if ((strcmp(produs, "fondul de ten pan cake")==0) | (strcmp(produs, "fondurile de ten pan cake")==0) ){
 printf(" Fondurile de ten pan cake sunt recomandate tenurilor grase. Este un produs ideal pentru retusuri, avand un aspect transparent. Fondurile de ten sau pudrele pot fi aplicate atat umede, cat si uscate. Daca sunt aplicate cu un puf sau cu o pensula, au functia de pudra. Daca sunt aplicate cu ajutorul unui buretel umed, au rolul de fond de ten. Sunt recomandate cand se doreste un efect final opac, cu o transparenta medie. \n");
 }
 
 }


void folosireProdus(char* produs)
{
if ((strcmp(produs, "ruj")==0) |  (strcmp(produs, "rujul")==0))
 printf( " Rujul se aplica cu o pensula sintetica subtire. Se recomanda folosirea unui creion de buze in aceeasi nuanta cu rujul inaintea aplicarii rujului. \n" ); 
 
if (strcmp(produs, "pudra")==0) {
 printf( " Pudra se poate aplica in 3 moduri: \n" );
 printf( " Pentru o semi-acoperire se foloseste o pensula sau un puf pentru pudra. \n");
 printf( " Pentru o acoperire mare si de durata se aplica folosind un buretel usor umed. \n");
 printf( " Pentru fixarea machiajului folosita ca pudra nuantatoare. \n");
}
if (strcmp(produs, "pudra compacta")==0) 
 printf(" Toate tipurile de pudra se pot aplica la fel (vezi \"Cum folosesc pudra?\") insa pentru pudra compacta recomand sa fie aplicata cu un buretel umed\n");

if ((strcmp(produs, "pudra pulbere")==0) | (strcmp(produs, "pudra HD")==0))
 printf(" Toate tipurile de pudra se pot aplica la fel (vezi \"Cum folosesc pudra?\") insa pentru acest tip de pudra recomand sa fie aplicata cu o pensula sau un puf pentru pudra\n");
 
if ((strcmp(produs, "eyelinerul")==0) |  (strcmp(produs, "eyeliner")==0) ) {
 printf(" Atunci cand vrei sa aplii eyelinerul, iti recomand ca mai intai sa desenezi cateva punctulete micute in directia in care doresti sa faci linia, urmand sa unesti acele puncte, in asa fel incat rezultatul sa fie o dunga dreapta si corect executata.\n");
 printf(" Este important ca, atunci cand vrei sa folosesti eyelinerul, sa ti mana foarte fixa, iar degetul mic sa il sprijini de obraz. In cazul in care gresesti si nu iti iese conturul asa cum ti-ai propus, poti remedia cu putin corector. \n" );
 } 
 
if ((strcmp(produs, "rimelul")==0) |  (strcmp(produs, "rimel")==0)){
 printf( " Rimelul se aplica de preferabil cu o pensula de unica folosinta, mai ales daca acelasi rimel este folosit de mai multe persoane.  \n");
 printf( " Acesta se aplica de la baza genelor inspre exterior in miscari de zig-zag \n");
 }

if ((strcmp(produs, "iluminatorul")==0) | (strcmp(produs, "iluminator")==0)) {
 printf( " Iluminatorul se aplica in zonele inalte ale fetei\n"); 
}

if (strcmp(produs, "fondul de ten")==0) {
 printf(" Fondurile de ten sunt de diferite tipuri, avand caracteristici diverse. Astfel, se pot clasifica in urmatoarele forme:\n");
 printf(" fluide, cremoase, pan stick, pan cake, compacte, spuma, spray. \n");
 printf(" Spune-mi despre care dintre aceastea vrei sa stii mai multe \n");
 }

if ((strcmp(produs, "fondul de ten fluid")==0) | (strcmp(produs, "fondurile de ten fluide")==0) | (strcmp(produs, "fondul de ten spuma")==0) | (strcmp(produs, "fondurile de ten spuma")==0)){
 printf(" In general, fondurile de ten fluide sau spuma au in compozitia lor apa sau silicon si se aplica folosind o pensula sau un buretel.\n");
 }

if ((strcmp(produs, "fondul de ten cremos")==0) | (strcmp(produs, "fondurile de ten cremoase")==0) ){
 printf(" Fondurile de ten cremoase se aplica folosind o pensula sau un buretel. \n");
 }
 
  if ((strcmp(produs, "fondul de ten compact")==0) | (strcmp(produs, "fondurile de ten compacte")==0) | (strcmp(produs, "fondul de ten pan stick")==0) | (strcmp(produs, "fondurile de ten pan stick")==0) ){
 printf(" Fondurile de ten compacte sau pan stick se aplica folosind o pensula sau un buretel, intotdeauna pe pielea perfect hidratata, si trebuie sa fie fixate cu pudra libera translucida.\n");
 }
 
   if ((strcmp(produs, "fondul de ten pan cake")==0) | (strcmp(produs, "fondurile de ten pan cake")==0) ){
 printf(" La acest tip de fond de ten trebuie acordata o atentie deosebita aplicarii, deoarece folosit incorect, poate crea linii. Fondurile de ten pan cake sau pudrele pot fi aplicate atat umede, cat si uscate. Daca sunt aplicate cu un puf sau cu o pensula, au functia de pudra. Daca sunt aplicate cu ajutorul unui buretel umed, au rolul de fond de ten. \n");
 }

}

void diferentaMachiaj() { 
 
 printf("Machiajul de zi este un machiaj simplu, cat mai natural in timp ce pentru machiajul de seara se folosesc culori puternice. Machiajul de seara este potrivit pentru evenimente speciale.\n ");
}

void mesajSubton() {

printf("Exista 3 tipuri de subtonuri : neutru, rece si cald. \n");
printf("Cea mai simpla metoda ca sa iti dai seama ce tip de subton ai e sa te uiti venele de la incheietura mainii.\n ");
printf("La persoanele cu subton neutru, aceste vene sunt intotdeauna albastru clar. \n");
printf("La persoanele cu subton galben sau cald, galbenul pielii se combina cu albastrul natural al venelor si acestea par verzui.\n");
printf("La persoanele cu subton roz sau rece, rozul natural al pielii se combina cu albastru venelor si acestea par mov.\n");
}

void mesajTipDeTen(){

printf("Ca sa iti dai seama de tipul de ten trebuie sa iti cureti tenul cu apa si sapun, sa astepti minim jumatate de ora si in functie de cum iti simti tenul, esti intr-una dintre urmatoarele categorii:  \n\n");
printf("Tenul normal - Acest tip de ten are o circulație bună, pielea nu este nici prea grasă și nici prea uscată, nu prezintă pete, puncte negre.\nEste prezent în principal la persoanele tinere, cu un metabolism echilibrat. \n\n");
printf("Tenul uscat (piele sebostatică) - Tenul tău intră în această categorie dacă este lipsit de elasticitate, se exfoliază frecvent sau simți că este mai degrabă aspru decât catifelat.\nÎl recunoști după pielea subțire, fragilă, ternă întinsă, mată, cu pori mici.\nAcest tip de ten este predispus la iritații, descuamare și formarea timpurie a ridurilor.\n\n");
printf("Tenul gras - Îl recunoști după acea tendință de luciu permanent, cauzată de un dezechilibru al glandelor sebacee, care secretă o cantitate prea mare de sebum.\nAspectul lucios, pielea groasă, rezistența, porii dilatați sunt aspecte pe care le urmărim pentru a identifica tenul gras.\nPielea este grasă, tonică, de culoare gălbuie cauzată de keratina care predomină stratul superficial.\nPorii sunt dilatați datorită conținutul ridicat în sebum, iar suprafața pielii capată aspecul unei coji de portocală.\n\n");
printf("Tenul mixt (combinat) - Acest tip de ten prezintă anumite zone care se îngrașă, modificându-și aspectul: bine-cunoscuta zonă T (care cuprinde trio-ul frunte-nas-bărbie) este principala zonă care îl dă de gol.\nTenul mixt reprezintă o combinație a tenului gras dispus în zona T, iar restul feței (pleoape, obraji, pomeți, gât) poate avea caracteristicile unui ten uscat, normal sau gras.\nDeoarece aspectul și calitatea pielii diferă în funcție de zonele feței, acest tip de ten necesită o îngrijire diferențiată cu produse specifice fiecărei zone.\n\n");
}

void corectieCearcane(char* adj) {

if(strcmp(adj, "albastre") == 0)
 printf("Cearcanele albastre se corecteaza cu un corector oranj");

if ((strcmp(adj, "albastru-violet") == 0) | (strcmp(adj, "albastru violet")))
printf("Cearcanele albastru-violet se corecteaza cu un corector oranj-galben");


if(strcmp(adj, "violet") == 0)
 printf("Cearcanele violet se corecteaza cu un corector galben");
 

}

void corectieOchi(char* adj) {

if (strcmp(adj, "rotunzi") == 0) 
 printf("Ochii rotunzi se alungesc aplicand farduri mai inchise pe coltul extern si eyeliner negru\n");
 
if (strcmp(adj, "descendenti") == 0 ) 
 printf("Ochii descendenti se corecteaza aplicand farduri inchise pe coltul extern al ochilor. Nu se recomanda linia de tus cu codita.\n");
 
if (strcmp(adj, "cu pleoapele cazute") == 0 ) 
 printf("Ochii cu pleoape mici sau cazute se machiaza folosind aceeasi intensitate a fardurilor pe toata lungimea pleoapelor\n");
 
if (strcmp(adj, "apropiati") == 0) 
 printf("Ochii apropiati se departeaza vizual aplicand farduri inchise pe coltul extern al ochilor si pigmenti irizanti, luminosi pe coltul intern \n");
 
if (strcmp(adj, "departati") == 0)
 printf("Ochii departati se apropie vizual aplicand farduri inchise in coltul intern al ochilor\n");
 
if (strcmp(adj, "cu pleoape mari" ) == 0 )
 printf ("Ochii cu pleaoape mari se contureaza folosind farduri inchise pe toata lungimea pliului \n" );

}
	
 	  
int main(){
        printf("Buna! Sunt aici sa te ajut cu informatii despre machiaje. :)  \n");
        cuprins();
	return yyparse();
}

void yyerror(char *errmsg)
 {
 fprintf(stderr, "%s\n", errmsg);
 }


