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

set(dlc_public_header
  include/tencentcloud/dlc/v20210125/DlcClient.h
  )

set(dlc_public_header_model
  include/tencentcloud/dlc/v20210125/model/DescribeTaskResultResponse.h
  include/tencentcloud/dlc/v20210125/model/DescribeTasksRequest.h
  include/tencentcloud/dlc/v20210125/model/CreateSparkAppTaskRequest.h
  include/tencentcloud/dlc/v20210125/model/SuspendResumeDataEngineResponse.h
  include/tencentcloud/dlc/v20210125/model/KVPair.h
  include/tencentcloud/dlc/v20210125/model/StreamingStatistics.h
  include/tencentcloud/dlc/v20210125/model/Task.h
  include/tencentcloud/dlc/v20210125/model/DescribeSparkAppJobRequest.h
  include/tencentcloud/dlc/v20210125/model/TasksInfo.h
  include/tencentcloud/dlc/v20210125/model/CreateSparkAppTaskResponse.h
  include/tencentcloud/dlc/v20210125/model/CancelTaskRequest.h
  include/tencentcloud/dlc/v20210125/model/TaskResponseInfo.h
  include/tencentcloud/dlc/v20210125/model/CreateTasksRequest.h
  include/tencentcloud/dlc/v20210125/model/CreateTaskResponse.h
  include/tencentcloud/dlc/v20210125/model/DeleteSparkAppResponse.h
  include/tencentcloud/dlc/v20210125/model/CreateSparkAppResponse.h
  include/tencentcloud/dlc/v20210125/model/SuspendResumeDataEngineRequest.h
  include/tencentcloud/dlc/v20210125/model/TaskResultInfo.h
  include/tencentcloud/dlc/v20210125/model/DescribeSparkAppJobsResponse.h
  include/tencentcloud/dlc/v20210125/model/TasksOverview.h
  include/tencentcloud/dlc/v20210125/model/DeleteSparkAppRequest.h
  include/tencentcloud/dlc/v20210125/model/DescribeSparkAppJobsRequest.h
  include/tencentcloud/dlc/v20210125/model/CreateTasksResponse.h
  include/tencentcloud/dlc/v20210125/model/DescribeTasksResponse.h
  include/tencentcloud/dlc/v20210125/model/CreateSparkAppRequest.h
  include/tencentcloud/dlc/v20210125/model/DescribeSparkAppTasksResponse.h
  include/tencentcloud/dlc/v20210125/model/Column.h
  include/tencentcloud/dlc/v20210125/model/DescribeTaskResultRequest.h
  include/tencentcloud/dlc/v20210125/model/Filter.h
  include/tencentcloud/dlc/v20210125/model/CreateTaskRequest.h
  include/tencentcloud/dlc/v20210125/model/ModifySparkAppResponse.h
  include/tencentcloud/dlc/v20210125/model/SparkJobInfo.h
  include/tencentcloud/dlc/v20210125/model/DescribeSparkAppTasksRequest.h
  include/tencentcloud/dlc/v20210125/model/CancelTaskResponse.h
  include/tencentcloud/dlc/v20210125/model/SQLTask.h
  include/tencentcloud/dlc/v20210125/model/DescribeSparkAppJobResponse.h
  include/tencentcloud/dlc/v20210125/model/ModifySparkAppRequest.h
  )

set(dlc_src
  src/v20210125/DlcClient.cpp
  src/v20210125/model/DescribeTaskResultResponse.cpp
  src/v20210125/model/DescribeTasksRequest.cpp
  src/v20210125/model/CreateSparkAppTaskRequest.cpp
  src/v20210125/model/SuspendResumeDataEngineResponse.cpp
  src/v20210125/model/KVPair.cpp
  src/v20210125/model/StreamingStatistics.cpp
  src/v20210125/model/Task.cpp
  src/v20210125/model/DescribeSparkAppJobRequest.cpp
  src/v20210125/model/TasksInfo.cpp
  src/v20210125/model/CreateSparkAppTaskResponse.cpp
  src/v20210125/model/CancelTaskRequest.cpp
  src/v20210125/model/TaskResponseInfo.cpp
  src/v20210125/model/CreateTasksRequest.cpp
  src/v20210125/model/CreateTaskResponse.cpp
  src/v20210125/model/DeleteSparkAppResponse.cpp
  src/v20210125/model/CreateSparkAppResponse.cpp
  src/v20210125/model/SuspendResumeDataEngineRequest.cpp
  src/v20210125/model/TaskResultInfo.cpp
  src/v20210125/model/DescribeSparkAppJobsResponse.cpp
  src/v20210125/model/TasksOverview.cpp
  src/v20210125/model/DeleteSparkAppRequest.cpp
  src/v20210125/model/DescribeSparkAppJobsRequest.cpp
  src/v20210125/model/CreateTasksResponse.cpp
  src/v20210125/model/DescribeTasksResponse.cpp
  src/v20210125/model/CreateSparkAppRequest.cpp
  src/v20210125/model/DescribeSparkAppTasksResponse.cpp
  src/v20210125/model/Column.cpp
  src/v20210125/model/DescribeTaskResultRequest.cpp
  src/v20210125/model/Filter.cpp
  src/v20210125/model/CreateTaskRequest.cpp
  src/v20210125/model/ModifySparkAppResponse.cpp
  src/v20210125/model/SparkJobInfo.cpp
  src/v20210125/model/DescribeSparkAppTasksRequest.cpp
  src/v20210125/model/CancelTaskResponse.cpp
  src/v20210125/model/SQLTask.cpp
  src/v20210125/model/DescribeSparkAppJobResponse.cpp
  src/v20210125/model/ModifySparkAppRequest.cpp
  )

set(dlc_include
    include/tencentcloud/dlc
  )

add_library(dlc ${LIB_TYPE}
  ${dlc_public_header}
  ${dlc_public_header_model}
  ${dlc_src})

set_target_properties(dlc
  PROPERTIES
  LINKER_LANGUAGE CXX
  ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
  LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
  RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin
  OUTPUT_NAME ${TARGET_OUTPUT_NAME_PREFIX}dlc
  )

target_include_directories(dlc
  PRIVATE include
    ${CMAKE_SOURCE_DIR}/core/include
  )
target_link_libraries(dlc
  core)

#install(FILES ${dlc_public_header}
#  DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/tencentcloud/dlc/v20210125)
#install(FILES ${dlc_public_header_model}
#  DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/tencentcloud/dlc/v20210125/model)
install(DIRECTORY ${dlc_include}
  DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/tencentcloud)

install(TARGETS dlc
  ARCHIVE DESTINATION ${CMAKE_INSTALL_LIBDIR}
  LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
  RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
  )
