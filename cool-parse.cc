/* A Bison parser, made by GNU Bison 2.5.  */

/* Bison implementation for Yacc-like parsers in C
   
      Copyright (C) 1984, 1989-1990, 2000-2011 Free Software Foundation, Inc.
   
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
#define YYBISON_VERSION "2.5"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1

/* Using locations.  */
#define YYLSP_NEEDED 1

/* Substitute the variable and function names.  */
#define yyparse         cool_yyparse
#define yylex           cool_yylex
#define yyerror         cool_yyerror
#define yylval          cool_yylval
#define yychar          cool_yychar
#define yydebug         cool_yydebug
#define yynerrs         cool_yynerrs
#define yylloc          cool_yylloc

/* Copy the first part of user declarations.  */

/* Line 268 of yacc.c  */
#line 6 "cool.y"

#include "cool-io.h"
#include "cool-tree.h"
#include "stringtab.h"
#include "utilities.h"

/* Locations */
#define YYLTYPE int              /* the type of locations */
#define cool_yylloc curr_lineno  /* use the curr_lineno from the lexer
                                    for the location of tokens */
/* The default action for locations.  Use the location of the first
   terminal/non-terminal. */
extern int node_lineno;
#define YYLLOC_DEFAULT(Current, Rhs, N)         \
  Current = Rhs[1];\
  node_lineno = Current;

extern char *curr_filename;
void yyerror(const char *s);        /*  defined below; called for each parse error */
extern int yylex();           /*  the entry point to the lexer  */

/************************************************************************/
/*                DONT CHANGE ANYTHING IN THIS SECTION                  */

Program ast_root;	      /* the result of the parse  */
Classes parse_results;        /* for use in semantic analysis */
int omerrs = 0;               /* number of errors in lexing and parsing */


/* Line 268 of yacc.c  */
#line 109 "cool.tab.c"

/* Enabling traces.  */
#ifndef YYDEBUG
# define YYDEBUG 1
#endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 0
#endif

/* Enabling the token table.  */
#ifndef YYTOKEN_TABLE
# define YYTOKEN_TABLE 0
#endif


/* Tokens.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
   /* Put the tokens into the symbol table, so that GDB and other debuggers
      know about them.  */
   enum yytokentype {
     CLASS = 258,
     ELSE = 259,
     FI = 260,
     IF = 261,
     IN = 262,
     INHERITS = 263,
     LET = 264,
     LOOP = 265,
     POOL = 266,
     THEN = 267,
     WHILE = 268,
     CASE = 269,
     ESAC = 270,
     OF = 271,
     DARROW = 272,
     NEW = 273,
     ISVOID = 274,
     STR_CONST = 275,
     INT_CONST = 276,
     BOOL_CONST = 277,
     TYPEID = 278,
     OBJECTID = 279,
     ASSIGN = 280,
     NOT = 281,
     LE = 282,
     ERROR = 283,
     LETIN = 285
   };
#endif
/* Tokens.  */
#define CLASS 258
#define ELSE 259
#define FI 260
#define IF 261
#define IN 262
#define INHERITS 263
#define LET 264
#define LOOP 265
#define POOL 266
#define THEN 267
#define WHILE 268
#define CASE 269
#define ESAC 270
#define OF 271
#define DARROW 272
#define NEW 273
#define ISVOID 274
#define STR_CONST 275
#define INT_CONST 276
#define BOOL_CONST 277
#define TYPEID 278
#define OBJECTID 279
#define ASSIGN 280
#define NOT 281
#define LE 282
#define ERROR 283
#define LETIN 285




#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
{

/* Line 293 of yacc.c  */
#line 36 "cool.y"

  Boolean boolean;
  Symbol symbol;
  Program program;
  Class_ class_;
  Classes classes;
  Feature feature;
  Features features;
  Formal formal;
  Formals formals;
  Case case_;
  Cases cases;
  Expression expression;
  Expressions expressions;
  char *error_msg;



/* Line 293 of yacc.c  */
#line 222 "cool.tab.c"
} YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif

#if ! defined YYLTYPE && ! defined YYLTYPE_IS_DECLARED
typedef struct YYLTYPE
{
  int first_line;
  int first_column;
  int last_line;
  int last_column;
} YYLTYPE;
# define yyltype YYLTYPE /* obsolescent; will be withdrawn */
# define YYLTYPE_IS_DECLARED 1
# define YYLTYPE_IS_TRIVIAL 1
#endif


/* Copy the second part of user declarations.  */


/* Line 343 of yacc.c  */
#line 247 "cool.tab.c"

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
#elif (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
typedef signed char yytype_int8;
#else
typedef short int yytype_int8;
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
# elif ! defined YYSIZE_T && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
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
#   define YY_(msgid) dgettext ("bison-runtime", msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(msgid) msgid
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(e) ((void) (e))
#else
# define YYUSE(e) /* empty */
#endif

/* Identity function, used to suppress warnings about constant conditions.  */
#ifndef lint
# define YYID(n) (n)
#else
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static int
YYID (int yyi)
#else
static int
YYID (yyi)
    int yyi;
#endif
{
  return yyi;
}
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
#    if ! defined _ALLOCA_H && ! defined EXIT_SUCCESS && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#     ifndef EXIT_SUCCESS
#      define EXIT_SUCCESS 0
#     endif
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's `empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (YYID (0))
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
#   if ! defined malloc && ! defined EXIT_SUCCESS && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined EXIT_SUCCESS && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
void free (void *); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
# endif
#endif /* ! defined yyoverflow || YYERROR_VERBOSE */


#if (! defined yyoverflow \
     && (! defined __cplusplus \
	 || (defined YYLTYPE_IS_TRIVIAL && YYLTYPE_IS_TRIVIAL \
	     && defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yytype_int16 yyss_alloc;
  YYSTYPE yyvs_alloc;
  YYLTYPE yyls_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (sizeof (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (sizeof (yytype_int16) + sizeof (YYSTYPE) + sizeof (YYLTYPE)) \
      + 2 * YYSTACK_GAP_MAXIMUM)

# define YYCOPY_NEEDED 1

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack_alloc, Stack)				\
    do									\
      {									\
	YYSIZE_T yynewbytes;						\
	YYCOPY (&yyptr->Stack_alloc, Stack, yysize);			\
	Stack = &yyptr->Stack_alloc;					\
	yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
	yyptr += yynewbytes / sizeof (*yyptr);				\
      }									\
    while (YYID (0))

#endif

#if defined YYCOPY_NEEDED && YYCOPY_NEEDED
/* Copy COUNT objects from FROM to TO.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(To, From, Count) \
      __builtin_memcpy (To, From, (Count) * sizeof (*(From)))
#  else
#   define YYCOPY(To, From, Count)		\
      do					\
	{					\
	  YYSIZE_T yyi;				\
	  for (yyi = 0; yyi < (Count); yyi++)	\
	    (To)[yyi] = (From)[yyi];		\
	}					\
      while (YYID (0))
#  endif
# endif
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  6
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   336

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  46
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  14
/* YYNRULES -- Number of rules.  */
#define YYNRULES  54
/* YYNRULES -- Number of states.  */
#define YYNSTATES  139

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   285

#define YYTRANSLATE(YYX)						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
      42,    43,    34,    32,    45,    33,    38,    35,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,    44,    41,
      30,    31,     2,     2,    37,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    39,     2,    40,    36,     2,     2,     2,
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
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,     2,    29
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint8 yyprhs[] =
{
       0,     0,     3,     5,     7,    10,    17,    26,    27,    30,
      41,    46,    53,    54,    56,    60,    64,    66,    70,    73,
      77,    81,    88,    98,   103,   109,   118,   122,   130,   136,
     140,   143,   149,   152,   155,   159,   163,   167,   171,   174,
     178,   182,   186,   189,   193,   195,   197,   199,   201,   207,
     215,   221,   229,   231,   234
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int8 yyrhs[] =
{
      47,     0,    -1,    48,    -1,    49,    -1,    48,    49,    -1,
       3,    23,    39,    50,    40,    41,    -1,     3,    23,     8,
      23,    39,    50,    40,    41,    -1,    -1,    50,    51,    -1,
      24,    42,    52,    43,    44,    23,    39,    56,    40,    41,
      -1,    24,    44,    23,    41,    -1,    24,    44,    23,    25,
      56,    41,    -1,    -1,    53,    -1,    53,    45,    52,    -1,
      24,    44,    23,    -1,    56,    -1,    54,    45,    56,    -1,
      56,    41,    -1,    56,    41,    55,    -1,    24,    25,    56,
      -1,    56,    38,    24,    42,    54,    43,    -1,    56,    38,
      37,    23,    38,    24,    42,    54,    43,    -1,    24,    42,
      54,    43,    -1,    56,    38,    24,    42,    43,    -1,    56,
      38,    37,    23,    38,    24,    42,    43,    -1,    24,    42,
      43,    -1,     6,    56,    12,    56,     4,    56,     5,    -1,
      13,    56,    10,    56,    11,    -1,    39,    55,    40,    -1,
       9,    57,    -1,    14,    56,    16,    58,    15,    -1,    18,
      23,    -1,    19,    56,    -1,    56,    32,    56,    -1,    56,
      33,    56,    -1,    56,    34,    56,    -1,    56,    35,    56,
      -1,    36,    56,    -1,    56,    30,    56,    -1,    56,    27,
      56,    -1,    56,    31,    56,    -1,    26,    56,    -1,    42,
      56,    43,    -1,    24,    -1,    21,    -1,    20,    -1,    22,
      -1,    24,    44,    23,     7,    56,    -1,    24,    44,    23,
      25,    56,     7,    56,    -1,    24,    44,    23,    45,    57,
      -1,    24,    44,    23,    25,    56,    45,    57,    -1,    59,
      -1,    58,    59,    -1,    24,    44,    23,    17,    56,    41,
      -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   117,   117,   121,   124,   131,   134,   141,   142,   148,
     151,   154,   162,   163,   165,   170,   175,   177,   181,   183,
     188,   192,   194,   196,   204,   211,   213,   216,   218,   220,
     222,   224,   226,   228,   230,   232,   234,   236,   238,   240,
     242,   244,   246,   248,   250,   252,   254,   256,   261,   263,
     265,   267,   272,   274,   279
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || YYTOKEN_TABLE
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "CLASS", "ELSE", "FI", "IF", "IN",
  "INHERITS", "LET", "LOOP", "POOL", "THEN", "WHILE", "CASE", "ESAC", "OF",
  "DARROW", "NEW", "ISVOID", "STR_CONST", "INT_CONST", "BOOL_CONST",
  "TYPEID", "OBJECTID", "ASSIGN", "NOT", "LE", "ERROR", "LETIN", "'<'",
  "'='", "'+'", "'-'", "'*'", "'/'", "'~'", "'@'", "'.'", "'{'", "'}'",
  "';'", "'('", "')'", "':'", "','", "$accept", "program", "class_list",
  "class", "feature_list", "feature", "formal_list", "formal", "expr_list",
  "expr_block", "expr", "let_init", "cases", "case", 0
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[YYLEX-NUM] -- Internal token number corresponding to
   token YYLEX-NUM.  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   284,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   285,
      60,    61,    43,    45,    42,    47,   126,    64,    46,   123,
     125,    59,    40,    41,    58,    44
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    46,    47,    48,    48,    49,    49,    50,    50,    51,
      51,    51,    52,    52,    52,    53,    54,    54,    55,    55,
      56,    56,    56,    56,    56,    56,    56,    56,    56,    56,
      56,    56,    56,    56,    56,    56,    56,    56,    56,    56,
      56,    56,    56,    56,    56,    56,    56,    56,    57,    57,
      57,    57,    58,    58,    59
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     1,     2,     6,     8,     0,     2,    10,
       4,     6,     0,     1,     3,     3,     1,     3,     2,     3,
       3,     6,     9,     4,     5,     8,     3,     7,     5,     3,
       2,     5,     2,     2,     3,     3,     3,     3,     2,     3,
       3,     3,     2,     3,     1,     1,     1,     1,     5,     7,
       5,     7,     1,     2,     6
};

/* YYDEFACT[STATE-NAME] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     0,     0,     2,     3,     0,     1,     4,     0,     7,
       0,     0,     7,     0,     0,     8,     0,    12,     0,     5,
       0,     0,     0,    13,     0,     6,     0,     0,    12,     0,
      10,    15,     0,    14,     0,     0,     0,     0,     0,     0,
      46,    45,    47,    44,     0,     0,     0,     0,     0,     0,
       0,     0,    30,     0,     0,    32,    33,     0,     0,    42,
      38,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    11,     0,     0,     0,     0,     0,    20,    26,
       0,    16,    29,    18,    43,    40,    39,    41,    34,    35,
      36,    37,     0,     0,     0,     0,     0,     0,     0,     0,
      52,    23,     0,    19,     0,     0,     0,     0,     0,     0,
       0,    28,     0,    31,    53,    17,    24,     0,     0,     9,
       0,    48,     0,    50,     0,    21,     0,    27,     0,     0,
       0,     0,    49,    51,     0,    25,     0,    54,    22
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int8 yydefgoto[] =
{
      -1,     2,     3,     4,    11,    15,    22,    23,    80,    61,
      81,    52,    99,   100
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -110
static const yytype_int16 yypact[] =
{
      21,     3,    31,    21,  -110,    -6,  -110,  -110,    28,  -110,
       9,   -15,  -110,   -30,    30,  -110,   -13,    52,    61,  -110,
      54,    53,    55,    51,   -12,  -110,    77,    58,    52,   161,
    -110,  -110,    80,  -110,   161,    82,   161,   161,    86,   161,
    -110,  -110,  -110,   -19,   161,   161,   161,   161,   241,    75,
      34,    71,  -110,   192,   218,  -110,    78,   161,    68,   289,
      78,    84,   253,   227,   161,   161,   161,   161,   161,   161,
     161,    38,  -110,   161,   161,   103,   161,    98,   289,  -110,
     -24,   289,  -110,   161,  -110,   298,   298,   298,    15,    15,
      78,    78,    85,   105,   277,   174,    -3,   209,    87,    19,
    -110,  -110,   161,  -110,    99,    91,    89,   161,   161,   161,
      82,  -110,   109,  -110,  -110,   289,  -110,    40,   110,  -110,
     183,   289,    25,  -110,   116,  -110,    95,  -110,   161,    82,
     161,   130,   289,  -110,   265,  -110,    48,  -110,  -110
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -110,  -110,  -110,   137,   133,  -110,   118,  -110,  -101,    64,
     -29,  -109,  -110,    56
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -1
static const yytype_int16 yytable[] =
{
      48,   123,     8,   117,   108,    50,    57,    53,    54,    13,
      56,    13,    17,    29,    18,    59,    60,    62,    63,   101,
     133,   102,   109,    58,     1,    14,     5,    20,    78,    30,
     136,     6,   128,     9,   113,    85,    86,    87,    88,    89,
      90,    91,   110,    98,    94,    95,    74,    97,    12,    69,
      70,    10,    64,    71,    62,    65,    66,    67,    68,    69,
      70,    64,    92,    71,    65,    66,    67,    68,    69,    70,
     129,    19,    71,   115,    34,    93,    21,    35,   120,   121,
     122,    36,    37,   125,    24,   102,    38,    39,    40,    41,
      42,   138,    43,   102,    44,    25,    28,    26,    27,   132,
      31,   134,    32,    49,    45,    34,    51,    46,    35,    55,
      47,    79,    36,    37,    73,    75,    71,    38,    39,    40,
      41,    42,    98,    43,    82,    44,    96,   104,   105,   118,
     119,   112,   124,   130,   126,    45,    34,   131,    46,    35,
       7,    47,   116,    36,    37,    16,    33,   103,    38,    39,
      40,    41,    42,     0,    43,   114,    44,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    45,    34,     0,    46,
      35,     0,    47,   135,    36,    37,     0,     0,   107,    38,
      39,    40,    41,    42,     0,    43,     0,    44,   127,     0,
       0,     0,     0,     0,     0,     0,     0,    45,     0,     0,
      46,    64,    76,    47,    65,    66,    67,    68,    69,    70,
      64,     0,    71,    65,    66,    67,    68,    69,    70,    64,
     111,    71,    65,    66,    67,    68,    69,    70,     0,     0,
      71,     0,     0,     0,    77,     0,    64,     0,     0,    65,
      66,    67,    68,    69,    70,    64,     0,    71,    65,    66,
      67,    68,    69,    70,    64,     0,    71,    65,    66,    67,
      68,    69,    70,     0,     0,    71,     0,     0,    64,     0,
      84,    65,    66,    67,    68,    69,    70,     0,     0,    71,
      64,     0,    72,    65,    66,    67,    68,    69,    70,     0,
       0,    71,    64,     0,    83,    65,    66,    67,    68,    69,
      70,     0,     0,    71,    64,     0,   137,    65,    66,    67,
      68,    69,    70,     0,     0,    71,    64,   106,     0,    65,
      66,    67,    68,    69,    70,    -1,     0,    71,    -1,    -1,
      67,    68,    69,    70,     0,     0,    71
};

#define yypact_value_is_default(yystate) \
  ((yystate) == (-110))

#define yytable_value_is_error(yytable_value) \
  ((yytable_value) == (-1))

static const yytype_int16 yycheck[] =
{
      29,   110,     8,   104,     7,    34,    25,    36,    37,    24,
      39,    24,    42,    25,    44,    44,    45,    46,    47,    43,
     129,    45,    25,    42,     3,    40,    23,    40,    57,    41,
     131,     0,     7,    39,    15,    64,    65,    66,    67,    68,
      69,    70,    45,    24,    73,    74,    12,    76,    39,    34,
      35,    23,    27,    38,    83,    30,    31,    32,    33,    34,
      35,    27,    24,    38,    30,    31,    32,    33,    34,    35,
      45,    41,    38,   102,     6,    37,    24,     9,   107,   108,
     109,    13,    14,    43,    23,    45,    18,    19,    20,    21,
      22,    43,    24,    45,    26,    41,    45,    44,    43,   128,
      23,   130,    44,    23,    36,     6,    24,    39,     9,    23,
      42,    43,    13,    14,    39,    44,    38,    18,    19,    20,
      21,    22,    24,    24,    40,    26,    23,    42,    23,    38,
      41,    44,    23,    17,    24,    36,     6,    42,    39,     9,
       3,    42,    43,    13,    14,    12,    28,    83,    18,    19,
      20,    21,    22,    -1,    24,    99,    26,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    36,     6,    -1,    39,
       9,    -1,    42,    43,    13,    14,    -1,    -1,     4,    18,
      19,    20,    21,    22,    -1,    24,    -1,    26,     5,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    36,    -1,    -1,
      39,    27,    10,    42,    30,    31,    32,    33,    34,    35,
      27,    -1,    38,    30,    31,    32,    33,    34,    35,    27,
      11,    38,    30,    31,    32,    33,    34,    35,    -1,    -1,
      38,    -1,    -1,    -1,    16,    -1,    27,    -1,    -1,    30,
      31,    32,    33,    34,    35,    27,    -1,    38,    30,    31,
      32,    33,    34,    35,    27,    -1,    38,    30,    31,    32,
      33,    34,    35,    -1,    -1,    38,    -1,    -1,    27,    -1,
      43,    30,    31,    32,    33,    34,    35,    -1,    -1,    38,
      27,    -1,    41,    30,    31,    32,    33,    34,    35,    -1,
      -1,    38,    27,    -1,    41,    30,    31,    32,    33,    34,
      35,    -1,    -1,    38,    27,    -1,    41,    30,    31,    32,
      33,    34,    35,    -1,    -1,    38,    27,    40,    -1,    30,
      31,    32,    33,    34,    35,    27,    -1,    38,    30,    31,
      32,    33,    34,    35,    -1,    -1,    38
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     3,    47,    48,    49,    23,     0,    49,     8,    39,
      23,    50,    39,    24,    40,    51,    50,    42,    44,    41,
      40,    24,    52,    53,    23,    41,    44,    43,    45,    25,
      41,    23,    44,    52,     6,     9,    13,    14,    18,    19,
      20,    21,    22,    24,    26,    36,    39,    42,    56,    23,
      56,    24,    57,    56,    56,    23,    56,    25,    42,    56,
      56,    55,    56,    56,    27,    30,    31,    32,    33,    34,
      35,    38,    41,    39,    12,    44,    10,    16,    56,    43,
      54,    56,    40,    41,    43,    56,    56,    56,    56,    56,
      56,    56,    24,    37,    56,    56,    23,    56,    24,    58,
      59,    43,    45,    55,    42,    23,    40,     4,     7,    25,
      45,    11,    44,    15,    59,    56,    43,    54,    38,    41,
      56,    56,    56,    57,    23,    43,    24,     5,     7,    45,
      17,    42,    56,    57,    56,    43,    54,    41,    43
};

#define yyerrok		(yyerrstatus = 0)
#define yyclearin	(yychar = YYEMPTY)
#define YYEMPTY		(-2)
#define YYEOF		0

#define YYACCEPT	goto yyacceptlab
#define YYABORT		goto yyabortlab
#define YYERROR		goto yyerrorlab


/* Like YYERROR except do call yyerror.  This remains here temporarily
   to ease the transition to the new meaning of YYERROR, for GCC.
   Once GCC version 2 has supplanted version 1, this can go.  However,
   YYFAIL appears to be in use.  Nevertheless, it is formally deprecated
   in Bison 2.4.2's NEWS entry, where a plan to phase it out is
   discussed.  */

#define YYFAIL		goto yyerrlab
#if defined YYFAIL
  /* This is here to suppress warnings from the GCC cpp's
     -Wunused-macros.  Normally we don't worry about that warning, but
     some users do, and we want to make it easy for users to remove
     YYFAIL uses, which will produce warnings from Bison 2.5.  */
#endif

#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)					\
do								\
  if (yychar == YYEMPTY && yylen == 1)				\
    {								\
      yychar = (Token);						\
      yylval = (Value);						\
      YYPOPSTACK (1);						\
      goto yybackup;						\
    }								\
  else								\
    {								\
      yyerror (YY_("syntax error: cannot back up")); \
      YYERROR;							\
    }								\
while (YYID (0))


#define YYTERROR	1
#define YYERRCODE	256


/* YYLLOC_DEFAULT -- Set CURRENT to span from RHS[1] to RHS[N].
   If N is 0, then set CURRENT to the empty location which ends
   the previous symbol: RHS[0] (always defined).  */

#define YYRHSLOC(Rhs, K) ((Rhs)[K])
#ifndef YYLLOC_DEFAULT
# define YYLLOC_DEFAULT(Current, Rhs, N)				\
    do									\
      if (YYID (N))                                                    \
	{								\
	  (Current).first_line   = YYRHSLOC (Rhs, 1).first_line;	\
	  (Current).first_column = YYRHSLOC (Rhs, 1).first_column;	\
	  (Current).last_line    = YYRHSLOC (Rhs, N).last_line;		\
	  (Current).last_column  = YYRHSLOC (Rhs, N).last_column;	\
	}								\
      else								\
	{								\
	  (Current).first_line   = (Current).last_line   =		\
	    YYRHSLOC (Rhs, 0).last_line;				\
	  (Current).first_column = (Current).last_column =		\
	    YYRHSLOC (Rhs, 0).last_column;				\
	}								\
    while (YYID (0))
#endif


/* YY_LOCATION_PRINT -- Print the location on the stream.
   This macro was not mandated originally: define only if we know
   we won't break user code: when these are the locations we know.  */

#ifndef YY_LOCATION_PRINT
# if defined YYLTYPE_IS_TRIVIAL && YYLTYPE_IS_TRIVIAL
#  define YY_LOCATION_PRINT(File, Loc)			\
     fprintf (File, "%d.%d-%d.%d",			\
	      (Loc).first_line, (Loc).first_column,	\
	      (Loc).last_line,  (Loc).last_column)
# else
#  define YY_LOCATION_PRINT(File, Loc) ((void) 0)
# endif
#endif


/* YYLEX -- calling `yylex' with the right arguments.  */

#ifdef YYLEX_PARAM
# define YYLEX yylex (YYLEX_PARAM)
#else
# define YYLEX yylex ()
#endif

/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)			\
do {						\
  if (yydebug)					\
    YYFPRINTF Args;				\
} while (YYID (0))

# define YY_SYMBOL_PRINT(Title, Type, Value, Location)			  \
do {									  \
  if (yydebug)								  \
    {									  \
      YYFPRINTF (stderr, "%s ", Title);					  \
      yy_symbol_print (stderr,						  \
		  Type, Value, Location); \
      YYFPRINTF (stderr, "\n");						  \
    }									  \
} while (YYID (0))


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

/*ARGSUSED*/
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep, YYLTYPE const * const yylocationp)
#else
static void
yy_symbol_value_print (yyoutput, yytype, yyvaluep, yylocationp)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
    YYLTYPE const * const yylocationp;
#endif
{
  if (!yyvaluep)
    return;
  YYUSE (yylocationp);
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyoutput, yytoknum[yytype], *yyvaluep);
# else
  YYUSE (yyoutput);
# endif
  switch (yytype)
    {
      default:
	break;
    }
}


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep, YYLTYPE const * const yylocationp)
#else
static void
yy_symbol_print (yyoutput, yytype, yyvaluep, yylocationp)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
    YYLTYPE const * const yylocationp;
#endif
{
  if (yytype < YYNTOKENS)
    YYFPRINTF (yyoutput, "token %s (", yytname[yytype]);
  else
    YYFPRINTF (yyoutput, "nterm %s (", yytname[yytype]);

  YY_LOCATION_PRINT (yyoutput, *yylocationp);
  YYFPRINTF (yyoutput, ": ");
  yy_symbol_value_print (yyoutput, yytype, yyvaluep, yylocationp);
  YYFPRINTF (yyoutput, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_stack_print (yytype_int16 *yybottom, yytype_int16 *yytop)
#else
static void
yy_stack_print (yybottom, yytop)
    yytype_int16 *yybottom;
    yytype_int16 *yytop;
#endif
{
  YYFPRINTF (stderr, "Stack now");
  for (; yybottom <= yytop; yybottom++)
    {
      int yybot = *yybottom;
      YYFPRINTF (stderr, " %d", yybot);
    }
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)				\
do {								\
  if (yydebug)							\
    yy_stack_print ((Bottom), (Top));				\
} while (YYID (0))


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_reduce_print (YYSTYPE *yyvsp, YYLTYPE *yylsp, int yyrule)
#else
static void
yy_reduce_print (yyvsp, yylsp, yyrule)
    YYSTYPE *yyvsp;
    YYLTYPE *yylsp;
    int yyrule;
#endif
{
  int yynrhs = yyr2[yyrule];
  int yyi;
  unsigned long int yylno = yyrline[yyrule];
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %lu):\n",
	     yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr, yyrhs[yyprhs[yyrule] + yyi],
		       &(yyvsp[(yyi + 1) - (yynrhs)])
		       , &(yylsp[(yyi + 1) - (yynrhs)])		       );
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)		\
do {					\
  if (yydebug)				\
    yy_reduce_print (yyvsp, yylsp, Rule); \
} while (YYID (0))

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
#ifndef	YYINITDEPTH
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
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static YYSIZE_T
yystrlen (const char *yystr)
#else
static YYSIZE_T
yystrlen (yystr)
    const char *yystr;
#endif
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
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static char *
yystpcpy (char *yydest, const char *yysrc)
#else
static char *
yystpcpy (yydest, yysrc)
    char *yydest;
    const char *yysrc;
#endif
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
  YYSIZE_T yysize0 = yytnamerr (0, yytname[yytoken]);
  YYSIZE_T yysize = yysize0;
  YYSIZE_T yysize1;
  enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
  /* Internationalized format string. */
  const char *yyformat = 0;
  /* Arguments of yyformat. */
  char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
  /* Number of reported tokens (one for the "unexpected", one per
     "expected"). */
  int yycount = 0;

  /* There are many possibilities here to consider:
     - Assume YYFAIL is not used.  It's too flawed to consider.  See
       <http://lists.gnu.org/archive/html/bison-patches/2009-12/msg00024.html>
       for details.  YYERROR is fine as it does not invoke this
       function.
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
                yysize1 = yysize + yytnamerr (0, yytname[yyx]);
                if (! (yysize <= yysize1
                       && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
                  return 2;
                yysize = yysize1;
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

  yysize1 = yysize + yystrlen (yyformat);
  if (! (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
    return 2;
  yysize = yysize1;

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

/*ARGSUSED*/
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep, YYLTYPE *yylocationp)
#else
static void
yydestruct (yymsg, yytype, yyvaluep, yylocationp)
    const char *yymsg;
    int yytype;
    YYSTYPE *yyvaluep;
    YYLTYPE *yylocationp;
#endif
{
  YYUSE (yyvaluep);
  YYUSE (yylocationp);

  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  switch (yytype)
    {

      default:
	break;
    }
}


/* Prevent warnings from -Wmissing-prototypes.  */
#ifdef YYPARSE_PARAM
#if defined __STDC__ || defined __cplusplus
int yyparse (void *YYPARSE_PARAM);
#else
int yyparse ();
#endif
#else /* ! YYPARSE_PARAM */
#if defined __STDC__ || defined __cplusplus
int yyparse (void);
#else
int yyparse ();
#endif
#endif /* ! YYPARSE_PARAM */


/* The lookahead symbol.  */
int yychar;

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval;

/* Location data for the lookahead symbol.  */
YYLTYPE yylloc;

/* Number of syntax errors so far.  */
int yynerrs;


/*----------.
| yyparse.  |
`----------*/

#ifdef YYPARSE_PARAM
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
int
yyparse (void *YYPARSE_PARAM)
#else
int
yyparse (YYPARSE_PARAM)
    void *YYPARSE_PARAM;
#endif
#else /* ! YYPARSE_PARAM */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
int
yyparse (void)
#else
int
yyparse ()

#endif
#endif
{
    int yystate;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus;

    /* The stacks and their tools:
       `yyss': related to states.
       `yyvs': related to semantic values.
       `yyls': related to locations.

       Refer to the stacks thru separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* The state stack.  */
    yytype_int16 yyssa[YYINITDEPTH];
    yytype_int16 *yyss;
    yytype_int16 *yyssp;

    /* The semantic value stack.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs;
    YYSTYPE *yyvsp;

    /* The location stack.  */
    YYLTYPE yylsa[YYINITDEPTH];
    YYLTYPE *yyls;
    YYLTYPE *yylsp;

    /* The locations where the error started and ended.  */
    YYLTYPE yyerror_range[3];

    YYSIZE_T yystacksize;

  int yyn;
  int yyresult;
  /* Lookahead token as an internal (translated) token number.  */
  int yytoken;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;
  YYLTYPE yyloc;

#if YYERROR_VERBOSE
  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYSIZE_T yymsg_alloc = sizeof yymsgbuf;
#endif

#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N), yylsp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  yytoken = 0;
  yyss = yyssa;
  yyvs = yyvsa;
  yyls = yylsa;
  yystacksize = YYINITDEPTH;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY; /* Cause a token to be read.  */

  /* Initialize stack pointers.
     Waste one element of value and location stack
     so that they stay on the same level as the state stack.
     The wasted elements are never initialized.  */
  yyssp = yyss;
  yyvsp = yyvs;
  yylsp = yyls;

#if defined YYLTYPE_IS_TRIVIAL && YYLTYPE_IS_TRIVIAL
  /* Initialize the default location before parsing starts.  */
  yylloc.first_line   = yylloc.last_line   = 1;
  yylloc.first_column = yylloc.last_column = 1;
#endif

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
	YYLTYPE *yyls1 = yyls;

	/* Each stack pointer address is followed by the size of the
	   data in use in that stack, in bytes.  This used to be a
	   conditional around just the two extra args, but that might
	   be undefined if yyoverflow is a macro.  */
	yyoverflow (YY_("memory exhausted"),
		    &yyss1, yysize * sizeof (*yyssp),
		    &yyvs1, yysize * sizeof (*yyvsp),
		    &yyls1, yysize * sizeof (*yylsp),
		    &yystacksize);

	yyls = yyls1;
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
	YYSTACK_RELOCATE (yyls_alloc, yyls);
#  undef YYSTACK_RELOCATE
	if (yyss1 != yyssa)
	  YYSTACK_FREE (yyss1);
      }
# endif
#endif /* no yyoverflow */

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;
      yylsp = yyls + yysize - 1;

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
      yychar = YYLEX;
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
  *++yyvsp = yylval;
  *++yylsp = yylloc;
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
     `$$ = $1'.

     Otherwise, the following line sets YYVAL to garbage.
     This behavior is undocumented and Bison
     users should not rely upon it.  Assigning to YYVAL
     unconditionally makes the parser a bit smaller, and it avoids a
     GCC warning that YYVAL may be used uninitialized.  */
  yyval = yyvsp[1-yylen];

  /* Default location.  */
  YYLLOC_DEFAULT (yyloc, (yylsp - yylen), yylen);
  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
        case 2:

/* Line 1806 of yacc.c  */
#line 117 "cool.y"
    { (yyloc) = (yylsp[(1) - (1)]); ast_root = program((yyvsp[(1) - (1)].classes)); }
    break;

  case 3:

/* Line 1806 of yacc.c  */
#line 122 "cool.y"
    { (yyval.classes) = single_Classes((yyvsp[(1) - (1)].class_));
                  parse_results = (yyval.classes); }
    break;

  case 4:

/* Line 1806 of yacc.c  */
#line 125 "cool.y"
    { (yyval.classes) = append_Classes((yyvsp[(1) - (2)].classes),single_Classes((yyvsp[(2) - (2)].class_))); 
                  parse_results = (yyval.classes); }
    break;

  case 5:

/* Line 1806 of yacc.c  */
#line 132 "cool.y"
    { (yyval.class_) = class_((yyvsp[(2) - (6)].symbol),idtable.add_string("Object"),(yyvsp[(4) - (6)].features),
			      stringtable.add_string(curr_filename)); }
    break;

  case 6:

/* Line 1806 of yacc.c  */
#line 135 "cool.y"
    { (yyval.class_) = class_((yyvsp[(2) - (8)].symbol),(yyvsp[(4) - (8)].symbol),(yyvsp[(6) - (8)].features),stringtable.add_string(curr_filename)); }
    break;

  case 7:

/* Line 1806 of yacc.c  */
#line 141 "cool.y"
    {  (yyval.features) = nil_Features(); }
    break;

  case 8:

/* Line 1806 of yacc.c  */
#line 143 "cool.y"
    { (yyval.features) = append_Features((yyvsp[(1) - (2)].features),single_Features((yyvsp[(2) - (2)].feature))); 
                  }
    break;

  case 9:

/* Line 1806 of yacc.c  */
#line 149 "cool.y"
    { (yyval.feature) = method((yyvsp[(1) - (10)].symbol), (yyvsp[(3) - (10)].formals), (yyvsp[(6) - (10)].symbol), (yyvsp[(8) - (10)].expression) ); /*name, formal, return type, expr*/ 
                  }
    break;

  case 10:

/* Line 1806 of yacc.c  */
#line 152 "cool.y"
    { (yyval.feature) = attr( (yyvsp[(1) - (4)].symbol), (yyvsp[(3) - (4)].symbol), assign( (yyvsp[(1) - (4)].symbol), no_expr()));  /*name, type, expression */ 
                  }
    break;

  case 11:

/* Line 1806 of yacc.c  */
#line 155 "cool.y"
    { (yyval.feature) = attr( (yyvsp[(1) - (6)].symbol), (yyvsp[(3) - (6)].symbol), assign( (yyvsp[(1) - (6)].symbol), (yyvsp[(5) - (6)].expression) ) );
                  }
    break;

  case 12:

/* Line 1806 of yacc.c  */
#line 162 "cool.y"
    { (yyval.formals) = nil_Formals(); }
    break;

  case 13:

/* Line 1806 of yacc.c  */
#line 164 "cool.y"
    { (yyval.formals) = single_Formals((yyvsp[(1) - (1)].formal));}
    break;

  case 14:

/* Line 1806 of yacc.c  */
#line 166 "cool.y"
    { (yyval.formals) = append_Formals(single_Formals((yyvsp[(1) - (3)].formal)),(yyvsp[(3) - (3)].formals)); }
    break;

  case 15:

/* Line 1806 of yacc.c  */
#line 171 "cool.y"
    { (yyval.formal) = formal( (yyvsp[(1) - (3)].symbol), (yyvsp[(3) - (3)].symbol)); }
    break;

  case 16:

/* Line 1806 of yacc.c  */
#line 176 "cool.y"
    { (yyval.expressions) = single_Expressions((yyvsp[(1) - (1)].expression)); }
    break;

  case 17:

/* Line 1806 of yacc.c  */
#line 178 "cool.y"
    { (yyval.expressions) = append_Expressions((yyvsp[(1) - (3)].expressions), single_Expressions((yyvsp[(3) - (3)].expression))) ;}
    break;

  case 18:

/* Line 1806 of yacc.c  */
#line 182 "cool.y"
    { (yyval.expressions) = single_Expressions((yyvsp[(1) - (2)].expression)); }
    break;

  case 19:

/* Line 1806 of yacc.c  */
#line 184 "cool.y"
    { (yyval.expressions) = append_Expressions(single_Expressions((yyvsp[(1) - (3)].expression)), (yyvsp[(3) - (3)].expressions)) ;}
    break;

  case 20:

/* Line 1806 of yacc.c  */
#line 189 "cool.y"
    { (yyval.expression) = assign((yyvsp[(1) - (3)].symbol), (yyvsp[(3) - (3)].expression)); }
    break;

  case 21:

/* Line 1806 of yacc.c  */
#line 193 "cool.y"
    { (yyval.expression) = dispatch( (yyvsp[(1) - (6)].expression), (yyvsp[(3) - (6)].symbol), (yyvsp[(5) - (6)].expressions) ); /* expr, name, actual exp*/}
    break;

  case 22:

/* Line 1806 of yacc.c  */
#line 195 "cool.y"
    { (yyval.expression) = static_dispatch( (yyvsp[(1) - (9)].expression), (yyvsp[(4) - (9)].symbol), (yyvsp[(6) - (9)].symbol), (yyvsp[(8) - (9)].expressions) ); /*expr, type, name, actual exps */}
    break;

  case 23:

/* Line 1806 of yacc.c  */
#line 197 "cool.y"
    { (yyval.expression) = dispatch ( object(idtable.add_string("self")) , (yyvsp[(1) - (4)].symbol), (yyvsp[(3) - (4)].expressions)); 
      /* myfunc() is like self.myfunc() */
    }
    break;

  case 24:

/* Line 1806 of yacc.c  */
#line 205 "cool.y"
    { (yyval.expression) = dispatch ( (yyvsp[(1) - (5)].expression), (yyvsp[(3) - (5)].symbol), nil_Expressions()); 
      /* Here is use nil_Expressions instead of no_expr() 
       * because the it's asking for
       * Expressions instead of Expression
       */
    }
    break;

  case 25:

/* Line 1806 of yacc.c  */
#line 212 "cool.y"
    { (yyval.expression) = static_dispatch( (yyvsp[(1) - (8)].expression), (yyvsp[(4) - (8)].symbol), (yyvsp[(6) - (8)].symbol), nil_Expressions()); }
    break;

  case 26:

/* Line 1806 of yacc.c  */
#line 214 "cool.y"
    { (yyval.expression) = dispatch ( object(idtable.add_string("self")), (yyvsp[(1) - (3)].symbol), nil_Expressions()); }
    break;

  case 27:

/* Line 1806 of yacc.c  */
#line 217 "cool.y"
    { (yyval.expression) = cond( (yyvsp[(2) - (7)].expression), (yyvsp[(4) - (7)].expression), (yyvsp[(6) - (7)].expression) ); /* pred, then_exp, else_exp*/ }
    break;

  case 28:

/* Line 1806 of yacc.c  */
#line 219 "cool.y"
    { (yyval.expression) = loop( (yyvsp[(2) - (5)].expression), (yyvsp[(4) - (5)].expression) ); /* pred, body*/}
    break;

  case 29:

/* Line 1806 of yacc.c  */
#line 221 "cool.y"
    { (yyval.expression) = block((yyvsp[(2) - (3)].expressions)); }
    break;

  case 30:

/* Line 1806 of yacc.c  */
#line 223 "cool.y"
    { (yyval.expression) = (yyvsp[(2) - (2)].expression); }
    break;

  case 31:

/* Line 1806 of yacc.c  */
#line 225 "cool.y"
    { (yyval.expression) = typcase((yyvsp[(2) - (5)].expression), (yyvsp[(4) - (5)].cases)); }
    break;

  case 32:

/* Line 1806 of yacc.c  */
#line 227 "cool.y"
    { (yyval.expression) = new_((yyvsp[(2) - (2)].symbol)); }
    break;

  case 33:

/* Line 1806 of yacc.c  */
#line 229 "cool.y"
    { (yyval.expression) = isvoid((yyvsp[(2) - (2)].expression)); }
    break;

  case 34:

/* Line 1806 of yacc.c  */
#line 231 "cool.y"
    { (yyval.expression) = plus((yyvsp[(1) - (3)].expression), (yyvsp[(3) - (3)].expression)); }
    break;

  case 35:

/* Line 1806 of yacc.c  */
#line 233 "cool.y"
    { (yyval.expression) = sub((yyvsp[(1) - (3)].expression), (yyvsp[(3) - (3)].expression)); }
    break;

  case 36:

/* Line 1806 of yacc.c  */
#line 235 "cool.y"
    { (yyval.expression) = mul((yyvsp[(1) - (3)].expression), (yyvsp[(3) - (3)].expression)); }
    break;

  case 37:

/* Line 1806 of yacc.c  */
#line 237 "cool.y"
    { (yyval.expression) = divide((yyvsp[(1) - (3)].expression), (yyvsp[(3) - (3)].expression)); }
    break;

  case 38:

/* Line 1806 of yacc.c  */
#line 239 "cool.y"
    { (yyval.expression) = neg((yyvsp[(2) - (2)].expression)); }
    break;

  case 39:

/* Line 1806 of yacc.c  */
#line 241 "cool.y"
    { (yyval.expression) = lt((yyvsp[(1) - (3)].expression), (yyvsp[(3) - (3)].expression)); }
    break;

  case 40:

/* Line 1806 of yacc.c  */
#line 243 "cool.y"
    { (yyval.expression) = leq((yyvsp[(1) - (3)].expression), (yyvsp[(3) - (3)].expression)); }
    break;

  case 41:

/* Line 1806 of yacc.c  */
#line 245 "cool.y"
    { (yyval.expression) = eq((yyvsp[(1) - (3)].expression), (yyvsp[(3) - (3)].expression)); }
    break;

  case 42:

/* Line 1806 of yacc.c  */
#line 247 "cool.y"
    { (yyval.expression) = comp((yyvsp[(2) - (2)].expression)); }
    break;

  case 43:

/* Line 1806 of yacc.c  */
#line 249 "cool.y"
    { (yyval.expression) = (yyvsp[(2) - (3)].expression);}
    break;

  case 44:

/* Line 1806 of yacc.c  */
#line 251 "cool.y"
    { (yyval.expression) = object((yyvsp[(1) - (1)].symbol)); }
    break;

  case 45:

/* Line 1806 of yacc.c  */
#line 253 "cool.y"
    { (yyval.expression) = int_const((yyvsp[(1) - (1)].symbol)); }
    break;

  case 46:

/* Line 1806 of yacc.c  */
#line 255 "cool.y"
    { (yyval.expression) = string_const((yyvsp[(1) - (1)].symbol)); }
    break;

  case 47:

/* Line 1806 of yacc.c  */
#line 257 "cool.y"
    { (yyval.expression) = bool_const((yyvsp[(1) - (1)].boolean)); }
    break;

  case 48:

/* Line 1806 of yacc.c  */
#line 262 "cool.y"
    { (yyval.expression) = let( (yyvsp[(1) - (5)].symbol), (yyvsp[(3) - (5)].symbol), no_expr(), (yyvsp[(5) - (5)].expression) );}
    break;

  case 49:

/* Line 1806 of yacc.c  */
#line 264 "cool.y"
    { (yyval.expression) = let( (yyvsp[(1) - (7)].symbol), (yyvsp[(3) - (7)].symbol), (yyvsp[(5) - (7)].expression), (yyvsp[(7) - (7)].expression) ); }
    break;

  case 50:

/* Line 1806 of yacc.c  */
#line 266 "cool.y"
    { (yyval.expression) = let ( (yyvsp[(1) - (5)].symbol), (yyvsp[(3) - (5)].symbol), no_expr(), (yyvsp[(5) - (5)].expression) ); }
    break;

  case 51:

/* Line 1806 of yacc.c  */
#line 268 "cool.y"
    { (yyval.expression) = let ( (yyvsp[(1) - (7)].symbol), (yyvsp[(3) - (7)].symbol), (yyvsp[(5) - (7)].expression), (yyvsp[(7) - (7)].expression) ); }
    break;

  case 52:

/* Line 1806 of yacc.c  */
#line 273 "cool.y"
    { (yyval.cases) = single_Cases((yyvsp[(1) - (1)].case_)); }
    break;

  case 53:

/* Line 1806 of yacc.c  */
#line 275 "cool.y"
    { (yyval.cases) = append_Cases((yyvsp[(1) - (2)].cases), single_Cases((yyvsp[(2) - (2)].case_))); }
    break;

  case 54:

/* Line 1806 of yacc.c  */
#line 280 "cool.y"
    { (yyval.case_) = branch((yyvsp[(1) - (6)].symbol), (yyvsp[(3) - (6)].symbol), (yyvsp[(5) - (6)].expression)); /* name,type,exp*/}
    break;



/* Line 1806 of yacc.c  */
#line 2051 "cool.tab.c"
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
  *++yylsp = yyloc;

  /* Now `shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */

  yyn = yyr1[yyn];

  yystate = yypgoto[yyn - YYNTOKENS] + *yyssp;
  if (0 <= yystate && yystate <= YYLAST && yycheck[yystate] == *yyssp)
    yystate = yytable[yystate];
  else
    yystate = yydefgoto[yyn - YYNTOKENS];

  goto yynewstate;


/*------------------------------------.
| yyerrlab -- here on detecting error |
`------------------------------------*/
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

  yyerror_range[1] = yylloc;

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
		      yytoken, &yylval, &yylloc);
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

  yyerror_range[1] = yylsp[1-yylen];
  /* Do not reclaim the symbols of the rule which action triggered
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
  yyerrstatus = 3;	/* Each real token shifted decrements this.  */

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

      yyerror_range[1] = *yylsp;
      yydestruct ("Error: popping",
		  yystos[yystate], yyvsp, yylsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  *++yyvsp = yylval;

  yyerror_range[2] = yylloc;
  /* Using YYLLOC is tempting, but would change the location of
     the lookahead.  YYLOC is available though.  */
  YYLLOC_DEFAULT (yyloc, yyerror_range, 2);
  *++yylsp = yyloc;

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

#if !defined(yyoverflow) || YYERROR_VERBOSE
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
                  yytoken, &yylval, &yylloc);
    }
  /* Do not reclaim the symbols of the rule which action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
		  yystos[*yyssp], yyvsp, yylsp);
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
  /* Make sure YYID is used.  */
  return YYID (yyresult);
}



/* Line 2067 of yacc.c  */
#line 284 "cool.y"


/* This function is called automatically when Bison detects a parse error. */
void yyerror(const char *s)
{
  extern int curr_lineno;

  cerr << "\"" << curr_filename << "\", line " << curr_lineno << ": " \
    << s << " at or near ";
  print_cool_token(yychar);
  cerr << endl;
  omerrs++;

  if(omerrs>50) {fprintf(stdout, "More than 50 errors\n"); exit(1);}
}


