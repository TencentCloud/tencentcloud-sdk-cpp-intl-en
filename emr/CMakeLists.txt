#
# Copyright (c) 2017-2025 Tencent. All Rights Reserved.
#
# Licensed under the Apache License, Version 2.0 (the "License");
# you may not use this file except in compliance with the License.
# You may obtain a copy of the License at
#
#    http://www.apache.org/licenses/LICENSE-2.0
#
# Unless required by applicable law or agreed to in writing, software
# distributed under the License is distributed on an "AS IS" BASIS,
# WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
# See the License for the specific language governing permissions and
# limitations under the License.
#

set(emr_public_header
  include/tencentcloud/emr/v20190103/EmrClient.h
  )

set(emr_public_header_model
  include/tencentcloud/emr/v20190103/model/PodSpecInfo.h
  include/tencentcloud/emr/v20190103/model/ScaleOutInstanceResponse.h
  include/tencentcloud/emr/v20190103/model/ModifyUserManagerPwdResponse.h
  include/tencentcloud/emr/v20190103/model/PodVolume.h
  include/tencentcloud/emr/v20190103/model/CreateInstanceResponse.h
  include/tencentcloud/emr/v20190103/model/TerminateTasksRequest.h
  include/tencentcloud/emr/v20190103/model/HostVolumeContext.h
  include/tencentcloud/emr/v20190103/model/ScaleOutClusterRequest.h
  include/tencentcloud/emr/v20190103/model/DiskSpecInfo.h
  include/tencentcloud/emr/v20190103/model/HiveQuery.h
  include/tencentcloud/emr/v20190103/model/KeyValue.h
  include/tencentcloud/emr/v20190103/model/DescribeInstancesResponse.h
  include/tencentcloud/emr/v20190103/model/UserManagerFilter.h
  include/tencentcloud/emr/v20190103/model/DynamicPodSpec.h
  include/tencentcloud/emr/v20190103/model/ModifySLInstanceBasicRequest.h
  include/tencentcloud/emr/v20190103/model/SLInstanceInfo.h
  include/tencentcloud/emr/v20190103/model/ModifyUserManagerPwdRequest.h
  include/tencentcloud/emr/v20190103/model/COSSettings.h
  include/tencentcloud/emr/v20190103/model/ClusterInstancesInfo.h
  include/tencentcloud/emr/v20190103/model/CreateSLInstanceRequest.h
  include/tencentcloud/emr/v20190103/model/ScaleOutInstanceRequest.h
  include/tencentcloud/emr/v20190103/model/ZoneDetailPriceResult.h
  include/tencentcloud/emr/v20190103/model/PodNewSpec.h
  include/tencentcloud/emr/v20190103/model/NodeResourceSpec.h
  include/tencentcloud/emr/v20190103/model/ModifyResourceScheduleConfigResponse.h
  include/tencentcloud/emr/v20190103/model/TopologyInfo.h
  include/tencentcloud/emr/v20190103/model/NodeDetailPriceResult.h
  include/tencentcloud/emr/v20190103/model/Tag.h
  include/tencentcloud/emr/v20190103/model/ClusterIDToFlowID.h
  include/tencentcloud/emr/v20190103/model/EmrListInstance.h
  include/tencentcloud/emr/v20190103/model/AddUsersForUserManagerResponse.h
  include/tencentcloud/emr/v20190103/model/EmrProductConfigOutter.h
  include/tencentcloud/emr/v20190103/model/VPCSettings.h
  include/tencentcloud/emr/v20190103/model/CustomServiceDefine.h
  include/tencentcloud/emr/v20190103/model/TerminateTasksResponse.h
  include/tencentcloud/emr/v20190103/model/PrePaySetting.h
  include/tencentcloud/emr/v20190103/model/PartDetailPriceItem.h
  include/tencentcloud/emr/v20190103/model/DependService.h
  include/tencentcloud/emr/v20190103/model/PodSpec.h
  include/tencentcloud/emr/v20190103/model/InquiryPriceRenewInstanceResponse.h
  include/tencentcloud/emr/v20190103/model/InquiryPriceCreateInstanceResponse.h
  include/tencentcloud/emr/v20190103/model/StartStopServiceOrMonitorRequest.h
  include/tencentcloud/emr/v20190103/model/TerminateInstanceRequest.h
  include/tencentcloud/emr/v20190103/model/AutoScaleRecord.h
  include/tencentcloud/emr/v20190103/model/DescribeResourceScheduleRequest.h
  include/tencentcloud/emr/v20190103/model/ZoneSetting.h
  include/tencentcloud/emr/v20190103/model/Placement.h
  include/tencentcloud/emr/v20190103/model/PodParameter.h
  include/tencentcloud/emr/v20190103/model/AllNodeResourceSpec.h
  include/tencentcloud/emr/v20190103/model/DescribeUsersForUserManagerRequest.h
  include/tencentcloud/emr/v20190103/model/TerminateClusterNodesResponse.h
  include/tencentcloud/emr/v20190103/model/StrategyConfig.h
  include/tencentcloud/emr/v20190103/model/StartStopServiceOrMonitorResponse.h
  include/tencentcloud/emr/v20190103/model/MultiDisk.h
  include/tencentcloud/emr/v20190103/model/PodNewParameter.h
  include/tencentcloud/emr/v20190103/model/SearchItem.h
  include/tencentcloud/emr/v20190103/model/ModifyResourcesTagsResponse.h
  include/tencentcloud/emr/v20190103/model/ScaleOutServiceConfGroupsInfo.h
  include/tencentcloud/emr/v20190103/model/CreateSLInstanceResponse.h
  include/tencentcloud/emr/v20190103/model/MultiZoneSetting.h
  include/tencentcloud/emr/v20190103/model/TerminateInstanceResponse.h
  include/tencentcloud/emr/v20190103/model/InquiryPriceUpdateInstanceResponse.h
  include/tencentcloud/emr/v20190103/model/NewResourceSpec.h
  include/tencentcloud/emr/v20190103/model/PersistentVolumeContext.h
  include/tencentcloud/emr/v20190103/model/ScaleOutNodeConfig.h
  include/tencentcloud/emr/v20190103/model/ModifyResourceTags.h
  include/tencentcloud/emr/v20190103/model/PriceDetail.h
  include/tencentcloud/emr/v20190103/model/DescribeResourceScheduleResponse.h
  include/tencentcloud/emr/v20190103/model/DescribeHiveQueriesResponse.h
  include/tencentcloud/emr/v20190103/model/NodeRenewPriceDetail.h
  include/tencentcloud/emr/v20190103/model/RenewPriceDetail.h
  include/tencentcloud/emr/v20190103/model/ModifyResourceSchedulerRequest.h
  include/tencentcloud/emr/v20190103/model/LoginSettings.h
  include/tencentcloud/emr/v20190103/model/PriceResource.h
  include/tencentcloud/emr/v20190103/model/ModifySLInstanceRequest.h
  include/tencentcloud/emr/v20190103/model/DescribeHiveQueriesRequest.h
  include/tencentcloud/emr/v20190103/model/CreateClusterResponse.h
  include/tencentcloud/emr/v20190103/model/DescribeAutoScaleRecordsResponse.h
  include/tencentcloud/emr/v20190103/model/DescribeSLInstanceListRequest.h
  include/tencentcloud/emr/v20190103/model/CreateClusterRequest.h
  include/tencentcloud/emr/v20190103/model/SubnetInfo.h
  include/tencentcloud/emr/v20190103/model/DescribeClusterNodesRequest.h
  include/tencentcloud/emr/v20190103/model/ComponentBasicRestartInfo.h
  include/tencentcloud/emr/v20190103/model/CreateInstanceRequest.h
  include/tencentcloud/emr/v20190103/model/DescribeSLInstanceListResponse.h
  include/tencentcloud/emr/v20190103/model/UpdateInstanceSettings.h
  include/tencentcloud/emr/v20190103/model/DescribeSLInstanceResponse.h
  include/tencentcloud/emr/v20190103/model/ScriptBootstrapActionConfig.h
  include/tencentcloud/emr/v20190103/model/DescribeInstancesRequest.h
  include/tencentcloud/emr/v20190103/model/TerminateSLInstanceResponse.h
  include/tencentcloud/emr/v20190103/model/InquiryPriceUpdateInstanceRequest.h
  include/tencentcloud/emr/v20190103/model/TerminateClusterNodesRequest.h
  include/tencentcloud/emr/v20190103/model/DescribeInstancesListRequest.h
  include/tencentcloud/emr/v20190103/model/OutterResource.h
  include/tencentcloud/emr/v20190103/model/OpScope.h
  include/tencentcloud/emr/v20190103/model/DescribeInstancesListResponse.h
  include/tencentcloud/emr/v20190103/model/Period.h
  include/tencentcloud/emr/v20190103/model/DescribeEmrApplicationStaticsRequest.h
  include/tencentcloud/emr/v20190103/model/DescribeUsersForUserManagerResponse.h
  include/tencentcloud/emr/v20190103/model/InquiryPriceRenewInstanceRequest.h
  include/tencentcloud/emr/v20190103/model/CdbInfo.h
  include/tencentcloud/emr/v20190103/model/ModifyResourcesTagsRequest.h
  include/tencentcloud/emr/v20190103/model/MultiDiskMC.h
  include/tencentcloud/emr/v20190103/model/AddUsersForUserManagerRequest.h
  include/tencentcloud/emr/v20190103/model/ZoneResourceConfiguration.h
  include/tencentcloud/emr/v20190103/model/DescribeSLInstanceRequest.h
  include/tencentcloud/emr/v20190103/model/CustomMetaInfo.h
  include/tencentcloud/emr/v20190103/model/ApplicationStatics.h
  include/tencentcloud/emr/v20190103/model/InquiryPriceCreateInstanceRequest.h
  include/tencentcloud/emr/v20190103/model/DescribeClusterNodesResponse.h
  include/tencentcloud/emr/v20190103/model/ModifyResourceScheduleConfigRequest.h
  include/tencentcloud/emr/v20190103/model/UserInfoForUserManager.h
  include/tencentcloud/emr/v20190103/model/ScaleOutClusterResponse.h
  include/tencentcloud/emr/v20190103/model/ExternalService.h
  include/tencentcloud/emr/v20190103/model/PreExecuteFileSettings.h
  include/tencentcloud/emr/v20190103/model/ClusterExternalServiceInfo.h
  include/tencentcloud/emr/v20190103/model/SoftDependInfo.h
  include/tencentcloud/emr/v20190103/model/TerminateSLInstanceRequest.h
  include/tencentcloud/emr/v20190103/model/InquiryPriceScaleOutInstanceRequest.h
  include/tencentcloud/emr/v20190103/model/ModifySLInstanceResponse.h
  include/tencentcloud/emr/v20190103/model/Resource.h
  include/tencentcloud/emr/v20190103/model/DescribeEmrApplicationStaticsResponse.h
  include/tencentcloud/emr/v20190103/model/CustomMetaDBInfo.h
  include/tencentcloud/emr/v20190103/model/UserManagerUserBriefInfo.h
  include/tencentcloud/emr/v20190103/model/ModifySLInstanceBasicResponse.h
  include/tencentcloud/emr/v20190103/model/InquiryPriceScaleOutInstanceResponse.h
  include/tencentcloud/emr/v20190103/model/ModifyResourceSchedulerResponse.h
  include/tencentcloud/emr/v20190103/model/VirtualPrivateCloud.h
  include/tencentcloud/emr/v20190103/model/SceneSoftwareConfig.h
  include/tencentcloud/emr/v20190103/model/ShortNodeInfo.h
  include/tencentcloud/emr/v20190103/model/EmrPrice.h
  include/tencentcloud/emr/v20190103/model/NodeHardwareInfo.h
  include/tencentcloud/emr/v20190103/model/ServiceBasicRestartInfo.h
  include/tencentcloud/emr/v20190103/model/DescribeAutoScaleRecordsRequest.h
  include/tencentcloud/emr/v20190103/model/Filters.h
  include/tencentcloud/emr/v20190103/model/InstanceChargePrepaid.h
  )

set(emr_src
  src/v20190103/EmrClient.cpp
  src/v20190103/model/PodSpecInfo.cpp
  src/v20190103/model/ScaleOutInstanceResponse.cpp
  src/v20190103/model/ModifyUserManagerPwdResponse.cpp
  src/v20190103/model/PodVolume.cpp
  src/v20190103/model/CreateInstanceResponse.cpp
  src/v20190103/model/TerminateTasksRequest.cpp
  src/v20190103/model/HostVolumeContext.cpp
  src/v20190103/model/ScaleOutClusterRequest.cpp
  src/v20190103/model/DiskSpecInfo.cpp
  src/v20190103/model/HiveQuery.cpp
  src/v20190103/model/KeyValue.cpp
  src/v20190103/model/DescribeInstancesResponse.cpp
  src/v20190103/model/UserManagerFilter.cpp
  src/v20190103/model/DynamicPodSpec.cpp
  src/v20190103/model/ModifySLInstanceBasicRequest.cpp
  src/v20190103/model/SLInstanceInfo.cpp
  src/v20190103/model/ModifyUserManagerPwdRequest.cpp
  src/v20190103/model/COSSettings.cpp
  src/v20190103/model/ClusterInstancesInfo.cpp
  src/v20190103/model/CreateSLInstanceRequest.cpp
  src/v20190103/model/ScaleOutInstanceRequest.cpp
  src/v20190103/model/ZoneDetailPriceResult.cpp
  src/v20190103/model/PodNewSpec.cpp
  src/v20190103/model/NodeResourceSpec.cpp
  src/v20190103/model/ModifyResourceScheduleConfigResponse.cpp
  src/v20190103/model/TopologyInfo.cpp
  src/v20190103/model/NodeDetailPriceResult.cpp
  src/v20190103/model/Tag.cpp
  src/v20190103/model/ClusterIDToFlowID.cpp
  src/v20190103/model/EmrListInstance.cpp
  src/v20190103/model/AddUsersForUserManagerResponse.cpp
  src/v20190103/model/EmrProductConfigOutter.cpp
  src/v20190103/model/VPCSettings.cpp
  src/v20190103/model/CustomServiceDefine.cpp
  src/v20190103/model/TerminateTasksResponse.cpp
  src/v20190103/model/PrePaySetting.cpp
  src/v20190103/model/PartDetailPriceItem.cpp
  src/v20190103/model/DependService.cpp
  src/v20190103/model/PodSpec.cpp
  src/v20190103/model/InquiryPriceRenewInstanceResponse.cpp
  src/v20190103/model/InquiryPriceCreateInstanceResponse.cpp
  src/v20190103/model/StartStopServiceOrMonitorRequest.cpp
  src/v20190103/model/TerminateInstanceRequest.cpp
  src/v20190103/model/AutoScaleRecord.cpp
  src/v20190103/model/DescribeResourceScheduleRequest.cpp
  src/v20190103/model/ZoneSetting.cpp
  src/v20190103/model/Placement.cpp
  src/v20190103/model/PodParameter.cpp
  src/v20190103/model/AllNodeResourceSpec.cpp
  src/v20190103/model/DescribeUsersForUserManagerRequest.cpp
  src/v20190103/model/TerminateClusterNodesResponse.cpp
  src/v20190103/model/StrategyConfig.cpp
  src/v20190103/model/StartStopServiceOrMonitorResponse.cpp
  src/v20190103/model/MultiDisk.cpp
  src/v20190103/model/PodNewParameter.cpp
  src/v20190103/model/SearchItem.cpp
  src/v20190103/model/ModifyResourcesTagsResponse.cpp
  src/v20190103/model/ScaleOutServiceConfGroupsInfo.cpp
  src/v20190103/model/CreateSLInstanceResponse.cpp
  src/v20190103/model/MultiZoneSetting.cpp
  src/v20190103/model/TerminateInstanceResponse.cpp
  src/v20190103/model/InquiryPriceUpdateInstanceResponse.cpp
  src/v20190103/model/NewResourceSpec.cpp
  src/v20190103/model/PersistentVolumeContext.cpp
  src/v20190103/model/ScaleOutNodeConfig.cpp
  src/v20190103/model/ModifyResourceTags.cpp
  src/v20190103/model/PriceDetail.cpp
  src/v20190103/model/DescribeResourceScheduleResponse.cpp
  src/v20190103/model/DescribeHiveQueriesResponse.cpp
  src/v20190103/model/NodeRenewPriceDetail.cpp
  src/v20190103/model/RenewPriceDetail.cpp
  src/v20190103/model/ModifyResourceSchedulerRequest.cpp
  src/v20190103/model/LoginSettings.cpp
  src/v20190103/model/PriceResource.cpp
  src/v20190103/model/ModifySLInstanceRequest.cpp
  src/v20190103/model/DescribeHiveQueriesRequest.cpp
  src/v20190103/model/CreateClusterResponse.cpp
  src/v20190103/model/DescribeAutoScaleRecordsResponse.cpp
  src/v20190103/model/DescribeSLInstanceListRequest.cpp
  src/v20190103/model/CreateClusterRequest.cpp
  src/v20190103/model/SubnetInfo.cpp
  src/v20190103/model/DescribeClusterNodesRequest.cpp
  src/v20190103/model/ComponentBasicRestartInfo.cpp
  src/v20190103/model/CreateInstanceRequest.cpp
  src/v20190103/model/DescribeSLInstanceListResponse.cpp
  src/v20190103/model/UpdateInstanceSettings.cpp
  src/v20190103/model/DescribeSLInstanceResponse.cpp
  src/v20190103/model/ScriptBootstrapActionConfig.cpp
  src/v20190103/model/DescribeInstancesRequest.cpp
  src/v20190103/model/TerminateSLInstanceResponse.cpp
  src/v20190103/model/InquiryPriceUpdateInstanceRequest.cpp
  src/v20190103/model/TerminateClusterNodesRequest.cpp
  src/v20190103/model/DescribeInstancesListRequest.cpp
  src/v20190103/model/OutterResource.cpp
  src/v20190103/model/OpScope.cpp
  src/v20190103/model/DescribeInstancesListResponse.cpp
  src/v20190103/model/Period.cpp
  src/v20190103/model/DescribeEmrApplicationStaticsRequest.cpp
  src/v20190103/model/DescribeUsersForUserManagerResponse.cpp
  src/v20190103/model/InquiryPriceRenewInstanceRequest.cpp
  src/v20190103/model/CdbInfo.cpp
  src/v20190103/model/ModifyResourcesTagsRequest.cpp
  src/v20190103/model/MultiDiskMC.cpp
  src/v20190103/model/AddUsersForUserManagerRequest.cpp
  src/v20190103/model/ZoneResourceConfiguration.cpp
  src/v20190103/model/DescribeSLInstanceRequest.cpp
  src/v20190103/model/CustomMetaInfo.cpp
  src/v20190103/model/ApplicationStatics.cpp
  src/v20190103/model/InquiryPriceCreateInstanceRequest.cpp
  src/v20190103/model/DescribeClusterNodesResponse.cpp
  src/v20190103/model/ModifyResourceScheduleConfigRequest.cpp
  src/v20190103/model/UserInfoForUserManager.cpp
  src/v20190103/model/ScaleOutClusterResponse.cpp
  src/v20190103/model/ExternalService.cpp
  src/v20190103/model/PreExecuteFileSettings.cpp
  src/v20190103/model/ClusterExternalServiceInfo.cpp
  src/v20190103/model/SoftDependInfo.cpp
  src/v20190103/model/TerminateSLInstanceRequest.cpp
  src/v20190103/model/InquiryPriceScaleOutInstanceRequest.cpp
  src/v20190103/model/ModifySLInstanceResponse.cpp
  src/v20190103/model/Resource.cpp
  src/v20190103/model/DescribeEmrApplicationStaticsResponse.cpp
  src/v20190103/model/CustomMetaDBInfo.cpp
  src/v20190103/model/UserManagerUserBriefInfo.cpp
  src/v20190103/model/ModifySLInstanceBasicResponse.cpp
  src/v20190103/model/InquiryPriceScaleOutInstanceResponse.cpp
  src/v20190103/model/ModifyResourceSchedulerResponse.cpp
  src/v20190103/model/VirtualPrivateCloud.cpp
  src/v20190103/model/SceneSoftwareConfig.cpp
  src/v20190103/model/ShortNodeInfo.cpp
  src/v20190103/model/EmrPrice.cpp
  src/v20190103/model/NodeHardwareInfo.cpp
  src/v20190103/model/ServiceBasicRestartInfo.cpp
  src/v20190103/model/DescribeAutoScaleRecordsRequest.cpp
  src/v20190103/model/Filters.cpp
  src/v20190103/model/InstanceChargePrepaid.cpp
  )

set(emr_include
    include/tencentcloud/emr
  )

add_library(emr ${LIB_TYPE}
  ${emr_public_header}
  ${emr_public_header_model}
  ${emr_src})

set_target_properties(emr
  PROPERTIES
  LINKER_LANGUAGE CXX
  ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
  LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
  RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin
  OUTPUT_NAME ${TARGET_OUTPUT_NAME_PREFIX}emr
  )

target_include_directories(emr
  PRIVATE include
    ${CMAKE_SOURCE_DIR}/core/include
  )
target_link_libraries(emr
  core)

#install(FILES ${emr_public_header}
#  DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/tencentcloud/emr/v20190103)
#install(FILES ${emr_public_header_model}
#  DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/tencentcloud/emr/v20190103/model)
install(DIRECTORY ${emr_include}
  DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/tencentcloud)

install(TARGETS emr
  ARCHIVE DESTINATION ${CMAKE_INSTALL_LIBDIR}
  LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
  RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
  )
