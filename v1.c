// Slot Machine v1.0

#include <stdio.h>

int main(void)
{
    int set, option, won = 0;
    int menu, drink,side, dan, plus, count =0;
    printf("<<< Hamburger Kiosk v1.0 >>> \n\n");
    do
    {

        printf("\n\n <<< �޴� >>>\n\n");
        printf("[1] ��Ʈ�޴�\n");
        printf("[2] ��ǰ\n");
        printf("[3] �߰���ǰ\n");
        printf("[0] ����\n");
        printf("[99] ����\n\n");


        printf("�޴��� ������ �ּ��� : ");
        scanf("%d", &menu);

        switch (menu)
        {
        case 1: //��Ʈ�޴�
        {
            printf("\n\n <<< ��Ʈ �޴� >>>\n\n");
            printf("[1] �Ұ�� ���� ��Ʈ (5500��)\n");
            printf("[2] ���� ���� ��Ʈ   (4900��)\n");
            printf("[3] ġŲ ���� ��Ʈ   (5500��)\n");
            printf("[4] ���� ���� ��Ʈ   (6000��)\n");
            printf("[5] ġ�� ���� ��Ʈ   (4500��)\n");
            printf("[0] ���\n\n");

            printf("��Ʈ�޴��� ������ �ּ��� : ");
            scanf("%d", &set);

            switch (set)
            {
            case 1 : //�Ұ�� ����
                printf("\n <<< �Ұ�� ���� ��Ʈ >>>\n\n ");
                won = won + 5500;
                break;
            case 2 : //���� ����
                printf("\n <<< ���� ���� ��Ʈ >>>\n\n ");
                won = won + 4900;
                break;
            case 3 : //ġŲ ����
                printf("\n <<< ġŲ ���� ��Ʈ >>>\n\n ");
                won = won + 5500;
                break;
            case 4 : //���� ����
                printf("\n <<< ���� ���� ��Ʈ >>>\n\n ");
                won = won + 6000;
                break;
            case 5 : //ġ�� ����
                printf("\n <<< ġ�� ���� ��Ʈ >>>\n\n ");
                won = won + 4500;
                break;
            default: //�� ��
                printf("��ҵǾ����ϴ�.\n\n");
                break;
            }
            printf("�߰� �ɼ��� �����Ͻðڽ��ϱ�?\n\n");
            printf("[1] ��.\n");
            printf("[0] �ƴϿ�.\n\n");
            printf("������ �ּ���.");
            scanf("%d",&option);
            switch (option)
            {
            case 1:
                    printf("\n\n<<< �߰��ɼ� : ���� >>>\n\n");
                    printf("[1] �ݶ�(R)    (+0��)\n");
                    printf("[2] �ݶ�(L)    (+500��)\n");
                    printf("[3] ���̴�(R)  (+0��)\n");
                    printf("[4] ���̴�(L)  (+500��)\n");
                    printf("[5] ���þ���   (+0��)\n\n");

                    printf("���Ḧ ������ �ּ���. : ");
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
                        printf("��ҵǾ����ϴ�.\n");
                        break;
                    }
                    printf("\n\n<<< ���̵� �޴� ���� >>>\n\n");
                    printf("[1] ġ�ƽ (+1500��)\n");
                    printf("[2] ��䰨�� (+1500��)\n");
                    printf("[3] ��¡� (+1500��)\n");
                    printf("[4] ����Ʈ�� (+0��)\n");
                    printf("[5] ���þ��� (+0��)\n\n");
                    printf("���̵�޴��� ������ �ּ��� : ");
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
                        printf("��ҵǾ����ϴ�.\n\n");
                        break;
                    }
                    break;
                
            
            default:
                printf("�߰� �ɼ� : ����.\n\n");
                break;
            }

        }
            break;
        
        case 2: //��ǰ
        {
            printf(" \n\n<<< ��ǰ �޴� >>>\n\n");
            printf("[1] �Ұ�� ���� ��ǰ (3500��)\n");
            printf("[2] ���� ���� ��ǰ   (2900��)\n");
            printf("[3] ġŲ ���� ��ǰ   (3500��)\n");
            printf("[4] ���� ���� ��ǰ   (4000��)\n");
            printf("[5] ġ�� ���� ��ǰ   (3000��)\n");
            printf("[0] ���\n\n");

            printf("��ǰ �޴��� ������ �ּ��� : ");
            scanf("%d", &dan);
            switch (dan)
            {
            case 1 : //�Ұ�� ���� ��ǰ
                printf(" <<< �Ұ�� ���� ��ǰ >>>\n\n ");
                won = won + 3500;
                break;
            case 2 : //���� ���� ��ǰ
                printf(" <<< ���� ���� ��ǰ >>>\n\n ");
                won = won + 2900;
                break;
            case 3 : //ġŲ ���� ��ǰ
                printf(" <<< ġŲ ���� ��ǰ >>>\n\n ");
                won = won + 3500;
                break;
            case 4 : //���� ���� ��ǰ
                printf(" <<< ���� ���� ��ǰ >>>\n\n ");
                won = won + 4000;
                break;
            case 5 : //ġ�� ���� ��ǰ
                printf(" <<< ġ�� ���� ��ǰ >>>\n\n ");
                won = won + 3000;
                break;
            default: //�� ��
                printf("��ҵǾ����ϴ�.\n\n");
                break;
            }
            break;
        }
        case 3: //�߰���ǰ
            printf("\n\n<<< �߰� ��ǰ >>>\n\n");
                    printf("[1] ġ�ƽ (2000��)\n");
                    printf("[2] ��䰨�� (2000��)\n");
                    printf("[3] ��¡� (2000��)\n");
                    printf("[4] ����Ʈ�� (1000��)\n");
                    printf("[5] ���þ��� (0��)\n\n");
                    printf("���̵�޴��� ������ �ּ��� : ");
                    scanf("%d", &plus);

                    switch (plus)
                    {
                    case 1: case 2: case 3:
                        printf("\n�� ���� �ֹ��Ͻðڽ��ϱ�? : ");
                        scanf("%d", &count);
                        
                        won = won + (count*2000);
                        break;
                    case 4 :
                        printf("\n�� ���� �ֹ��Ͻðڽ��ϱ�? : ");
                        scanf("%d", &count);

                        won = won + (count*1000);
                        break;
                    default:
                        printf("���þ���");
                        break;
                    }break;
        case 0: //����
        printf("%d���Դϴ�.\n",won);
        won = 0;
            break;
        default: //�� ��
            printf("�ٽ� ���� �ϼ���.\n\n");
            break;
        }

    } while (menu != 99);
   return 0;
}