#include <stdio.h>
#include <stdlib.h>

#include "graph-matrix.h"
#include "bfs.h"
#include "dfs.h"

int main()
{
    GraphMatrix graph = createGraph(14); // Kreiranje grafa sa odre�enim brojem �vorova.

    // Dodavanje grana izme�u odre�enih �vorova.
    addVertex(graph, 0, 3);
    addVertex(graph, 3, 6);
    addVertex(graph, 3, 7);
    addVertex(graph, 3, 1);
    addVertex(graph, 1, 2);
    addVertex(graph, 1, 4);
    addVertex(graph, 4, 5);
    addVertex(graph, 4, 8);
    addVertex(graph, 8, 11);
    addVertex(graph, 11, 10);
    addVertex(graph, 11, 13);
    addVertex(graph, 10, 12);
    addVertex(graph, 12, 9);
    addVertex(graph, 9, 7);
    addVertex(graph, 8, 5);
    addVertex(graph, 4, 3);

    printf("Graf predstavljen preko matrice susjedstva:\n\n");
    printGraph(graph); // Predstavljanje grafa preko matrice susjedstva.

    printf("\n");

    printf("Cvorovi grafa pronadjeni pretragom u sirinu su: ");
    bfs(graph, 8); // Pretraga u �irinu.

    printf("\n");

    printf("Cvorovi grafa pronadjeni pretragom u dubinu su: ");
    dfs(graph, 8); // Pretraga u dubinu.

    cleanGraph(graph); // Osloba�anje grafa iz memorije.

    return 0;
}
