#include <stdio.h>
#include <stdlib.h>

int main(void){
    FILE *fp;    /* (1)ファイルポインタの宣言 */
	char s[256];
    /* (2)ファイルのオープン */
    /*  ここで、ファイルポインタを取得する */
    if ((fp = fopen("main.c", "r")) == NULL) {
        printf("file open error!!\n");
        exit(EXIT_FAILURE);    /* (3)エラーの場合は通常、異常終了する */
    }
    /* (4)ファイルの読み（書き）*/
    while (fgets(s, 256, fp) != NULL) {
        /* ここではfgets(により１行単位で読み出し */
        printf("%s", s);
    }
    fclose(fp);    /* (5)ファイルのクローズ */
    return 0;
}
