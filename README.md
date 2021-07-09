# Calculadora de operações vetoriais em RN

_As avaliações da disciplina de Geometria Analítica estão próximas! E o conteúdo apresentado até o momento trata sobre operações básicas de vetores N-dimensionais: soma de dois vetores, produto escalar e multiplicação de vetor por escalar._

_Você pensou que seria uma boa ideia testar seu conhecimento implementando uma calculadora que realiza essas operações._

### Entrada

A entrada é composta por dois valores inteiros representando, respectivamente, a operação da calculadora ‘O’ (de acordo com a tabela abaixo, 1, 2 ou 3) e, a dimensão ‘D’ (1 <= D <= 100) dos vetores envolvidos na operação. Na próxima linha serão dados os ‘D’ números inteiros Xi (-103 <= Xi <= 103) que representam os componentes do primeiro vetor.

Na próxima linha serão dados os ‘D’ números inteiros Xi (-103 <= Xi <= 103) que representam os componentes do segundo vetor. No caso da operação ser multiplicação de vetor por escalar, só teremos a passagem de um vetor com seus ‘D’ componentes, seguido de um número inteiro ‘N’ (1 <= N <= 1000), que representa o escalar.

Nome da operação | Código da operação |  Entradas compatíveis
:-----: | :-----: | :-----:
Soma de dois vetores | 1 | Dois vetores em RN,
Produto escalar | 2 | Dois vetores em RN
Multiplicação de vetor por escalar | 3 | Um vetor em RN e um número real

### Saída

A saída é o resultado da operação selecionada sobre as entradas. Na tabela abaixo são exemplificadas as entradas e saídas para cada uma das três operações da calculadora. Os componentes dos vetores resultantes, caso exista mais de um, devem ser separados por espaço.

Entrada | Saída 
:-----: | :-----: 
1 3
1 2 3
4 5 6 | 5 7 9
2 3
1 2 3
4 5 6 | 32
3 3
1 2 3
2 | 2 4 6

