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
	# if there exists multiple answers, use checker
    # ./checker > checker_log
	# else use
	# diff output correctAnswer > /dev/null || break
    echo "Passed test: "  $i
done
