/* Practice 42 */

struct ELE {
        long v;
        struct ELE* next;
};

long func(struct ELE* ptr)
{
        long s = 0;
        while (ptr) {
                s += ptr->v;
                ptr = ptr->next;
        }
        return s;
}
