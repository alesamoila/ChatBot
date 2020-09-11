/* A Bison parser, made by GNU Bison 3.0.4.  */

/* Bison interface for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015 Free Software Foundation, Inc.

   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <http://www.gnu.org/licenses/>.  */

/* As a special exception, you may create a larger work that contains
   part or all of the Bison parser skeleton and distribute that work
   under terms of your choice, so long as that work isn't itself a
   parser generator using the skeleton or a modified version thereof
   as a parser skeleton.  Alternatively, if you modify or redistribute
   the parser skeleton itself, you may (at your option) remove this
   special exception, which will cause the skeleton and the resulting
   Bison output files to be licensed under the GNU General Public
   License without this special exception.

   This special exception was added by the Free Software Foundation in
   version 2.2 of Bison.  */

#ifndef YY_YY_Y_TAB_H_INCLUDED
# define YY_YY_Y_TAB_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Token type.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    machiaj = 258,
    de = 259,
    ms = 260,
    mz = 261,
    da = 262,
    nu = 263,
    info = 264,
    vm = 265,
    diferentaM = 266,
    ceEste = 267,
    cumFolosesc = 268,
    fondDeTen = 269,
    multumesc = 270,
    ceEste2 = 271,
    salut = 272,
    mCorectie = 273,
    PRODUS = 274,
    corectie = 275,
    fCorectie = 276
  };
#endif
/* Tokens.  */
#define machiaj 258
#define de 259
#define ms 260
#define mz 261
#define da 262
#define nu 263
#define info 264
#define vm 265
#define diferentaM 266
#define ceEste 267
#define cumFolosesc 268
#define fondDeTen 269
#define multumesc 270
#define ceEste2 271
#define salut 272
#define mCorectie 273
#define PRODUS 274
#define corectie 275
#define fCorectie 276

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED

union YYSTYPE
{
#line 26 "proiect.y" /* yacc.c:1909  */

	
	char* produs;
	
#line 33 "proiect.y" /* yacc.c:1909  */

char* zona;
char* adj;

#line 106 "y.tab.h" /* yacc.c:1909  */
};

typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_Y_TAB_H_INCLUDED  */
