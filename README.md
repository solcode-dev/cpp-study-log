# C++ Study Log 📘

**C++ 프로그래밍 학습 및 실습 기록 저장소**

이 저장소는 C++ 언어의 기초부터 심화 개념까지 체계적으로 학습하며 작성한 코드와 실습 내용을 담고 있습니다. 매일 학습한 내용을 `Lesson` 단위로 정리하여 기록했습니다.

## 🛠 Tech Stack
- **Language**: C++ (C++14/17 Standard)
- **Environment**: macOS (Apple Silicon), VS Code
- **Compiler**: g++ (via GCC/Clang)

## 📂 Project Structure
학습 단계별로 디렉토리가 구분되어 있습니다.
- `Lesson2` ~ `Lesson10`: 각 챕터별 예제 코드 및 실습 문제
    - 변수, 연산자, 제어문
    - 배열과 포인터
    - 함수와 메모리 관리 (동적 할당)
    - 파일 분할 컴파일
- `.vscode`: VS Code 빌드/디버그 설정 (`tasks.json`, `launch.json`)

## 🚀 How to Run
VS Code의 Task 기능을 활용하여 빌드 및 실행할 수 있습니다.
1. `.cpp` 파일 열기
2. `Cmd + Shift + B` 로 빌드 작업 선택
    - 단일 파일 빌드
    - (설정된 경우) 프로젝트 전체 빌드
3. 터미널에서 실행
   ```bash
   ./build/프로그램명
   ```

## 📝 Key Learnings
- 포인터와 메모리 구조의 이해
- 배열과 문자열 처리
- 함수의 매개변수 전달 방식 (Call by Value/Reference)
- 동적 메모리 할당 (`new`, `delete`)과 메모리 누수 방지
- 헤더 파일(`.h`)과 소스 파일(`.cpp`) 분리를 통한 모듈화

---
