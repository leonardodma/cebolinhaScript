# cebolinhaScript

Linguagem de programação Baseada no Personagem de Gibs Brasileiro `Cebolinha`

![cebolinha](img/cebolinha.png)

## Caracterísitcas do Cebolinha

- Possui um prblema conhecido como dislalia, e por isso, sempre troca a letra `r` pelo `l` em suas falas
- Seu maior objetivo é derrotar a personagem `Mônica` para se tornar o "dono da rua". Para isso, ele tenta colocar em prática seus `planos infalíveis`, que nunca dão certo, mas sempre possuem o objetivo de pegar o bixo de pelúcia da `Mônica`, `Sansão`.
- Tem 7 anos de idade

## Características da Linguagem

- Não é possível digitar `r` nessa linguagem. Se for digitado, o compilador retornará erro automaticamente.
- Pelo fato de possuir apenas 7 anos de idade, cebolinha só sabe somar, subtrair e contar até no máximo `1000`. Assim, a linguagem terá apenas os operadores `+` e `-`, e contará até no máximo `1000`, e o compilador retornará erro se alguma operação ou valor atribuído, passar desse número.
- Para funções que retonem inteiro, a sintaxe será:

```javaScript
loubar_sansao(){
    valiavel a inteilo;
    a = 1;
    retolne a;
}
```

- Para funções que retornem uma string, a sintaxe será:

```javaScript
ser_dono_da_lua(){
    valiavel a palavla;
    a = "Dono da Lua";
    retolne a;
}
```

## EBNF da Lingaguagem

```javaScript
PROGRAM = "plano_infalivel", "(" , ")", "{" , (λ | STATEMENT), "}";

STATEMENT =  (((λ | ASSIGNMENT | PRINT  | VAR | RETURN), ";") | (BLOCK | IF | WHILE));

BLOCK = "{", STATEMENT, "}";

RELEXPRESSION = EXPRESSION , {("<" | ">" | "=="") , EXPRESSION };

EXPRESSION = TERM, { ("+" | "-" | "ou"), TERM } ;

TERM = FACTOR, { ("e"), FACTOR };

FACTOR = INT | STRING | IDENTIFIER | (("+" | "-" | "!"), FACTOR) | ("(", RELEXPRESSION, ")") | READ;
```

```javaScript
IDENTIFIER = LETTER, { LETTER | DIGIT | "_" };

PRINT = "mostle", "(", RELEXPRESSION, ")";

VAR = "valiavel", IDENTIFIER, {",", IDENTIFIER}, ":", TYPE;

TYPE = ("inteilo" | "palavla")

WHILE = "enquarto", "(", RELEXPRESSION ,")", STATEMENT;

IF = "semple_que", "(", RELEXPRESSION ,")", STATEMENT, (("caso_contlalio", STATEMENT) | λ );

ASSIGNMENT = IDENTIFIER, "=", RELEXPRESSION;

RETURN = "retolne" , RELEXPRESSION;

READ = "insila", "(", ")";

INT = DIGIT, { DIGIT };

STRING = ("" | ", *, ");

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

## Referências

- https://pt.wikipedia.org/wiki/Cebolinha_(personagem)
