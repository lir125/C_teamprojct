// Slot Machine v4.0

#include <stdio.h>

int main(void)
{
    long money = 0 ;
    int bulgogi = 5; int derry = 5; int chiken = 5; int beef = 5; int cheese = 5;
    int buy_bulgogi = 0; int buy_derry =0; int buy_chiken = 0; int buy_beef =0; int buy_cheese = 0;
    int set, option, won = 0;
    int menu, drink, side, dan, plus, count, inven, inven_;
    printf("<<< Hamburger Kiosk v4.0 >>> \n\n");
    do
    {
        printf("\n\n <<< �޴� >>>\n\n");
        printf("[1] ��Ʈ�޴�\n");
        printf("[2] ��ǰ\n");
        printf("[3] �߰���ǰ\n");
        printf("[0] ����\n\n");

        printf("[98] ������\n");
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
                if (bulgogi <= 0)
                    {printf("��� �����Ͽ� ó������ ���ư��ϴ�.\n\n"); 
                    bulgogi--;}
                else{
                printf("\n <<< �Ұ�� ���� ��Ʈ >>>\n\n ");
                won = won + 5500;
                bulgogi--;
                buy_bulgogi++;
                }
                break;
            case 2 : //���� ����
                if (derry <= 0)
                    {printf("��� �����Ͽ� ó������ ���ư��ϴ�.\n\n");
                    derry--;}
                else{
                printf("\n <<< ���� ���� ��Ʈ >>>\n\n ");
                won = won + 4900;
                derry--;
                buy_derry++;
                }
                break;
            case 3 : //ġŲ ����
                if (chiken <= 0)
                    {printf("��� �����Ͽ� ó������ ���ư��ϴ�.\n\n");
                    chiken--;}
                else{
                printf("\n <<< ġŲ ���� ��Ʈ >>>\n\n ");
                won = won + 5500;
                chiken--;
                buy_chiken++;
                }
                break;
            case 4 : //���� ����
                if (beef <= 0)
                    {printf("��� �����Ͽ� ó������ ���ư��ϴ�.\n\n");
                    beef--;}
                else{
                printf("\n <<< ���� ���� ��Ʈ >>>\n\n ");
                won = won + 6000;
                beef--;
                buy_beef++;}
                break;
            case 5 : //ġ�� ����
                if (cheese <= 0)
                    {printf("��� �����Ͽ� ó������ ���ư��ϴ�.\n\n");
                    cheese--;}
                else{
                printf("\n <<< ġ�� ���� ��Ʈ >>>\n\n ");
                won = won + 4500;
                cheese--;
                buy_cheese++;
                }
                break;

            default: //�� ��
                printf("��ҵǾ����ϴ�.\n\n");
                break;
            }
            if ((set == 1 && bulgogi >= 0) || (set == 2 && derry !=0) || (set == 3 && chiken != 0) || (set == 4 && beef != 0) || (set == 5 && cheese != 0))
            {
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
        }           
        
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
                if (bulgogi <= 0)
                    {printf("��� �����Ͽ� ó������ ���ư��ϴ�.\n\n");
                    bulgogi--;}
                else{
                printf(" <<< �Ұ�� ���� ��ǰ >>>\n\n ");
                won = won + 3500;
                bulgogi--;
                buy_bulgogi++;}
                break;
            case 2 : //���� ���� ��ǰ
                if (derry <= 0)
                    {printf("��� �����Ͽ� ó������ ���ư��ϴ�.\n\n");
                    derry--;}
                else{
                printf(" <<< ���� ���� ��ǰ >>>\n\n ");
                won = won + 2900;
                derry--;
                buy_derry++;}
                break;
            case 3 : //ġŲ ���� ��ǰ
                if (chiken<=0)
                    {printf("��� �����Ͽ� ó������ ���ư��ϴ�.\n\n");
                    chiken--;}
                else{
                printf(" <<< ġŲ ���� ��ǰ >>>\n\n ");
                won = won + 3500;
                chiken--;
                buy_chiken++;}
                break;
            case 4 : //���� ���� ��ǰ
                if (beef <= 0)
                    {printf("��� �����Ͽ� ó������ ���ư��ϴ�.\n\n");
                    beef--;}
                else{
                printf(" <<< ���� ���� ��ǰ >>>\n\n ");
                won = won + 4000;
                beef--;
                buy_beef++;}
                break;
            case 5 : //ġ�� ���� ��ǰ
                if (cheese <= 0)
                    {printf("��� �����Ͽ� ó������ ���ư��ϴ�.\n\n");
                    cheese--;}
                else{
                printf(" <<< ġ�� ���� ��ǰ >>>\n\n ");
                won = won + 3000;
                cheese--;
                buy_cheese++;}
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
        
        printf("���� ������ �ּ���: ");
        scanf("%d", &money);
        if (won > money)
        {
            printf("���� �����մϴ�!!\n\n");
            bulgogi = bulgogi + buy_bulgogi;
            derry = derry + buy_derry;
            chiken = chiken + buy_chiken;
            beef = beef + buy_beef;
            cheese = cheese + buy_cheese;
        }
        else
        {
            printf("�Ž������� %d�� �Դϴ�.\n\n", (money - won));
        }
        won = 0;
            break;
        case 98: //������
            printf("���� ���� \n\n ");
            if (bulgogi < 0)
                printf("�Ұ�� ���� ǰ�� \n");
            else
                printf("�Ұ�� ���� %d��\n ", bulgogi);
            if (derry < 0)
                printf("����   ���� ǰ��\n ", derry);
            else
                printf("����   ���� %d��\n ", derry);
            if (chiken < 0)
                printf("ġŲ   ���� ǰ��\n ", chiken);
            else
                printf("ġŲ   ���� %d��\n ", chiken);
            if (beef < 0)
                printf("����   ���� ǰ��\n ", beef);
            else
                printf("����   ���� %d��\n ", beef);
            if (cheese < 0)
                printf("ġ��   ���� ǰ��\n\n ", cheese);
            else
                printf("ġ��   ���� %d��\n\n ", cheese);

            printf("��� �����Ͻðڽ��ϱ�?\n");
            printf("[��] = 0, [�ƴϿ�] = 1\n");
            scanf("%d", &inven);
            switch (inven)
            {
            case 0:
                printf("��� ������ �����Ͻðڽ��ϱ�? : ");
                scanf("%d", &inven_);
                bulgogi = inven_; derry = inven_; chiken = inven_; beef = inven_; cheese = inven_;
                break;
            
            default:
                break;
            }
            


        case 99:
            break;
        default: //�� ��
            printf("�ٽ� ���� �ϼ���.\n\n");
            break;
        }
    } while (menu != 99);
   return 0;
}