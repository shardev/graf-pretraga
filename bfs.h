#ifndef BFS_H_INCLUDED
#define BFS_H_INCLUDED

void bfs(GraphMatrix g, int startIndex)
{
    // Validacija proslijeðenog indeksa.
    if (startIndex < 0 || startIndex >= g.dimension)
    {
        printf("Proslijedjen je pogresan indeks!");

        return;
    }

    int* visit = (int*) malloc(sizeof(int) * g.dimension); // Inicijalizacija vektora posjeæenosti.

    int i;
    for (i = 0; i < g.dimension; i++)
        visit[i] = 0;

    int* queue = (int*) malloc(sizeof(int) * g.dimension); // Inicijalizacija reda za èekanje.
    int head = 0;
    int tail = 0;

    visit[startIndex] = 1;
    printf("%d ", startIndex + 1);

    queue[tail] = startIndex; // Dodavanje na red.
    tail = (tail + 1) % g.dimension;

    while (head != tail) // Izvršavanje petlje dok red nije prazan.
    {
        int current = queue[head]; // Uzimanje sa reda.
        head = (head + 1) % g.dimension;

        for (i = 0; i < g.dimension; i++)
        {
            // Za sve susjede od current koji nisu posjeæeni.
            if (g.matrix[current][i] && !visit[i])
            {
                visit[i] = 1; // Èvor postaje posjeæen.
                queue[tail] = i; // Dodavanje na red.
                tail = (tail + 1) % g.dimension;

                printf("%d ", i + 1);
            }
        }
    }
}

#endif // BFS_H_INCLUDED
