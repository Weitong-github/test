cd build
# echo $PWD
touch test.log
# cmake ..
# make
time=`date "+%Y-%m-%d:%H:%M:%S"`
echo $time
cmake .. >test.log 2>&1

make >test.log 2>&1
# for file in $PWD/*; do
#     if test -f $file
#     then
#         echo "here"
#         if [ -x $file ];then
#             cd ..
#             echo $file
#             current=`date "+%Y-%m-%d:%H:%M:%S"`
#             echo $current
#             mkdir $current
#             mv $file $PWD/$current 
#         fi  
#     fi    
# done


