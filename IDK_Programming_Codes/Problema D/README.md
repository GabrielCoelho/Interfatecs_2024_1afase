# Rotação 
> Autor: Prof. Dr. Reinaldo Arakaki - Fatec São José dos Campos

A empresa GeoFatec trabalha com Geoprocessamento e necessita de um programa que seja capaz de rotacionar uma figura. Ou seja dado um conjunto de pontos no plano cartesiano, o programa seja capaz de rotacionar a figura de acordo com o grau dado. Sabemos que para rotacionar uma figura necessitamos de uma matriz de rotação que é dada por:

|  |  |  |  |
| --------------- | --------------- | --------------- | --------------- |
|  | cos(ang) | -sen(ang) |  |
| M = | sen(ang) | cos(ang) |  |
|  |  |  | 2x2 |

Onde o ang é dado em graus.
Dado um conjunto de pontos encontre as novas coordenadas dos pontos. Considerar pi=3,1415

## Entrada

Uma linha contendo um número inteiro N (1 ≤ N ≤ 100) e um ângulo θ (0 ≤ θ ≤ 180) em graus que representam o número de pontos da figura e o quanto se quer rotacionar a figura e a seguir as N coordenadas da figura (x,y) (−1000 ≤ x, y ≤ 1000)

## Saída 
Imprima as novas coordenadas (x,y) da figura rotacionada com duas casas decimais

### Exemplos

| Entrada   | Saída    |
|--------------- | --------------- |
| 5 40   | -16.82 51.16   |
| 20 50   | -24.48 44.73   |
| 10 50   | -21.40 79.95   |
| 35 75    | 0.67 -8.58   |
| -5 -7 | -4.10 1.78 |
| -2 4 | | 

