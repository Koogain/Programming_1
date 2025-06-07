/* 파일명: Assignmment_18.c

 * 내용: 음원 사이트의 플레이리스트 기능을 구현하려고 한다. 이미 등록된 SONG 구조체 배열이 있을 때,
		 전체 곡 목록을 보여주고 사용자로부터 플레이리스트에 추가할 노래를 번호로 선택하게 한다.
		 플레이리스트에 노래를 추가할 때마다 플레이리스트의 곡 목록과 전체 재생 시간이 얼마인지 출력한다.
		 플레이리스트에는 최대 5곡만 등록할 수 있다.

 * 작성자: 구가인

 * 날짜: 2025.06.07

 * 버전: v1.0

 */
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

#define MAX_SONGS 10
#define MAX_PLAYLIST 5
#define TITLE_LEN 50
#define ARTIST_LEN 30
#define GENRE_LEN 20

 // SONG 구조체 정의
struct SONG {
    char title[TITLE_LEN];
    char artist[ARTIST_LEN];
    char genre[GENRE_LEN];
    int duration;
};

// 함수 선언
void initializeSongs(struct SONG songs[]);
void printAllSongs(struct SONG songs[], int size);
void printPlaylist(struct SONG playlist[], int count);
int selectSongIndex(void);
void addSongToPlaylist(struct SONG songs[], struct SONG playlist[], int choice, int* count, int* totalTime);

int main(void) {
    struct SONG songs[MAX_SONGS];
    struct SONG playlist[MAX_PLAYLIST];
    int playlistCount = 0;
    int totalTime = 0;

    // 1. 곡 목록 초기화
    initializeSongs(songs);

    // 2. 반복적으로 곡 선택 및 플레이리스트 추가
    while (playlistCount < MAX_PLAYLIST) {
        // 2-1. 곡 목록 출력
        printAllSongs(songs, MAX_SONGS);

        // 2-2. 사용자 선택
        int choice = selectSongIndex();
        if (choice < 0 || choice >= MAX_SONGS) {
            printf("잘못된 번호입니다. 다시 선택하세요.\n\n");
            continue;
        }

        // 2-3. 곡 추가
        addSongToPlaylist(songs, playlist, choice, &playlistCount, &totalTime);

        // 2-4. 플레이리스트 출력
        printf("\n<<플레이 리스트>>\n");
        printPlaylist(playlist, playlistCount);
        printf("총 재생 시간: %d초\n\n", totalTime);
    }

    // 3. 종료 메시지
    printf("플레이리스트가 가득 찼습니다.\n");

    return 0;
}

// 곡 목록 초기화 함수
void initializeSongs(struct SONG songs[]) {
    strcpy(songs[0].title, "FEARLESS");
    strcpy(songs[0].artist, "LE SSERAFIM");
    strcpy(songs[0].genre, "Pop");
    songs[0].duration = 177;

    strcpy(songs[1].title, "ANTIFRAGILE");
    strcpy(songs[1].artist, "LE SSERAFIM");
    strcpy(songs[1].genre, "Latin Pop");
    songs[1].duration = 181;

    strcpy(songs[2].title, "UNFORGIVEN");
    strcpy(songs[2].artist, "LE SSERAFIM");
    strcpy(songs[2].genre, "Hip-hop");
    songs[2].duration = 188;

    strcpy(songs[3].title, "Perfect Night");
    strcpy(songs[3].artist, "LE SSERAFIM");
    strcpy(songs[3].genre, "Dance");
    songs[3].duration = 189;

    strcpy(songs[4].title, "No Celestial");
    strcpy(songs[4].artist, "LE SSERAFIM");
    strcpy(songs[4].genre, "Rock");
    songs[4].duration = 174;

    strcpy(songs[5].title, "Blue Flame");
    strcpy(songs[5].artist, "LE SSERAFIM");
    strcpy(songs[5].genre, "Pop");
    songs[5].duration = 179;

    strcpy(songs[6].title, "Eve, Psyche...");
    strcpy(songs[6].artist, "LE SSERAFIM");
    strcpy(songs[6].genre, "Electronic");
    songs[6].duration = 182;

    strcpy(songs[7].title, "Smart");
    strcpy(songs[7].artist, "LE SSERAFIM");
    strcpy(songs[7].genre, "Alt Pop");
    songs[7].duration = 173;

    strcpy(songs[8].title, "Flash Forward");
    strcpy(songs[8].artist, "LE SSERAFIM");
    strcpy(songs[8].genre, "K-Pop");
    songs[8].duration = 180;

    strcpy(songs[9].title, "The Great Mermaid");
    strcpy(songs[9].artist, "LE SSERAFIM");
    strcpy(songs[9].genre, "Myth Pop");
    songs[9].duration = 192;
}

// 곡 목록 출력 함수
void printAllSongs(struct SONG songs[], int size) {
    printf("\n[르세라핌 곡 목록]\n");
    printf("번호 | 제목                     | 아티스트        | 장르         | 재생시간\n");
    printf("-----------------------------------------------------------------------\n");
    for (int i = 0; i < size; i++) {
        printf("%2d   | %-24s | %-14s | %-11s | %3d초\n",
            i, songs[i].title, songs[i].artist, songs[i].genre, songs[i].duration);
    }
    printf("\n");
}

// 플레이리스트 출력 함수
void printPlaylist(struct SONG playlist[], int count) {
    printf("제목                     | 아티스트        | 장르         | 재생시간\n");
    printf("-------------------------------------------------------------\n");
    for (int i = 0; i < count; i++) {
        printf("%-24s | %-14s | %-11s | %3d초\n",
            playlist[i].title,
            playlist[i].artist,
            playlist[i].genre,
            playlist[i].duration);
    }
}

// 사용자 입력 함수
int selectSongIndex(void) {
    int choice;
    printf("플레이리스트에 추가할 곡 번호를 선택하세요 (0 ~ 9): ");
    scanf("%d", &choice);
    return choice;
}

// 곡 추가 함수
void addSongToPlaylist(struct SONG songs[], struct SONG playlist[], int choice, int* count, int* totalTime) {
    playlist[*count] = songs[choice];
    *totalTime += songs[choice].duration;
    (*count)++;
}

