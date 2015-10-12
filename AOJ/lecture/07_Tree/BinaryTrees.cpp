#include <iostream>
using namespace std;

typedef struct Node {
  int val;
  Node *left;
  Node *right;
} Node;

Node *root = NULL;

/* 新しいNodeを作成する */
Node *create_new(int val) {
  Node *n = (Node *)malloc(sizeof(Node));
  if (n == NULL)
    exit(1);  // Error
  n->val = val;
  n->left = NULL;
  n->right = NULL;
  return n;
}

/* p 上に xが存在するか */
Node *search(Node *p, int x) {
  if (p == NULL) return NULL;
  while (p != NULL) {
    if (p->val == x)
      return p;
    else if (p->val > x) // 左部分木へ
      p = p->left;
    else
      p = p->right;
  }
  return NULL;
}

void insert(Node *p, int x) {
  if (root == NULL) {
    root = create_new(x);
    return;
  }
  p = root;

}

int main(void) {
  Node *root = create_new(0);
  insert(root, 1);
  insert(root, 2);
  insert(root, 3);
  insert(root, 4);

  cout <<  << endl;
  return 0;
}
