#!/bin/bash
length=0
photo_num=204
for((i=4;i<15;i++)) #first loop,traverse all directory
do
    length=$(grep '.' ./sunset$i/time.txt)
    for((time=8;time<`expr $length - 5`;time+=2)) #set time laspe time
    do
    ./seamlessStitch -root_dir="/Users/edward/Downloads/lab_wen/7.21-7.23/sunset/sunset$i" -lags="0 0 0 0 " -calib="0.0, -0.068747, 0.0, 0.0148392, 0.0, -0.0012501" -fov=190 -fovH=130 -R="1628.8443, 1632.0194, 1632.019, 1614.027" -offsetX="0.5 37.5 -11 45" -offsetY="98 92 114 105.5" -eqr_width=3840 -eqr_height=2160 -side_flow_alg="pixflow_low" -videoLength=1 -use_rotate=true -num_cams=4 -middle_results_frm=-1 -in_framerate=1 -start_time=`expr $time \* 30`
    photo_num=`expr $photo_num + 1`
    mv /Users/edward/Downloads/lab_wen/7.21-7.23/sunset/sunset$i/eqr_frames_cam/*000000.png /Users/edward/Downloads/lab_wen/7.21-7.23/sunset/final/$photo_num.png
    rm -r /Users/edward/Downloads/lab_wen/7.21-7.23/sunset/sunset$i/eqr_frames_cam
    done
done
