Neste exercício, você deverá desenvolver um programa que manipule uma estrutura do tipo dicionário. Os itens do dicionário deverão ser do tipo:

typedef char CHAVE [21];
typedef struct {
   CHAVE nome;
   double preço;
} ITEM;

Ou seja, o dicionário deverá armazenar os itens de uma tabela, sendo que cada item tem um nome (que é sua chave) e um preço. Os dados deverão ser lidos de um arquivo texto em que cada linha corresponde a um item, com o nome e o preço do mesmo separados por espaços. Desenvolva operações para:

•	Criar um dicionário vazio.
•	Inserir um item no dicionário.
•	Remover um item do dicionário.
•	Verificar se um item se encontra no dicionário e retornar seu preço.
•	Alterar o preço de um item.

Faça também um programa principal para testar sua estrutura e todas essas operações.

1.	Implemente o dicionário através de uma árvore binária.
2.	Implemente uma função que calcule e retorne a altura de uma árvore binária. Você pode testá-la com seu dicionário do item acima.
