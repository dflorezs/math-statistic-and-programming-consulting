typedef struct{
    char name;
    int age;
    float weight;
    float height;
}user;

typedef user table[100];

int searchImc(table t, int n){
    int counter = 0;
    for (int i = 0; i < n; i++){
        if (t[i].weight/t[i].height*t[i].height >= 21.5){
            counter ++;
        }
    }
    return counter;
}
