Para este problema, procuramos o maior numero seguido de colons de um dnade
comparacao em relacao a um dna maior. Como um colon corresponde a 3 caracteres,
guardamos os DNA's em uma lista de vetores char de tamanho 3. 

ao iniciar o programa, este pedira um input de char's que formam o DNA maior, e 
a seguir este pede inputs para um dna menor. Ao digitar um caractere invalido, o
programa para de adicionar os inputs a lista, descartando colons incompletos.

or exemplo, se o primeiro input recebido e
G T A - T C C - T G A - B

e o input para DNA de pesquisa e de 

T C C - T G A - C C Z

o DNA de pesquisa nao enfileraria o terceiro colon, uma vez que este possui um 
caractere invalido. Dado este input, o programa devolveria "A maior cadeia tem 
tamanho de: 2 colons, que comeca no 1 colon e termina no 2 colon."

Se nao conseguir compilar por MakeFile, https://onlinegdb.com/tZ51VUFmJ