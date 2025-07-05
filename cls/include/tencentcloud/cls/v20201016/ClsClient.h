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
#include <tencentcloud/cls/v20201016/model/CheckFunctionRequest.h>
#include <tencentcloud/cls/v20201016/model/CheckFunctionResponse.h>
#include <tencentcloud/cls/v20201016/model/CheckRechargeKafkaServerRequest.h>
#include <tencentcloud/cls/v20201016/model/CheckRechargeKafkaServerResponse.h>
#include <tencentcloud/cls/v20201016/model/CloseKafkaConsumerRequest.h>
#include <tencentcloud/cls/v20201016/model/CloseKafkaConsumerResponse.h>
#include <tencentcloud/cls/v20201016/model/CreateAlarmRequest.h>
#include <tencentcloud/cls/v20201016/model/CreateAlarmResponse.h>
#include <tencentcloud/cls/v20201016/model/CreateAlarmNoticeRequest.h>
#include <tencentcloud/cls/v20201016/model/CreateAlarmNoticeResponse.h>
#include <tencentcloud/cls/v20201016/model/CreateAlarmShieldRequest.h>
#include <tencentcloud/cls/v20201016/model/CreateAlarmShieldResponse.h>
#include <tencentcloud/cls/v20201016/model/CreateConfigRequest.h>
#include <tencentcloud/cls/v20201016/model/CreateConfigResponse.h>
#include <tencentcloud/cls/v20201016/model/CreateConsumerRequest.h>
#include <tencentcloud/cls/v20201016/model/CreateConsumerResponse.h>
#include <tencentcloud/cls/v20201016/model/CreateCosRechargeRequest.h>
#include <tencentcloud/cls/v20201016/model/CreateCosRechargeResponse.h>
#include <tencentcloud/cls/v20201016/model/CreateDataTransformRequest.h>
#include <tencentcloud/cls/v20201016/model/CreateDataTransformResponse.h>
#include <tencentcloud/cls/v20201016/model/CreateDeliverCloudFunctionRequest.h>
#include <tencentcloud/cls/v20201016/model/CreateDeliverCloudFunctionResponse.h>
#include <tencentcloud/cls/v20201016/model/CreateExportRequest.h>
#include <tencentcloud/cls/v20201016/model/CreateExportResponse.h>
#include <tencentcloud/cls/v20201016/model/CreateIndexRequest.h>
#include <tencentcloud/cls/v20201016/model/CreateIndexResponse.h>
#include <tencentcloud/cls/v20201016/model/CreateKafkaRechargeRequest.h>
#include <tencentcloud/cls/v20201016/model/CreateKafkaRechargeResponse.h>
#include <tencentcloud/cls/v20201016/model/CreateLogsetRequest.h>
#include <tencentcloud/cls/v20201016/model/CreateLogsetResponse.h>
#include <tencentcloud/cls/v20201016/model/CreateMachineGroupRequest.h>
#include <tencentcloud/cls/v20201016/model/CreateMachineGroupResponse.h>
#include <tencentcloud/cls/v20201016/model/CreateScheduledSqlRequest.h>
#include <tencentcloud/cls/v20201016/model/CreateScheduledSqlResponse.h>
#include <tencentcloud/cls/v20201016/model/CreateShipperRequest.h>
#include <tencentcloud/cls/v20201016/model/CreateShipperResponse.h>
#include <tencentcloud/cls/v20201016/model/CreateTopicRequest.h>
#include <tencentcloud/cls/v20201016/model/CreateTopicResponse.h>
#include <tencentcloud/cls/v20201016/model/DeleteAlarmRequest.h>
#include <tencentcloud/cls/v20201016/model/DeleteAlarmResponse.h>
#include <tencentcloud/cls/v20201016/model/DeleteAlarmNoticeRequest.h>
#include <tencentcloud/cls/v20201016/model/DeleteAlarmNoticeResponse.h>
#include <tencentcloud/cls/v20201016/model/DeleteAlarmShieldRequest.h>
#include <tencentcloud/cls/v20201016/model/DeleteAlarmShieldResponse.h>
#include <tencentcloud/cls/v20201016/model/DeleteConfigRequest.h>
#include <tencentcloud/cls/v20201016/model/DeleteConfigResponse.h>
#include <tencentcloud/cls/v20201016/model/DeleteConfigFromMachineGroupRequest.h>
#include <tencentcloud/cls/v20201016/model/DeleteConfigFromMachineGroupResponse.h>
#include <tencentcloud/cls/v20201016/model/DeleteConsumerRequest.h>
#include <tencentcloud/cls/v20201016/model/DeleteConsumerResponse.h>
#include <tencentcloud/cls/v20201016/model/DeleteDataTransformRequest.h>
#include <tencentcloud/cls/v20201016/model/DeleteDataTransformResponse.h>
#include <tencentcloud/cls/v20201016/model/DeleteExportRequest.h>
#include <tencentcloud/cls/v20201016/model/DeleteExportResponse.h>
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
#include <tencentcloud/cls/v20201016/model/DeleteScheduledSqlRequest.h>
#include <tencentcloud/cls/v20201016/model/DeleteScheduledSqlResponse.h>
#include <tencentcloud/cls/v20201016/model/DeleteShipperRequest.h>
#include <tencentcloud/cls/v20201016/model/DeleteShipperResponse.h>
#include <tencentcloud/cls/v20201016/model/DeleteTopicRequest.h>
#include <tencentcloud/cls/v20201016/model/DeleteTopicResponse.h>
#include <tencentcloud/cls/v20201016/model/DescribeAlarmNoticesRequest.h>
#include <tencentcloud/cls/v20201016/model/DescribeAlarmNoticesResponse.h>
#include <tencentcloud/cls/v20201016/model/DescribeAlarmShieldsRequest.h>
#include <tencentcloud/cls/v20201016/model/DescribeAlarmShieldsResponse.h>
#include <tencentcloud/cls/v20201016/model/DescribeAlarmsRequest.h>
#include <tencentcloud/cls/v20201016/model/DescribeAlarmsResponse.h>
#include <tencentcloud/cls/v20201016/model/DescribeAlertRecordHistoryRequest.h>
#include <tencentcloud/cls/v20201016/model/DescribeAlertRecordHistoryResponse.h>
#include <tencentcloud/cls/v20201016/model/DescribeConfigMachineGroupsRequest.h>
#include <tencentcloud/cls/v20201016/model/DescribeConfigMachineGroupsResponse.h>
#include <tencentcloud/cls/v20201016/model/DescribeConfigsRequest.h>
#include <tencentcloud/cls/v20201016/model/DescribeConfigsResponse.h>
#include <tencentcloud/cls/v20201016/model/DescribeConsumerRequest.h>
#include <tencentcloud/cls/v20201016/model/DescribeConsumerResponse.h>
#include <tencentcloud/cls/v20201016/model/DescribeCosRechargesRequest.h>
#include <tencentcloud/cls/v20201016/model/DescribeCosRechargesResponse.h>
#include <tencentcloud/cls/v20201016/model/DescribeDataTransformInfoRequest.h>
#include <tencentcloud/cls/v20201016/model/DescribeDataTransformInfoResponse.h>
#include <tencentcloud/cls/v20201016/model/DescribeExportsRequest.h>
#include <tencentcloud/cls/v20201016/model/DescribeExportsResponse.h>
#include <tencentcloud/cls/v20201016/model/DescribeIndexRequest.h>
#include <tencentcloud/cls/v20201016/model/DescribeIndexResponse.h>
#include <tencentcloud/cls/v20201016/model/DescribeKafkaConsumerRequest.h>
#include <tencentcloud/cls/v20201016/model/DescribeKafkaConsumerResponse.h>
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
#include <tencentcloud/cls/v20201016/model/DescribePartitionsRequest.h>
#include <tencentcloud/cls/v20201016/model/DescribePartitionsResponse.h>
#include <tencentcloud/cls/v20201016/model/DescribeScheduledSqlInfoRequest.h>
#include <tencentcloud/cls/v20201016/model/DescribeScheduledSqlInfoResponse.h>
#include <tencentcloud/cls/v20201016/model/DescribeShipperTasksRequest.h>
#include <tencentcloud/cls/v20201016/model/DescribeShipperTasksResponse.h>
#include <tencentcloud/cls/v20201016/model/DescribeShippersRequest.h>
#include <tencentcloud/cls/v20201016/model/DescribeShippersResponse.h>
#include <tencentcloud/cls/v20201016/model/DescribeTopicsRequest.h>
#include <tencentcloud/cls/v20201016/model/DescribeTopicsResponse.h>
#include <tencentcloud/cls/v20201016/model/GetAlarmLogRequest.h>
#include <tencentcloud/cls/v20201016/model/GetAlarmLogResponse.h>
#include <tencentcloud/cls/v20201016/model/MergePartitionRequest.h>
#include <tencentcloud/cls/v20201016/model/MergePartitionResponse.h>
#include <tencentcloud/cls/v20201016/model/ModifyAlarmRequest.h>
#include <tencentcloud/cls/v20201016/model/ModifyAlarmResponse.h>
#include <tencentcloud/cls/v20201016/model/ModifyAlarmNoticeRequest.h>
#include <tencentcloud/cls/v20201016/model/ModifyAlarmNoticeResponse.h>
#include <tencentcloud/cls/v20201016/model/ModifyAlarmShieldRequest.h>
#include <tencentcloud/cls/v20201016/model/ModifyAlarmShieldResponse.h>
#include <tencentcloud/cls/v20201016/model/ModifyConfigRequest.h>
#include <tencentcloud/cls/v20201016/model/ModifyConfigResponse.h>
#include <tencentcloud/cls/v20201016/model/ModifyConsumerRequest.h>
#include <tencentcloud/cls/v20201016/model/ModifyConsumerResponse.h>
#include <tencentcloud/cls/v20201016/model/ModifyCosRechargeRequest.h>
#include <tencentcloud/cls/v20201016/model/ModifyCosRechargeResponse.h>
#include <tencentcloud/cls/v20201016/model/ModifyDataTransformRequest.h>
#include <tencentcloud/cls/v20201016/model/ModifyDataTransformResponse.h>
#include <tencentcloud/cls/v20201016/model/ModifyIndexRequest.h>
#include <tencentcloud/cls/v20201016/model/ModifyIndexResponse.h>
#include <tencentcloud/cls/v20201016/model/ModifyKafkaConsumerRequest.h>
#include <tencentcloud/cls/v20201016/model/ModifyKafkaConsumerResponse.h>
#include <tencentcloud/cls/v20201016/model/ModifyKafkaRechargeRequest.h>
#include <tencentcloud/cls/v20201016/model/ModifyKafkaRechargeResponse.h>
#include <tencentcloud/cls/v20201016/model/ModifyLogsetRequest.h>
#include <tencentcloud/cls/v20201016/model/ModifyLogsetResponse.h>
#include <tencentcloud/cls/v20201016/model/ModifyMachineGroupRequest.h>
#include <tencentcloud/cls/v20201016/model/ModifyMachineGroupResponse.h>
#include <tencentcloud/cls/v20201016/model/ModifyScheduledSqlRequest.h>
#include <tencentcloud/cls/v20201016/model/ModifyScheduledSqlResponse.h>
#include <tencentcloud/cls/v20201016/model/ModifyShipperRequest.h>
#include <tencentcloud/cls/v20201016/model/ModifyShipperResponse.h>
#include <tencentcloud/cls/v20201016/model/ModifyTopicRequest.h>
#include <tencentcloud/cls/v20201016/model/ModifyTopicResponse.h>
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
#include <tencentcloud/cls/v20201016/model/SearchLogRequest.h>
#include <tencentcloud/cls/v20201016/model/SearchLogResponse.h>
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
                typedef Outcome<Core::Error, Model::CheckFunctionResponse> CheckFunctionOutcome;
                typedef std::future<CheckFunctionOutcome> CheckFunctionOutcomeCallable;
                typedef std::function<void(const ClsClient*, const Model::CheckFunctionRequest&, CheckFunctionOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CheckFunctionAsyncHandler;
                typedef Outcome<Core::Error, Model::CheckRechargeKafkaServerResponse> CheckRechargeKafkaServerOutcome;
                typedef std::future<CheckRechargeKafkaServerOutcome> CheckRechargeKafkaServerOutcomeCallable;
                typedef std::function<void(const ClsClient*, const Model::CheckRechargeKafkaServerRequest&, CheckRechargeKafkaServerOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CheckRechargeKafkaServerAsyncHandler;
                typedef Outcome<Core::Error, Model::CloseKafkaConsumerResponse> CloseKafkaConsumerOutcome;
                typedef std::future<CloseKafkaConsumerOutcome> CloseKafkaConsumerOutcomeCallable;
                typedef std::function<void(const ClsClient*, const Model::CloseKafkaConsumerRequest&, CloseKafkaConsumerOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CloseKafkaConsumerAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateAlarmResponse> CreateAlarmOutcome;
                typedef std::future<CreateAlarmOutcome> CreateAlarmOutcomeCallable;
                typedef std::function<void(const ClsClient*, const Model::CreateAlarmRequest&, CreateAlarmOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateAlarmAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateAlarmNoticeResponse> CreateAlarmNoticeOutcome;
                typedef std::future<CreateAlarmNoticeOutcome> CreateAlarmNoticeOutcomeCallable;
                typedef std::function<void(const ClsClient*, const Model::CreateAlarmNoticeRequest&, CreateAlarmNoticeOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateAlarmNoticeAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateAlarmShieldResponse> CreateAlarmShieldOutcome;
                typedef std::future<CreateAlarmShieldOutcome> CreateAlarmShieldOutcomeCallable;
                typedef std::function<void(const ClsClient*, const Model::CreateAlarmShieldRequest&, CreateAlarmShieldOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateAlarmShieldAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateConfigResponse> CreateConfigOutcome;
                typedef std::future<CreateConfigOutcome> CreateConfigOutcomeCallable;
                typedef std::function<void(const ClsClient*, const Model::CreateConfigRequest&, CreateConfigOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateConfigAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateConsumerResponse> CreateConsumerOutcome;
                typedef std::future<CreateConsumerOutcome> CreateConsumerOutcomeCallable;
                typedef std::function<void(const ClsClient*, const Model::CreateConsumerRequest&, CreateConsumerOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateConsumerAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateCosRechargeResponse> CreateCosRechargeOutcome;
                typedef std::future<CreateCosRechargeOutcome> CreateCosRechargeOutcomeCallable;
                typedef std::function<void(const ClsClient*, const Model::CreateCosRechargeRequest&, CreateCosRechargeOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateCosRechargeAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateDataTransformResponse> CreateDataTransformOutcome;
                typedef std::future<CreateDataTransformOutcome> CreateDataTransformOutcomeCallable;
                typedef std::function<void(const ClsClient*, const Model::CreateDataTransformRequest&, CreateDataTransformOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateDataTransformAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateDeliverCloudFunctionResponse> CreateDeliverCloudFunctionOutcome;
                typedef std::future<CreateDeliverCloudFunctionOutcome> CreateDeliverCloudFunctionOutcomeCallable;
                typedef std::function<void(const ClsClient*, const Model::CreateDeliverCloudFunctionRequest&, CreateDeliverCloudFunctionOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateDeliverCloudFunctionAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateExportResponse> CreateExportOutcome;
                typedef std::future<CreateExportOutcome> CreateExportOutcomeCallable;
                typedef std::function<void(const ClsClient*, const Model::CreateExportRequest&, CreateExportOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateExportAsyncHandler;
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
                typedef Outcome<Core::Error, Model::CreateScheduledSqlResponse> CreateScheduledSqlOutcome;
                typedef std::future<CreateScheduledSqlOutcome> CreateScheduledSqlOutcomeCallable;
                typedef std::function<void(const ClsClient*, const Model::CreateScheduledSqlRequest&, CreateScheduledSqlOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateScheduledSqlAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateShipperResponse> CreateShipperOutcome;
                typedef std::future<CreateShipperOutcome> CreateShipperOutcomeCallable;
                typedef std::function<void(const ClsClient*, const Model::CreateShipperRequest&, CreateShipperOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateShipperAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateTopicResponse> CreateTopicOutcome;
                typedef std::future<CreateTopicOutcome> CreateTopicOutcomeCallable;
                typedef std::function<void(const ClsClient*, const Model::CreateTopicRequest&, CreateTopicOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateTopicAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteAlarmResponse> DeleteAlarmOutcome;
                typedef std::future<DeleteAlarmOutcome> DeleteAlarmOutcomeCallable;
                typedef std::function<void(const ClsClient*, const Model::DeleteAlarmRequest&, DeleteAlarmOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteAlarmAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteAlarmNoticeResponse> DeleteAlarmNoticeOutcome;
                typedef std::future<DeleteAlarmNoticeOutcome> DeleteAlarmNoticeOutcomeCallable;
                typedef std::function<void(const ClsClient*, const Model::DeleteAlarmNoticeRequest&, DeleteAlarmNoticeOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteAlarmNoticeAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteAlarmShieldResponse> DeleteAlarmShieldOutcome;
                typedef std::future<DeleteAlarmShieldOutcome> DeleteAlarmShieldOutcomeCallable;
                typedef std::function<void(const ClsClient*, const Model::DeleteAlarmShieldRequest&, DeleteAlarmShieldOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteAlarmShieldAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteConfigResponse> DeleteConfigOutcome;
                typedef std::future<DeleteConfigOutcome> DeleteConfigOutcomeCallable;
                typedef std::function<void(const ClsClient*, const Model::DeleteConfigRequest&, DeleteConfigOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteConfigAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteConfigFromMachineGroupResponse> DeleteConfigFromMachineGroupOutcome;
                typedef std::future<DeleteConfigFromMachineGroupOutcome> DeleteConfigFromMachineGroupOutcomeCallable;
                typedef std::function<void(const ClsClient*, const Model::DeleteConfigFromMachineGroupRequest&, DeleteConfigFromMachineGroupOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteConfigFromMachineGroupAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteConsumerResponse> DeleteConsumerOutcome;
                typedef std::future<DeleteConsumerOutcome> DeleteConsumerOutcomeCallable;
                typedef std::function<void(const ClsClient*, const Model::DeleteConsumerRequest&, DeleteConsumerOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteConsumerAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteDataTransformResponse> DeleteDataTransformOutcome;
                typedef std::future<DeleteDataTransformOutcome> DeleteDataTransformOutcomeCallable;
                typedef std::function<void(const ClsClient*, const Model::DeleteDataTransformRequest&, DeleteDataTransformOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteDataTransformAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteExportResponse> DeleteExportOutcome;
                typedef std::future<DeleteExportOutcome> DeleteExportOutcomeCallable;
                typedef std::function<void(const ClsClient*, const Model::DeleteExportRequest&, DeleteExportOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteExportAsyncHandler;
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
                typedef Outcome<Core::Error, Model::DeleteScheduledSqlResponse> DeleteScheduledSqlOutcome;
                typedef std::future<DeleteScheduledSqlOutcome> DeleteScheduledSqlOutcomeCallable;
                typedef std::function<void(const ClsClient*, const Model::DeleteScheduledSqlRequest&, DeleteScheduledSqlOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteScheduledSqlAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteShipperResponse> DeleteShipperOutcome;
                typedef std::future<DeleteShipperOutcome> DeleteShipperOutcomeCallable;
                typedef std::function<void(const ClsClient*, const Model::DeleteShipperRequest&, DeleteShipperOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteShipperAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteTopicResponse> DeleteTopicOutcome;
                typedef std::future<DeleteTopicOutcome> DeleteTopicOutcomeCallable;
                typedef std::function<void(const ClsClient*, const Model::DeleteTopicRequest&, DeleteTopicOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteTopicAsyncHandler;
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
                typedef Outcome<Core::Error, Model::DescribeConfigMachineGroupsResponse> DescribeConfigMachineGroupsOutcome;
                typedef std::future<DescribeConfigMachineGroupsOutcome> DescribeConfigMachineGroupsOutcomeCallable;
                typedef std::function<void(const ClsClient*, const Model::DescribeConfigMachineGroupsRequest&, DescribeConfigMachineGroupsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeConfigMachineGroupsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeConfigsResponse> DescribeConfigsOutcome;
                typedef std::future<DescribeConfigsOutcome> DescribeConfigsOutcomeCallable;
                typedef std::function<void(const ClsClient*, const Model::DescribeConfigsRequest&, DescribeConfigsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeConfigsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeConsumerResponse> DescribeConsumerOutcome;
                typedef std::future<DescribeConsumerOutcome> DescribeConsumerOutcomeCallable;
                typedef std::function<void(const ClsClient*, const Model::DescribeConsumerRequest&, DescribeConsumerOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeConsumerAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeCosRechargesResponse> DescribeCosRechargesOutcome;
                typedef std::future<DescribeCosRechargesOutcome> DescribeCosRechargesOutcomeCallable;
                typedef std::function<void(const ClsClient*, const Model::DescribeCosRechargesRequest&, DescribeCosRechargesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeCosRechargesAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeDataTransformInfoResponse> DescribeDataTransformInfoOutcome;
                typedef std::future<DescribeDataTransformInfoOutcome> DescribeDataTransformInfoOutcomeCallable;
                typedef std::function<void(const ClsClient*, const Model::DescribeDataTransformInfoRequest&, DescribeDataTransformInfoOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDataTransformInfoAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeExportsResponse> DescribeExportsOutcome;
                typedef std::future<DescribeExportsOutcome> DescribeExportsOutcomeCallable;
                typedef std::function<void(const ClsClient*, const Model::DescribeExportsRequest&, DescribeExportsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeExportsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeIndexResponse> DescribeIndexOutcome;
                typedef std::future<DescribeIndexOutcome> DescribeIndexOutcomeCallable;
                typedef std::function<void(const ClsClient*, const Model::DescribeIndexRequest&, DescribeIndexOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeIndexAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeKafkaConsumerResponse> DescribeKafkaConsumerOutcome;
                typedef std::future<DescribeKafkaConsumerOutcome> DescribeKafkaConsumerOutcomeCallable;
                typedef std::function<void(const ClsClient*, const Model::DescribeKafkaConsumerRequest&, DescribeKafkaConsumerOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeKafkaConsumerAsyncHandler;
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
                typedef Outcome<Core::Error, Model::DescribePartitionsResponse> DescribePartitionsOutcome;
                typedef std::future<DescribePartitionsOutcome> DescribePartitionsOutcomeCallable;
                typedef std::function<void(const ClsClient*, const Model::DescribePartitionsRequest&, DescribePartitionsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribePartitionsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeScheduledSqlInfoResponse> DescribeScheduledSqlInfoOutcome;
                typedef std::future<DescribeScheduledSqlInfoOutcome> DescribeScheduledSqlInfoOutcomeCallable;
                typedef std::function<void(const ClsClient*, const Model::DescribeScheduledSqlInfoRequest&, DescribeScheduledSqlInfoOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeScheduledSqlInfoAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeShipperTasksResponse> DescribeShipperTasksOutcome;
                typedef std::future<DescribeShipperTasksOutcome> DescribeShipperTasksOutcomeCallable;
                typedef std::function<void(const ClsClient*, const Model::DescribeShipperTasksRequest&, DescribeShipperTasksOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeShipperTasksAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeShippersResponse> DescribeShippersOutcome;
                typedef std::future<DescribeShippersOutcome> DescribeShippersOutcomeCallable;
                typedef std::function<void(const ClsClient*, const Model::DescribeShippersRequest&, DescribeShippersOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeShippersAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeTopicsResponse> DescribeTopicsOutcome;
                typedef std::future<DescribeTopicsOutcome> DescribeTopicsOutcomeCallable;
                typedef std::function<void(const ClsClient*, const Model::DescribeTopicsRequest&, DescribeTopicsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeTopicsAsyncHandler;
                typedef Outcome<Core::Error, Model::GetAlarmLogResponse> GetAlarmLogOutcome;
                typedef std::future<GetAlarmLogOutcome> GetAlarmLogOutcomeCallable;
                typedef std::function<void(const ClsClient*, const Model::GetAlarmLogRequest&, GetAlarmLogOutcome, const std::shared_ptr<const AsyncCallerContext>&)> GetAlarmLogAsyncHandler;
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
                typedef Outcome<Core::Error, Model::ModifyConfigResponse> ModifyConfigOutcome;
                typedef std::future<ModifyConfigOutcome> ModifyConfigOutcomeCallable;
                typedef std::function<void(const ClsClient*, const Model::ModifyConfigRequest&, ModifyConfigOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyConfigAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyConsumerResponse> ModifyConsumerOutcome;
                typedef std::future<ModifyConsumerOutcome> ModifyConsumerOutcomeCallable;
                typedef std::function<void(const ClsClient*, const Model::ModifyConsumerRequest&, ModifyConsumerOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyConsumerAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyCosRechargeResponse> ModifyCosRechargeOutcome;
                typedef std::future<ModifyCosRechargeOutcome> ModifyCosRechargeOutcomeCallable;
                typedef std::function<void(const ClsClient*, const Model::ModifyCosRechargeRequest&, ModifyCosRechargeOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyCosRechargeAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyDataTransformResponse> ModifyDataTransformOutcome;
                typedef std::future<ModifyDataTransformOutcome> ModifyDataTransformOutcomeCallable;
                typedef std::function<void(const ClsClient*, const Model::ModifyDataTransformRequest&, ModifyDataTransformOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyDataTransformAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyIndexResponse> ModifyIndexOutcome;
                typedef std::future<ModifyIndexOutcome> ModifyIndexOutcomeCallable;
                typedef std::function<void(const ClsClient*, const Model::ModifyIndexRequest&, ModifyIndexOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyIndexAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyKafkaConsumerResponse> ModifyKafkaConsumerOutcome;
                typedef std::future<ModifyKafkaConsumerOutcome> ModifyKafkaConsumerOutcomeCallable;
                typedef std::function<void(const ClsClient*, const Model::ModifyKafkaConsumerRequest&, ModifyKafkaConsumerOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyKafkaConsumerAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyKafkaRechargeResponse> ModifyKafkaRechargeOutcome;
                typedef std::future<ModifyKafkaRechargeOutcome> ModifyKafkaRechargeOutcomeCallable;
                typedef std::function<void(const ClsClient*, const Model::ModifyKafkaRechargeRequest&, ModifyKafkaRechargeOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyKafkaRechargeAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyLogsetResponse> ModifyLogsetOutcome;
                typedef std::future<ModifyLogsetOutcome> ModifyLogsetOutcomeCallable;
                typedef std::function<void(const ClsClient*, const Model::ModifyLogsetRequest&, ModifyLogsetOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyLogsetAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyMachineGroupResponse> ModifyMachineGroupOutcome;
                typedef std::future<ModifyMachineGroupOutcome> ModifyMachineGroupOutcomeCallable;
                typedef std::function<void(const ClsClient*, const Model::ModifyMachineGroupRequest&, ModifyMachineGroupOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyMachineGroupAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyScheduledSqlResponse> ModifyScheduledSqlOutcome;
                typedef std::future<ModifyScheduledSqlOutcome> ModifyScheduledSqlOutcomeCallable;
                typedef std::function<void(const ClsClient*, const Model::ModifyScheduledSqlRequest&, ModifyScheduledSqlOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyScheduledSqlAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyShipperResponse> ModifyShipperOutcome;
                typedef std::future<ModifyShipperOutcome> ModifyShipperOutcomeCallable;
                typedef std::function<void(const ClsClient*, const Model::ModifyShipperRequest&, ModifyShipperOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyShipperAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyTopicResponse> ModifyTopicOutcome;
                typedef std::future<ModifyTopicOutcome> ModifyTopicOutcomeCallable;
                typedef std::function<void(const ClsClient*, const Model::ModifyTopicRequest&, ModifyTopicOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyTopicAsyncHandler;
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
                typedef Outcome<Core::Error, Model::SearchLogResponse> SearchLogOutcome;
                typedef std::future<SearchLogOutcome> SearchLogOutcomeCallable;
                typedef std::function<void(const ClsClient*, const Model::SearchLogRequest&, SearchLogOutcome, const std::shared_ptr<const AsyncCallerContext>&)> SearchLogAsyncHandler;
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
                 *This API is used to create an alarm policy.
                 * @param req CreateAlarmRequest
                 * @return CreateAlarmOutcome
                 */
                CreateAlarmOutcome CreateAlarm(const Model::CreateAlarmRequest &request);
                void CreateAlarmAsync(const Model::CreateAlarmRequest& request, const CreateAlarmAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateAlarmOutcomeCallable CreateAlarmCallable(const Model::CreateAlarmRequest& request);

                /**
                 *This API is used to create a notification group.
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
                 *This API is used to create collection rule configuration.
                 * @param req CreateConfigRequest
                 * @return CreateConfigOutcome
                 */
                CreateConfigOutcome CreateConfig(const Model::CreateConfigRequest &request);
                void CreateConfigAsync(const Model::CreateConfigRequest& request, const CreateConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateConfigOutcomeCallable CreateConfigCallable(const Model::CreateConfigRequest& request);

                /**
                 *This API is used to create a CKafka delivery task.
                 * @param req CreateConsumerRequest
                 * @return CreateConsumerOutcome
                 */
                CreateConsumerOutcome CreateConsumer(const Model::CreateConsumerRequest &request);
                void CreateConsumerAsync(const Model::CreateConsumerRequest& request, const CreateConsumerAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateConsumerOutcomeCallable CreateConsumerCallable(const Model::CreateConsumerRequest& request);

                /**
                 *This API is used to create a COS import task.
                 * @param req CreateCosRechargeRequest
                 * @return CreateCosRechargeOutcome
                 */
                CreateCosRechargeOutcome CreateCosRecharge(const Model::CreateCosRechargeRequest &request);
                void CreateCosRechargeAsync(const Model::CreateCosRechargeRequest& request, const CreateCosRechargeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateCosRechargeOutcomeCallable CreateCosRechargeCallable(const Model::CreateCosRechargeRequest& request);

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
                 *This API is used to create a download task. To get the returned download address, call DescribeExports to view the task list. The CosPath parameter is also included for download address. For more information, visit https://intl.cloud.tencent.com/document/product/614/56449.?from_cn_redirect=1
                 * @param req CreateExportRequest
                 * @return CreateExportOutcome
                 */
                CreateExportOutcome CreateExport(const Model::CreateExportRequest &request);
                void CreateExportAsync(const Model::CreateExportRequest& request, const CreateExportAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateExportOutcomeCallable CreateExportCallable(const Model::CreateExportRequest& request);

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
                 *This API is used to create a scheduled SQL analysis task.
                 * @param req CreateScheduledSqlRequest
                 * @return CreateScheduledSqlOutcome
                 */
                CreateScheduledSqlOutcome CreateScheduledSql(const Model::CreateScheduledSqlRequest &request);
                void CreateScheduledSqlAsync(const Model::CreateScheduledSqlRequest& request, const CreateScheduledSqlAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateScheduledSqlOutcomeCallable CreateScheduledSqlCallable(const Model::CreateScheduledSqlRequest& request);

                /**
                 *This API is used to create a task to ship to COS. Note: To use this API, you need to check whether you have configured the role and permission for shipping to COS. If not, see **Viewing and Configuring Shipping Authorization** at https://intl.cloud.tencent.com/document/product/614/71623.?from_cn_redirect=1
                 * @param req CreateShipperRequest
                 * @return CreateShipperOutcome
                 */
                CreateShipperOutcome CreateShipper(const Model::CreateShipperRequest &request);
                void CreateShipperAsync(const Model::CreateShipperRequest& request, const CreateShipperAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateShipperOutcomeCallable CreateShipperCallable(const Model::CreateShipperRequest& request);

                /**
                 *This API is used to create a log topic.
                 * @param req CreateTopicRequest
                 * @return CreateTopicOutcome
                 */
                CreateTopicOutcome CreateTopic(const Model::CreateTopicRequest &request);
                void CreateTopicAsync(const Model::CreateTopicRequest& request, const CreateTopicAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateTopicOutcomeCallable CreateTopicCallable(const Model::CreateTopicRequest& request);

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
                 *This API is used to delete an alarm blocking rule.
                 * @param req DeleteAlarmShieldRequest
                 * @return DeleteAlarmShieldOutcome
                 */
                DeleteAlarmShieldOutcome DeleteAlarmShield(const Model::DeleteAlarmShieldRequest &request);
                void DeleteAlarmShieldAsync(const Model::DeleteAlarmShieldRequest& request, const DeleteAlarmShieldAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteAlarmShieldOutcomeCallable DeleteAlarmShieldCallable(const Model::DeleteAlarmShieldRequest& request);

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
                 *This API is used to delete a shipping task.
                 * @param req DeleteConsumerRequest
                 * @return DeleteConsumerOutcome
                 */
                DeleteConsumerOutcome DeleteConsumer(const Model::DeleteConsumerRequest &request);
                void DeleteConsumerAsync(const Model::DeleteConsumerRequest& request, const DeleteConsumerAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteConsumerOutcomeCallable DeleteConsumerCallable(const Model::DeleteConsumerRequest& request);

                /**
                 *This API is used to delete a data processing task.
                 * @param req DeleteDataTransformRequest
                 * @return DeleteDataTransformOutcome
                 */
                DeleteDataTransformOutcome DeleteDataTransform(const Model::DeleteDataTransformRequest &request);
                void DeleteDataTransformAsync(const Model::DeleteDataTransformRequest& request, const DeleteDataTransformAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteDataTransformOutcomeCallable DeleteDataTransformCallable(const Model::DeleteDataTransformRequest& request);

                /**
                 *This API is used to delete a log download task.
                 * @param req DeleteExportRequest
                 * @return DeleteExportOutcome
                 */
                DeleteExportOutcome DeleteExport(const Model::DeleteExportRequest &request);
                void DeleteExportAsync(const Model::DeleteExportRequest& request, const DeleteExportAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteExportOutcomeCallable DeleteExportCallable(const Model::DeleteExportRequest& request);

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
                 *This API is used to delete a scheduled SQL analysis task.
                 * @param req DeleteScheduledSqlRequest
                 * @return DeleteScheduledSqlOutcome
                 */
                DeleteScheduledSqlOutcome DeleteScheduledSql(const Model::DeleteScheduledSqlRequest &request);
                void DeleteScheduledSqlAsync(const Model::DeleteScheduledSqlRequest& request, const DeleteScheduledSqlAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteScheduledSqlOutcomeCallable DeleteScheduledSqlCallable(const Model::DeleteScheduledSqlRequest& request);

                /**
                 *This API is used to delete a COS shipping task.
                 * @param req DeleteShipperRequest
                 * @return DeleteShipperOutcome
                 */
                DeleteShipperOutcome DeleteShipper(const Model::DeleteShipperRequest &request);
                void DeleteShipperAsync(const Model::DeleteShipperRequest& request, const DeleteShipperAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteShipperOutcomeCallable DeleteShipperCallable(const Model::DeleteShipperRequest& request);

                /**
                 *This API is used to delete a log topic.
                 * @param req DeleteTopicRequest
                 * @return DeleteTopicOutcome
                 */
                DeleteTopicOutcome DeleteTopic(const Model::DeleteTopicRequest &request);
                void DeleteTopicAsync(const Model::DeleteTopicRequest& request, const DeleteTopicAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteTopicOutcomeCallable DeleteTopicCallable(const Model::DeleteTopicRequest& request);

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
                 *This API is used to query a shipping task.
                 * @param req DescribeConsumerRequest
                 * @return DescribeConsumerOutcome
                 */
                DescribeConsumerOutcome DescribeConsumer(const Model::DescribeConsumerRequest &request);
                void DescribeConsumerAsync(const Model::DescribeConsumerRequest& request, const DescribeConsumerAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeConsumerOutcomeCallable DescribeConsumerCallable(const Model::DescribeConsumerRequest& request);

                /**
                 *This API is used to get COS import configuration.
                 * @param req DescribeCosRechargesRequest
                 * @return DescribeCosRechargesOutcome
                 */
                DescribeCosRechargesOutcome DescribeCosRecharges(const Model::DescribeCosRechargesRequest &request);
                void DescribeCosRechargesAsync(const Model::DescribeCosRechargesRequest& request, const DescribeCosRechargesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeCosRechargesOutcomeCallable DescribeCosRechargesCallable(const Model::DescribeCosRechargesRequest& request);

                /**
                 *This API is used to get the basic information of data processing tasks.
                 * @param req DescribeDataTransformInfoRequest
                 * @return DescribeDataTransformInfoOutcome
                 */
                DescribeDataTransformInfoOutcome DescribeDataTransformInfo(const Model::DescribeDataTransformInfoRequest &request);
                void DescribeDataTransformInfoAsync(const Model::DescribeDataTransformInfoRequest& request, const DescribeDataTransformInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeDataTransformInfoOutcomeCallable DescribeDataTransformInfoCallable(const Model::DescribeDataTransformInfoRequest& request);

                /**
                 *This API is used to get the list of log download tasks.
                 * @param req DescribeExportsRequest
                 * @return DescribeExportsOutcome
                 */
                DescribeExportsOutcome DescribeExports(const Model::DescribeExportsRequest &request);
                void DescribeExportsAsync(const Model::DescribeExportsRequest& request, const DescribeExportsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeExportsOutcomeCallable DescribeExportsCallable(const Model::DescribeExportsRequest& request);

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
                 *This API is used to get the list of topic partitions.
                 * @param req DescribePartitionsRequest
                 * @return DescribePartitionsOutcome
                 */
                DescribePartitionsOutcome DescribePartitions(const Model::DescribePartitionsRequest &request);
                void DescribePartitionsAsync(const Model::DescribePartitionsRequest& request, const DescribePartitionsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribePartitionsOutcomeCallable DescribePartitionsCallable(const Model::DescribePartitionsRequest& request);

                /**
                 *This API is used to access the scheduled SQL analysis task list.
                 * @param req DescribeScheduledSqlInfoRequest
                 * @return DescribeScheduledSqlInfoOutcome
                 */
                DescribeScheduledSqlInfoOutcome DescribeScheduledSqlInfo(const Model::DescribeScheduledSqlInfoRequest &request);
                void DescribeScheduledSqlInfoAsync(const Model::DescribeScheduledSqlInfoRequest& request, const DescribeScheduledSqlInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeScheduledSqlInfoOutcomeCallable DescribeScheduledSqlInfoCallable(const Model::DescribeScheduledSqlInfoRequest& request);

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
                 *This API is used to get the list of log topics and supports pagination.
                 * @param req DescribeTopicsRequest
                 * @return DescribeTopicsOutcome
                 */
                DescribeTopicsOutcome DescribeTopics(const Model::DescribeTopicsRequest &request);
                void DescribeTopicsAsync(const Model::DescribeTopicsRequest& request, const DescribeTopicsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeTopicsOutcomeCallable DescribeTopicsCallable(const Model::DescribeTopicsRequest& request);

                /**
                 *This API is used to access alarm policy execution details.
                 * @param req GetAlarmLogRequest
                 * @return GetAlarmLogOutcome
                 */
                GetAlarmLogOutcome GetAlarmLog(const Model::GetAlarmLogRequest &request);
                void GetAlarmLogAsync(const Model::GetAlarmLogRequest& request, const GetAlarmLogAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                GetAlarmLogOutcomeCallable GetAlarmLogCallable(const Model::GetAlarmLogRequest& request);

                /**
                 *This API is used to merge a topic partition in read/write state. During merge, a topic partition ID can be specified, and CLS will automatically merge the partition adjacent to the right of the range.
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
                 *This API is used to modify alarm blocking rules.
                 * @param req ModifyAlarmShieldRequest
                 * @return ModifyAlarmShieldOutcome
                 */
                ModifyAlarmShieldOutcome ModifyAlarmShield(const Model::ModifyAlarmShieldRequest &request);
                void ModifyAlarmShieldAsync(const Model::ModifyAlarmShieldRequest& request, const ModifyAlarmShieldAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyAlarmShieldOutcomeCallable ModifyAlarmShieldCallable(const Model::ModifyAlarmShieldRequest& request);

                /**
                 *This API is used to modify collection rule configuration.
                 * @param req ModifyConfigRequest
                 * @return ModifyConfigOutcome
                 */
                ModifyConfigOutcome ModifyConfig(const Model::ModifyConfigRequest &request);
                void ModifyConfigAsync(const Model::ModifyConfigRequest& request, const ModifyConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyConfigOutcomeCallable ModifyConfigCallable(const Model::ModifyConfigRequest& request);

                /**
                 *This API is used to modify a CKafka delivery task.
                 * @param req ModifyConsumerRequest
                 * @return ModifyConsumerOutcome
                 */
                ModifyConsumerOutcome ModifyConsumer(const Model::ModifyConsumerRequest &request);
                void ModifyConsumerAsync(const Model::ModifyConsumerRequest& request, const ModifyConsumerAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyConsumerOutcomeCallable ModifyConsumerCallable(const Model::ModifyConsumerRequest& request);

                /**
                 *This API is used to modify a COS import task.
                 * @param req ModifyCosRechargeRequest
                 * @return ModifyCosRechargeOutcome
                 */
                ModifyCosRechargeOutcome ModifyCosRecharge(const Model::ModifyCosRechargeRequest &request);
                void ModifyCosRechargeAsync(const Model::ModifyCosRechargeRequest& request, const ModifyCosRechargeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyCosRechargeOutcomeCallable ModifyCosRechargeCallable(const Model::ModifyCosRechargeRequest& request);

                /**
                 *This API is used to modify a data processing task.
                 * @param req ModifyDataTransformRequest
                 * @return ModifyDataTransformOutcome
                 */
                ModifyDataTransformOutcome ModifyDataTransform(const Model::ModifyDataTransformRequest &request);
                void ModifyDataTransformAsync(const Model::ModifyDataTransformRequest& request, const ModifyDataTransformAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyDataTransformOutcomeCallable ModifyDataTransformCallable(const Model::ModifyDataTransformRequest& request);

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
                 *This API is used to modify a machine group.
                 * @param req ModifyMachineGroupRequest
                 * @return ModifyMachineGroupOutcome
                 */
                ModifyMachineGroupOutcome ModifyMachineGroup(const Model::ModifyMachineGroupRequest &request);
                void ModifyMachineGroupAsync(const Model::ModifyMachineGroupRequest& request, const ModifyMachineGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyMachineGroupOutcomeCallable ModifyMachineGroupCallable(const Model::ModifyMachineGroupRequest& request);

                /**
                 *This API is used to modify a scheduled SQL analysis task.
                 * @param req ModifyScheduledSqlRequest
                 * @return ModifyScheduledSqlOutcome
                 */
                ModifyScheduledSqlOutcome ModifyScheduledSql(const Model::ModifyScheduledSqlRequest &request);
                void ModifyScheduledSqlAsync(const Model::ModifyScheduledSqlRequest& request, const ModifyScheduledSqlAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyScheduledSqlOutcomeCallable ModifyScheduledSqlCallable(const Model::ModifyScheduledSqlRequest& request);

                /**
                 *This API is used to modify an existing shipping rule. To use this API, you need to grant CLS the write permission of the specified bucket.
                 * @param req ModifyShipperRequest
                 * @return ModifyShipperOutcome
                 */
                ModifyShipperOutcome ModifyShipper(const Model::ModifyShipperRequest &request);
                void ModifyShipperAsync(const Model::ModifyShipperRequest& request, const ModifyShipperAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyShipperOutcomeCallable ModifyShipperCallable(const Model::ModifyShipperRequest& request);

                /**
                 *This API is used to modify a log topic.
                 * @param req ModifyTopicRequest
                 * @return ModifyTopicOutcome
                 */
                ModifyTopicOutcome ModifyTopic(const Model::ModifyTopicRequest &request);
                void ModifyTopicAsync(const Model::ModifyTopicRequest& request, const ModifyTopicAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyTopicOutcomeCallable ModifyTopicCallable(const Model::ModifyTopicRequest& request);

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
                 *This API is used to query the latest metric value at a specified time.
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
                 *This API is used to search and analyze logs. When using this API, please note the following:1. Besides being subject to the default API request frequency limit by this API, for a single log topic, the concurrency number cannot exceed 15. 2. For search syntax, it's recommended to use the CQL syntax rule. Please use the SyntaxRule parameter and set its value to 1.
3. The maximum value of API's response data packet is 49MB. It is recommended to enable gzip compression (HTTP Request Header Accept-Encoding: gzip).
                 * @param req SearchLogRequest
                 * @return SearchLogOutcome
                 */
                SearchLogOutcome SearchLog(const Model::SearchLogRequest &request);
                void SearchLogAsync(const Model::SearchLogRequest& request, const SearchLogAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                SearchLogOutcomeCallable SearchLogCallable(const Model::SearchLogRequest& request);

                /**
                 *This API is used to split a topic partition.
                 * @param req SplitPartitionRequest
                 * @return SplitPartitionOutcome
                 */
                SplitPartitionOutcome SplitPartition(const Model::SplitPartitionRequest &request);
                void SplitPartitionAsync(const Model::SplitPartitionRequest& request, const SplitPartitionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                SplitPartitionOutcomeCallable SplitPartitionCallable(const Model::SplitPartitionRequest& request);

                /**
                 *## Note
To ensure log data reliability and help you use CLS more efficiently, we recommend you use the optimized API to upload logs. For more information about the API, see [Uploading Log via API](https://intl.cloud.tencent.com/document/product/614/16873?from_cn_redirect=1).

For the optimized API, we have developed an SDK (available in multiple languages) that provides features including async sending, resource control, automatic retry, graceful shutdown, and detection-based reporting. For details, see [Uploading Log via SDK](https://intl.cloud.tencent.com/document/product/614/67157?from_cn_redirect=1).

`UploadLog` allows you to synchronously upload log data. If you still want to continue to use this API instead of the optimized one, read this document.

## Feature Description

This API is used to write logs to a specified log topic.

CLS provides the following two modes:

#### Load balancing mode

In this mode, logs will be automatically written to a target partition among all readable/writable partitions under the current log topic based on the load balancing principle. This mode is suitable for scenarios where sequential consumption is not needed.

#### Hash routing mode

In this mode, data will be written to a target partition that meets the range requirements based on the carried hash value (`X-CLS-HashKey`). For example, a log source can be bound to a topic partition through `HashKey`, strictly guaranteeing the sequence of the data written to and consumed in this partition.

                 

#### Input parameters (pb binary streams in `body`)

| Parameter       | Type    | Location | Required | Description                                                         |
| ------------ | ------- | ---- | ---- | ------------------------------------------------------------ |
| logGroupList | message | pb   | Yes   | The `logGroup` list, which describes the encapsulated log groups. We recommend you enter up to five `logGroup` values. |

`LogGroup` description:

| Parameter      | Required | Description                                                         |
| ----------- | -------- | ------------------------------------------------------------ |
| logs        | Yes       | Log array consisting of multiple `Log` values. The `Log` indicates a log, and a `LogGroup` can contain up to 10,000 `Log` values. |
| contextFlow | No       | Unique `LogGroup` ID, which should be passed in if the context feature needs to be used. Format: "{Context ID}-{LogGroupID}". <br>Context ID: Uniquely identifies the context (a series of log files that are continuously scrolling or a series of logs that need to be sequenced), which is a 64-bit integer hex string. <br>LogGroupID: A 64-bit integer hex string that continuously increases, such as `102700A66102516A-59F59`.                        |
| filename    | No       | Log filename                                                   |
| source      | No       | Log source, which is generally the machine IP                           |
| logTags     | No       | List of log tags                                               |

`Log` description:

| Parameter   | Required | Description                                                         |
| -------- | -------- | ------------------------------------------------------------ |
| time     | Yes       | Unix timestamp of log time in seconds or milliseconds (recommended)      |
| contents | No       | Log content in key-value format. A log can contain multiple key-value pairs. |

`Content` description:

| Parameter | Required | Description                                                         |
| ------ | -------- | ------------------------------------------------------------ |
| key    | Yes       | Key of a field group in one log, which cannot start with `_`.                 |
| value  | Yes       | Value of a field group. The `value` of one log cannot exceed 1 MB and the total `value` in `LogGroup` cannot exceed 5 MB. |

`LogTag` description:

| Parameter | Required | Description                             |
| ------ | -------- | -------------------------------- |
| key    | Yes       | Key of a custom tag                 |
| value  | Yes       | Value corresponding to the custom tag key |

## pb Compilation Example

This example shows you how to use the protoc compiler to compile a pb description file into a log upload API in C++.

> ?Currently, protoc supports compilation in multiple programming languages such as Java, C++, and Python. For more information, see [protoc](https://github.com/protocolbuffers/protobuf).

#### 1. Install protocol buffers

Download [Protocol Buffers](https://main.qcloudimg.com/raw/d7810aaf8b3073fbbc9d4049c21532aa/protobuf-2.6.1.tar.gz), decompress the package, and install the tool. The version used in the example is protobuf 2.6.1 running on CentOS 7.3. Run the following command to decompress the `protobuf-2.6.1.tar.gz` package to the `/usr/local` directory and go to the directory:

```
tar -zxvf protobuf-2.6.1.tar.gz -C /usr/local/ && cd /usr/local/protobuf-2.6.1
```

Run the following commands to start compilation and installation and configure the environment variables:

```
[root@VM_0_8_centos protobuf-2.6.1]# ./configure 
[root@VM_0_8_centos protobuf-2.6.1]# make && make install
[root@VM_0_8_centos protobuf-2.6.1]# export PATH=$PATH:/usr/local/protobuf-2.6.1/bin
```

After the compilation succeeds, run the following command to check the version:

```
[root@VM_0_8_centos protobuf-2.6.1]# protoc --version
liprotoc 2.6.1
```

#### 2. Create a pb description file

A pb description file is an agreed-on data interchange format for communication. To upload logs, compile the specified protocol format to an API in the target programming language and add the API to the project code. For more information, see [protoc](https://github.com/protocolbuffers/protobuf).

Create a pb message description file `cls.proto` based on the pb data format content specified by CLS.

> !The pb description file content cannot be modified, and the filename must end with `.proto`.

The content of `cls.proto` (pb description file) is as follows:

```
package cls;

message Log
{
    message Content
    {
        required string key   = 1; // Key of each field group
        required string value = 2; // Value of each field group
    }
    required int64   time     = 1; // Unix timestamp
    repeated Content contents = 2; // Multiple key-value pairs in one log
}

message LogTag
{
    required string key       = 1;
    required string value     = 2;
}

message LogGroup
{
    repeated Log    logs        = 1; // Log array consisting of multiple logs
    optional string contextFlow = 2; // This parameter does not take effect currently
    optional string filename    = 3; // Log filename
    optional string source      = 4; // Log source, which is generally the machine IP
    repeated LogTag logTags     = 5;
}

message LogGroupList
{
    repeated LogGroup logGroupList = 1; // Log group list
}
```

#### 3. Compile and generate the API

This example uses the proto compiler to generate a C++ file in the same directory as the `cls.proto` file. Run the following compilation command:

```
protoc --cpp_out=./ ./cls.proto 
```

> ?`--cpp_out=./` indicates that the file will be compiled in cpp format and output to the current directory. `./cls.proto` indicates the `cls.proto` description file in the current directory.

After the compilation succeeds, the code file in the corresponding programming language will be generated. This example generates the `cls.pb.h` header file and [cls.pb.cc](http://cls.pb.cc) code implementation file as shown below:

```
[root@VM_0_8_centos protobuf-2.6.1]# protoc --cpp_out=./ ./cls.proto
[root@VM_0_8_centos protobuf-2.6.1]# ls
cls.pb.cc cls.pb.h cls.proto
```

#### 4. Call the API

Import the generated `cls.pb.h` header file into the code and call the API for data encapsulation.
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
