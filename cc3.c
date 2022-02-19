#include <stdio.h>
#include "node.h"

/* FIXME: this function is buggy. */
int ll_equal(const node* a, const node* b) {
  while (a != NULL && b != NULL) {
    if (a->val != b->val)
      return 0;
    a = a->next;
    b = b->next;
  }
  /* lists are equal if a and b are both null */
  return a == b;
}

// DO NOT EDIT BELOW THIS LINE

/* The main function exists just to test ll_equal.
   There are two tests. The second one is by default
   buggy. Please find the error and fix it! */
#ifndef TEST
int main(int argc, char** argv) {
  int i;
  node nodes[10];

  for (i=0; i<10; i++) {
    nodes[i].val = 0;
    nodes[i].next = NULL;
  }

  nodes[0].next = &nodes[1];
  nodes[1].next = &nodes[2];
  nodes[2].next = &nodes[3];

  printf("equal test 1 result = %d\n", ll_equal(&nodes[0], &nodes[0]));
  printf("equal test 2 result = %d\n", ll_equal(&nodes[0], &nodes[2]));

  return 0;
}
#endif