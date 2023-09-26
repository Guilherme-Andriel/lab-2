[![Review Assignment Due Date](https://classroom.github.com/assets/deadline-readme-button-24ddc0f5d75046c5622901739e7c5dd533143b0c8e959d652212380cedb1ea36.svg)](https://classroom.github.com/a/sbf0wW5M)
# Laboratório 2

<img alt="points bar" align="right" height="36" src="../../blob/status/.github/activity-icons/points-bar.svg" />

Um número complexo qualquer $z$ possui a forma $z = a+bi$, em que $a$ e $b$ são números reais e $i$ é a unidade imaginária. Considere os números complexos $z_{1} = a+bi$ e $z_{2}=c+di$ e as seguintes operações:

* Criação de um número complexo qualquer $z$ à partir de dois números reais $a$ e $b$
* Adição: $z_{1}+z_{2}=a+c+(b+d)i$
* Subtração: $z_{1}-z_{2}=a-c+(b-d)i$
* Multiplicação: $z_{1}*z_{2} = (ac-bd) + (ad + bc)i$
* Módulo: $|z|=\sqrt{a^{2}+b^{2}}$

# Tarefa

Implemente um programa em C++ chamado `complexo`que permita criar e operar dois números complexos. O programa deverá receber, por meio da linha de comando, os valores de $a$, $b$, $c$ e $d$, nesta ordem, seguidos de um símbolo que indica a operação desejada: `soma` ( $+$ ), `subtração` ( $-$ ), `multiplicação` ( $*$ ) e `módulo` ( $|$ ). O programa deve exibir o resultado da operação, de acordo com os exemplos abaixo. 

**Exemplos de entrada e saída**

* Exemplo 1: criação do número complexo $z_{1}=1+2i$ e $z_{2}=3+4i$ e operação de `soma`
  + Entrada: `./complexo 1 2 3 4 +`
  + Saída: `4+6i`

* Exemplo 2: criação do número complexo $z_{1}=1+2i$ e $z_{2}=3+4i$ e operação de `subtração`
  + Entrada: `./complexo 1 2 3 4 -`
  + Saída: `-2-2i`

* Exemplo 3: criação do número complexo $z_{1}=1+2i$ e $z_{2}=3+4i$ e operação de `multiplicação`
  + Entrada: `./complexo 1 2 3 4 '*'`
  + Saída: `-5+10i`

* Exemplo 2: criação do número complexo $z_{1}=1+2i$ e $z_{2}=3+4i$ e operação de `módulo`
  + Entrada: `./complexo 1 2 3 4 '|'`
  + Saída: `2.24;5`

## Orientações gerais
+ Para essa atividade, construa uma classe que permita representar e operar números complexos. Você deve utilizar, obrigatoriamente, sobrecarga de operadores para as operações acima descritas. Para a apresentação de números complexos no terminal, você deve utilizar a sobrecarga do operador de inserção em *stream* ( $<<$ ).  
+ Inclua seus arquivos nas pastas `src` e `include`. Não modifique a pasta `.github`.
+ Você deverá escrever um arquivo Makefile para gerenciar o processo de compilação.
+ O arquivo executável deve ser direcionado para a pasta `bin` (não é preciso adicionar o executável ao repositório, apenas indicar o seu caminho no Makefile).
+ Utilize apenas duas casas decimais com arredondamento para cima.

# Extra (opcional)

Para praticar, altere a classe que representa números complexos de forma que seus atributos sejam alocados de forma dinâmica.

