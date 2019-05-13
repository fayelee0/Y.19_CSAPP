struct rec {
        int i;
        int j;
        int a[2];
        int* p;
};

void i2j(struct rec* r) {
        r->j = r->i;
}

void cp(struct rec* r)
{
        r->p = &r->a[r->i + r->j];
}
