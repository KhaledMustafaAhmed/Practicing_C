


/**
 *  queue with array based implementation
 * 
 */
typedef struct queue {
    int size;
    int front;
    int rear;
    QueueEntry entry[MAXQUEUE];
}Queue;


void CreateQueue(Queue* pq)
{
    pq->front = 0;
    pq->rear = -1;
    pq->size = 0;
}


void Append(QueueEntry e , Queue* pq)
{
    pq->rear = (pq->rear + 1) % MAXQUEUE;
    pq->rear = e;
    pq->size++;
}

void Serve(QueueEntry *pe, Queue* pq)
{
    *pe = pq->entry[pq->front];
    pq->front = (pq->front + 1) % MAXQUEUE;
    pq->size--;
}
int QueueEmpty(Queue *pq)
{
    return !pq->size;
}
int QueueFull(Queue *pq)
{
    return (pq->size == MAXQUEUE);
}
int QueueSize(Queue *pq)
{
    return (pq->size );
}
void ClearQueue(Queue *pq)
{
    pq->front = 0;
    pq->rear = -1;
    pq->size = 0;
}

void TraverseQueue(Queue *pq, void(*pf)(QueueEnter))
{
    int pos = pq->front;
    int s;
    for(pos, s=0; s<pq->size; s++)
    {
        (*pf)(pq->entry[pos]);
        pos = (pos+1)%MAXQUEUE;
    }
    
}