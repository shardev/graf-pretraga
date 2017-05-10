#ifndef GRAPH-MATRIX_H_INCLUDED
#define GRAPH-MATRIX_H_INCLUDED

typedef struct _graphMatrix
{
    int** matrix;
    int dimension;
} GraphMatrix;

GraphMatrix createGraph(int dimension)
{
    GraphMatrix graph;
    graph.dimension = dimension;
    graph.matrix = (int**) malloc(dimension * sizeof(int*));

    int i;
    for (i = 0; i < dimension; i++)
        graph.matrix[i] = (int*) malloc(dimension * sizeof(int));

    int j;
    for (i = 0; i < dimension; i++)
        for (j = 0; j < dimension; j++)
            graph.matrix[i][j] = (i == j) ? 1 : 0; // Glavna dijagonala matrice sadrži vrijednost 1.

    return graph;
}

void printGraph(GraphMatrix graph)
{
    int i, j;
    for (i = 0; i < graph.dimension; i++)
    {
        for (j = 0; j < graph.dimension; j++)
        {
            printf("%d ", graph.matrix[i][j]);
        }

        printf("\n");
    }
}

void addVertex(GraphMatrix graph, int from, int to)
{
    if (from < 0 || to < 0 || from > graph.dimension - 1 || to > graph.dimension - 1)
    {
        printf("Proslijedjen je pogresan indeks!");

        return;
    }

    graph.matrix[from][to] = 1;
    graph.matrix[to][from] = 1;
}

void removeVertex(GraphMatrix graph, int from, int to)
{
    if (from == to)
        return;

    if (from < 0 || to < 0 || from > graph.dimension - 1 || to > graph.dimension - 1)
    {
        printf("Proslijedjen je pogresan indeks!");

        return;
    }

    graph.matrix[from][to] = 0;
    graph.matrix[to][from] = 0;
}

void addNode(GraphMatrix *graph)
{
    graph->dimension++;

    int** newMatrix = (int**) malloc(graph->dimension * sizeof(int*));

    int i;
    for (i = 0; i < graph->dimension; i++)
        newMatrix[i] = (int*) malloc(graph->dimension * sizeof(int));

    int j;
    for (i = 0; i < graph->dimension; i++)
        for (j = 0; j < graph->dimension; j++)
        {
            if (i == graph->dimension - 1 || j == graph->dimension - 1)
                newMatrix[i][j] = (i == j) ? 1 : 0; // Glavna dijagonala matrice sadrži vrijednost 1.
            else
                newMatrix[i][j] = graph->matrix[i][j];
        }

    cleanGraph(graph);

    graph->matrix = newMatrix;
}

void cleanGraph(GraphMatrix graph)
{
    int i;
    for (i = 0; i < graph.dimension; i++)
        free(graph.matrix[i]);

    free(graph.matrix);
}

#endif // GRAPH-MATRIX_H_INCLUDED
