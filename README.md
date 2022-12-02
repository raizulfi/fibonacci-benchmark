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
```c
make; ./main_test.out
```
### Results:
![image](https://user-images.githubusercontent.com/114371959/205392893-5877c351-38a6-4614-997a-92398e804029.png)

Both Iterative and Recursive method had the correct and same ouput. We'll be able to move on to benchmarking between them.

# Benchmarking
Now, we can we're able to benchmark the time and space complexity between the two approaches and conclude the faster method.

## Time complexity
For this benchmark, i'll be demosrating for (Nth term) N=40 between the 2 approaches.

### How to run the code:
to run the time complexity, Excute the command below in your terminal:

```c
make time-recursive; make time-iterative
```
results:
![image](https://user-images.githubusercontent.com/114371959/205400044-d14e8f8a-c688-4ccf-8de1-af202e6d6a0f.png)

## Space complexity

### How to run the code:
to run the time complexity, Excute the command below in your terminal:

```c
make time-iterative
./main_b_space_iterative.out
```
```c
make time-recursive
./main_b_space_recursive.out
```

##Result:
![image](https://user-images.githubusercontent.com/114371959/205404595-3ef52b0c-dfe0-4457-ba17-7e03f42da0ee.png)
![image](https://user-images.githubusercontent.com/114371959/205405083-57c2ade4-1495-4a78-9096-a8deca242559.png)

# Conclusion:
From the Results of the benchmarks above, We can conlude that the ***Iterative approach*** for fibonacci sequence take less time and space compared to ***Recurisive approach.*** Although Recursive approach can be seen as more elegant, Iterative is the more effective and appropriate method for fibonacci sequence.
















