/*
 * Copyright (c) 2017-2025 Tencent. All Rights Reserved.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *    http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#ifndef TENCENTCLOUD_CLS_V20201016_CLSCLIENT_H_
#define TENCENTCLOUD_CLS_V20201016_CLSCLIENT_H_

#include <functional>
#include <future>
#include <tencentcloud/core/AbstractClient.h>
#include <tencentcloud/core/Credential.h>
#include <tencentcloud/core/profile/ClientProfile.h>
#include <tencentcloud/core/AsyncCallerContext.h>
#include <tencentcloud/cls/v20201016/model/AddMachineGroupInfoRequest.h>
#include <tencentcloud/cls/v20201016/model/AddMachineGroupInfoResponse.h>
#include <tencentcloud/cls/v20201016/model/ApplyConfigToMachineGroupRequest.h>
#include <tencentcloud/cls/v20201016/model/ApplyConfigToMachineGroupResponse.h>
#include <tencentcloud/cls/v20201016/model/CancelRebuildIndexTaskRequest.h>
#include <tencentcloud/cls/v20201016/model/CancelRebuildIndexTaskResponse.h>
#include <tencentcloud/cls/v20201016/model/ChatCompletionsRequest.h>
#include <tencentcloud/cls/v20201016/model/ChatCompletionsResponse.h>
#include <tencentcloud/cls/v20201016/model/CheckFunctionRequest.h>
#include <tencentcloud/cls/v20201016/model/CheckFunctionResponse.h>
#include <tencentcloud/cls/v20201016/model/CheckRechargeKafkaServerRequest.h>
#include <tencentcloud/cls/v20201016/model/CheckRechargeKafkaServerResponse.h>
#include <tencentcloud/cls/v20201016/model/CloseKafkaConsumerRequest.h>
#include <tencentcloud/cls/v20201016/model/CloseKafkaConsumerResponse.h>
#include <tencentcloud/cls/v20201016/model/CommitConsumerOffsetsRequest.h>
#include <tencentcloud/cls/v20201016/model/CommitConsumerOffsetsResponse.h>
#include <tencentcloud/cls/v20201016/model/CreateAlarmRequest.h>
#include <tencentcloud/cls/v20201016/model/CreateAlarmResponse.h>
#include <tencentcloud/cls/v20201016/model/CreateAlarmNoticeRequest.h>
#include <tencentcloud/cls/v20201016/model/CreateAlarmNoticeResponse.h>
#include <tencentcloud/cls/v20201016/model/CreateAlarmShieldRequest.h>
#include <tencentcloud/cls/v20201016/model/CreateAlarmShieldResponse.h>
#include <tencentcloud/cls/v20201016/model/CreateCloudProductLogCollectionRequest.h>
#include <tencentcloud/cls/v20201016/model/CreateCloudProductLogCollectionResponse.h>
#include <tencentcloud/cls/v20201016/model/CreateConfigRequest.h>
#include <tencentcloud/cls/v20201016/model/CreateConfigResponse.h>
#include <tencentcloud/cls/v20201016/model/CreateConsoleRequest.h>
#include <tencentcloud/cls/v20201016/model/CreateConsoleResponse.h>
#include <tencentcloud/cls/v20201016/model/CreateConsumerRequest.h>
#include <tencentcloud/cls/v20201016/model/CreateConsumerResponse.h>
#include <tencentcloud/cls/v20201016/model/CreateConsumerGroupRequest.h>
#include <tencentcloud/cls/v20201016/model/CreateConsumerGroupResponse.h>
#include <tencentcloud/cls/v20201016/model/CreateCosRechargeRequest.h>
#include <tencentcloud/cls/v20201016/model/CreateCosRechargeResponse.h>
#include <tencentcloud/cls/v20201016/model/CreateDashboardRequest.h>
#include <tencentcloud/cls/v20201016/model/CreateDashboardResponse.h>
#include <tencentcloud/cls/v20201016/model/CreateDashboardSubscribeRequest.h>
#include <tencentcloud/cls/v20201016/model/CreateDashboardSubscribeResponse.h>
#include <tencentcloud/cls/v20201016/model/CreateDataTransformRequest.h>
#include <tencentcloud/cls/v20201016/model/CreateDataTransformResponse.h>
#include <tencentcloud/cls/v20201016/model/CreateDeliverCloudFunctionRequest.h>
#include <tencentcloud/cls/v20201016/model/CreateDeliverCloudFunctionResponse.h>
#include <tencentcloud/cls/v20201016/model/CreateDlcDeliverRequest.h>
#include <tencentcloud/cls/v20201016/model/CreateDlcDeliverResponse.h>
#include <tencentcloud/cls/v20201016/model/CreateEsRechargeRequest.h>
#include <tencentcloud/cls/v20201016/model/CreateEsRechargeResponse.h>
#include <tencentcloud/cls/v20201016/model/CreateExportRequest.h>
#include <tencentcloud/cls/v20201016/model/CreateExportResponse.h>
#include <tencentcloud/cls/v20201016/model/CreateHostMetricConfigRequest.h>
#include <tencentcloud/cls/v20201016/model/CreateHostMetricConfigResponse.h>
#include <tencentcloud/cls/v20201016/model/CreateIndexRequest.h>
#include <tencentcloud/cls/v20201016/model/CreateIndexResponse.h>
#include <tencentcloud/cls/v20201016/model/CreateKafkaRechargeRequest.h>
#include <tencentcloud/cls/v20201016/model/CreateKafkaRechargeResponse.h>
#include <tencentcloud/cls/v20201016/model/CreateLogsetRequest.h>
#include <tencentcloud/cls/v20201016/model/CreateLogsetResponse.h>
#include <tencentcloud/cls/v20201016/model/CreateMachineGroupRequest.h>
#include <tencentcloud/cls/v20201016/model/CreateMachineGroupResponse.h>
#include <tencentcloud/cls/v20201016/model/CreateMetricConfigRequest.h>
#include <tencentcloud/cls/v20201016/model/CreateMetricConfigResponse.h>
#include <tencentcloud/cls/v20201016/model/CreateMetricSubscribeRequest.h>
#include <tencentcloud/cls/v20201016/model/CreateMetricSubscribeResponse.h>
#include <tencentcloud/cls/v20201016/model/CreateNetworkApplicationRequest.h>
#include <tencentcloud/cls/v20201016/model/CreateNetworkApplicationResponse.h>
#include <tencentcloud/cls/v20201016/model/CreateNoticeContentRequest.h>
#include <tencentcloud/cls/v20201016/model/CreateNoticeContentResponse.h>
#include <tencentcloud/cls/v20201016/model/CreateRebuildIndexTaskRequest.h>
#include <tencentcloud/cls/v20201016/model/CreateRebuildIndexTaskResponse.h>
#include <tencentcloud/cls/v20201016/model/CreateRecordingRuleTaskRequest.h>
#include <tencentcloud/cls/v20201016/model/CreateRecordingRuleTaskResponse.h>
#include <tencentcloud/cls/v20201016/model/CreateRecordingRuleYamlTaskRequest.h>
#include <tencentcloud/cls/v20201016/model/CreateRecordingRuleYamlTaskResponse.h>
#include <tencentcloud/cls/v20201016/model/CreateScheduledSqlRequest.h>
#include <tencentcloud/cls/v20201016/model/CreateScheduledSqlResponse.h>
#include <tencentcloud/cls/v20201016/model/CreateSearchViewRequest.h>
#include <tencentcloud/cls/v20201016/model/CreateSearchViewResponse.h>
#include <tencentcloud/cls/v20201016/model/CreateShipperRequest.h>
#include <tencentcloud/cls/v20201016/model/CreateShipperResponse.h>
#include <tencentcloud/cls/v20201016/model/CreateSplunkDeliverRequest.h>
#include <tencentcloud/cls/v20201016/model/CreateSplunkDeliverResponse.h>
#include <tencentcloud/cls/v20201016/model/CreateTopicRequest.h>
#include <tencentcloud/cls/v20201016/model/CreateTopicResponse.h>
#include <tencentcloud/cls/v20201016/model/CreateWebCallbackRequest.h>
#include <tencentcloud/cls/v20201016/model/CreateWebCallbackResponse.h>
#include <tencentcloud/cls/v20201016/model/DeleteAlarmRequest.h>
#include <tencentcloud/cls/v20201016/model/DeleteAlarmResponse.h>
#include <tencentcloud/cls/v20201016/model/DeleteAlarmNoticeRequest.h>
#include <tencentcloud/cls/v20201016/model/DeleteAlarmNoticeResponse.h>
#include <tencentcloud/cls/v20201016/model/DeleteAlarmShieldRequest.h>
#include <tencentcloud/cls/v20201016/model/DeleteAlarmShieldResponse.h>
#include <tencentcloud/cls/v20201016/model/DeleteCloudProductLogCollectionRequest.h>
#include <tencentcloud/cls/v20201016/model/DeleteCloudProductLogCollectionResponse.h>
#include <tencentcloud/cls/v20201016/model/DeleteConfigRequest.h>
#include <tencentcloud/cls/v20201016/model/DeleteConfigResponse.h>
#include <tencentcloud/cls/v20201016/model/DeleteConfigFromMachineGroupRequest.h>
#include <tencentcloud/cls/v20201016/model/DeleteConfigFromMachineGroupResponse.h>
#include <tencentcloud/cls/v20201016/model/DeleteConsoleRequest.h>
#include <tencentcloud/cls/v20201016/model/DeleteConsoleResponse.h>
#include <tencentcloud/cls/v20201016/model/DeleteConsumerRequest.h>
#include <tencentcloud/cls/v20201016/model/DeleteConsumerResponse.h>
#include <tencentcloud/cls/v20201016/model/DeleteConsumerGroupRequest.h>
#include <tencentcloud/cls/v20201016/model/DeleteConsumerGroupResponse.h>
#include <tencentcloud/cls/v20201016/model/DeleteCosRechargeRequest.h>
#include <tencentcloud/cls/v20201016/model/DeleteCosRechargeResponse.h>
#include <tencentcloud/cls/v20201016/model/DeleteDashboardRequest.h>
#include <tencentcloud/cls/v20201016/model/DeleteDashboardResponse.h>
#include <tencentcloud/cls/v20201016/model/DeleteDashboardSubscribeRequest.h>
#include <tencentcloud/cls/v20201016/model/DeleteDashboardSubscribeResponse.h>
#include <tencentcloud/cls/v20201016/model/DeleteDataTransformRequest.h>
#include <tencentcloud/cls/v20201016/model/DeleteDataTransformResponse.h>
#include <tencentcloud/cls/v20201016/model/DeleteDlcDeliverRequest.h>
#include <tencentcloud/cls/v20201016/model/DeleteDlcDeliverResponse.h>
#include <tencentcloud/cls/v20201016/model/DeleteEsRechargeRequest.h>
#include <tencentcloud/cls/v20201016/model/DeleteEsRechargeResponse.h>
#include <tencentcloud/cls/v20201016/model/DeleteExportRequest.h>
#include <tencentcloud/cls/v20201016/model/DeleteExportResponse.h>
#include <tencentcloud/cls/v20201016/model/DeleteHostMetricConfigRequest.h>
#include <tencentcloud/cls/v20201016/model/DeleteHostMetricConfigResponse.h>
#include <tencentcloud/cls/v20201016/model/DeleteIndexRequest.h>
#include <tencentcloud/cls/v20201016/model/DeleteIndexResponse.h>
#include <tencentcloud/cls/v20201016/model/DeleteKafkaRechargeRequest.h>
#include <tencentcloud/cls/v20201016/model/DeleteKafkaRechargeResponse.h>
#include <tencentcloud/cls/v20201016/model/DeleteLogsetRequest.h>
#include <tencentcloud/cls/v20201016/model/DeleteLogsetResponse.h>
#include <tencentcloud/cls/v20201016/model/DeleteMachineGroupRequest.h>
#include <tencentcloud/cls/v20201016/model/DeleteMachineGroupResponse.h>
#include <tencentcloud/cls/v20201016/model/DeleteMachineGroupInfoRequest.h>
#include <tencentcloud/cls/v20201016/model/DeleteMachineGroupInfoResponse.h>
#include <tencentcloud/cls/v20201016/model/DeleteMetricConfigRequest.h>
#include <tencentcloud/cls/v20201016/model/DeleteMetricConfigResponse.h>
#include <tencentcloud/cls/v20201016/model/DeleteMetricSubscribeRequest.h>
#include <tencentcloud/cls/v20201016/model/DeleteMetricSubscribeResponse.h>
#include <tencentcloud/cls/v20201016/model/DeleteNetworkApplicationRequest.h>
#include <tencentcloud/cls/v20201016/model/DeleteNetworkApplicationResponse.h>
#include <tencentcloud/cls/v20201016/model/DeleteNoticeContentRequest.h>
#include <tencentcloud/cls/v20201016/model/DeleteNoticeContentResponse.h>
#include <tencentcloud/cls/v20201016/model/DeleteRecordingRuleTaskRequest.h>
#include <tencentcloud/cls/v20201016/model/DeleteRecordingRuleTaskResponse.h>
#include <tencentcloud/cls/v20201016/model/DeleteRecordingRuleYamlTaskRequest.h>
#include <tencentcloud/cls/v20201016/model/DeleteRecordingRuleYamlTaskResponse.h>
#include <tencentcloud/cls/v20201016/model/DeleteScheduledSqlRequest.h>
#include <tencentcloud/cls/v20201016/model/DeleteScheduledSqlResponse.h>
#include <tencentcloud/cls/v20201016/model/DeleteSearchViewRequest.h>
#include <tencentcloud/cls/v20201016/model/DeleteSearchViewResponse.h>
#include <tencentcloud/cls/v20201016/model/DeleteShipperRequest.h>
#include <tencentcloud/cls/v20201016/model/DeleteShipperResponse.h>
#include <tencentcloud/cls/v20201016/model/DeleteSplunkDeliverRequest.h>
#include <tencentcloud/cls/v20201016/model/DeleteSplunkDeliverResponse.h>
#include <tencentcloud/cls/v20201016/model/DeleteTopicRequest.h>
#include <tencentcloud/cls/v20201016/model/DeleteTopicResponse.h>
#include <tencentcloud/cls/v20201016/model/DeleteWebCallbackRequest.h>
#include <tencentcloud/cls/v20201016/model/DeleteWebCallbackResponse.h>
#include <tencentcloud/cls/v20201016/model/DescribeAlarmNoticesRequest.h>
#include <tencentcloud/cls/v20201016/model/DescribeAlarmNoticesResponse.h>
#include <tencentcloud/cls/v20201016/model/DescribeAlarmShieldsRequest.h>
#include <tencentcloud/cls/v20201016/model/DescribeAlarmShieldsResponse.h>
#include <tencentcloud/cls/v20201016/model/DescribeAlarmsRequest.h>
#include <tencentcloud/cls/v20201016/model/DescribeAlarmsResponse.h>
#include <tencentcloud/cls/v20201016/model/DescribeAlertRecordHistoryRequest.h>
#include <tencentcloud/cls/v20201016/model/DescribeAlertRecordHistoryResponse.h>
#include <tencentcloud/cls/v20201016/model/DescribeCloudProductLogTasksRequest.h>
#include <tencentcloud/cls/v20201016/model/DescribeCloudProductLogTasksResponse.h>
#include <tencentcloud/cls/v20201016/model/DescribeClusterBaseMetricConfigsRequest.h>
#include <tencentcloud/cls/v20201016/model/DescribeClusterBaseMetricConfigsResponse.h>
#include <tencentcloud/cls/v20201016/model/DescribeClusterMetricConfigsRequest.h>
#include <tencentcloud/cls/v20201016/model/DescribeClusterMetricConfigsResponse.h>
#include <tencentcloud/cls/v20201016/model/DescribeConfigMachineGroupsRequest.h>
#include <tencentcloud/cls/v20201016/model/DescribeConfigMachineGroupsResponse.h>
#include <tencentcloud/cls/v20201016/model/DescribeConfigsRequest.h>
#include <tencentcloud/cls/v20201016/model/DescribeConfigsResponse.h>
#include <tencentcloud/cls/v20201016/model/DescribeConsolesRequest.h>
#include <tencentcloud/cls/v20201016/model/DescribeConsolesResponse.h>
#include <tencentcloud/cls/v20201016/model/DescribeConsumerRequest.h>
#include <tencentcloud/cls/v20201016/model/DescribeConsumerResponse.h>
#include <tencentcloud/cls/v20201016/model/DescribeConsumerGroupsRequest.h>
#include <tencentcloud/cls/v20201016/model/DescribeConsumerGroupsResponse.h>
#include <tencentcloud/cls/v20201016/model/DescribeConsumerOffsetsRequest.h>
#include <tencentcloud/cls/v20201016/model/DescribeConsumerOffsetsResponse.h>
#include <tencentcloud/cls/v20201016/model/DescribeConsumerPreviewRequest.h>
#include <tencentcloud/cls/v20201016/model/DescribeConsumerPreviewResponse.h>
#include <tencentcloud/cls/v20201016/model/DescribeConsumersRequest.h>
#include <tencentcloud/cls/v20201016/model/DescribeConsumersResponse.h>
#include <tencentcloud/cls/v20201016/model/DescribeCosRechargesRequest.h>
#include <tencentcloud/cls/v20201016/model/DescribeCosRechargesResponse.h>
#include <tencentcloud/cls/v20201016/model/DescribeDashboardSubscribesRequest.h>
#include <tencentcloud/cls/v20201016/model/DescribeDashboardSubscribesResponse.h>
#include <tencentcloud/cls/v20201016/model/DescribeDataTransformInfoRequest.h>
#include <tencentcloud/cls/v20201016/model/DescribeDataTransformInfoResponse.h>
#include <tencentcloud/cls/v20201016/model/DescribeDlcDeliversRequest.h>
#include <tencentcloud/cls/v20201016/model/DescribeDlcDeliversResponse.h>
#include <tencentcloud/cls/v20201016/model/DescribeEsRechargePreviewRequest.h>
#include <tencentcloud/cls/v20201016/model/DescribeEsRechargePreviewResponse.h>
#include <tencentcloud/cls/v20201016/model/DescribeEsRechargesRequest.h>
#include <tencentcloud/cls/v20201016/model/DescribeEsRechargesResponse.h>
#include <tencentcloud/cls/v20201016/model/DescribeExportsRequest.h>
#include <tencentcloud/cls/v20201016/model/DescribeExportsResponse.h>
#include <tencentcloud/cls/v20201016/model/DescribeHostMetricConfigsRequest.h>
#include <tencentcloud/cls/v20201016/model/DescribeHostMetricConfigsResponse.h>
#include <tencentcloud/cls/v20201016/model/DescribeIndexRequest.h>
#include <tencentcloud/cls/v20201016/model/DescribeIndexResponse.h>
#include <tencentcloud/cls/v20201016/model/DescribeKafkaConsumerRequest.h>
#include <tencentcloud/cls/v20201016/model/DescribeKafkaConsumerResponse.h>
#include <tencentcloud/cls/v20201016/model/DescribeKafkaConsumerGroupDetailRequest.h>
#include <tencentcloud/cls/v20201016/model/DescribeKafkaConsumerGroupDetailResponse.h>
#include <tencentcloud/cls/v20201016/model/DescribeKafkaConsumerGroupListRequest.h>
#include <tencentcloud/cls/v20201016/model/DescribeKafkaConsumerGroupListResponse.h>
#include <tencentcloud/cls/v20201016/model/DescribeKafkaConsumerPreviewRequest.h>
#include <tencentcloud/cls/v20201016/model/DescribeKafkaConsumerPreviewResponse.h>
#include <tencentcloud/cls/v20201016/model/DescribeKafkaConsumerTopicsRequest.h>
#include <tencentcloud/cls/v20201016/model/DescribeKafkaConsumerTopicsResponse.h>
#include <tencentcloud/cls/v20201016/model/DescribeKafkaRechargesRequest.h>
#include <tencentcloud/cls/v20201016/model/DescribeKafkaRechargesResponse.h>
#include <tencentcloud/cls/v20201016/model/DescribeLogContextRequest.h>
#include <tencentcloud/cls/v20201016/model/DescribeLogContextResponse.h>
#include <tencentcloud/cls/v20201016/model/DescribeLogHistogramRequest.h>
#include <tencentcloud/cls/v20201016/model/DescribeLogHistogramResponse.h>
#include <tencentcloud/cls/v20201016/model/DescribeLogsetsRequest.h>
#include <tencentcloud/cls/v20201016/model/DescribeLogsetsResponse.h>
#include <tencentcloud/cls/v20201016/model/DescribeMachineGroupConfigsRequest.h>
#include <tencentcloud/cls/v20201016/model/DescribeMachineGroupConfigsResponse.h>
#include <tencentcloud/cls/v20201016/model/DescribeMachineGroupsRequest.h>
#include <tencentcloud/cls/v20201016/model/DescribeMachineGroupsResponse.h>
#include <tencentcloud/cls/v20201016/model/DescribeMachinesRequest.h>
#include <tencentcloud/cls/v20201016/model/DescribeMachinesResponse.h>
#include <tencentcloud/cls/v20201016/model/DescribeMetricCorrectDimensionRequest.h>
#include <tencentcloud/cls/v20201016/model/DescribeMetricCorrectDimensionResponse.h>
#include <tencentcloud/cls/v20201016/model/DescribeMetricSubscribePreviewRequest.h>
#include <tencentcloud/cls/v20201016/model/DescribeMetricSubscribePreviewResponse.h>
#include <tencentcloud/cls/v20201016/model/DescribeMetricSubscribesRequest.h>
#include <tencentcloud/cls/v20201016/model/DescribeMetricSubscribesResponse.h>
#include <tencentcloud/cls/v20201016/model/DescribeNetworkApplicationDetailRequest.h>
#include <tencentcloud/cls/v20201016/model/DescribeNetworkApplicationDetailResponse.h>
#include <tencentcloud/cls/v20201016/model/DescribeNetworkApplicationsRequest.h>
#include <tencentcloud/cls/v20201016/model/DescribeNetworkApplicationsResponse.h>
#include <tencentcloud/cls/v20201016/model/DescribeNoticeContentsRequest.h>
#include <tencentcloud/cls/v20201016/model/DescribeNoticeContentsResponse.h>
#include <tencentcloud/cls/v20201016/model/DescribePartitionsRequest.h>
#include <tencentcloud/cls/v20201016/model/DescribePartitionsResponse.h>
#include <tencentcloud/cls/v20201016/model/DescribeRebuildIndexTasksRequest.h>
#include <tencentcloud/cls/v20201016/model/DescribeRebuildIndexTasksResponse.h>
#include <tencentcloud/cls/v20201016/model/DescribeRecordingRuleTaskRequest.h>
#include <tencentcloud/cls/v20201016/model/DescribeRecordingRuleTaskResponse.h>
#include <tencentcloud/cls/v20201016/model/DescribeRecordingRuleYamlTaskRequest.h>
#include <tencentcloud/cls/v20201016/model/DescribeRecordingRuleYamlTaskResponse.h>
#include <tencentcloud/cls/v20201016/model/DescribeScheduledSqlInfoRequest.h>
#include <tencentcloud/cls/v20201016/model/DescribeScheduledSqlInfoResponse.h>
#include <tencentcloud/cls/v20201016/model/DescribeSearchViewsRequest.h>
#include <tencentcloud/cls/v20201016/model/DescribeSearchViewsResponse.h>
#include <tencentcloud/cls/v20201016/model/DescribeShipperTasksRequest.h>
#include <tencentcloud/cls/v20201016/model/DescribeShipperTasksResponse.h>
#include <tencentcloud/cls/v20201016/model/DescribeShippersRequest.h>
#include <tencentcloud/cls/v20201016/model/DescribeShippersResponse.h>
#include <tencentcloud/cls/v20201016/model/DescribeSplunkDeliversRequest.h>
#include <tencentcloud/cls/v20201016/model/DescribeSplunkDeliversResponse.h>
#include <tencentcloud/cls/v20201016/model/DescribeSplunkPreviewRequest.h>
#include <tencentcloud/cls/v20201016/model/DescribeSplunkPreviewResponse.h>
#include <tencentcloud/cls/v20201016/model/DescribeTopicBaseMetricConfigsRequest.h>
#include <tencentcloud/cls/v20201016/model/DescribeTopicBaseMetricConfigsResponse.h>
#include <tencentcloud/cls/v20201016/model/DescribeTopicMetricConfigsRequest.h>
#include <tencentcloud/cls/v20201016/model/DescribeTopicMetricConfigsResponse.h>
#include <tencentcloud/cls/v20201016/model/DescribeTopicsRequest.h>
#include <tencentcloud/cls/v20201016/model/DescribeTopicsResponse.h>
#include <tencentcloud/cls/v20201016/model/DescribeWebCallbacksRequest.h>
#include <tencentcloud/cls/v20201016/model/DescribeWebCallbacksResponse.h>
#include <tencentcloud/cls/v20201016/model/EstimateRebuildIndexTaskRequest.h>
#include <tencentcloud/cls/v20201016/model/EstimateRebuildIndexTaskResponse.h>
#include <tencentcloud/cls/v20201016/model/GetAlarmLogRequest.h>
#include <tencentcloud/cls/v20201016/model/GetAlarmLogResponse.h>
#include <tencentcloud/cls/v20201016/model/GetClsServiceRequest.h>
#include <tencentcloud/cls/v20201016/model/GetClsServiceResponse.h>
#include <tencentcloud/cls/v20201016/model/GetMetricLabelValuesRequest.h>
#include <tencentcloud/cls/v20201016/model/GetMetricLabelValuesResponse.h>
#include <tencentcloud/cls/v20201016/model/MergePartitionRequest.h>
#include <tencentcloud/cls/v20201016/model/MergePartitionResponse.h>
#include <tencentcloud/cls/v20201016/model/ModifyAlarmRequest.h>
#include <tencentcloud/cls/v20201016/model/ModifyAlarmResponse.h>
#include <tencentcloud/cls/v20201016/model/ModifyAlarmNoticeRequest.h>
#include <tencentcloud/cls/v20201016/model/ModifyAlarmNoticeResponse.h>
#include <tencentcloud/cls/v20201016/model/ModifyAlarmShieldRequest.h>
#include <tencentcloud/cls/v20201016/model/ModifyAlarmShieldResponse.h>
#include <tencentcloud/cls/v20201016/model/ModifyCloudProductLogCollectionRequest.h>
#include <tencentcloud/cls/v20201016/model/ModifyCloudProductLogCollectionResponse.h>
#include <tencentcloud/cls/v20201016/model/ModifyConfigRequest.h>
#include <tencentcloud/cls/v20201016/model/ModifyConfigResponse.h>
#include <tencentcloud/cls/v20201016/model/ModifyConsoleRequest.h>
#include <tencentcloud/cls/v20201016/model/ModifyConsoleResponse.h>
#include <tencentcloud/cls/v20201016/model/ModifyConsumerRequest.h>
#include <tencentcloud/cls/v20201016/model/ModifyConsumerResponse.h>
#include <tencentcloud/cls/v20201016/model/ModifyConsumerGroupRequest.h>
#include <tencentcloud/cls/v20201016/model/ModifyConsumerGroupResponse.h>
#include <tencentcloud/cls/v20201016/model/ModifyCosRechargeRequest.h>
#include <tencentcloud/cls/v20201016/model/ModifyCosRechargeResponse.h>
#include <tencentcloud/cls/v20201016/model/ModifyDashboardRequest.h>
#include <tencentcloud/cls/v20201016/model/ModifyDashboardResponse.h>
#include <tencentcloud/cls/v20201016/model/ModifyDashboardSubscribeRequest.h>
#include <tencentcloud/cls/v20201016/model/ModifyDashboardSubscribeResponse.h>
#include <tencentcloud/cls/v20201016/model/ModifyDataTransformRequest.h>
#include <tencentcloud/cls/v20201016/model/ModifyDataTransformResponse.h>
#include <tencentcloud/cls/v20201016/model/ModifyDlcDeliverRequest.h>
#include <tencentcloud/cls/v20201016/model/ModifyDlcDeliverResponse.h>
#include <tencentcloud/cls/v20201016/model/ModifyEsRechargeRequest.h>
#include <tencentcloud/cls/v20201016/model/ModifyEsRechargeResponse.h>
#include <tencentcloud/cls/v20201016/model/ModifyHostMetricConfigRequest.h>
#include <tencentcloud/cls/v20201016/model/ModifyHostMetricConfigResponse.h>
#include <tencentcloud/cls/v20201016/model/ModifyIndexRequest.h>
#include <tencentcloud/cls/v20201016/model/ModifyIndexResponse.h>
#include <tencentcloud/cls/v20201016/model/ModifyKafkaConsumerRequest.h>
#include <tencentcloud/cls/v20201016/model/ModifyKafkaConsumerResponse.h>
#include <tencentcloud/cls/v20201016/model/ModifyKafkaConsumerGroupOffsetRequest.h>
#include <tencentcloud/cls/v20201016/model/ModifyKafkaConsumerGroupOffsetResponse.h>
#include <tencentcloud/cls/v20201016/model/ModifyKafkaRechargeRequest.h>
#include <tencentcloud/cls/v20201016/model/ModifyKafkaRechargeResponse.h>
#include <tencentcloud/cls/v20201016/model/ModifyLogsetRequest.h>
#include <tencentcloud/cls/v20201016/model/ModifyLogsetResponse.h>
#include <tencentcloud/cls/v20201016/model/ModifyMachineGroupRequest.h>
#include <tencentcloud/cls/v20201016/model/ModifyMachineGroupResponse.h>
#include <tencentcloud/cls/v20201016/model/ModifyMetricConfigRequest.h>
#include <tencentcloud/cls/v20201016/model/ModifyMetricConfigResponse.h>
#include <tencentcloud/cls/v20201016/model/ModifyMetricSubscribeRequest.h>
#include <tencentcloud/cls/v20201016/model/ModifyMetricSubscribeResponse.h>
#include <tencentcloud/cls/v20201016/model/ModifyNetworkApplicationRequest.h>
#include <tencentcloud/cls/v20201016/model/ModifyNetworkApplicationResponse.h>
#include <tencentcloud/cls/v20201016/model/ModifyNoticeContentRequest.h>
#include <tencentcloud/cls/v20201016/model/ModifyNoticeContentResponse.h>
#include <tencentcloud/cls/v20201016/model/ModifyRecordingRuleTaskRequest.h>
#include <tencentcloud/cls/v20201016/model/ModifyRecordingRuleTaskResponse.h>
#include <tencentcloud/cls/v20201016/model/ModifyRecordingRuleYamlTaskRequest.h>
#include <tencentcloud/cls/v20201016/model/ModifyRecordingRuleYamlTaskResponse.h>
#include <tencentcloud/cls/v20201016/model/ModifyScheduledSqlRequest.h>
#include <tencentcloud/cls/v20201016/model/ModifyScheduledSqlResponse.h>
#include <tencentcloud/cls/v20201016/model/ModifySearchViewRequest.h>
#include <tencentcloud/cls/v20201016/model/ModifySearchViewResponse.h>
#include <tencentcloud/cls/v20201016/model/ModifyShipperRequest.h>
#include <tencentcloud/cls/v20201016/model/ModifyShipperResponse.h>
#include <tencentcloud/cls/v20201016/model/ModifySplunkDeliverRequest.h>
#include <tencentcloud/cls/v20201016/model/ModifySplunkDeliverResponse.h>
#include <tencentcloud/cls/v20201016/model/ModifyTopicRequest.h>
#include <tencentcloud/cls/v20201016/model/ModifyTopicResponse.h>
#include <tencentcloud/cls/v20201016/model/ModifyWebCallbackRequest.h>
#include <tencentcloud/cls/v20201016/model/ModifyWebCallbackResponse.h>
#include <tencentcloud/cls/v20201016/model/OpenClawServiceRequest.h>
#include <tencentcloud/cls/v20201016/model/OpenClawServiceResponse.h>
#include <tencentcloud/cls/v20201016/model/OpenClsServiceRequest.h>
#include <tencentcloud/cls/v20201016/model/OpenClsServiceResponse.h>
#include <tencentcloud/cls/v20201016/model/OpenKafkaConsumerRequest.h>
#include <tencentcloud/cls/v20201016/model/OpenKafkaConsumerResponse.h>
#include <tencentcloud/cls/v20201016/model/PreviewKafkaRechargeRequest.h>
#include <tencentcloud/cls/v20201016/model/PreviewKafkaRechargeResponse.h>
#include <tencentcloud/cls/v20201016/model/QueryMetricRequest.h>
#include <tencentcloud/cls/v20201016/model/QueryMetricResponse.h>
#include <tencentcloud/cls/v20201016/model/QueryRangeMetricRequest.h>
#include <tencentcloud/cls/v20201016/model/QueryRangeMetricResponse.h>
#include <tencentcloud/cls/v20201016/model/RetryShipperTaskRequest.h>
#include <tencentcloud/cls/v20201016/model/RetryShipperTaskResponse.h>
#include <tencentcloud/cls/v20201016/model/SearchCosRechargeInfoRequest.h>
#include <tencentcloud/cls/v20201016/model/SearchCosRechargeInfoResponse.h>
#include <tencentcloud/cls/v20201016/model/SearchDashboardSubscribeRequest.h>
#include <tencentcloud/cls/v20201016/model/SearchDashboardSubscribeResponse.h>
#include <tencentcloud/cls/v20201016/model/SearchLogRequest.h>
#include <tencentcloud/cls/v20201016/model/SearchLogResponse.h>
#include <tencentcloud/cls/v20201016/model/SendConsumerHeartbeatRequest.h>
#include <tencentcloud/cls/v20201016/model/SendConsumerHeartbeatResponse.h>
#include <tencentcloud/cls/v20201016/model/SplitPartitionRequest.h>
#include <tencentcloud/cls/v20201016/model/SplitPartitionResponse.h>
#include <tencentcloud/cls/v20201016/model/UploadLogRequest.h>
#include <tencentcloud/cls/v20201016/model/UploadLogResponse.h>


namespace TencentCloud
{
    namespace Cls
    {
        namespace V20201016
        {
            class ClsClient : public AbstractClient
            {
            public:
                ClsClient(const Credential &credential, const std::string &region);
                ClsClient(const Credential &credential, const std::string &region, const ClientProfile &profile);

                typedef Outcome<Core::Error, Model::AddMachineGroupInfoResponse> AddMachineGroupInfoOutcome;
                typedef std::future<AddMachineGroupInfoOutcome> AddMachineGroupInfoOutcomeCallable;
                typedef std::function<void(const ClsClient*, const Model::AddMachineGroupInfoRequest&, AddMachineGroupInfoOutcome, const std::shared_ptr<const AsyncCallerContext>&)> AddMachineGroupInfoAsyncHandler;
                typedef Outcome<Core::Error, Model::ApplyConfigToMachineGroupResponse> ApplyConfigToMachineGroupOutcome;
                typedef std::future<ApplyConfigToMachineGroupOutcome> ApplyConfigToMachineGroupOutcomeCallable;
                typedef std::function<void(const ClsClient*, const Model::ApplyConfigToMachineGroupRequest&, ApplyConfigToMachineGroupOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ApplyConfigToMachineGroupAsyncHandler;
                typedef Outcome<Core::Error, Model::CancelRebuildIndexTaskResponse> CancelRebuildIndexTaskOutcome;
                typedef std::future<CancelRebuildIndexTaskOutcome> CancelRebuildIndexTaskOutcomeCallable;
                typedef std::function<void(const ClsClient*, const Model::CancelRebuildIndexTaskRequest&, CancelRebuildIndexTaskOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CancelRebuildIndexTaskAsyncHandler;
                typedef Outcome<Core::Error, Model::ChatCompletionsResponse> ChatCompletionsOutcome;
                typedef std::future<ChatCompletionsOutcome> ChatCompletionsOutcomeCallable;
                typedef std::function<void(const ClsClient*, const Model::ChatCompletionsRequest&, ChatCompletionsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ChatCompletionsAsyncHandler;
                typedef Outcome<Core::Error, Model::CheckFunctionResponse> CheckFunctionOutcome;
                typedef std::future<CheckFunctionOutcome> CheckFunctionOutcomeCallable;
                typedef std::function<void(const ClsClient*, const Model::CheckFunctionRequest&, CheckFunctionOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CheckFunctionAsyncHandler;
                typedef Outcome<Core::Error, Model::CheckRechargeKafkaServerResponse> CheckRechargeKafkaServerOutcome;
                typedef std::future<CheckRechargeKafkaServerOutcome> CheckRechargeKafkaServerOutcomeCallable;
                typedef std::function<void(const ClsClient*, const Model::CheckRechargeKafkaServerRequest&, CheckRechargeKafkaServerOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CheckRechargeKafkaServerAsyncHandler;
                typedef Outcome<Core::Error, Model::CloseKafkaConsumerResponse> CloseKafkaConsumerOutcome;
                typedef std::future<CloseKafkaConsumerOutcome> CloseKafkaConsumerOutcomeCallable;
                typedef std::function<void(const ClsClient*, const Model::CloseKafkaConsumerRequest&, CloseKafkaConsumerOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CloseKafkaConsumerAsyncHandler;
                typedef Outcome<Core::Error, Model::CommitConsumerOffsetsResponse> CommitConsumerOffsetsOutcome;
                typedef std::future<CommitConsumerOffsetsOutcome> CommitConsumerOffsetsOutcomeCallable;
                typedef std::function<void(const ClsClient*, const Model::CommitConsumerOffsetsRequest&, CommitConsumerOffsetsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CommitConsumerOffsetsAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateAlarmResponse> CreateAlarmOutcome;
                typedef std::future<CreateAlarmOutcome> CreateAlarmOutcomeCallable;
                typedef std::function<void(const ClsClient*, const Model::CreateAlarmRequest&, CreateAlarmOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateAlarmAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateAlarmNoticeResponse> CreateAlarmNoticeOutcome;
                typedef std::future<CreateAlarmNoticeOutcome> CreateAlarmNoticeOutcomeCallable;
                typedef std::function<void(const ClsClient*, const Model::CreateAlarmNoticeRequest&, CreateAlarmNoticeOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateAlarmNoticeAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateAlarmShieldResponse> CreateAlarmShieldOutcome;
                typedef std::future<CreateAlarmShieldOutcome> CreateAlarmShieldOutcomeCallable;
                typedef std::function<void(const ClsClient*, const Model::CreateAlarmShieldRequest&, CreateAlarmShieldOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateAlarmShieldAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateCloudProductLogCollectionResponse> CreateCloudProductLogCollectionOutcome;
                typedef std::future<CreateCloudProductLogCollectionOutcome> CreateCloudProductLogCollectionOutcomeCallable;
                typedef std::function<void(const ClsClient*, const Model::CreateCloudProductLogCollectionRequest&, CreateCloudProductLogCollectionOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateCloudProductLogCollectionAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateConfigResponse> CreateConfigOutcome;
                typedef std::future<CreateConfigOutcome> CreateConfigOutcomeCallable;
                typedef std::function<void(const ClsClient*, const Model::CreateConfigRequest&, CreateConfigOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateConfigAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateConsoleResponse> CreateConsoleOutcome;
                typedef std::future<CreateConsoleOutcome> CreateConsoleOutcomeCallable;
                typedef std::function<void(const ClsClient*, const Model::CreateConsoleRequest&, CreateConsoleOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateConsoleAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateConsumerResponse> CreateConsumerOutcome;
                typedef std::future<CreateConsumerOutcome> CreateConsumerOutcomeCallable;
                typedef std::function<void(const ClsClient*, const Model::CreateConsumerRequest&, CreateConsumerOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateConsumerAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateConsumerGroupResponse> CreateConsumerGroupOutcome;
                typedef std::future<CreateConsumerGroupOutcome> CreateConsumerGroupOutcomeCallable;
                typedef std::function<void(const ClsClient*, const Model::CreateConsumerGroupRequest&, CreateConsumerGroupOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateConsumerGroupAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateCosRechargeResponse> CreateCosRechargeOutcome;
                typedef std::future<CreateCosRechargeOutcome> CreateCosRechargeOutcomeCallable;
                typedef std::function<void(const ClsClient*, const Model::CreateCosRechargeRequest&, CreateCosRechargeOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateCosRechargeAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateDashboardResponse> CreateDashboardOutcome;
                typedef std::future<CreateDashboardOutcome> CreateDashboardOutcomeCallable;
                typedef std::function<void(const ClsClient*, const Model::CreateDashboardRequest&, CreateDashboardOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateDashboardAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateDashboardSubscribeResponse> CreateDashboardSubscribeOutcome;
                typedef std::future<CreateDashboardSubscribeOutcome> CreateDashboardSubscribeOutcomeCallable;
                typedef std::function<void(const ClsClient*, const Model::CreateDashboardSubscribeRequest&, CreateDashboardSubscribeOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateDashboardSubscribeAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateDataTransformResponse> CreateDataTransformOutcome;
                typedef std::future<CreateDataTransformOutcome> CreateDataTransformOutcomeCallable;
                typedef std::function<void(const ClsClient*, const Model::CreateDataTransformRequest&, CreateDataTransformOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateDataTransformAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateDeliverCloudFunctionResponse> CreateDeliverCloudFunctionOutcome;
                typedef std::future<CreateDeliverCloudFunctionOutcome> CreateDeliverCloudFunctionOutcomeCallable;
                typedef std::function<void(const ClsClient*, const Model::CreateDeliverCloudFunctionRequest&, CreateDeliverCloudFunctionOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateDeliverCloudFunctionAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateDlcDeliverResponse> CreateDlcDeliverOutcome;
                typedef std::future<CreateDlcDeliverOutcome> CreateDlcDeliverOutcomeCallable;
                typedef std::function<void(const ClsClient*, const Model::CreateDlcDeliverRequest&, CreateDlcDeliverOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateDlcDeliverAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateEsRechargeResponse> CreateEsRechargeOutcome;
                typedef std::future<CreateEsRechargeOutcome> CreateEsRechargeOutcomeCallable;
                typedef std::function<void(const ClsClient*, const Model::CreateEsRechargeRequest&, CreateEsRechargeOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateEsRechargeAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateExportResponse> CreateExportOutcome;
                typedef std::future<CreateExportOutcome> CreateExportOutcomeCallable;
                typedef std::function<void(const ClsClient*, const Model::CreateExportRequest&, CreateExportOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateExportAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateHostMetricConfigResponse> CreateHostMetricConfigOutcome;
                typedef std::future<CreateHostMetricConfigOutcome> CreateHostMetricConfigOutcomeCallable;
                typedef std::function<void(const ClsClient*, const Model::CreateHostMetricConfigRequest&, CreateHostMetricConfigOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateHostMetricConfigAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateIndexResponse> CreateIndexOutcome;
                typedef std::future<CreateIndexOutcome> CreateIndexOutcomeCallable;
                typedef std::function<void(const ClsClient*, const Model::CreateIndexRequest&, CreateIndexOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateIndexAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateKafkaRechargeResponse> CreateKafkaRechargeOutcome;
                typedef std::future<CreateKafkaRechargeOutcome> CreateKafkaRechargeOutcomeCallable;
                typedef std::function<void(const ClsClient*, const Model::CreateKafkaRechargeRequest&, CreateKafkaRechargeOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateKafkaRechargeAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateLogsetResponse> CreateLogsetOutcome;
                typedef std::future<CreateLogsetOutcome> CreateLogsetOutcomeCallable;
                typedef std::function<void(const ClsClient*, const Model::CreateLogsetRequest&, CreateLogsetOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateLogsetAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateMachineGroupResponse> CreateMachineGroupOutcome;
                typedef std::future<CreateMachineGroupOutcome> CreateMachineGroupOutcomeCallable;
                typedef std::function<void(const ClsClient*, const Model::CreateMachineGroupRequest&, CreateMachineGroupOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateMachineGroupAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateMetricConfigResponse> CreateMetricConfigOutcome;
                typedef std::future<CreateMetricConfigOutcome> CreateMetricConfigOutcomeCallable;
                typedef std::function<void(const ClsClient*, const Model::CreateMetricConfigRequest&, CreateMetricConfigOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateMetricConfigAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateMetricSubscribeResponse> CreateMetricSubscribeOutcome;
                typedef std::future<CreateMetricSubscribeOutcome> CreateMetricSubscribeOutcomeCallable;
                typedef std::function<void(const ClsClient*, const Model::CreateMetricSubscribeRequest&, CreateMetricSubscribeOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateMetricSubscribeAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateNetworkApplicationResponse> CreateNetworkApplicationOutcome;
                typedef std::future<CreateNetworkApplicationOutcome> CreateNetworkApplicationOutcomeCallable;
                typedef std::function<void(const ClsClient*, const Model::CreateNetworkApplicationRequest&, CreateNetworkApplicationOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateNetworkApplicationAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateNoticeContentResponse> CreateNoticeContentOutcome;
                typedef std::future<CreateNoticeContentOutcome> CreateNoticeContentOutcomeCallable;
                typedef std::function<void(const ClsClient*, const Model::CreateNoticeContentRequest&, CreateNoticeContentOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateNoticeContentAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateRebuildIndexTaskResponse> CreateRebuildIndexTaskOutcome;
                typedef std::future<CreateRebuildIndexTaskOutcome> CreateRebuildIndexTaskOutcomeCallable;
                typedef std::function<void(const ClsClient*, const Model::CreateRebuildIndexTaskRequest&, CreateRebuildIndexTaskOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateRebuildIndexTaskAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateRecordingRuleTaskResponse> CreateRecordingRuleTaskOutcome;
                typedef std::future<CreateRecordingRuleTaskOutcome> CreateRecordingRuleTaskOutcomeCallable;
                typedef std::function<void(const ClsClient*, const Model::CreateRecordingRuleTaskRequest&, CreateRecordingRuleTaskOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateRecordingRuleTaskAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateRecordingRuleYamlTaskResponse> CreateRecordingRuleYamlTaskOutcome;
                typedef std::future<CreateRecordingRuleYamlTaskOutcome> CreateRecordingRuleYamlTaskOutcomeCallable;
                typedef std::function<void(const ClsClient*, const Model::CreateRecordingRuleYamlTaskRequest&, CreateRecordingRuleYamlTaskOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateRecordingRuleYamlTaskAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateScheduledSqlResponse> CreateScheduledSqlOutcome;
                typedef std::future<CreateScheduledSqlOutcome> CreateScheduledSqlOutcomeCallable;
                typedef std::function<void(const ClsClient*, const Model::CreateScheduledSqlRequest&, CreateScheduledSqlOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateScheduledSqlAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateSearchViewResponse> CreateSearchViewOutcome;
                typedef std::future<CreateSearchViewOutcome> CreateSearchViewOutcomeCallable;
                typedef std::function<void(const ClsClient*, const Model::CreateSearchViewRequest&, CreateSearchViewOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateSearchViewAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateShipperResponse> CreateShipperOutcome;
                typedef std::future<CreateShipperOutcome> CreateShipperOutcomeCallable;
                typedef std::function<void(const ClsClient*, const Model::CreateShipperRequest&, CreateShipperOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateShipperAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateSplunkDeliverResponse> CreateSplunkDeliverOutcome;
                typedef std::future<CreateSplunkDeliverOutcome> CreateSplunkDeliverOutcomeCallable;
                typedef std::function<void(const ClsClient*, const Model::CreateSplunkDeliverRequest&, CreateSplunkDeliverOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateSplunkDeliverAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateTopicResponse> CreateTopicOutcome;
                typedef std::future<CreateTopicOutcome> CreateTopicOutcomeCallable;
                typedef std::function<void(const ClsClient*, const Model::CreateTopicRequest&, CreateTopicOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateTopicAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateWebCallbackResponse> CreateWebCallbackOutcome;
                typedef std::future<CreateWebCallbackOutcome> CreateWebCallbackOutcomeCallable;
                typedef std::function<void(const ClsClient*, const Model::CreateWebCallbackRequest&, CreateWebCallbackOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateWebCallbackAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteAlarmResponse> DeleteAlarmOutcome;
                typedef std::future<DeleteAlarmOutcome> DeleteAlarmOutcomeCallable;
                typedef std::function<void(const ClsClient*, const Model::DeleteAlarmRequest&, DeleteAlarmOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteAlarmAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteAlarmNoticeResponse> DeleteAlarmNoticeOutcome;
                typedef std::future<DeleteAlarmNoticeOutcome> DeleteAlarmNoticeOutcomeCallable;
                typedef std::function<void(const ClsClient*, const Model::DeleteAlarmNoticeRequest&, DeleteAlarmNoticeOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteAlarmNoticeAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteAlarmShieldResponse> DeleteAlarmShieldOutcome;
                typedef std::future<DeleteAlarmShieldOutcome> DeleteAlarmShieldOutcomeCallable;
                typedef std::function<void(const ClsClient*, const Model::DeleteAlarmShieldRequest&, DeleteAlarmShieldOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteAlarmShieldAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteCloudProductLogCollectionResponse> DeleteCloudProductLogCollectionOutcome;
                typedef std::future<DeleteCloudProductLogCollectionOutcome> DeleteCloudProductLogCollectionOutcomeCallable;
                typedef std::function<void(const ClsClient*, const Model::DeleteCloudProductLogCollectionRequest&, DeleteCloudProductLogCollectionOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteCloudProductLogCollectionAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteConfigResponse> DeleteConfigOutcome;
                typedef std::future<DeleteConfigOutcome> DeleteConfigOutcomeCallable;
                typedef std::function<void(const ClsClient*, const Model::DeleteConfigRequest&, DeleteConfigOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteConfigAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteConfigFromMachineGroupResponse> DeleteConfigFromMachineGroupOutcome;
                typedef std::future<DeleteConfigFromMachineGroupOutcome> DeleteConfigFromMachineGroupOutcomeCallable;
                typedef std::function<void(const ClsClient*, const Model::DeleteConfigFromMachineGroupRequest&, DeleteConfigFromMachineGroupOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteConfigFromMachineGroupAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteConsoleResponse> DeleteConsoleOutcome;
                typedef std::future<DeleteConsoleOutcome> DeleteConsoleOutcomeCallable;
                typedef std::function<void(const ClsClient*, const Model::DeleteConsoleRequest&, DeleteConsoleOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteConsoleAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteConsumerResponse> DeleteConsumerOutcome;
                typedef std::future<DeleteConsumerOutcome> DeleteConsumerOutcomeCallable;
                typedef std::function<void(const ClsClient*, const Model::DeleteConsumerRequest&, DeleteConsumerOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteConsumerAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteConsumerGroupResponse> DeleteConsumerGroupOutcome;
                typedef std::future<DeleteConsumerGroupOutcome> DeleteConsumerGroupOutcomeCallable;
                typedef std::function<void(const ClsClient*, const Model::DeleteConsumerGroupRequest&, DeleteConsumerGroupOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteConsumerGroupAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteCosRechargeResponse> DeleteCosRechargeOutcome;
                typedef std::future<DeleteCosRechargeOutcome> DeleteCosRechargeOutcomeCallable;
                typedef std::function<void(const ClsClient*, const Model::DeleteCosRechargeRequest&, DeleteCosRechargeOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteCosRechargeAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteDashboardResponse> DeleteDashboardOutcome;
                typedef std::future<DeleteDashboardOutcome> DeleteDashboardOutcomeCallable;
                typedef std::function<void(const ClsClient*, const Model::DeleteDashboardRequest&, DeleteDashboardOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteDashboardAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteDashboardSubscribeResponse> DeleteDashboardSubscribeOutcome;
                typedef std::future<DeleteDashboardSubscribeOutcome> DeleteDashboardSubscribeOutcomeCallable;
                typedef std::function<void(const ClsClient*, const Model::DeleteDashboardSubscribeRequest&, DeleteDashboardSubscribeOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteDashboardSubscribeAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteDataTransformResponse> DeleteDataTransformOutcome;
                typedef std::future<DeleteDataTransformOutcome> DeleteDataTransformOutcomeCallable;
                typedef std::function<void(const ClsClient*, const Model::DeleteDataTransformRequest&, DeleteDataTransformOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteDataTransformAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteDlcDeliverResponse> DeleteDlcDeliverOutcome;
                typedef std::future<DeleteDlcDeliverOutcome> DeleteDlcDeliverOutcomeCallable;
                typedef std::function<void(const ClsClient*, const Model::DeleteDlcDeliverRequest&, DeleteDlcDeliverOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteDlcDeliverAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteEsRechargeResponse> DeleteEsRechargeOutcome;
                typedef std::future<DeleteEsRechargeOutcome> DeleteEsRechargeOutcomeCallable;
                typedef std::function<void(const ClsClient*, const Model::DeleteEsRechargeRequest&, DeleteEsRechargeOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteEsRechargeAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteExportResponse> DeleteExportOutcome;
                typedef std::future<DeleteExportOutcome> DeleteExportOutcomeCallable;
                typedef std::function<void(const ClsClient*, const Model::DeleteExportRequest&, DeleteExportOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteExportAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteHostMetricConfigResponse> DeleteHostMetricConfigOutcome;
                typedef std::future<DeleteHostMetricConfigOutcome> DeleteHostMetricConfigOutcomeCallable;
                typedef std::function<void(const ClsClient*, const Model::DeleteHostMetricConfigRequest&, DeleteHostMetricConfigOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteHostMetricConfigAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteIndexResponse> DeleteIndexOutcome;
                typedef std::future<DeleteIndexOutcome> DeleteIndexOutcomeCallable;
                typedef std::function<void(const ClsClient*, const Model::DeleteIndexRequest&, DeleteIndexOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteIndexAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteKafkaRechargeResponse> DeleteKafkaRechargeOutcome;
                typedef std::future<DeleteKafkaRechargeOutcome> DeleteKafkaRechargeOutcomeCallable;
                typedef std::function<void(const ClsClient*, const Model::DeleteKafkaRechargeRequest&, DeleteKafkaRechargeOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteKafkaRechargeAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteLogsetResponse> DeleteLogsetOutcome;
                typedef std::future<DeleteLogsetOutcome> DeleteLogsetOutcomeCallable;
                typedef std::function<void(const ClsClient*, const Model::DeleteLogsetRequest&, DeleteLogsetOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteLogsetAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteMachineGroupResponse> DeleteMachineGroupOutcome;
                typedef std::future<DeleteMachineGroupOutcome> DeleteMachineGroupOutcomeCallable;
                typedef std::function<void(const ClsClient*, const Model::DeleteMachineGroupRequest&, DeleteMachineGroupOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteMachineGroupAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteMachineGroupInfoResponse> DeleteMachineGroupInfoOutcome;
                typedef std::future<DeleteMachineGroupInfoOutcome> DeleteMachineGroupInfoOutcomeCallable;
                typedef std::function<void(const ClsClient*, const Model::DeleteMachineGroupInfoRequest&, DeleteMachineGroupInfoOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteMachineGroupInfoAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteMetricConfigResponse> DeleteMetricConfigOutcome;
                typedef std::future<DeleteMetricConfigOutcome> DeleteMetricConfigOutcomeCallable;
                typedef std::function<void(const ClsClient*, const Model::DeleteMetricConfigRequest&, DeleteMetricConfigOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteMetricConfigAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteMetricSubscribeResponse> DeleteMetricSubscribeOutcome;
                typedef std::future<DeleteMetricSubscribeOutcome> DeleteMetricSubscribeOutcomeCallable;
                typedef std::function<void(const ClsClient*, const Model::DeleteMetricSubscribeRequest&, DeleteMetricSubscribeOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteMetricSubscribeAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteNetworkApplicationResponse> DeleteNetworkApplicationOutcome;
                typedef std::future<DeleteNetworkApplicationOutcome> DeleteNetworkApplicationOutcomeCallable;
                typedef std::function<void(const ClsClient*, const Model::DeleteNetworkApplicationRequest&, DeleteNetworkApplicationOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteNetworkApplicationAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteNoticeContentResponse> DeleteNoticeContentOutcome;
                typedef std::future<DeleteNoticeContentOutcome> DeleteNoticeContentOutcomeCallable;
                typedef std::function<void(const ClsClient*, const Model::DeleteNoticeContentRequest&, DeleteNoticeContentOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteNoticeContentAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteRecordingRuleTaskResponse> DeleteRecordingRuleTaskOutcome;
                typedef std::future<DeleteRecordingRuleTaskOutcome> DeleteRecordingRuleTaskOutcomeCallable;
                typedef std::function<void(const ClsClient*, const Model::DeleteRecordingRuleTaskRequest&, DeleteRecordingRuleTaskOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteRecordingRuleTaskAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteRecordingRuleYamlTaskResponse> DeleteRecordingRuleYamlTaskOutcome;
                typedef std::future<DeleteRecordingRuleYamlTaskOutcome> DeleteRecordingRuleYamlTaskOutcomeCallable;
                typedef std::function<void(const ClsClient*, const Model::DeleteRecordingRuleYamlTaskRequest&, DeleteRecordingRuleYamlTaskOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteRecordingRuleYamlTaskAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteScheduledSqlResponse> DeleteScheduledSqlOutcome;
                typedef std::future<DeleteScheduledSqlOutcome> DeleteScheduledSqlOutcomeCallable;
                typedef std::function<void(const ClsClient*, const Model::DeleteScheduledSqlRequest&, DeleteScheduledSqlOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteScheduledSqlAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteSearchViewResponse> DeleteSearchViewOutcome;
                typedef std::future<DeleteSearchViewOutcome> DeleteSearchViewOutcomeCallable;
                typedef std::function<void(const ClsClient*, const Model::DeleteSearchViewRequest&, DeleteSearchViewOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteSearchViewAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteShipperResponse> DeleteShipperOutcome;
                typedef std::future<DeleteShipperOutcome> DeleteShipperOutcomeCallable;
                typedef std::function<void(const ClsClient*, const Model::DeleteShipperRequest&, DeleteShipperOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteShipperAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteSplunkDeliverResponse> DeleteSplunkDeliverOutcome;
                typedef std::future<DeleteSplunkDeliverOutcome> DeleteSplunkDeliverOutcomeCallable;
                typedef std::function<void(const ClsClient*, const Model::DeleteSplunkDeliverRequest&, DeleteSplunkDeliverOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteSplunkDeliverAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteTopicResponse> DeleteTopicOutcome;
                typedef std::future<DeleteTopicOutcome> DeleteTopicOutcomeCallable;
                typedef std::function<void(const ClsClient*, const Model::DeleteTopicRequest&, DeleteTopicOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteTopicAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteWebCallbackResponse> DeleteWebCallbackOutcome;
                typedef std::future<DeleteWebCallbackOutcome> DeleteWebCallbackOutcomeCallable;
                typedef std::function<void(const ClsClient*, const Model::DeleteWebCallbackRequest&, DeleteWebCallbackOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteWebCallbackAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeAlarmNoticesResponse> DescribeAlarmNoticesOutcome;
                typedef std::future<DescribeAlarmNoticesOutcome> DescribeAlarmNoticesOutcomeCallable;
                typedef std::function<void(const ClsClient*, const Model::DescribeAlarmNoticesRequest&, DescribeAlarmNoticesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeAlarmNoticesAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeAlarmShieldsResponse> DescribeAlarmShieldsOutcome;
                typedef std::future<DescribeAlarmShieldsOutcome> DescribeAlarmShieldsOutcomeCallable;
                typedef std::function<void(const ClsClient*, const Model::DescribeAlarmShieldsRequest&, DescribeAlarmShieldsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeAlarmShieldsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeAlarmsResponse> DescribeAlarmsOutcome;
                typedef std::future<DescribeAlarmsOutcome> DescribeAlarmsOutcomeCallable;
                typedef std::function<void(const ClsClient*, const Model::DescribeAlarmsRequest&, DescribeAlarmsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeAlarmsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeAlertRecordHistoryResponse> DescribeAlertRecordHistoryOutcome;
                typedef std::future<DescribeAlertRecordHistoryOutcome> DescribeAlertRecordHistoryOutcomeCallable;
                typedef std::function<void(const ClsClient*, const Model::DescribeAlertRecordHistoryRequest&, DescribeAlertRecordHistoryOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeAlertRecordHistoryAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeCloudProductLogTasksResponse> DescribeCloudProductLogTasksOutcome;
                typedef std::future<DescribeCloudProductLogTasksOutcome> DescribeCloudProductLogTasksOutcomeCallable;
                typedef std::function<void(const ClsClient*, const Model::DescribeCloudProductLogTasksRequest&, DescribeCloudProductLogTasksOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeCloudProductLogTasksAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeClusterBaseMetricConfigsResponse> DescribeClusterBaseMetricConfigsOutcome;
                typedef std::future<DescribeClusterBaseMetricConfigsOutcome> DescribeClusterBaseMetricConfigsOutcomeCallable;
                typedef std::function<void(const ClsClient*, const Model::DescribeClusterBaseMetricConfigsRequest&, DescribeClusterBaseMetricConfigsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeClusterBaseMetricConfigsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeClusterMetricConfigsResponse> DescribeClusterMetricConfigsOutcome;
                typedef std::future<DescribeClusterMetricConfigsOutcome> DescribeClusterMetricConfigsOutcomeCallable;
                typedef std::function<void(const ClsClient*, const Model::DescribeClusterMetricConfigsRequest&, DescribeClusterMetricConfigsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeClusterMetricConfigsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeConfigMachineGroupsResponse> DescribeConfigMachineGroupsOutcome;
                typedef std::future<DescribeConfigMachineGroupsOutcome> DescribeConfigMachineGroupsOutcomeCallable;
                typedef std::function<void(const ClsClient*, const Model::DescribeConfigMachineGroupsRequest&, DescribeConfigMachineGroupsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeConfigMachineGroupsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeConfigsResponse> DescribeConfigsOutcome;
                typedef std::future<DescribeConfigsOutcome> DescribeConfigsOutcomeCallable;
                typedef std::function<void(const ClsClient*, const Model::DescribeConfigsRequest&, DescribeConfigsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeConfigsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeConsolesResponse> DescribeConsolesOutcome;
                typedef std::future<DescribeConsolesOutcome> DescribeConsolesOutcomeCallable;
                typedef std::function<void(const ClsClient*, const Model::DescribeConsolesRequest&, DescribeConsolesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeConsolesAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeConsumerResponse> DescribeConsumerOutcome;
                typedef std::future<DescribeConsumerOutcome> DescribeConsumerOutcomeCallable;
                typedef std::function<void(const ClsClient*, const Model::DescribeConsumerRequest&, DescribeConsumerOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeConsumerAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeConsumerGroupsResponse> DescribeConsumerGroupsOutcome;
                typedef std::future<DescribeConsumerGroupsOutcome> DescribeConsumerGroupsOutcomeCallable;
                typedef std::function<void(const ClsClient*, const Model::DescribeConsumerGroupsRequest&, DescribeConsumerGroupsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeConsumerGroupsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeConsumerOffsetsResponse> DescribeConsumerOffsetsOutcome;
                typedef std::future<DescribeConsumerOffsetsOutcome> DescribeConsumerOffsetsOutcomeCallable;
                typedef std::function<void(const ClsClient*, const Model::DescribeConsumerOffsetsRequest&, DescribeConsumerOffsetsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeConsumerOffsetsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeConsumerPreviewResponse> DescribeConsumerPreviewOutcome;
                typedef std::future<DescribeConsumerPreviewOutcome> DescribeConsumerPreviewOutcomeCallable;
                typedef std::function<void(const ClsClient*, const Model::DescribeConsumerPreviewRequest&, DescribeConsumerPreviewOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeConsumerPreviewAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeConsumersResponse> DescribeConsumersOutcome;
                typedef std::future<DescribeConsumersOutcome> DescribeConsumersOutcomeCallable;
                typedef std::function<void(const ClsClient*, const Model::DescribeConsumersRequest&, DescribeConsumersOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeConsumersAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeCosRechargesResponse> DescribeCosRechargesOutcome;
                typedef std::future<DescribeCosRechargesOutcome> DescribeCosRechargesOutcomeCallable;
                typedef std::function<void(const ClsClient*, const Model::DescribeCosRechargesRequest&, DescribeCosRechargesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeCosRechargesAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeDashboardSubscribesResponse> DescribeDashboardSubscribesOutcome;
                typedef std::future<DescribeDashboardSubscribesOutcome> DescribeDashboardSubscribesOutcomeCallable;
                typedef std::function<void(const ClsClient*, const Model::DescribeDashboardSubscribesRequest&, DescribeDashboardSubscribesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDashboardSubscribesAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeDataTransformInfoResponse> DescribeDataTransformInfoOutcome;
                typedef std::future<DescribeDataTransformInfoOutcome> DescribeDataTransformInfoOutcomeCallable;
                typedef std::function<void(const ClsClient*, const Model::DescribeDataTransformInfoRequest&, DescribeDataTransformInfoOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDataTransformInfoAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeDlcDeliversResponse> DescribeDlcDeliversOutcome;
                typedef std::future<DescribeDlcDeliversOutcome> DescribeDlcDeliversOutcomeCallable;
                typedef std::function<void(const ClsClient*, const Model::DescribeDlcDeliversRequest&, DescribeDlcDeliversOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDlcDeliversAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeEsRechargePreviewResponse> DescribeEsRechargePreviewOutcome;
                typedef std::future<DescribeEsRechargePreviewOutcome> DescribeEsRechargePreviewOutcomeCallable;
                typedef std::function<void(const ClsClient*, const Model::DescribeEsRechargePreviewRequest&, DescribeEsRechargePreviewOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeEsRechargePreviewAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeEsRechargesResponse> DescribeEsRechargesOutcome;
                typedef std::future<DescribeEsRechargesOutcome> DescribeEsRechargesOutcomeCallable;
                typedef std::function<void(const ClsClient*, const Model::DescribeEsRechargesRequest&, DescribeEsRechargesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeEsRechargesAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeExportsResponse> DescribeExportsOutcome;
                typedef std::future<DescribeExportsOutcome> DescribeExportsOutcomeCallable;
                typedef std::function<void(const ClsClient*, const Model::DescribeExportsRequest&, DescribeExportsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeExportsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeHostMetricConfigsResponse> DescribeHostMetricConfigsOutcome;
                typedef std::future<DescribeHostMetricConfigsOutcome> DescribeHostMetricConfigsOutcomeCallable;
                typedef std::function<void(const ClsClient*, const Model::DescribeHostMetricConfigsRequest&, DescribeHostMetricConfigsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeHostMetricConfigsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeIndexResponse> DescribeIndexOutcome;
                typedef std::future<DescribeIndexOutcome> DescribeIndexOutcomeCallable;
                typedef std::function<void(const ClsClient*, const Model::DescribeIndexRequest&, DescribeIndexOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeIndexAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeKafkaConsumerResponse> DescribeKafkaConsumerOutcome;
                typedef std::future<DescribeKafkaConsumerOutcome> DescribeKafkaConsumerOutcomeCallable;
                typedef std::function<void(const ClsClient*, const Model::DescribeKafkaConsumerRequest&, DescribeKafkaConsumerOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeKafkaConsumerAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeKafkaConsumerGroupDetailResponse> DescribeKafkaConsumerGroupDetailOutcome;
                typedef std::future<DescribeKafkaConsumerGroupDetailOutcome> DescribeKafkaConsumerGroupDetailOutcomeCallable;
                typedef std::function<void(const ClsClient*, const Model::DescribeKafkaConsumerGroupDetailRequest&, DescribeKafkaConsumerGroupDetailOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeKafkaConsumerGroupDetailAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeKafkaConsumerGroupListResponse> DescribeKafkaConsumerGroupListOutcome;
                typedef std::future<DescribeKafkaConsumerGroupListOutcome> DescribeKafkaConsumerGroupListOutcomeCallable;
                typedef std::function<void(const ClsClient*, const Model::DescribeKafkaConsumerGroupListRequest&, DescribeKafkaConsumerGroupListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeKafkaConsumerGroupListAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeKafkaConsumerPreviewResponse> DescribeKafkaConsumerPreviewOutcome;
                typedef std::future<DescribeKafkaConsumerPreviewOutcome> DescribeKafkaConsumerPreviewOutcomeCallable;
                typedef std::function<void(const ClsClient*, const Model::DescribeKafkaConsumerPreviewRequest&, DescribeKafkaConsumerPreviewOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeKafkaConsumerPreviewAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeKafkaConsumerTopicsResponse> DescribeKafkaConsumerTopicsOutcome;
                typedef std::future<DescribeKafkaConsumerTopicsOutcome> DescribeKafkaConsumerTopicsOutcomeCallable;
                typedef std::function<void(const ClsClient*, const Model::DescribeKafkaConsumerTopicsRequest&, DescribeKafkaConsumerTopicsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeKafkaConsumerTopicsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeKafkaRechargesResponse> DescribeKafkaRechargesOutcome;
                typedef std::future<DescribeKafkaRechargesOutcome> DescribeKafkaRechargesOutcomeCallable;
                typedef std::function<void(const ClsClient*, const Model::DescribeKafkaRechargesRequest&, DescribeKafkaRechargesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeKafkaRechargesAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeLogContextResponse> DescribeLogContextOutcome;
                typedef std::future<DescribeLogContextOutcome> DescribeLogContextOutcomeCallable;
                typedef std::function<void(const ClsClient*, const Model::DescribeLogContextRequest&, DescribeLogContextOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeLogContextAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeLogHistogramResponse> DescribeLogHistogramOutcome;
                typedef std::future<DescribeLogHistogramOutcome> DescribeLogHistogramOutcomeCallable;
                typedef std::function<void(const ClsClient*, const Model::DescribeLogHistogramRequest&, DescribeLogHistogramOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeLogHistogramAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeLogsetsResponse> DescribeLogsetsOutcome;
                typedef std::future<DescribeLogsetsOutcome> DescribeLogsetsOutcomeCallable;
                typedef std::function<void(const ClsClient*, const Model::DescribeLogsetsRequest&, DescribeLogsetsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeLogsetsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeMachineGroupConfigsResponse> DescribeMachineGroupConfigsOutcome;
                typedef std::future<DescribeMachineGroupConfigsOutcome> DescribeMachineGroupConfigsOutcomeCallable;
                typedef std::function<void(const ClsClient*, const Model::DescribeMachineGroupConfigsRequest&, DescribeMachineGroupConfigsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeMachineGroupConfigsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeMachineGroupsResponse> DescribeMachineGroupsOutcome;
                typedef std::future<DescribeMachineGroupsOutcome> DescribeMachineGroupsOutcomeCallable;
                typedef std::function<void(const ClsClient*, const Model::DescribeMachineGroupsRequest&, DescribeMachineGroupsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeMachineGroupsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeMachinesResponse> DescribeMachinesOutcome;
                typedef std::future<DescribeMachinesOutcome> DescribeMachinesOutcomeCallable;
                typedef std::function<void(const ClsClient*, const Model::DescribeMachinesRequest&, DescribeMachinesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeMachinesAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeMetricCorrectDimensionResponse> DescribeMetricCorrectDimensionOutcome;
                typedef std::future<DescribeMetricCorrectDimensionOutcome> DescribeMetricCorrectDimensionOutcomeCallable;
                typedef std::function<void(const ClsClient*, const Model::DescribeMetricCorrectDimensionRequest&, DescribeMetricCorrectDimensionOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeMetricCorrectDimensionAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeMetricSubscribePreviewResponse> DescribeMetricSubscribePreviewOutcome;
                typedef std::future<DescribeMetricSubscribePreviewOutcome> DescribeMetricSubscribePreviewOutcomeCallable;
                typedef std::function<void(const ClsClient*, const Model::DescribeMetricSubscribePreviewRequest&, DescribeMetricSubscribePreviewOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeMetricSubscribePreviewAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeMetricSubscribesResponse> DescribeMetricSubscribesOutcome;
                typedef std::future<DescribeMetricSubscribesOutcome> DescribeMetricSubscribesOutcomeCallable;
                typedef std::function<void(const ClsClient*, const Model::DescribeMetricSubscribesRequest&, DescribeMetricSubscribesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeMetricSubscribesAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeNetworkApplicationDetailResponse> DescribeNetworkApplicationDetailOutcome;
                typedef std::future<DescribeNetworkApplicationDetailOutcome> DescribeNetworkApplicationDetailOutcomeCallable;
                typedef std::function<void(const ClsClient*, const Model::DescribeNetworkApplicationDetailRequest&, DescribeNetworkApplicationDetailOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeNetworkApplicationDetailAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeNetworkApplicationsResponse> DescribeNetworkApplicationsOutcome;
                typedef std::future<DescribeNetworkApplicationsOutcome> DescribeNetworkApplicationsOutcomeCallable;
                typedef std::function<void(const ClsClient*, const Model::DescribeNetworkApplicationsRequest&, DescribeNetworkApplicationsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeNetworkApplicationsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeNoticeContentsResponse> DescribeNoticeContentsOutcome;
                typedef std::future<DescribeNoticeContentsOutcome> DescribeNoticeContentsOutcomeCallable;
                typedef std::function<void(const ClsClient*, const Model::DescribeNoticeContentsRequest&, DescribeNoticeContentsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeNoticeContentsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribePartitionsResponse> DescribePartitionsOutcome;
                typedef std::future<DescribePartitionsOutcome> DescribePartitionsOutcomeCallable;
                typedef std::function<void(const ClsClient*, const Model::DescribePartitionsRequest&, DescribePartitionsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribePartitionsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeRebuildIndexTasksResponse> DescribeRebuildIndexTasksOutcome;
                typedef std::future<DescribeRebuildIndexTasksOutcome> DescribeRebuildIndexTasksOutcomeCallable;
                typedef std::function<void(const ClsClient*, const Model::DescribeRebuildIndexTasksRequest&, DescribeRebuildIndexTasksOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeRebuildIndexTasksAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeRecordingRuleTaskResponse> DescribeRecordingRuleTaskOutcome;
                typedef std::future<DescribeRecordingRuleTaskOutcome> DescribeRecordingRuleTaskOutcomeCallable;
                typedef std::function<void(const ClsClient*, const Model::DescribeRecordingRuleTaskRequest&, DescribeRecordingRuleTaskOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeRecordingRuleTaskAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeRecordingRuleYamlTaskResponse> DescribeRecordingRuleYamlTaskOutcome;
                typedef std::future<DescribeRecordingRuleYamlTaskOutcome> DescribeRecordingRuleYamlTaskOutcomeCallable;
                typedef std::function<void(const ClsClient*, const Model::DescribeRecordingRuleYamlTaskRequest&, DescribeRecordingRuleYamlTaskOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeRecordingRuleYamlTaskAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeScheduledSqlInfoResponse> DescribeScheduledSqlInfoOutcome;
                typedef std::future<DescribeScheduledSqlInfoOutcome> DescribeScheduledSqlInfoOutcomeCallable;
                typedef std::function<void(const ClsClient*, const Model::DescribeScheduledSqlInfoRequest&, DescribeScheduledSqlInfoOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeScheduledSqlInfoAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeSearchViewsResponse> DescribeSearchViewsOutcome;
                typedef std::future<DescribeSearchViewsOutcome> DescribeSearchViewsOutcomeCallable;
                typedef std::function<void(const ClsClient*, const Model::DescribeSearchViewsRequest&, DescribeSearchViewsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeSearchViewsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeShipperTasksResponse> DescribeShipperTasksOutcome;
                typedef std::future<DescribeShipperTasksOutcome> DescribeShipperTasksOutcomeCallable;
                typedef std::function<void(const ClsClient*, const Model::DescribeShipperTasksRequest&, DescribeShipperTasksOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeShipperTasksAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeShippersResponse> DescribeShippersOutcome;
                typedef std::future<DescribeShippersOutcome> DescribeShippersOutcomeCallable;
                typedef std::function<void(const ClsClient*, const Model::DescribeShippersRequest&, DescribeShippersOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeShippersAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeSplunkDeliversResponse> DescribeSplunkDeliversOutcome;
                typedef std::future<DescribeSplunkDeliversOutcome> DescribeSplunkDeliversOutcomeCallable;
                typedef std::function<void(const ClsClient*, const Model::DescribeSplunkDeliversRequest&, DescribeSplunkDeliversOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeSplunkDeliversAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeSplunkPreviewResponse> DescribeSplunkPreviewOutcome;
                typedef std::future<DescribeSplunkPreviewOutcome> DescribeSplunkPreviewOutcomeCallable;
                typedef std::function<void(const ClsClient*, const Model::DescribeSplunkPreviewRequest&, DescribeSplunkPreviewOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeSplunkPreviewAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeTopicBaseMetricConfigsResponse> DescribeTopicBaseMetricConfigsOutcome;
                typedef std::future<DescribeTopicBaseMetricConfigsOutcome> DescribeTopicBaseMetricConfigsOutcomeCallable;
                typedef std::function<void(const ClsClient*, const Model::DescribeTopicBaseMetricConfigsRequest&, DescribeTopicBaseMetricConfigsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeTopicBaseMetricConfigsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeTopicMetricConfigsResponse> DescribeTopicMetricConfigsOutcome;
                typedef std::future<DescribeTopicMetricConfigsOutcome> DescribeTopicMetricConfigsOutcomeCallable;
                typedef std::function<void(const ClsClient*, const Model::DescribeTopicMetricConfigsRequest&, DescribeTopicMetricConfigsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeTopicMetricConfigsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeTopicsResponse> DescribeTopicsOutcome;
                typedef std::future<DescribeTopicsOutcome> DescribeTopicsOutcomeCallable;
                typedef std::function<void(const ClsClient*, const Model::DescribeTopicsRequest&, DescribeTopicsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeTopicsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeWebCallbacksResponse> DescribeWebCallbacksOutcome;
                typedef std::future<DescribeWebCallbacksOutcome> DescribeWebCallbacksOutcomeCallable;
                typedef std::function<void(const ClsClient*, const Model::DescribeWebCallbacksRequest&, DescribeWebCallbacksOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeWebCallbacksAsyncHandler;
                typedef Outcome<Core::Error, Model::EstimateRebuildIndexTaskResponse> EstimateRebuildIndexTaskOutcome;
                typedef std::future<EstimateRebuildIndexTaskOutcome> EstimateRebuildIndexTaskOutcomeCallable;
                typedef std::function<void(const ClsClient*, const Model::EstimateRebuildIndexTaskRequest&, EstimateRebuildIndexTaskOutcome, const std::shared_ptr<const AsyncCallerContext>&)> EstimateRebuildIndexTaskAsyncHandler;
                typedef Outcome<Core::Error, Model::GetAlarmLogResponse> GetAlarmLogOutcome;
                typedef std::future<GetAlarmLogOutcome> GetAlarmLogOutcomeCallable;
                typedef std::function<void(const ClsClient*, const Model::GetAlarmLogRequest&, GetAlarmLogOutcome, const std::shared_ptr<const AsyncCallerContext>&)> GetAlarmLogAsyncHandler;
                typedef Outcome<Core::Error, Model::GetClsServiceResponse> GetClsServiceOutcome;
                typedef std::future<GetClsServiceOutcome> GetClsServiceOutcomeCallable;
                typedef std::function<void(const ClsClient*, const Model::GetClsServiceRequest&, GetClsServiceOutcome, const std::shared_ptr<const AsyncCallerContext>&)> GetClsServiceAsyncHandler;
                typedef Outcome<Core::Error, Model::GetMetricLabelValuesResponse> GetMetricLabelValuesOutcome;
                typedef std::future<GetMetricLabelValuesOutcome> GetMetricLabelValuesOutcomeCallable;
                typedef std::function<void(const ClsClient*, const Model::GetMetricLabelValuesRequest&, GetMetricLabelValuesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> GetMetricLabelValuesAsyncHandler;
                typedef Outcome<Core::Error, Model::MergePartitionResponse> MergePartitionOutcome;
                typedef std::future<MergePartitionOutcome> MergePartitionOutcomeCallable;
                typedef std::function<void(const ClsClient*, const Model::MergePartitionRequest&, MergePartitionOutcome, const std::shared_ptr<const AsyncCallerContext>&)> MergePartitionAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyAlarmResponse> ModifyAlarmOutcome;
                typedef std::future<ModifyAlarmOutcome> ModifyAlarmOutcomeCallable;
                typedef std::function<void(const ClsClient*, const Model::ModifyAlarmRequest&, ModifyAlarmOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyAlarmAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyAlarmNoticeResponse> ModifyAlarmNoticeOutcome;
                typedef std::future<ModifyAlarmNoticeOutcome> ModifyAlarmNoticeOutcomeCallable;
                typedef std::function<void(const ClsClient*, const Model::ModifyAlarmNoticeRequest&, ModifyAlarmNoticeOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyAlarmNoticeAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyAlarmShieldResponse> ModifyAlarmShieldOutcome;
                typedef std::future<ModifyAlarmShieldOutcome> ModifyAlarmShieldOutcomeCallable;
                typedef std::function<void(const ClsClient*, const Model::ModifyAlarmShieldRequest&, ModifyAlarmShieldOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyAlarmShieldAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyCloudProductLogCollectionResponse> ModifyCloudProductLogCollectionOutcome;
                typedef std::future<ModifyCloudProductLogCollectionOutcome> ModifyCloudProductLogCollectionOutcomeCallable;
                typedef std::function<void(const ClsClient*, const Model::ModifyCloudProductLogCollectionRequest&, ModifyCloudProductLogCollectionOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyCloudProductLogCollectionAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyConfigResponse> ModifyConfigOutcome;
                typedef std::future<ModifyConfigOutcome> ModifyConfigOutcomeCallable;
                typedef std::function<void(const ClsClient*, const Model::ModifyConfigRequest&, ModifyConfigOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyConfigAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyConsoleResponse> ModifyConsoleOutcome;
                typedef std::future<ModifyConsoleOutcome> ModifyConsoleOutcomeCallable;
                typedef std::function<void(const ClsClient*, const Model::ModifyConsoleRequest&, ModifyConsoleOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyConsoleAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyConsumerResponse> ModifyConsumerOutcome;
                typedef std::future<ModifyConsumerOutcome> ModifyConsumerOutcomeCallable;
                typedef std::function<void(const ClsClient*, const Model::ModifyConsumerRequest&, ModifyConsumerOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyConsumerAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyConsumerGroupResponse> ModifyConsumerGroupOutcome;
                typedef std::future<ModifyConsumerGroupOutcome> ModifyConsumerGroupOutcomeCallable;
                typedef std::function<void(const ClsClient*, const Model::ModifyConsumerGroupRequest&, ModifyConsumerGroupOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyConsumerGroupAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyCosRechargeResponse> ModifyCosRechargeOutcome;
                typedef std::future<ModifyCosRechargeOutcome> ModifyCosRechargeOutcomeCallable;
                typedef std::function<void(const ClsClient*, const Model::ModifyCosRechargeRequest&, ModifyCosRechargeOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyCosRechargeAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyDashboardResponse> ModifyDashboardOutcome;
                typedef std::future<ModifyDashboardOutcome> ModifyDashboardOutcomeCallable;
                typedef std::function<void(const ClsClient*, const Model::ModifyDashboardRequest&, ModifyDashboardOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyDashboardAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyDashboardSubscribeResponse> ModifyDashboardSubscribeOutcome;
                typedef std::future<ModifyDashboardSubscribeOutcome> ModifyDashboardSubscribeOutcomeCallable;
                typedef std::function<void(const ClsClient*, const Model::ModifyDashboardSubscribeRequest&, ModifyDashboardSubscribeOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyDashboardSubscribeAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyDataTransformResponse> ModifyDataTransformOutcome;
                typedef std::future<ModifyDataTransformOutcome> ModifyDataTransformOutcomeCallable;
                typedef std::function<void(const ClsClient*, const Model::ModifyDataTransformRequest&, ModifyDataTransformOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyDataTransformAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyDlcDeliverResponse> ModifyDlcDeliverOutcome;
                typedef std::future<ModifyDlcDeliverOutcome> ModifyDlcDeliverOutcomeCallable;
                typedef std::function<void(const ClsClient*, const Model::ModifyDlcDeliverRequest&, ModifyDlcDeliverOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyDlcDeliverAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyEsRechargeResponse> ModifyEsRechargeOutcome;
                typedef std::future<ModifyEsRechargeOutcome> ModifyEsRechargeOutcomeCallable;
                typedef std::function<void(const ClsClient*, const Model::ModifyEsRechargeRequest&, ModifyEsRechargeOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyEsRechargeAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyHostMetricConfigResponse> ModifyHostMetricConfigOutcome;
                typedef std::future<ModifyHostMetricConfigOutcome> ModifyHostMetricConfigOutcomeCallable;
                typedef std::function<void(const ClsClient*, const Model::ModifyHostMetricConfigRequest&, ModifyHostMetricConfigOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyHostMetricConfigAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyIndexResponse> ModifyIndexOutcome;
                typedef std::future<ModifyIndexOutcome> ModifyIndexOutcomeCallable;
                typedef std::function<void(const ClsClient*, const Model::ModifyIndexRequest&, ModifyIndexOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyIndexAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyKafkaConsumerResponse> ModifyKafkaConsumerOutcome;
                typedef std::future<ModifyKafkaConsumerOutcome> ModifyKafkaConsumerOutcomeCallable;
                typedef std::function<void(const ClsClient*, const Model::ModifyKafkaConsumerRequest&, ModifyKafkaConsumerOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyKafkaConsumerAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyKafkaConsumerGroupOffsetResponse> ModifyKafkaConsumerGroupOffsetOutcome;
                typedef std::future<ModifyKafkaConsumerGroupOffsetOutcome> ModifyKafkaConsumerGroupOffsetOutcomeCallable;
                typedef std::function<void(const ClsClient*, const Model::ModifyKafkaConsumerGroupOffsetRequest&, ModifyKafkaConsumerGroupOffsetOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyKafkaConsumerGroupOffsetAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyKafkaRechargeResponse> ModifyKafkaRechargeOutcome;
                typedef std::future<ModifyKafkaRechargeOutcome> ModifyKafkaRechargeOutcomeCallable;
                typedef std::function<void(const ClsClient*, const Model::ModifyKafkaRechargeRequest&, ModifyKafkaRechargeOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyKafkaRechargeAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyLogsetResponse> ModifyLogsetOutcome;
                typedef std::future<ModifyLogsetOutcome> ModifyLogsetOutcomeCallable;
                typedef std::function<void(const ClsClient*, const Model::ModifyLogsetRequest&, ModifyLogsetOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyLogsetAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyMachineGroupResponse> ModifyMachineGroupOutcome;
                typedef std::future<ModifyMachineGroupOutcome> ModifyMachineGroupOutcomeCallable;
                typedef std::function<void(const ClsClient*, const Model::ModifyMachineGroupRequest&, ModifyMachineGroupOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyMachineGroupAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyMetricConfigResponse> ModifyMetricConfigOutcome;
                typedef std::future<ModifyMetricConfigOutcome> ModifyMetricConfigOutcomeCallable;
                typedef std::function<void(const ClsClient*, const Model::ModifyMetricConfigRequest&, ModifyMetricConfigOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyMetricConfigAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyMetricSubscribeResponse> ModifyMetricSubscribeOutcome;
                typedef std::future<ModifyMetricSubscribeOutcome> ModifyMetricSubscribeOutcomeCallable;
                typedef std::function<void(const ClsClient*, const Model::ModifyMetricSubscribeRequest&, ModifyMetricSubscribeOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyMetricSubscribeAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyNetworkApplicationResponse> ModifyNetworkApplicationOutcome;
                typedef std::future<ModifyNetworkApplicationOutcome> ModifyNetworkApplicationOutcomeCallable;
                typedef std::function<void(const ClsClient*, const Model::ModifyNetworkApplicationRequest&, ModifyNetworkApplicationOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyNetworkApplicationAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyNoticeContentResponse> ModifyNoticeContentOutcome;
                typedef std::future<ModifyNoticeContentOutcome> ModifyNoticeContentOutcomeCallable;
                typedef std::function<void(const ClsClient*, const Model::ModifyNoticeContentRequest&, ModifyNoticeContentOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyNoticeContentAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyRecordingRuleTaskResponse> ModifyRecordingRuleTaskOutcome;
                typedef std::future<ModifyRecordingRuleTaskOutcome> ModifyRecordingRuleTaskOutcomeCallable;
                typedef std::function<void(const ClsClient*, const Model::ModifyRecordingRuleTaskRequest&, ModifyRecordingRuleTaskOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyRecordingRuleTaskAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyRecordingRuleYamlTaskResponse> ModifyRecordingRuleYamlTaskOutcome;
                typedef std::future<ModifyRecordingRuleYamlTaskOutcome> ModifyRecordingRuleYamlTaskOutcomeCallable;
                typedef std::function<void(const ClsClient*, const Model::ModifyRecordingRuleYamlTaskRequest&, ModifyRecordingRuleYamlTaskOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyRecordingRuleYamlTaskAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyScheduledSqlResponse> ModifyScheduledSqlOutcome;
                typedef std::future<ModifyScheduledSqlOutcome> ModifyScheduledSqlOutcomeCallable;
                typedef std::function<void(const ClsClient*, const Model::ModifyScheduledSqlRequest&, ModifyScheduledSqlOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyScheduledSqlAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifySearchViewResponse> ModifySearchViewOutcome;
                typedef std::future<ModifySearchViewOutcome> ModifySearchViewOutcomeCallable;
                typedef std::function<void(const ClsClient*, const Model::ModifySearchViewRequest&, ModifySearchViewOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifySearchViewAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyShipperResponse> ModifyShipperOutcome;
                typedef std::future<ModifyShipperOutcome> ModifyShipperOutcomeCallable;
                typedef std::function<void(const ClsClient*, const Model::ModifyShipperRequest&, ModifyShipperOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyShipperAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifySplunkDeliverResponse> ModifySplunkDeliverOutcome;
                typedef std::future<ModifySplunkDeliverOutcome> ModifySplunkDeliverOutcomeCallable;
                typedef std::function<void(const ClsClient*, const Model::ModifySplunkDeliverRequest&, ModifySplunkDeliverOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifySplunkDeliverAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyTopicResponse> ModifyTopicOutcome;
                typedef std::future<ModifyTopicOutcome> ModifyTopicOutcomeCallable;
                typedef std::function<void(const ClsClient*, const Model::ModifyTopicRequest&, ModifyTopicOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyTopicAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyWebCallbackResponse> ModifyWebCallbackOutcome;
                typedef std::future<ModifyWebCallbackOutcome> ModifyWebCallbackOutcomeCallable;
                typedef std::function<void(const ClsClient*, const Model::ModifyWebCallbackRequest&, ModifyWebCallbackOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyWebCallbackAsyncHandler;
                typedef Outcome<Core::Error, Model::OpenClawServiceResponse> OpenClawServiceOutcome;
                typedef std::future<OpenClawServiceOutcome> OpenClawServiceOutcomeCallable;
                typedef std::function<void(const ClsClient*, const Model::OpenClawServiceRequest&, OpenClawServiceOutcome, const std::shared_ptr<const AsyncCallerContext>&)> OpenClawServiceAsyncHandler;
                typedef Outcome<Core::Error, Model::OpenClsServiceResponse> OpenClsServiceOutcome;
                typedef std::future<OpenClsServiceOutcome> OpenClsServiceOutcomeCallable;
                typedef std::function<void(const ClsClient*, const Model::OpenClsServiceRequest&, OpenClsServiceOutcome, const std::shared_ptr<const AsyncCallerContext>&)> OpenClsServiceAsyncHandler;
                typedef Outcome<Core::Error, Model::OpenKafkaConsumerResponse> OpenKafkaConsumerOutcome;
                typedef std::future<OpenKafkaConsumerOutcome> OpenKafkaConsumerOutcomeCallable;
                typedef std::function<void(const ClsClient*, const Model::OpenKafkaConsumerRequest&, OpenKafkaConsumerOutcome, const std::shared_ptr<const AsyncCallerContext>&)> OpenKafkaConsumerAsyncHandler;
                typedef Outcome<Core::Error, Model::PreviewKafkaRechargeResponse> PreviewKafkaRechargeOutcome;
                typedef std::future<PreviewKafkaRechargeOutcome> PreviewKafkaRechargeOutcomeCallable;
                typedef std::function<void(const ClsClient*, const Model::PreviewKafkaRechargeRequest&, PreviewKafkaRechargeOutcome, const std::shared_ptr<const AsyncCallerContext>&)> PreviewKafkaRechargeAsyncHandler;
                typedef Outcome<Core::Error, Model::QueryMetricResponse> QueryMetricOutcome;
                typedef std::future<QueryMetricOutcome> QueryMetricOutcomeCallable;
                typedef std::function<void(const ClsClient*, const Model::QueryMetricRequest&, QueryMetricOutcome, const std::shared_ptr<const AsyncCallerContext>&)> QueryMetricAsyncHandler;
                typedef Outcome<Core::Error, Model::QueryRangeMetricResponse> QueryRangeMetricOutcome;
                typedef std::future<QueryRangeMetricOutcome> QueryRangeMetricOutcomeCallable;
                typedef std::function<void(const ClsClient*, const Model::QueryRangeMetricRequest&, QueryRangeMetricOutcome, const std::shared_ptr<const AsyncCallerContext>&)> QueryRangeMetricAsyncHandler;
                typedef Outcome<Core::Error, Model::RetryShipperTaskResponse> RetryShipperTaskOutcome;
                typedef std::future<RetryShipperTaskOutcome> RetryShipperTaskOutcomeCallable;
                typedef std::function<void(const ClsClient*, const Model::RetryShipperTaskRequest&, RetryShipperTaskOutcome, const std::shared_ptr<const AsyncCallerContext>&)> RetryShipperTaskAsyncHandler;
                typedef Outcome<Core::Error, Model::SearchCosRechargeInfoResponse> SearchCosRechargeInfoOutcome;
                typedef std::future<SearchCosRechargeInfoOutcome> SearchCosRechargeInfoOutcomeCallable;
                typedef std::function<void(const ClsClient*, const Model::SearchCosRechargeInfoRequest&, SearchCosRechargeInfoOutcome, const std::shared_ptr<const AsyncCallerContext>&)> SearchCosRechargeInfoAsyncHandler;
                typedef Outcome<Core::Error, Model::SearchDashboardSubscribeResponse> SearchDashboardSubscribeOutcome;
                typedef std::future<SearchDashboardSubscribeOutcome> SearchDashboardSubscribeOutcomeCallable;
                typedef std::function<void(const ClsClient*, const Model::SearchDashboardSubscribeRequest&, SearchDashboardSubscribeOutcome, const std::shared_ptr<const AsyncCallerContext>&)> SearchDashboardSubscribeAsyncHandler;
                typedef Outcome<Core::Error, Model::SearchLogResponse> SearchLogOutcome;
                typedef std::future<SearchLogOutcome> SearchLogOutcomeCallable;
                typedef std::function<void(const ClsClient*, const Model::SearchLogRequest&, SearchLogOutcome, const std::shared_ptr<const AsyncCallerContext>&)> SearchLogAsyncHandler;
                typedef Outcome<Core::Error, Model::SendConsumerHeartbeatResponse> SendConsumerHeartbeatOutcome;
                typedef std::future<SendConsumerHeartbeatOutcome> SendConsumerHeartbeatOutcomeCallable;
                typedef std::function<void(const ClsClient*, const Model::SendConsumerHeartbeatRequest&, SendConsumerHeartbeatOutcome, const std::shared_ptr<const AsyncCallerContext>&)> SendConsumerHeartbeatAsyncHandler;
                typedef Outcome<Core::Error, Model::SplitPartitionResponse> SplitPartitionOutcome;
                typedef std::future<SplitPartitionOutcome> SplitPartitionOutcomeCallable;
                typedef std::function<void(const ClsClient*, const Model::SplitPartitionRequest&, SplitPartitionOutcome, const std::shared_ptr<const AsyncCallerContext>&)> SplitPartitionAsyncHandler;
                typedef Outcome<Core::Error, Model::UploadLogResponse> UploadLogOutcome;
                typedef std::future<UploadLogOutcome> UploadLogOutcomeCallable;
                typedef std::function<void(const ClsClient*, const Model::UploadLogRequest&, UploadLogOutcome, const std::shared_ptr<const AsyncCallerContext>&)> UploadLogAsyncHandler;



                /**
                 *This API is used to add machine group information.
                 * @param req AddMachineGroupInfoRequest
                 * @return AddMachineGroupInfoOutcome
                 */
                AddMachineGroupInfoOutcome AddMachineGroupInfo(const Model::AddMachineGroupInfoRequest &request);
                void AddMachineGroupInfoAsync(const Model::AddMachineGroupInfoRequest& request, const AddMachineGroupInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                AddMachineGroupInfoOutcomeCallable AddMachineGroupInfoCallable(const Model::AddMachineGroupInfoRequest& request);

                /**
                 *This API is used to apply the collection configuration to a specified machine group.
                 * @param req ApplyConfigToMachineGroupRequest
                 * @return ApplyConfigToMachineGroupOutcome
                 */
                ApplyConfigToMachineGroupOutcome ApplyConfigToMachineGroup(const Model::ApplyConfigToMachineGroupRequest &request);
                void ApplyConfigToMachineGroupAsync(const Model::ApplyConfigToMachineGroupRequest& request, const ApplyConfigToMachineGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ApplyConfigToMachineGroupOutcomeCallable ApplyConfigToMachineGroupCallable(const Model::ApplyConfigToMachineGroupRequest& request);

                /**
                 *This API is used to cancel creating a reindexing task.
                 * @param req CancelRebuildIndexTaskRequest
                 * @return CancelRebuildIndexTaskOutcome
                 */
                CancelRebuildIndexTaskOutcome CancelRebuildIndexTask(const Model::CancelRebuildIndexTaskRequest &request);
                void CancelRebuildIndexTaskAsync(const Model::CancelRebuildIndexTaskRequest& request, const CancelRebuildIndexTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CancelRebuildIndexTaskOutcomeCallable CancelRebuildIndexTaskCallable(const Model::CancelRebuildIndexTaskRequest& request);

                /**
                 *Call the API to initiate a dialogue request.
This API supports AI-powered logging features such as intelligently generating retrieval analysis statements.
Note: When calling this API via SSE streaming, ensure the request domain name is set to cls.ai.tencentcloudapi.com (configurable as cls.ai.internal.tencentcloudapi.com in a private network environment).
                 * @param req ChatCompletionsRequest
                 * @return ChatCompletionsOutcome
                 */
                ChatCompletionsOutcome ChatCompletions(const Model::ChatCompletionsRequest &request);
                void ChatCompletionsAsync(const Model::ChatCompletionsRequest& request, const ChatCompletionsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ChatCompletionsOutcomeCallable ChatCompletionsCallable(const Model::ChatCompletionsRequest& request);

                /**
                 *This API is used to verify the syntax of data processing DSL functions.
                 * @param req CheckFunctionRequest
                 * @return CheckFunctionOutcome
                 */
                CheckFunctionOutcome CheckFunction(const Model::CheckFunctionRequest &request);
                void CheckFunctionAsync(const Model::CheckFunctionRequest& request, const CheckFunctionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CheckFunctionOutcomeCallable CheckFunctionCallable(const Model::CheckFunctionRequest& request);

                /**
                 *This API is used to check whether the Kafka service cluster is accessible.
                 * @param req CheckRechargeKafkaServerRequest
                 * @return CheckRechargeKafkaServerOutcome
                 */
                CheckRechargeKafkaServerOutcome CheckRechargeKafkaServer(const Model::CheckRechargeKafkaServerRequest &request);
                void CheckRechargeKafkaServerAsync(const Model::CheckRechargeKafkaServerRequest& request, const CheckRechargeKafkaServerAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CheckRechargeKafkaServerOutcomeCallable CheckRechargeKafkaServerCallable(const Model::CheckRechargeKafkaServerRequest& request);

                /**
                 *This API is used to disable Kafka consumption.
                 * @param req CloseKafkaConsumerRequest
                 * @return CloseKafkaConsumerOutcome
                 */
                CloseKafkaConsumerOutcome CloseKafkaConsumer(const Model::CloseKafkaConsumerRequest &request);
                void CloseKafkaConsumerAsync(const Model::CloseKafkaConsumerRequest& request, const CloseKafkaConsumerAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CloseKafkaConsumerOutcomeCallable CloseKafkaConsumerCallable(const Model::CloseKafkaConsumerRequest& request);

                /**
                 *This API is used to submit a consumption offset.
                 * @param req CommitConsumerOffsetsRequest
                 * @return CommitConsumerOffsetsOutcome
                 */
                CommitConsumerOffsetsOutcome CommitConsumerOffsets(const Model::CommitConsumerOffsetsRequest &request);
                void CommitConsumerOffsetsAsync(const Model::CommitConsumerOffsetsRequest& request, const CommitConsumerOffsetsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CommitConsumerOffsetsOutcomeCallable CommitConsumerOffsetsCallable(const Model::CommitConsumerOffsetsRequest& request);

                /**
                 *This API is used to create an alarm policy.
                 * @param req CreateAlarmRequest
                 * @return CreateAlarmOutcome
                 */
                CreateAlarmOutcome CreateAlarm(const Model::CreateAlarmRequest &request);
                void CreateAlarmAsync(const Model::CreateAlarmRequest& request, const CreateAlarmAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateAlarmOutcomeCallable CreateAlarmCallable(const Model::CreateAlarmRequest& request);

                /**
                 *This API is used to create a notification channel group with two configuration modes to choose from.
1. Easy mode provides the most basic notification channel function. The following parameters are required:
- Type
- NoticeReceivers
- WebCallbacks

2. Advanced mode: On the basis of easy mode, it supports setting rules, setting notification channels for different types of alarms, and escalating alarms. The following parameters are required:
- NoticeRules
                 * @param req CreateAlarmNoticeRequest
                 * @return CreateAlarmNoticeOutcome
                 */
                CreateAlarmNoticeOutcome CreateAlarmNotice(const Model::CreateAlarmNoticeRequest &request);
                void CreateAlarmNoticeAsync(const Model::CreateAlarmNoticeRequest& request, const CreateAlarmNoticeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateAlarmNoticeOutcomeCallable CreateAlarmNoticeCallable(const Model::CreateAlarmNoticeRequest& request);

                /**
                 *This API is used to create an alarm blocking rule.
                 * @param req CreateAlarmShieldRequest
                 * @return CreateAlarmShieldOutcome
                 */
                CreateAlarmShieldOutcome CreateAlarmShield(const Model::CreateAlarmShieldRequest &request);
                void CreateAlarmShieldAsync(const Model::CreateAlarmShieldRequest& request, const CreateAlarmShieldAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateAlarmShieldOutcomeCallable CreateAlarmShieldCallable(const Model::CreateAlarmShieldRequest& request);

                /**
                 *Cloud product integration uses internal APIs
                 * @param req CreateCloudProductLogCollectionRequest
                 * @return CreateCloudProductLogCollectionOutcome
                 */
                CreateCloudProductLogCollectionOutcome CreateCloudProductLogCollection(const Model::CreateCloudProductLogCollectionRequest &request);
                void CreateCloudProductLogCollectionAsync(const Model::CreateCloudProductLogCollectionRequest& request, const CreateCloudProductLogCollectionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateCloudProductLogCollectionOutcomeCallable CreateCloudProductLogCollectionCallable(const Model::CreateCloudProductLogCollectionRequest& request);

                /**
                 *This API is used to create collection rule configuration.
                 * @param req CreateConfigRequest
                 * @return CreateConfigOutcome
                 */
                CreateConfigOutcome CreateConfig(const Model::CreateConfigRequest &request);
                void CreateConfigAsync(const Model::CreateConfigRequest& request, const CreateConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateConfigOutcomeCallable CreateConfigCallable(const Model::CreateConfigRequest& request);

                /**
                 *This API is used to create the DataSight Console
                 * @param req CreateConsoleRequest
                 * @return CreateConsoleOutcome
                 */
                CreateConsoleOutcome CreateConsole(const Model::CreateConsoleRequest &request);
                void CreateConsoleAsync(const Model::CreateConsoleRequest& request, const CreateConsoleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateConsoleOutcomeCallable CreateConsoleCallable(const Model::CreateConsoleRequest& request);

                /**
                 *This API is used to create a CKafka delivery task.
                 * @param req CreateConsumerRequest
                 * @return CreateConsumerOutcome
                 */
                CreateConsumerOutcome CreateConsumer(const Model::CreateConsumerRequest &request);
                void CreateConsumerAsync(const Model::CreateConsumerRequest& request, const CreateConsumerAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateConsumerOutcomeCallable CreateConsumerCallable(const Model::CreateConsumerRequest& request);

                /**
                 *This API is used to check the heartbeat of a consumer group.
                 * @param req CreateConsumerGroupRequest
                 * @return CreateConsumerGroupOutcome
                 */
                CreateConsumerGroupOutcome CreateConsumerGroup(const Model::CreateConsumerGroupRequest &request);
                void CreateConsumerGroupAsync(const Model::CreateConsumerGroupRequest& request, const CreateConsumerGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateConsumerGroupOutcomeCallable CreateConsumerGroupCallable(const Model::CreateConsumerGroupRequest& request);

                /**
                 *This API is used to create a COS import task.
                 * @param req CreateCosRechargeRequest
                 * @return CreateCosRechargeOutcome
                 */
                CreateCosRechargeOutcome CreateCosRecharge(const Model::CreateCosRechargeRequest &request);
                void CreateCosRechargeAsync(const Model::CreateCosRechargeRequest& request, const CreateCosRechargeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateCosRechargeOutcomeCallable CreateCosRechargeCallable(const Model::CreateCosRechargeRequest& request);

                /**
                 *This API is used to create a dashboard.
                 * @param req CreateDashboardRequest
                 * @return CreateDashboardOutcome
                 */
                CreateDashboardOutcome CreateDashboard(const Model::CreateDashboardRequest &request);
                void CreateDashboardAsync(const Model::CreateDashboardRequest& request, const CreateDashboardAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateDashboardOutcomeCallable CreateDashboardCallable(const Model::CreateDashboardRequest& request);

                /**
                 *This API is used to create a dashboard subscription.
                 * @param req CreateDashboardSubscribeRequest
                 * @return CreateDashboardSubscribeOutcome
                 */
                CreateDashboardSubscribeOutcome CreateDashboardSubscribe(const Model::CreateDashboardSubscribeRequest &request);
                void CreateDashboardSubscribeAsync(const Model::CreateDashboardSubscribeRequest& request, const CreateDashboardSubscribeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateDashboardSubscribeOutcomeCallable CreateDashboardSubscribeCallable(const Model::CreateDashboardSubscribeRequest& request);

                /**
                 *This API is used to create a data processing task.
                 * @param req CreateDataTransformRequest
                 * @return CreateDataTransformOutcome
                 */
                CreateDataTransformOutcome CreateDataTransform(const Model::CreateDataTransformRequest &request);
                void CreateDataTransformAsync(const Model::CreateDataTransformRequest& request, const CreateDataTransformAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateDataTransformOutcomeCallable CreateDataTransformCallable(const Model::CreateDataTransformRequest& request);

                /**
                 *This API is used to create a delivery SCF task.
                 * @param req CreateDeliverCloudFunctionRequest
                 * @return CreateDeliverCloudFunctionOutcome
                 */
                CreateDeliverCloudFunctionOutcome CreateDeliverCloudFunction(const Model::CreateDeliverCloudFunctionRequest &request);
                void CreateDeliverCloudFunctionAsync(const Model::CreateDeliverCloudFunctionRequest& request, const CreateDeliverCloudFunctionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateDeliverCloudFunctionOutcomeCallable CreateDeliverCloudFunctionCallable(const Model::CreateDeliverCloudFunctionRequest& request);

                /**
                 *Create a DLC delivery task
                 * @param req CreateDlcDeliverRequest
                 * @return CreateDlcDeliverOutcome
                 */
                CreateDlcDeliverOutcome CreateDlcDeliver(const Model::CreateDlcDeliverRequest &request);
                void CreateDlcDeliverAsync(const Model::CreateDlcDeliverRequest& request, const CreateDlcDeliverAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateDlcDeliverOutcomeCallable CreateDlcDeliverCallable(const Model::CreateDlcDeliverRequest& request);

                /**
                 *This API is used to create an es import configuration
                 * @param req CreateEsRechargeRequest
                 * @return CreateEsRechargeOutcome
                 */
                CreateEsRechargeOutcome CreateEsRecharge(const Model::CreateEsRechargeRequest &request);
                void CreateEsRechargeAsync(const Model::CreateEsRechargeRequest& request, const CreateEsRechargeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateEsRechargeOutcomeCallable CreateEsRechargeCallable(const Model::CreateEsRechargeRequest& request);

                /**
                 *This API only creates download tasks. The download address returned by the task can be obtained by user invocation of [DescribeExports](https://www.tencentcloud.com/document/product/614/56449?from_cn_redirect=1) to view task list, which includes the CosPath parameter for the download address.
                 * @param req CreateExportRequest
                 * @return CreateExportOutcome
                 */
                CreateExportOutcome CreateExport(const Model::CreateExportRequest &request);
                void CreateExportAsync(const Model::CreateExportRequest& request, const CreateExportAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateExportOutcomeCallable CreateExportCallable(const Model::CreateExportRequest& request);

                /**
                 *This API is used to create host metric collection configurations.
                 * @param req CreateHostMetricConfigRequest
                 * @return CreateHostMetricConfigOutcome
                 */
                CreateHostMetricConfigOutcome CreateHostMetricConfig(const Model::CreateHostMetricConfigRequest &request);
                void CreateHostMetricConfigAsync(const Model::CreateHostMetricConfigRequest& request, const CreateHostMetricConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateHostMetricConfigOutcomeCallable CreateHostMetricConfigCallable(const Model::CreateHostMetricConfigRequest& request);

                /**
                 *This API is used to create an index.
                 * @param req CreateIndexRequest
                 * @return CreateIndexOutcome
                 */
                CreateIndexOutcome CreateIndex(const Model::CreateIndexRequest &request);
                void CreateIndexAsync(const Model::CreateIndexRequest& request, const CreateIndexAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateIndexOutcomeCallable CreateIndexCallable(const Model::CreateIndexRequest& request);

                /**
                 *This API is used to create a Kafka data subscription task.
                 * @param req CreateKafkaRechargeRequest
                 * @return CreateKafkaRechargeOutcome
                 */
                CreateKafkaRechargeOutcome CreateKafkaRecharge(const Model::CreateKafkaRechargeRequest &request);
                void CreateKafkaRechargeAsync(const Model::CreateKafkaRechargeRequest& request, const CreateKafkaRechargeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateKafkaRechargeOutcomeCallable CreateKafkaRechargeCallable(const Model::CreateKafkaRechargeRequest& request);

                /**
                 *This API is used to create a logset. The ID of the created logset is returned.
                 * @param req CreateLogsetRequest
                 * @return CreateLogsetOutcome
                 */
                CreateLogsetOutcome CreateLogset(const Model::CreateLogsetRequest &request);
                void CreateLogsetAsync(const Model::CreateLogsetRequest& request, const CreateLogsetAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateLogsetOutcomeCallable CreateLogsetCallable(const Model::CreateLogsetRequest& request);

                /**
                 *This API is used to create a machine group.
                 * @param req CreateMachineGroupRequest
                 * @return CreateMachineGroupOutcome
                 */
                CreateMachineGroupOutcome CreateMachineGroup(const Model::CreateMachineGroupRequest &request);
                void CreateMachineGroupAsync(const Model::CreateMachineGroupRequest& request, const CreateMachineGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateMachineGroupOutcomeCallable CreateMachineGroupCallable(const Model::CreateMachineGroupRequest& request);

                /**
                 *This API is used to create metric collection configurations.
                 * @param req CreateMetricConfigRequest
                 * @return CreateMetricConfigOutcome
                 */
                CreateMetricConfigOutcome CreateMetricConfig(const Model::CreateMetricConfigRequest &request);
                void CreateMetricConfigAsync(const Model::CreateMetricConfigRequest& request, const CreateMetricConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateMetricConfigOutcomeCallable CreateMetricConfigCallable(const Model::CreateMetricConfigRequest& request);

                /**
                 *This API is used to create metric subscription configurations.
                 * @param req CreateMetricSubscribeRequest
                 * @return CreateMetricSubscribeOutcome
                 */
                CreateMetricSubscribeOutcome CreateMetricSubscribe(const Model::CreateMetricSubscribeRequest &request);
                void CreateMetricSubscribeAsync(const Model::CreateMetricSubscribeRequest& request, const CreateMetricSubscribeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateMetricSubscribeOutcomeCallable CreateMetricSubscribeCallable(const Model::CreateMetricSubscribeRequest& request);

                /**
                 *This API is used to create a network application.
                 * @param req CreateNetworkApplicationRequest
                 * @return CreateNetworkApplicationOutcome
                 */
                CreateNetworkApplicationOutcome CreateNetworkApplication(const Model::CreateNetworkApplicationRequest &request);
                void CreateNetworkApplicationAsync(const Model::CreateNetworkApplicationRequest& request, const CreateNetworkApplicationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateNetworkApplicationOutcomeCallable CreateNetworkApplicationCallable(const Model::CreateNetworkApplicationRequest& request);

                /**
                 *This API is used to create notification content.
                 * @param req CreateNoticeContentRequest
                 * @return CreateNoticeContentOutcome
                 */
                CreateNoticeContentOutcome CreateNoticeContent(const Model::CreateNoticeContentRequest &request);
                void CreateNoticeContentAsync(const Model::CreateNoticeContentRequest& request, const CreateNoticeContentAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateNoticeContentOutcomeCallable CreateNoticeContentCallable(const Model::CreateNoticeContentRequest& request);

                /**
                 *This API is used to creates rebuild index tasks.
Note:
-A single log topic allows only one index reconstruction task at a time and can have up to 10 rebuild index task records. Delete task records that are no longer needed before creating an index task.
-Logs within the same time range only allow rebuilding indexes once. Delete previous task records before rebuilding again.
-Deleting a rebuild index task record restores the index data before rebuilding an index.
-The log write traffic of the selected time range cannot exceed 5TB.
-The index rebuilding time range is subject to the log time. When the log uploading time has a deviation exceeding one hour from the index rebuilding time range (for example, reporting a new log at 16:00 for 02:00 to CLS and rebuilding the log index for 00:00–12:00), the logs will not be rebuilt and cannot be retrieved subsequently. When reporting a new log to the reconstructed log time range, it will not be rebuilt and cannot be retrieved subsequently.
                 * @param req CreateRebuildIndexTaskRequest
                 * @return CreateRebuildIndexTaskOutcome
                 */
                CreateRebuildIndexTaskOutcome CreateRebuildIndexTask(const Model::CreateRebuildIndexTaskRequest &request);
                void CreateRebuildIndexTaskAsync(const Model::CreateRebuildIndexTaskRequest& request, const CreateRebuildIndexTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateRebuildIndexTaskOutcomeCallable CreateRebuildIndexTaskCallable(const Model::CreateRebuildIndexTaskRequest& request);

                /**
                 *Creating a Metric Pre-Aggregation Task
                 * @param req CreateRecordingRuleTaskRequest
                 * @return CreateRecordingRuleTaskOutcome
                 */
                CreateRecordingRuleTaskOutcome CreateRecordingRuleTask(const Model::CreateRecordingRuleTaskRequest &request);
                void CreateRecordingRuleTaskAsync(const Model::CreateRecordingRuleTaskRequest& request, const CreateRecordingRuleTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateRecordingRuleTaskOutcomeCallable CreateRecordingRuleTaskCallable(const Model::CreateRecordingRuleTaskRequest& request);

                /**
                 *Creating a Metric Pre-Aggregation Task Through a YAML File
                 * @param req CreateRecordingRuleYamlTaskRequest
                 * @return CreateRecordingRuleYamlTaskOutcome
                 */
                CreateRecordingRuleYamlTaskOutcome CreateRecordingRuleYamlTask(const Model::CreateRecordingRuleYamlTaskRequest &request);
                void CreateRecordingRuleYamlTaskAsync(const Model::CreateRecordingRuleYamlTaskRequest& request, const CreateRecordingRuleYamlTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateRecordingRuleYamlTaskOutcomeCallable CreateRecordingRuleYamlTaskCallable(const Model::CreateRecordingRuleYamlTaskRequest& request);

                /**
                 *This API is used to create a scheduled SQL analysis task.
                 * @param req CreateScheduledSqlRequest
                 * @return CreateScheduledSqlOutcome
                 */
                CreateScheduledSqlOutcome CreateScheduledSql(const Model::CreateScheduledSqlRequest &request);
                void CreateScheduledSqlAsync(const Model::CreateScheduledSqlRequest& request, const CreateScheduledSqlAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateScheduledSqlOutcomeCallable CreateScheduledSqlCallable(const Model::CreateScheduledSqlRequest& request);

                /**
                 *Create a query view
                 * @param req CreateSearchViewRequest
                 * @return CreateSearchViewOutcome
                 */
                CreateSearchViewOutcome CreateSearchView(const Model::CreateSearchViewRequest &request);
                void CreateSearchViewAsync(const Model::CreateSearchViewRequest& request, const CreateSearchViewAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateSearchViewOutcomeCallable CreateSearchViewCallable(const Model::CreateSearchViewRequest& request);

                /**
                 *This API is used to create a task to ship to COS. Note: To use this API, you need to check whether you have configured the role and permission for shipping to COS. If not, see **Viewing and Configuring Shipping Authorization** at https://intl.cloud.tencent.com/document/product/614/71623.?from_cn_redirect=1
                 * @param req CreateShipperRequest
                 * @return CreateShipperOutcome
                 */
                CreateShipperOutcome CreateShipper(const Model::CreateShipperRequest &request);
                void CreateShipperAsync(const Model::CreateShipperRequest& request, const CreateShipperAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateShipperOutcomeCallable CreateShipperCallable(const Model::CreateShipperRequest& request);

                /**
                 *Create a Splunk delivery task
                 * @param req CreateSplunkDeliverRequest
                 * @return CreateSplunkDeliverOutcome
                 */
                CreateSplunkDeliverOutcome CreateSplunkDeliver(const Model::CreateSplunkDeliverRequest &request);
                void CreateSplunkDeliverAsync(const Model::CreateSplunkDeliverRequest& request, const CreateSplunkDeliverAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateSplunkDeliverOutcomeCallable CreateSplunkDeliverCallable(const Model::CreateSplunkDeliverRequest& request);

                /**
                 *This API is used to create logs or metric topics.
                 * @param req CreateTopicRequest
                 * @return CreateTopicOutcome
                 */
                CreateTopicOutcome CreateTopic(const Model::CreateTopicRequest &request);
                void CreateTopicAsync(const Model::CreateTopicRequest& request, const CreateTopicAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateTopicOutcomeCallable CreateTopicCallable(const Model::CreateTopicRequest& request);

                /**
                 *This API is used to create alarm channel callback configurations.
                 * @param req CreateWebCallbackRequest
                 * @return CreateWebCallbackOutcome
                 */
                CreateWebCallbackOutcome CreateWebCallback(const Model::CreateWebCallbackRequest &request);
                void CreateWebCallbackAsync(const Model::CreateWebCallbackRequest& request, const CreateWebCallbackAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateWebCallbackOutcomeCallable CreateWebCallbackCallable(const Model::CreateWebCallbackRequest& request);

                /**
                 *This API is used to delete an alarm policy.
                 * @param req DeleteAlarmRequest
                 * @return DeleteAlarmOutcome
                 */
                DeleteAlarmOutcome DeleteAlarm(const Model::DeleteAlarmRequest &request);
                void DeleteAlarmAsync(const Model::DeleteAlarmRequest& request, const DeleteAlarmAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteAlarmOutcomeCallable DeleteAlarmCallable(const Model::DeleteAlarmRequest& request);

                /**
                 *This API is used to delete a notification group.
                 * @param req DeleteAlarmNoticeRequest
                 * @return DeleteAlarmNoticeOutcome
                 */
                DeleteAlarmNoticeOutcome DeleteAlarmNotice(const Model::DeleteAlarmNoticeRequest &request);
                void DeleteAlarmNoticeAsync(const Model::DeleteAlarmNoticeRequest& request, const DeleteAlarmNoticeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteAlarmNoticeOutcomeCallable DeleteAlarmNoticeCallable(const Model::DeleteAlarmNoticeRequest& request);

                /**
                 *This API is used to delete an alarm blocking rule. When the alarm blocking rule is active or invalid, it cannot be deleted.
                 * @param req DeleteAlarmShieldRequest
                 * @return DeleteAlarmShieldOutcome
                 */
                DeleteAlarmShieldOutcome DeleteAlarmShield(const Model::DeleteAlarmShieldRequest &request);
                void DeleteAlarmShieldAsync(const Model::DeleteAlarmShieldRequest& request, const DeleteAlarmShieldAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteAlarmShieldOutcomeCallable DeleteAlarmShieldCallable(const Model::DeleteAlarmShieldRequest& request);

                /**
                 *Cloud product integration uses internal APIs
                 * @param req DeleteCloudProductLogCollectionRequest
                 * @return DeleteCloudProductLogCollectionOutcome
                 */
                DeleteCloudProductLogCollectionOutcome DeleteCloudProductLogCollection(const Model::DeleteCloudProductLogCollectionRequest &request);
                void DeleteCloudProductLogCollectionAsync(const Model::DeleteCloudProductLogCollectionRequest& request, const DeleteCloudProductLogCollectionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteCloudProductLogCollectionOutcomeCallable DeleteCloudProductLogCollectionCallable(const Model::DeleteCloudProductLogCollectionRequest& request);

                /**
                 *This API is used to delete collection rule configuration.
                 * @param req DeleteConfigRequest
                 * @return DeleteConfigOutcome
                 */
                DeleteConfigOutcome DeleteConfig(const Model::DeleteConfigRequest &request);
                void DeleteConfigAsync(const Model::DeleteConfigRequest& request, const DeleteConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteConfigOutcomeCallable DeleteConfigCallable(const Model::DeleteConfigRequest& request);

                /**
                 *This API is used to delete the collection configuration applied to a machine group.
                 * @param req DeleteConfigFromMachineGroupRequest
                 * @return DeleteConfigFromMachineGroupOutcome
                 */
                DeleteConfigFromMachineGroupOutcome DeleteConfigFromMachineGroup(const Model::DeleteConfigFromMachineGroupRequest &request);
                void DeleteConfigFromMachineGroupAsync(const Model::DeleteConfigFromMachineGroupRequest& request, const DeleteConfigFromMachineGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteConfigFromMachineGroupOutcomeCallable DeleteConfigFromMachineGroupCallable(const Model::DeleteConfigFromMachineGroupRequest& request);

                /**
                 *This API is used to delete the DataSight Console
                 * @param req DeleteConsoleRequest
                 * @return DeleteConsoleOutcome
                 */
                DeleteConsoleOutcome DeleteConsole(const Model::DeleteConsoleRequest &request);
                void DeleteConsoleAsync(const Model::DeleteConsoleRequest& request, const DeleteConsoleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteConsoleOutcomeCallable DeleteConsoleCallable(const Model::DeleteConsoleRequest& request);

                /**
                 *Deleting a CKafka Delivery Task
                 * @param req DeleteConsumerRequest
                 * @return DeleteConsumerOutcome
                 */
                DeleteConsumerOutcome DeleteConsumer(const Model::DeleteConsumerRequest &request);
                void DeleteConsumerAsync(const Model::DeleteConsumerRequest& request, const DeleteConsumerAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteConsumerOutcomeCallable DeleteConsumerCallable(const Model::DeleteConsumerRequest& request);

                /**
                 *Delete consumer groups.
                 * @param req DeleteConsumerGroupRequest
                 * @return DeleteConsumerGroupOutcome
                 */
                DeleteConsumerGroupOutcome DeleteConsumerGroup(const Model::DeleteConsumerGroupRequest &request);
                void DeleteConsumerGroupAsync(const Model::DeleteConsumerGroupRequest& request, const DeleteConsumerGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteConsumerGroupOutcomeCallable DeleteConsumerGroupCallable(const Model::DeleteConsumerGroupRequest& request);

                /**
                 *This API is used to delete a cos Import Task.
                 * @param req DeleteCosRechargeRequest
                 * @return DeleteCosRechargeOutcome
                 */
                DeleteCosRechargeOutcome DeleteCosRecharge(const Model::DeleteCosRechargeRequest &request);
                void DeleteCosRechargeAsync(const Model::DeleteCosRechargeRequest& request, const DeleteCosRechargeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteCosRechargeOutcomeCallable DeleteCosRechargeCallable(const Model::DeleteCosRechargeRequest& request);

                /**
                 *This API is used to delete dashboards.
                 * @param req DeleteDashboardRequest
                 * @return DeleteDashboardOutcome
                 */
                DeleteDashboardOutcome DeleteDashboard(const Model::DeleteDashboardRequest &request);
                void DeleteDashboardAsync(const Model::DeleteDashboardRequest& request, const DeleteDashboardAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteDashboardOutcomeCallable DeleteDashboardCallable(const Model::DeleteDashboardRequest& request);

                /**
                 *This API is used to delete dashboard subscriptions.
                 * @param req DeleteDashboardSubscribeRequest
                 * @return DeleteDashboardSubscribeOutcome
                 */
                DeleteDashboardSubscribeOutcome DeleteDashboardSubscribe(const Model::DeleteDashboardSubscribeRequest &request);
                void DeleteDashboardSubscribeAsync(const Model::DeleteDashboardSubscribeRequest& request, const DeleteDashboardSubscribeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteDashboardSubscribeOutcomeCallable DeleteDashboardSubscribeCallable(const Model::DeleteDashboardSubscribeRequest& request);

                /**
                 *This API is used to delete a data processing task.
                 * @param req DeleteDataTransformRequest
                 * @return DeleteDataTransformOutcome
                 */
                DeleteDataTransformOutcome DeleteDataTransform(const Model::DeleteDataTransformRequest &request);
                void DeleteDataTransformAsync(const Model::DeleteDataTransformRequest& request, const DeleteDataTransformAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteDataTransformOutcomeCallable DeleteDataTransformCallable(const Model::DeleteDataTransformRequest& request);

                /**
                 *Delete a DLC delivery task
                 * @param req DeleteDlcDeliverRequest
                 * @return DeleteDlcDeliverOutcome
                 */
                DeleteDlcDeliverOutcome DeleteDlcDeliver(const Model::DeleteDlcDeliverRequest &request);
                void DeleteDlcDeliverAsync(const Model::DeleteDlcDeliverRequest& request, const DeleteDlcDeliverAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteDlcDeliverOutcomeCallable DeleteDlcDeliverCallable(const Model::DeleteDlcDeliverRequest& request);

                /**
                 *Delete es import configuration
                 * @param req DeleteEsRechargeRequest
                 * @return DeleteEsRechargeOutcome
                 */
                DeleteEsRechargeOutcome DeleteEsRecharge(const Model::DeleteEsRechargeRequest &request);
                void DeleteEsRechargeAsync(const Model::DeleteEsRechargeRequest& request, const DeleteEsRechargeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteEsRechargeOutcomeCallable DeleteEsRechargeCallable(const Model::DeleteEsRechargeRequest& request);

                /**
                 *This API is used to delete a log download task.
                 * @param req DeleteExportRequest
                 * @return DeleteExportOutcome
                 */
                DeleteExportOutcome DeleteExport(const Model::DeleteExportRequest &request);
                void DeleteExportAsync(const Model::DeleteExportRequest& request, const DeleteExportAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteExportOutcomeCallable DeleteExportCallable(const Model::DeleteExportRequest& request);

                /**
                 *Delete host metric collection configuration
                 * @param req DeleteHostMetricConfigRequest
                 * @return DeleteHostMetricConfigOutcome
                 */
                DeleteHostMetricConfigOutcome DeleteHostMetricConfig(const Model::DeleteHostMetricConfigRequest &request);
                void DeleteHostMetricConfigAsync(const Model::DeleteHostMetricConfigRequest& request, const DeleteHostMetricConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteHostMetricConfigOutcomeCallable DeleteHostMetricConfigCallable(const Model::DeleteHostMetricConfigRequest& request);

                /**
                 *This API is used to delete the index configuration of a log topic. After deleting, you cannot retrieve or query the collected logs.
                 * @param req DeleteIndexRequest
                 * @return DeleteIndexOutcome
                 */
                DeleteIndexOutcome DeleteIndex(const Model::DeleteIndexRequest &request);
                void DeleteIndexAsync(const Model::DeleteIndexRequest& request, const DeleteIndexAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteIndexOutcomeCallable DeleteIndexCallable(const Model::DeleteIndexRequest& request);

                /**
                 *This API is used to delete a Kafka data subscription task.
                 * @param req DeleteKafkaRechargeRequest
                 * @return DeleteKafkaRechargeOutcome
                 */
                DeleteKafkaRechargeOutcome DeleteKafkaRecharge(const Model::DeleteKafkaRechargeRequest &request);
                void DeleteKafkaRechargeAsync(const Model::DeleteKafkaRechargeRequest& request, const DeleteKafkaRechargeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteKafkaRechargeOutcomeCallable DeleteKafkaRechargeCallable(const Model::DeleteKafkaRechargeRequest& request);

                /**
                 *This API is used to delete a logset.
                 * @param req DeleteLogsetRequest
                 * @return DeleteLogsetOutcome
                 */
                DeleteLogsetOutcome DeleteLogset(const Model::DeleteLogsetRequest &request);
                void DeleteLogsetAsync(const Model::DeleteLogsetRequest& request, const DeleteLogsetAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteLogsetOutcomeCallable DeleteLogsetCallable(const Model::DeleteLogsetRequest& request);

                /**
                 *This API is used to delete a machine group.
                 * @param req DeleteMachineGroupRequest
                 * @return DeleteMachineGroupOutcome
                 */
                DeleteMachineGroupOutcome DeleteMachineGroup(const Model::DeleteMachineGroupRequest &request);
                void DeleteMachineGroupAsync(const Model::DeleteMachineGroupRequest& request, const DeleteMachineGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteMachineGroupOutcomeCallable DeleteMachineGroupCallable(const Model::DeleteMachineGroupRequest& request);

                /**
                 *This API is used to delete machine group information.
                 * @param req DeleteMachineGroupInfoRequest
                 * @return DeleteMachineGroupInfoOutcome
                 */
                DeleteMachineGroupInfoOutcome DeleteMachineGroupInfo(const Model::DeleteMachineGroupInfoRequest &request);
                void DeleteMachineGroupInfoAsync(const Model::DeleteMachineGroupInfoRequest& request, const DeleteMachineGroupInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteMachineGroupInfoOutcomeCallable DeleteMachineGroupInfoCallable(const Model::DeleteMachineGroupInfoRequest& request);

                /**
                 *This API is used to delete metric collection configurations.
                 * @param req DeleteMetricConfigRequest
                 * @return DeleteMetricConfigOutcome
                 */
                DeleteMetricConfigOutcome DeleteMetricConfig(const Model::DeleteMetricConfigRequest &request);
                void DeleteMetricConfigAsync(const Model::DeleteMetricConfigRequest& request, const DeleteMetricConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteMetricConfigOutcomeCallable DeleteMetricConfigCallable(const Model::DeleteMetricConfigRequest& request);

                /**
                 *This API is used to delete metric subscription configurations.
                 * @param req DeleteMetricSubscribeRequest
                 * @return DeleteMetricSubscribeOutcome
                 */
                DeleteMetricSubscribeOutcome DeleteMetricSubscribe(const Model::DeleteMetricSubscribeRequest &request);
                void DeleteMetricSubscribeAsync(const Model::DeleteMetricSubscribeRequest& request, const DeleteMetricSubscribeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteMetricSubscribeOutcomeCallable DeleteMetricSubscribeCallable(const Model::DeleteMetricSubscribeRequest& request);

                /**
                 *Delete a web application
                 * @param req DeleteNetworkApplicationRequest
                 * @return DeleteNetworkApplicationOutcome
                 */
                DeleteNetworkApplicationOutcome DeleteNetworkApplication(const Model::DeleteNetworkApplicationRequest &request);
                void DeleteNetworkApplicationAsync(const Model::DeleteNetworkApplicationRequest& request, const DeleteNetworkApplicationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteNetworkApplicationOutcomeCallable DeleteNetworkApplicationCallable(const Model::DeleteNetworkApplicationRequest& request);

                /**
                 *This API is used to delete notification content configuration.
                 * @param req DeleteNoticeContentRequest
                 * @return DeleteNoticeContentOutcome
                 */
                DeleteNoticeContentOutcome DeleteNoticeContent(const Model::DeleteNoticeContentRequest &request);
                void DeleteNoticeContentAsync(const Model::DeleteNoticeContentRequest& request, const DeleteNoticeContentAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteNoticeContentOutcomeCallable DeleteNoticeContentCallable(const Model::DeleteNoticeContentRequest& request);

                /**
                 *This API is used to delete a pre-aggregation analysis task.
                 * @param req DeleteRecordingRuleTaskRequest
                 * @return DeleteRecordingRuleTaskOutcome
                 */
                DeleteRecordingRuleTaskOutcome DeleteRecordingRuleTask(const Model::DeleteRecordingRuleTaskRequest &request);
                void DeleteRecordingRuleTaskAsync(const Model::DeleteRecordingRuleTaskRequest& request, const DeleteRecordingRuleTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteRecordingRuleTaskOutcomeCallable DeleteRecordingRuleTaskCallable(const Model::DeleteRecordingRuleTaskRequest& request);

                /**
                 *This API is used to delete the pre-aggregation task in yaml.
                 * @param req DeleteRecordingRuleYamlTaskRequest
                 * @return DeleteRecordingRuleYamlTaskOutcome
                 */
                DeleteRecordingRuleYamlTaskOutcome DeleteRecordingRuleYamlTask(const Model::DeleteRecordingRuleYamlTaskRequest &request);
                void DeleteRecordingRuleYamlTaskAsync(const Model::DeleteRecordingRuleYamlTaskRequest& request, const DeleteRecordingRuleYamlTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteRecordingRuleYamlTaskOutcomeCallable DeleteRecordingRuleYamlTaskCallable(const Model::DeleteRecordingRuleYamlTaskRequest& request);

                /**
                 *This API is used to delete a scheduled SQL analysis task.
                 * @param req DeleteScheduledSqlRequest
                 * @return DeleteScheduledSqlOutcome
                 */
                DeleteScheduledSqlOutcome DeleteScheduledSql(const Model::DeleteScheduledSqlRequest &request);
                void DeleteScheduledSqlAsync(const Model::DeleteScheduledSqlRequest& request, const DeleteScheduledSqlAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteScheduledSqlOutcomeCallable DeleteScheduledSqlCallable(const Model::DeleteScheduledSqlRequest& request);

                /**
                 *This API is used to delete a query view.
                 * @param req DeleteSearchViewRequest
                 * @return DeleteSearchViewOutcome
                 */
                DeleteSearchViewOutcome DeleteSearchView(const Model::DeleteSearchViewRequest &request);
                void DeleteSearchViewAsync(const Model::DeleteSearchViewRequest& request, const DeleteSearchViewAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteSearchViewOutcomeCallable DeleteSearchViewCallable(const Model::DeleteSearchViewRequest& request);

                /**
                 *This API is used to delete a COS shipping task.
                 * @param req DeleteShipperRequest
                 * @return DeleteShipperOutcome
                 */
                DeleteShipperOutcome DeleteShipper(const Model::DeleteShipperRequest &request);
                void DeleteShipperAsync(const Model::DeleteShipperRequest& request, const DeleteShipperAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteShipperOutcomeCallable DeleteShipperCallable(const Model::DeleteShipperRequest& request);

                /**
                 *Delete a Splunk delivery task
                 * @param req DeleteSplunkDeliverRequest
                 * @return DeleteSplunkDeliverOutcome
                 */
                DeleteSplunkDeliverOutcome DeleteSplunkDeliver(const Model::DeleteSplunkDeliverRequest &request);
                void DeleteSplunkDeliverAsync(const Model::DeleteSplunkDeliverRequest& request, const DeleteSplunkDeliverAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteSplunkDeliverOutcomeCallable DeleteSplunkDeliverCallable(const Model::DeleteSplunkDeliverRequest& request);

                /**
                 *This API is used to delete logs or metric topics.
                 * @param req DeleteTopicRequest
                 * @return DeleteTopicOutcome
                 */
                DeleteTopicOutcome DeleteTopic(const Model::DeleteTopicRequest &request);
                void DeleteTopicAsync(const Model::DeleteTopicRequest& request, const DeleteTopicAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteTopicOutcomeCallable DeleteTopicCallable(const Model::DeleteTopicRequest& request);

                /**
                 *This API is used to delete alarm channel callback configurations.
                 * @param req DeleteWebCallbackRequest
                 * @return DeleteWebCallbackOutcome
                 */
                DeleteWebCallbackOutcome DeleteWebCallback(const Model::DeleteWebCallbackRequest &request);
                void DeleteWebCallbackAsync(const Model::DeleteWebCallbackRequest& request, const DeleteWebCallbackAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteWebCallbackOutcomeCallable DeleteWebCallbackCallable(const Model::DeleteWebCallbackRequest& request);

                /**
                 *This API is used to get the notification group list.
                 * @param req DescribeAlarmNoticesRequest
                 * @return DescribeAlarmNoticesOutcome
                 */
                DescribeAlarmNoticesOutcome DescribeAlarmNotices(const Model::DescribeAlarmNoticesRequest &request);
                void DescribeAlarmNoticesAsync(const Model::DescribeAlarmNoticesRequest& request, const DescribeAlarmNoticesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeAlarmNoticesOutcomeCallable DescribeAlarmNoticesCallable(const Model::DescribeAlarmNoticesRequest& request);

                /**
                 *This API is used to access alarm blocking configuration rules.
                 * @param req DescribeAlarmShieldsRequest
                 * @return DescribeAlarmShieldsOutcome
                 */
                DescribeAlarmShieldsOutcome DescribeAlarmShields(const Model::DescribeAlarmShieldsRequest &request);
                void DescribeAlarmShieldsAsync(const Model::DescribeAlarmShieldsRequest& request, const DescribeAlarmShieldsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeAlarmShieldsOutcomeCallable DescribeAlarmShieldsCallable(const Model::DescribeAlarmShieldsRequest& request);

                /**
                 *This API is used to get the alarm policy list.
                 * @param req DescribeAlarmsRequest
                 * @return DescribeAlarmsOutcome
                 */
                DescribeAlarmsOutcome DescribeAlarms(const Model::DescribeAlarmsRequest &request);
                void DescribeAlarmsAsync(const Model::DescribeAlarmsRequest& request, const DescribeAlarmsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeAlarmsOutcomeCallable DescribeAlarmsCallable(const Model::DescribeAlarmsRequest& request);

                /**
                 *This API is used to get alarm records, such as today's uncleared alarms.
                 * @param req DescribeAlertRecordHistoryRequest
                 * @return DescribeAlertRecordHistoryOutcome
                 */
                DescribeAlertRecordHistoryOutcome DescribeAlertRecordHistory(const Model::DescribeAlertRecordHistoryRequest &request);
                void DescribeAlertRecordHistoryAsync(const Model::DescribeAlertRecordHistoryRequest& request, const DescribeAlertRecordHistoryAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeAlertRecordHistoryOutcomeCallable DescribeAlertRecordHistoryCallable(const Model::DescribeAlertRecordHistoryRequest& request);

                /**
                 *Cloud product integration uses relevant APIs
                 * @param req DescribeCloudProductLogTasksRequest
                 * @return DescribeCloudProductLogTasksOutcome
                 */
                DescribeCloudProductLogTasksOutcome DescribeCloudProductLogTasks(const Model::DescribeCloudProductLogTasksRequest &request);
                void DescribeCloudProductLogTasksAsync(const Model::DescribeCloudProductLogTasksRequest& request, const DescribeCloudProductLogTasksAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeCloudProductLogTasksOutcomeCallable DescribeCloudProductLogTasksCallable(const Model::DescribeCloudProductLogTasksRequest& request);

                /**
                 *This API is used to obtain metric subscription configurations.
                 * @param req DescribeClusterBaseMetricConfigsRequest
                 * @return DescribeClusterBaseMetricConfigsOutcome
                 */
                DescribeClusterBaseMetricConfigsOutcome DescribeClusterBaseMetricConfigs(const Model::DescribeClusterBaseMetricConfigsRequest &request);
                void DescribeClusterBaseMetricConfigsAsync(const Model::DescribeClusterBaseMetricConfigsRequest& request, const DescribeClusterBaseMetricConfigsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeClusterBaseMetricConfigsOutcomeCallable DescribeClusterBaseMetricConfigsCallable(const Model::DescribeClusterBaseMetricConfigsRequest& request);

                /**
                 *This API is used to obtain metric subscription configurations.
                 * @param req DescribeClusterMetricConfigsRequest
                 * @return DescribeClusterMetricConfigsOutcome
                 */
                DescribeClusterMetricConfigsOutcome DescribeClusterMetricConfigs(const Model::DescribeClusterMetricConfigsRequest &request);
                void DescribeClusterMetricConfigsAsync(const Model::DescribeClusterMetricConfigsRequest& request, const DescribeClusterMetricConfigsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeClusterMetricConfigsOutcomeCallable DescribeClusterMetricConfigsCallable(const Model::DescribeClusterMetricConfigsRequest& request);

                /**
                 *This API is used to get the machine group bound to collection rule configuration.
                 * @param req DescribeConfigMachineGroupsRequest
                 * @return DescribeConfigMachineGroupsOutcome
                 */
                DescribeConfigMachineGroupsOutcome DescribeConfigMachineGroups(const Model::DescribeConfigMachineGroupsRequest &request);
                void DescribeConfigMachineGroupsAsync(const Model::DescribeConfigMachineGroupsRequest& request, const DescribeConfigMachineGroupsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeConfigMachineGroupsOutcomeCallable DescribeConfigMachineGroupsCallable(const Model::DescribeConfigMachineGroupsRequest& request);

                /**
                 *This API is used to get collection rule configuration.
                 * @param req DescribeConfigsRequest
                 * @return DescribeConfigsOutcome
                 */
                DescribeConfigsOutcome DescribeConfigs(const Model::DescribeConfigsRequest &request);
                void DescribeConfigsAsync(const Model::DescribeConfigsRequest& request, const DescribeConfigsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeConfigsOutcomeCallable DescribeConfigsCallable(const Model::DescribeConfigsRequest& request);

                /**
                 *Query the DataSight console instance list
                 * @param req DescribeConsolesRequest
                 * @return DescribeConsolesOutcome
                 */
                DescribeConsolesOutcome DescribeConsoles(const Model::DescribeConsolesRequest &request);
                void DescribeConsolesAsync(const Model::DescribeConsolesRequest& request, const DescribeConsolesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeConsolesOutcomeCallable DescribeConsolesCallable(const Model::DescribeConsolesRequest& request);

                /**
                 *This API is used to query a shipping task.
                 * @param req DescribeConsumerRequest
                 * @return DescribeConsumerOutcome
                 */
                DescribeConsumerOutcome DescribeConsumer(const Model::DescribeConsumerRequest &request);
                void DescribeConsumerAsync(const Model::DescribeConsumerRequest& request, const DescribeConsumerAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeConsumerOutcomeCallable DescribeConsumerCallable(const Model::DescribeConsumerRequest& request);

                /**
                 *This API is used to obtain the consumer group list.
                 * @param req DescribeConsumerGroupsRequest
                 * @return DescribeConsumerGroupsOutcome
                 */
                DescribeConsumerGroupsOutcome DescribeConsumerGroups(const Model::DescribeConsumerGroupsRequest &request);
                void DescribeConsumerGroupsAsync(const Model::DescribeConsumerGroupsRequest& request, const DescribeConsumerGroupsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeConsumerGroupsOutcomeCallable DescribeConsumerGroupsCallable(const Model::DescribeConsumerGroupsRequest& request);

                /**
                 *Obtaining the Consumer Group Point Information
                 * @param req DescribeConsumerOffsetsRequest
                 * @return DescribeConsumerOffsetsOutcome
                 */
                DescribeConsumerOffsetsOutcome DescribeConsumerOffsets(const Model::DescribeConsumerOffsetsRequest &request);
                void DescribeConsumerOffsetsAsync(const Model::DescribeConsumerOffsetsRequest& request, const DescribeConsumerOffsetsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeConsumerOffsetsOutcomeCallable DescribeConsumerOffsetsCallable(const Model::DescribeConsumerOffsetsRequest& request);

                /**
                 *This API is used to preview Kafka shipping data.
                 * @param req DescribeConsumerPreviewRequest
                 * @return DescribeConsumerPreviewOutcome
                 */
                DescribeConsumerPreviewOutcome DescribeConsumerPreview(const Model::DescribeConsumerPreviewRequest &request);
                void DescribeConsumerPreviewAsync(const Model::DescribeConsumerPreviewRequest& request, const DescribeConsumerPreviewAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeConsumerPreviewOutcomeCallable DescribeConsumerPreviewCallable(const Model::DescribeConsumerPreviewRequest& request);

                /**
                 *This API is used to obtain the shipping rule information list.
                 * @param req DescribeConsumersRequest
                 * @return DescribeConsumersOutcome
                 */
                DescribeConsumersOutcome DescribeConsumers(const Model::DescribeConsumersRequest &request);
                void DescribeConsumersAsync(const Model::DescribeConsumersRequest& request, const DescribeConsumersAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeConsumersOutcomeCallable DescribeConsumersCallable(const Model::DescribeConsumersRequest& request);

                /**
                 *This API is used to get COS import configuration.
                 * @param req DescribeCosRechargesRequest
                 * @return DescribeCosRechargesOutcome
                 */
                DescribeCosRechargesOutcome DescribeCosRecharges(const Model::DescribeCosRechargesRequest &request);
                void DescribeCosRechargesAsync(const Model::DescribeCosRechargesRequest& request, const DescribeCosRechargesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeCosRechargesOutcomeCallable DescribeCosRechargesCallable(const Model::DescribeCosRechargesRequest& request);

                /**
                 *This API is used to obtain the dashboard subscription list, and supports paging.
                 * @param req DescribeDashboardSubscribesRequest
                 * @return DescribeDashboardSubscribesOutcome
                 */
                DescribeDashboardSubscribesOutcome DescribeDashboardSubscribes(const Model::DescribeDashboardSubscribesRequest &request);
                void DescribeDashboardSubscribesAsync(const Model::DescribeDashboardSubscribesRequest& request, const DescribeDashboardSubscribesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeDashboardSubscribesOutcomeCallable DescribeDashboardSubscribesCallable(const Model::DescribeDashboardSubscribesRequest& request);

                /**
                 *This API is used to get the basic information of data processing tasks.
                 * @param req DescribeDataTransformInfoRequest
                 * @return DescribeDataTransformInfoOutcome
                 */
                DescribeDataTransformInfoOutcome DescribeDataTransformInfo(const Model::DescribeDataTransformInfoRequest &request);
                void DescribeDataTransformInfoAsync(const Model::DescribeDataTransformInfoRequest& request, const DescribeDataTransformInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeDataTransformInfoOutcomeCallable DescribeDataTransformInfoCallable(const Model::DescribeDataTransformInfoRequest& request);

                /**
                 *This API is used to search alarm channel callback configuration lists.
                 * @param req DescribeDlcDeliversRequest
                 * @return DescribeDlcDeliversOutcome
                 */
                DescribeDlcDeliversOutcome DescribeDlcDelivers(const Model::DescribeDlcDeliversRequest &request);
                void DescribeDlcDeliversAsync(const Model::DescribeDlcDeliversRequest& request, const DescribeDlcDeliversAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeDlcDeliversOutcomeCallable DescribeDlcDeliversCallable(const Model::DescribeDlcDeliversRequest& request);

                /**
                 *Import Preview
                 * @param req DescribeEsRechargePreviewRequest
                 * @return DescribeEsRechargePreviewOutcome
                 */
                DescribeEsRechargePreviewOutcome DescribeEsRechargePreview(const Model::DescribeEsRechargePreviewRequest &request);
                void DescribeEsRechargePreviewAsync(const Model::DescribeEsRechargePreviewRequest& request, const DescribeEsRechargePreviewAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeEsRechargePreviewOutcomeCallable DescribeEsRechargePreviewCallable(const Model::DescribeEsRechargePreviewRequest& request);

                /**
                 *Retrieve the es import configuration
                 * @param req DescribeEsRechargesRequest
                 * @return DescribeEsRechargesOutcome
                 */
                DescribeEsRechargesOutcome DescribeEsRecharges(const Model::DescribeEsRechargesRequest &request);
                void DescribeEsRechargesAsync(const Model::DescribeEsRechargesRequest& request, const DescribeEsRechargesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeEsRechargesOutcomeCallable DescribeEsRechargesCallable(const Model::DescribeEsRechargesRequest& request);

                /**
                 *This API is used to get the list of log download tasks.
                 * @param req DescribeExportsRequest
                 * @return DescribeExportsOutcome
                 */
                DescribeExportsOutcome DescribeExports(const Model::DescribeExportsRequest &request);
                void DescribeExportsAsync(const Model::DescribeExportsRequest& request, const DescribeExportsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeExportsOutcomeCallable DescribeExportsCallable(const Model::DescribeExportsRequest& request);

                /**
                 *This API is used to obtain metric subscription configurations.
                 * @param req DescribeHostMetricConfigsRequest
                 * @return DescribeHostMetricConfigsOutcome
                 */
                DescribeHostMetricConfigsOutcome DescribeHostMetricConfigs(const Model::DescribeHostMetricConfigsRequest &request);
                void DescribeHostMetricConfigsAsync(const Model::DescribeHostMetricConfigsRequest& request, const DescribeHostMetricConfigsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeHostMetricConfigsOutcomeCallable DescribeHostMetricConfigsCallable(const Model::DescribeHostMetricConfigsRequest& request);

                /**
                 *This API is used to get the index configuration information.
                 * @param req DescribeIndexRequest
                 * @return DescribeIndexOutcome
                 */
                DescribeIndexOutcome DescribeIndex(const Model::DescribeIndexRequest &request);
                void DescribeIndexAsync(const Model::DescribeIndexRequest& request, const DescribeIndexAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeIndexOutcomeCallable DescribeIndexCallable(const Model::DescribeIndexRequest& request);

                /**
                 *This API is used to access Kafka protocol consumption information.
                 * @param req DescribeKafkaConsumerRequest
                 * @return DescribeKafkaConsumerOutcome
                 */
                DescribeKafkaConsumerOutcome DescribeKafkaConsumer(const Model::DescribeKafkaConsumerRequest &request);
                void DescribeKafkaConsumerAsync(const Model::DescribeKafkaConsumerRequest& request, const DescribeKafkaConsumerAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeKafkaConsumerOutcomeCallable DescribeKafkaConsumerCallable(const Model::DescribeKafkaConsumerRequest& request);

                /**
                 *Retrieve Kafka protocol consumption group details
                 * @param req DescribeKafkaConsumerGroupDetailRequest
                 * @return DescribeKafkaConsumerGroupDetailOutcome
                 */
                DescribeKafkaConsumerGroupDetailOutcome DescribeKafkaConsumerGroupDetail(const Model::DescribeKafkaConsumerGroupDetailRequest &request);
                void DescribeKafkaConsumerGroupDetailAsync(const Model::DescribeKafkaConsumerGroupDetailRequest& request, const DescribeKafkaConsumerGroupDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeKafkaConsumerGroupDetailOutcomeCallable DescribeKafkaConsumerGroupDetailCallable(const Model::DescribeKafkaConsumerGroupDetailRequest& request);

                /**
                 *Retrieve the information list of Kafka protocol consumption groups
                 * @param req DescribeKafkaConsumerGroupListRequest
                 * @return DescribeKafkaConsumerGroupListOutcome
                 */
                DescribeKafkaConsumerGroupListOutcome DescribeKafkaConsumerGroupList(const Model::DescribeKafkaConsumerGroupListRequest &request);
                void DescribeKafkaConsumerGroupListAsync(const Model::DescribeKafkaConsumerGroupListRequest& request, const DescribeKafkaConsumerGroupListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeKafkaConsumerGroupListOutcomeCallable DescribeKafkaConsumerGroupListCallable(const Model::DescribeKafkaConsumerGroupListRequest& request);

                /**
                 *This API is used to preview the Kafka consumption.
                 * @param req DescribeKafkaConsumerPreviewRequest
                 * @return DescribeKafkaConsumerPreviewOutcome
                 */
                DescribeKafkaConsumerPreviewOutcome DescribeKafkaConsumerPreview(const Model::DescribeKafkaConsumerPreviewRequest &request);
                void DescribeKafkaConsumerPreviewAsync(const Model::DescribeKafkaConsumerPreviewRequest& request, const DescribeKafkaConsumerPreviewAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeKafkaConsumerPreviewOutcomeCallable DescribeKafkaConsumerPreviewCallable(const Model::DescribeKafkaConsumerPreviewRequest& request);

                /**
                 *This API is used to obtain the topic information list of Kafka consumption.
                 * @param req DescribeKafkaConsumerTopicsRequest
                 * @return DescribeKafkaConsumerTopicsOutcome
                 */
                DescribeKafkaConsumerTopicsOutcome DescribeKafkaConsumerTopics(const Model::DescribeKafkaConsumerTopicsRequest &request);
                void DescribeKafkaConsumerTopicsAsync(const Model::DescribeKafkaConsumerTopicsRequest& request, const DescribeKafkaConsumerTopicsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeKafkaConsumerTopicsOutcomeCallable DescribeKafkaConsumerTopicsCallable(const Model::DescribeKafkaConsumerTopicsRequest& request);

                /**
                 *This API is used to get the list of Kafka data subscription tasks.
                 * @param req DescribeKafkaRechargesRequest
                 * @return DescribeKafkaRechargesOutcome
                 */
                DescribeKafkaRechargesOutcome DescribeKafkaRecharges(const Model::DescribeKafkaRechargesRequest &request);
                void DescribeKafkaRechargesAsync(const Model::DescribeKafkaRechargesRequest& request, const DescribeKafkaRechargesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeKafkaRechargesOutcomeCallable DescribeKafkaRechargesCallable(const Model::DescribeKafkaRechargesRequest& request);

                /**
                 *This API is used to search for content near the log context. For more details, see [Context Search](https://intl.cloud.tencent.com/document/product/614/53248?from_cn_redirect=1).The maximum value of API's return data packet is 49MB. It is recommended to enable gzip compression (HTTP Request Header Accept-Encoding: gzip).
                 * @param req DescribeLogContextRequest
                 * @return DescribeLogContextOutcome
                 */
                DescribeLogContextOutcome DescribeLogContext(const Model::DescribeLogContextRequest &request);
                void DescribeLogContextAsync(const Model::DescribeLogContextRequest& request, const DescribeLogContextAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeLogContextOutcomeCallable DescribeLogContextCallable(const Model::DescribeLogContextRequest& request);

                /**
                 *This API is used to get a log count histogram.
                 * @param req DescribeLogHistogramRequest
                 * @return DescribeLogHistogramOutcome
                 */
                DescribeLogHistogramOutcome DescribeLogHistogram(const Model::DescribeLogHistogramRequest &request);
                void DescribeLogHistogramAsync(const Model::DescribeLogHistogramRequest& request, const DescribeLogHistogramAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeLogHistogramOutcomeCallable DescribeLogHistogramCallable(const Model::DescribeLogHistogramRequest& request);

                /**
                 *This API is used to get the list of logsets.
                 * @param req DescribeLogsetsRequest
                 * @return DescribeLogsetsOutcome
                 */
                DescribeLogsetsOutcome DescribeLogsets(const Model::DescribeLogsetsRequest &request);
                void DescribeLogsetsAsync(const Model::DescribeLogsetsRequest& request, const DescribeLogsetsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeLogsetsOutcomeCallable DescribeLogsetsCallable(const Model::DescribeLogsetsRequest& request);

                /**
                 *This API is used to get the collection rule configuration bound to a machine group.
                 * @param req DescribeMachineGroupConfigsRequest
                 * @return DescribeMachineGroupConfigsOutcome
                 */
                DescribeMachineGroupConfigsOutcome DescribeMachineGroupConfigs(const Model::DescribeMachineGroupConfigsRequest &request);
                void DescribeMachineGroupConfigsAsync(const Model::DescribeMachineGroupConfigsRequest& request, const DescribeMachineGroupConfigsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeMachineGroupConfigsOutcomeCallable DescribeMachineGroupConfigsCallable(const Model::DescribeMachineGroupConfigsRequest& request);

                /**
                 *This API is used to get the list of machine groups.
                 * @param req DescribeMachineGroupsRequest
                 * @return DescribeMachineGroupsOutcome
                 */
                DescribeMachineGroupsOutcome DescribeMachineGroups(const Model::DescribeMachineGroupsRequest &request);
                void DescribeMachineGroupsAsync(const Model::DescribeMachineGroupsRequest& request, const DescribeMachineGroupsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeMachineGroupsOutcomeCallable DescribeMachineGroupsCallable(const Model::DescribeMachineGroupsRequest& request);

                /**
                 *This API is used to get the status of a machine under the specified machine group.
                 * @param req DescribeMachinesRequest
                 * @return DescribeMachinesOutcome
                 */
                DescribeMachinesOutcome DescribeMachines(const Model::DescribeMachinesRequest &request);
                void DescribeMachinesAsync(const Model::DescribeMachinesRequest& request, const DescribeMachinesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeMachinesOutcomeCallable DescribeMachinesCallable(const Model::DescribeMachinesRequest& request);

                /**
                 *This API is used to obtain metric subscription configurations.
                 * @param req DescribeMetricCorrectDimensionRequest
                 * @return DescribeMetricCorrectDimensionOutcome
                 */
                DescribeMetricCorrectDimensionOutcome DescribeMetricCorrectDimension(const Model::DescribeMetricCorrectDimensionRequest &request);
                void DescribeMetricCorrectDimensionAsync(const Model::DescribeMetricCorrectDimensionRequest& request, const DescribeMetricCorrectDimensionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeMetricCorrectDimensionOutcomeCallable DescribeMetricCorrectDimensionCallable(const Model::DescribeMetricCorrectDimensionRequest& request);

                /**
                 *This API is used to create metric subscription configurations.
                 * @param req DescribeMetricSubscribePreviewRequest
                 * @return DescribeMetricSubscribePreviewOutcome
                 */
                DescribeMetricSubscribePreviewOutcome DescribeMetricSubscribePreview(const Model::DescribeMetricSubscribePreviewRequest &request);
                void DescribeMetricSubscribePreviewAsync(const Model::DescribeMetricSubscribePreviewRequest& request, const DescribeMetricSubscribePreviewAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeMetricSubscribePreviewOutcomeCallable DescribeMetricSubscribePreviewCallable(const Model::DescribeMetricSubscribePreviewRequest& request);

                /**
                 *This API is used to obtain metric subscription configurations.
                 * @param req DescribeMetricSubscribesRequest
                 * @return DescribeMetricSubscribesOutcome
                 */
                DescribeMetricSubscribesOutcome DescribeMetricSubscribes(const Model::DescribeMetricSubscribesRequest &request);
                void DescribeMetricSubscribesAsync(const Model::DescribeMetricSubscribesRequest& request, const DescribeMetricSubscribesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeMetricSubscribesOutcomeCallable DescribeMetricSubscribesCallable(const Model::DescribeMetricSubscribesRequest& request);

                /**
                 *Retrieve web application details
                 * @param req DescribeNetworkApplicationDetailRequest
                 * @return DescribeNetworkApplicationDetailOutcome
                 */
                DescribeNetworkApplicationDetailOutcome DescribeNetworkApplicationDetail(const Model::DescribeNetworkApplicationDetailRequest &request);
                void DescribeNetworkApplicationDetailAsync(const Model::DescribeNetworkApplicationDetailRequest& request, const DescribeNetworkApplicationDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeNetworkApplicationDetailOutcomeCallable DescribeNetworkApplicationDetailCallable(const Model::DescribeNetworkApplicationDetailRequest& request);

                /**
                 *Retrieve the network application list
                 * @param req DescribeNetworkApplicationsRequest
                 * @return DescribeNetworkApplicationsOutcome
                 */
                DescribeNetworkApplicationsOutcome DescribeNetworkApplications(const Model::DescribeNetworkApplicationsRequest &request);
                void DescribeNetworkApplicationsAsync(const Model::DescribeNetworkApplicationsRequest& request, const DescribeNetworkApplicationsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeNetworkApplicationsOutcomeCallable DescribeNetworkApplicationsCallable(const Model::DescribeNetworkApplicationsRequest& request);

                /**
                 *This API is used to obtain the notification content list.
                 * @param req DescribeNoticeContentsRequest
                 * @return DescribeNoticeContentsOutcome
                 */
                DescribeNoticeContentsOutcome DescribeNoticeContents(const Model::DescribeNoticeContentsRequest &request);
                void DescribeNoticeContentsAsync(const Model::DescribeNoticeContentsRequest& request, const DescribeNoticeContentsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeNoticeContentsOutcomeCallable DescribeNoticeContentsCallable(const Model::DescribeNoticeContentsRequest& request);

                /**
                 *This API is deprecated. If needed, please use the DescribeTopics API to get the number of partitions.
                 * @param req DescribePartitionsRequest
                 * @return DescribePartitionsOutcome
                 */
                DescribePartitionsOutcome DescribePartitions(const Model::DescribePartitionsRequest &request);
                void DescribePartitionsAsync(const Model::DescribePartitionsRequest& request, const DescribePartitionsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribePartitionsOutcomeCallable DescribePartitionsCallable(const Model::DescribePartitionsRequest& request);

                /**
                 *This API is used to obtain the list of rebuild index tasks.
                 * @param req DescribeRebuildIndexTasksRequest
                 * @return DescribeRebuildIndexTasksOutcome
                 */
                DescribeRebuildIndexTasksOutcome DescribeRebuildIndexTasks(const Model::DescribeRebuildIndexTasksRequest &request);
                void DescribeRebuildIndexTasksAsync(const Model::DescribeRebuildIndexTasksRequest& request, const DescribeRebuildIndexTasksAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeRebuildIndexTasksOutcomeCallable DescribeRebuildIndexTasksCallable(const Model::DescribeRebuildIndexTasksRequest& request);

                /**
                 *This API is used to retrieve the pre-aggregation task list.
                 * @param req DescribeRecordingRuleTaskRequest
                 * @return DescribeRecordingRuleTaskOutcome
                 */
                DescribeRecordingRuleTaskOutcome DescribeRecordingRuleTask(const Model::DescribeRecordingRuleTaskRequest &request);
                void DescribeRecordingRuleTaskAsync(const Model::DescribeRecordingRuleTaskRequest& request, const DescribeRecordingRuleTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeRecordingRuleTaskOutcomeCallable DescribeRecordingRuleTaskCallable(const Model::DescribeRecordingRuleTaskRequest& request);

                /**
                 *This API is used to retrieve the pre-aggregation task list in yaml.
                 * @param req DescribeRecordingRuleYamlTaskRequest
                 * @return DescribeRecordingRuleYamlTaskOutcome
                 */
                DescribeRecordingRuleYamlTaskOutcome DescribeRecordingRuleYamlTask(const Model::DescribeRecordingRuleYamlTaskRequest &request);
                void DescribeRecordingRuleYamlTaskAsync(const Model::DescribeRecordingRuleYamlTaskRequest& request, const DescribeRecordingRuleYamlTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeRecordingRuleYamlTaskOutcomeCallable DescribeRecordingRuleYamlTaskCallable(const Model::DescribeRecordingRuleYamlTaskRequest& request);

                /**
                 *This API is used to access the scheduled SQL analysis task list.
                 * @param req DescribeScheduledSqlInfoRequest
                 * @return DescribeScheduledSqlInfoOutcome
                 */
                DescribeScheduledSqlInfoOutcome DescribeScheduledSqlInfo(const Model::DescribeScheduledSqlInfoRequest &request);
                void DescribeScheduledSqlInfoAsync(const Model::DescribeScheduledSqlInfoRequest& request, const DescribeScheduledSqlInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeScheduledSqlInfoOutcomeCallable DescribeScheduledSqlInfoCallable(const Model::DescribeScheduledSqlInfoRequest& request);

                /**
                 *Query view list
                 * @param req DescribeSearchViewsRequest
                 * @return DescribeSearchViewsOutcome
                 */
                DescribeSearchViewsOutcome DescribeSearchViews(const Model::DescribeSearchViewsRequest &request);
                void DescribeSearchViewsAsync(const Model::DescribeSearchViewsRequest& request, const DescribeSearchViewsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeSearchViewsOutcomeCallable DescribeSearchViewsCallable(const Model::DescribeSearchViewsRequest& request);

                /**
                 *This API is used to get the list of shipping tasks.
                 * @param req DescribeShipperTasksRequest
                 * @return DescribeShipperTasksOutcome
                 */
                DescribeShipperTasksOutcome DescribeShipperTasks(const Model::DescribeShipperTasksRequest &request);
                void DescribeShipperTasksAsync(const Model::DescribeShipperTasksRequest& request, const DescribeShipperTasksAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeShipperTasksOutcomeCallable DescribeShipperTasksCallable(const Model::DescribeShipperTasksRequest& request);

                /**
                 *This API is used to get the configuration of the task shipped to COS.
                 * @param req DescribeShippersRequest
                 * @return DescribeShippersOutcome
                 */
                DescribeShippersOutcome DescribeShippers(const Model::DescribeShippersRequest &request);
                void DescribeShippersAsync(const Model::DescribeShippersRequest& request, const DescribeShippersAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeShippersOutcomeCallable DescribeShippersCallable(const Model::DescribeShippersRequest& request);

                /**
                 *Retrieve the Splunk delivery task list
                 * @param req DescribeSplunkDeliversRequest
                 * @return DescribeSplunkDeliversOutcome
                 */
                DescribeSplunkDeliversOutcome DescribeSplunkDelivers(const Model::DescribeSplunkDeliversRequest &request);
                void DescribeSplunkDeliversAsync(const Model::DescribeSplunkDeliversRequest& request, const DescribeSplunkDeliversAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeSplunkDeliversOutcomeCallable DescribeSplunkDeliversCallable(const Model::DescribeSplunkDeliversRequest& request);

                /**
                 *splunk delivery task preview
                 * @param req DescribeSplunkPreviewRequest
                 * @return DescribeSplunkPreviewOutcome
                 */
                DescribeSplunkPreviewOutcome DescribeSplunkPreview(const Model::DescribeSplunkPreviewRequest &request);
                void DescribeSplunkPreviewAsync(const Model::DescribeSplunkPreviewRequest& request, const DescribeSplunkPreviewAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeSplunkPreviewOutcomeCallable DescribeSplunkPreviewCallable(const Model::DescribeSplunkPreviewRequest& request);

                /**
                 *This API is used to obtain metric subscription configurations.
                 * @param req DescribeTopicBaseMetricConfigsRequest
                 * @return DescribeTopicBaseMetricConfigsOutcome
                 */
                DescribeTopicBaseMetricConfigsOutcome DescribeTopicBaseMetricConfigs(const Model::DescribeTopicBaseMetricConfigsRequest &request);
                void DescribeTopicBaseMetricConfigsAsync(const Model::DescribeTopicBaseMetricConfigsRequest& request, const DescribeTopicBaseMetricConfigsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeTopicBaseMetricConfigsOutcomeCallable DescribeTopicBaseMetricConfigsCallable(const Model::DescribeTopicBaseMetricConfigsRequest& request);

                /**
                 *This API is used to obtain metric subscription configurations.
                 * @param req DescribeTopicMetricConfigsRequest
                 * @return DescribeTopicMetricConfigsOutcome
                 */
                DescribeTopicMetricConfigsOutcome DescribeTopicMetricConfigs(const Model::DescribeTopicMetricConfigsRequest &request);
                void DescribeTopicMetricConfigsAsync(const Model::DescribeTopicMetricConfigsRequest& request, const DescribeTopicMetricConfigsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeTopicMetricConfigsOutcomeCallable DescribeTopicMetricConfigsCallable(const Model::DescribeTopicMetricConfigsRequest& request);

                /**
                 *This API is used to obtain logs or metric topic lists and supports pagination.
                 * @param req DescribeTopicsRequest
                 * @return DescribeTopicsOutcome
                 */
                DescribeTopicsOutcome DescribeTopics(const Model::DescribeTopicsRequest &request);
                void DescribeTopicsAsync(const Model::DescribeTopicsRequest& request, const DescribeTopicsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeTopicsOutcomeCallable DescribeTopicsCallable(const Model::DescribeTopicsRequest& request);

                /**
                 *This API is used to search alarm channel callback configuration lists.
                 * @param req DescribeWebCallbacksRequest
                 * @return DescribeWebCallbacksOutcome
                 */
                DescribeWebCallbacksOutcome DescribeWebCallbacks(const Model::DescribeWebCallbacksRequest &request);
                void DescribeWebCallbacksAsync(const Model::DescribeWebCallbacksRequest& request, const DescribeWebCallbacksAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeWebCallbacksOutcomeCallable DescribeWebCallbacksCallable(const Model::DescribeWebCallbacksRequest& request);

                /**
                 *This API is used to estimate rebuild index tasks.
                 * @param req EstimateRebuildIndexTaskRequest
                 * @return EstimateRebuildIndexTaskOutcome
                 */
                EstimateRebuildIndexTaskOutcome EstimateRebuildIndexTask(const Model::EstimateRebuildIndexTaskRequest &request);
                void EstimateRebuildIndexTaskAsync(const Model::EstimateRebuildIndexTaskRequest& request, const EstimateRebuildIndexTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                EstimateRebuildIndexTaskOutcomeCallable EstimateRebuildIndexTaskCallable(const Model::EstimateRebuildIndexTaskRequest& request);

                /**
                 *This API is used to access alarm policy execution details.
                 * @param req GetAlarmLogRequest
                 * @return GetAlarmLogOutcome
                 */
                GetAlarmLogOutcome GetAlarmLog(const Model::GetAlarmLogRequest &request);
                void GetAlarmLogAsync(const Model::GetAlarmLogRequest& request, const GetAlarmLogAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                GetAlarmLogOutcomeCallable GetAlarmLogCallable(const Model::GetAlarmLogRequest& request);

                /**
                 *This API is used to check whether CLS is enabled.
This API is used to fill in any region for Region, recommend using Guangzhou (ap-guangzhou).
                 * @param req GetClsServiceRequest
                 * @return GetClsServiceOutcome
                 */
                GetClsServiceOutcome GetClsService(const Model::GetClsServiceRequest &request);
                void GetClsServiceAsync(const Model::GetClsServiceRequest& request, const GetClsServiceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                GetClsServiceOutcomeCallable GetClsServiceCallable(const Model::GetClsServiceRequest& request);

                /**
                 *This API is used to obtain the list of time series label values.
                 * @param req GetMetricLabelValuesRequest
                 * @return GetMetricLabelValuesOutcome
                 */
                GetMetricLabelValuesOutcome GetMetricLabelValues(const Model::GetMetricLabelValuesRequest &request);
                void GetMetricLabelValuesAsync(const Model::GetMetricLabelValuesRequest& request, const GetMetricLabelValuesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                GetMetricLabelValuesOutcomeCallable GetMetricLabelValuesCallable(const Model::GetMetricLabelValuesRequest& request);

                /**
                 *This API is deprecated. If needed, please use the ModifyTopic API to change the number of partitions.
                 * @param req MergePartitionRequest
                 * @return MergePartitionOutcome
                 */
                MergePartitionOutcome MergePartition(const Model::MergePartitionRequest &request);
                void MergePartitionAsync(const Model::MergePartitionRequest& request, const MergePartitionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                MergePartitionOutcomeCallable MergePartitionCallable(const Model::MergePartitionRequest& request);

                /**
                 *This API is used to modify an alarm policy. At least one valid configuration item needs to be modified.
                 * @param req ModifyAlarmRequest
                 * @return ModifyAlarmOutcome
                 */
                ModifyAlarmOutcome ModifyAlarm(const Model::ModifyAlarmRequest &request);
                void ModifyAlarmAsync(const Model::ModifyAlarmRequest& request, const ModifyAlarmAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyAlarmOutcomeCallable ModifyAlarmCallable(const Model::ModifyAlarmRequest& request);

                /**
                 *This API is used to modify a notification group.
                 * @param req ModifyAlarmNoticeRequest
                 * @return ModifyAlarmNoticeOutcome
                 */
                ModifyAlarmNoticeOutcome ModifyAlarmNotice(const Model::ModifyAlarmNoticeRequest &request);
                void ModifyAlarmNoticeAsync(const Model::ModifyAlarmNoticeRequest& request, const ModifyAlarmNoticeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyAlarmNoticeOutcomeCallable ModifyAlarmNoticeCallable(const Model::ModifyAlarmNoticeRequest& request);

                /**
                 *This API is used to modify alarm blocking rules. When the alarm blocking rule is invalid, it cannot be modified.
                 * @param req ModifyAlarmShieldRequest
                 * @return ModifyAlarmShieldOutcome
                 */
                ModifyAlarmShieldOutcome ModifyAlarmShield(const Model::ModifyAlarmShieldRequest &request);
                void ModifyAlarmShieldAsync(const Model::ModifyAlarmShieldRequest& request, const ModifyAlarmShieldAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyAlarmShieldOutcomeCallable ModifyAlarmShieldCallable(const Model::ModifyAlarmShieldRequest& request);

                /**
                 *Cloud product integration uses internal APIs
                 * @param req ModifyCloudProductLogCollectionRequest
                 * @return ModifyCloudProductLogCollectionOutcome
                 */
                ModifyCloudProductLogCollectionOutcome ModifyCloudProductLogCollection(const Model::ModifyCloudProductLogCollectionRequest &request);
                void ModifyCloudProductLogCollectionAsync(const Model::ModifyCloudProductLogCollectionRequest& request, const ModifyCloudProductLogCollectionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyCloudProductLogCollectionOutcomeCallable ModifyCloudProductLogCollectionCallable(const Model::ModifyCloudProductLogCollectionRequest& request);

                /**
                 *This API is used to modify collection rule configuration.
                 * @param req ModifyConfigRequest
                 * @return ModifyConfigOutcome
                 */
                ModifyConfigOutcome ModifyConfig(const Model::ModifyConfigRequest &request);
                void ModifyConfigAsync(const Model::ModifyConfigRequest& request, const ModifyConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyConfigOutcomeCallable ModifyConfigCallable(const Model::ModifyConfigRequest& request);

                /**
                 *This API is used to edit the DataSight Console
                 * @param req ModifyConsoleRequest
                 * @return ModifyConsoleOutcome
                 */
                ModifyConsoleOutcome ModifyConsole(const Model::ModifyConsoleRequest &request);
                void ModifyConsoleAsync(const Model::ModifyConsoleRequest& request, const ModifyConsoleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyConsoleOutcomeCallable ModifyConsoleCallable(const Model::ModifyConsoleRequest& request);

                /**
                 *This API is used to modify a CKafka delivery task.
                 * @param req ModifyConsumerRequest
                 * @return ModifyConsumerOutcome
                 */
                ModifyConsumerOutcome ModifyConsumer(const Model::ModifyConsumerRequest &request);
                void ModifyConsumerAsync(const Model::ModifyConsumerRequest& request, const ModifyConsumerAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyConsumerOutcomeCallable ModifyConsumerCallable(const Model::ModifyConsumerRequest& request);

                /**
                 *This API is used to update the consumer group information.
                 * @param req ModifyConsumerGroupRequest
                 * @return ModifyConsumerGroupOutcome
                 */
                ModifyConsumerGroupOutcome ModifyConsumerGroup(const Model::ModifyConsumerGroupRequest &request);
                void ModifyConsumerGroupAsync(const Model::ModifyConsumerGroupRequest& request, const ModifyConsumerGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyConsumerGroupOutcomeCallable ModifyConsumerGroupCallable(const Model::ModifyConsumerGroupRequest& request);

                /**
                 *This API is used to modify a COS import task.
                 * @param req ModifyCosRechargeRequest
                 * @return ModifyCosRechargeOutcome
                 */
                ModifyCosRechargeOutcome ModifyCosRecharge(const Model::ModifyCosRechargeRequest &request);
                void ModifyCosRechargeAsync(const Model::ModifyCosRechargeRequest& request, const ModifyCosRechargeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyCosRechargeOutcomeCallable ModifyCosRechargeCallable(const Model::ModifyCosRechargeRequest& request);

                /**
                 *This API is used to modify the dashboard.
                 * @param req ModifyDashboardRequest
                 * @return ModifyDashboardOutcome
                 */
                ModifyDashboardOutcome ModifyDashboard(const Model::ModifyDashboardRequest &request);
                void ModifyDashboardAsync(const Model::ModifyDashboardRequest& request, const ModifyDashboardAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyDashboardOutcomeCallable ModifyDashboardCallable(const Model::ModifyDashboardRequest& request);

                /**
                 *This API is used to modify dashboard subscriptions.
                 * @param req ModifyDashboardSubscribeRequest
                 * @return ModifyDashboardSubscribeOutcome
                 */
                ModifyDashboardSubscribeOutcome ModifyDashboardSubscribe(const Model::ModifyDashboardSubscribeRequest &request);
                void ModifyDashboardSubscribeAsync(const Model::ModifyDashboardSubscribeRequest& request, const ModifyDashboardSubscribeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyDashboardSubscribeOutcomeCallable ModifyDashboardSubscribeCallable(const Model::ModifyDashboardSubscribeRequest& request);

                /**
                 *This API is used to modify a data processing task.
                 * @param req ModifyDataTransformRequest
                 * @return ModifyDataTransformOutcome
                 */
                ModifyDataTransformOutcome ModifyDataTransform(const Model::ModifyDataTransformRequest &request);
                void ModifyDataTransformAsync(const Model::ModifyDataTransformRequest& request, const ModifyDataTransformAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyDataTransformOutcomeCallable ModifyDataTransformCallable(const Model::ModifyDataTransformRequest& request);

                /**
                 *Modify a DLC delivery task
                 * @param req ModifyDlcDeliverRequest
                 * @return ModifyDlcDeliverOutcome
                 */
                ModifyDlcDeliverOutcome ModifyDlcDeliver(const Model::ModifyDlcDeliverRequest &request);
                void ModifyDlcDeliverAsync(const Model::ModifyDlcDeliverRequest& request, const ModifyDlcDeliverAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyDlcDeliverOutcomeCallable ModifyDlcDeliverCallable(const Model::ModifyDlcDeliverRequest& request);

                /**
                 *Modify es import configuration
                 * @param req ModifyEsRechargeRequest
                 * @return ModifyEsRechargeOutcome
                 */
                ModifyEsRechargeOutcome ModifyEsRecharge(const Model::ModifyEsRechargeRequest &request);
                void ModifyEsRechargeAsync(const Model::ModifyEsRechargeRequest& request, const ModifyEsRechargeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyEsRechargeOutcomeCallable ModifyEsRechargeCallable(const Model::ModifyEsRechargeRequest& request);

                /**
                 *Modify host metric collection configuration
                 * @param req ModifyHostMetricConfigRequest
                 * @return ModifyHostMetricConfigOutcome
                 */
                ModifyHostMetricConfigOutcome ModifyHostMetricConfig(const Model::ModifyHostMetricConfigRequest &request);
                void ModifyHostMetricConfigAsync(const Model::ModifyHostMetricConfigRequest& request, const ModifyHostMetricConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyHostMetricConfigOutcomeCallable ModifyHostMetricConfigCallable(const Model::ModifyHostMetricConfigRequest& request);

                /**
                 *This API is used to modify the index configuration. It is subject to the default request frequency limit, and the number of concurrent requests to the same log topic cannot exceed 1, i.e., the index configuration of only one log topic can be modified at a time.
                 * @param req ModifyIndexRequest
                 * @return ModifyIndexOutcome
                 */
                ModifyIndexOutcome ModifyIndex(const Model::ModifyIndexRequest &request);
                void ModifyIndexAsync(const Model::ModifyIndexRequest& request, const ModifyIndexAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyIndexOutcomeCallable ModifyIndexCallable(const Model::ModifyIndexRequest& request);

                /**
                 *This API is used to modify Kafka protocol consumption information.
                 * @param req ModifyKafkaConsumerRequest
                 * @return ModifyKafkaConsumerOutcome
                 */
                ModifyKafkaConsumerOutcome ModifyKafkaConsumer(const Model::ModifyKafkaConsumerRequest &request);
                void ModifyKafkaConsumerAsync(const Model::ModifyKafkaConsumerRequest& request, const ModifyKafkaConsumerAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyKafkaConsumerOutcomeCallable ModifyKafkaConsumerCallable(const Model::ModifyKafkaConsumerRequest& request);

                /**
                 *This API is used to modify Kafka protocol consumption group offsets.
                 * @param req ModifyKafkaConsumerGroupOffsetRequest
                 * @return ModifyKafkaConsumerGroupOffsetOutcome
                 */
                ModifyKafkaConsumerGroupOffsetOutcome ModifyKafkaConsumerGroupOffset(const Model::ModifyKafkaConsumerGroupOffsetRequest &request);
                void ModifyKafkaConsumerGroupOffsetAsync(const Model::ModifyKafkaConsumerGroupOffsetRequest& request, const ModifyKafkaConsumerGroupOffsetAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyKafkaConsumerGroupOffsetOutcomeCallable ModifyKafkaConsumerGroupOffsetCallable(const Model::ModifyKafkaConsumerGroupOffsetRequest& request);

                /**
                 *This API is used to modify a Kafka data subscription task.
                 * @param req ModifyKafkaRechargeRequest
                 * @return ModifyKafkaRechargeOutcome
                 */
                ModifyKafkaRechargeOutcome ModifyKafkaRecharge(const Model::ModifyKafkaRechargeRequest &request);
                void ModifyKafkaRechargeAsync(const Model::ModifyKafkaRechargeRequest& request, const ModifyKafkaRechargeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyKafkaRechargeOutcomeCallable ModifyKafkaRechargeCallable(const Model::ModifyKafkaRechargeRequest& request);

                /**
                 *This API is used to modify a logset.
                 * @param req ModifyLogsetRequest
                 * @return ModifyLogsetOutcome
                 */
                ModifyLogsetOutcome ModifyLogset(const Model::ModifyLogsetRequest &request);
                void ModifyLogsetAsync(const Model::ModifyLogsetRequest& request, const ModifyLogsetAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyLogsetOutcomeCallable ModifyLogsetCallable(const Model::ModifyLogsetRequest& request);

                /**
                 *Modify machine group.
Note: Modifying the interface will directly overwrite historical data and change it to valid input parameters this time. Please be cautious when calling this API.
                 * @param req ModifyMachineGroupRequest
                 * @return ModifyMachineGroupOutcome
                 */
                ModifyMachineGroupOutcome ModifyMachineGroup(const Model::ModifyMachineGroupRequest &request);
                void ModifyMachineGroupAsync(const Model::ModifyMachineGroupRequest& request, const ModifyMachineGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyMachineGroupOutcomeCallable ModifyMachineGroupCallable(const Model::ModifyMachineGroupRequest& request);

                /**
                 *This API is used to create metric collection configurations.
                 * @param req ModifyMetricConfigRequest
                 * @return ModifyMetricConfigOutcome
                 */
                ModifyMetricConfigOutcome ModifyMetricConfig(const Model::ModifyMetricConfigRequest &request);
                void ModifyMetricConfigAsync(const Model::ModifyMetricConfigRequest& request, const ModifyMetricConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyMetricConfigOutcomeCallable ModifyMetricConfigCallable(const Model::ModifyMetricConfigRequest& request);

                /**
                 *This API is used to modify metric subscription configurations.
                 * @param req ModifyMetricSubscribeRequest
                 * @return ModifyMetricSubscribeOutcome
                 */
                ModifyMetricSubscribeOutcome ModifyMetricSubscribe(const Model::ModifyMetricSubscribeRequest &request);
                void ModifyMetricSubscribeAsync(const Model::ModifyMetricSubscribeRequest& request, const ModifyMetricSubscribeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyMetricSubscribeOutcomeCallable ModifyMetricSubscribeCallable(const Model::ModifyMetricSubscribeRequest& request);

                /**
                 *Modify a web application
                 * @param req ModifyNetworkApplicationRequest
                 * @return ModifyNetworkApplicationOutcome
                 */
                ModifyNetworkApplicationOutcome ModifyNetworkApplication(const Model::ModifyNetworkApplicationRequest &request);
                void ModifyNetworkApplicationAsync(const Model::ModifyNetworkApplicationRequest& request, const ModifyNetworkApplicationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyNetworkApplicationOutcomeCallable ModifyNetworkApplicationCallable(const Model::ModifyNetworkApplicationRequest& request);

                /**
                 *This API is used to modify notification content configuration.
                 * @param req ModifyNoticeContentRequest
                 * @return ModifyNoticeContentOutcome
                 */
                ModifyNoticeContentOutcome ModifyNoticeContent(const Model::ModifyNoticeContentRequest &request);
                void ModifyNoticeContentAsync(const Model::ModifyNoticeContentRequest& request, const ModifyNoticeContentAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyNoticeContentOutcomeCallable ModifyNoticeContentCallable(const Model::ModifyNoticeContentRequest& request);

                /**
                 *This API is used to modify a scheduled pre-aggregation task.
                 * @param req ModifyRecordingRuleTaskRequest
                 * @return ModifyRecordingRuleTaskOutcome
                 */
                ModifyRecordingRuleTaskOutcome ModifyRecordingRuleTask(const Model::ModifyRecordingRuleTaskRequest &request);
                void ModifyRecordingRuleTaskAsync(const Model::ModifyRecordingRuleTaskRequest& request, const ModifyRecordingRuleTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyRecordingRuleTaskOutcomeCallable ModifyRecordingRuleTaskCallable(const Model::ModifyRecordingRuleTaskRequest& request);

                /**
                 *Modifying a Metric Pre-Aggregation Task Through a YAML File
                 * @param req ModifyRecordingRuleYamlTaskRequest
                 * @return ModifyRecordingRuleYamlTaskOutcome
                 */
                ModifyRecordingRuleYamlTaskOutcome ModifyRecordingRuleYamlTask(const Model::ModifyRecordingRuleYamlTaskRequest &request);
                void ModifyRecordingRuleYamlTaskAsync(const Model::ModifyRecordingRuleYamlTaskRequest& request, const ModifyRecordingRuleYamlTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyRecordingRuleYamlTaskOutcomeCallable ModifyRecordingRuleYamlTaskCallable(const Model::ModifyRecordingRuleYamlTaskRequest& request);

                /**
                 *This API is used to modify a scheduled SQL analysis task.
                 * @param req ModifyScheduledSqlRequest
                 * @return ModifyScheduledSqlOutcome
                 */
                ModifyScheduledSqlOutcome ModifyScheduledSql(const Model::ModifyScheduledSqlRequest &request);
                void ModifyScheduledSqlAsync(const Model::ModifyScheduledSqlRequest& request, const ModifyScheduledSqlAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyScheduledSqlOutcomeCallable ModifyScheduledSqlCallable(const Model::ModifyScheduledSqlRequest& request);

                /**
                 *This API is used to modify a query view.
                 * @param req ModifySearchViewRequest
                 * @return ModifySearchViewOutcome
                 */
                ModifySearchViewOutcome ModifySearchView(const Model::ModifySearchViewRequest &request);
                void ModifySearchViewAsync(const Model::ModifySearchViewRequest& request, const ModifySearchViewAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifySearchViewOutcomeCallable ModifySearchViewCallable(const Model::ModifySearchViewRequest& request);

                /**
                 *This API is used to modify an existing shipping rule. To use this API, you need to grant CLS the write permission of the specified bucket.
                 * @param req ModifyShipperRequest
                 * @return ModifyShipperOutcome
                 */
                ModifyShipperOutcome ModifyShipper(const Model::ModifyShipperRequest &request);
                void ModifyShipperAsync(const Model::ModifyShipperRequest& request, const ModifyShipperAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyShipperOutcomeCallable ModifyShipperCallable(const Model::ModifyShipperRequest& request);

                /**
                 *Modify information related to splunk delivery task
                 * @param req ModifySplunkDeliverRequest
                 * @return ModifySplunkDeliverOutcome
                 */
                ModifySplunkDeliverOutcome ModifySplunkDeliver(const Model::ModifySplunkDeliverRequest &request);
                void ModifySplunkDeliverAsync(const Model::ModifySplunkDeliverRequest& request, const ModifySplunkDeliverAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifySplunkDeliverOutcomeCallable ModifySplunkDeliverCallable(const Model::ModifySplunkDeliverRequest& request);

                /**
                 *This API is used to modify logs or metric topics.
                 * @param req ModifyTopicRequest
                 * @return ModifyTopicOutcome
                 */
                ModifyTopicOutcome ModifyTopic(const Model::ModifyTopicRequest &request);
                void ModifyTopicAsync(const Model::ModifyTopicRequest& request, const ModifyTopicAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyTopicOutcomeCallable ModifyTopicCallable(const Model::ModifyTopicRequest& request);

                /**
                 *This API is used to modify alarm channel callback configurations.
                 * @param req ModifyWebCallbackRequest
                 * @return ModifyWebCallbackOutcome
                 */
                ModifyWebCallbackOutcome ModifyWebCallback(const Model::ModifyWebCallbackRequest &request);
                void ModifyWebCallbackAsync(const Model::ModifyWebCallbackRequest& request, const ModifyWebCallbackAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyWebCallbackOutcomeCallable ModifyWebCallbackCallable(const Model::ModifyWebCallbackRequest& request);

                /**
                 *This API is used to create resources and indexes dependent on OpenClaw.
                 * @param req OpenClawServiceRequest
                 * @return OpenClawServiceOutcome
                 */
                OpenClawServiceOutcome OpenClawService(const Model::OpenClawServiceRequest &request);
                void OpenClawServiceAsync(const Model::OpenClawServiceRequest& request, const OpenClawServiceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                OpenClawServiceOutcomeCallable OpenClawServiceCallable(const Model::OpenClawServiceRequest& request);

                /**
                 *Enable logging
This API is used to enable CLS in all regions by filling any region for Region, recommend using Guangzhou (ap-guangzhou).
                 * @param req OpenClsServiceRequest
                 * @return OpenClsServiceOutcome
                 */
                OpenClsServiceOutcome OpenClsService(const Model::OpenClsServiceRequest &request);
                void OpenClsServiceAsync(const Model::OpenClsServiceRequest& request, const OpenClsServiceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                OpenClsServiceOutcomeCallable OpenClsServiceCallable(const Model::OpenClsServiceRequest& request);

                /**
                 *This API is used to enable the Kafka consumption feature.
                 * @param req OpenKafkaConsumerRequest
                 * @return OpenKafkaConsumerOutcome
                 */
                OpenKafkaConsumerOutcome OpenKafkaConsumer(const Model::OpenKafkaConsumerRequest &request);
                void OpenKafkaConsumerAsync(const Model::OpenKafkaConsumerRequest& request, const OpenKafkaConsumerAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                OpenKafkaConsumerOutcomeCallable OpenKafkaConsumerCallable(const Model::OpenKafkaConsumerRequest& request);

                /**
                 *This API is used to preview the logs of Kafka data subscription tasks.
                 * @param req PreviewKafkaRechargeRequest
                 * @return PreviewKafkaRechargeOutcome
                 */
                PreviewKafkaRechargeOutcome PreviewKafkaRecharge(const Model::PreviewKafkaRechargeRequest &request);
                void PreviewKafkaRechargeAsync(const Model::PreviewKafkaRechargeRequest& request, const PreviewKafkaRechargeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                PreviewKafkaRechargeOutcomeCallable PreviewKafkaRechargeCallable(const Model::PreviewKafkaRechargeRequest& request);

                /**
                 *Query the latest metric value at a specified time.
If there is no metric data in the 5 minutes before that moment, there will be no query result.
                 * @param req QueryMetricRequest
                 * @return QueryMetricOutcome
                 */
                QueryMetricOutcome QueryMetric(const Model::QueryMetricRequest &request);
                void QueryMetricAsync(const Model::QueryMetricRequest& request, const QueryMetricAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                QueryMetricOutcomeCallable QueryMetricCallable(const Model::QueryMetricRequest& request);

                /**
                 *This API is used to query the trend of metrics within a specified time range.
                 * @param req QueryRangeMetricRequest
                 * @return QueryRangeMetricOutcome
                 */
                QueryRangeMetricOutcome QueryRangeMetric(const Model::QueryRangeMetricRequest &request);
                void QueryRangeMetricAsync(const Model::QueryRangeMetricRequest& request, const QueryRangeMetricAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                QueryRangeMetricOutcomeCallable QueryRangeMetricCallable(const Model::QueryRangeMetricRequest& request);

                /**
                 *This API is used to retry a failed shipping task.
                 * @param req RetryShipperTaskRequest
                 * @return RetryShipperTaskOutcome
                 */
                RetryShipperTaskOutcome RetryShipperTask(const Model::RetryShipperTaskRequest &request);
                void RetryShipperTaskAsync(const Model::RetryShipperTaskRequest& request, const RetryShipperTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                RetryShipperTaskOutcomeCallable RetryShipperTaskCallable(const Model::RetryShipperTaskRequest& request);

                /**
                 *This API is used to preview COS import information.
                 * @param req SearchCosRechargeInfoRequest
                 * @return SearchCosRechargeInfoOutcome
                 */
                SearchCosRechargeInfoOutcome SearchCosRechargeInfo(const Model::SearchCosRechargeInfoRequest &request);
                void SearchCosRechargeInfoAsync(const Model::SearchCosRechargeInfoRequest& request, const SearchCosRechargeInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                SearchCosRechargeInfoOutcomeCallable SearchCosRechargeInfoCallable(const Model::SearchCosRechargeInfoRequest& request);

                /**
                 *This API is used to preview the dashboard subscription.
                 * @param req SearchDashboardSubscribeRequest
                 * @return SearchDashboardSubscribeOutcome
                 */
                SearchDashboardSubscribeOutcome SearchDashboardSubscribe(const Model::SearchDashboardSubscribeRequest &request);
                void SearchDashboardSubscribeAsync(const Model::SearchDashboardSubscribeRequest& request, const SearchDashboardSubscribeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                SearchDashboardSubscribeOutcomeCallable SearchDashboardSubscribeCallable(const Model::SearchDashboardSubscribeRequest& request);

                /**
                 *This API is used to retrieve and analyze logs. Please note the following matters when using this API.
1. Besides being subject to the default API request rate limit, for a single log topic, the number of concurrent queries cannot exceed 15.
2. The API's return data packet maximum is 49MB. It is recommended to enable gzip compression (HTTP Request Header Accept-Encoding: gzip).
                 * @param req SearchLogRequest
                 * @return SearchLogOutcome
                 */
                SearchLogOutcome SearchLog(const Model::SearchLogRequest &request);
                void SearchLogAsync(const Model::SearchLogRequest& request, const SearchLogAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                SearchLogOutcomeCallable SearchLogCallable(const Model::SearchLogRequest& request);

                /**
                 *This API is used to check the heartbeat of a consumer group.
                 * @param req SendConsumerHeartbeatRequest
                 * @return SendConsumerHeartbeatOutcome
                 */
                SendConsumerHeartbeatOutcome SendConsumerHeartbeat(const Model::SendConsumerHeartbeatRequest &request);
                void SendConsumerHeartbeatAsync(const Model::SendConsumerHeartbeatRequest& request, const SendConsumerHeartbeatAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                SendConsumerHeartbeatOutcomeCallable SendConsumerHeartbeatCallable(const Model::SendConsumerHeartbeatRequest& request);

                /**
                 *This API is deprecated. If needed, please use the ModifyTopic API to change the number of partitions.
                 * @param req SplitPartitionRequest
                 * @return SplitPartitionOutcome
                 */
                SplitPartitionOutcome SplitPartition(const Model::SplitPartitionRequest &request);
                void SplitPartitionAsync(const Model::SplitPartitionRequest& request, const SplitPartitionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                SplitPartitionOutcomeCallable SplitPartitionCallable(const Model::SplitPartitionRequest& request);

                /**
                 *## Notification
To ensure the reliability of your log data and use the log service more efficiently, we recommend that you use the CLS-optimized API to upload structured logs (https://www.tencentcloud.com/document/product/614/16873?from_cn_redirect=1).

Meanwhile, we have specially optimized and customized SDKs in multiple languages for this API for you to choose from. The SDK provides unified async sending, resource control, automatic retry, graceful shutdown, perception reporting, and other features to improve the log reporting function. For details, refer to [SDK Collection](https://www.tencentcloud.com/document/product/614/67157?from_cn_redirect=1).

Meanwhile, the log upload API also supports synchronous log data upload. If you select to continue using this API, refer to the following text.

## Feature Description

This API is used to write logs to the designated log topic.

#### Input parameter (pb binary stream, located in body)

| Field name | Data type | Location | Must | Description |
| ------------ | ------- | ---- | ---- | ------------------------------------------------------------ |
| logGroupList | message | pb   | Yes | logGroup list, encapsulated content of the log group list. It is advisable not to exceed 5 logGroups. |

Group description:

| Field name | Required or optional | Description |
| ----------- | -------- | ------------------------------------------------------------ |
| logs        | is       | a log array, which means a set of multiple logs. One Log represents one log, and the number of logs in one LogGroup cannot exceed 10000 |
| contextFlow | No | The unique ID of LogGroup, which must be imported when using context features. Format: "{context ID}-{LogGroupID}".<br>Context ID: A unique identifier for a context (a series of consecutively scrolled log files or a sequence of logs requiring order preservation), a 64-bit integer string in base 16.<br>LogGroupID: A consecutively incremental integer string in base 16. Example: "102700A66102516A-59F59".
| filename    | No       | Log file name |
| source      | No       | Log source, using machine IP as a label in general use       |
| logTags     | No       | Log tag list                                               |

Log description:

| field name | Required or optional | Description |
| -------- | -------- | ------------------------------------------------------------ |
| time     | is       | log time (Unix timestamp), supports second, millisecond, microsecond, milliseconds is recommended |
| contents | No | Key-value formatted log content, representing multiple key-value composites in a log |

Content description:

| Field name | Required or optional | Description |
| ------ | -------- | ------------------------------------------------------------ |
| key    | Yes       | The key value of a field group in a single-line log. It cannot start with `_` |
| value  | Yes       | The value of a field group in a single-line log. The value of a single-line log must not exceed 1MB, and the sum of ALL values in a LogGroup cannot exceed 5MB. |

LogTag description:

| Field name | Required or optional | Description |
| ------ | -------- | -------------------------------- |
| key    | Yes      | Custom tag key                 |
| value  | is       | value corresponding to the custom tag key |

## PB Compilation Example

This example shows how to use the official protoc compiler to compile and generate a C++ language adjustable log upload API from a description file.

Currently protoc officially supports compilation for languages such as Java, C++, and Python. For details, see [protoc](https://github.com/protocolbuffers/protobuf).

#### 1. Protocol Buffer installation

Download [Protocol Buffer](https://main.qcloudimg.com/raw/d7810aaf8b3073fbbc9d4049c21532aa/protobuf-2.6.1.tar.gz), unzip and install. The example version is protobuf 2.6.1, and the environment is Centos 7.3 system. Decompress the `protobuf-2.6.1.tar.gz` compressed package to the `/usr/local` directory and enter the directory. Execute the command as follows:

```
tar -zxvf protobuf-2.6.1.tar.gz -C /usr/local/ && cd /usr/local/protobuf-2.6.1
```

Start compilation and installation, configure environment variables, execute the command as follows:

```
[root@VM_0_8_centos protobuf-2.6.1]# ./configure 
[root@VM_0_8_centos protobuf-2.6.1]# make && make install
[root@VM_0_8_centos protobuf-2.6.1]# export PATH=$PATH:/usr/local/protobuf-2.6.1/bin
```

After successful compilation, view the version using the following command:

```
[root@VM_0_8_centos protobuf-2.6.1]# protoc --version
liprotoc 2.6.1
```

#### 2. Create PB description file

The PB description file is the data interchange format agreed by the communication parties. When uploading logs, compile the specified protocol format into the calling interface of the corresponding language version, then add to engineering code. For details, see [protoc](https://github.com/protocolbuffers/protobuf).

Create a local PB message description file cls.proto based on the PB data format specified by the log service.

!PB description file content immutable, and the file name must end with `.proto`.

The content of cls.proto (PB description file) is as follows:

```
package cls;

message Log
{
    message Content
    {
required string key = 1; // key for each group of fields
required string value = 2; // The value of the group field
    }
required int64   time     = 1; // A timestamp in UNIX time format
repeated Content contents = 2; // multiple kv combinations in a log
}

message LogTag
{
    required string key       = 1;
    required string value     = 2;
}

message LogGroup
{
repeated Log    logs        = 1; // log array composed of multiple logs
optional string contextFlow = 2; // Currently no utility
optional string filename = 3; // log file name
optional string source      = 4; // log source, general use machine IP
    repeated LogTag logTags     = 5;
}

message LogGroupList
{
repeated LogGroup logGroupList = 1; // log group list
}
```

#### 3. Compile and generate

In this example, use the proto compiler to generate C++ language files under the same directory as the cls.proto file and execute the following compilation command:

```
protoc --cpp_out=./ ./cls.proto 
```

`--cpp_out=./` means compile to cpp format and output in the current directory. `./cls.proto` refers to the cls.proto description file located in the current directory.

After successful compilation, it will output the code file in the corresponding language. This routine generates the cls.pb.h header file and the cls.pb.cc code implementation file, as shown below:

```
[root@VM_0_8_centos protobuf-2.6.1]# protoc --cpp_out=./ ./cls.proto
[root@VM_0_8_centos protobuf-2.6.1]# ls
cls.pb.cc cls.pb.h cls.proto
```

#### 4. Call

Import the generated cls.pb.h header file into the code and call the interface to encapsulate the data format.
                 * @param req UploadLogRequest
                 * @return UploadLogOutcome
                 */
                UploadLogOutcome UploadLog(const Model::UploadLogRequest &request);
                void UploadLogAsync(const Model::UploadLogRequest& request, const UploadLogAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                UploadLogOutcomeCallable UploadLogCallable(const Model::UploadLogRequest& request);

            };
        }
    }
}

#endif // !TENCENTCLOUD_CLS_V20201016_CLSCLIENT_H_
