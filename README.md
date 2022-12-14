# Cebolinha Sclipt

Linguagem de programação Baseada no Personagem de Gibs Brasileiro `Cebolinha`

![cebolinha](img/cebolinha.png)

## Características do Cebolinha

- Possui um problema conhecido como dislalia, e por isso, sempre troca a letra `r` pelo `l` em suas falas
- Seu maior objetivo é derrotar a personagem `Mônica` para se tornar o "dono da rua". Para isso, ele tenta colocar em prática seus `planos infalíveis`, que nunca dão certo, mas sempre possuem o objetivo de pegar o bixo de pelúcia da `Mônica`, `Sansão`.
- Tem 7 anos de idade

## Características da Linguagem

- Não é possível digitar `r` nessa linguagem. Se for digitado, o compilador retornará erro automaticamente.
- Pelo fato de possuir apenas 7 anos de idade, cebolinha só sabe somar, subtrair e contar até no máximo `1000`. Assim, a linguagem terá apenas os operadores de contagem `+` e `-`, e contará até no máximo `1000`, e o compilador retornará erro se alguma operação ou valor atribuído, passar desse número.

## EBNF da Lingaguagem

```javaScript
PROGRAM = DECLARATION

DECLARATION =  "lotina", IDENTIFIER, "(" , ({IDENTIFIER, (":", VAR_TYPE, (","| λ) | ",")}, λ), ")", (λ | "->", VAR_TYPE), BLOCK;

BLOCK = ("{", STATEMENT, "}" | "{" , "}");

STATEMENT =  (((λ | ASSIGNMENT | PRINT  | VAR | RETURN), ";") | (BLOCK | IF | WHILE));

RELEXPRESSION = EXPRESSION , {("<" | ">" | "==" | ".") , EXPRESSION };

EXPRESSION = TERM, { ("+" | "-" | "ou"), TERM };

TERM = FACTOR, { ("e"), FACTOR };

FACTOR = INT | STRING | (IDENTIFIER, (λ | "(" , (λ | {REALEXPRESSION, ("," | λ)}) , ")")) | (("+" | "-" | "!"), FACTOR) | ("(", RELEXPRESSION, ")") | READ;
```

```javaScript
IDENTIFIER = LETTER, { LETTER | DIGIT | "_" };

VAR_TYPE = ("inteilo" | "palavla")

DECLARATION = (IDENTIFIER, ",", VAR_TYPE | IDENTIFIER, ",", DECLARATION)

VAR = "valiavel", DECLARATION;

ASSIGNMENT = IDENTIFIER, "=", RELEXPRESSION;

PRINT = "mostle", "(", RELEXPRESSION, ")";

IF = "semple_que", "(", RELEXPRESSION ,")", STATEMENT, ELSE

ELSE = ("caso_contlalio", STATEMENT | λ)

WHILE = "dulante", "(", RELEXPRESSION ,")", STATEMENT;

RETURN = "letolne" , RELEXPRESSION;

READ = "insila", "(", ")";

INT = DIGIT, { DIGIT };

STRING = ("" | ", * && !(r | R), ");

DIGIT = (0 | 1 | 2 | 3 | 4 | 5 | 6 | 7 | 8 | 9);

LETTER = ( a | ... | q | s | ... | z | A | ... | Q | S | ... | Z );
```

## Exemplo de código

```javaScript
plano_infalivel(){
    valiavel a: inteilo;
    valiavel b: palavla;
    valiavel c: palavla;
    a = 0;
    b = "Numelo menor que 10";
    c = "Numelo maor que 10";

    dulante (a < 20){

        semple_que (a < 10){
            mostle (b);
        }
        caso_contlalio {
            mostle (c);
        }

        a = a + 1;
    }
}
```

## Comandos Flex Bison

Gerar o y.tab.h e o y.tab.c

```cmd
yacc -d parser.y
```

Importar o y.tab.h em `tokens.l` e depois rodar:

```cmd
lex tokens.l
```

Gerando o lex.yy.c. Para gerar o executável do compilador:

```cmd
gcc lex.yy.c y.tab.c -o exec
```

## Referências

- https://pt.wikipedia.org/wiki/Cebolinha_(personagem)
