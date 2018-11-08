#!/bin/bash
# old zcam
dir=$1
mkdir ${dir}/eqr_frames_cam/*
rm ${dir}/eqr_frames_cam/*
cd ~/cpu/realTimeStitchXCode/seamlessStitch
time ./seamlessStitch -root_dir="${dir}" -lags="0 0 0 0 " -calib="0.0 -0.050924 0.0 0.010992 0.0 -0.000926" -R="1586 1586 1586 1586" -offsetX="-39,21,-25,11.5" -offsetY="109.5,96,109.5,98" -fov=190 -fovH=1 -eqr_width=3840 -eqr_height=1920 -side_flow_alg="pixflow_low" -use_rotate=true -middle_results_frm=1 -start_frame=0 -vframes=10 -downscaleFactor=1 -refresh_period=-1    
# ffmpeg -framerate 30 -i ${dir}/eqr_frames_cam/eqr_%6d.png -pix_fmt yuv420p -c:v libx264 -x264-params qp=19 ${dir}/eqr_frames_cam/test.mp4 -y

