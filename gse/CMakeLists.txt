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

set(gse_public_header
  include/tencentcloud/gse/v20191112/GseClient.h
  )

set(gse_public_header_model
  include/tencentcloud/gse/v20191112/model/GameProperty.h
  include/tencentcloud/gse/v20191112/model/DeleteTimerScalingPolicyResponse.h
  include/tencentcloud/gse/v20191112/model/DescribeTimerScalingPoliciesRequest.h
  include/tencentcloud/gse/v20191112/model/RelatedCcnInfo.h
  include/tencentcloud/gse/v20191112/model/FleetAttributes.h
  include/tencentcloud/gse/v20191112/model/DescribeInstanceTypesResponse.h
  include/tencentcloud/gse/v20191112/model/TargetConfiguration.h
  include/tencentcloud/gse/v20191112/model/EndGameServerSessionAndProcessResponse.h
  include/tencentcloud/gse/v20191112/model/DescribeGameServerSessionsResponse.h
  include/tencentcloud/gse/v20191112/model/UpdateGameServerSessionResponse.h
  include/tencentcloud/gse/v20191112/model/GetInstanceAccessResponse.h
  include/tencentcloud/gse/v20191112/model/EndGameServerSessionAndProcessRequest.h
  include/tencentcloud/gse/v20191112/model/DescribePlayerSessionsResponse.h
  include/tencentcloud/gse/v20191112/model/UpdateBucketCORSOptResponse.h
  include/tencentcloud/gse/v20191112/model/DescribeInstanceTypesRequest.h
  include/tencentcloud/gse/v20191112/model/DescribeTimerScalingPoliciesResponse.h
  include/tencentcloud/gse/v20191112/model/SetServerReservedResponse.h
  include/tencentcloud/gse/v20191112/model/JoinGameServerSessionBatchRequest.h
  include/tencentcloud/gse/v20191112/model/StopGameServerSessionPlacementRequest.h
  include/tencentcloud/gse/v20191112/model/TimerScalingPolicy.h
  include/tencentcloud/gse/v20191112/model/TimerFleetCapacity.h
  include/tencentcloud/gse/v20191112/model/CopyFleetRequest.h
  include/tencentcloud/gse/v20191112/model/TimerValue.h
  include/tencentcloud/gse/v20191112/model/CopyFleetResponse.h
  include/tencentcloud/gse/v20191112/model/GetInstanceAccessRequest.h
  include/tencentcloud/gse/v20191112/model/DescribeGameServerSessionsRequest.h
  include/tencentcloud/gse/v20191112/model/UpdateGameServerSessionRequest.h
  include/tencentcloud/gse/v20191112/model/PutTimerScalingPolicyResponse.h
  include/tencentcloud/gse/v20191112/model/PlayerLatency.h
  include/tencentcloud/gse/v20191112/model/DiskInfo.h
  include/tencentcloud/gse/v20191112/model/StartGameServerSessionPlacementResponse.h
  include/tencentcloud/gse/v20191112/model/Credentials.h
  include/tencentcloud/gse/v20191112/model/ResourceCreationLimitPolicy.h
  include/tencentcloud/gse/v20191112/model/GetGameServerSessionLogUrlRequest.h
  include/tencentcloud/gse/v20191112/model/Tag.h
  include/tencentcloud/gse/v20191112/model/SetServerReservedRequest.h
  include/tencentcloud/gse/v20191112/model/CreateGameServerSessionResponse.h
  include/tencentcloud/gse/v20191112/model/DescribePlayerSessionsRequest.h
  include/tencentcloud/gse/v20191112/model/UpdateBucketCORSOptRequest.h
  include/tencentcloud/gse/v20191112/model/TimerConfiguration.h
  include/tencentcloud/gse/v20191112/model/RuntimeConfiguration.h
  include/tencentcloud/gse/v20191112/model/DeleteTimerScalingPolicyRequest.h
  include/tencentcloud/gse/v20191112/model/JoinGameServerSessionResponse.h
  include/tencentcloud/gse/v20191112/model/DesiredPlayerSession.h
  include/tencentcloud/gse/v20191112/model/SearchGameServerSessionsResponse.h
  include/tencentcloud/gse/v20191112/model/DescribeGameServerSessionPlacementRequest.h
  include/tencentcloud/gse/v20191112/model/SearchGameServerSessionsRequest.h
  include/tencentcloud/gse/v20191112/model/PlacedPlayerSession.h
  include/tencentcloud/gse/v20191112/model/GameServerSessionPlacement.h
  include/tencentcloud/gse/v20191112/model/InboundPermission.h
  include/tencentcloud/gse/v20191112/model/ServerProcesse.h
  include/tencentcloud/gse/v20191112/model/PlayerSession.h
  include/tencentcloud/gse/v20191112/model/CreateGameServerSessionRequest.h
  include/tencentcloud/gse/v20191112/model/GetGameServerSessionLogUrlResponse.h
  include/tencentcloud/gse/v20191112/model/UpdateBucketAccelerateOptRequest.h
  include/tencentcloud/gse/v20191112/model/GameServerSessionDetail.h
  include/tencentcloud/gse/v20191112/model/UpdateBucketAccelerateOptResponse.h
  include/tencentcloud/gse/v20191112/model/DescribeGameServerSessionDetailsRequest.h
  include/tencentcloud/gse/v20191112/model/StartGameServerSessionPlacementRequest.h
  include/tencentcloud/gse/v20191112/model/GameServerSession.h
  include/tencentcloud/gse/v20191112/model/InstanceTypeInfo.h
  include/tencentcloud/gse/v20191112/model/DescribeGameServerSessionDetailsResponse.h
  include/tencentcloud/gse/v20191112/model/DescribeGameServerSessionPlacementResponse.h
  include/tencentcloud/gse/v20191112/model/CcnInfo.h
  include/tencentcloud/gse/v20191112/model/JoinGameServerSessionBatchResponse.h
  include/tencentcloud/gse/v20191112/model/PlayerDataMap.h
  include/tencentcloud/gse/v20191112/model/JoinGameServerSessionRequest.h
  include/tencentcloud/gse/v20191112/model/StopGameServerSessionPlacementResponse.h
  include/tencentcloud/gse/v20191112/model/PutTimerScalingPolicyRequest.h
  include/tencentcloud/gse/v20191112/model/InstanceAccess.h
  )

set(gse_src
  src/v20191112/GseClient.cpp
  src/v20191112/model/GameProperty.cpp
  src/v20191112/model/DeleteTimerScalingPolicyResponse.cpp
  src/v20191112/model/DescribeTimerScalingPoliciesRequest.cpp
  src/v20191112/model/RelatedCcnInfo.cpp
  src/v20191112/model/FleetAttributes.cpp
  src/v20191112/model/DescribeInstanceTypesResponse.cpp
  src/v20191112/model/TargetConfiguration.cpp
  src/v20191112/model/EndGameServerSessionAndProcessResponse.cpp
  src/v20191112/model/DescribeGameServerSessionsResponse.cpp
  src/v20191112/model/UpdateGameServerSessionResponse.cpp
  src/v20191112/model/GetInstanceAccessResponse.cpp
  src/v20191112/model/EndGameServerSessionAndProcessRequest.cpp
  src/v20191112/model/DescribePlayerSessionsResponse.cpp
  src/v20191112/model/UpdateBucketCORSOptResponse.cpp
  src/v20191112/model/DescribeInstanceTypesRequest.cpp
  src/v20191112/model/DescribeTimerScalingPoliciesResponse.cpp
  src/v20191112/model/SetServerReservedResponse.cpp
  src/v20191112/model/JoinGameServerSessionBatchRequest.cpp
  src/v20191112/model/StopGameServerSessionPlacementRequest.cpp
  src/v20191112/model/TimerScalingPolicy.cpp
  src/v20191112/model/TimerFleetCapacity.cpp
  src/v20191112/model/CopyFleetRequest.cpp
  src/v20191112/model/TimerValue.cpp
  src/v20191112/model/CopyFleetResponse.cpp
  src/v20191112/model/GetInstanceAccessRequest.cpp
  src/v20191112/model/DescribeGameServerSessionsRequest.cpp
  src/v20191112/model/UpdateGameServerSessionRequest.cpp
  src/v20191112/model/PutTimerScalingPolicyResponse.cpp
  src/v20191112/model/PlayerLatency.cpp
  src/v20191112/model/DiskInfo.cpp
  src/v20191112/model/StartGameServerSessionPlacementResponse.cpp
  src/v20191112/model/Credentials.cpp
  src/v20191112/model/ResourceCreationLimitPolicy.cpp
  src/v20191112/model/GetGameServerSessionLogUrlRequest.cpp
  src/v20191112/model/Tag.cpp
  src/v20191112/model/SetServerReservedRequest.cpp
  src/v20191112/model/CreateGameServerSessionResponse.cpp
  src/v20191112/model/DescribePlayerSessionsRequest.cpp
  src/v20191112/model/UpdateBucketCORSOptRequest.cpp
  src/v20191112/model/TimerConfiguration.cpp
  src/v20191112/model/RuntimeConfiguration.cpp
  src/v20191112/model/DeleteTimerScalingPolicyRequest.cpp
  src/v20191112/model/JoinGameServerSessionResponse.cpp
  src/v20191112/model/DesiredPlayerSession.cpp
  src/v20191112/model/SearchGameServerSessionsResponse.cpp
  src/v20191112/model/DescribeGameServerSessionPlacementRequest.cpp
  src/v20191112/model/SearchGameServerSessionsRequest.cpp
  src/v20191112/model/PlacedPlayerSession.cpp
  src/v20191112/model/GameServerSessionPlacement.cpp
  src/v20191112/model/InboundPermission.cpp
  src/v20191112/model/ServerProcesse.cpp
  src/v20191112/model/PlayerSession.cpp
  src/v20191112/model/CreateGameServerSessionRequest.cpp
  src/v20191112/model/GetGameServerSessionLogUrlResponse.cpp
  src/v20191112/model/UpdateBucketAccelerateOptRequest.cpp
  src/v20191112/model/GameServerSessionDetail.cpp
  src/v20191112/model/UpdateBucketAccelerateOptResponse.cpp
  src/v20191112/model/DescribeGameServerSessionDetailsRequest.cpp
  src/v20191112/model/StartGameServerSessionPlacementRequest.cpp
  src/v20191112/model/GameServerSession.cpp
  src/v20191112/model/InstanceTypeInfo.cpp
  src/v20191112/model/DescribeGameServerSessionDetailsResponse.cpp
  src/v20191112/model/DescribeGameServerSessionPlacementResponse.cpp
  src/v20191112/model/CcnInfo.cpp
  src/v20191112/model/JoinGameServerSessionBatchResponse.cpp
  src/v20191112/model/PlayerDataMap.cpp
  src/v20191112/model/JoinGameServerSessionRequest.cpp
  src/v20191112/model/StopGameServerSessionPlacementResponse.cpp
  src/v20191112/model/PutTimerScalingPolicyRequest.cpp
  src/v20191112/model/InstanceAccess.cpp
  )

set(gse_include
    include/tencentcloud/gse
  )

add_library(gse ${LIB_TYPE}
  ${gse_public_header}
  ${gse_public_header_model}
  ${gse_src})

set_target_properties(gse
  PROPERTIES
  LINKER_LANGUAGE CXX
  ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
  LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
  RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin
  OUTPUT_NAME ${TARGET_OUTPUT_NAME_PREFIX}gse
  )

target_include_directories(gse
  PRIVATE include
    ${CMAKE_SOURCE_DIR}/core/include
  )
target_link_libraries(gse
  core)

#install(FILES ${gse_public_header}
#  DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/tencentcloud/gse/v20191112)
#install(FILES ${gse_public_header_model}
#  DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/tencentcloud/gse/v20191112/model)
install(DIRECTORY ${gse_include}
  DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/tencentcloud)

install(TARGETS gse
  ARCHIVE DESTINATION ${CMAKE_INSTALL_LIBDIR}
  LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
  RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
  )
