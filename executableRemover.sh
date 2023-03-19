echo "Enter the path of the directory where you want the script to run"
read dir
for file in $dir/*;
do
	if [ -f $file ]
	then
		#echo $file
		if [[ ${file##*.} == $file ]]
		then
				rm $file
		fi
	fi
done;
