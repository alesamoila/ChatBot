/* A Bison parser, made by GNU Bison 3.0.4.  */

/* Bison implementation for Yacc-like parsers in C

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

/* C LALR(1) parser skeleton written by Richard Stallman, by
   simplifying the original so-called "semantic" parser.  */

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Identify Bison output.  */
#define YYBISON 1

/* Bison version.  */
#define YYBISON_VERSION "3.0.4"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* Copy the first part of user declarations.  */
#line 1 "proiect.y" /* yacc.c:339  */

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

 

#line 90 "y.tab.c" /* yacc.c:339  */

# ifndef YY_NULLPTR
#  if defined __cplusplus && 201103L <= __cplusplus
#   define YY_NULLPTR nullptr
#  else
#   define YY_NULLPTR 0
#  endif
# endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 0
#endif

/* In a future release of Bison, this section will be replaced
   by #include "y.tab.h".  */
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
#line 26 "proiect.y" /* yacc.c:355  */

	
	char* produs;
	
#line 33 "proiect.y" /* yacc.c:355  */

char* zona;
char* adj;

#line 182 "y.tab.c" /* yacc.c:355  */
};

typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_Y_TAB_H_INCLUDED  */

/* Copy the second part of user declarations.  */

#line 199 "y.tab.c" /* yacc.c:358  */

#ifdef short
# undef short
#endif

#ifdef YYTYPE_UINT8
typedef YYTYPE_UINT8 yytype_uint8;
#else
typedef unsigned char yytype_uint8;
#endif

#ifdef YYTYPE_INT8
typedef YYTYPE_INT8 yytype_int8;
#else
typedef signed char yytype_int8;
#endif

#ifdef YYTYPE_UINT16
typedef YYTYPE_UINT16 yytype_uint16;
#else
typedef unsigned short int yytype_uint16;
#endif

#ifdef YYTYPE_INT16
typedef YYTYPE_INT16 yytype_int16;
#else
typedef short int yytype_int16;
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif ! defined YYSIZE_T
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned int
# endif
#endif

#define YYSIZE_MAXIMUM ((YYSIZE_T) -1)

#ifndef YY_
# if defined YYENABLE_NLS && YYENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> /* INFRINGES ON USER NAME SPACE */
#   define YY_(Msgid) dgettext ("bison-runtime", Msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(Msgid) Msgid
# endif
#endif

#ifndef YY_ATTRIBUTE
# if (defined __GNUC__                                               \
      && (2 < __GNUC__ || (__GNUC__ == 2 && 96 <= __GNUC_MINOR__)))  \
     || defined __SUNPRO_C && 0x5110 <= __SUNPRO_C
#  define YY_ATTRIBUTE(Spec) __attribute__(Spec)
# else
#  define YY_ATTRIBUTE(Spec) /* empty */
# endif
#endif

#ifndef YY_ATTRIBUTE_PURE
# define YY_ATTRIBUTE_PURE   YY_ATTRIBUTE ((__pure__))
#endif

#ifndef YY_ATTRIBUTE_UNUSED
# define YY_ATTRIBUTE_UNUSED YY_ATTRIBUTE ((__unused__))
#endif

#if !defined _Noreturn \
     && (!defined __STDC_VERSION__ || __STDC_VERSION__ < 201112)
# if defined _MSC_VER && 1200 <= _MSC_VER
#  define _Noreturn __declspec (noreturn)
# else
#  define _Noreturn YY_ATTRIBUTE ((__noreturn__))
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(E) ((void) (E))
#else
# define YYUSE(E) /* empty */
#endif

#if defined __GNUC__ && 407 <= __GNUC__ * 100 + __GNUC_MINOR__
/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN \
    _Pragma ("GCC diagnostic push") \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")\
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
# define YY_IGNORE_MAYBE_UNINITIALIZED_END \
    _Pragma ("GCC diagnostic pop")
#else
# define YY_INITIAL_VALUE(Value) Value
#endif
#ifndef YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_END
#endif
#ifndef YY_INITIAL_VALUE
# define YY_INITIAL_VALUE(Value) /* Nothing. */
#endif


#if ! defined yyoverflow || YYERROR_VERBOSE

/* The parser invokes alloca or malloc; define the necessary symbols.  */

# ifdef YYSTACK_USE_ALLOCA
#  if YYSTACK_USE_ALLOCA
#   ifdef __GNUC__
#    define YYSTACK_ALLOC __builtin_alloca
#   elif defined __BUILTIN_VA_ARG_INCR
#    include <alloca.h> /* INFRINGES ON USER NAME SPACE */
#   elif defined _AIX
#    define YYSTACK_ALLOC __alloca
#   elif defined _MSC_VER
#    include <malloc.h> /* INFRINGES ON USER NAME SPACE */
#    define alloca _alloca
#   else
#    define YYSTACK_ALLOC alloca
#    if ! defined _ALLOCA_H && ! defined EXIT_SUCCESS
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
      /* Use EXIT_SUCCESS as a witness for stdlib.h.  */
#     ifndef EXIT_SUCCESS
#      define EXIT_SUCCESS 0
#     endif
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's 'empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (0)
#  ifndef YYSTACK_ALLOC_MAXIMUM
    /* The OS might guarantee only one guard page at the bottom of the stack,
       and a page size can be as small as 4096 bytes.  So we cannot safely
       invoke alloca (N) if N exceeds 4096.  Use a slightly smaller number
       to allow for a few compiler-allocated temporary stack slots.  */
#   define YYSTACK_ALLOC_MAXIMUM 4032 /* reasonable circa 2006 */
#  endif
# else
#  define YYSTACK_ALLOC YYMALLOC
#  define YYSTACK_FREE YYFREE
#  ifndef YYSTACK_ALLOC_MAXIMUM
#   define YYSTACK_ALLOC_MAXIMUM YYSIZE_MAXIMUM
#  endif
#  if (defined __cplusplus && ! defined EXIT_SUCCESS \
       && ! ((defined YYMALLOC || defined malloc) \
             && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef EXIT_SUCCESS
#    define EXIT_SUCCESS 0
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined EXIT_SUCCESS
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined EXIT_SUCCESS
void free (void *); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
# endif
#endif /* ! defined yyoverflow || YYERROR_VERBOSE */


#if (! defined yyoverflow \
     && (! defined __cplusplus \
         || (defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yytype_int16 yyss_alloc;
  YYSTYPE yyvs_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (sizeof (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (sizeof (yytype_int16) + sizeof (YYSTYPE)) \
      + YYSTACK_GAP_MAXIMUM)

# define YYCOPY_NEEDED 1

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack_alloc, Stack)                           \
    do                                                                  \
      {                                                                 \
        YYSIZE_T yynewbytes;                                            \
        YYCOPY (&yyptr->Stack_alloc, Stack, yysize);                    \
        Stack = &yyptr->Stack_alloc;                                    \
        yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
        yyptr += yynewbytes / sizeof (*yyptr);                          \
      }                                                                 \
    while (0)

#endif

#if defined YYCOPY_NEEDED && YYCOPY_NEEDED
/* Copy COUNT objects from SRC to DST.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(Dst, Src, Count) \
      __builtin_memcpy (Dst, Src, (Count) * sizeof (*(Src)))
#  else
#   define YYCOPY(Dst, Src, Count)              \
      do                                        \
        {                                       \
          YYSIZE_T yyi;                         \
          for (yyi = 0; yyi < (Count); yyi++)   \
            (Dst)[yyi] = (Src)[yyi];            \
        }                                       \
      while (0)
#  endif
# endif
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  2
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   30

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  24
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  5
/* YYNRULES -- Number of rules.  */
#define YYNRULES  22
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  33

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   276

#define YYTRANSLATE(YYX)                                                \
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, without out-of-bounds checking.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
      22,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    23,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     1,     2,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint8 yyrline[] =
{
       0,    48,    48,    49,    52,    54,    56,    58,    60,    62,
      64,    66,    68,    70,    72,    74,    76,    78,    79,    83,
      85,    89,    95
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "machiaj", "de", "ms", "mz", "da", "nu",
  "info", "vm", "diferentaM", "ceEste", "cumFolosesc", "fondDeTen",
  "multumesc", "ceEste2", "salut", "mCorectie", "PRODUS", "corectie",
  "fCorectie", "'\\n'", "'?'", "$accept", "file", "form",
  "discutieFondDeTen", "cumCorectez", YY_NULLPTR
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[NUM] -- (External) token number corresponding to the
   (internal) symbol number NUM (which must be that of a token).  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,    10,    63
};
# endif

#define YYPACT_NINF -18

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-18)))

#define YYTABLE_NINF -1

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int8 yypact[] =
{
     -18,     0,   -18,   -18,   -18,   -18,   -18,   -18,    -2,   -18,
     -17,     1,    -4,   -18,     2,   -18,     3,     4,   -18,   -18,
     -18,   -18,   -18,    -1,     5,   -18,   -18,     6,   -18,   -18,
     -18,     7,   -18
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       3,    18,     1,     5,     6,    20,    21,     4,     0,    10,
       0,     0,     0,    15,     0,    16,     0,     0,    14,    17,
       9,     7,     8,     0,     0,    19,    11,     0,     2,    12,
      13,     0,    22
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int8 yypgoto[] =
{
     -18,   -18,   -18,   -18,   -18
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int8 yydefgoto[] =
{
      -1,     1,    17,    18,    19
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_uint8 yytable[] =
{
       2,    20,    23,    21,    22,     3,     4,     5,     6,     7,
       8,     9,    10,    11,    12,    13,    14,    15,    16,    25,
      24,    26,    29,    27,     0,     0,    28,    31,    30,     0,
      32
};

static const yytype_int8 yycheck[] =
{
       0,     3,    19,     5,     6,     5,     6,     7,     8,     9,
      10,    11,    12,    13,    14,    15,    16,    17,    18,    23,
      19,    19,    23,    20,    -1,    -1,    22,    21,    23,    -1,
      23
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    25,     0,     5,     6,     7,     8,     9,    10,    11,
      12,    13,    14,    15,    16,    17,    18,    26,    27,    28,
       3,     5,     6,    19,    19,    23,    19,    20,    22,    23,
      23,    21,    23
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    24,    25,    25,    26,    26,    26,    26,    26,    26,
      26,    26,    26,    26,    26,    26,    26,    26,    26,    27,
      27,    27,    28
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     3,     0,     1,     1,     1,     2,     2,     2,
       1,     2,     3,     3,     1,     1,     1,     1,     0,     2,
       1,     1,     4
};


#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)
#define YYEMPTY         (-2)
#define YYEOF           0

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab


#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)                                  \
do                                                              \
  if (yychar == YYEMPTY)                                        \
    {                                                           \
      yychar = (Token);                                         \
      yylval = (Value);                                         \
      YYPOPSTACK (yylen);                                       \
      yystate = *yyssp;                                         \
      goto yybackup;                                            \
    }                                                           \
  else                                                          \
    {                                                           \
      yyerror (YY_("syntax error: cannot back up")); \
      YYERROR;                                                  \
    }                                                           \
while (0)

/* Error token number */
#define YYTERROR        1
#define YYERRCODE       256



/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)                        \
do {                                            \
  if (yydebug)                                  \
    YYFPRINTF Args;                             \
} while (0)

/* This macro is provided for backward compatibility. */
#ifndef YY_LOCATION_PRINT
# define YY_LOCATION_PRINT(File, Loc) ((void) 0)
#endif


# define YY_SYMBOL_PRINT(Title, Type, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Type, Value); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*----------------------------------------.
| Print this symbol's value on YYOUTPUT.  |
`----------------------------------------*/

static void
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
{
  FILE *yyo = yyoutput;
  YYUSE (yyo);
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyoutput, yytoknum[yytype], *yyvaluep);
# endif
  YYUSE (yytype);
}


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

static void
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
{
  YYFPRINTF (yyoutput, "%s %s (",
             yytype < YYNTOKENS ? "token" : "nterm", yytname[yytype]);

  yy_symbol_value_print (yyoutput, yytype, yyvaluep);
  YYFPRINTF (yyoutput, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

static void
yy_stack_print (yytype_int16 *yybottom, yytype_int16 *yytop)
{
  YYFPRINTF (stderr, "Stack now");
  for (; yybottom <= yytop; yybottom++)
    {
      int yybot = *yybottom;
      YYFPRINTF (stderr, " %d", yybot);
    }
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)                            \
do {                                                            \
  if (yydebug)                                                  \
    yy_stack_print ((Bottom), (Top));                           \
} while (0)


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

static void
yy_reduce_print (yytype_int16 *yyssp, YYSTYPE *yyvsp, int yyrule)
{
  unsigned long int yylno = yyrline[yyrule];
  int yynrhs = yyr2[yyrule];
  int yyi;
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %lu):\n",
             yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr,
                       yystos[yyssp[yyi + 1 - yynrhs]],
                       &(yyvsp[(yyi + 1) - (yynrhs)])
                                              );
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)          \
do {                                    \
  if (yydebug)                          \
    yy_reduce_print (yyssp, yyvsp, Rule); \
} while (0)

/* Nonzero means print parse trace.  It is left uninitialized so that
   multiple parsers can coexist.  */
int yydebug;
#else /* !YYDEBUG */
# define YYDPRINTF(Args)
# define YY_SYMBOL_PRINT(Title, Type, Value, Location)
# define YY_STACK_PRINT(Bottom, Top)
# define YY_REDUCE_PRINT(Rule)
#endif /* !YYDEBUG */


/* YYINITDEPTH -- initial size of the parser's stacks.  */
#ifndef YYINITDEPTH
# define YYINITDEPTH 200
#endif

/* YYMAXDEPTH -- maximum size the stacks can grow to (effective only
   if the built-in stack extension method is used).

   Do not make this value too large; the results are undefined if
   YYSTACK_ALLOC_MAXIMUM < YYSTACK_BYTES (YYMAXDEPTH)
   evaluated with infinite-precision integer arithmetic.  */

#ifndef YYMAXDEPTH
# define YYMAXDEPTH 10000
#endif


#if YYERROR_VERBOSE

# ifndef yystrlen
#  if defined __GLIBC__ && defined _STRING_H
#   define yystrlen strlen
#  else
/* Return the length of YYSTR.  */
static YYSIZE_T
yystrlen (const char *yystr)
{
  YYSIZE_T yylen;
  for (yylen = 0; yystr[yylen]; yylen++)
    continue;
  return yylen;
}
#  endif
# endif

# ifndef yystpcpy
#  if defined __GLIBC__ && defined _STRING_H && defined _GNU_SOURCE
#   define yystpcpy stpcpy
#  else
/* Copy YYSRC to YYDEST, returning the address of the terminating '\0' in
   YYDEST.  */
static char *
yystpcpy (char *yydest, const char *yysrc)
{
  char *yyd = yydest;
  const char *yys = yysrc;

  while ((*yyd++ = *yys++) != '\0')
    continue;

  return yyd - 1;
}
#  endif
# endif

# ifndef yytnamerr
/* Copy to YYRES the contents of YYSTR after stripping away unnecessary
   quotes and backslashes, so that it's suitable for yyerror.  The
   heuristic is that double-quoting is unnecessary unless the string
   contains an apostrophe, a comma, or backslash (other than
   backslash-backslash).  YYSTR is taken from yytname.  If YYRES is
   null, do not copy; instead, return the length of what the result
   would have been.  */
static YYSIZE_T
yytnamerr (char *yyres, const char *yystr)
{
  if (*yystr == '"')
    {
      YYSIZE_T yyn = 0;
      char const *yyp = yystr;

      for (;;)
        switch (*++yyp)
          {
          case '\'':
          case ',':
            goto do_not_strip_quotes;

          case '\\':
            if (*++yyp != '\\')
              goto do_not_strip_quotes;
            /* Fall through.  */
          default:
            if (yyres)
              yyres[yyn] = *yyp;
            yyn++;
            break;

          case '"':
            if (yyres)
              yyres[yyn] = '\0';
            return yyn;
          }
    do_not_strip_quotes: ;
    }

  if (! yyres)
    return yystrlen (yystr);

  return yystpcpy (yyres, yystr) - yyres;
}
# endif

/* Copy into *YYMSG, which is of size *YYMSG_ALLOC, an error message
   about the unexpected token YYTOKEN for the state stack whose top is
   YYSSP.

   Return 0 if *YYMSG was successfully written.  Return 1 if *YYMSG is
   not large enough to hold the message.  In that case, also set
   *YYMSG_ALLOC to the required number of bytes.  Return 2 if the
   required number of bytes is too large to store.  */
static int
yysyntax_error (YYSIZE_T *yymsg_alloc, char **yymsg,
                yytype_int16 *yyssp, int yytoken)
{
  YYSIZE_T yysize0 = yytnamerr (YY_NULLPTR, yytname[yytoken]);
  YYSIZE_T yysize = yysize0;
  enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
  /* Internationalized format string. */
  const char *yyformat = YY_NULLPTR;
  /* Arguments of yyformat. */
  char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
  /* Number of reported tokens (one for the "unexpected", one per
     "expected"). */
  int yycount = 0;

  /* There are many possibilities here to consider:
     - If this state is a consistent state with a default action, then
       the only way this function was invoked is if the default action
       is an error action.  In that case, don't check for expected
       tokens because there are none.
     - The only way there can be no lookahead present (in yychar) is if
       this state is a consistent state with a default action.  Thus,
       detecting the absence of a lookahead is sufficient to determine
       that there is no unexpected or expected token to report.  In that
       case, just report a simple "syntax error".
     - Don't assume there isn't a lookahead just because this state is a
       consistent state with a default action.  There might have been a
       previous inconsistent state, consistent state with a non-default
       action, or user semantic action that manipulated yychar.
     - Of course, the expected token list depends on states to have
       correct lookahead information, and it depends on the parser not
       to perform extra reductions after fetching a lookahead from the
       scanner and before detecting a syntax error.  Thus, state merging
       (from LALR or IELR) and default reductions corrupt the expected
       token list.  However, the list is correct for canonical LR with
       one exception: it will still contain any token that will not be
       accepted due to an error action in a later state.
  */
  if (yytoken != YYEMPTY)
    {
      int yyn = yypact[*yyssp];
      yyarg[yycount++] = yytname[yytoken];
      if (!yypact_value_is_default (yyn))
        {
          /* Start YYX at -YYN if negative to avoid negative indexes in
             YYCHECK.  In other words, skip the first -YYN actions for
             this state because they are default actions.  */
          int yyxbegin = yyn < 0 ? -yyn : 0;
          /* Stay within bounds of both yycheck and yytname.  */
          int yychecklim = YYLAST - yyn + 1;
          int yyxend = yychecklim < YYNTOKENS ? yychecklim : YYNTOKENS;
          int yyx;

          for (yyx = yyxbegin; yyx < yyxend; ++yyx)
            if (yycheck[yyx + yyn] == yyx && yyx != YYTERROR
                && !yytable_value_is_error (yytable[yyx + yyn]))
              {
                if (yycount == YYERROR_VERBOSE_ARGS_MAXIMUM)
                  {
                    yycount = 1;
                    yysize = yysize0;
                    break;
                  }
                yyarg[yycount++] = yytname[yyx];
                {
                  YYSIZE_T yysize1 = yysize + yytnamerr (YY_NULLPTR, yytname[yyx]);
                  if (! (yysize <= yysize1
                         && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
                    return 2;
                  yysize = yysize1;
                }
              }
        }
    }

  switch (yycount)
    {
# define YYCASE_(N, S)                      \
      case N:                               \
        yyformat = S;                       \
      break
      YYCASE_(0, YY_("syntax error"));
      YYCASE_(1, YY_("syntax error, unexpected %s"));
      YYCASE_(2, YY_("syntax error, unexpected %s, expecting %s"));
      YYCASE_(3, YY_("syntax error, unexpected %s, expecting %s or %s"));
      YYCASE_(4, YY_("syntax error, unexpected %s, expecting %s or %s or %s"));
      YYCASE_(5, YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s"));
# undef YYCASE_
    }

  {
    YYSIZE_T yysize1 = yysize + yystrlen (yyformat);
    if (! (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
      return 2;
    yysize = yysize1;
  }

  if (*yymsg_alloc < yysize)
    {
      *yymsg_alloc = 2 * yysize;
      if (! (yysize <= *yymsg_alloc
             && *yymsg_alloc <= YYSTACK_ALLOC_MAXIMUM))
        *yymsg_alloc = YYSTACK_ALLOC_MAXIMUM;
      return 1;
    }

  /* Avoid sprintf, as that infringes on the user's name space.
     Don't have undefined behavior even if the translation
     produced a string with the wrong number of "%s"s.  */
  {
    char *yyp = *yymsg;
    int yyi = 0;
    while ((*yyp = *yyformat) != '\0')
      if (*yyp == '%' && yyformat[1] == 's' && yyi < yycount)
        {
          yyp += yytnamerr (yyp, yyarg[yyi++]);
          yyformat += 2;
        }
      else
        {
          yyp++;
          yyformat++;
        }
  }
  return 0;
}
#endif /* YYERROR_VERBOSE */

/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

static void
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep)
{
  YYUSE (yyvaluep);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YYUSE (yytype);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}




/* The lookahead symbol.  */
int yychar;

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval;
/* Number of syntax errors so far.  */
int yynerrs;


/*----------.
| yyparse.  |
`----------*/

int
yyparse (void)
{
    int yystate;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus;

    /* The stacks and their tools:
       'yyss': related to states.
       'yyvs': related to semantic values.

       Refer to the stacks through separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* The state stack.  */
    yytype_int16 yyssa[YYINITDEPTH];
    yytype_int16 *yyss;
    yytype_int16 *yyssp;

    /* The semantic value stack.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs;
    YYSTYPE *yyvsp;

    YYSIZE_T yystacksize;

  int yyn;
  int yyresult;
  /* Lookahead token as an internal (translated) token number.  */
  int yytoken = 0;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;

#if YYERROR_VERBOSE
  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYSIZE_T yymsg_alloc = sizeof yymsgbuf;
#endif

#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  yyssp = yyss = yyssa;
  yyvsp = yyvs = yyvsa;
  yystacksize = YYINITDEPTH;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY; /* Cause a token to be read.  */
  goto yysetstate;

/*------------------------------------------------------------.
| yynewstate -- Push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
 yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;

 yysetstate:
  *yyssp = yystate;

  if (yyss + yystacksize - 1 <= yyssp)
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYSIZE_T yysize = yyssp - yyss + 1;

#ifdef yyoverflow
      {
        /* Give user a chance to reallocate the stack.  Use copies of
           these so that the &'s don't force the real ones into
           memory.  */
        YYSTYPE *yyvs1 = yyvs;
        yytype_int16 *yyss1 = yyss;

        /* Each stack pointer address is followed by the size of the
           data in use in that stack, in bytes.  This used to be a
           conditional around just the two extra args, but that might
           be undefined if yyoverflow is a macro.  */
        yyoverflow (YY_("memory exhausted"),
                    &yyss1, yysize * sizeof (*yyssp),
                    &yyvs1, yysize * sizeof (*yyvsp),
                    &yystacksize);

        yyss = yyss1;
        yyvs = yyvs1;
      }
#else /* no yyoverflow */
# ifndef YYSTACK_RELOCATE
      goto yyexhaustedlab;
# else
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
        goto yyexhaustedlab;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
        yystacksize = YYMAXDEPTH;

      {
        yytype_int16 *yyss1 = yyss;
        union yyalloc *yyptr =
          (union yyalloc *) YYSTACK_ALLOC (YYSTACK_BYTES (yystacksize));
        if (! yyptr)
          goto yyexhaustedlab;
        YYSTACK_RELOCATE (yyss_alloc, yyss);
        YYSTACK_RELOCATE (yyvs_alloc, yyvs);
#  undef YYSTACK_RELOCATE
        if (yyss1 != yyssa)
          YYSTACK_FREE (yyss1);
      }
# endif
#endif /* no yyoverflow */

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;

      YYDPRINTF ((stderr, "Stack size increased to %lu\n",
                  (unsigned long int) yystacksize));

      if (yyss + yystacksize - 1 <= yyssp)
        YYABORT;
    }

  YYDPRINTF ((stderr, "Entering state %d\n", yystate));

  if (yystate == YYFINAL)
    YYACCEPT;

  goto yybackup;

/*-----------.
| yybackup.  |
`-----------*/
yybackup:

  /* Do appropriate processing given the current state.  Read a
     lookahead token if we need one and don't already have one.  */

  /* First try to decide what to do without reference to lookahead token.  */
  yyn = yypact[yystate];
  if (yypact_value_is_default (yyn))
    goto yydefault;

  /* Not known => get a lookahead token if don't already have one.  */

  /* YYCHAR is either YYEMPTY or YYEOF or a valid lookahead symbol.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token: "));
      yychar = yylex ();
    }

  if (yychar <= YYEOF)
    {
      yychar = yytoken = YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
    }
  else
    {
      yytoken = YYTRANSLATE (yychar);
      YY_SYMBOL_PRINT ("Next token is", yytoken, &yylval, &yylloc);
    }

  /* If the proper action on seeing token YYTOKEN is to reduce or to
     detect an error, take that action.  */
  yyn += yytoken;
  if (yyn < 0 || YYLAST < yyn || yycheck[yyn] != yytoken)
    goto yydefault;
  yyn = yytable[yyn];
  if (yyn <= 0)
    {
      if (yytable_value_is_error (yyn))
        goto yyerrlab;
      yyn = -yyn;
      goto yyreduce;
    }

  /* Count tokens shifted since error; after three, turn off error
     status.  */
  if (yyerrstatus)
    yyerrstatus--;

  /* Shift the lookahead token.  */
  YY_SYMBOL_PRINT ("Shifting", yytoken, &yylval, &yylloc);

  /* Discard the shifted token.  */
  yychar = YYEMPTY;

  yystate = yyn;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END

  goto yynewstate;


/*-----------------------------------------------------------.
| yydefault -- do the default action for the current state.  |
`-----------------------------------------------------------*/
yydefault:
  yyn = yydefact[yystate];
  if (yyn == 0)
    goto yyerrlab;
  goto yyreduce;


/*-----------------------------.
| yyreduce -- Do a reduction.  |
`-----------------------------*/
yyreduce:
  /* yyn is the number of a rule to reduce with.  */
  yylen = yyr2[yyn];

  /* If YYLEN is nonzero, implement the default value of the action:
     '$$ = $1'.

     Otherwise, the following line sets YYVAL to garbage.
     This behavior is undocumented and Bison
     users should not rely upon it.  Assigning to YYVAL
     unconditionally makes the parser a bit smaller, and it avoids a
     GCC warning that YYVAL may be used uninitialized.  */
  yyval = yyvsp[1-yylen];


  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
        case 4:
#line 52 "proiect.y" /* yacc.c:1646  */
    { cuprins(); }
#line 1292 "y.tab.c" /* yacc.c:1646  */
    break;

  case 5:
#line 54 "proiect.y" /* yacc.c:1646  */
    { mesajMachiajdeSeara(); printf("Cu ce pot sa te mai ajut?\n"); }
#line 1298 "y.tab.c" /* yacc.c:1646  */
    break;

  case 6:
#line 56 "proiect.y" /* yacc.c:1646  */
    {mesajMachiajdeZi(); printf("Cu ce pot sa te mai ajut?\n");}
#line 1304 "y.tab.c" /* yacc.c:1646  */
    break;

  case 7:
#line 58 "proiect.y" /* yacc.c:1646  */
    { mesajMachiajdeSeara();   printf("Cu ce pot sa te mai ajut?\n");  }
#line 1310 "y.tab.c" /* yacc.c:1646  */
    break;

  case 8:
#line 60 "proiect.y" /* yacc.c:1646  */
    {mesajMachiajdeZi(); printf("Cu ce pot sa te mai ajut?\n");}
#line 1316 "y.tab.c" /* yacc.c:1646  */
    break;

  case 9:
#line 62 "proiect.y" /* yacc.c:1646  */
    {printf("Ce fel de machiaj vrei sa faci? De zi sau de seara?\n"); }
#line 1322 "y.tab.c" /* yacc.c:1646  */
    break;

  case 10:
#line 64 "proiect.y" /* yacc.c:1646  */
    {diferentaMachiaj(); printf("Cu ce pot sa te mai ajut?\n");}
#line 1328 "y.tab.c" /* yacc.c:1646  */
    break;

  case 11:
#line 66 "proiect.y" /* yacc.c:1646  */
    { infoProdus((yyvsp[0].produs)); }
#line 1334 "y.tab.c" /* yacc.c:1646  */
    break;

  case 12:
#line 68 "proiect.y" /* yacc.c:1646  */
    { infoProdus((yyvsp[-1].produs));}
#line 1340 "y.tab.c" /* yacc.c:1646  */
    break;

  case 13:
#line 70 "proiect.y" /* yacc.c:1646  */
    { folosireProdus((yyvsp[-1].produs));}
#line 1346 "y.tab.c" /* yacc.c:1646  */
    break;

  case 15:
#line 74 "proiect.y" /* yacc.c:1646  */
    { printf(" Cu drag! Ma bucur sa te ajut! \n"); }
#line 1352 "y.tab.c" /* yacc.c:1646  */
    break;

  case 16:
#line 76 "proiect.y" /* yacc.c:1646  */
    {printf("Salut! Spune-mi cu ce te pot ajuta \n");}
#line 1358 "y.tab.c" /* yacc.c:1646  */
    break;

  case 19:
#line 83 "proiect.y" /* yacc.c:1646  */
    {nivel=0; printf("Fondul de ten se alege dupa tipul tenului, dupa subton si dupa nuanta. Nuanta se verifica pe mandibula. Stii ce tip de ten ai?\n"); }
#line 1364 "y.tab.c" /* yacc.c:1646  */
    break;

  case 20:
#line 85 "proiect.y" /* yacc.c:1646  */
    { if (nivel== 0) printf("Stii ce subton ai?\n");
             				if (nivel==1) printf("Tine cont de aceste 3 criterii si poti sa alegi cu usurinta fondul de ten cel mai potrivit.\n");
							nivel = nivel+1;  }
#line 1372 "y.tab.c" /* yacc.c:1646  */
    break;

  case 21:
#line 89 "proiect.y" /* yacc.c:1646  */
    {if (nivel == 0) { mesajTipDeTen(); printf("Stii ce subton ai?\n");}
					       if (nivel==1) {mesajSubton(); printf("Tine cont de aceste 3 criterii (tipul tenului,subton si nuanta) si poti sa alegi cu usurinta fondul de ten cel mai potrivit.\n");} 						   
						   nivel++ ; }
#line 1380 "y.tab.c" /* yacc.c:1646  */
    break;

  case 22:
#line 95 "proiect.y" /* yacc.c:1646  */
    {
                     if (((yyvsp[-2].zona)) == "ochii" ) 
					    corectieOchi((yyvsp[-1].adj));
						
					else if (((yyvsp[-2].zona)) == "cearcanele" )
					     corectieCearcane((yyvsp[-1].adj));
					}
#line 1392 "y.tab.c" /* yacc.c:1646  */
    break;


#line 1396 "y.tab.c" /* yacc.c:1646  */
      default: break;
    }
  /* User semantic actions sometimes alter yychar, and that requires
     that yytoken be updated with the new translation.  We take the
     approach of translating immediately before every use of yytoken.
     One alternative is translating here after every semantic action,
     but that translation would be missed if the semantic action invokes
     YYABORT, YYACCEPT, or YYERROR immediately after altering yychar or
     if it invokes YYBACKUP.  In the case of YYABORT or YYACCEPT, an
     incorrect destructor might then be invoked immediately.  In the
     case of YYERROR or YYBACKUP, subsequent parser actions might lead
     to an incorrect destructor call or verbose syntax error message
     before the lookahead is translated.  */
  YY_SYMBOL_PRINT ("-> $$ =", yyr1[yyn], &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);

  *++yyvsp = yyval;

  /* Now 'shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */

  yyn = yyr1[yyn];

  yystate = yypgoto[yyn - YYNTOKENS] + *yyssp;
  if (0 <= yystate && yystate <= YYLAST && yycheck[yystate] == *yyssp)
    yystate = yytable[yystate];
  else
    yystate = yydefgoto[yyn - YYNTOKENS];

  goto yynewstate;


/*--------------------------------------.
| yyerrlab -- here on detecting error.  |
`--------------------------------------*/
yyerrlab:
  /* Make sure we have latest lookahead translation.  See comments at
     user semantic actions for why this is necessary.  */
  yytoken = yychar == YYEMPTY ? YYEMPTY : YYTRANSLATE (yychar);

  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
#if ! YYERROR_VERBOSE
      yyerror (YY_("syntax error"));
#else
# define YYSYNTAX_ERROR yysyntax_error (&yymsg_alloc, &yymsg, \
                                        yyssp, yytoken)
      {
        char const *yymsgp = YY_("syntax error");
        int yysyntax_error_status;
        yysyntax_error_status = YYSYNTAX_ERROR;
        if (yysyntax_error_status == 0)
          yymsgp = yymsg;
        else if (yysyntax_error_status == 1)
          {
            if (yymsg != yymsgbuf)
              YYSTACK_FREE (yymsg);
            yymsg = (char *) YYSTACK_ALLOC (yymsg_alloc);
            if (!yymsg)
              {
                yymsg = yymsgbuf;
                yymsg_alloc = sizeof yymsgbuf;
                yysyntax_error_status = 2;
              }
            else
              {
                yysyntax_error_status = YYSYNTAX_ERROR;
                yymsgp = yymsg;
              }
          }
        yyerror (yymsgp);
        if (yysyntax_error_status == 2)
          goto yyexhaustedlab;
      }
# undef YYSYNTAX_ERROR
#endif
    }



  if (yyerrstatus == 3)
    {
      /* If just tried and failed to reuse lookahead token after an
         error, discard it.  */

      if (yychar <= YYEOF)
        {
          /* Return failure if at end of input.  */
          if (yychar == YYEOF)
            YYABORT;
        }
      else
        {
          yydestruct ("Error: discarding",
                      yytoken, &yylval);
          yychar = YYEMPTY;
        }
    }

  /* Else will try to reuse lookahead token after shifting the error
     token.  */
  goto yyerrlab1;


/*---------------------------------------------------.
| yyerrorlab -- error raised explicitly by YYERROR.  |
`---------------------------------------------------*/
yyerrorlab:

  /* Pacify compilers like GCC when the user code never invokes
     YYERROR and the label yyerrorlab therefore never appears in user
     code.  */
  if (/*CONSTCOND*/ 0)
     goto yyerrorlab;

  /* Do not reclaim the symbols of the rule whose action triggered
     this YYERROR.  */
  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);
  yystate = *yyssp;
  goto yyerrlab1;


/*-------------------------------------------------------------.
| yyerrlab1 -- common code for both syntax error and YYERROR.  |
`-------------------------------------------------------------*/
yyerrlab1:
  yyerrstatus = 3;      /* Each real token shifted decrements this.  */

  for (;;)
    {
      yyn = yypact[yystate];
      if (!yypact_value_is_default (yyn))
        {
          yyn += YYTERROR;
          if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYTERROR)
            {
              yyn = yytable[yyn];
              if (0 < yyn)
                break;
            }
        }

      /* Pop the current state because it cannot handle the error token.  */
      if (yyssp == yyss)
        YYABORT;


      yydestruct ("Error: popping",
                  yystos[yystate], yyvsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END


  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", yystos[yyn], yyvsp, yylsp);

  yystate = yyn;
  goto yynewstate;


/*-------------------------------------.
| yyacceptlab -- YYACCEPT comes here.  |
`-------------------------------------*/
yyacceptlab:
  yyresult = 0;
  goto yyreturn;

/*-----------------------------------.
| yyabortlab -- YYABORT comes here.  |
`-----------------------------------*/
yyabortlab:
  yyresult = 1;
  goto yyreturn;

#if !defined yyoverflow || YYERROR_VERBOSE
/*-------------------------------------------------.
| yyexhaustedlab -- memory exhaustion comes here.  |
`-------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  /* Fall through.  */
#endif

yyreturn:
  if (yychar != YYEMPTY)
    {
      /* Make sure we have latest lookahead translation.  See comments at
         user semantic actions for why this is necessary.  */
      yytoken = YYTRANSLATE (yychar);
      yydestruct ("Cleanup: discarding lookahead",
                  yytoken, &yylval);
    }
  /* Do not reclaim the symbols of the rule whose action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
                  yystos[*yyssp], yyvsp);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif
#if YYERROR_VERBOSE
  if (yymsg != yymsgbuf)
    YYSTACK_FREE (yymsg);
#endif
  return yyresult;
}
#line 106 "proiect.y" /* yacc.c:1906  */


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


