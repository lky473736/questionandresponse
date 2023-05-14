// 2023.05.14 작성
// 아주대학교 융합프로그래밍 중간프로젝트 #2
// '경품 응모 프로그램'의 간단한 원리 source code

// 본 file은 참고용으로 만들어졌습니다. 사용하는 함수나 알고리즘에 따라 코드의 형태가 다르니깐 잘 변형해서 사용하세요.
// coded by lky473736 (가천대학교 컴퓨터공학전공 임규연)

// <1> - 구매자의 자금을 입력받기 -> scanf로 그냥 입력 받으면 됨
// <2> - 살 물건 선택, 구매 갯수 입력 -> 선택 알고리즘 (choice algo) 쓰면 됨
// 선택 알고리즘 : 반복문 안에 조건문 있는 형태. 사용자에게 계속해서 선택하게 해서 조건문 안에 있는 수식이나 매소드 실행시킴
// 이때 계속적으로 '남은 예산'을 계산하는 계산식 필요 (아래처럼 반복문 쓰는게 좋을듯)

#include <stdio.h>

int budget;
scanf ("%d", &budget); // 예산 입력받기 (예산 범위에 관한 거는 작성 요망)

int object; // 선택 알고리즘을 위한 물건 선택지 
int number; // 물건 선택하고 그거 몇개 살건지 갯수 묻고 이 변수에 저장
int price; // object 값 * number 해서 여기에 저장

int tvprice = 200000; // tv 가격
int refriprice = 100000; // 냉장고 가격
int vacuprice = 50000; // 청소기 가격
int ovenprice = 10000; // 오븐 가격

int tvchance = 0; // tv 살 때 응모기회 변수
int refrichance = 0; // 냉장고 살 때 응모기회 변수
int vacuchance = 0; // 청소기 살 때 응모기회 변수
int ovenchance = 0; // 오븐 살 때 응모기회 변수


while (budget > price) {
    scanf ("%d", &object); // 물건 선택지

    switch (object)
    {
        case 1 :
            scanf ("%d", &number); // 몇개 살건지 입력받기
            price = number * tvprice; // price 세팅
    
            budget = budget - price; // 남은 예산 업데이트
            tvchance += 10;

        // 나머지도 이거랑 비슷한 형식으로 하면 됨
    }
} 

// <3> - 이 때, 보유자금을 초과하여 구매할 수 없다 
// + 보유 자금이 초과되면 “보유 자금을 n만원만큼 초과하였습니다” 출력 이후 “현재 잔돈은 n만원이며 A는 더 이상 구매할 수 없습니다.”(구매 가능 개수 0개일 때) 또는 “현재 잔돈은 n만원이며, A는 x개 이하로 구매할 수 있습니다.”(구매 가능 개수 x개일 때) 출력 후 다시 물건 구입 메뉴로 이동
// -> 이게 골때리는데, 애초에 이걸 구현하려면 위에 있는 선택 알고리즘 자체를 void (사용자지정함수)로 만들어야 할 것 같음
// 예시는 아래와 같음

void choicealgo()
{
    while (budget > price) {
    scanf ("%d", &object); // 물건 선택지

    switch (object)
    {
        case 1 :
            scanf ("%d", &number); // 몇개 살건지 입력받기
            price = number * tvprice; // price 세팅
    
            budget = budget - price; // 남은 예산 업데이트
            tvchance += 10;
        // 나머지도 이거랑 비슷한 형식으로 하면 됨
    }
} 
}

int main (void) {
    while (budget > tvprice || budget > refriprice || budget > vacuprice || budget > ovenprice) // 지금 있는 보유자금으로 어떤 물건이든 하나라도 살 수 있다면
    {
        choicealgo()
        // 여기서 지금 남은 예산이랑 지금 살 수 있는 물건 관련식 작성하면 될듯
    }
}

// <4>, <5> - 응모 기회 개수만큼 중복되지 않는 랜덤한 경품 응모 번호를 array로 생성 후 출력
// -> stdlib.h 처음에 불러온 후 rand 써서 랜덤번호 뽑기 + check_duplicate로 중복 체크하기
// 경품 응모 번호에 관한 간단한 예시 코드는 아래와 같음

#include <stdlib.h>
#include <time.h>

void check_duplicate(int arr[], int size) {
  srand(time(NULL));
  // 시드 값으로 현재 시간을 사용하여 srand() 함수를 초기화함

  for (int i = 0; i < size; i++) {
    for (int j = i+1; j < size; j++) {
      if (arr[i] == arr[j]) {
        // 같은 요소를 찾으면, 랜덤한 값을 생성하여 서로 다른 값으로 바꿈
        arr[j] = rand();
        printf("replaced %d with %d\n", arr[j], rand());
      }
    }
  }
}

int main (void)
{
    int chance; // chance = 응모권 갯수 
    int randomarray[chance] = {}; // 번호 array

    check_duplicate (randomarray[], chance);
}

// <6> - 응모 번호, 당첨 번호 비교 및 등수 출력
// -> 등수는 도대체 누구와 비교해서 등수를 출력하라는지 모르겠음
// 하지만 응모 번호, 당첨 번호 비교는 반복문으로 구현 가능
// 응모 번호 array는 위에 구현했고, 당첨 번호 array는 그저 위의 코드를 한번 더 반복하면 됨
// 아래는 예시 코드임

// randomarray (응모 번호)와 winarray (당첨 번호)가 있다고 가정

int samenumber = 0;

for (int k = 0; k++; k < chance)
{
    if (randomarray[k] == winarray[k]) // 응모 번호의 k번째와 당첨 번호의 k번째가 같다면
    {
        samenumber += 1;
    }
}

printf (samenumber);
