#include "main.h"

int main() {

    Graph socialGraph;

    User obj1(1);
    User obj2(2);

    socialGraph.Add(1,obj1);
    socialGraph.Add(2,obj2);

    socialGraph.BeFriend(1, 2);

    socialGraph.PrintGraph();

    return 0;
}
