// Calculate the volume of a pool using function
//By pramit

#include <stdio.h>

int vol(int length, int width, int depth){
    int volume;
    volume=length*width*depth;
    return volume;
}
int main() {
    int volume, length, width, depth;
    length=25;
    width=10;
    depth=6;
    volume=vol(length, width, depth);
    printf("The volume of a pool is %dfeet.", volume);
    return 0;
}