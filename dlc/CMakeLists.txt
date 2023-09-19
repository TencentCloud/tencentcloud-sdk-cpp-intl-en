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
  include/tencentcloud/dlc/v20210125/model/DescribeResultDownloadResponse.h
  include/tencentcloud/dlc/v20210125/model/DescribeTaskResultResponse.h
  include/tencentcloud/dlc/v20210125/model/PrestoMonitorMetrics.h
  include/tencentcloud/dlc/v20210125/model/DescribeSparkAppJobRequest.h
  include/tencentcloud/dlc/v20210125/model/CosPermission.h
  include/tencentcloud/dlc/v20210125/model/CreateResultDownloadResponse.h
  include/tencentcloud/dlc/v20210125/model/ModifyGovernEventRuleResponse.h
  include/tencentcloud/dlc/v20210125/model/SparkMonitorMetrics.h
  include/tencentcloud/dlc/v20210125/model/TagInfo.h
  include/tencentcloud/dlc/v20210125/model/SwitchDataEngineRequest.h
  include/tencentcloud/dlc/v20210125/model/SessionResourceTemplate.h
  include/tencentcloud/dlc/v20210125/model/Task.h
  include/tencentcloud/dlc/v20210125/model/TaskResultInfo.h
  include/tencentcloud/dlc/v20210125/model/DescribeSparkAppTasksResponse.h
  include/tencentcloud/dlc/v20210125/model/DescribeTasksResponse.h
  include/tencentcloud/dlc/v20210125/model/CommonMetrics.h
  include/tencentcloud/dlc/v20210125/model/UserRole.h
  include/tencentcloud/dlc/v20210125/model/DescribeSparkSessionBatchSqlLogResponse.h
  include/tencentcloud/dlc/v20210125/model/GenerateCreateMangedTableSqlRequest.h
  include/tencentcloud/dlc/v20210125/model/SwitchDataEngineResponse.h
  include/tencentcloud/dlc/v20210125/model/DescribeLakeFsInfoRequest.h
  include/tencentcloud/dlc/v20210125/model/ModifySparkAppRequest.h
  include/tencentcloud/dlc/v20210125/model/DescribeTasksRequest.h
  include/tencentcloud/dlc/v20210125/model/CreateSparkAppTaskRequest.h
  include/tencentcloud/dlc/v20210125/model/DescribeEngineUsageInfoResponse.h
  include/tencentcloud/dlc/v20210125/model/KVPair.h
  include/tencentcloud/dlc/v20210125/model/TableBaseInfo.h
  include/tencentcloud/dlc/v20210125/model/CreateSparkAppTaskResponse.h
  include/tencentcloud/dlc/v20210125/model/CreateInternalTableRequest.h
  include/tencentcloud/dlc/v20210125/model/TasksInfo.h
  include/tencentcloud/dlc/v20210125/model/CreateSparkAppRequest.h
  include/tencentcloud/dlc/v20210125/model/DescribeEngineUsageInfoRequest.h
  include/tencentcloud/dlc/v20210125/model/DescribeForbiddenTableProRequest.h
  include/tencentcloud/dlc/v20210125/model/CreateDataEngineResponse.h
  include/tencentcloud/dlc/v20210125/model/DescribeSparkAppJobsRequest.h
  include/tencentcloud/dlc/v20210125/model/CreateDataEngineRequest.h
  include/tencentcloud/dlc/v20210125/model/ModifySparkAppBatchRequest.h
  include/tencentcloud/dlc/v20210125/model/CreateTaskRequest.h
  include/tencentcloud/dlc/v20210125/model/ModifySparkAppResponse.h
  include/tencentcloud/dlc/v20210125/model/SparkSessionBatchLog.h
  include/tencentcloud/dlc/v20210125/model/SparkJobInfo.h
  include/tencentcloud/dlc/v20210125/model/DescribeSparkSessionBatchSqlLogRequest.h
  include/tencentcloud/dlc/v20210125/model/DescribeSparkAppJobResponse.h
  include/tencentcloud/dlc/v20210125/model/DescribeUserRolesResponse.h
  include/tencentcloud/dlc/v20210125/model/DataEngineConfigPair.h
  include/tencentcloud/dlc/v20210125/model/SuspendResumeDataEngineResponse.h
  include/tencentcloud/dlc/v20210125/model/StreamingStatistics.h
  include/tencentcloud/dlc/v20210125/model/GenerateCreateMangedTableSqlResponse.h
  include/tencentcloud/dlc/v20210125/model/CancelTaskRequest.h
  include/tencentcloud/dlc/v20210125/model/TaskResponseInfo.h
  include/tencentcloud/dlc/v20210125/model/Property.h
  include/tencentcloud/dlc/v20210125/model/DeleteSparkAppRequest.h
  include/tencentcloud/dlc/v20210125/model/DescribeUserRolesRequest.h
  include/tencentcloud/dlc/v20210125/model/Execution.h
  include/tencentcloud/dlc/v20210125/model/Column.h
  include/tencentcloud/dlc/v20210125/model/DescribeTaskResultRequest.h
  include/tencentcloud/dlc/v20210125/model/Filter.h
  include/tencentcloud/dlc/v20210125/model/DescribeLakeFsDirSummaryResponse.h
  include/tencentcloud/dlc/v20210125/model/DescribeForbiddenTableProResponse.h
  include/tencentcloud/dlc/v20210125/model/CancelTaskResponse.h
  include/tencentcloud/dlc/v20210125/model/DataGovernPolicy.h
  include/tencentcloud/dlc/v20210125/model/ModifySparkAppBatchResponse.h
  include/tencentcloud/dlc/v20210125/model/TPartition.h
  include/tencentcloud/dlc/v20210125/model/DescribeLakeFsInfoResponse.h
  include/tencentcloud/dlc/v20210125/model/CancelSparkSessionBatchSQLResponse.h
  include/tencentcloud/dlc/v20210125/model/CreateSparkSessionBatchSQLResponse.h
  include/tencentcloud/dlc/v20210125/model/DescribeLakeFsDirSummaryRequest.h
  include/tencentcloud/dlc/v20210125/model/Policy.h
  include/tencentcloud/dlc/v20210125/model/CreateSparkAppResponse.h
  include/tencentcloud/dlc/v20210125/model/CreateTaskResponse.h
  include/tencentcloud/dlc/v20210125/model/DeleteSparkAppResponse.h
  include/tencentcloud/dlc/v20210125/model/CreateTasksRequest.h
  include/tencentcloud/dlc/v20210125/model/SuspendResumeDataEngineRequest.h
  include/tencentcloud/dlc/v20210125/model/DescribeSparkAppJobsResponse.h
  include/tencentcloud/dlc/v20210125/model/CrontabResumeSuspendStrategy.h
  include/tencentcloud/dlc/v20210125/model/CancelSparkSessionBatchSQLRequest.h
  include/tencentcloud/dlc/v20210125/model/TasksOverview.h
  include/tencentcloud/dlc/v20210125/model/CreateTasksResponse.h
  include/tencentcloud/dlc/v20210125/model/SparkSessionBatchLogOperate.h
  include/tencentcloud/dlc/v20210125/model/CreateSparkSessionBatchSQLRequest.h
  include/tencentcloud/dlc/v20210125/model/CreateInternalTableResponse.h
  include/tencentcloud/dlc/v20210125/model/DescribeSparkAppTasksRequest.h
  include/tencentcloud/dlc/v20210125/model/SQLTask.h
  include/tencentcloud/dlc/v20210125/model/UpdateRowFilterResponse.h
  include/tencentcloud/dlc/v20210125/model/CreateResultDownloadRequest.h
  include/tencentcloud/dlc/v20210125/model/ModifyGovernEventRuleRequest.h
  include/tencentcloud/dlc/v20210125/model/UpdateRowFilterRequest.h
  include/tencentcloud/dlc/v20210125/model/TColumn.h
  include/tencentcloud/dlc/v20210125/model/DescribeResultDownloadRequest.h
  )

set(dlc_src
  src/v20210125/DlcClient.cpp
  src/v20210125/model/DescribeResultDownloadResponse.cpp
  src/v20210125/model/DescribeTaskResultResponse.cpp
  src/v20210125/model/PrestoMonitorMetrics.cpp
  src/v20210125/model/DescribeSparkAppJobRequest.cpp
  src/v20210125/model/CosPermission.cpp
  src/v20210125/model/CreateResultDownloadResponse.cpp
  src/v20210125/model/ModifyGovernEventRuleResponse.cpp
  src/v20210125/model/SparkMonitorMetrics.cpp
  src/v20210125/model/TagInfo.cpp
  src/v20210125/model/SwitchDataEngineRequest.cpp
  src/v20210125/model/SessionResourceTemplate.cpp
  src/v20210125/model/Task.cpp
  src/v20210125/model/TaskResultInfo.cpp
  src/v20210125/model/DescribeSparkAppTasksResponse.cpp
  src/v20210125/model/DescribeTasksResponse.cpp
  src/v20210125/model/CommonMetrics.cpp
  src/v20210125/model/UserRole.cpp
  src/v20210125/model/DescribeSparkSessionBatchSqlLogResponse.cpp
  src/v20210125/model/GenerateCreateMangedTableSqlRequest.cpp
  src/v20210125/model/SwitchDataEngineResponse.cpp
  src/v20210125/model/DescribeLakeFsInfoRequest.cpp
  src/v20210125/model/ModifySparkAppRequest.cpp
  src/v20210125/model/DescribeTasksRequest.cpp
  src/v20210125/model/CreateSparkAppTaskRequest.cpp
  src/v20210125/model/DescribeEngineUsageInfoResponse.cpp
  src/v20210125/model/KVPair.cpp
  src/v20210125/model/TableBaseInfo.cpp
  src/v20210125/model/CreateSparkAppTaskResponse.cpp
  src/v20210125/model/CreateInternalTableRequest.cpp
  src/v20210125/model/TasksInfo.cpp
  src/v20210125/model/CreateSparkAppRequest.cpp
  src/v20210125/model/DescribeEngineUsageInfoRequest.cpp
  src/v20210125/model/DescribeForbiddenTableProRequest.cpp
  src/v20210125/model/CreateDataEngineResponse.cpp
  src/v20210125/model/DescribeSparkAppJobsRequest.cpp
  src/v20210125/model/CreateDataEngineRequest.cpp
  src/v20210125/model/ModifySparkAppBatchRequest.cpp
  src/v20210125/model/CreateTaskRequest.cpp
  src/v20210125/model/ModifySparkAppResponse.cpp
  src/v20210125/model/SparkSessionBatchLog.cpp
  src/v20210125/model/SparkJobInfo.cpp
  src/v20210125/model/DescribeSparkSessionBatchSqlLogRequest.cpp
  src/v20210125/model/DescribeSparkAppJobResponse.cpp
  src/v20210125/model/DescribeUserRolesResponse.cpp
  src/v20210125/model/DataEngineConfigPair.cpp
  src/v20210125/model/SuspendResumeDataEngineResponse.cpp
  src/v20210125/model/StreamingStatistics.cpp
  src/v20210125/model/GenerateCreateMangedTableSqlResponse.cpp
  src/v20210125/model/CancelTaskRequest.cpp
  src/v20210125/model/TaskResponseInfo.cpp
  src/v20210125/model/Property.cpp
  src/v20210125/model/DeleteSparkAppRequest.cpp
  src/v20210125/model/DescribeUserRolesRequest.cpp
  src/v20210125/model/Execution.cpp
  src/v20210125/model/Column.cpp
  src/v20210125/model/DescribeTaskResultRequest.cpp
  src/v20210125/model/Filter.cpp
  src/v20210125/model/DescribeLakeFsDirSummaryResponse.cpp
  src/v20210125/model/DescribeForbiddenTableProResponse.cpp
  src/v20210125/model/CancelTaskResponse.cpp
  src/v20210125/model/DataGovernPolicy.cpp
  src/v20210125/model/ModifySparkAppBatchResponse.cpp
  src/v20210125/model/TPartition.cpp
  src/v20210125/model/DescribeLakeFsInfoResponse.cpp
  src/v20210125/model/CancelSparkSessionBatchSQLResponse.cpp
  src/v20210125/model/CreateSparkSessionBatchSQLResponse.cpp
  src/v20210125/model/DescribeLakeFsDirSummaryRequest.cpp
  src/v20210125/model/Policy.cpp
  src/v20210125/model/CreateSparkAppResponse.cpp
  src/v20210125/model/CreateTaskResponse.cpp
  src/v20210125/model/DeleteSparkAppResponse.cpp
  src/v20210125/model/CreateTasksRequest.cpp
  src/v20210125/model/SuspendResumeDataEngineRequest.cpp
  src/v20210125/model/DescribeSparkAppJobsResponse.cpp
  src/v20210125/model/CrontabResumeSuspendStrategy.cpp
  src/v20210125/model/CancelSparkSessionBatchSQLRequest.cpp
  src/v20210125/model/TasksOverview.cpp
  src/v20210125/model/CreateTasksResponse.cpp
  src/v20210125/model/SparkSessionBatchLogOperate.cpp
  src/v20210125/model/CreateSparkSessionBatchSQLRequest.cpp
  src/v20210125/model/CreateInternalTableResponse.cpp
  src/v20210125/model/DescribeSparkAppTasksRequest.cpp
  src/v20210125/model/SQLTask.cpp
  src/v20210125/model/UpdateRowFilterResponse.cpp
  src/v20210125/model/CreateResultDownloadRequest.cpp
  src/v20210125/model/ModifyGovernEventRuleRequest.cpp
  src/v20210125/model/UpdateRowFilterRequest.cpp
  src/v20210125/model/TColumn.cpp
  src/v20210125/model/DescribeResultDownloadRequest.cpp
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
