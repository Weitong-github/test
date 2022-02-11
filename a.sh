cd build
# echo $PWD
for file in $PWD/*; do
    if test -f $file
    then
        echo "here"
        if [ -x $file ];then
            cd ..
            echo $file
            current=`date "+%Y-%m-%d:%H:%M:%S"`
            echo $current
            mkdir $current
            mv $file $PWD/$current 
        fi
    fi    
    
done


