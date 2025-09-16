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

set(tione_public_header
  include/tencentcloud/tione/v20211111/TioneClient.h
  )

set(tione_public_header_model
  include/tencentcloud/tione/v20211111/model/Container.h
  include/tencentcloud/tione/v20211111/model/Service.h
  include/tencentcloud/tione/v20211111/model/HTTPGetAction.h
  include/tencentcloud/tione/v20211111/model/RollingUpdate.h
  include/tencentcloud/tione/v20211111/model/ServiceEIP.h
  include/tencentcloud/tione/v20211111/model/ResourceGroupInfo.h
  include/tencentcloud/tione/v20211111/model/ExecAction.h
  include/tencentcloud/tione/v20211111/model/HorizontalPodAutoscaler.h
  include/tencentcloud/tione/v20211111/model/PublicDataSourceFS.h
  include/tencentcloud/tione/v20211111/model/AuthToken.h
  include/tencentcloud/tione/v20211111/model/HealthProbe.h
  include/tencentcloud/tione/v20211111/model/Option.h
  include/tencentcloud/tione/v20211111/model/CrossTenantENIInfo.h
  include/tencentcloud/tione/v20211111/model/AuthTokenBase.h
  include/tencentcloud/tione/v20211111/model/TCPSocketAction.h
  include/tencentcloud/tione/v20211111/model/ResourceInfo.h
  include/tencentcloud/tione/v20211111/model/GooseFSx.h
  include/tencentcloud/tione/v20211111/model/VolumeMount.h
  include/tencentcloud/tione/v20211111/model/ScheduledAction.h
  include/tencentcloud/tione/v20211111/model/DescribeModelServiceGroupsResponse.h
  include/tencentcloud/tione/v20211111/model/InferCodeInfo.h
  include/tencentcloud/tione/v20211111/model/CosPathInfo.h
  include/tencentcloud/tione/v20211111/model/ServiceInfo.h
  include/tencentcloud/tione/v20211111/model/SchedulingPolicy.h
  include/tencentcloud/tione/v20211111/model/GpuDetail.h
  include/tencentcloud/tione/v20211111/model/CronScaleJob.h
  include/tencentcloud/tione/v20211111/model/Filter.h
  include/tencentcloud/tione/v20211111/model/ProbeAction.h
  include/tencentcloud/tione/v20211111/model/CFSConfig.h
  include/tencentcloud/tione/v20211111/model/ModelInfo.h
  include/tencentcloud/tione/v20211111/model/NumOrPercent.h
  include/tencentcloud/tione/v20211111/model/TagFilter.h
  include/tencentcloud/tione/v20211111/model/Pod.h
  include/tencentcloud/tione/v20211111/model/DescribeModelServiceGroupsRequest.h
  include/tencentcloud/tione/v20211111/model/ServiceGroup.h
  include/tencentcloud/tione/v20211111/model/ContainerStatus.h
  include/tencentcloud/tione/v20211111/model/ServiceLimit.h
  include/tencentcloud/tione/v20211111/model/ImageInfo.h
  include/tencentcloud/tione/v20211111/model/Probe.h
  include/tencentcloud/tione/v20211111/model/AuthTokenLimit.h
  include/tencentcloud/tione/v20211111/model/Tag.h
  include/tencentcloud/tione/v20211111/model/EnvVar.h
  include/tencentcloud/tione/v20211111/model/StatefulSetCondition.h
  include/tencentcloud/tione/v20211111/model/LogConfig.h
  include/tencentcloud/tione/v20211111/model/WorkloadStatus.h
  )

set(tione_src
  src/v20211111/TioneClient.cpp
  src/v20211111/model/Container.cpp
  src/v20211111/model/Service.cpp
  src/v20211111/model/HTTPGetAction.cpp
  src/v20211111/model/RollingUpdate.cpp
  src/v20211111/model/ServiceEIP.cpp
  src/v20211111/model/ResourceGroupInfo.cpp
  src/v20211111/model/ExecAction.cpp
  src/v20211111/model/HorizontalPodAutoscaler.cpp
  src/v20211111/model/PublicDataSourceFS.cpp
  src/v20211111/model/AuthToken.cpp
  src/v20211111/model/HealthProbe.cpp
  src/v20211111/model/Option.cpp
  src/v20211111/model/CrossTenantENIInfo.cpp
  src/v20211111/model/AuthTokenBase.cpp
  src/v20211111/model/TCPSocketAction.cpp
  src/v20211111/model/ResourceInfo.cpp
  src/v20211111/model/GooseFSx.cpp
  src/v20211111/model/VolumeMount.cpp
  src/v20211111/model/ScheduledAction.cpp
  src/v20211111/model/DescribeModelServiceGroupsResponse.cpp
  src/v20211111/model/InferCodeInfo.cpp
  src/v20211111/model/CosPathInfo.cpp
  src/v20211111/model/ServiceInfo.cpp
  src/v20211111/model/SchedulingPolicy.cpp
  src/v20211111/model/GpuDetail.cpp
  src/v20211111/model/CronScaleJob.cpp
  src/v20211111/model/Filter.cpp
  src/v20211111/model/ProbeAction.cpp
  src/v20211111/model/CFSConfig.cpp
  src/v20211111/model/ModelInfo.cpp
  src/v20211111/model/NumOrPercent.cpp
  src/v20211111/model/TagFilter.cpp
  src/v20211111/model/Pod.cpp
  src/v20211111/model/DescribeModelServiceGroupsRequest.cpp
  src/v20211111/model/ServiceGroup.cpp
  src/v20211111/model/ContainerStatus.cpp
  src/v20211111/model/ServiceLimit.cpp
  src/v20211111/model/ImageInfo.cpp
  src/v20211111/model/Probe.cpp
  src/v20211111/model/AuthTokenLimit.cpp
  src/v20211111/model/Tag.cpp
  src/v20211111/model/EnvVar.cpp
  src/v20211111/model/StatefulSetCondition.cpp
  src/v20211111/model/LogConfig.cpp
  src/v20211111/model/WorkloadStatus.cpp
  )

set(tione_include
    include/tencentcloud/tione
  )

add_library(tione ${LIB_TYPE}
  ${tione_public_header}
  ${tione_public_header_model}
  ${tione_src})

set_target_properties(tione
  PROPERTIES
  LINKER_LANGUAGE CXX
  ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
  LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
  RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin
  OUTPUT_NAME ${TARGET_OUTPUT_NAME_PREFIX}tione
  )

target_include_directories(tione
  PRIVATE include
    ${CMAKE_SOURCE_DIR}/core/include
  )
target_link_libraries(tione
  core)

#install(FILES ${tione_public_header}
#  DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/tencentcloud/tione/v20211111)
#install(FILES ${tione_public_header_model}
#  DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/tencentcloud/tione/v20211111/model)
install(DIRECTORY ${tione_include}
  DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/tencentcloud)

install(TARGETS tione
  ARCHIVE DESTINATION ${CMAKE_INSTALL_LIBDIR}
  LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
  RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
  )
