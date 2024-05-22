# Problema das Placas de Veículos
> Autor: Prof. Antonio Cesar de Barros Munari (Fatec Sorocaba)

Joséilo foi contratado como estagiário em uma empresa que presta serviços para um órgão público responsável pelo tráfego de veículos em seu estado. Ele desafiou seus colegas a criar um programa para validar placas de automóveis captadas por sensores éticos.
As regras para as placas de veículos mudaram ao longo do tempo no Brasil. O programa que você deve desenvolver receberá uma string com até 50 caracteres, contendo apenas letras maiúsculas e dígitos numéricos. O objetivo é determinar o formato da placa lida:
1. **Placa muito antiga**: Formato vigente entre 1915 e 1941, com uma letra inicial seguida de 1 a 5 algarismos numéricos (por exemplo, "A234" ou "P12345").
2. **Placa numérica**: Vigorou entre 1941 e 1969, composta apenas por uma sequência de até 7 dígitos numéricos (como "533" ou "3949573").
3. **Placa AA-9999**: Entre 1970 e 1990, composta por duas letras seguidas de quatro dígitos numéricos (por exemplo, "RX3429" ou "CM9382").
4. **Placa AAA-9999**: Exigida entre 1990 e 2018, composta por três letras seguidas de quatro dígitos numéricos (como "BTP3465" ou "PWS9521").
5. **Placa Mercosul**: Possui três letras iniciais, um dígito numérico, outra letra e finaliza com dois dígitos numéricos (por exemplo, "ABC1D23").
Se a placa lida não se encaixar em nenhum desses formatos, o programa deve informar que é uma "Placa inválida".

## Entrada
A entrada possui apenas uma *string* de até 50 caracteres úteis, composta por alguma combinação de letras maiúsculas e dígitos numéricos. 

## Saída 
Para a placa lida o programa deverá imprimir uma das respostas previstas, conforme ilustram os casos de teste. As saídas não utilizam qualquer tipo de acentuação e devem ser impressas exatamente como constam nos exemplos.

### exemplos

| Exemplos de Entrada | Exemplos de Saída |
| -------------- | --------------- |
| A1234 | Placa muito antiga |
| 12345 | Placa numerica |
| AB1234 | Placa AA-9999 |
| ABC1234 | Placa AAA-9999 |
| ABC1D34 | Placa Mercosul |
| X0S0X0X0009 | Placa invalida |


