

%{
#include <stdio.h>
#include <string.h>
#include "y.tab.h"
%}

%%

[\t\n]

"+"                                 return PLUS;
"-"                                 return MINUS;
"!"                                 return NOT;
"e"                                 return AND;
"ou"                                return OR;
"="                                 return ASSIGMENT;
"=="                                return EQUAL;
"<"                                 return MINOR;
">"                                 return GREATER;
"."                                 return DOT;
","                                 return COMMA;
"("                                 return OPEN_PARENTHESES;
")"                                 return CLOSE_PARENTHESES;
"{"                                 return OPEN_BRACKETS;
"}"                                 return CLOSE_BRACKETS;
";"                                 return SEMICOLON;
":":                                return COLON;

"mostle"                            return PRINT;
"insila"                            return READ;
"dulante"                           return WHILE;
"semple_que"                        return IF;
"caso_contlalio"                    return ELSE;

"plano_infalivel"                   return BEGINNING;
"loubar_sansao"                     return INT_FUNCTION;
"ser_dono_da_lua"                   return STRING_FUNCTION;
"retolne"                           return RETURN;

"valiavel"                          return VAR;    
"inteilo"                           return VAR_TYPE;
"palavla"                           return VAR_TYPE;

[a-qs-zA-QS-Z0-9]+                  return STRING;
[a-qs-zA-QS-Z_][_a-qs-zA-QS-Z0-9]+  return IDENTIFIER;
[0-9]+                              return INT;


.                                   printf("Unknown token!\n"); 

%%

int yywrap(void) {
    return 1;
}