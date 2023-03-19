echo "Enter a name that you would like the new folder to have: "
read contestName
echo "Enter the number of problems in the contest: "
read noProblems
mkdir -p /Users/gautamsharma/Desktop/Ultimate_Push/$contestName
cp -R /Users/gautamsharma/Desktop/Ultimate_Push/AtCoder_Library/atcoder /Users/gautamsharma/Desktop/Ultimate_Push/$contestName/

p1='A'
for(( i=0 ; i<$noProblems ; i++));
do
    touch $p1.cpp
    cp /Users/gautamsharma/Desktop/Ultimate_Push/usefulCodes/Templates/currentTemplate.cpp $p1.cpp
    mv $p1.cpp /Users/gautamsharma/Desktop/Ultimate_Push/$contestName
    p1=$(echo "$p1" | tr "0-9A-Z" "1-9A-Z_")
done
