// Slot Machine v1.0

#include <stdio.h>

int main(void)
{
    int set, option, won = 0;
    int menu, drink,side, dan, plus, count =0;
    printf("<<< Hamburger Kiosk v1.0 >>> \n\n");
    do
    {

        printf("\n\n <<< 메뉴 >>>\n\n");
        printf("[1] 세트메뉴\n");
        printf("[2] 단품\n");
        printf("[3] 추가상품\n");
        printf("[0] 결재\n");
        printf("[99] 종료\n\n");


        printf("메뉴를 선택해 주세요 : ");
        scanf("%d", &menu);

        switch (menu)
        {
        case 1: //세트메뉴
        {
            printf("\n\n <<< 세트 메뉴 >>>\n\n");
            printf("[1] 불고기 버거 세트 (5500원)\n");
            printf("[2] 데리 버거 세트   (4900원)\n");
            printf("[3] 치킨 버거 세트   (5500원)\n");
            printf("[4] 비프 버거 세트   (6000원)\n");
            printf("[5] 치즈 버거 세트   (4500원)\n");
            printf("[0] 취소\n\n");

            printf("세트메뉴를 선택해 주세요 : ");
            scanf("%d", &set);

            switch (set)
            {
            case 1 : //불고기 버거
                printf("\n <<< 불고기 버거 세트 >>>\n\n ");
                won = won + 5500;
                break;
            case 2 : //데리 버거
                printf("\n <<< 데리 버거 세트 >>>\n\n ");
                won = won + 4900;
                break;
            case 3 : //치킨 버거
                printf("\n <<< 치킨 버거 세트 >>>\n\n ");
                won = won + 5500;
                break;
            case 4 : //비프 버거
                printf("\n <<< 비프 버거 세트 >>>\n\n ");
                won = won + 6000;
                break;
            case 5 : //치즈 버거
                printf("\n <<< 치즈 버거 세트 >>>\n\n ");
                won = won + 4500;
                break;
            default: //그 외
                printf("취소되었습니다.\n\n");
                break;
            }
            printf("추가 옵션을 선택하시겠습니까?\n\n");
            printf("[1] 예.\n");
            printf("[0] 아니오.\n\n");
            printf("선택해 주세요.");
            scanf("%d",&option);
            switch (option)
            {
            case 1:
                    printf("\n\n<<< 추가옵션 : 음료 >>>\n\n");
                    printf("[1] 콜라(R)    (+0원)\n");
                    printf("[2] 콜라(L)    (+500원)\n");
                    printf("[3] 사이다(R)  (+0원)\n");
                    printf("[4] 사이다(L)  (+500원)\n");
                    printf("[5] 선택안함   (+0원)\n\n");

                    printf("음료를 선택해 주세요. : ");
                    scanf("%d", &drink);
                    switch (drink)
                    {
                    case 1: case 3: case 5:
                        won = won;
                        break;
                    case 2: case 4:
                        won = won + 500;
                        break;
                    default:
                        printf("취소되었습니다.\n");
                        break;
                    }
                    printf("\n\n<<< 사이드 메뉴 변경 >>>\n\n");
                    printf("[1] 치즈스틱 (+1500원)\n");
                    printf("[2] 양념감자 (+1500원)\n");
                    printf("[3] 오징어링 (+1500원)\n");
                    printf("[4] 소프트콘 (+0원)\n");
                    printf("[5] 선택안함 (+0원)\n\n");
                    printf("사이드메뉴를 선택해 주세요 : ");
                    scanf("%d", &side);
                    switch (side)
                    {
                    case 1: case 2: case 3:
                        won = won + 1500;
                        break;
                    case 4:
                        won = won + 0;
                        break;
                    case 5: 
                        break;
                    default:
                        printf("취소되었습니다.\n\n");
                        break;
                    }
                    break;
                
            
            default:
                printf("추가 옵션 : 없음.\n\n");
                break;
            }

        }
            break;
        
        case 2: //단품
        {
            printf(" \n\n<<< 단품 메뉴 >>>\n\n");
            printf("[1] 불고기 버거 단품 (3500원)\n");
            printf("[2] 데리 버거 단품   (2900원)\n");
            printf("[3] 치킨 버거 단품   (3500원)\n");
            printf("[4] 비프 버거 단품   (4000원)\n");
            printf("[5] 치즈 버거 단품   (3000원)\n");
            printf("[0] 취소\n\n");

            printf("단품 메뉴를 선택해 주세요 : ");
            scanf("%d", &dan);
            switch (dan)
            {
            case 1 : //불고기 버거 단품
                printf(" <<< 불고기 버거 단품 >>>\n\n ");
                won = won + 3500;
                break;
            case 2 : //데리 버거 단품
                printf(" <<< 데리 버거 단품 >>>\n\n ");
                won = won + 2900;
                break;
            case 3 : //치킨 버거 단품
                printf(" <<< 치킨 버거 단품 >>>\n\n ");
                won = won + 3500;
                break;
            case 4 : //비프 버거 단품
                printf(" <<< 비프 버거 단품 >>>\n\n ");
                won = won + 4000;
                break;
            case 5 : //치즈 버거 단품
                printf(" <<< 치즈 버거 단품 >>>\n\n ");
                won = won + 3000;
                break;
            default: //그 외
                printf("취소되었습니다.\n\n");
                break;
            }
            break;
        }
        case 3: //추가상품
            printf("\n\n<<< 추가 상품 >>>\n\n");
                    printf("[1] 치즈스틱 (2000원)\n");
                    printf("[2] 양념감자 (2000원)\n");
                    printf("[3] 오징어링 (2000원)\n");
                    printf("[4] 소프트콘 (1000원)\n");
                    printf("[5] 선택안함 (0원)\n\n");
                    printf("사이드메뉴를 선택해 주세요 : ");
                    scanf("%d", &plus);

                    switch (plus)
                    {
                    case 1: case 2: case 3:
                        printf("\n몇 개를 주문하시겠습니까? : ");
                        scanf("%d", &count);
                        
                        won = won + (count*2000);
                        break;
                    case 4 :
                        printf("\n몇 개를 주문하시겠습니까? : ");
                        scanf("%d", &count);

                        won = won + (count*1000);
                        break;
                    default:
                        printf("선택안함");
                        break;
                    }break;
        case 0: //결재
        printf("%d원입니다.\n",won);
        won = 0;
            break;
        default: //그 외
            printf("다시 선택 하세요.\n\n");
            break;
        }

    } while (menu != 99);
   return 0;
}