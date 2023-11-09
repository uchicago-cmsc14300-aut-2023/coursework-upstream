#ifndef POS_H
#define POS_H

struct pos {
    unsigned int r, c;
};

typedef struct pos pos;


typedef struct pq_entry pq_entry;

struct pq_entry {
    pos p;
    pq_entry* next;
};


struct posqueue {
    pq_entry *head, *tail;
    unsigned int len;
};

typedef struct posqueue posqueue;


pos make_pos(unsigned int r, unsigned int c);

posqueue* posqueue_new();

void pos_enqueue(posqueue* q, pos p);

pos pos_dequeue(posqueue* q);

void posqueue_free(posqueue* q);

#endif /* POS_H */
