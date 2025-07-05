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

#ifndef TENCENTCLOUD_CKAFKA_V20190819_CKAFKACLIENT_H_
#define TENCENTCLOUD_CKAFKA_V20190819_CKAFKACLIENT_H_

#include <functional>
#include <future>
#include <tencentcloud/core/AbstractClient.h>
#include <tencentcloud/core/Credential.h>
#include <tencentcloud/core/profile/ClientProfile.h>
#include <tencentcloud/core/AsyncCallerContext.h>
#include <tencentcloud/ckafka/v20190819/model/BatchCreateAclRequest.h>
#include <tencentcloud/ckafka/v20190819/model/BatchCreateAclResponse.h>
#include <tencentcloud/ckafka/v20190819/model/BatchModifyGroupOffsetsRequest.h>
#include <tencentcloud/ckafka/v20190819/model/BatchModifyGroupOffsetsResponse.h>
#include <tencentcloud/ckafka/v20190819/model/BatchModifyTopicAttributesRequest.h>
#include <tencentcloud/ckafka/v20190819/model/BatchModifyTopicAttributesResponse.h>
#include <tencentcloud/ckafka/v20190819/model/CreateAclRequest.h>
#include <tencentcloud/ckafka/v20190819/model/CreateAclResponse.h>
#include <tencentcloud/ckafka/v20190819/model/CreateAclRuleRequest.h>
#include <tencentcloud/ckafka/v20190819/model/CreateAclRuleResponse.h>
#include <tencentcloud/ckafka/v20190819/model/CreateConsumerRequest.h>
#include <tencentcloud/ckafka/v20190819/model/CreateConsumerResponse.h>
#include <tencentcloud/ckafka/v20190819/model/CreateDatahubTopicRequest.h>
#include <tencentcloud/ckafka/v20190819/model/CreateDatahubTopicResponse.h>
#include <tencentcloud/ckafka/v20190819/model/CreateInstancePostRequest.h>
#include <tencentcloud/ckafka/v20190819/model/CreateInstancePostResponse.h>
#include <tencentcloud/ckafka/v20190819/model/CreatePartitionRequest.h>
#include <tencentcloud/ckafka/v20190819/model/CreatePartitionResponse.h>
#include <tencentcloud/ckafka/v20190819/model/CreatePostPaidInstanceRequest.h>
#include <tencentcloud/ckafka/v20190819/model/CreatePostPaidInstanceResponse.h>
#include <tencentcloud/ckafka/v20190819/model/CreateTopicRequest.h>
#include <tencentcloud/ckafka/v20190819/model/CreateTopicResponse.h>
#include <tencentcloud/ckafka/v20190819/model/CreateTopicIpWhiteListRequest.h>
#include <tencentcloud/ckafka/v20190819/model/CreateTopicIpWhiteListResponse.h>
#include <tencentcloud/ckafka/v20190819/model/CreateUserRequest.h>
#include <tencentcloud/ckafka/v20190819/model/CreateUserResponse.h>
#include <tencentcloud/ckafka/v20190819/model/DeleteAclRequest.h>
#include <tencentcloud/ckafka/v20190819/model/DeleteAclResponse.h>
#include <tencentcloud/ckafka/v20190819/model/DeleteInstancePreRequest.h>
#include <tencentcloud/ckafka/v20190819/model/DeleteInstancePreResponse.h>
#include <tencentcloud/ckafka/v20190819/model/DeleteRouteRequest.h>
#include <tencentcloud/ckafka/v20190819/model/DeleteRouteResponse.h>
#include <tencentcloud/ckafka/v20190819/model/DeleteRouteTriggerTimeRequest.h>
#include <tencentcloud/ckafka/v20190819/model/DeleteRouteTriggerTimeResponse.h>
#include <tencentcloud/ckafka/v20190819/model/DeleteTopicRequest.h>
#include <tencentcloud/ckafka/v20190819/model/DeleteTopicResponse.h>
#include <tencentcloud/ckafka/v20190819/model/DeleteTopicIpWhiteListRequest.h>
#include <tencentcloud/ckafka/v20190819/model/DeleteTopicIpWhiteListResponse.h>
#include <tencentcloud/ckafka/v20190819/model/DeleteUserRequest.h>
#include <tencentcloud/ckafka/v20190819/model/DeleteUserResponse.h>
#include <tencentcloud/ckafka/v20190819/model/DescribeACLRequest.h>
#include <tencentcloud/ckafka/v20190819/model/DescribeACLResponse.h>
#include <tencentcloud/ckafka/v20190819/model/DescribeAclRuleRequest.h>
#include <tencentcloud/ckafka/v20190819/model/DescribeAclRuleResponse.h>
#include <tencentcloud/ckafka/v20190819/model/DescribeAppInfoRequest.h>
#include <tencentcloud/ckafka/v20190819/model/DescribeAppInfoResponse.h>
#include <tencentcloud/ckafka/v20190819/model/DescribeCkafkaZoneRequest.h>
#include <tencentcloud/ckafka/v20190819/model/DescribeCkafkaZoneResponse.h>
#include <tencentcloud/ckafka/v20190819/model/DescribeConsumerGroupRequest.h>
#include <tencentcloud/ckafka/v20190819/model/DescribeConsumerGroupResponse.h>
#include <tencentcloud/ckafka/v20190819/model/DescribeDatahubTopicRequest.h>
#include <tencentcloud/ckafka/v20190819/model/DescribeDatahubTopicResponse.h>
#include <tencentcloud/ckafka/v20190819/model/DescribeDatahubTopicsRequest.h>
#include <tencentcloud/ckafka/v20190819/model/DescribeDatahubTopicsResponse.h>
#include <tencentcloud/ckafka/v20190819/model/DescribeGroupRequest.h>
#include <tencentcloud/ckafka/v20190819/model/DescribeGroupResponse.h>
#include <tencentcloud/ckafka/v20190819/model/DescribeGroupInfoRequest.h>
#include <tencentcloud/ckafka/v20190819/model/DescribeGroupInfoResponse.h>
#include <tencentcloud/ckafka/v20190819/model/DescribeGroupOffsetsRequest.h>
#include <tencentcloud/ckafka/v20190819/model/DescribeGroupOffsetsResponse.h>
#include <tencentcloud/ckafka/v20190819/model/DescribeInstanceAttributesRequest.h>
#include <tencentcloud/ckafka/v20190819/model/DescribeInstanceAttributesResponse.h>
#include <tencentcloud/ckafka/v20190819/model/DescribeInstancesRequest.h>
#include <tencentcloud/ckafka/v20190819/model/DescribeInstancesResponse.h>
#include <tencentcloud/ckafka/v20190819/model/DescribeInstancesDetailRequest.h>
#include <tencentcloud/ckafka/v20190819/model/DescribeInstancesDetailResponse.h>
#include <tencentcloud/ckafka/v20190819/model/DescribeRegionRequest.h>
#include <tencentcloud/ckafka/v20190819/model/DescribeRegionResponse.h>
#include <tencentcloud/ckafka/v20190819/model/DescribeRouteRequest.h>
#include <tencentcloud/ckafka/v20190819/model/DescribeRouteResponse.h>
#include <tencentcloud/ckafka/v20190819/model/DescribeTaskStatusRequest.h>
#include <tencentcloud/ckafka/v20190819/model/DescribeTaskStatusResponse.h>
#include <tencentcloud/ckafka/v20190819/model/DescribeTopicRequest.h>
#include <tencentcloud/ckafka/v20190819/model/DescribeTopicResponse.h>
#include <tencentcloud/ckafka/v20190819/model/DescribeTopicAttributesRequest.h>
#include <tencentcloud/ckafka/v20190819/model/DescribeTopicAttributesResponse.h>
#include <tencentcloud/ckafka/v20190819/model/DescribeTopicDetailRequest.h>
#include <tencentcloud/ckafka/v20190819/model/DescribeTopicDetailResponse.h>
#include <tencentcloud/ckafka/v20190819/model/DescribeTopicProduceConnectionRequest.h>
#include <tencentcloud/ckafka/v20190819/model/DescribeTopicProduceConnectionResponse.h>
#include <tencentcloud/ckafka/v20190819/model/DescribeTopicSubscribeGroupRequest.h>
#include <tencentcloud/ckafka/v20190819/model/DescribeTopicSubscribeGroupResponse.h>
#include <tencentcloud/ckafka/v20190819/model/DescribeTopicSyncReplicaRequest.h>
#include <tencentcloud/ckafka/v20190819/model/DescribeTopicSyncReplicaResponse.h>
#include <tencentcloud/ckafka/v20190819/model/DescribeUserRequest.h>
#include <tencentcloud/ckafka/v20190819/model/DescribeUserResponse.h>
#include <tencentcloud/ckafka/v20190819/model/FetchMessageByOffsetRequest.h>
#include <tencentcloud/ckafka/v20190819/model/FetchMessageByOffsetResponse.h>
#include <tencentcloud/ckafka/v20190819/model/FetchMessageListByOffsetRequest.h>
#include <tencentcloud/ckafka/v20190819/model/FetchMessageListByOffsetResponse.h>
#include <tencentcloud/ckafka/v20190819/model/InquireCkafkaPriceRequest.h>
#include <tencentcloud/ckafka/v20190819/model/InquireCkafkaPriceResponse.h>
#include <tencentcloud/ckafka/v20190819/model/ModifyAclRuleRequest.h>
#include <tencentcloud/ckafka/v20190819/model/ModifyAclRuleResponse.h>
#include <tencentcloud/ckafka/v20190819/model/ModifyDatahubTopicRequest.h>
#include <tencentcloud/ckafka/v20190819/model/ModifyDatahubTopicResponse.h>
#include <tencentcloud/ckafka/v20190819/model/ModifyGroupOffsetsRequest.h>
#include <tencentcloud/ckafka/v20190819/model/ModifyGroupOffsetsResponse.h>
#include <tencentcloud/ckafka/v20190819/model/ModifyInstanceAttributesRequest.h>
#include <tencentcloud/ckafka/v20190819/model/ModifyInstanceAttributesResponse.h>
#include <tencentcloud/ckafka/v20190819/model/ModifyInstancePreRequest.h>
#include <tencentcloud/ckafka/v20190819/model/ModifyInstancePreResponse.h>
#include <tencentcloud/ckafka/v20190819/model/ModifyPasswordRequest.h>
#include <tencentcloud/ckafka/v20190819/model/ModifyPasswordResponse.h>
#include <tencentcloud/ckafka/v20190819/model/ModifyTopicAttributesRequest.h>
#include <tencentcloud/ckafka/v20190819/model/ModifyTopicAttributesResponse.h>
#include <tencentcloud/ckafka/v20190819/model/SendMessageRequest.h>
#include <tencentcloud/ckafka/v20190819/model/SendMessageResponse.h>


namespace TencentCloud
{
    namespace Ckafka
    {
        namespace V20190819
        {
            class CkafkaClient : public AbstractClient
            {
            public:
                CkafkaClient(const Credential &credential, const std::string &region);
                CkafkaClient(const Credential &credential, const std::string &region, const ClientProfile &profile);

                typedef Outcome<Core::Error, Model::BatchCreateAclResponse> BatchCreateAclOutcome;
                typedef std::future<BatchCreateAclOutcome> BatchCreateAclOutcomeCallable;
                typedef std::function<void(const CkafkaClient*, const Model::BatchCreateAclRequest&, BatchCreateAclOutcome, const std::shared_ptr<const AsyncCallerContext>&)> BatchCreateAclAsyncHandler;
                typedef Outcome<Core::Error, Model::BatchModifyGroupOffsetsResponse> BatchModifyGroupOffsetsOutcome;
                typedef std::future<BatchModifyGroupOffsetsOutcome> BatchModifyGroupOffsetsOutcomeCallable;
                typedef std::function<void(const CkafkaClient*, const Model::BatchModifyGroupOffsetsRequest&, BatchModifyGroupOffsetsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> BatchModifyGroupOffsetsAsyncHandler;
                typedef Outcome<Core::Error, Model::BatchModifyTopicAttributesResponse> BatchModifyTopicAttributesOutcome;
                typedef std::future<BatchModifyTopicAttributesOutcome> BatchModifyTopicAttributesOutcomeCallable;
                typedef std::function<void(const CkafkaClient*, const Model::BatchModifyTopicAttributesRequest&, BatchModifyTopicAttributesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> BatchModifyTopicAttributesAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateAclResponse> CreateAclOutcome;
                typedef std::future<CreateAclOutcome> CreateAclOutcomeCallable;
                typedef std::function<void(const CkafkaClient*, const Model::CreateAclRequest&, CreateAclOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateAclAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateAclRuleResponse> CreateAclRuleOutcome;
                typedef std::future<CreateAclRuleOutcome> CreateAclRuleOutcomeCallable;
                typedef std::function<void(const CkafkaClient*, const Model::CreateAclRuleRequest&, CreateAclRuleOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateAclRuleAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateConsumerResponse> CreateConsumerOutcome;
                typedef std::future<CreateConsumerOutcome> CreateConsumerOutcomeCallable;
                typedef std::function<void(const CkafkaClient*, const Model::CreateConsumerRequest&, CreateConsumerOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateConsumerAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateDatahubTopicResponse> CreateDatahubTopicOutcome;
                typedef std::future<CreateDatahubTopicOutcome> CreateDatahubTopicOutcomeCallable;
                typedef std::function<void(const CkafkaClient*, const Model::CreateDatahubTopicRequest&, CreateDatahubTopicOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateDatahubTopicAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateInstancePostResponse> CreateInstancePostOutcome;
                typedef std::future<CreateInstancePostOutcome> CreateInstancePostOutcomeCallable;
                typedef std::function<void(const CkafkaClient*, const Model::CreateInstancePostRequest&, CreateInstancePostOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateInstancePostAsyncHandler;
                typedef Outcome<Core::Error, Model::CreatePartitionResponse> CreatePartitionOutcome;
                typedef std::future<CreatePartitionOutcome> CreatePartitionOutcomeCallable;
                typedef std::function<void(const CkafkaClient*, const Model::CreatePartitionRequest&, CreatePartitionOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreatePartitionAsyncHandler;
                typedef Outcome<Core::Error, Model::CreatePostPaidInstanceResponse> CreatePostPaidInstanceOutcome;
                typedef std::future<CreatePostPaidInstanceOutcome> CreatePostPaidInstanceOutcomeCallable;
                typedef std::function<void(const CkafkaClient*, const Model::CreatePostPaidInstanceRequest&, CreatePostPaidInstanceOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreatePostPaidInstanceAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateTopicResponse> CreateTopicOutcome;
                typedef std::future<CreateTopicOutcome> CreateTopicOutcomeCallable;
                typedef std::function<void(const CkafkaClient*, const Model::CreateTopicRequest&, CreateTopicOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateTopicAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateTopicIpWhiteListResponse> CreateTopicIpWhiteListOutcome;
                typedef std::future<CreateTopicIpWhiteListOutcome> CreateTopicIpWhiteListOutcomeCallable;
                typedef std::function<void(const CkafkaClient*, const Model::CreateTopicIpWhiteListRequest&, CreateTopicIpWhiteListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateTopicIpWhiteListAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateUserResponse> CreateUserOutcome;
                typedef std::future<CreateUserOutcome> CreateUserOutcomeCallable;
                typedef std::function<void(const CkafkaClient*, const Model::CreateUserRequest&, CreateUserOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateUserAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteAclResponse> DeleteAclOutcome;
                typedef std::future<DeleteAclOutcome> DeleteAclOutcomeCallable;
                typedef std::function<void(const CkafkaClient*, const Model::DeleteAclRequest&, DeleteAclOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteAclAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteInstancePreResponse> DeleteInstancePreOutcome;
                typedef std::future<DeleteInstancePreOutcome> DeleteInstancePreOutcomeCallable;
                typedef std::function<void(const CkafkaClient*, const Model::DeleteInstancePreRequest&, DeleteInstancePreOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteInstancePreAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteRouteResponse> DeleteRouteOutcome;
                typedef std::future<DeleteRouteOutcome> DeleteRouteOutcomeCallable;
                typedef std::function<void(const CkafkaClient*, const Model::DeleteRouteRequest&, DeleteRouteOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteRouteAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteRouteTriggerTimeResponse> DeleteRouteTriggerTimeOutcome;
                typedef std::future<DeleteRouteTriggerTimeOutcome> DeleteRouteTriggerTimeOutcomeCallable;
                typedef std::function<void(const CkafkaClient*, const Model::DeleteRouteTriggerTimeRequest&, DeleteRouteTriggerTimeOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteRouteTriggerTimeAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteTopicResponse> DeleteTopicOutcome;
                typedef std::future<DeleteTopicOutcome> DeleteTopicOutcomeCallable;
                typedef std::function<void(const CkafkaClient*, const Model::DeleteTopicRequest&, DeleteTopicOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteTopicAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteTopicIpWhiteListResponse> DeleteTopicIpWhiteListOutcome;
                typedef std::future<DeleteTopicIpWhiteListOutcome> DeleteTopicIpWhiteListOutcomeCallable;
                typedef std::function<void(const CkafkaClient*, const Model::DeleteTopicIpWhiteListRequest&, DeleteTopicIpWhiteListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteTopicIpWhiteListAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteUserResponse> DeleteUserOutcome;
                typedef std::future<DeleteUserOutcome> DeleteUserOutcomeCallable;
                typedef std::function<void(const CkafkaClient*, const Model::DeleteUserRequest&, DeleteUserOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteUserAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeACLResponse> DescribeACLOutcome;
                typedef std::future<DescribeACLOutcome> DescribeACLOutcomeCallable;
                typedef std::function<void(const CkafkaClient*, const Model::DescribeACLRequest&, DescribeACLOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeACLAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeAclRuleResponse> DescribeAclRuleOutcome;
                typedef std::future<DescribeAclRuleOutcome> DescribeAclRuleOutcomeCallable;
                typedef std::function<void(const CkafkaClient*, const Model::DescribeAclRuleRequest&, DescribeAclRuleOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeAclRuleAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeAppInfoResponse> DescribeAppInfoOutcome;
                typedef std::future<DescribeAppInfoOutcome> DescribeAppInfoOutcomeCallable;
                typedef std::function<void(const CkafkaClient*, const Model::DescribeAppInfoRequest&, DescribeAppInfoOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeAppInfoAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeCkafkaZoneResponse> DescribeCkafkaZoneOutcome;
                typedef std::future<DescribeCkafkaZoneOutcome> DescribeCkafkaZoneOutcomeCallable;
                typedef std::function<void(const CkafkaClient*, const Model::DescribeCkafkaZoneRequest&, DescribeCkafkaZoneOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeCkafkaZoneAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeConsumerGroupResponse> DescribeConsumerGroupOutcome;
                typedef std::future<DescribeConsumerGroupOutcome> DescribeConsumerGroupOutcomeCallable;
                typedef std::function<void(const CkafkaClient*, const Model::DescribeConsumerGroupRequest&, DescribeConsumerGroupOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeConsumerGroupAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeDatahubTopicResponse> DescribeDatahubTopicOutcome;
                typedef std::future<DescribeDatahubTopicOutcome> DescribeDatahubTopicOutcomeCallable;
                typedef std::function<void(const CkafkaClient*, const Model::DescribeDatahubTopicRequest&, DescribeDatahubTopicOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDatahubTopicAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeDatahubTopicsResponse> DescribeDatahubTopicsOutcome;
                typedef std::future<DescribeDatahubTopicsOutcome> DescribeDatahubTopicsOutcomeCallable;
                typedef std::function<void(const CkafkaClient*, const Model::DescribeDatahubTopicsRequest&, DescribeDatahubTopicsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDatahubTopicsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeGroupResponse> DescribeGroupOutcome;
                typedef std::future<DescribeGroupOutcome> DescribeGroupOutcomeCallable;
                typedef std::function<void(const CkafkaClient*, const Model::DescribeGroupRequest&, DescribeGroupOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeGroupAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeGroupInfoResponse> DescribeGroupInfoOutcome;
                typedef std::future<DescribeGroupInfoOutcome> DescribeGroupInfoOutcomeCallable;
                typedef std::function<void(const CkafkaClient*, const Model::DescribeGroupInfoRequest&, DescribeGroupInfoOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeGroupInfoAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeGroupOffsetsResponse> DescribeGroupOffsetsOutcome;
                typedef std::future<DescribeGroupOffsetsOutcome> DescribeGroupOffsetsOutcomeCallable;
                typedef std::function<void(const CkafkaClient*, const Model::DescribeGroupOffsetsRequest&, DescribeGroupOffsetsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeGroupOffsetsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeInstanceAttributesResponse> DescribeInstanceAttributesOutcome;
                typedef std::future<DescribeInstanceAttributesOutcome> DescribeInstanceAttributesOutcomeCallable;
                typedef std::function<void(const CkafkaClient*, const Model::DescribeInstanceAttributesRequest&, DescribeInstanceAttributesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeInstanceAttributesAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeInstancesResponse> DescribeInstancesOutcome;
                typedef std::future<DescribeInstancesOutcome> DescribeInstancesOutcomeCallable;
                typedef std::function<void(const CkafkaClient*, const Model::DescribeInstancesRequest&, DescribeInstancesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeInstancesAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeInstancesDetailResponse> DescribeInstancesDetailOutcome;
                typedef std::future<DescribeInstancesDetailOutcome> DescribeInstancesDetailOutcomeCallable;
                typedef std::function<void(const CkafkaClient*, const Model::DescribeInstancesDetailRequest&, DescribeInstancesDetailOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeInstancesDetailAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeRegionResponse> DescribeRegionOutcome;
                typedef std::future<DescribeRegionOutcome> DescribeRegionOutcomeCallable;
                typedef std::function<void(const CkafkaClient*, const Model::DescribeRegionRequest&, DescribeRegionOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeRegionAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeRouteResponse> DescribeRouteOutcome;
                typedef std::future<DescribeRouteOutcome> DescribeRouteOutcomeCallable;
                typedef std::function<void(const CkafkaClient*, const Model::DescribeRouteRequest&, DescribeRouteOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeRouteAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeTaskStatusResponse> DescribeTaskStatusOutcome;
                typedef std::future<DescribeTaskStatusOutcome> DescribeTaskStatusOutcomeCallable;
                typedef std::function<void(const CkafkaClient*, const Model::DescribeTaskStatusRequest&, DescribeTaskStatusOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeTaskStatusAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeTopicResponse> DescribeTopicOutcome;
                typedef std::future<DescribeTopicOutcome> DescribeTopicOutcomeCallable;
                typedef std::function<void(const CkafkaClient*, const Model::DescribeTopicRequest&, DescribeTopicOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeTopicAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeTopicAttributesResponse> DescribeTopicAttributesOutcome;
                typedef std::future<DescribeTopicAttributesOutcome> DescribeTopicAttributesOutcomeCallable;
                typedef std::function<void(const CkafkaClient*, const Model::DescribeTopicAttributesRequest&, DescribeTopicAttributesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeTopicAttributesAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeTopicDetailResponse> DescribeTopicDetailOutcome;
                typedef std::future<DescribeTopicDetailOutcome> DescribeTopicDetailOutcomeCallable;
                typedef std::function<void(const CkafkaClient*, const Model::DescribeTopicDetailRequest&, DescribeTopicDetailOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeTopicDetailAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeTopicProduceConnectionResponse> DescribeTopicProduceConnectionOutcome;
                typedef std::future<DescribeTopicProduceConnectionOutcome> DescribeTopicProduceConnectionOutcomeCallable;
                typedef std::function<void(const CkafkaClient*, const Model::DescribeTopicProduceConnectionRequest&, DescribeTopicProduceConnectionOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeTopicProduceConnectionAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeTopicSubscribeGroupResponse> DescribeTopicSubscribeGroupOutcome;
                typedef std::future<DescribeTopicSubscribeGroupOutcome> DescribeTopicSubscribeGroupOutcomeCallable;
                typedef std::function<void(const CkafkaClient*, const Model::DescribeTopicSubscribeGroupRequest&, DescribeTopicSubscribeGroupOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeTopicSubscribeGroupAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeTopicSyncReplicaResponse> DescribeTopicSyncReplicaOutcome;
                typedef std::future<DescribeTopicSyncReplicaOutcome> DescribeTopicSyncReplicaOutcomeCallable;
                typedef std::function<void(const CkafkaClient*, const Model::DescribeTopicSyncReplicaRequest&, DescribeTopicSyncReplicaOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeTopicSyncReplicaAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeUserResponse> DescribeUserOutcome;
                typedef std::future<DescribeUserOutcome> DescribeUserOutcomeCallable;
                typedef std::function<void(const CkafkaClient*, const Model::DescribeUserRequest&, DescribeUserOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeUserAsyncHandler;
                typedef Outcome<Core::Error, Model::FetchMessageByOffsetResponse> FetchMessageByOffsetOutcome;
                typedef std::future<FetchMessageByOffsetOutcome> FetchMessageByOffsetOutcomeCallable;
                typedef std::function<void(const CkafkaClient*, const Model::FetchMessageByOffsetRequest&, FetchMessageByOffsetOutcome, const std::shared_ptr<const AsyncCallerContext>&)> FetchMessageByOffsetAsyncHandler;
                typedef Outcome<Core::Error, Model::FetchMessageListByOffsetResponse> FetchMessageListByOffsetOutcome;
                typedef std::future<FetchMessageListByOffsetOutcome> FetchMessageListByOffsetOutcomeCallable;
                typedef std::function<void(const CkafkaClient*, const Model::FetchMessageListByOffsetRequest&, FetchMessageListByOffsetOutcome, const std::shared_ptr<const AsyncCallerContext>&)> FetchMessageListByOffsetAsyncHandler;
                typedef Outcome<Core::Error, Model::InquireCkafkaPriceResponse> InquireCkafkaPriceOutcome;
                typedef std::future<InquireCkafkaPriceOutcome> InquireCkafkaPriceOutcomeCallable;
                typedef std::function<void(const CkafkaClient*, const Model::InquireCkafkaPriceRequest&, InquireCkafkaPriceOutcome, const std::shared_ptr<const AsyncCallerContext>&)> InquireCkafkaPriceAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyAclRuleResponse> ModifyAclRuleOutcome;
                typedef std::future<ModifyAclRuleOutcome> ModifyAclRuleOutcomeCallable;
                typedef std::function<void(const CkafkaClient*, const Model::ModifyAclRuleRequest&, ModifyAclRuleOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyAclRuleAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyDatahubTopicResponse> ModifyDatahubTopicOutcome;
                typedef std::future<ModifyDatahubTopicOutcome> ModifyDatahubTopicOutcomeCallable;
                typedef std::function<void(const CkafkaClient*, const Model::ModifyDatahubTopicRequest&, ModifyDatahubTopicOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyDatahubTopicAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyGroupOffsetsResponse> ModifyGroupOffsetsOutcome;
                typedef std::future<ModifyGroupOffsetsOutcome> ModifyGroupOffsetsOutcomeCallable;
                typedef std::function<void(const CkafkaClient*, const Model::ModifyGroupOffsetsRequest&, ModifyGroupOffsetsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyGroupOffsetsAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyInstanceAttributesResponse> ModifyInstanceAttributesOutcome;
                typedef std::future<ModifyInstanceAttributesOutcome> ModifyInstanceAttributesOutcomeCallable;
                typedef std::function<void(const CkafkaClient*, const Model::ModifyInstanceAttributesRequest&, ModifyInstanceAttributesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyInstanceAttributesAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyInstancePreResponse> ModifyInstancePreOutcome;
                typedef std::future<ModifyInstancePreOutcome> ModifyInstancePreOutcomeCallable;
                typedef std::function<void(const CkafkaClient*, const Model::ModifyInstancePreRequest&, ModifyInstancePreOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyInstancePreAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyPasswordResponse> ModifyPasswordOutcome;
                typedef std::future<ModifyPasswordOutcome> ModifyPasswordOutcomeCallable;
                typedef std::function<void(const CkafkaClient*, const Model::ModifyPasswordRequest&, ModifyPasswordOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyPasswordAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyTopicAttributesResponse> ModifyTopicAttributesOutcome;
                typedef std::future<ModifyTopicAttributesOutcome> ModifyTopicAttributesOutcomeCallable;
                typedef std::function<void(const CkafkaClient*, const Model::ModifyTopicAttributesRequest&, ModifyTopicAttributesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyTopicAttributesAsyncHandler;
                typedef Outcome<Core::Error, Model::SendMessageResponse> SendMessageOutcome;
                typedef std::future<SendMessageOutcome> SendMessageOutcomeCallable;
                typedef std::function<void(const CkafkaClient*, const Model::SendMessageRequest&, SendMessageOutcome, const std::shared_ptr<const AsyncCallerContext>&)> SendMessageAsyncHandler;



                /**
                 *This API is used to create ACL policies in batches.
                 * @param req BatchCreateAclRequest
                 * @return BatchCreateAclOutcome
                 */
                BatchCreateAclOutcome BatchCreateAcl(const Model::BatchCreateAclRequest &request);
                void BatchCreateAclAsync(const Model::BatchCreateAclRequest& request, const BatchCreateAclAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                BatchCreateAclOutcomeCallable BatchCreateAclCallable(const Model::BatchCreateAclRequest& request);

                /**
                 *This API is used to batch modify consumer group offsets.
                 * @param req BatchModifyGroupOffsetsRequest
                 * @return BatchModifyGroupOffsetsOutcome
                 */
                BatchModifyGroupOffsetsOutcome BatchModifyGroupOffsets(const Model::BatchModifyGroupOffsetsRequest &request);
                void BatchModifyGroupOffsetsAsync(const Model::BatchModifyGroupOffsetsRequest& request, const BatchModifyGroupOffsetsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                BatchModifyGroupOffsetsOutcomeCallable BatchModifyGroupOffsetsCallable(const Model::BatchModifyGroupOffsetsRequest& request);

                /**
                 *This API is used to batch set topic attributes.
                 * @param req BatchModifyTopicAttributesRequest
                 * @return BatchModifyTopicAttributesOutcome
                 */
                BatchModifyTopicAttributesOutcome BatchModifyTopicAttributes(const Model::BatchModifyTopicAttributesRequest &request);
                void BatchModifyTopicAttributesAsync(const Model::BatchModifyTopicAttributesRequest& request, const BatchModifyTopicAttributesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                BatchModifyTopicAttributesOutcomeCallable BatchModifyTopicAttributesCallable(const Model::BatchModifyTopicAttributesRequest& request);

                /**
                 *This API is used to add an ACL policy.
                 * @param req CreateAclRequest
                 * @return CreateAclOutcome
                 */
                CreateAclOutcome CreateAcl(const Model::CreateAclRequest &request);
                void CreateAclAsync(const Model::CreateAclRequest& request, const CreateAclAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateAclOutcomeCallable CreateAclCallable(const Model::CreateAclRequest& request);

                /**
                 *This API shows you how to create an ACL rule.
                 * @param req CreateAclRuleRequest
                 * @return CreateAclRuleOutcome
                 */
                CreateAclRuleOutcome CreateAclRule(const Model::CreateAclRuleRequest &request);
                void CreateAclRuleAsync(const Model::CreateAclRuleRequest& request, const CreateAclRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateAclRuleOutcomeCallable CreateAclRuleCallable(const Model::CreateAclRuleRequest& request);

                /**
                 *This API is used to create a consumer group.
                 * @param req CreateConsumerRequest
                 * @return CreateConsumerOutcome
                 */
                CreateConsumerOutcome CreateConsumer(const Model::CreateConsumerRequest &request);
                void CreateConsumerAsync(const Model::CreateConsumerRequest& request, const CreateConsumerAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateConsumerOutcomeCallable CreateConsumerCallable(const Model::CreateConsumerRequest& request);

                /**
                 *This API is used to create a DataHub topic.
                 * @param req CreateDatahubTopicRequest
                 * @return CreateDatahubTopicOutcome
                 */
                CreateDatahubTopicOutcome CreateDatahubTopic(const Model::CreateDatahubTopicRequest &request);
                void CreateDatahubTopicAsync(const Model::CreateDatahubTopicRequest& request, const CreateDatahubTopicAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateDatahubTopicOutcomeCallable CreateDatahubTopicCallable(const Model::CreateDatahubTopicRequest& request);

                /**
                 *This API is used to create a pay-as-you-go instance.  It will be deprecated in future versions. We recommend that you use the `CreatePostPaidInstance` API instead.  You can call this API via SDK or the TencentCloud API console to create a pay-as-you-go CKafka instance,  which is an alternate option for making a purchase in the console.
                 * @param req CreateInstancePostRequest
                 * @return CreateInstancePostOutcome
                 */
                CreateInstancePostOutcome CreateInstancePost(const Model::CreateInstancePostRequest &request);
                void CreateInstancePostAsync(const Model::CreateInstancePostRequest& request, const CreateInstancePostAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateInstancePostOutcomeCallable CreateInstancePostCallable(const Model::CreateInstancePostRequest& request);

                /**
                 *This API is used to add a partition in a topic.
                 * @param req CreatePartitionRequest
                 * @return CreatePartitionOutcome
                 */
                CreatePartitionOutcome CreatePartition(const Model::CreatePartitionRequest &request);
                void CreatePartitionAsync(const Model::CreatePartitionRequest& request, const CreatePartitionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreatePartitionOutcomeCallable CreatePartitionCallable(const Model::CreatePartitionRequest& request);

                /**
                 *This API is used to replace `CreateInstancePost`  to create a pay-as-you-go instance.  You can call this API via SDK or the TencentCloud API console to create a pay-as-you-go CKafka instance,  which is an alternate option for making a purchase in the console.
                 * @param req CreatePostPaidInstanceRequest
                 * @return CreatePostPaidInstanceOutcome
                 */
                CreatePostPaidInstanceOutcome CreatePostPaidInstance(const Model::CreatePostPaidInstanceRequest &request);
                void CreatePostPaidInstanceAsync(const Model::CreatePostPaidInstanceRequest& request, const CreatePostPaidInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreatePostPaidInstanceOutcomeCallable CreatePostPaidInstanceCallable(const Model::CreatePostPaidInstanceRequest& request);

                /**
                 *This API is used to create a CKafka topic.
                 * @param req CreateTopicRequest
                 * @return CreateTopicOutcome
                 */
                CreateTopicOutcome CreateTopic(const Model::CreateTopicRequest &request);
                void CreateTopicAsync(const Model::CreateTopicRequest& request, const CreateTopicAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateTopicOutcomeCallable CreateTopicCallable(const Model::CreateTopicRequest& request);

                /**
                 *This API is used to create a topic IP allowlist.
                 * @param req CreateTopicIpWhiteListRequest
                 * @return CreateTopicIpWhiteListOutcome
                 */
                CreateTopicIpWhiteListOutcome CreateTopicIpWhiteList(const Model::CreateTopicIpWhiteListRequest &request);
                void CreateTopicIpWhiteListAsync(const Model::CreateTopicIpWhiteListRequest& request, const CreateTopicIpWhiteListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateTopicIpWhiteListOutcomeCallable CreateTopicIpWhiteListCallable(const Model::CreateTopicIpWhiteListRequest& request);

                /**
                 *This API is used to add a user.
                 * @param req CreateUserRequest
                 * @return CreateUserOutcome
                 */
                CreateUserOutcome CreateUser(const Model::CreateUserRequest &request);
                void CreateUserAsync(const Model::CreateUserRequest& request, const CreateUserAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateUserOutcomeCallable CreateUserCallable(const Model::CreateUserRequest& request);

                /**
                 *This API is used to delete an ACL.
                 * @param req DeleteAclRequest
                 * @return DeleteAclOutcome
                 */
                DeleteAclOutcome DeleteAcl(const Model::DeleteAclRequest &request);
                void DeleteAclAsync(const Model::DeleteAclRequest& request, const DeleteAclAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteAclOutcomeCallable DeleteAclCallable(const Model::DeleteAclRequest& request);

                /**
                 *This API is used to delete a monthly subscribed (prepaid) instance.
                 * @param req DeleteInstancePreRequest
                 * @return DeleteInstancePreOutcome
                 */
                DeleteInstancePreOutcome DeleteInstancePre(const Model::DeleteInstancePreRequest &request);
                void DeleteInstancePreAsync(const Model::DeleteInstancePreRequest& request, const DeleteInstancePreAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteInstancePreOutcomeCallable DeleteInstancePreCallable(const Model::DeleteInstancePreRequest& request);

                /**
                 *This API is used to delete a route.
                 * @param req DeleteRouteRequest
                 * @return DeleteRouteOutcome
                 */
                DeleteRouteOutcome DeleteRoute(const Model::DeleteRouteRequest &request);
                void DeleteRouteAsync(const Model::DeleteRouteRequest& request, const DeleteRouteAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteRouteOutcomeCallable DeleteRouteCallable(const Model::DeleteRouteRequest& request);

                /**
                 *This API is used to modify the delayed trigger time of route deletion.
                 * @param req DeleteRouteTriggerTimeRequest
                 * @return DeleteRouteTriggerTimeOutcome
                 */
                DeleteRouteTriggerTimeOutcome DeleteRouteTriggerTime(const Model::DeleteRouteTriggerTimeRequest &request);
                void DeleteRouteTriggerTimeAsync(const Model::DeleteRouteTriggerTimeRequest& request, const DeleteRouteTriggerTimeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteRouteTriggerTimeOutcomeCallable DeleteRouteTriggerTimeCallable(const Model::DeleteRouteTriggerTimeRequest& request);

                /**
                 *This API is used to delete a CKafka topic.
                 * @param req DeleteTopicRequest
                 * @return DeleteTopicOutcome
                 */
                DeleteTopicOutcome DeleteTopic(const Model::DeleteTopicRequest &request);
                void DeleteTopicAsync(const Model::DeleteTopicRequest& request, const DeleteTopicAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteTopicOutcomeCallable DeleteTopicCallable(const Model::DeleteTopicRequest& request);

                /**
                 *This API is used to delete a topic IP allowlist.
                 * @param req DeleteTopicIpWhiteListRequest
                 * @return DeleteTopicIpWhiteListOutcome
                 */
                DeleteTopicIpWhiteListOutcome DeleteTopicIpWhiteList(const Model::DeleteTopicIpWhiteListRequest &request);
                void DeleteTopicIpWhiteListAsync(const Model::DeleteTopicIpWhiteListRequest& request, const DeleteTopicIpWhiteListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteTopicIpWhiteListOutcomeCallable DeleteTopicIpWhiteListCallable(const Model::DeleteTopicIpWhiteListRequest& request);

                /**
                 *This API is used to delete a user.
                 * @param req DeleteUserRequest
                 * @return DeleteUserOutcome
                 */
                DeleteUserOutcome DeleteUser(const Model::DeleteUserRequest &request);
                void DeleteUserAsync(const Model::DeleteUserRequest& request, const DeleteUserAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteUserOutcomeCallable DeleteUserCallable(const Model::DeleteUserRequest& request);

                /**
                 *This API is used to enumerate ACLs.
                 * @param req DescribeACLRequest
                 * @return DescribeACLOutcome
                 */
                DescribeACLOutcome DescribeACL(const Model::DescribeACLRequest &request);
                void DescribeACLAsync(const Model::DescribeACLRequest& request, const DescribeACLAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeACLOutcomeCallable DescribeACLCallable(const Model::DescribeACLRequest& request);

                /**
                 *This API is used to query the ACL rule list.
                 * @param req DescribeAclRuleRequest
                 * @return DescribeAclRuleOutcome
                 */
                DescribeAclRuleOutcome DescribeAclRule(const Model::DescribeAclRuleRequest &request);
                void DescribeAclRuleAsync(const Model::DescribeAclRuleRequest& request, const DescribeAclRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeAclRuleOutcomeCallable DescribeAclRuleCallable(const Model::DescribeAclRuleRequest& request);

                /**
                 *This API is used to query the user list.
                 * @param req DescribeAppInfoRequest
                 * @return DescribeAppInfoOutcome
                 */
                DescribeAppInfoOutcome DescribeAppInfo(const Model::DescribeAppInfoRequest &request);
                void DescribeAppInfoAsync(const Model::DescribeAppInfoRequest& request, const DescribeAppInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeAppInfoOutcomeCallable DescribeAppInfoCallable(const Model::DescribeAppInfoRequest& request);

                /**
                 *This API is used to view the AZ list of Ckafka.
                 * @param req DescribeCkafkaZoneRequest
                 * @return DescribeCkafkaZoneOutcome
                 */
                DescribeCkafkaZoneOutcome DescribeCkafkaZone(const Model::DescribeCkafkaZoneRequest &request);
                void DescribeCkafkaZoneAsync(const Model::DescribeCkafkaZoneRequest& request, const DescribeCkafkaZoneAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeCkafkaZoneOutcomeCallable DescribeCkafkaZoneCallable(const Model::DescribeCkafkaZoneRequest& request);

                /**
                 *This API is used to query consumer group information.
                 * @param req DescribeConsumerGroupRequest
                 * @return DescribeConsumerGroupOutcome
                 */
                DescribeConsumerGroupOutcome DescribeConsumerGroup(const Model::DescribeConsumerGroupRequest &request);
                void DescribeConsumerGroupAsync(const Model::DescribeConsumerGroupRequest& request, const DescribeConsumerGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeConsumerGroupOutcomeCallable DescribeConsumerGroupCallable(const Model::DescribeConsumerGroupRequest& request);

                /**
                 *This API is used to get the DataHub topic attributes.
                 * @param req DescribeDatahubTopicRequest
                 * @return DescribeDatahubTopicOutcome
                 */
                DescribeDatahubTopicOutcome DescribeDatahubTopic(const Model::DescribeDatahubTopicRequest &request);
                void DescribeDatahubTopicAsync(const Model::DescribeDatahubTopicRequest& request, const DescribeDatahubTopicAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeDatahubTopicOutcomeCallable DescribeDatahubTopicCallable(const Model::DescribeDatahubTopicRequest& request);

                /**
                 *This API is used to query the DataHub topic list.
                 * @param req DescribeDatahubTopicsRequest
                 * @return DescribeDatahubTopicsOutcome
                 */
                DescribeDatahubTopicsOutcome DescribeDatahubTopics(const Model::DescribeDatahubTopicsRequest &request);
                void DescribeDatahubTopicsAsync(const Model::DescribeDatahubTopicsRequest& request, const DescribeDatahubTopicsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeDatahubTopicsOutcomeCallable DescribeDatahubTopicsCallable(const Model::DescribeDatahubTopicsRequest& request);

                /**
                 *This API is used to enumerate consumer groups (simplified).
                 * @param req DescribeGroupRequest
                 * @return DescribeGroupOutcome
                 */
                DescribeGroupOutcome DescribeGroup(const Model::DescribeGroupRequest &request);
                void DescribeGroupAsync(const Model::DescribeGroupRequest& request, const DescribeGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeGroupOutcomeCallable DescribeGroupCallable(const Model::DescribeGroupRequest& request);

                /**
                 *This API is used to get consumer group information.
                 * @param req DescribeGroupInfoRequest
                 * @return DescribeGroupInfoOutcome
                 */
                DescribeGroupInfoOutcome DescribeGroupInfo(const Model::DescribeGroupInfoRequest &request);
                void DescribeGroupInfoAsync(const Model::DescribeGroupInfoRequest& request, const DescribeGroupInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeGroupInfoOutcomeCallable DescribeGroupInfoCallable(const Model::DescribeGroupInfoRequest& request);

                /**
                 *This API is used to get the consumer group offset.
                 * @param req DescribeGroupOffsetsRequest
                 * @return DescribeGroupOffsetsOutcome
                 */
                DescribeGroupOffsetsOutcome DescribeGroupOffsets(const Model::DescribeGroupOffsetsRequest &request);
                void DescribeGroupOffsetsAsync(const Model::DescribeGroupOffsetsRequest& request, const DescribeGroupOffsetsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeGroupOffsetsOutcomeCallable DescribeGroupOffsetsCallable(const Model::DescribeGroupOffsetsRequest& request);

                /**
                 *This API is used to get instance attributes. 
                 * @param req DescribeInstanceAttributesRequest
                 * @return DescribeInstanceAttributesOutcome
                 */
                DescribeInstanceAttributesOutcome DescribeInstanceAttributes(const Model::DescribeInstanceAttributesRequest &request);
                void DescribeInstanceAttributesAsync(const Model::DescribeInstanceAttributesRequest& request, const DescribeInstanceAttributesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeInstanceAttributesOutcomeCallable DescribeInstanceAttributesCallable(const Model::DescribeInstanceAttributesRequest& request);

                /**
                 *This API is used to get the list of CKafka instances under a user account.
                 * @param req DescribeInstancesRequest
                 * @return DescribeInstancesOutcome
                 */
                DescribeInstancesOutcome DescribeInstances(const Model::DescribeInstancesRequest &request);
                void DescribeInstancesAsync(const Model::DescribeInstancesRequest& request, const DescribeInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeInstancesOutcomeCallable DescribeInstancesCallable(const Model::DescribeInstancesRequest& request);

                /**
                 *This API is used to get instance list details under a user account.
                 * @param req DescribeInstancesDetailRequest
                 * @return DescribeInstancesDetailOutcome
                 */
                DescribeInstancesDetailOutcome DescribeInstancesDetail(const Model::DescribeInstancesDetailRequest &request);
                void DescribeInstancesDetailAsync(const Model::DescribeInstancesDetailRequest& request, const DescribeInstancesDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeInstancesDetailOutcomeCallable DescribeInstancesDetailCallable(const Model::DescribeInstancesDetailRequest& request);

                /**
                 *This API is used to enumerate regions, and can be called only in Guangzhou.
                 * @param req DescribeRegionRequest
                 * @return DescribeRegionOutcome
                 */
                DescribeRegionOutcome DescribeRegion(const Model::DescribeRegionRequest &request);
                void DescribeRegionAsync(const Model::DescribeRegionRequest& request, const DescribeRegionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeRegionOutcomeCallable DescribeRegionCallable(const Model::DescribeRegionRequest& request);

                /**
                 *This API is used to view route information.
                 * @param req DescribeRouteRequest
                 * @return DescribeRouteOutcome
                 */
                DescribeRouteOutcome DescribeRoute(const Model::DescribeRouteRequest &request);
                void DescribeRouteAsync(const Model::DescribeRouteRequest& request, const DescribeRouteAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeRouteOutcomeCallable DescribeRouteCallable(const Model::DescribeRouteRequest& request);

                /**
                 *This API is used to query the task status.
                 * @param req DescribeTaskStatusRequest
                 * @return DescribeTaskStatusOutcome
                 */
                DescribeTaskStatusOutcome DescribeTaskStatus(const Model::DescribeTaskStatusRequest &request);
                void DescribeTaskStatusAsync(const Model::DescribeTaskStatusRequest& request, const DescribeTaskStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeTaskStatusOutcomeCallable DescribeTaskStatusCallable(const Model::DescribeTaskStatusRequest& request);

                /**
                 *API domain name: https://ckafka.tencentcloudapi.com
This API is used to get the list of topics in a CKafka instance of a user.
                 * @param req DescribeTopicRequest
                 * @return DescribeTopicOutcome
                 */
                DescribeTopicOutcome DescribeTopic(const Model::DescribeTopicRequest &request);
                void DescribeTopicAsync(const Model::DescribeTopicRequest& request, const DescribeTopicAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeTopicOutcomeCallable DescribeTopicCallable(const Model::DescribeTopicRequest& request);

                /**
                 *This API is used to get topic attributes.

                 * @param req DescribeTopicAttributesRequest
                 * @return DescribeTopicAttributesOutcome
                 */
                DescribeTopicAttributesOutcome DescribeTopicAttributes(const Model::DescribeTopicAttributesRequest &request);
                void DescribeTopicAttributesAsync(const Model::DescribeTopicAttributesRequest& request, const DescribeTopicAttributesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeTopicAttributesOutcomeCallable DescribeTopicAttributesCallable(const Model::DescribeTopicAttributesRequest& request);

                /**
                 *This API is used to get topic list details (only for call in the console).
                 * @param req DescribeTopicDetailRequest
                 * @return DescribeTopicDetailOutcome
                 */
                DescribeTopicDetailOutcome DescribeTopicDetail(const Model::DescribeTopicDetailRequest &request);
                void DescribeTopicDetailAsync(const Model::DescribeTopicDetailRequest& request, const DescribeTopicDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeTopicDetailOutcomeCallable DescribeTopicDetailCallable(const Model::DescribeTopicDetailRequest& request);

                /**
                 *This API is used to query the connection information of the topic producer.
                 * @param req DescribeTopicProduceConnectionRequest
                 * @return DescribeTopicProduceConnectionOutcome
                 */
                DescribeTopicProduceConnectionOutcome DescribeTopicProduceConnection(const Model::DescribeTopicProduceConnectionRequest &request);
                void DescribeTopicProduceConnectionAsync(const Model::DescribeTopicProduceConnectionRequest& request, const DescribeTopicProduceConnectionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeTopicProduceConnectionOutcomeCallable DescribeTopicProduceConnectionCallable(const Model::DescribeTopicProduceConnectionRequest& request);

                /**
                 *This API is used to search and subscribe the message group information of a topic.
                 * @param req DescribeTopicSubscribeGroupRequest
                 * @return DescribeTopicSubscribeGroupOutcome
                 */
                DescribeTopicSubscribeGroupOutcome DescribeTopicSubscribeGroup(const Model::DescribeTopicSubscribeGroupRequest &request);
                void DescribeTopicSubscribeGroupAsync(const Model::DescribeTopicSubscribeGroupRequest& request, const DescribeTopicSubscribeGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeTopicSubscribeGroupOutcomeCallable DescribeTopicSubscribeGroupCallable(const Model::DescribeTopicSubscribeGroupRequest& request);

                /**
                 *This API is used to get the details of a synced topic replica.
                 * @param req DescribeTopicSyncReplicaRequest
                 * @return DescribeTopicSyncReplicaOutcome
                 */
                DescribeTopicSyncReplicaOutcome DescribeTopicSyncReplica(const Model::DescribeTopicSyncReplicaRequest &request);
                void DescribeTopicSyncReplicaAsync(const Model::DescribeTopicSyncReplicaRequest& request, const DescribeTopicSyncReplicaAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeTopicSyncReplicaOutcomeCallable DescribeTopicSyncReplicaCallable(const Model::DescribeTopicSyncReplicaRequest& request);

                /**
                 *This API is used to query user information.
                 * @param req DescribeUserRequest
                 * @return DescribeUserOutcome
                 */
                DescribeUserOutcome DescribeUser(const Model::DescribeUserRequest &request);
                void DescribeUserAsync(const Model::DescribeUserRequest& request, const DescribeUserAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeUserOutcomeCallable DescribeUserCallable(const Model::DescribeUserRequest& request);

                /**
                 *This API is used to query messages based on a specified offset position.
                 * @param req FetchMessageByOffsetRequest
                 * @return FetchMessageByOffsetOutcome
                 */
                FetchMessageByOffsetOutcome FetchMessageByOffset(const Model::FetchMessageByOffsetRequest &request);
                void FetchMessageByOffsetAsync(const Model::FetchMessageByOffsetRequest& request, const FetchMessageByOffsetAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                FetchMessageByOffsetOutcomeCallable FetchMessageByOffsetCallable(const Model::FetchMessageByOffsetRequest& request);

                /**
                 *This API is used to query the message list based on an offset.
                 * @param req FetchMessageListByOffsetRequest
                 * @return FetchMessageListByOffsetOutcome
                 */
                FetchMessageListByOffsetOutcome FetchMessageListByOffset(const Model::FetchMessageListByOffsetRequest &request);
                void FetchMessageListByOffsetAsync(const Model::FetchMessageListByOffsetRequest& request, const FetchMessageListByOffsetAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                FetchMessageListByOffsetOutcomeCallable FetchMessageListByOffsetCallable(const Model::FetchMessageListByOffsetRequest& request);

                /**
                 *This API is used to purchase a CKafka instance or query the instance renewal price.
                 * @param req InquireCkafkaPriceRequest
                 * @return InquireCkafkaPriceOutcome
                 */
                InquireCkafkaPriceOutcome InquireCkafkaPrice(const Model::InquireCkafkaPriceRequest &request);
                void InquireCkafkaPriceAsync(const Model::InquireCkafkaPriceRequest& request, const InquireCkafkaPriceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                InquireCkafkaPriceOutcomeCallable InquireCkafkaPriceCallable(const Model::InquireCkafkaPriceRequest& request);

                /**
                 *This API is used to modify an ACL policy, and currently only supports specifying whether to apply the preset rule to new topics.
                 * @param req ModifyAclRuleRequest
                 * @return ModifyAclRuleOutcome
                 */
                ModifyAclRuleOutcome ModifyAclRule(const Model::ModifyAclRuleRequest &request);
                void ModifyAclRuleAsync(const Model::ModifyAclRuleRequest& request, const ModifyAclRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyAclRuleOutcomeCallable ModifyAclRuleCallable(const Model::ModifyAclRuleRequest& request);

                /**
                 *This API is used to modify the DataHub topic attributes.
                 * @param req ModifyDatahubTopicRequest
                 * @return ModifyDatahubTopicOutcome
                 */
                ModifyDatahubTopicOutcome ModifyDatahubTopic(const Model::ModifyDatahubTopicRequest &request);
                void ModifyDatahubTopicAsync(const Model::ModifyDatahubTopicRequest& request, const ModifyDatahubTopicAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyDatahubTopicOutcomeCallable ModifyDatahubTopicCallable(const Model::ModifyDatahubTopicRequest& request);

                /**
                 *This API is used to set the consumer group (Groups) offset.
                 * @param req ModifyGroupOffsetsRequest
                 * @return ModifyGroupOffsetsOutcome
                 */
                ModifyGroupOffsetsOutcome ModifyGroupOffsets(const Model::ModifyGroupOffsetsRequest &request);
                void ModifyGroupOffsetsAsync(const Model::ModifyGroupOffsetsRequest& request, const ModifyGroupOffsetsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyGroupOffsetsOutcomeCallable ModifyGroupOffsetsCallable(const Model::ModifyGroupOffsetsRequest& request);

                /**
                 *This API is used to set instance attributes.
                 * @param req ModifyInstanceAttributesRequest
                 * @return ModifyInstanceAttributesOutcome
                 */
                ModifyInstanceAttributesOutcome ModifyInstanceAttributes(const Model::ModifyInstanceAttributesRequest &request);
                void ModifyInstanceAttributesAsync(const Model::ModifyInstanceAttributesRequest& request, const ModifyInstanceAttributesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyInstanceAttributesOutcomeCallable ModifyInstanceAttributesCallable(const Model::ModifyInstanceAttributesRequest& request);

                /**
                 *This API is used to change the configurations of a prepaid instance, such as disk capacity and bandwidth.
                 * @param req ModifyInstancePreRequest
                 * @return ModifyInstancePreOutcome
                 */
                ModifyInstancePreOutcome ModifyInstancePre(const Model::ModifyInstancePreRequest &request);
                void ModifyInstancePreAsync(const Model::ModifyInstancePreRequest& request, const ModifyInstancePreAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyInstancePreOutcomeCallable ModifyInstancePreCallable(const Model::ModifyInstancePreRequest& request);

                /**
                 *This API is used to change the password.
                 * @param req ModifyPasswordRequest
                 * @return ModifyPasswordOutcome
                 */
                ModifyPasswordOutcome ModifyPassword(const Model::ModifyPasswordRequest &request);
                void ModifyPasswordAsync(const Model::ModifyPasswordRequest& request, const ModifyPasswordAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyPasswordOutcomeCallable ModifyPasswordCallable(const Model::ModifyPasswordRequest& request);

                /**
                 *This API is used to modify topic attributes.
                 * @param req ModifyTopicAttributesRequest
                 * @return ModifyTopicAttributesOutcome
                 */
                ModifyTopicAttributesOutcome ModifyTopicAttributes(const Model::ModifyTopicAttributesRequest &request);
                void ModifyTopicAttributesAsync(const Model::ModifyTopicAttributesRequest& request, const ModifyTopicAttributesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyTopicAttributesOutcomeCallable ModifyTopicAttributesCallable(const Model::ModifyTopicAttributesRequest& request);

                /**
                 *This API is used to send messages through the HTTP access layer.
                 * @param req SendMessageRequest
                 * @return SendMessageOutcome
                 */
                SendMessageOutcome SendMessage(const Model::SendMessageRequest &request);
                void SendMessageAsync(const Model::SendMessageRequest& request, const SendMessageAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                SendMessageOutcomeCallable SendMessageCallable(const Model::SendMessageRequest& request);

            };
        }
    }
}

#endif // !TENCENTCLOUD_CKAFKA_V20190819_CKAFKACLIENT_H_
