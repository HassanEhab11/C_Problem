/**
 * ----------------------------------------------------------------------------
 * Filename   : convertLittleToBigEndian.c
 * Author     : Hassan Ehab
 * Created on : Sunday, December 24, 2023
 * Last edited: Sunday, December 24, 2023
 * Description: C function to convert from little to big endian.
 * ----------------------------------------------------------------------------
 */
#include <stdio.h>
int convertLittleToBigEndian(int littleEndianValue){
    return (((littleEndianValue&(0xff000000))>>24) |
            ((littleEndianValue&(0x00ff0000))>>8)  |
            ((littleEndianValue&(0x0000ff00))<<8)  |
            ((littleEndianValue&(0x000000ff))<<24) );
}

int main() {
    int littleEndianValue = 0x12345678;
    int bigEndianValue = convertLittleToBigEndian(littleEndianValue);

    printf("Little-endian value: 0x%08X\n", littleEndianValue);
    printf("Big-endian value   : 0x%08X\n", bigEndianValue);

    return 0;
}
