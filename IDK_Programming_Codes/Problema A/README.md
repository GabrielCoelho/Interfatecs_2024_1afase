# Mapa de Calor
> Autor: Prof. Dr. Leandro Luque - Fatec Mogi das Cruzes

Munarinho descobriu recentemente sua paixão por design e não para de pensar sobre como o diálogo estabelecido entre um observador e um objeto observado dizem muito sobre os dois. Antes um pouco desleixado com o aspecto visual das coisas e com a aparência, decidiu agora cuidar de cada detalhe. Recentemente, fez um corte de cabelo em homenagem ao Cascão, assim como fez Ronaldo Fenômeno na Copa de 2002.
Em uma de suas explorações sobre a área, Munarinho descobriu sobre a análise do comportamento de usuários em páginas web. Após estudar os artigos do Nielsen Norman Group, resolveu prontamente analisar o comportamento do olhar dos usuários na página de sua Fatec. Estava convencido que o padrão F-Shaped estava presente em muitas interações e receava que isso não fosse bom."

Um padrão de leitura de uma página web pode ser obtido a partir do rastreamento do olhar de vários usuários enquanto interagem com a página e da produção de um mapa de calor como o seguinte. 

«Imagem de mapa de calor retirada de https://www.nngroup.com/articles/f-shaped-pattern-reading-web-content»

Este mapa de calor indica um padrão conhecido como F-Shaped, em que o olhar dos usuários forma, algumas
vezes, um formato que lembra a letra F. Procurando realizar uma primeira avaliação do site de sua Fatec, Munarinho está desenvolvendo um sistema que procura identificar a área de uma página que os usuários mais olharam: superior, esquerda, centro, direita ou inferior. Para simplificar o processamento, ele projetou os pontos que os usuários olharam em uma interação em uma matriz de 6x3. Nesta matriz, os pontos que um usuário observou são representados por 1 e os não observados por 0. Ainda, as seguintes regiões são de interesse de Munarinho:

- Região: (coluna inicial, linha inicial, coluna final, linha final)
- Superior: (0,0,2,0)
- Esquerda: (0,1,0,4)
- Centro: (1,1,1,4)
- Direita: (2,1,2,4)
- Inferior: (0,5,2,5)

## Entrada

A entrada é composta por um caso de teste. A primeira linha do caso de teste contém um inteiro N(3 ≤ N ≤ 100), indicando o número de usuários que interagiram com a página. As próximas N ∗6 linhas contém 3 inteiros P(0 ≤ P ≤ 1), separados por espaços em branco, cada indicando se o usuário olhou ou não para a posição em questão.

## Saída 

Imprima o nome da região, em minúsculas e sem caracteres especiais, que recebeu mais olhares dos usuários (cada olhar soma 1 na região). Caso haja empate, imprima a região que aparece antes nos itens apresentados no enunciado.

### Exemplos

| Entrada   | Saída    |
|--------------- | --------------- |
| 3   | inferior   |
| 0 1 0   |   |
| 0 0 0   |    |
| 1 0 0   |    |
| 1 0 0 | | 
| 0 0 0 | | 
| 1 1 1 | | 
| 0 0 1 | | 
| 1 0 0 | | 
| 1 0 0 | | 
| 0 0 0 | | 
| 0 0 0 | | 
| 0 1 0 | | 
| 0 0 0 | | 
| 0 0 0 | | 
| 0 0 0 | | 
| 0 0 0 | | 
| 0 0 0 | | 
| 1 1 1 | | 
