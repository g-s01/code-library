# Stress Testing Tools

## What is Stress Testing in the first place?

Normally if you have a WA on a submission of yours on a problem, what do you do? You look for cases where your code fails,
this is formally known as **stress testing**.

## How to do Stress Test a submission?

This is what this folder is all about. Normally, one would come up with a counter-example to a submission manually, but 
to save time, one can run scripts with randomly generated test cases to find the fault in one's submission.

So, we can automate this process in two ways
1. one unique solution exists to the problem
2. multiple solutions exist to the problem
	
I think the latter case is more general and we can always modify the checker to validate the former case.

Coming to the actual usage: 
1. write a logic to generate random testcases according to the question in **generator.cpp**
2. normally one writes a validator to validate if the test cases generated are correct or not, but I skip this step, because I write my generator quite carefully
3. give the test cases generated as input to your solution and also, a brute force solution which however slow be it,must produce the correct solution to the problem, write this program in **bruteForce.cpp**
4. if only a unique solution exists to the problem, compare output of both the solutions (your WA and brute force), else write an efficient checker to validate your output in **checker.cpp**
5. start running the tests by executing the **stressTest.sh**
6. in case a WA is encountered, stop the processing and report the test case on which the solution fails

### Further Reading
1. [Nice Blog](https://ali-ibrahim137.github.io/competitive/programming/2020/08/23/Stress-Testing.html)
2. [USACO Guide](https://usaco.guide/general/basic-debugging?lang=cpp)
