#include "crud_cpp.h"
#include "manager.h"
#define QUIT 0
#define READ 1
#define CREATE 2
#define UPDATE 3
#define DELETE 4
#define SEARCH 5
#define LOAD 6  //파일 조회
#define SAVE 7  //파일 저장

int main() {
    Product top, bot, dress;
    Clothes tmp;
    string CATEGORY[3] = {"상의","하의","드레스"}, temp, remainder;
    int cmd, type, check=1, count=0;
    do {
        cmd = menu();
        switch (cmd) {
            case READ:
                switch (category()) {
                    case 0:
                        if (top.list_empty()) {
                            printf("등록된 상품이 없습니다.\n");
                            break;
                        }
                        else {
                            cout << "\n" << CATEGORY[0] << " 제품 정보입니다." << endl;
                            readClothes(top.head);
                        }
                        break;
                    case 1:
                        if (bot.list_empty()) {
                            printf("등록된 상품이 없습니다.\n");
                            break;
                        }
                        else {
                            cout << "\n" << CATEGORY[0] << " 제품 정보입니다." << endl;
                            readClothes(bot.head);
                        }
                        break;
                    case 2:
                        if (dress.list_empty()) {
                            printf("등록된 상품이 없습니다.\n");
                            break;
                        }
                        else {
                            cout << "\n" << CATEGORY[0] << " 제품 정보입니다." << endl;
                            readClothes(dress.head);
                        }
                        break;
                    case 3:
                        if (top.list_empty() || bot.list_empty() || dress.list_empty()) {
                            printf("등록된 상품이 없습니다.\n");
                            break;
                        }
                        else {
                            printf("\n상의>\n");
                            readClothes(top.head);
                            printf("\n\n하의>\n");
                            readClothes(bot.head);
                            printf("\n\n드레스>\n");
                            readClothes(dress.head);
                        }
                }
                break;
            case CREATE:
                tmp = createClothes();
                switch (category()) {
                    case 0:
                        top.add_to_tail(tmp);
                        break;
                    case 1:
                        bot.add_to_tail(tmp);
                        break;
                    case 2:
                        dress.add_to_tail(tmp);
                        break;
                    default:
                        cout << "ERROR" << endl;
                        check=0;
                }
                if (check==1) printf("==> 추가됨\n");
                break;
            case UPDATE:
                switch (category()) {
                    case 0:
                        if (top.list_empty()) {
                            printf("등록된 상품이 없습니다.\n");
                            break;
                        }
                        readClothes(top.head);
                        printf("수정하고 싶은 제품 이름? ");
                        getline(cin, remainder);
                        getline(cin, temp);
                        check = updateClothes(top.get_product(temp));
                        break;
                    case 1:
                        if (bot.list_empty()) {
                            printf("등록된 상품이 없습니다.\n");
                            break;
                        }
                        readClothes(bot.head);
                        printf("수정하고 싶은 제품 이름? ");
                        getline(cin, remainder);
                        getline(cin, temp);
                        check = updateClothes(bot.get_product(temp));
                        break;
                    case 2:
                        if (dress.list_empty()) {
                            printf("등록된 상품이 없습니다.\n");
                            break;
                        }
                        readClothes(dress.head);
                        printf("수정하고 싶은 제품 이름? ");
                        getline(cin, remainder);
                        getline(cin, temp);
                        check = updateClothes(dress.get_product(temp));
                        break;
                    default:
                        cout << "ERROR" << endl;
                        check=0;
                }
                if (check==1) printf("==> 수정됨\n");
                break;
            case DELETE:
                switch (category()) {
                    case 0:
                        if (top.list_empty()) {
                            printf("등록된 상품이 없습니다.\n");
                            break;
                        }
                        deleteClothes(&top);
                        break;
                    case 1:
                        if (bot.list_empty()) {
                            printf("등록된 상품이 없습니다.\n");
                            break;
                        }
                        deleteClothes(&bot);
                        break;
                    case 2:
                        if (dress.list_empty()) {
                            printf("등록된 상품이 없습니다.\n");
                            break;
                        }
                        deleteClothes(&dress);
                        break;
                    default:
                        cout << "ERROR" << endl;
                        check=0;
                }
                if (check==1) printf("==> 삭제됨\n");
                break;
            case SEARCH:
                break;
            case LOAD:
                switch (category()) {
                    case 0:
                        check = loadData(&top, "topInfo.txt");
                        break;
                    case 1:
                        bot.add_to_tail(tmp);
                        break;
                    case 2:
                        dress.add_to_tail(tmp);
                        break;
                    default:
                        cout << "ERROR" << endl;
                        check=0;
                }
                if (check==1) printf("==> 로딩완료\n");
                break;
            default:
                break;
        }
    } while(cmd != QUIT);
    printf("종료되었습니다.\n");
    return 0;
}
