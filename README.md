# Simple Delay Commandline Tool

Displays delay between inputs from stdin. Written in C language. Will display stdout like 
```asm
[<seconds>:<milliseconds>] <stdin>
```

## Basic Usage 
Pipe std to command line tool. 
```asm
$ journalctl -f | ms
```

## Build 
```asm
$ gcc main.c -o ms 
$ mv ms /usr/local/bin
```