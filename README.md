# Fibonacci-Benchmark
  
comparing Iterative vs Recursive approach by their time complexity and space complexity on finding the (Nth) Fibonacci number

## What is a Fibonacci sequence?
 
The Fibonacci sequence is a series of numbers that gradually increase in value, with each number equal to the sum of the two numbers before it. The Fibonacci sequence yielded the golden ratio of 1.618. Many natural phenomena have dimensional features that follow the golden ratio of 1.618.

The Diagram below will help give a better understanding on how Fibonacci sequence works:

![The Fibonacci Sequence - Shalom Education](https://www.shalom-education.com/wp-content/uploads/2020/12/image-96.png)

## The 2 Approaches to fibonacci Sequence:
- ***Iterative*** : looping the steps again & again until it reaches the end
```c
int fibonacciIterative(int N){

    int F0 = 0, F1 = 1, F2;

    if (N == 0){
        return F0;
    }
    else if (N == 1){
        return F1;
    } 
    else {
        for(int i=2; i <= N; i++){
            F2 = F0 + F1;
            F0 = F1;
            F1 = F2;
        }
        return F2;
    }
}
```
***Recursive*** : Calling in back the function on itself
```c
int fibonacciRecursive(int N){
    if (N == 0){
        return 0;
    }
    else if (N == 1){
        return 1;
    }
    else{
        return fibonacciRecursive(N-1) + fibonacciRecursive(N-2);
    }
}
```
# Testing
I'll now be testing these codes and checking if they give the desirable output.

### How to run the code:
to run the program, Excute the command below in your terminal:
```
make; ./main_test.out
```
### Results:
