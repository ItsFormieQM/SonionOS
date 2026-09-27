void printf(char msg[], int msg_length) {
    msg_length = 0;
    volatile char *video_memory = (volatile char*) 0xB8000;
    while (1) {
        msg_length++;
        video_memory[0] = msg[msg_length];
    }
}