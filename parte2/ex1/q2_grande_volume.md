### Comparativo do comportamento dos algoritmos no pior caso

Quando usamos os algoritmos **Bubble Sort**, **Selection Sort** e **Insertion Sort** em vetores muito grandes, todos acabam apresentando um desempenho muito ruim. Isso acontece porque esses três métodos comparam e movimentam os dados muitas vezes, de forma crescente conforme o tamanho da lista aumenta.

---

#### 🔹 Como cada um se comporta

| Algoritmo | Comparações e trocas | Características principais |
|------------|----------------------|-----------------------------|
| **Bubble Sort** | Realiza um número enorme de comparações e trocas sucessivas entre vizinhos. | É o mais lento dos três, pois faz trocas a cada passo. |
| **Selection Sort** | Faz praticamente o mesmo número de comparações em qualquer situação, mas realiza poucas trocas. | Mais previsível, porém ainda muito demorado em listas grandes. |
| **Insertion Sort** | Faz muitas comparações e deslocamentos, mas é um pouco mais eficiente que os anteriores em listas pequenas ou quase ordenadas. | Costuma ter o melhor desempenho entre os três, mas ainda é lento em listas grandes. |

---

#### 🔹 Em um vetor com um milhão de elementos

Com uma lista tão grande, esses algoritmos demorariam **horas ou até dias** para terminar.  
O **Bubble Sort** seria o mais lento, pois faz muitas trocas a cada passo.  
O **Selection Sort** também levaria muito tempo, mesmo trocando menos, porque precisa verificar todos os elementos várias vezes.  
O **Insertion Sort** teria uma leve vantagem, mas ainda assim o tempo seria inviável para aplicações reais.

---

#### 🔹 Conclusão

Apesar de simples e úteis para fins didáticos ou listas pequenas, esses três algoritmos **não servem para grandes volumes de dados**.  
