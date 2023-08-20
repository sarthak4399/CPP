#include <stdio.h>
#define SIZE 5

struct CircularQueue {
    int items[SIZE];
    int front;
    int rear;
};

void enqueue(struct CircularQueue* q, int value) {
    if ((q->rear + 1) % SIZE == q->front) {
        printf("Queue is full. Enqueue operation cannot be performed.\n");
    } else {
        if (q->front == -1)
            q->front = 0;
        q->rear = (q->rear + 1) % SIZE;
        q->items[q->rear] = value;
    }
}

void dequeue(struct CircularQueue* q) {
    if (q->front == -1) {
        printf("Queue is empty. Dequeue operation cannot be performed.\n");
    } else {
        if (q->front == q->rear) {
            q->front = -1;
            q->rear = -1;
        } else {
            q->front = (q->front + 1) % SIZE;
        }
    }
}

void display(struct CircularQueue* q) {
    if (q->front == -1) {
        printf("Queue is empty.\n");
    } else {
        int i = q->front;
        printf("Queue: ");
        while (i != q->rear) {
            printf("%d ", q->items[i]);
            i = (i + 1) % SIZE;
        }
        printf("%d\n", q->items[i]);
    }
}

int main() {
    struct CircularQueue q;
    q.front = -1;
    q.rear = -1;

    display(&q);  // Output: Queue is empty.

    enqueue(&q, 10);
    enqueue(&q, 20);
    enqueue(&q, 30);
    enqueue(&q, 40);
    enqueue(&q, 50);
    display(&q);  // Output: Queue: 10 20 30 40 50

    enqueue(&q, 60);  // Output: Queue is full. Enqueue operation cannot be performed.

    dequeue(&q);
    dequeue(&q);
    display(&q);  // Output: Queue: 30 40 50

    dequeue(&q);
    dequeue(&q);
    dequeue(&q);
    display(&q);  // Output: Queue is empty.

    return 0;
}
