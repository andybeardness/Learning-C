struct day {
    unsigned int y;
    unsigned int m;
    unsigned int d;
};

struct waytype {
    int type;
};

struct way {
    struct day d;
    struct waytype wt;
};

struct man {
    char name[10];
    char surname[10];
};

struct airplane {
    int people;
    struct man mans[12];
};

struct plan {
    struct airplane ap;
    struct way w;
};