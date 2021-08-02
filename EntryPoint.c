#include "sha1.h"

int main(int argc, char **argv)
{
    SHA1_CTX ctx;
    unsigned char hash[20];
    int i;

    //char data[] = "abc";  // SHA1=a9993e364706816aba3e25717850c26c9cd0d89d
    char data[] = "abcdbcdecdefdefgefghfghighijhijkijkljklmklmnlmnomnopnopq";  // SHA1=84983e441c3bd26ebaae4aa1f95129e5e54670f1
    size_t length = strlen(data);
    
    // One million 'a' characters in a row: SHA1=34aa973cd4c4daa4f61eeb2bdbad27316534016f 
    //char data[1000000];
    //for (i = 0; i < 1000000; i++)
    //{
    //    data[i] = 'a';
    //}
    //size_t length = 1000000;

    SHA1(data, length, hash);

    printf("SHA1=");
    for (i = 0; i < 20; i++)
    {
        printf("%02x", hash[i]);
    }
    printf("\n");
    return 0;
}