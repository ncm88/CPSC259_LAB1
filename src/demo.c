void* a;
void* b;
void* c;

int i;

a = (int*)malloc(sizeof(int));
*((int*) a) = 5;
b = (int**)malloc(*((int*) a) * sizeof(int*));
c = (int*)&i;
for(* ((int*) c) = 0; (int*) c < *((int*)a); (*((int*) c))++){
    ((int**) b)[i]= (int*)malloc((*(int*) a)*sizeof(int));
}