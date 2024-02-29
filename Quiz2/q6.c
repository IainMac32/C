#include <stdio.h>

#define MAX_ROWS 5
#define MAX_SEATS_PER_ROW 10

//global variables

char seatingChart[MAX_ROWS][MAX_SEATS_PER_ROW]; 
//create 2d array
int totalBookedSeats = 0; 
// Global variable to store total booked seats count


void initializeSeatingChart() {
    for (int i = 0; i < MAX_ROWS; i++) {
        for (int j = 0; j < MAX_SEATS_PER_ROW; j++) {
            seatingChart[i][j] = 'O'; 
        }
    }
}



void displaySeatingChart() {
    printf("Seating Chart:\n");
    printf("  ");
    //this makes the number at the top re represent the number of sets in each row
    for (int j = 0; j < MAX_SEATS_PER_ROW; j++) {
        printf("%d ", j + 1);
    }
    printf("\n");
    

    // this prints the acutally rows (seats) and the letters infront of the rows
    for (int i = 0; i < MAX_ROWS; i++) {
        printf("%d ", i+1);
        // + i makes it the next letter

        for (int j = 0; j < MAX_SEATS_PER_ROW; j++) {
            printf("%c ", seatingChart[i][j]);
            //[i][j] means [row][coloumn]
        }
        printf("\n");
    }
}

int bookSeat(int row, int seat) {
    row -=1;
    seat-=1;
    //I did this so that it matches up with index since index starts at 0
    if (row < 0 || row >= MAX_ROWS || seat < 0 || seat >= MAX_SEATS_PER_ROW) {
        printf("Invalid row or seat number.\n");
        return 0; // Failure
    }

    if (seatingChart[row][seat] == 'O') {
        seatingChart[row][seat] = 'X'; // 'X' represents booked seat
        printf("Seat booked successfully.\n");

        totalBookedSeats++;
        //increment totalBookedSeats

        return 1;
    } else {
        printf("Seat already booked.\n");
        return 0;
    }
}

void displayTotalBookedSeats() {
    printf("Total booked seats: %d\n", totalBookedSeats);
}

int main() {
    initializeSeatingChart(); 
    displaySeatingChart();

    // int row, seat;
    // printf("Enter the row (1-5) then seat number (1-10) you want to book: ");
    // scanf(" %d%d", &row, &seat); 
    // bookSeat(row, seat);


    bookSeat(2,3);
    bookSeat(3,7);
    bookSeat(1,5);



    displaySeatingChart();
    displayTotalBookedSeats();

    return 0;
}
