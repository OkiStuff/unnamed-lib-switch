#include <stdio.h>
#include <string.h>

#define LINE_VERT "─"
#define LINE_HORZ "│"
// Warning: This may not work!!
#define BIG_SQU_MID "■"
// Warning: This may not work!!
#define BIG_SQU_TOP "▀"
// Warning: This may not work!!
#define BIG_SQU_BOT "▄"
// Warning: This may not work!!
#define FULL_SQU "█"
#define PIX_DOWN "."
#define PIX_MID "·"

void DrawText(char *text, int x, int y)
{
    printf("\x1b[%i;%iH%s", x, y,text);
}
void Draw(char *object, int x, int y)
{
    printf("\x1b[%i;%iH%s", x, y, object);
}