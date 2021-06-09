#!bin/sh

vnn_folder=/home/khadas/nbg_unify_yolov3
copy_folder=/home/khadas/npu/aml_npu_app/DDK_6.3.3.4/detect_library/model_code/detect_yolo_v3

rm -rf ${copy_folder}/include/vnn_yolov3.h
#rm -rf ${copy_folder}/include/vnn_post_process.h
#rm -rf ${copy_folder}/include/vnn_pre_process.h
rm -rf ${copy_folder}/vnn_yolov3.c
rm -rf ${copy_folder}/yolov3_88.nb
 

cp -arf ${vnn_folder}/vnn_yolov3.h ${copy_folder}/include/
#cp -arf ${vnn_folder}/vnn_post_process.h ${copy_folder}/include/
#cp -arf ${vnn_folder}/vnn_pre_process.h ${copy_folder}/include/
cp -arf ${vnn_folder}/vnn_yolov3.c ${copy_folder}/
cp -arf ${vnn_folder}/yolov3.nb  ${copy_folder}/nn_data/yolov3_88.nb



