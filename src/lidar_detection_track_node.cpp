/*
 * @Author: xiaohu
 * @Date: 2022-04-03 21:45:28
 * @Last Modified by: xiaohu
 * @Last Modified time: 2022-08-03 21:52:36
 */
#include "lidar_detection_track.h"

int main(int argc, char **argv)
{
    ros::init(argc, argv, "lidar_detection_track_node");
    ros::NodeHandle nh;
    ros::NodeHandle pnh("~");
    lidarPerception core(nh, pnh);

    return 0;
}
