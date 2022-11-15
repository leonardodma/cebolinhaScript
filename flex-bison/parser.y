%{
  #include<stdio.h>
  int yylex();
  void yyerror(const char *s) { printf("ERROR:  %s\n", s); }
%}

%token STRING
%token IDENTIFIER 
%token INT

%token PLUS
%token MINUS
%token NOT
%token AND
%token OR
%token ASSIGMENT
%token EQUAL
%token MINOR
%token GREATER
%token DOT
%token COMMA
%token OPEN_PARENTHESES
%token CLOSE_PARENTHESES
%token OPEN_BRACKETS
%token CLOSE_BRACKETS
%token SEMICOLON
%token COLON

%token PRINT 
%token READ 
%token WHILE 
%token IF 
%token ELSE 

%token BEGINNING
%token INT_FUNCTION
%token STRING_FUNCTION
%token RETURN

%token VAR
%token VAR_TYPE

%start program

%%

program : BEGINNING OPEN_PARENTHESES CLOSE_PARENTHESES block
        ;

block : OPEN_BRACKETS statement CLOSE_BRACKETS
      | OPEN_BRACKETS CLOSE_BRACKETS
      ;   

statement : assigment SEMICOLON
          | print SEMICOLON
          | var SEMICOLON
          | if
          | while
          | block 
          ;
        
relexpression: expression EQUAL expression
             | expression MINOR expression
             | expression GREATER expression
             | expression DOT expression
             | expression
             ;

expression: term PLUS term
          | term MINUS term
          | term OR term
          | term
          ;

term: factor
    | factor AND factor
    ;

factor: INT
      | STRING
      | IDENTIFIER
      | PLUS factor
      | MINUS factor
      | NOT factor
      | READ OPEN_PARENTHESES CLOSE_PARENTHESES
      | OPEN_PARENTHESES relexpression CLOSE_PARENTHESES
      ;

declaration: IDENTIFIER COLON VAR_TYPE
           | IDENTIFIER COMMA declaration
           ;

var: VAR declaration;

assigment: IDENTIFIER ASSIGMENT relexpression;

print: PRINT OPEN_PARENTHESES relexpression CLOSE_PARENTHESES;

if: IF OPEN_PARENTHESES relexpression CLOSE_PARENTHESES statement else;

else: ELSE statement
    | SEMICOLON
    ;

while: WHILE OPEN_PARENTHESES relexpression CLOSE_PARENTHESES statement;

%%

int main(){
  yyparse();
  return 0;
}