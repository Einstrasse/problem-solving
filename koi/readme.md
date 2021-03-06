### KOI
https://www.acmicpc.net/category/55    
위 페이지에서 나타난 문제들을 풀이한 소스코드들이다.
(한국 정보 올림피아드)

#### 1996/e_01_danji
https://www.acmicpc.net/problem/2667    
1996년 초등부 1번문제, 단지번호붙이기 문제 풀이이다.
first.cpp는 첫번째 풀이 시도이다.    
bfs의 개념을 조금 사용한 풀이방법이다.

#### 1996/e_02_number
https://www.acmicpc.net/problem/2668    
1996년 초등부 2번문제, 숫자고르기 문제 풀이이다.
first.cpp는 첫번째 풀이 시도이다. STL set을 이용하여 풀이하였다.
알고리즘은 다음과 같다.
1. 두번째 줄의 숫자 집합을 구한다. 이를 A라고 한다.
2. A의 원소를 인덱스(첫번째 줄의 숫자기준)로 하는 숫자 집합 B를 구한다.
3. A집합과 B집합이 일치하면 이(A집합 혹은 B집합)를 리턴한다. 그렇지 않으면(B집합이 더 작으면) 다음 단계로 간다.
4. B집합을 A집합으로 두고, B집합은 초기화한다. A집합을 기준으로 스텝 2를 다시 시도한 뒤 3번으로 간다.

#### 1996/e_03_rectangle
https://www.acmicpc.net/problem/2669    
matrix.cpp는 좌표평면을 2차원 메트릭스에 그리드 모델링 시켜서 총 넓이를 계산하는 방식으로 푼 소스코드이다.

#### 1996/m_01_maxmult
https://www.acmicpc.net/problem/2670    
dp[i]는 i번째 수열에서 끝나는 부분수열의 최대곱을 저장하는 방식의 dp로 해결함

#### 2006/e_03_magicpaper
https://www.acmicpc.net/problem/2574    
steps.cpp는 색종이를 자르는 스탭을 하나하나 찾아가는 방식으로 푼 풀이법 코드입니다.

#### 2006/e_01_templeader
https://www.acmicpc.net/problem/1268    
임시반장 정하기 문제    
brute.cpp는 하나하나 다 세어서 최고값을 구하는 방식으로 푼 풀이법 코드입니다.

#### 2016/e_01_room
https://www.acmicpc.net/problem/13300    
방 배정 문제. 그냥 하나하나 개수 샌 뒤 필요한 방 수를 더하면 된다.

#### 2016/e_02_tile
https://www.acmicpc.net/problem/13301    
타일 장식물 문제. 가로 세로 길이가 늘어나는 패턴만 찾으면 간단하다.

#### 2016/e_03_resort
https://www.acmicpc.net/problem/13302    
리조트 문제    
dp.cpp 는 동적 프로그래밍(Dynamic Programming)으로 푼 풀이법이다.

#### 2016/e_04_barrier
https://www.acmicpc.net/problem/13303    
장애물 경기 문제. 공식 사이트에 나와있는 풀이법으로 풀었다.    
https://www.digitalculture.or.kr/koi/selectOlymPiadDissentList.do    

#### 2015/e_01_apple
https://www.acmicpc.net/problem/10833    
사과 세기 문제. 그냥 계산하면 된다. apple수를 사람수로 나누면 1인당 지급되는 사과수가 된다.

#### 2015/e_02_belt
https://www.acmicpc.net/problem/10834    
바퀴 회전수 문제. 정수로 떨어지게 되어있으므로 그냥 계산하면 된다. 32bit int로 하면 integer overflow가 발생할 수 있으므로
64bit integer로 해야 한다.

#### 2015/e_03_card
https://www.acmicpc.net/problem/10835    
완전탐색을 하면 시간 초과가 난다. O(3^n)이 된다. 하지만 중복탐색되는 부분을 줄이면, 즉 Memoziation원리를 적용한 Dynamic programming으로 풀 시에는 나타나는 좀더 효율적으로 풀 수 있다. dp\[왼쪽남은카드수\]\[오른쪽남은카드수\]로 한다면 최악의경우 O(n^2)이므로 2000^2 = 400만으로 1초안에 풀 수 있다.

#### 2015/e_04_bee
https://www.acmicpc.net/problem/10836    
dfs로는 Time out이 난다. 그러므로 더 좋은 성능의 방법을 찾아봐야 한다.    
숫자가 감소하지 않는 방향이라고 했으니 규칙을 잘 보면, 왼쪽 끝과 위쪽 끝을 제외하고 내부쪽은 결과적으로 위쪽 값과 같은 값을 갖게 된다.    
이러한 규칙을 이용하면 O(MN)으로 해결 가능

#### 2014/e_01_microsave
https://www.acmicpc.net/problem/10162    
모듈러 연산과 나눗셈 연산을 이용하면 간단하게 구할 수 있다.

#### 2014/e_02_paper
https://www.acmicpc.net/problem/10163    
N값이 작으므로, 표로 덮는 부분을 표시하고 개수를 세면 된다.

#### 2014/e_03_grid_path
https://www.acmicpc.net/problem/10164    
dp로 풀 수 있다. k값이 하나 뿐 이므로, 시작점에서 k위치까지 -> k위치에서 최종 도착지까지 의 경로를 고려하면 된다. 1부터 숫자를 세므로 이에따른 오류만 조심하면 된다.

#### 2014/e_04_bus_route
https://www.acmicpc.net/problem/10165    
케이스를 잘 나누어야 한다. 일단 직선에서 생각을 해 보자. 비교 연산자를 재정의해서 소팅해서, 시작위치는 오름차순으로, 끝 위치는 내림차순으로 정렬한다.    
그러면 소팅을 하고 나서 선형탐색을 앞에서 뒤로 할 때, 뒤에잇는놈이 앞에있는놈을 포함하는 경우는 없다. 시작위치는 뒤로 갈 수록 앞으로 가기 때문에 시작 범위는 줄어들기 마련이다.    
그리고 시작 위치가 고정인 상태에서는 끝나는 위치는 계속해서 작아지게 되어있으므로, 시작 위치가 새로운놈이 되었을 때 끝 위치가 가장 큰놈 일 것이다. 이러한 점을 이용해서 끝놈 위치만    
저장해 놓고, 끝놈보다 작으면 포함시켜버리고, 끝놈보다 크면, 그 끝놈 위치를 새 끝놈 위치로 저장해서 끝만 비교하면서 선형 탐색을 하면 된다.    

그러면 원에서 경우를 체크를 해야 하는데, 시작<끝 의 경우 A그룹으로 정의하고 시작>끝의 경우를 B그룹으로 정의를 하자. B그룹의 경우는 0번위치를 무조건 통과하고 A그룹은 0번 위치를 지나갈    
수는 없다. 따라서 A그룹이 B그룹을 포함할 수는 없다. B그룹에서 시작 부분의 최대값을 구하고, 끝 부분의 최소값을 구해서 A그룹의 (?~시작부분 최대값) 의 경우와 (끝부분 최소값~?)을 모두    
포함할 수 있다. 이러한 경우를 체크해 주고(B가 A를 포함하는 경우) A그룹이 A를 포함하는 경우와 B그룹이 B를 포함하는 경우는 직선에서 비교하는 것과 똑같은 방법으로 체크하면 된다.

### 2013/e_01_olympic
https://www.acmicpc.net/problem/8979    
단순 계산으로 풀 수 있다. 비교 연산자를 재정의해서 정렬한 뒤, 중복 순위의 경우에만 체크를 해주면 된다.

### 2013/e_02_parcel
https://www.acmicpc.net/problem/8980    
그리디로 풀 수 있다. 그리디도 그리딘데, 어떤식으로 그리디를 적용시킬지가 중요하다. 일단 배달 구간이 가장 짧은놈들 순서대로 sorting한다. 배달 구간이 짧을수록 트럭에서 공간을 점유하는 시간이 작아지므로 그렇게 하는 것이다.    
그리고 배달구간이 짧은놈 순서대로 트럭에 최대한 집어넣으면 정답이 된다. 이것을 어떻게 구현하느냐에서 많이 해맸는데, 궂이 시간순대로 트럭이 이동하는 방식으로 시뮬레이션을 하지 않더라도    
짧은 구간부터, 구간별 트럭에 적제된 화물양을 저장해놓았다가 최대한 적재시키는 식으로 정답을 구하면 쉽게 풀이가 된다.    
greedy.cpp는 시간순으로 시뮬레이션 하려다가 오답처리난 코드이고, 시뮬레이션을 하지 않고 짧은 구간부터 시간대비 적재량을 계산해서 정답 처리를 받은 코드이다.

### 2013/e_03_input_num
https://www.acmicpc.net/problem/8981    
비슷한 로직으로 하면 역연산이 된다. 이전 값 만큼 offset을 앞으로 전진시키고, 해당 위치에 다음 받은 값을 쓴다. 만약 거기 이미 값이 있다면 값이 없을 때 까지 앞으로 전진하면 된다.

### 2017/e_01_room_alloc
https://www.acmicpc.net/problem/14697    
각각의 방 개수가 0~300개 중에 떨어지므로 3중 for문으로 완전탐색을 하면 된다.

### 2017/e_02_money_raising
https://www.acmicpc.net/problem/14863    
dfs + memoization으로 완전탐색을 수행하면 된다. 단 조심해야 할 부분은, 마지막 종점까지 도착을 꼭 해야 한다는 것으로, 끝까지 도착하지 못한 결과는 정답에서 제외해야 한다.

### 2017/e_03_line
https://www.acmicpc.net/problem/14864    
C++ STL set 자료구조를 활용해서 품. 일단 순서쌍에서 알아낼 수 있는 정보는 다음과 같다.    
1. 나보다 뒤에 있는 놈에 대해서, 내가 그 놈보다 큰지 아닌지를 확인할 수 있다.
2. 나보다 앞에 있는 놈 중에 나보다 큰 놈이 몇 개인지 알 수 있다.    


물론 나보다 앞에 있는 놈 중에 큰놈이 몇개인지 뿐만 아니라 누군지까지 확인할 수 있지만, 일단은 저 두개를 이용해서 문제를 푼다.
맨 뒤에서 부터 채워가면서 숫자를 넣는다.
일단 집합 S를 초기화한다 S = {1, 2, 3, ... , N}
맨 뒤에있는 숫자 입장에서는 나머지 모두가 나보다 앞에 있으므로, 나머지 수 중 자신보다 큰 수가 몇개인지 알 수 있다.    
그러면 앞에있는 수 중 자신보다 큰 수의 개수를 k라고 하면, 집합 S에서 k번째 큰 수를 빼서 자신의 값에 집어넣는다.    

이런식으로 맨 앞까지 간다.    

이러면 일단 조건을 만족할만한 정답 셋을 하나 구할 수 있는데, Valid한 정답을 갖는다면 Unique한 정답을 가질 것이다.    
하지만 해당 인풋이 Invalid할 수도 있으니 한번 체크를 해야 한다. 이때 Strict하게 체크를 하려면 자신보다 뒤에 있는 숫자 중,    
순서쌍에 해당된다면 자신보다 작은지, 순서쌍에 해당되지 않는다면 자신보다 큰지를 확인해야하는데, 둘다 체크하게 되면 TLE가 날 것이다.    
특히나 순서쌍애 해당되지 않는 애들까지 체크를 하게 되면 O(N^2)이므로 꼼짝없이 TLE다. 하지만 순서쌍 개수는 100만개이므로, 순서쌍에 해당되는    
경우만 체크할 경우 TLE는 안날 수 있다. 따라서 순서쌍에 해당되는 경우만 자신보다 작은 값을 갖는지만 체크하면 된다.

이 부분의 경우 -1이 정답인데 아니게 나올까봐 조마조마했는데 정답 판정이 났다. 아마 앞에서 만든 Answer Array가 주어진 순서쌍 조건이 맞는지만 확인해도    
빠진 조건이 있는 반례가 없다는게 논리적으로 맞아서 그런것인가? 이거를 증명까지는 못하겠다. 일단 어려운 문제였다.

### 2012/e_01_cardgame
시뮬레이션으로 따라가면 쉽게 풀 수 있다.

### 2012/e_02_budget
평균값부터 시작해서 fail할때까지 값을 계속 늘려나가면 된다.

### 2012/e_03_bus
양쪽 끝에 사람이있는곳까지 왕복하면서 태울 수 있는 한 다 태우는 식으로 진행하면 된다. 그러면 최소값이 나온다.

### 2011/e_01_sequence
https://www.acmicpc.net/problem/2559    
슬라이딩 윈도우 방식으로 뒷부분을 빼고 앞부분을 더하는 방식으로 연속된 k개의 합을 빠르게 구하면 된다. O(N)으로 풀 수 있다.

### 2011/e_02_common_divisor
https://www.acmicpc.net/problem/2436    
소인수분해로 풀 수 있다. gcd, lcm이 있을 때 k = lcm/gcd라고 정의하자. k를 소인수 분해하면 factor들이 나올것이다. a^x + b^y + c^z 꼴로 나올 건데, 이 안에 값에서 공약수가 나오면 안되므로, 당연히 항 단위로 나뉘어서    
각각의 수에 할당될 것이다. 그러면 factor별로 bitmask를 이용해서 두개로 찢는 모든 경우의 수 중에 합이 최소가 되는 케이스를 찾아내서 그녀석에 gcd를 각각 곱하면 정답이다.