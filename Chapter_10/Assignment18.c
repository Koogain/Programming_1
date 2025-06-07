/* ���ϸ�: Assignmment_18.c

 * ����: ���� ����Ʈ�� �÷��̸���Ʈ ����� �����Ϸ��� �Ѵ�. �̹� ��ϵ� SONG ����ü �迭�� ���� ��,
		 ��ü �� ����� �����ְ� ����ڷκ��� �÷��̸���Ʈ�� �߰��� �뷡�� ��ȣ�� �����ϰ� �Ѵ�.
		 �÷��̸���Ʈ�� �뷡�� �߰��� ������ �÷��̸���Ʈ�� �� ��ϰ� ��ü ��� �ð��� ������ ����Ѵ�.
		 �÷��̸���Ʈ���� �ִ� 5� ����� �� �ִ�.

 * �ۼ���: ������

 * ��¥: 2025.06.07

 * ����: v1.0

 */
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

#define MAX_SONGS 10
#define MAX_PLAYLIST 5
#define TITLE_LEN 50
#define ARTIST_LEN 30
#define GENRE_LEN 20

 // SONG ����ü ����
struct SONG {
    char title[TITLE_LEN];
    char artist[ARTIST_LEN];
    char genre[GENRE_LEN];
    int duration;
};

// �Լ� ����
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

    // 1. �� ��� �ʱ�ȭ
    initializeSongs(songs);

    // 2. �ݺ������� �� ���� �� �÷��̸���Ʈ �߰�
    while (playlistCount < MAX_PLAYLIST) {
        // 2-1. �� ��� ���
        printAllSongs(songs, MAX_SONGS);

        // 2-2. ����� ����
        int choice = selectSongIndex();
        if (choice < 0 || choice >= MAX_SONGS) {
            printf("�߸��� ��ȣ�Դϴ�. �ٽ� �����ϼ���.\n\n");
            continue;
        }

        // 2-3. �� �߰�
        addSongToPlaylist(songs, playlist, choice, &playlistCount, &totalTime);

        // 2-4. �÷��̸���Ʈ ���
        printf("\n<<�÷��� ����Ʈ>>\n");
        printPlaylist(playlist, playlistCount);
        printf("�� ��� �ð�: %d��\n\n", totalTime);
    }

    // 3. ���� �޽���
    printf("�÷��̸���Ʈ�� ���� á���ϴ�.\n");

    return 0;
}

// �� ��� �ʱ�ȭ �Լ�
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

// �� ��� ��� �Լ�
void printAllSongs(struct SONG songs[], int size) {
    printf("\n[�������� �� ���]\n");
    printf("��ȣ | ����                     | ��Ƽ��Ʈ        | �帣         | ����ð�\n");
    printf("-----------------------------------------------------------------------\n");
    for (int i = 0; i < size; i++) {
        printf("%2d   | %-24s | %-14s | %-11s | %3d��\n",
            i, songs[i].title, songs[i].artist, songs[i].genre, songs[i].duration);
    }
    printf("\n");
}

// �÷��̸���Ʈ ��� �Լ�
void printPlaylist(struct SONG playlist[], int count) {
    printf("����                     | ��Ƽ��Ʈ        | �帣         | ����ð�\n");
    printf("-------------------------------------------------------------\n");
    for (int i = 0; i < count; i++) {
        printf("%-24s | %-14s | %-11s | %3d��\n",
            playlist[i].title,
            playlist[i].artist,
            playlist[i].genre,
            playlist[i].duration);
    }
}

// ����� �Է� �Լ�
int selectSongIndex(void) {
    int choice;
    printf("�÷��̸���Ʈ�� �߰��� �� ��ȣ�� �����ϼ��� (0 ~ 9): ");
    scanf("%d", &choice);
    return choice;
}

// �� �߰� �Լ�
void addSongToPlaylist(struct SONG songs[], struct SONG playlist[], int choice, int* count, int* totalTime) {
    playlist[*count] = songs[choice];
    *totalTime += songs[choice].duration;
    (*count)++;
}

