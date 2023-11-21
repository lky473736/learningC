#include <stdio.h>

// int ferror (FILE *fp)

int main() {
  char c, f_n[10];
  FILE *fp, *ofp;

  printf("input file name : ");
  scanf("%s", f_n);

  fp = fopen(f_n, "r");          // 입력 파일
  ofp = fopen("text1.txt", "a"); // 출력 파일

  /*if (fp == NULL) { // 파일 열기 실패 시 에러 처리
    perror("파일을 열 수 없습니다");
    return 0;
  }

  else if (ofp == NULL) { // 파일 열기 실패 시 에러 처리
    perror("파일을 열 수 없습니다");
    return 0;
  }*/

  if (ferror(fp) || ferror(ofp))
  {
    printf ("파일을 열 수 없습니다.");
    return 0;
  }

  // stdin : 키보드로 입력 (표준)
  // stdout : 화면에 출력 (표준)
  // 파일 포인터 : 파일을 입력 (일반)

  /*while ((c = fgetc(fp)) != EOF) // getchar() == getc(stdin) == fget(stdin)
  {
    fputc(c, ofp); // putchar() == putc(인자, stdout) == fputc(인자, stdout)

    // text.txt를 text1.txt에 복사한 꼴이 됨
    // 입력 : fp, 출력 : ofp니깐

    // 섞어서 써도 됨
    // ex) getchar(), putc(인자, stdout) ...
  }*/

  while (feof(fp) != 0) 
    // int feof (FILE *fp)
    // 파일이 끝이 아니면 0을 반환 
    // 파일이 끝이 나면 양수값을 반환
    {
      c = fgetc(fp);
      fputc(c, ofp);
    }
    
  return 0;
}
