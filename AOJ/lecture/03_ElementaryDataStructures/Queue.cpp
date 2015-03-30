// 自前でキューを実装.最後のテストケースだけ通らない
#include <cstdio>
#include <iostream>
#include <vector>
#include <algorithm>
#define rep(i, n) for (int (i) = 0; (i)<(n); (i)++)
#define rrep(i, n) for (int (i) = (n)-1; (i)>=0; (i)--)
#define debug(x) cout <<#x<<": "<<endl;

#define MAX_LENGTH   100000
using namespace std;

typedef struct {
  vector<pair <string, int> > data;
  int head;
  int tail;
  int num;
} Queue;


void init(Queue *q) {
  q->head = 0;
  q->tail = 0;
  q->num = 0;
}

void enqueue(Queue *q, pair<string,int> x) {
  if (q->num >= MAX_LENGTH) {
    cout << "[Error] Overflow!" << endl;
    exit(1);
  }
  q->data.push_back(x);
  // q->data[q->tail++] = pair<string, int>(s, x);
  q->tail++;
  q->num++;
  if (q->head == q->tail)
    q->tail = 0;
}

pair<string, int> dequeue(Queue *q) {
  if (q->num <= 0) {
    cout << "[Error] Underflow!" << endl;
    exit(1);
  }
  // int x = q->data[q->head++];
  pair<string,int> x = q->data[q->head++];
  q->num--;
  if (q->head == MAX_LENGTH)
    q->head = 0;
  return x;
}

bool isEmpty(Queue *q) {
  return q->num <= 0;
}

bool isFull(Queue *q) {
  return q->num >= MAX_LENGTH;
}

int main() {
  cin.tie(0);
  ios::sync_with_stdio(false); // cin や cout が遅い原因を取り除く
  int n, quontum;
  cin >> n >> quontum;
  int time[n];
  string name[n];
  rep(i, n)
    cin >> name[i] >> time[i];

  // 初期状態のプロセスをキューに入れる
  Queue q;
  init(&q);
  int i = 0;
  while (i < n) {
    enqueue(&q, make_pair(name[i], time[i]));
    i++;
  }

  int total = 0;
  while (isEmpty(&q) != true) {
    pair<string, int> x = dequeue(&q);
    if (x.second <= quontum) {
      total += x.second;
      cout << x.first << " " << total << endl;
    } else {
      x.second -= quontum;
      total += quontum;
      enqueue(&q, x);
    }
  }
  return 0;
}
