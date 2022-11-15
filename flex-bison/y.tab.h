/* A Bison parser, made by GNU Bison 3.8.2.  */

/* Bison interface for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015, 2018-2021 Free Software Foundation,
   Inc.

   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <https://www.gnu.org/licenses/>.  */

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

/* DO NOT RELY ON FEATURES THAT ARE NOT DOCUMENTED in the manual,
   especially those whose name start with YY_ or yy_.  They are
   private implementation details that can be changed or removed.  */

#ifndef YY_YY_Y_TAB_H_INCLUDED
# define YY_YY_Y_TAB_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Token kinds.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    YYEMPTY = -2,
    YYEOF = 0,                     /* "end of file"  */
    YYerror = 256,                 /* error  */
    YYUNDEF = 257,                 /* "invalid token"  */
    STRING = 258,                  /* STRING  */
    IDENTIFIER = 259,              /* IDENTIFIER  */
    INT = 260,                     /* INT  */
    PLUS = 261,                    /* PLUS  */
    MINUS = 262,                   /* MINUS  */
    NOT = 263,                     /* NOT  */
    AND = 264,                     /* AND  */
    OR = 265,                      /* OR  */
    ASSIGMENT = 266,               /* ASSIGMENT  */
    EQUAL = 267,                   /* EQUAL  */
    MINOR = 268,                   /* MINOR  */
    GREATER = 269,                 /* GREATER  */
    DOT = 270,                     /* DOT  */
    COMMA = 271,                   /* COMMA  */
    OPEN_PARENTHESES = 272,        /* OPEN_PARENTHESES  */
    CLOSE_PARENTHESES = 273,       /* CLOSE_PARENTHESES  */
    OPEN_BRACKETS = 274,           /* OPEN_BRACKETS  */
    CLOSE_BRACKETS = 275,          /* CLOSE_BRACKETS  */
    SEMICOLON = 276,               /* SEMICOLON  */
    COLON = 277,                   /* COLON  */
    PRINT = 278,                   /* PRINT  */
    READ = 279,                    /* READ  */
    WHILE = 280,                   /* WHILE  */
    IF = 281,                      /* IF  */
    ELSE = 282,                    /* ELSE  */
    BEGINNING = 283,               /* BEGINNING  */
    INT_FUNCTION = 284,            /* INT_FUNCTION  */
    STRING_FUNCTION = 285,         /* STRING_FUNCTION  */
    RETURN = 286,                  /* RETURN  */
    VAR = 287,                     /* VAR  */
    VAR_TYPE = 288                 /* VAR_TYPE  */
  };
  typedef enum yytokentype yytoken_kind_t;
#endif
/* Token kinds.  */
#define YYEMPTY -2
#define YYEOF 0
#define YYerror 256
#define YYUNDEF 257
#define STRING 258
#define IDENTIFIER 259
#define INT 260
#define PLUS 261
#define MINUS 262
#define NOT 263
#define AND 264
#define OR 265
#define ASSIGMENT 266
#define EQUAL 267
#define MINOR 268
#define GREATER 269
#define DOT 270
#define COMMA 271
#define OPEN_PARENTHESES 272
#define CLOSE_PARENTHESES 273
#define OPEN_BRACKETS 274
#define CLOSE_BRACKETS 275
#define SEMICOLON 276
#define COLON 277
#define PRINT 278
#define READ 279
#define WHILE 280
#define IF 281
#define ELSE 282
#define BEGINNING 283
#define INT_FUNCTION 284
#define STRING_FUNCTION 285
#define RETURN 286
#define VAR 287
#define VAR_TYPE 288

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef int YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;


int yyparse (void);


#endif /* !YY_YY_Y_TAB_H_INCLUDED  */
