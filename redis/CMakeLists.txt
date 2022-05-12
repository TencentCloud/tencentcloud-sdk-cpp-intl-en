#
# Copyright (c) 2017-2019 THL A29 Limited, a Tencent company. All Rights Reserved.
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

set(redis_public_header
  include/tencentcloud/redis/v20180412/RedisClient.h
  )

set(redis_public_header_model
  include/tencentcloud/redis/v20180412/model/ChangeReplicaToMasterRequest.h
  include/tencentcloud/redis/v20180412/model/ReleaseWanAddressRequest.h
  include/tencentcloud/redis/v20180412/model/ProxyNodes.h
  include/tencentcloud/redis/v20180412/model/DescribeInstanceMonitorTopNCmdTookRequest.h
  include/tencentcloud/redis/v20180412/model/Instances.h
  include/tencentcloud/redis/v20180412/model/DescribeInstanceMonitorBigKeySizeDistResponse.h
  include/tencentcloud/redis/v20180412/model/DescribeInstanceMonitorTookDistRequest.h
  include/tencentcloud/redis/v20180412/model/DescribeInstanceMonitorHotKeyRequest.h
  include/tencentcloud/redis/v20180412/model/AllocateWanAddressRequest.h
  include/tencentcloud/redis/v20180412/model/DescribeInstanceMonitorBigKeyTypeDistRequest.h
  include/tencentcloud/redis/v20180412/model/InquiryPriceCreateInstanceRequest.h
  include/tencentcloud/redis/v20180412/model/DescribeProductInfoResponse.h
  include/tencentcloud/redis/v20180412/model/DescribeMaintenanceWindowResponse.h
  include/tencentcloud/redis/v20180412/model/ReleaseWanAddressResponse.h
  include/tencentcloud/redis/v20180412/model/ProductConf.h
  include/tencentcloud/redis/v20180412/model/BigKeyTypeInfo.h
  include/tencentcloud/redis/v20180412/model/DescribeInstanceNodeInfoRequest.h
  include/tencentcloud/redis/v20180412/model/DescribeMaintenanceWindowRequest.h
  include/tencentcloud/redis/v20180412/model/CommandTake.h
  include/tencentcloud/redis/v20180412/model/DescribeInstanceMonitorBigKeyResponse.h
  include/tencentcloud/redis/v20180412/model/InquiryPriceCreateInstanceResponse.h
  include/tencentcloud/redis/v20180412/model/RedisNodes.h
  include/tencentcloud/redis/v20180412/model/InquiryPriceUpgradeInstanceRequest.h
  include/tencentcloud/redis/v20180412/model/DelayDistribution.h
  include/tencentcloud/redis/v20180412/model/DescribeSlowLogResponse.h
  include/tencentcloud/redis/v20180412/model/Groups.h
  include/tencentcloud/redis/v20180412/model/DescribeInstanceMonitorTookDistResponse.h
  include/tencentcloud/redis/v20180412/model/DescribeInstanceAccountResponse.h
  include/tencentcloud/redis/v20180412/model/DescribeInstanceMonitorBigKeyRequest.h
  include/tencentcloud/redis/v20180412/model/DescribeInstanceMonitorBigKeyTypeDistResponse.h
  include/tencentcloud/redis/v20180412/model/TendisNodes.h
  include/tencentcloud/redis/v20180412/model/AllocateWanAddressResponse.h
  include/tencentcloud/redis/v20180412/model/RegionConf.h
  include/tencentcloud/redis/v20180412/model/Account.h
  include/tencentcloud/redis/v20180412/model/DescribeProductInfoRequest.h
  include/tencentcloud/redis/v20180412/model/DescribeInstanceMonitorTopNCmdResponse.h
  include/tencentcloud/redis/v20180412/model/SourceCommand.h
  include/tencentcloud/redis/v20180412/model/HotKeyInfo.h
  include/tencentcloud/redis/v20180412/model/BigKeyInfo.h
  include/tencentcloud/redis/v20180412/model/ModfiyInstancePasswordRequest.h
  include/tencentcloud/redis/v20180412/model/DescribeSlowLogRequest.h
  include/tencentcloud/redis/v20180412/model/DescribeInstanceMonitorTopNCmdTookResponse.h
  include/tencentcloud/redis/v20180412/model/DescribeInstanceMonitorBigKeySizeDistRequest.h
  include/tencentcloud/redis/v20180412/model/DescribeInstanceAccountRequest.h
  include/tencentcloud/redis/v20180412/model/InquiryPriceUpgradeInstanceResponse.h
  include/tencentcloud/redis/v20180412/model/DescribeInstanceMonitorSIPResponse.h
  include/tencentcloud/redis/v20180412/model/SourceInfo.h
  include/tencentcloud/redis/v20180412/model/DescribeInstanceMonitorSIPRequest.h
  include/tencentcloud/redis/v20180412/model/ChangeReplicaToMasterResponse.h
  include/tencentcloud/redis/v20180412/model/ZoneCapacityConf.h
  include/tencentcloud/redis/v20180412/model/DescribeInstanceNodeInfoResponse.h
  include/tencentcloud/redis/v20180412/model/DescribeReplicationGroupRequest.h
  include/tencentcloud/redis/v20180412/model/DescribeReplicationGroupResponse.h
  include/tencentcloud/redis/v20180412/model/DescribeInstanceMonitorHotKeyResponse.h
  include/tencentcloud/redis/v20180412/model/DescribeInstanceMonitorTopNCmdRequest.h
  include/tencentcloud/redis/v20180412/model/ModfiyInstancePasswordResponse.h
  include/tencentcloud/redis/v20180412/model/InstanceSlowlogDetail.h
  )

set(redis_src
  src/v20180412/RedisClient.cpp
  src/v20180412/model/ChangeReplicaToMasterRequest.cpp
  src/v20180412/model/ReleaseWanAddressRequest.cpp
  src/v20180412/model/ProxyNodes.cpp
  src/v20180412/model/DescribeInstanceMonitorTopNCmdTookRequest.cpp
  src/v20180412/model/Instances.cpp
  src/v20180412/model/DescribeInstanceMonitorBigKeySizeDistResponse.cpp
  src/v20180412/model/DescribeInstanceMonitorTookDistRequest.cpp
  src/v20180412/model/DescribeInstanceMonitorHotKeyRequest.cpp
  src/v20180412/model/AllocateWanAddressRequest.cpp
  src/v20180412/model/DescribeInstanceMonitorBigKeyTypeDistRequest.cpp
  src/v20180412/model/InquiryPriceCreateInstanceRequest.cpp
  src/v20180412/model/DescribeProductInfoResponse.cpp
  src/v20180412/model/DescribeMaintenanceWindowResponse.cpp
  src/v20180412/model/ReleaseWanAddressResponse.cpp
  src/v20180412/model/ProductConf.cpp
  src/v20180412/model/BigKeyTypeInfo.cpp
  src/v20180412/model/DescribeInstanceNodeInfoRequest.cpp
  src/v20180412/model/DescribeMaintenanceWindowRequest.cpp
  src/v20180412/model/CommandTake.cpp
  src/v20180412/model/DescribeInstanceMonitorBigKeyResponse.cpp
  src/v20180412/model/InquiryPriceCreateInstanceResponse.cpp
  src/v20180412/model/RedisNodes.cpp
  src/v20180412/model/InquiryPriceUpgradeInstanceRequest.cpp
  src/v20180412/model/DelayDistribution.cpp
  src/v20180412/model/DescribeSlowLogResponse.cpp
  src/v20180412/model/Groups.cpp
  src/v20180412/model/DescribeInstanceMonitorTookDistResponse.cpp
  src/v20180412/model/DescribeInstanceAccountResponse.cpp
  src/v20180412/model/DescribeInstanceMonitorBigKeyRequest.cpp
  src/v20180412/model/DescribeInstanceMonitorBigKeyTypeDistResponse.cpp
  src/v20180412/model/TendisNodes.cpp
  src/v20180412/model/AllocateWanAddressResponse.cpp
  src/v20180412/model/RegionConf.cpp
  src/v20180412/model/Account.cpp
  src/v20180412/model/DescribeProductInfoRequest.cpp
  src/v20180412/model/DescribeInstanceMonitorTopNCmdResponse.cpp
  src/v20180412/model/SourceCommand.cpp
  src/v20180412/model/HotKeyInfo.cpp
  src/v20180412/model/BigKeyInfo.cpp
  src/v20180412/model/ModfiyInstancePasswordRequest.cpp
  src/v20180412/model/DescribeSlowLogRequest.cpp
  src/v20180412/model/DescribeInstanceMonitorTopNCmdTookResponse.cpp
  src/v20180412/model/DescribeInstanceMonitorBigKeySizeDistRequest.cpp
  src/v20180412/model/DescribeInstanceAccountRequest.cpp
  src/v20180412/model/InquiryPriceUpgradeInstanceResponse.cpp
  src/v20180412/model/DescribeInstanceMonitorSIPResponse.cpp
  src/v20180412/model/SourceInfo.cpp
  src/v20180412/model/DescribeInstanceMonitorSIPRequest.cpp
  src/v20180412/model/ChangeReplicaToMasterResponse.cpp
  src/v20180412/model/ZoneCapacityConf.cpp
  src/v20180412/model/DescribeInstanceNodeInfoResponse.cpp
  src/v20180412/model/DescribeReplicationGroupRequest.cpp
  src/v20180412/model/DescribeReplicationGroupResponse.cpp
  src/v20180412/model/DescribeInstanceMonitorHotKeyResponse.cpp
  src/v20180412/model/DescribeInstanceMonitorTopNCmdRequest.cpp
  src/v20180412/model/ModfiyInstancePasswordResponse.cpp
  src/v20180412/model/InstanceSlowlogDetail.cpp
  )

set(redis_include
    include/tencentcloud/redis
  )

add_library(redis ${LIB_TYPE}
  ${redis_public_header}
  ${redis_public_header_model}
  ${redis_src})

set_target_properties(redis
  PROPERTIES
  LINKER_LANGUAGE CXX
  ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
  LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
  RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin
  OUTPUT_NAME ${TARGET_OUTPUT_NAME_PREFIX}redis
  )

target_include_directories(redis
  PRIVATE include
    ${CMAKE_SOURCE_DIR}/core/include
  )
target_link_libraries(redis
  core)

#install(FILES ${redis_public_header}
#  DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/tencentcloud/redis/v20180412)
#install(FILES ${redis_public_header_model}
#  DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/tencentcloud/redis/v20180412/model)
install(DIRECTORY ${redis_include}
  DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/tencentcloud)

install(TARGETS redis
  ARCHIVE DESTINATION ${CMAKE_INSTALL_LIBDIR}
  LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
  RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
  )
