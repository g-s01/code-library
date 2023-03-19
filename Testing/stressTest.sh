# thanks to errichto: https://github.com/Errichto/youtube/blob/master/testing/s.sh

echo "Kindly enter the problem name you want to stress test"
read problemName
set -e
g++ -std=c++17 $problemName.cpp -o $problemName
g++ -std=c++17 generator.cpp -o generator
g++ -std=c++17 bruteForce.cpp -o bruteForce
g++ -std=c++17 checker.cpp -o checker
for((i = 1; ; ++i)); 
do
    ./generator $i > input
    ./$problemName < input > output
    ./bruteForce < input > correctAnswer
    ./checker > checker_log
    echo "Passed test: "  $i
done