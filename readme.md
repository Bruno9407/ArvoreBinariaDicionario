<p>Neste exercício, você deverá desenvolver um programa que manipule uma estrutura do tipo dicionário. Os itens do dicionário deverão ser do tipo:</p>

<code>typedef char CHAVE [21];
typedef struct {
   CHAVE nome;
   double preço;
} ITEM;</code>
<p>Ou seja, o dicionário deverá armazenar os itens de uma tabela, sendo que cada item tem um nome (que é sua chave) e um preço. Os dados deverão ser lidos de um arquivo texto em que cada linha corresponde a um item, com o nome e o preço do mesmo separados por espaços. Desenvolva operações para:</p>
<ol>
   <li>Criar um dicionário vazio.</li>
   <li>Inserir um item no dicionário.</li>
   <li>Remover um item do dicionário.</li>
   <li>Verificar se um item se encontra no dicionário e retornar seu preço.</li>
   <li>Alterar o preço de um item.</li>
</ol>

<p>Faça também um programa principal para testar sua estrutura e todas essas operações.</p>

<ol>
   <li>Implemente o dicionário através de uma árvore binária.</li>
   <li>Implemente uma função que calcule e retorne a altura de uma árvore binária. Você pode testá-la com seu dicionário do item acima.</li>
</ol>
