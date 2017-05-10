#ifndef DFS_H_INCLUDED
#define DFS_H_INCLUDED

void dfs(GraphMatrix g, int startIndex)
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

    dfs_visit(g, visit, startIndex);
}

void dfs_visit(GraphMatrix g, int* visit, int startIndex)
{
    visit[startIndex] = 1;
    printf("%d ", startIndex + 1);

    int i;
    for (i = 0; i < g.dimension; i++)
        if (g.matrix[startIndex][i] && !visit[i])
            dfs_visit(g, visit, i); // Rekurzivna pretraga u dubinu od èvora i.
}

#endif // DFS_H_INCLUDED
