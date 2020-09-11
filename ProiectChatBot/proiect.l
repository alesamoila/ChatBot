%{
#include "y.tab.h"

%}

%%


"machiaj" return machiaj;
"de seara" return ms;
"de zi" return mz;
"natural" return mz;
"machiaj natural" return mz;
"machiaj de seara" return ms;
"machiaj de zi" return mz;
"Da" return da; 
"da"   return da;
"Nu" return nu;
"nu"   return nu;

"Multumesc" return multumesc;
"multumesc" return multumesc; 

"salut" return salut;
"Salut" return salut;
"Buna"  return salut;
"buna"  return salut;

"Cum corectez" return mCorectie;
"ochii" {yylval.zona=strdup(yytext); return corectie;}
"cearcanele" {yylval.zona=strdup(yytext); return corectie;}
"albastre" {yylval.adj=strdup(yytext); return fCorectie;}
"albastru violet" {yylval.adj=strdup(yytext); return fCorectie;}
"albastru-violet" {yylval.adj=strdup(yytext); return fCorectie;}
"violet" {yylval.adj=strdup(yytext); return fCorectie;}
"rotunzi"  {yylval.adj=strdup(yytext); return fCorectie;}
"descendenti" {yylval.adj=strdup(yytext); return fCorectie;}
"cu pleoapele cazute" {yylval.adj=strdup(yytext); return fCorectie;}
"apropiati" {yylval.adj=strdup(yytext); return fCorectie;}
"departati" {yylval.adj=strdup(yytext); return fCorectie;}
"cu pleoapele mari" {yylval.adj=strdup(yytext); return fCorectie;}



"Vreau sa fac un" return vm;
"vreau sa fac un" return vm;

"Nu stiu.Care e diferenta?" return diferentaM;
"Nu stiu. Care e diferenta?" return diferentaM; 
"Nu stiu" return diferentaM; 


"fondurile de ten fluide" {yylval.produs=strdup(yytext);return PRODUS;}
"fondul de ten fluid" {yylval.produs=strdup(yytext);return PRODUS;}
"fondurile de ten cremoase" {yylval.produs=strdup(yytext);return PRODUS;}
"fondul de ten cremos" {yylval.produs=strdup(yytext);return PRODUS;}
"fondurile de ten pan stick" {yylval.produs=strdup(yytext);return PRODUS;}
"fondul de ten pan stick" {yylval.produs=strdup(yytext);return PRODUS;}
"fondurile de ten pan cake" {yylval.produs=strdup(yytext);return PRODUS;}
"fondul de ten pan cake" {yylval.produs=strdup(yytext);return PRODUS;}
"fondurile de ten compacte" {yylval.produs=strdup(yytext);return PRODUS;}
"fondul de ten compact" {yylval.produs=strdup(yytext);return PRODUS;}
"fondurile de ten spuma" {yylval.produs=strdup(yytext);return PRODUS;}
"fondul de ten spuma" {yylval.produs=strdup(yytext);return PRODUS;}
"fondurile de ten spray" {yylval.produs=strdup(yytext);return PRODUS;}
"fondul de ten spray" {yylval.produs=strdup(yytext);return PRODUS;}
"rujul" {yylval.produs=strdup(yytext);return PRODUS;}
"eyelinerul" {yylval.produs=strdup(yytext);return PRODUS;}
"rimelul" {yylval.produs=strdup(yytext);return PRODUS;} 
"ruj" {yylval.produs=strdup(yytext);return PRODUS;}
"eyeliner" {yylval.produs=strdup(yytext);return PRODUS;}
"pudra compacta" {yylval.produs=strdup(yytext);return PRODUS;}
"pudra pulbere" {yylval.produs=strdup(yytext);return PRODUS;}
"pudra HD" {yylval.produs=strdup(yytext);return PRODUS;}
"pudra" {yylval.produs=strdup(yytext);return PRODUS;}
"iluminatorul" {yylval.produs=strdup(yytext);return PRODUS;}
"iluminator" {yylval.produs=strdup(yytext);return PRODUS;}
"creionul de ochi" {yylval.produs=strdup(yytext);return PRODUS;}
"creion de ochi" {yylval.produs=strdup(yytext);return PRODUS;}
"fondul de ten" {yylval.produs=strdup(yytext);return PRODUS;}


"Cum folosesc" return cumFolosesc;
"Vreau informatii despre" return ceEste2;
"Spune-mi despre" return ceEste2;
"Spune-mi mai multe despre" return ceEste2;
"Ce este" return ceEste;
"Cum aplic" return cumFolosesc;
"Cum se aplica" return cumFolosesc;
"ce este" return ceEste;

"Cum aleg fondul de ten" return fondDeTen;
"Cum aleg nuanta fondului de ten" return fondDeTen;
"Cum aleg corect fondul de ten" return fondDeTen;
"Cum aleg corect nuanta fondului de ten" return fondDeTen;

"info" return info;

[\n] {return *yytext;}
[?\n] return  *yytext;
[ \t]+             ;
exit {printf("Sper ca am fost de ajutor!\n"); exit(1); }
. ;

%%