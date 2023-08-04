/*
 * Copyright (c) 2017-2019 THL A29 Limited, a Tencent company. All Rights Reserved.
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

#ifndef TENCENTCLOUD_CLB_V20180317_CLBCLIENT_H_
#define TENCENTCLOUD_CLB_V20180317_CLBCLIENT_H_

#include <functional>
#include <future>
#include <tencentcloud/core/AbstractClient.h>
#include <tencentcloud/core/Credential.h>
#include <tencentcloud/core/profile/ClientProfile.h>
#include <tencentcloud/core/AsyncCallerContext.h>
#include <tencentcloud/clb/v20180317/model/AssociateTargetGroupsRequest.h>
#include <tencentcloud/clb/v20180317/model/AssociateTargetGroupsResponse.h>
#include <tencentcloud/clb/v20180317/model/AutoRewriteRequest.h>
#include <tencentcloud/clb/v20180317/model/AutoRewriteResponse.h>
#include <tencentcloud/clb/v20180317/model/BatchDeregisterTargetsRequest.h>
#include <tencentcloud/clb/v20180317/model/BatchDeregisterTargetsResponse.h>
#include <tencentcloud/clb/v20180317/model/BatchModifyTargetWeightRequest.h>
#include <tencentcloud/clb/v20180317/model/BatchModifyTargetWeightResponse.h>
#include <tencentcloud/clb/v20180317/model/BatchRegisterTargetsRequest.h>
#include <tencentcloud/clb/v20180317/model/BatchRegisterTargetsResponse.h>
#include <tencentcloud/clb/v20180317/model/CloneLoadBalancerRequest.h>
#include <tencentcloud/clb/v20180317/model/CloneLoadBalancerResponse.h>
#include <tencentcloud/clb/v20180317/model/CreateClsLogSetRequest.h>
#include <tencentcloud/clb/v20180317/model/CreateClsLogSetResponse.h>
#include <tencentcloud/clb/v20180317/model/CreateListenerRequest.h>
#include <tencentcloud/clb/v20180317/model/CreateListenerResponse.h>
#include <tencentcloud/clb/v20180317/model/CreateLoadBalancerRequest.h>
#include <tencentcloud/clb/v20180317/model/CreateLoadBalancerResponse.h>
#include <tencentcloud/clb/v20180317/model/CreateLoadBalancerSnatIpsRequest.h>
#include <tencentcloud/clb/v20180317/model/CreateLoadBalancerSnatIpsResponse.h>
#include <tencentcloud/clb/v20180317/model/CreateRuleRequest.h>
#include <tencentcloud/clb/v20180317/model/CreateRuleResponse.h>
#include <tencentcloud/clb/v20180317/model/CreateTargetGroupRequest.h>
#include <tencentcloud/clb/v20180317/model/CreateTargetGroupResponse.h>
#include <tencentcloud/clb/v20180317/model/CreateTopicRequest.h>
#include <tencentcloud/clb/v20180317/model/CreateTopicResponse.h>
#include <tencentcloud/clb/v20180317/model/DeleteListenerRequest.h>
#include <tencentcloud/clb/v20180317/model/DeleteListenerResponse.h>
#include <tencentcloud/clb/v20180317/model/DeleteLoadBalancerRequest.h>
#include <tencentcloud/clb/v20180317/model/DeleteLoadBalancerResponse.h>
#include <tencentcloud/clb/v20180317/model/DeleteLoadBalancerListenersRequest.h>
#include <tencentcloud/clb/v20180317/model/DeleteLoadBalancerListenersResponse.h>
#include <tencentcloud/clb/v20180317/model/DeleteLoadBalancerSnatIpsRequest.h>
#include <tencentcloud/clb/v20180317/model/DeleteLoadBalancerSnatIpsResponse.h>
#include <tencentcloud/clb/v20180317/model/DeleteRewriteRequest.h>
#include <tencentcloud/clb/v20180317/model/DeleteRewriteResponse.h>
#include <tencentcloud/clb/v20180317/model/DeleteRuleRequest.h>
#include <tencentcloud/clb/v20180317/model/DeleteRuleResponse.h>
#include <tencentcloud/clb/v20180317/model/DeleteTargetGroupsRequest.h>
#include <tencentcloud/clb/v20180317/model/DeleteTargetGroupsResponse.h>
#include <tencentcloud/clb/v20180317/model/DeregisterFunctionTargetsRequest.h>
#include <tencentcloud/clb/v20180317/model/DeregisterFunctionTargetsResponse.h>
#include <tencentcloud/clb/v20180317/model/DeregisterTargetGroupInstancesRequest.h>
#include <tencentcloud/clb/v20180317/model/DeregisterTargetGroupInstancesResponse.h>
#include <tencentcloud/clb/v20180317/model/DeregisterTargetsRequest.h>
#include <tencentcloud/clb/v20180317/model/DeregisterTargetsResponse.h>
#include <tencentcloud/clb/v20180317/model/DeregisterTargetsFromClassicalLBRequest.h>
#include <tencentcloud/clb/v20180317/model/DeregisterTargetsFromClassicalLBResponse.h>
#include <tencentcloud/clb/v20180317/model/DescribeBlockIPListRequest.h>
#include <tencentcloud/clb/v20180317/model/DescribeBlockIPListResponse.h>
#include <tencentcloud/clb/v20180317/model/DescribeBlockIPTaskRequest.h>
#include <tencentcloud/clb/v20180317/model/DescribeBlockIPTaskResponse.h>
#include <tencentcloud/clb/v20180317/model/DescribeClassicalLBByInstanceIdRequest.h>
#include <tencentcloud/clb/v20180317/model/DescribeClassicalLBByInstanceIdResponse.h>
#include <tencentcloud/clb/v20180317/model/DescribeClassicalLBHealthStatusRequest.h>
#include <tencentcloud/clb/v20180317/model/DescribeClassicalLBHealthStatusResponse.h>
#include <tencentcloud/clb/v20180317/model/DescribeClassicalLBListenersRequest.h>
#include <tencentcloud/clb/v20180317/model/DescribeClassicalLBListenersResponse.h>
#include <tencentcloud/clb/v20180317/model/DescribeClassicalLBTargetsRequest.h>
#include <tencentcloud/clb/v20180317/model/DescribeClassicalLBTargetsResponse.h>
#include <tencentcloud/clb/v20180317/model/DescribeClsLogSetRequest.h>
#include <tencentcloud/clb/v20180317/model/DescribeClsLogSetResponse.h>
#include <tencentcloud/clb/v20180317/model/DescribeCrossTargetsRequest.h>
#include <tencentcloud/clb/v20180317/model/DescribeCrossTargetsResponse.h>
#include <tencentcloud/clb/v20180317/model/DescribeCustomizedConfigAssociateListRequest.h>
#include <tencentcloud/clb/v20180317/model/DescribeCustomizedConfigAssociateListResponse.h>
#include <tencentcloud/clb/v20180317/model/DescribeCustomizedConfigListRequest.h>
#include <tencentcloud/clb/v20180317/model/DescribeCustomizedConfigListResponse.h>
#include <tencentcloud/clb/v20180317/model/DescribeIdleLoadBalancersRequest.h>
#include <tencentcloud/clb/v20180317/model/DescribeIdleLoadBalancersResponse.h>
#include <tencentcloud/clb/v20180317/model/DescribeLBListenersRequest.h>
#include <tencentcloud/clb/v20180317/model/DescribeLBListenersResponse.h>
#include <tencentcloud/clb/v20180317/model/DescribeListenersRequest.h>
#include <tencentcloud/clb/v20180317/model/DescribeListenersResponse.h>
#include <tencentcloud/clb/v20180317/model/DescribeLoadBalancerListByCertIdRequest.h>
#include <tencentcloud/clb/v20180317/model/DescribeLoadBalancerListByCertIdResponse.h>
#include <tencentcloud/clb/v20180317/model/DescribeLoadBalancerOverviewRequest.h>
#include <tencentcloud/clb/v20180317/model/DescribeLoadBalancerOverviewResponse.h>
#include <tencentcloud/clb/v20180317/model/DescribeLoadBalancerTrafficRequest.h>
#include <tencentcloud/clb/v20180317/model/DescribeLoadBalancerTrafficResponse.h>
#include <tencentcloud/clb/v20180317/model/DescribeLoadBalancersRequest.h>
#include <tencentcloud/clb/v20180317/model/DescribeLoadBalancersResponse.h>
#include <tencentcloud/clb/v20180317/model/DescribeLoadBalancersDetailRequest.h>
#include <tencentcloud/clb/v20180317/model/DescribeLoadBalancersDetailResponse.h>
#include <tencentcloud/clb/v20180317/model/DescribeQuotaRequest.h>
#include <tencentcloud/clb/v20180317/model/DescribeQuotaResponse.h>
#include <tencentcloud/clb/v20180317/model/DescribeResourcesRequest.h>
#include <tencentcloud/clb/v20180317/model/DescribeResourcesResponse.h>
#include <tencentcloud/clb/v20180317/model/DescribeRewriteRequest.h>
#include <tencentcloud/clb/v20180317/model/DescribeRewriteResponse.h>
#include <tencentcloud/clb/v20180317/model/DescribeTargetGroupInstancesRequest.h>
#include <tencentcloud/clb/v20180317/model/DescribeTargetGroupInstancesResponse.h>
#include <tencentcloud/clb/v20180317/model/DescribeTargetGroupListRequest.h>
#include <tencentcloud/clb/v20180317/model/DescribeTargetGroupListResponse.h>
#include <tencentcloud/clb/v20180317/model/DescribeTargetGroupsRequest.h>
#include <tencentcloud/clb/v20180317/model/DescribeTargetGroupsResponse.h>
#include <tencentcloud/clb/v20180317/model/DescribeTargetHealthRequest.h>
#include <tencentcloud/clb/v20180317/model/DescribeTargetHealthResponse.h>
#include <tencentcloud/clb/v20180317/model/DescribeTargetsRequest.h>
#include <tencentcloud/clb/v20180317/model/DescribeTargetsResponse.h>
#include <tencentcloud/clb/v20180317/model/DescribeTaskStatusRequest.h>
#include <tencentcloud/clb/v20180317/model/DescribeTaskStatusResponse.h>
#include <tencentcloud/clb/v20180317/model/DisassociateTargetGroupsRequest.h>
#include <tencentcloud/clb/v20180317/model/DisassociateTargetGroupsResponse.h>
#include <tencentcloud/clb/v20180317/model/ManualRewriteRequest.h>
#include <tencentcloud/clb/v20180317/model/ManualRewriteResponse.h>
#include <tencentcloud/clb/v20180317/model/MigrateClassicalLoadBalancersRequest.h>
#include <tencentcloud/clb/v20180317/model/MigrateClassicalLoadBalancersResponse.h>
#include <tencentcloud/clb/v20180317/model/ModifyBlockIPListRequest.h>
#include <tencentcloud/clb/v20180317/model/ModifyBlockIPListResponse.h>
#include <tencentcloud/clb/v20180317/model/ModifyDomainRequest.h>
#include <tencentcloud/clb/v20180317/model/ModifyDomainResponse.h>
#include <tencentcloud/clb/v20180317/model/ModifyDomainAttributesRequest.h>
#include <tencentcloud/clb/v20180317/model/ModifyDomainAttributesResponse.h>
#include <tencentcloud/clb/v20180317/model/ModifyFunctionTargetsRequest.h>
#include <tencentcloud/clb/v20180317/model/ModifyFunctionTargetsResponse.h>
#include <tencentcloud/clb/v20180317/model/ModifyListenerRequest.h>
#include <tencentcloud/clb/v20180317/model/ModifyListenerResponse.h>
#include <tencentcloud/clb/v20180317/model/ModifyLoadBalancerAttributesRequest.h>
#include <tencentcloud/clb/v20180317/model/ModifyLoadBalancerAttributesResponse.h>
#include <tencentcloud/clb/v20180317/model/ModifyLoadBalancerSlaRequest.h>
#include <tencentcloud/clb/v20180317/model/ModifyLoadBalancerSlaResponse.h>
#include <tencentcloud/clb/v20180317/model/ModifyRuleRequest.h>
#include <tencentcloud/clb/v20180317/model/ModifyRuleResponse.h>
#include <tencentcloud/clb/v20180317/model/ModifyTargetGroupAttributeRequest.h>
#include <tencentcloud/clb/v20180317/model/ModifyTargetGroupAttributeResponse.h>
#include <tencentcloud/clb/v20180317/model/ModifyTargetGroupInstancesPortRequest.h>
#include <tencentcloud/clb/v20180317/model/ModifyTargetGroupInstancesPortResponse.h>
#include <tencentcloud/clb/v20180317/model/ModifyTargetGroupInstancesWeightRequest.h>
#include <tencentcloud/clb/v20180317/model/ModifyTargetGroupInstancesWeightResponse.h>
#include <tencentcloud/clb/v20180317/model/ModifyTargetPortRequest.h>
#include <tencentcloud/clb/v20180317/model/ModifyTargetPortResponse.h>
#include <tencentcloud/clb/v20180317/model/ModifyTargetWeightRequest.h>
#include <tencentcloud/clb/v20180317/model/ModifyTargetWeightResponse.h>
#include <tencentcloud/clb/v20180317/model/RegisterFunctionTargetsRequest.h>
#include <tencentcloud/clb/v20180317/model/RegisterFunctionTargetsResponse.h>
#include <tencentcloud/clb/v20180317/model/RegisterTargetGroupInstancesRequest.h>
#include <tencentcloud/clb/v20180317/model/RegisterTargetGroupInstancesResponse.h>
#include <tencentcloud/clb/v20180317/model/RegisterTargetsRequest.h>
#include <tencentcloud/clb/v20180317/model/RegisterTargetsResponse.h>
#include <tencentcloud/clb/v20180317/model/RegisterTargetsWithClassicalLBRequest.h>
#include <tencentcloud/clb/v20180317/model/RegisterTargetsWithClassicalLBResponse.h>
#include <tencentcloud/clb/v20180317/model/ReplaceCertForLoadBalancersRequest.h>
#include <tencentcloud/clb/v20180317/model/ReplaceCertForLoadBalancersResponse.h>
#include <tencentcloud/clb/v20180317/model/SetCustomizedConfigForLoadBalancerRequest.h>
#include <tencentcloud/clb/v20180317/model/SetCustomizedConfigForLoadBalancerResponse.h>
#include <tencentcloud/clb/v20180317/model/SetLoadBalancerClsLogRequest.h>
#include <tencentcloud/clb/v20180317/model/SetLoadBalancerClsLogResponse.h>
#include <tencentcloud/clb/v20180317/model/SetLoadBalancerSecurityGroupsRequest.h>
#include <tencentcloud/clb/v20180317/model/SetLoadBalancerSecurityGroupsResponse.h>
#include <tencentcloud/clb/v20180317/model/SetSecurityGroupForLoadbalancersRequest.h>
#include <tencentcloud/clb/v20180317/model/SetSecurityGroupForLoadbalancersResponse.h>


namespace TencentCloud
{
    namespace Clb
    {
        namespace V20180317
        {
            class ClbClient : public AbstractClient
            {
            public:
                ClbClient(const Credential &credential, const std::string &region);
                ClbClient(const Credential &credential, const std::string &region, const ClientProfile &profile);

                typedef Outcome<Core::Error, Model::AssociateTargetGroupsResponse> AssociateTargetGroupsOutcome;
                typedef std::future<AssociateTargetGroupsOutcome> AssociateTargetGroupsOutcomeCallable;
                typedef std::function<void(const ClbClient*, const Model::AssociateTargetGroupsRequest&, AssociateTargetGroupsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> AssociateTargetGroupsAsyncHandler;
                typedef Outcome<Core::Error, Model::AutoRewriteResponse> AutoRewriteOutcome;
                typedef std::future<AutoRewriteOutcome> AutoRewriteOutcomeCallable;
                typedef std::function<void(const ClbClient*, const Model::AutoRewriteRequest&, AutoRewriteOutcome, const std::shared_ptr<const AsyncCallerContext>&)> AutoRewriteAsyncHandler;
                typedef Outcome<Core::Error, Model::BatchDeregisterTargetsResponse> BatchDeregisterTargetsOutcome;
                typedef std::future<BatchDeregisterTargetsOutcome> BatchDeregisterTargetsOutcomeCallable;
                typedef std::function<void(const ClbClient*, const Model::BatchDeregisterTargetsRequest&, BatchDeregisterTargetsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> BatchDeregisterTargetsAsyncHandler;
                typedef Outcome<Core::Error, Model::BatchModifyTargetWeightResponse> BatchModifyTargetWeightOutcome;
                typedef std::future<BatchModifyTargetWeightOutcome> BatchModifyTargetWeightOutcomeCallable;
                typedef std::function<void(const ClbClient*, const Model::BatchModifyTargetWeightRequest&, BatchModifyTargetWeightOutcome, const std::shared_ptr<const AsyncCallerContext>&)> BatchModifyTargetWeightAsyncHandler;
                typedef Outcome<Core::Error, Model::BatchRegisterTargetsResponse> BatchRegisterTargetsOutcome;
                typedef std::future<BatchRegisterTargetsOutcome> BatchRegisterTargetsOutcomeCallable;
                typedef std::function<void(const ClbClient*, const Model::BatchRegisterTargetsRequest&, BatchRegisterTargetsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> BatchRegisterTargetsAsyncHandler;
                typedef Outcome<Core::Error, Model::CloneLoadBalancerResponse> CloneLoadBalancerOutcome;
                typedef std::future<CloneLoadBalancerOutcome> CloneLoadBalancerOutcomeCallable;
                typedef std::function<void(const ClbClient*, const Model::CloneLoadBalancerRequest&, CloneLoadBalancerOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CloneLoadBalancerAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateClsLogSetResponse> CreateClsLogSetOutcome;
                typedef std::future<CreateClsLogSetOutcome> CreateClsLogSetOutcomeCallable;
                typedef std::function<void(const ClbClient*, const Model::CreateClsLogSetRequest&, CreateClsLogSetOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateClsLogSetAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateListenerResponse> CreateListenerOutcome;
                typedef std::future<CreateListenerOutcome> CreateListenerOutcomeCallable;
                typedef std::function<void(const ClbClient*, const Model::CreateListenerRequest&, CreateListenerOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateListenerAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateLoadBalancerResponse> CreateLoadBalancerOutcome;
                typedef std::future<CreateLoadBalancerOutcome> CreateLoadBalancerOutcomeCallable;
                typedef std::function<void(const ClbClient*, const Model::CreateLoadBalancerRequest&, CreateLoadBalancerOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateLoadBalancerAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateLoadBalancerSnatIpsResponse> CreateLoadBalancerSnatIpsOutcome;
                typedef std::future<CreateLoadBalancerSnatIpsOutcome> CreateLoadBalancerSnatIpsOutcomeCallable;
                typedef std::function<void(const ClbClient*, const Model::CreateLoadBalancerSnatIpsRequest&, CreateLoadBalancerSnatIpsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateLoadBalancerSnatIpsAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateRuleResponse> CreateRuleOutcome;
                typedef std::future<CreateRuleOutcome> CreateRuleOutcomeCallable;
                typedef std::function<void(const ClbClient*, const Model::CreateRuleRequest&, CreateRuleOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateRuleAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateTargetGroupResponse> CreateTargetGroupOutcome;
                typedef std::future<CreateTargetGroupOutcome> CreateTargetGroupOutcomeCallable;
                typedef std::function<void(const ClbClient*, const Model::CreateTargetGroupRequest&, CreateTargetGroupOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateTargetGroupAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateTopicResponse> CreateTopicOutcome;
                typedef std::future<CreateTopicOutcome> CreateTopicOutcomeCallable;
                typedef std::function<void(const ClbClient*, const Model::CreateTopicRequest&, CreateTopicOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateTopicAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteListenerResponse> DeleteListenerOutcome;
                typedef std::future<DeleteListenerOutcome> DeleteListenerOutcomeCallable;
                typedef std::function<void(const ClbClient*, const Model::DeleteListenerRequest&, DeleteListenerOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteListenerAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteLoadBalancerResponse> DeleteLoadBalancerOutcome;
                typedef std::future<DeleteLoadBalancerOutcome> DeleteLoadBalancerOutcomeCallable;
                typedef std::function<void(const ClbClient*, const Model::DeleteLoadBalancerRequest&, DeleteLoadBalancerOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteLoadBalancerAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteLoadBalancerListenersResponse> DeleteLoadBalancerListenersOutcome;
                typedef std::future<DeleteLoadBalancerListenersOutcome> DeleteLoadBalancerListenersOutcomeCallable;
                typedef std::function<void(const ClbClient*, const Model::DeleteLoadBalancerListenersRequest&, DeleteLoadBalancerListenersOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteLoadBalancerListenersAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteLoadBalancerSnatIpsResponse> DeleteLoadBalancerSnatIpsOutcome;
                typedef std::future<DeleteLoadBalancerSnatIpsOutcome> DeleteLoadBalancerSnatIpsOutcomeCallable;
                typedef std::function<void(const ClbClient*, const Model::DeleteLoadBalancerSnatIpsRequest&, DeleteLoadBalancerSnatIpsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteLoadBalancerSnatIpsAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteRewriteResponse> DeleteRewriteOutcome;
                typedef std::future<DeleteRewriteOutcome> DeleteRewriteOutcomeCallable;
                typedef std::function<void(const ClbClient*, const Model::DeleteRewriteRequest&, DeleteRewriteOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteRewriteAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteRuleResponse> DeleteRuleOutcome;
                typedef std::future<DeleteRuleOutcome> DeleteRuleOutcomeCallable;
                typedef std::function<void(const ClbClient*, const Model::DeleteRuleRequest&, DeleteRuleOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteRuleAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteTargetGroupsResponse> DeleteTargetGroupsOutcome;
                typedef std::future<DeleteTargetGroupsOutcome> DeleteTargetGroupsOutcomeCallable;
                typedef std::function<void(const ClbClient*, const Model::DeleteTargetGroupsRequest&, DeleteTargetGroupsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteTargetGroupsAsyncHandler;
                typedef Outcome<Core::Error, Model::DeregisterFunctionTargetsResponse> DeregisterFunctionTargetsOutcome;
                typedef std::future<DeregisterFunctionTargetsOutcome> DeregisterFunctionTargetsOutcomeCallable;
                typedef std::function<void(const ClbClient*, const Model::DeregisterFunctionTargetsRequest&, DeregisterFunctionTargetsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeregisterFunctionTargetsAsyncHandler;
                typedef Outcome<Core::Error, Model::DeregisterTargetGroupInstancesResponse> DeregisterTargetGroupInstancesOutcome;
                typedef std::future<DeregisterTargetGroupInstancesOutcome> DeregisterTargetGroupInstancesOutcomeCallable;
                typedef std::function<void(const ClbClient*, const Model::DeregisterTargetGroupInstancesRequest&, DeregisterTargetGroupInstancesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeregisterTargetGroupInstancesAsyncHandler;
                typedef Outcome<Core::Error, Model::DeregisterTargetsResponse> DeregisterTargetsOutcome;
                typedef std::future<DeregisterTargetsOutcome> DeregisterTargetsOutcomeCallable;
                typedef std::function<void(const ClbClient*, const Model::DeregisterTargetsRequest&, DeregisterTargetsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeregisterTargetsAsyncHandler;
                typedef Outcome<Core::Error, Model::DeregisterTargetsFromClassicalLBResponse> DeregisterTargetsFromClassicalLBOutcome;
                typedef std::future<DeregisterTargetsFromClassicalLBOutcome> DeregisterTargetsFromClassicalLBOutcomeCallable;
                typedef std::function<void(const ClbClient*, const Model::DeregisterTargetsFromClassicalLBRequest&, DeregisterTargetsFromClassicalLBOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeregisterTargetsFromClassicalLBAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeBlockIPListResponse> DescribeBlockIPListOutcome;
                typedef std::future<DescribeBlockIPListOutcome> DescribeBlockIPListOutcomeCallable;
                typedef std::function<void(const ClbClient*, const Model::DescribeBlockIPListRequest&, DescribeBlockIPListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeBlockIPListAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeBlockIPTaskResponse> DescribeBlockIPTaskOutcome;
                typedef std::future<DescribeBlockIPTaskOutcome> DescribeBlockIPTaskOutcomeCallable;
                typedef std::function<void(const ClbClient*, const Model::DescribeBlockIPTaskRequest&, DescribeBlockIPTaskOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeBlockIPTaskAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeClassicalLBByInstanceIdResponse> DescribeClassicalLBByInstanceIdOutcome;
                typedef std::future<DescribeClassicalLBByInstanceIdOutcome> DescribeClassicalLBByInstanceIdOutcomeCallable;
                typedef std::function<void(const ClbClient*, const Model::DescribeClassicalLBByInstanceIdRequest&, DescribeClassicalLBByInstanceIdOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeClassicalLBByInstanceIdAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeClassicalLBHealthStatusResponse> DescribeClassicalLBHealthStatusOutcome;
                typedef std::future<DescribeClassicalLBHealthStatusOutcome> DescribeClassicalLBHealthStatusOutcomeCallable;
                typedef std::function<void(const ClbClient*, const Model::DescribeClassicalLBHealthStatusRequest&, DescribeClassicalLBHealthStatusOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeClassicalLBHealthStatusAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeClassicalLBListenersResponse> DescribeClassicalLBListenersOutcome;
                typedef std::future<DescribeClassicalLBListenersOutcome> DescribeClassicalLBListenersOutcomeCallable;
                typedef std::function<void(const ClbClient*, const Model::DescribeClassicalLBListenersRequest&, DescribeClassicalLBListenersOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeClassicalLBListenersAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeClassicalLBTargetsResponse> DescribeClassicalLBTargetsOutcome;
                typedef std::future<DescribeClassicalLBTargetsOutcome> DescribeClassicalLBTargetsOutcomeCallable;
                typedef std::function<void(const ClbClient*, const Model::DescribeClassicalLBTargetsRequest&, DescribeClassicalLBTargetsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeClassicalLBTargetsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeClsLogSetResponse> DescribeClsLogSetOutcome;
                typedef std::future<DescribeClsLogSetOutcome> DescribeClsLogSetOutcomeCallable;
                typedef std::function<void(const ClbClient*, const Model::DescribeClsLogSetRequest&, DescribeClsLogSetOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeClsLogSetAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeCrossTargetsResponse> DescribeCrossTargetsOutcome;
                typedef std::future<DescribeCrossTargetsOutcome> DescribeCrossTargetsOutcomeCallable;
                typedef std::function<void(const ClbClient*, const Model::DescribeCrossTargetsRequest&, DescribeCrossTargetsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeCrossTargetsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeCustomizedConfigAssociateListResponse> DescribeCustomizedConfigAssociateListOutcome;
                typedef std::future<DescribeCustomizedConfigAssociateListOutcome> DescribeCustomizedConfigAssociateListOutcomeCallable;
                typedef std::function<void(const ClbClient*, const Model::DescribeCustomizedConfigAssociateListRequest&, DescribeCustomizedConfigAssociateListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeCustomizedConfigAssociateListAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeCustomizedConfigListResponse> DescribeCustomizedConfigListOutcome;
                typedef std::future<DescribeCustomizedConfigListOutcome> DescribeCustomizedConfigListOutcomeCallable;
                typedef std::function<void(const ClbClient*, const Model::DescribeCustomizedConfigListRequest&, DescribeCustomizedConfigListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeCustomizedConfigListAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeIdleLoadBalancersResponse> DescribeIdleLoadBalancersOutcome;
                typedef std::future<DescribeIdleLoadBalancersOutcome> DescribeIdleLoadBalancersOutcomeCallable;
                typedef std::function<void(const ClbClient*, const Model::DescribeIdleLoadBalancersRequest&, DescribeIdleLoadBalancersOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeIdleLoadBalancersAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeLBListenersResponse> DescribeLBListenersOutcome;
                typedef std::future<DescribeLBListenersOutcome> DescribeLBListenersOutcomeCallable;
                typedef std::function<void(const ClbClient*, const Model::DescribeLBListenersRequest&, DescribeLBListenersOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeLBListenersAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeListenersResponse> DescribeListenersOutcome;
                typedef std::future<DescribeListenersOutcome> DescribeListenersOutcomeCallable;
                typedef std::function<void(const ClbClient*, const Model::DescribeListenersRequest&, DescribeListenersOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeListenersAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeLoadBalancerListByCertIdResponse> DescribeLoadBalancerListByCertIdOutcome;
                typedef std::future<DescribeLoadBalancerListByCertIdOutcome> DescribeLoadBalancerListByCertIdOutcomeCallable;
                typedef std::function<void(const ClbClient*, const Model::DescribeLoadBalancerListByCertIdRequest&, DescribeLoadBalancerListByCertIdOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeLoadBalancerListByCertIdAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeLoadBalancerOverviewResponse> DescribeLoadBalancerOverviewOutcome;
                typedef std::future<DescribeLoadBalancerOverviewOutcome> DescribeLoadBalancerOverviewOutcomeCallable;
                typedef std::function<void(const ClbClient*, const Model::DescribeLoadBalancerOverviewRequest&, DescribeLoadBalancerOverviewOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeLoadBalancerOverviewAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeLoadBalancerTrafficResponse> DescribeLoadBalancerTrafficOutcome;
                typedef std::future<DescribeLoadBalancerTrafficOutcome> DescribeLoadBalancerTrafficOutcomeCallable;
                typedef std::function<void(const ClbClient*, const Model::DescribeLoadBalancerTrafficRequest&, DescribeLoadBalancerTrafficOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeLoadBalancerTrafficAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeLoadBalancersResponse> DescribeLoadBalancersOutcome;
                typedef std::future<DescribeLoadBalancersOutcome> DescribeLoadBalancersOutcomeCallable;
                typedef std::function<void(const ClbClient*, const Model::DescribeLoadBalancersRequest&, DescribeLoadBalancersOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeLoadBalancersAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeLoadBalancersDetailResponse> DescribeLoadBalancersDetailOutcome;
                typedef std::future<DescribeLoadBalancersDetailOutcome> DescribeLoadBalancersDetailOutcomeCallable;
                typedef std::function<void(const ClbClient*, const Model::DescribeLoadBalancersDetailRequest&, DescribeLoadBalancersDetailOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeLoadBalancersDetailAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeQuotaResponse> DescribeQuotaOutcome;
                typedef std::future<DescribeQuotaOutcome> DescribeQuotaOutcomeCallable;
                typedef std::function<void(const ClbClient*, const Model::DescribeQuotaRequest&, DescribeQuotaOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeQuotaAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeResourcesResponse> DescribeResourcesOutcome;
                typedef std::future<DescribeResourcesOutcome> DescribeResourcesOutcomeCallable;
                typedef std::function<void(const ClbClient*, const Model::DescribeResourcesRequest&, DescribeResourcesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeResourcesAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeRewriteResponse> DescribeRewriteOutcome;
                typedef std::future<DescribeRewriteOutcome> DescribeRewriteOutcomeCallable;
                typedef std::function<void(const ClbClient*, const Model::DescribeRewriteRequest&, DescribeRewriteOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeRewriteAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeTargetGroupInstancesResponse> DescribeTargetGroupInstancesOutcome;
                typedef std::future<DescribeTargetGroupInstancesOutcome> DescribeTargetGroupInstancesOutcomeCallable;
                typedef std::function<void(const ClbClient*, const Model::DescribeTargetGroupInstancesRequest&, DescribeTargetGroupInstancesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeTargetGroupInstancesAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeTargetGroupListResponse> DescribeTargetGroupListOutcome;
                typedef std::future<DescribeTargetGroupListOutcome> DescribeTargetGroupListOutcomeCallable;
                typedef std::function<void(const ClbClient*, const Model::DescribeTargetGroupListRequest&, DescribeTargetGroupListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeTargetGroupListAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeTargetGroupsResponse> DescribeTargetGroupsOutcome;
                typedef std::future<DescribeTargetGroupsOutcome> DescribeTargetGroupsOutcomeCallable;
                typedef std::function<void(const ClbClient*, const Model::DescribeTargetGroupsRequest&, DescribeTargetGroupsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeTargetGroupsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeTargetHealthResponse> DescribeTargetHealthOutcome;
                typedef std::future<DescribeTargetHealthOutcome> DescribeTargetHealthOutcomeCallable;
                typedef std::function<void(const ClbClient*, const Model::DescribeTargetHealthRequest&, DescribeTargetHealthOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeTargetHealthAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeTargetsResponse> DescribeTargetsOutcome;
                typedef std::future<DescribeTargetsOutcome> DescribeTargetsOutcomeCallable;
                typedef std::function<void(const ClbClient*, const Model::DescribeTargetsRequest&, DescribeTargetsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeTargetsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeTaskStatusResponse> DescribeTaskStatusOutcome;
                typedef std::future<DescribeTaskStatusOutcome> DescribeTaskStatusOutcomeCallable;
                typedef std::function<void(const ClbClient*, const Model::DescribeTaskStatusRequest&, DescribeTaskStatusOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeTaskStatusAsyncHandler;
                typedef Outcome<Core::Error, Model::DisassociateTargetGroupsResponse> DisassociateTargetGroupsOutcome;
                typedef std::future<DisassociateTargetGroupsOutcome> DisassociateTargetGroupsOutcomeCallable;
                typedef std::function<void(const ClbClient*, const Model::DisassociateTargetGroupsRequest&, DisassociateTargetGroupsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DisassociateTargetGroupsAsyncHandler;
                typedef Outcome<Core::Error, Model::ManualRewriteResponse> ManualRewriteOutcome;
                typedef std::future<ManualRewriteOutcome> ManualRewriteOutcomeCallable;
                typedef std::function<void(const ClbClient*, const Model::ManualRewriteRequest&, ManualRewriteOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ManualRewriteAsyncHandler;
                typedef Outcome<Core::Error, Model::MigrateClassicalLoadBalancersResponse> MigrateClassicalLoadBalancersOutcome;
                typedef std::future<MigrateClassicalLoadBalancersOutcome> MigrateClassicalLoadBalancersOutcomeCallable;
                typedef std::function<void(const ClbClient*, const Model::MigrateClassicalLoadBalancersRequest&, MigrateClassicalLoadBalancersOutcome, const std::shared_ptr<const AsyncCallerContext>&)> MigrateClassicalLoadBalancersAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyBlockIPListResponse> ModifyBlockIPListOutcome;
                typedef std::future<ModifyBlockIPListOutcome> ModifyBlockIPListOutcomeCallable;
                typedef std::function<void(const ClbClient*, const Model::ModifyBlockIPListRequest&, ModifyBlockIPListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyBlockIPListAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyDomainResponse> ModifyDomainOutcome;
                typedef std::future<ModifyDomainOutcome> ModifyDomainOutcomeCallable;
                typedef std::function<void(const ClbClient*, const Model::ModifyDomainRequest&, ModifyDomainOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyDomainAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyDomainAttributesResponse> ModifyDomainAttributesOutcome;
                typedef std::future<ModifyDomainAttributesOutcome> ModifyDomainAttributesOutcomeCallable;
                typedef std::function<void(const ClbClient*, const Model::ModifyDomainAttributesRequest&, ModifyDomainAttributesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyDomainAttributesAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyFunctionTargetsResponse> ModifyFunctionTargetsOutcome;
                typedef std::future<ModifyFunctionTargetsOutcome> ModifyFunctionTargetsOutcomeCallable;
                typedef std::function<void(const ClbClient*, const Model::ModifyFunctionTargetsRequest&, ModifyFunctionTargetsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyFunctionTargetsAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyListenerResponse> ModifyListenerOutcome;
                typedef std::future<ModifyListenerOutcome> ModifyListenerOutcomeCallable;
                typedef std::function<void(const ClbClient*, const Model::ModifyListenerRequest&, ModifyListenerOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyListenerAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyLoadBalancerAttributesResponse> ModifyLoadBalancerAttributesOutcome;
                typedef std::future<ModifyLoadBalancerAttributesOutcome> ModifyLoadBalancerAttributesOutcomeCallable;
                typedef std::function<void(const ClbClient*, const Model::ModifyLoadBalancerAttributesRequest&, ModifyLoadBalancerAttributesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyLoadBalancerAttributesAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyLoadBalancerSlaResponse> ModifyLoadBalancerSlaOutcome;
                typedef std::future<ModifyLoadBalancerSlaOutcome> ModifyLoadBalancerSlaOutcomeCallable;
                typedef std::function<void(const ClbClient*, const Model::ModifyLoadBalancerSlaRequest&, ModifyLoadBalancerSlaOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyLoadBalancerSlaAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyRuleResponse> ModifyRuleOutcome;
                typedef std::future<ModifyRuleOutcome> ModifyRuleOutcomeCallable;
                typedef std::function<void(const ClbClient*, const Model::ModifyRuleRequest&, ModifyRuleOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyRuleAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyTargetGroupAttributeResponse> ModifyTargetGroupAttributeOutcome;
                typedef std::future<ModifyTargetGroupAttributeOutcome> ModifyTargetGroupAttributeOutcomeCallable;
                typedef std::function<void(const ClbClient*, const Model::ModifyTargetGroupAttributeRequest&, ModifyTargetGroupAttributeOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyTargetGroupAttributeAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyTargetGroupInstancesPortResponse> ModifyTargetGroupInstancesPortOutcome;
                typedef std::future<ModifyTargetGroupInstancesPortOutcome> ModifyTargetGroupInstancesPortOutcomeCallable;
                typedef std::function<void(const ClbClient*, const Model::ModifyTargetGroupInstancesPortRequest&, ModifyTargetGroupInstancesPortOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyTargetGroupInstancesPortAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyTargetGroupInstancesWeightResponse> ModifyTargetGroupInstancesWeightOutcome;
                typedef std::future<ModifyTargetGroupInstancesWeightOutcome> ModifyTargetGroupInstancesWeightOutcomeCallable;
                typedef std::function<void(const ClbClient*, const Model::ModifyTargetGroupInstancesWeightRequest&, ModifyTargetGroupInstancesWeightOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyTargetGroupInstancesWeightAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyTargetPortResponse> ModifyTargetPortOutcome;
                typedef std::future<ModifyTargetPortOutcome> ModifyTargetPortOutcomeCallable;
                typedef std::function<void(const ClbClient*, const Model::ModifyTargetPortRequest&, ModifyTargetPortOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyTargetPortAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyTargetWeightResponse> ModifyTargetWeightOutcome;
                typedef std::future<ModifyTargetWeightOutcome> ModifyTargetWeightOutcomeCallable;
                typedef std::function<void(const ClbClient*, const Model::ModifyTargetWeightRequest&, ModifyTargetWeightOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyTargetWeightAsyncHandler;
                typedef Outcome<Core::Error, Model::RegisterFunctionTargetsResponse> RegisterFunctionTargetsOutcome;
                typedef std::future<RegisterFunctionTargetsOutcome> RegisterFunctionTargetsOutcomeCallable;
                typedef std::function<void(const ClbClient*, const Model::RegisterFunctionTargetsRequest&, RegisterFunctionTargetsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> RegisterFunctionTargetsAsyncHandler;
                typedef Outcome<Core::Error, Model::RegisterTargetGroupInstancesResponse> RegisterTargetGroupInstancesOutcome;
                typedef std::future<RegisterTargetGroupInstancesOutcome> RegisterTargetGroupInstancesOutcomeCallable;
                typedef std::function<void(const ClbClient*, const Model::RegisterTargetGroupInstancesRequest&, RegisterTargetGroupInstancesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> RegisterTargetGroupInstancesAsyncHandler;
                typedef Outcome<Core::Error, Model::RegisterTargetsResponse> RegisterTargetsOutcome;
                typedef std::future<RegisterTargetsOutcome> RegisterTargetsOutcomeCallable;
                typedef std::function<void(const ClbClient*, const Model::RegisterTargetsRequest&, RegisterTargetsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> RegisterTargetsAsyncHandler;
                typedef Outcome<Core::Error, Model::RegisterTargetsWithClassicalLBResponse> RegisterTargetsWithClassicalLBOutcome;
                typedef std::future<RegisterTargetsWithClassicalLBOutcome> RegisterTargetsWithClassicalLBOutcomeCallable;
                typedef std::function<void(const ClbClient*, const Model::RegisterTargetsWithClassicalLBRequest&, RegisterTargetsWithClassicalLBOutcome, const std::shared_ptr<const AsyncCallerContext>&)> RegisterTargetsWithClassicalLBAsyncHandler;
                typedef Outcome<Core::Error, Model::ReplaceCertForLoadBalancersResponse> ReplaceCertForLoadBalancersOutcome;
                typedef std::future<ReplaceCertForLoadBalancersOutcome> ReplaceCertForLoadBalancersOutcomeCallable;
                typedef std::function<void(const ClbClient*, const Model::ReplaceCertForLoadBalancersRequest&, ReplaceCertForLoadBalancersOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ReplaceCertForLoadBalancersAsyncHandler;
                typedef Outcome<Core::Error, Model::SetCustomizedConfigForLoadBalancerResponse> SetCustomizedConfigForLoadBalancerOutcome;
                typedef std::future<SetCustomizedConfigForLoadBalancerOutcome> SetCustomizedConfigForLoadBalancerOutcomeCallable;
                typedef std::function<void(const ClbClient*, const Model::SetCustomizedConfigForLoadBalancerRequest&, SetCustomizedConfigForLoadBalancerOutcome, const std::shared_ptr<const AsyncCallerContext>&)> SetCustomizedConfigForLoadBalancerAsyncHandler;
                typedef Outcome<Core::Error, Model::SetLoadBalancerClsLogResponse> SetLoadBalancerClsLogOutcome;
                typedef std::future<SetLoadBalancerClsLogOutcome> SetLoadBalancerClsLogOutcomeCallable;
                typedef std::function<void(const ClbClient*, const Model::SetLoadBalancerClsLogRequest&, SetLoadBalancerClsLogOutcome, const std::shared_ptr<const AsyncCallerContext>&)> SetLoadBalancerClsLogAsyncHandler;
                typedef Outcome<Core::Error, Model::SetLoadBalancerSecurityGroupsResponse> SetLoadBalancerSecurityGroupsOutcome;
                typedef std::future<SetLoadBalancerSecurityGroupsOutcome> SetLoadBalancerSecurityGroupsOutcomeCallable;
                typedef std::function<void(const ClbClient*, const Model::SetLoadBalancerSecurityGroupsRequest&, SetLoadBalancerSecurityGroupsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> SetLoadBalancerSecurityGroupsAsyncHandler;
                typedef Outcome<Core::Error, Model::SetSecurityGroupForLoadbalancersResponse> SetSecurityGroupForLoadbalancersOutcome;
                typedef std::future<SetSecurityGroupForLoadbalancersOutcome> SetSecurityGroupForLoadbalancersOutcomeCallable;
                typedef std::function<void(const ClbClient*, const Model::SetSecurityGroupForLoadbalancersRequest&, SetSecurityGroupForLoadbalancersOutcome, const std::shared_ptr<const AsyncCallerContext>&)> SetSecurityGroupForLoadbalancersAsyncHandler;



                /**
                 *This API is used to bind target groups to CLB listeners (layer-4 protocol) or forwarding rules (layer-7 protocol).
This is an async API. After it is returned successfully, you can call the `DescribeTaskStatus` API with the returned `RequestID` as an input parameter to check whether this task is successful.
                 * @param req AssociateTargetGroupsRequest
                 * @return AssociateTargetGroupsOutcome
                 */
                AssociateTargetGroupsOutcome AssociateTargetGroups(const Model::AssociateTargetGroupsRequest &request);
                void AssociateTargetGroupsAsync(const Model::AssociateTargetGroupsRequest& request, const AssociateTargetGroupsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                AssociateTargetGroupsOutcomeCallable AssociateTargetGroupsCallable(const Model::AssociateTargetGroupsRequest& request);

                /**
                 *An HTTPS:443 listener needs to be created first, along with a forwarding rule. When this API is called, an HTTP:80 listener will be created automatically if it did not exist and a forwarding rule corresponding to `Domains` (specified in the input parameter) under the HTTPS:443 listener will also be created. After successful creation, access requests to an HTTP:80 address will be redirected to an HTTPS:443 address automatically.
                 * @param req AutoRewriteRequest
                 * @return AutoRewriteOutcome
                 */
                AutoRewriteOutcome AutoRewrite(const Model::AutoRewriteRequest &request);
                void AutoRewriteAsync(const Model::AutoRewriteRequest& request, const AutoRewriteAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                AutoRewriteOutcomeCallable AutoRewriteCallable(const Model::AutoRewriteRequest& request);

                /**
                 *This API is used to batch unbind real servers of the layer-4 and layer-7 VPC-based CLBs. Up to 500 real servers can be unbound in a batch.
                 * @param req BatchDeregisterTargetsRequest
                 * @return BatchDeregisterTargetsOutcome
                 */
                BatchDeregisterTargetsOutcome BatchDeregisterTargets(const Model::BatchDeregisterTargetsRequest &request);
                void BatchDeregisterTargetsAsync(const Model::BatchDeregisterTargetsRequest& request, const BatchDeregisterTargetsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                BatchDeregisterTargetsOutcomeCallable BatchDeregisterTargetsCallable(const Model::BatchDeregisterTargetsRequest& request);

                /**
                 *This API is used to modify forwarding weights of real servers bound to CLB listeners in batches. Up to 500 servers can be unbound in a batch. As this API is async, you should check whether the task is successful by passing the RequestId returned to the API call `DescribeTaskStatus`.<br/> This API is supported by CLB layer-4 and layer-7 listeners, but not Classis CLB counterparts.

                 * @param req BatchModifyTargetWeightRequest
                 * @return BatchModifyTargetWeightOutcome
                 */
                BatchModifyTargetWeightOutcome BatchModifyTargetWeight(const Model::BatchModifyTargetWeightRequest &request);
                void BatchModifyTargetWeightAsync(const Model::BatchModifyTargetWeightRequest& request, const BatchModifyTargetWeightAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                BatchModifyTargetWeightOutcomeCallable BatchModifyTargetWeightCallable(const Model::BatchModifyTargetWeightRequest& request);

                /**
                 *This API is used to batch bind CVM instances or ENIs. Up to 500 servers can be bound in a batch. It supports cross-region binding, layer-4 and layer-7 (TCP/UDP/HTTP/HTTPS) protocols, and VPC-based CLBs only.
                 * @param req BatchRegisterTargetsRequest
                 * @return BatchRegisterTargetsOutcome
                 */
                BatchRegisterTargetsOutcome BatchRegisterTargets(const Model::BatchRegisterTargetsRequest &request);
                void BatchRegisterTargetsAsync(const Model::BatchRegisterTargetsRequest& request, const BatchRegisterTargetsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                BatchRegisterTargetsOutcomeCallable BatchRegisterTargetsCallable(const Model::BatchRegisterTargetsRequest& request);

                /**
                 *This API is used to create a clone of the source CLB instance with the same forwarding rules and binding relations. Note that this API is asynchronous, which means that changes to the source CLB after invocation of the API are not included in the clone.

Limits:
Instance attribute restrictions
  Only pay-as-you-go instances can be cloned. Monthly-subscribed instances cannot be cloned. 
  CLB instances without any billable items cannot be cloned.
  Classic CLB instances and CLB u200dinstances created for Anti-DDoS service cannot be cloned.
  Classic network-based instances cannot be cloned.
  IPv6 instances, IPv6 NAT64 instances, and instances bound with both IPv4 and IPv6 cannot be cloned.
  The following settings will not be cloned: **Custom configuration**, **Redirection configurations**, and **Allow Traffic by Default** in security groups.
  Before cloning an instance, make sure all certificates used on the instance are valid. Cloning will fail if there are any expired certificates.
Listener restrictions
  Instances with QUIC listeners or port range listeners cannot be cloned.
  Private network CLB instances with TCP_SSL listeners cannot be cloned.
  Instances with layer-7 listeners that have no forwarding rules cannot be cloned.
  u200dInstances u200dwith more than 50 listeners cannot be cloned. 
Backend service restrictions
  Instances with target groups and SCF cloud functions as the backend services cannot be cloned.

Notes:
If you are using a BGP bandwidth package, you need to pass the package ID.
To create a dedicated cluster-based CLB by cloning the source CLB, you need to pass the cluster ID. Otherwise, a normal CLB is created.
This API is only available for beta users. To try it out, [submit a ticket](https://console.cloud.tencent.com/workorder/category?level1_id=6&level2_id=163&source=0&data_title=%E8%B4%9F%E8%BD%BD%E5%9D%87%E8%A1%A1%20CLB&step=1).
                 * @param req CloneLoadBalancerRequest
                 * @return CloneLoadBalancerOutcome
                 */
                CloneLoadBalancerOutcome CloneLoadBalancer(const Model::CloneLoadBalancerRequest &request);
                void CloneLoadBalancerAsync(const Model::CloneLoadBalancerRequest& request, const CloneLoadBalancerAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CloneLoadBalancerOutcomeCallable CloneLoadBalancerCallable(const Model::CloneLoadBalancerRequest& request);

                /**
                 *This API is used to create a CLB exclusive logset for storing CLB logs.
                 * @param req CreateClsLogSetRequest
                 * @return CreateClsLogSetOutcome
                 */
                CreateClsLogSetOutcome CreateClsLogSet(const Model::CreateClsLogSetRequest &request);
                void CreateClsLogSetAsync(const Model::CreateClsLogSetRequest& request, const CreateClsLogSetAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateClsLogSetOutcomeCallable CreateClsLogSetCallable(const Model::CreateClsLogSetRequest& request);

                /**
                 *This API is used to create a listener for a CLB instance.
This is an async API. After it is returned successfully, you can call the DescribeTaskStatus API with the returned RequestId as an input parameter to check whether this task is successful.
                 * @param req CreateListenerRequest
                 * @return CreateListenerOutcome
                 */
                CreateListenerOutcome CreateListener(const Model::CreateListenerRequest &request);
                void CreateListenerAsync(const Model::CreateListenerRequest& request, const CreateListenerAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateListenerOutcomeCallable CreateListenerCallable(const Model::CreateListenerRequest& request);

                /**
                 *This API (CreateLoadBalancer) is used to create a CLB instance. To use the CLB service, you first need to purchase one or more instances. After this API is called successfully, a unique instance ID will be returned. There are two types of instances: public network and private network. For more information, see the product types in the product documentation.
Note: (1) To apply for a CLB instance in the specified AZ and cross-AZ disaster recovery, please [submit a ticket](https://console.cloud.tencent.com/workorder/category); (2) Currently, IPv6 is supported only in Beijing, Shanghai, and Guangzhou regions.
This is an async API. After it is returned successfully, you can call the DescribeLoadBalancers API to query the status of the instance (such as creating and normal) to check whether it is successfully created.
                 * @param req CreateLoadBalancerRequest
                 * @return CreateLoadBalancerOutcome
                 */
                CreateLoadBalancerOutcome CreateLoadBalancer(const Model::CreateLoadBalancerRequest &request);
                void CreateLoadBalancerAsync(const Model::CreateLoadBalancerRequest& request, const CreateLoadBalancerAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateLoadBalancerOutcomeCallable CreateLoadBalancerCallable(const Model::CreateLoadBalancerRequest& request);

                /**
                 *This API is used to add an SNAT IP for an SnatPro CLB instance. If SnatPro is not enabled for CLB, it will be automatically enabled after the SNAT IP is added.
This is an async API. After it is returned successfully, you can check the task result by calling `DescribeTaskStatus` with the returned `RequestID`.
                 * @param req CreateLoadBalancerSnatIpsRequest
                 * @return CreateLoadBalancerSnatIpsOutcome
                 */
                CreateLoadBalancerSnatIpsOutcome CreateLoadBalancerSnatIps(const Model::CreateLoadBalancerSnatIpsRequest &request);
                void CreateLoadBalancerSnatIpsAsync(const Model::CreateLoadBalancerSnatIpsRequest& request, const CreateLoadBalancerSnatIpsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateLoadBalancerSnatIpsOutcomeCallable CreateLoadBalancerSnatIpsCallable(const Model::CreateLoadBalancerSnatIpsRequest& request);

                /**
                 *This API (CreateRule) is used to create a forwarding rule under an existing layer-7 CLB listener, where real servers must be bound to the rule instead of the listener.
This is an async API. After it is returned successfully, you can call the DescribeTaskStatus API with the returned RequestID as an input parameter to check whether this task is successful.
                 * @param req CreateRuleRequest
                 * @return CreateRuleOutcome
                 */
                CreateRuleOutcome CreateRule(const Model::CreateRuleRequest &request);
                void CreateRuleAsync(const Model::CreateRuleRequest& request, const CreateRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateRuleOutcomeCallable CreateRuleCallable(const Model::CreateRuleRequest& request);

                /**
                 *This API is used to create a target group. This feature is in beta test, if you want to try it out, please [submit a ticket](https://console.cloud.tencent.com/workorder/category?level1_id=6&level2_id=163&source=0&data_title=%E8%B4%9F%E8%BD%BD%E5%9D%87%E8%A1%A1%20LB&step=1).
                 * @param req CreateTargetGroupRequest
                 * @return CreateTargetGroupOutcome
                 */
                CreateTargetGroupOutcome CreateTargetGroup(const Model::CreateTargetGroupRequest &request);
                void CreateTargetGroupAsync(const Model::CreateTargetGroupRequest& request, const CreateTargetGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateTargetGroupOutcomeCallable CreateTargetGroupCallable(const Model::CreateTargetGroupRequest& request);

                /**
                 *This API is used to create a topic with the full-text index and key-value index enabled by default. The creation will fail if there is no CLB exclusive logset.
                 * @param req CreateTopicRequest
                 * @return CreateTopicOutcome
                 */
                CreateTopicOutcome CreateTopic(const Model::CreateTopicRequest &request);
                void CreateTopicAsync(const Model::CreateTopicRequest& request, const CreateTopicAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateTopicOutcomeCallable CreateTopicCallable(const Model::CreateTopicRequest& request);

                /**
                 *This API is used to delete a listener from a CLB instance (layer-4 or layer-7).
This is an async API. After it is returned successfully, you can call the DescribeTaskStatus API with the returned RequestID as an input parameter to check whether this task is successful.
                 * @param req DeleteListenerRequest
                 * @return DeleteListenerOutcome
                 */
                DeleteListenerOutcome DeleteListener(const Model::DeleteListenerRequest &request);
                void DeleteListenerAsync(const Model::DeleteListenerRequest& request, const DeleteListenerAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteListenerOutcomeCallable DeleteListenerCallable(const Model::DeleteListenerRequest& request);

                /**
                 *This API (DeleteLoadBalancer) is used to delete one or more specified CLB instances.
This is an async API. After it is returned successfully, you can call the DescribeTaskStatus API with the returned RequestId as an input parameter to check whether this task is successful.
                 * @param req DeleteLoadBalancerRequest
                 * @return DeleteLoadBalancerOutcome
                 */
                DeleteLoadBalancerOutcome DeleteLoadBalancer(const Model::DeleteLoadBalancerRequest &request);
                void DeleteLoadBalancerAsync(const Model::DeleteLoadBalancerRequest& request, const DeleteLoadBalancerAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteLoadBalancerOutcomeCallable DeleteLoadBalancerCallable(const Model::DeleteLoadBalancerRequest& request);

                /**
                 *This API is used to delete multiple listeners of a CLB instance.
This is an async API. After it is returned successfully, you can call the `DescribeTaskStatus` API with the returned `RequestID` as an input parameter to check whether this task is successful.
                 * @param req DeleteLoadBalancerListenersRequest
                 * @return DeleteLoadBalancerListenersOutcome
                 */
                DeleteLoadBalancerListenersOutcome DeleteLoadBalancerListeners(const Model::DeleteLoadBalancerListenersRequest &request);
                void DeleteLoadBalancerListenersAsync(const Model::DeleteLoadBalancerListenersRequest& request, const DeleteLoadBalancerListenersAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteLoadBalancerListenersOutcomeCallable DeleteLoadBalancerListenersCallable(const Model::DeleteLoadBalancerListenersRequest& request);

                /**
                 *This API is used to delete the SNAT IP for an SnatPro CLB instance.
This is an async API. After it is returned successfully, you can check the task result by calling `DescribeTaskStatus` with the returned `RequestID`.
                 * @param req DeleteLoadBalancerSnatIpsRequest
                 * @return DeleteLoadBalancerSnatIpsOutcome
                 */
                DeleteLoadBalancerSnatIpsOutcome DeleteLoadBalancerSnatIps(const Model::DeleteLoadBalancerSnatIpsRequest &request);
                void DeleteLoadBalancerSnatIpsAsync(const Model::DeleteLoadBalancerSnatIpsRequest& request, const DeleteLoadBalancerSnatIpsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteLoadBalancerSnatIpsOutcomeCallable DeleteLoadBalancerSnatIpsCallable(const Model::DeleteLoadBalancerSnatIpsRequest& request);

                /**
                 *This API (DeleteRewrite) is used to delete the redirection relationship between the specified forwarding rules.
                 * @param req DeleteRewriteRequest
                 * @return DeleteRewriteOutcome
                 */
                DeleteRewriteOutcome DeleteRewrite(const Model::DeleteRewriteRequest &request);
                void DeleteRewriteAsync(const Model::DeleteRewriteRequest& request, const DeleteRewriteAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteRewriteOutcomeCallable DeleteRewriteCallable(const Model::DeleteRewriteRequest& request);

                /**
                 *This API (DeleteRule) is used to delete a forwarding rule under a layer-7 CLB instance listener
This is an async API. After it is returned successfully, you can call the DescribeTaskStatus API with the returned RequestID as an input parameter to check whether this task is successful.
                 * @param req DeleteRuleRequest
                 * @return DeleteRuleOutcome
                 */
                DeleteRuleOutcome DeleteRule(const Model::DeleteRuleRequest &request);
                void DeleteRuleAsync(const Model::DeleteRuleRequest& request, const DeleteRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteRuleOutcomeCallable DeleteRuleCallable(const Model::DeleteRuleRequest& request);

                /**
                 *This API is used to delete a target group.
                 * @param req DeleteTargetGroupsRequest
                 * @return DeleteTargetGroupsOutcome
                 */
                DeleteTargetGroupsOutcome DeleteTargetGroups(const Model::DeleteTargetGroupsRequest &request);
                void DeleteTargetGroupsAsync(const Model::DeleteTargetGroupsRequest& request, const DeleteTargetGroupsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteTargetGroupsOutcomeCallable DeleteTargetGroupsCallable(const Model::DeleteTargetGroupsRequest& request);

                /**
                 *This API is used to unbind a SCF function with a CLB forwarding rule. For L7 listeners, you need to specify the forwarding rule by using `LocationId` or `Domain+Url`. 
This is an async API. After it is returned successfully, you can call the [DescribeTaskStatus](https://intl.cloud.tencent.com/document/product/214/30683?from_cn_redirect=1) API with the returned RequestID to check whether this task is successful.
<br/>Limits: 

- Binding with SCF is only available in Guangzhou, Shenzhen Finance, Shanghai, Shanghai Finance, Beijing, Chengdu, Hong Kong (China), Singapore, Mumbai, Tokyo, and Silicon Valley.
- SCF functions can only be bound with CLB instances of bill-by-IP accounts but not with bill-by-CVM accounts. If you are using a bill-by-CVM account, we recommend upgrading it to a bill-by-IP account. For more information, please see [Checking Account Type](https://intl.cloud.tencent.com/document/product/1199/49090?from_cn_redirect=1).
- SCF functions cannot be bound with classic CLB instances.
- SCF functions cannot be bound with classic network-based CLB instances.
- SCF functions in the same region can be bound with CLB instances. SCF functions can only be bound across VPCs but not regions.
- SCF functions can only be bound with IPv4 and IPv6 NAT64 CLB instances, but currently not with IPv6 CLB instances.
- SCF functions can only be bound with layer-7 HTTP and HTTPS listeners, but not with layer-7 QUIC listeners or layer-4 (TCP, UDP, and TCP SSL) listeners.
- Only SCF event-triggered functions can be bound with CLB instances.
                 * @param req DeregisterFunctionTargetsRequest
                 * @return DeregisterFunctionTargetsOutcome
                 */
                DeregisterFunctionTargetsOutcome DeregisterFunctionTargets(const Model::DeregisterFunctionTargetsRequest &request);
                void DeregisterFunctionTargetsAsync(const Model::DeregisterFunctionTargetsRequest& request, const DeregisterFunctionTargetsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeregisterFunctionTargetsOutcomeCallable DeregisterFunctionTargetsCallable(const Model::DeregisterFunctionTargetsRequest& request);

                /**
                 *This API is used to unbind a server from a target group.
This is an async API. After it is returned successfully, you can call the API `DescribeTaskStatus` with the returned RequestId as an input parameter to check whether this task is successful.
                 * @param req DeregisterTargetGroupInstancesRequest
                 * @return DeregisterTargetGroupInstancesOutcome
                 */
                DeregisterTargetGroupInstancesOutcome DeregisterTargetGroupInstances(const Model::DeregisterTargetGroupInstancesRequest &request);
                void DeregisterTargetGroupInstancesAsync(const Model::DeregisterTargetGroupInstancesRequest& request, const DeregisterTargetGroupInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeregisterTargetGroupInstancesOutcomeCallable DeregisterTargetGroupInstancesCallable(const Model::DeregisterTargetGroupInstancesRequest& request);

                /**
                 *This API (DeregisterTargets) is used to unbind one or more real servers from a CLB listener or forwarding rule. For layer-4 listeners, only the listener ID needs to be specified. For layer-7 listeners, the forwarding rule also needs to be specified through LocationId or Domain+Url.
This is an async API. After it is returned successfully, you can call the DescribeTaskStatus API with the returned RequestID as an input parameter to check whether this task is successful.
                 * @param req DeregisterTargetsRequest
                 * @return DeregisterTargetsOutcome
                 */
                DeregisterTargetsOutcome DeregisterTargets(const Model::DeregisterTargetsRequest &request);
                void DeregisterTargetsAsync(const Model::DeregisterTargetsRequest& request, const DeregisterTargetsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeregisterTargetsOutcomeCallable DeregisterTargetsCallable(const Model::DeregisterTargetsRequest& request);

                /**
                 *This API is used to unbind a CLB real server. This is an async API. After it is returned successfully, you can call the API `DescribeTaskStatus` with the returned RequestId as an input parameter to check whether this task is successful.
                 * @param req DeregisterTargetsFromClassicalLBRequest
                 * @return DeregisterTargetsFromClassicalLBOutcome
                 */
                DeregisterTargetsFromClassicalLBOutcome DeregisterTargetsFromClassicalLB(const Model::DeregisterTargetsFromClassicalLBRequest &request);
                void DeregisterTargetsFromClassicalLBAsync(const Model::DeregisterTargetsFromClassicalLBRequest& request, const DeregisterTargetsFromClassicalLBAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeregisterTargetsFromClassicalLBOutcomeCallable DeregisterTargetsFromClassicalLBCallable(const Model::DeregisterTargetsFromClassicalLBRequest& request);

                /**
                 *This API is used to query the list of blocked IPs (blocklist) of a CLB instance. (This API is in beta test. To use it, please submit a ticket.)
                 * @param req DescribeBlockIPListRequest
                 * @return DescribeBlockIPListOutcome
                 */
                DescribeBlockIPListOutcome DescribeBlockIPList(const Model::DescribeBlockIPListRequest &request);
                void DescribeBlockIPListAsync(const Model::DescribeBlockIPListRequest& request, const DescribeBlockIPListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeBlockIPListOutcomeCallable DescribeBlockIPListCallable(const Model::DescribeBlockIPListRequest& request);

                /**
                 *This API is used to query the execution status of an async IP blocking (blocklisting) task by the async task ID returned by the `ModifyBlockIPList` API. (This API is in beta test. To use it, please submit a ticket.)
                 * @param req DescribeBlockIPTaskRequest
                 * @return DescribeBlockIPTaskOutcome
                 */
                DescribeBlockIPTaskOutcome DescribeBlockIPTask(const Model::DescribeBlockIPTaskRequest &request);
                void DescribeBlockIPTaskAsync(const Model::DescribeBlockIPTaskRequest& request, const DescribeBlockIPTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeBlockIPTaskOutcomeCallable DescribeBlockIPTaskCallable(const Model::DescribeBlockIPTaskRequest& request);

                /**
                 *This API is used to get the list of classic CLB instance IDs through a real server ID.
                 * @param req DescribeClassicalLBByInstanceIdRequest
                 * @return DescribeClassicalLBByInstanceIdOutcome
                 */
                DescribeClassicalLBByInstanceIdOutcome DescribeClassicalLBByInstanceId(const Model::DescribeClassicalLBByInstanceIdRequest &request);
                void DescribeClassicalLBByInstanceIdAsync(const Model::DescribeClassicalLBByInstanceIdRequest& request, const DescribeClassicalLBByInstanceIdAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeClassicalLBByInstanceIdOutcomeCallable DescribeClassicalLBByInstanceIdCallable(const Model::DescribeClassicalLBByInstanceIdRequest& request);

                /**
                 *This API (DescribeClassicalLBHealthStatus) is used to get the real server health status of a classic CLB
                 * @param req DescribeClassicalLBHealthStatusRequest
                 * @return DescribeClassicalLBHealthStatusOutcome
                 */
                DescribeClassicalLBHealthStatusOutcome DescribeClassicalLBHealthStatus(const Model::DescribeClassicalLBHealthStatusRequest &request);
                void DescribeClassicalLBHealthStatusAsync(const Model::DescribeClassicalLBHealthStatusRequest& request, const DescribeClassicalLBHealthStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeClassicalLBHealthStatusOutcomeCallable DescribeClassicalLBHealthStatusCallable(const Model::DescribeClassicalLBHealthStatusRequest& request);

                /**
                 *This API (DescribeClassicalLBListeners) is used to get the listener information of a classic CLB.
                 * @param req DescribeClassicalLBListenersRequest
                 * @return DescribeClassicalLBListenersOutcome
                 */
                DescribeClassicalLBListenersOutcome DescribeClassicalLBListeners(const Model::DescribeClassicalLBListenersRequest &request);
                void DescribeClassicalLBListenersAsync(const Model::DescribeClassicalLBListenersRequest& request, const DescribeClassicalLBListenersAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeClassicalLBListenersOutcomeCallable DescribeClassicalLBListenersCallable(const Model::DescribeClassicalLBListenersRequest& request);

                /**
                 *This API is used to get the real servers bound to a classic CLB instance.
                 * @param req DescribeClassicalLBTargetsRequest
                 * @return DescribeClassicalLBTargetsOutcome
                 */
                DescribeClassicalLBTargetsOutcome DescribeClassicalLBTargets(const Model::DescribeClassicalLBTargetsRequest &request);
                void DescribeClassicalLBTargetsAsync(const Model::DescribeClassicalLBTargetsRequest& request, const DescribeClassicalLBTargetsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeClassicalLBTargetsOutcomeCallable DescribeClassicalLBTargetsCallable(const Model::DescribeClassicalLBTargetsRequest& request);

                /**
                 *This API is used to get the CLB exclusive logset.
                 * @param req DescribeClsLogSetRequest
                 * @return DescribeClsLogSetOutcome
                 */
                DescribeClsLogSetOutcome DescribeClsLogSet(const Model::DescribeClsLogSetRequest &request);
                void DescribeClsLogSetAsync(const Model::DescribeClsLogSetRequest& request, const DescribeClsLogSetAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeClsLogSetOutcomeCallable DescribeClsLogSetCallable(const Model::DescribeClsLogSetRequest& request);

                /**
                 *Queries information of CVMs and ENIs that use cross-region binding 2.0
                 * @param req DescribeCrossTargetsRequest
                 * @return DescribeCrossTargetsOutcome
                 */
                DescribeCrossTargetsOutcome DescribeCrossTargets(const Model::DescribeCrossTargetsRequest &request);
                void DescribeCrossTargetsAsync(const Model::DescribeCrossTargetsRequest& request, const DescribeCrossTargetsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeCrossTargetsOutcomeCallable DescribeCrossTargetsCallable(const Model::DescribeCrossTargetsRequest& request);

                /**
                 *This API is used to query the configured location, bound server or bound CLB instance. If there are domain names, the result will be filtered by domain name.
                 * @param req DescribeCustomizedConfigAssociateListRequest
                 * @return DescribeCustomizedConfigAssociateListOutcome
                 */
                DescribeCustomizedConfigAssociateListOutcome DescribeCustomizedConfigAssociateList(const Model::DescribeCustomizedConfigAssociateListRequest &request);
                void DescribeCustomizedConfigAssociateListAsync(const Model::DescribeCustomizedConfigAssociateListRequest& request, const DescribeCustomizedConfigAssociateListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeCustomizedConfigAssociateListOutcomeCallable DescribeCustomizedConfigAssociateListCallable(const Model::DescribeCustomizedConfigAssociateListRequest& request);

                /**
                 *This API is used to pull custom configuration lists to return the user configuration of `AppId`.
                 * @param req DescribeCustomizedConfigListRequest
                 * @return DescribeCustomizedConfigListOutcome
                 */
                DescribeCustomizedConfigListOutcome DescribeCustomizedConfigList(const Model::DescribeCustomizedConfigListRequest &request);
                void DescribeCustomizedConfigListAsync(const Model::DescribeCustomizedConfigListRequest& request, const DescribeCustomizedConfigListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeCustomizedConfigListOutcomeCallable DescribeCustomizedConfigListCallable(const Model::DescribeCustomizedConfigListRequest& request);

                /**
                 *Idle CLB instances are pay-as-you-go load balancers that, within seven days after the creation, do not have rules configured or the configured rules are not associated with any servers. 
                 * @param req DescribeIdleLoadBalancersRequest
                 * @return DescribeIdleLoadBalancersOutcome
                 */
                DescribeIdleLoadBalancersOutcome DescribeIdleLoadBalancers(const Model::DescribeIdleLoadBalancersRequest &request);
                void DescribeIdleLoadBalancersAsync(const Model::DescribeIdleLoadBalancersRequest& request, const DescribeIdleLoadBalancersAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeIdleLoadBalancersOutcomeCallable DescribeIdleLoadBalancersCallable(const Model::DescribeIdleLoadBalancersRequest& request);

                /**
                 *This API is used to query CLB instances bound to the CVM or ENI.
                 * @param req DescribeLBListenersRequest
                 * @return DescribeLBListenersOutcome
                 */
                DescribeLBListenersOutcome DescribeLBListeners(const Model::DescribeLBListenersRequest &request);
                void DescribeLBListenersAsync(const Model::DescribeLBListenersRequest& request, const DescribeLBListenersAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeLBListenersOutcomeCallable DescribeLBListenersCallable(const Model::DescribeLBListenersRequest& request);

                /**
                 *This API is used to get the list of listeners by CLB ID, listener protocol, or listener port. If no filter is specified, all listeners for the CLB instance will be returned.
                 * @param req DescribeListenersRequest
                 * @return DescribeListenersOutcome
                 */
                DescribeListenersOutcome DescribeListeners(const Model::DescribeListenersRequest &request);
                void DescribeListenersAsync(const Model::DescribeListenersRequest& request, const DescribeListenersAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeListenersOutcomeCallable DescribeListenersCallable(const Model::DescribeListenersRequest& request);

                /**
                 *This API is used to query the list of CLB instances associated with a certificate in a region by certificate ID.
                 * @param req DescribeLoadBalancerListByCertIdRequest
                 * @return DescribeLoadBalancerListByCertIdOutcome
                 */
                DescribeLoadBalancerListByCertIdOutcome DescribeLoadBalancerListByCertId(const Model::DescribeLoadBalancerListByCertIdRequest &request);
                void DescribeLoadBalancerListByCertIdAsync(const Model::DescribeLoadBalancerListByCertIdRequest& request, const DescribeLoadBalancerListByCertIdAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeLoadBalancerListByCertIdOutcomeCallable DescribeLoadBalancerListByCertIdCallable(const Model::DescribeLoadBalancerListByCertIdRequest& request);

                /**
                 *Queries the total number of CLB instances and the number of CLB instances in different status (running, isolated and about to expire).
                 * @param req DescribeLoadBalancerOverviewRequest
                 * @return DescribeLoadBalancerOverviewOutcome
                 */
                DescribeLoadBalancerOverviewOutcome DescribeLoadBalancerOverview(const Model::DescribeLoadBalancerOverviewRequest &request);
                void DescribeLoadBalancerOverviewAsync(const Model::DescribeLoadBalancerOverviewRequest& request, const DescribeLoadBalancerOverviewAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeLoadBalancerOverviewOutcomeCallable DescribeLoadBalancerOverviewCallable(const Model::DescribeLoadBalancerOverviewRequest& request);

                /**
                 *This API is used to query CLB instances with high traffic under the current account, and return the top 10 results. For queries using a sub-account, only the CLB instances authorized to the sub-account will be returned.
                 * @param req DescribeLoadBalancerTrafficRequest
                 * @return DescribeLoadBalancerTrafficOutcome
                 */
                DescribeLoadBalancerTrafficOutcome DescribeLoadBalancerTraffic(const Model::DescribeLoadBalancerTrafficRequest &request);
                void DescribeLoadBalancerTrafficAsync(const Model::DescribeLoadBalancerTrafficRequest& request, const DescribeLoadBalancerTrafficAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeLoadBalancerTrafficOutcomeCallable DescribeLoadBalancerTrafficCallable(const Model::DescribeLoadBalancerTrafficRequest& request);

                /**
                 *This API is used to query the list of CLB instances in a region.
                 * @param req DescribeLoadBalancersRequest
                 * @return DescribeLoadBalancersOutcome
                 */
                DescribeLoadBalancersOutcome DescribeLoadBalancers(const Model::DescribeLoadBalancersRequest &request);
                void DescribeLoadBalancersAsync(const Model::DescribeLoadBalancersRequest& request, const DescribeLoadBalancersAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeLoadBalancersOutcomeCallable DescribeLoadBalancersCallable(const Model::DescribeLoadBalancersRequest& request);

                /**
                 *This API is used to query CLB instance details, including listener, rules, and target real servers.
                 * @param req DescribeLoadBalancersDetailRequest
                 * @return DescribeLoadBalancersDetailOutcome
                 */
                DescribeLoadBalancersDetailOutcome DescribeLoadBalancersDetail(const Model::DescribeLoadBalancersDetailRequest &request);
                void DescribeLoadBalancersDetailAsync(const Model::DescribeLoadBalancersDetailRequest& request, const DescribeLoadBalancersDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeLoadBalancersDetailOutcomeCallable DescribeLoadBalancersDetailCallable(const Model::DescribeLoadBalancersDetailRequest& request);

                /**
                 *This API is used to query various quotas in the current region.
                 * @param req DescribeQuotaRequest
                 * @return DescribeQuotaOutcome
                 */
                DescribeQuotaOutcome DescribeQuota(const Model::DescribeQuotaRequest &request);
                void DescribeQuotaAsync(const Model::DescribeQuotaRequest& request, const DescribeQuotaAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeQuotaOutcomeCallable DescribeQuotaCallable(const Model::DescribeQuotaRequest& request);

                /**
                 *This API is used to query the list of AZs and resources supported for the user in the current region.
                 * @param req DescribeResourcesRequest
                 * @return DescribeResourcesOutcome
                 */
                DescribeResourcesOutcome DescribeResources(const Model::DescribeResourcesRequest &request);
                void DescribeResourcesAsync(const Model::DescribeResourcesRequest& request, const DescribeResourcesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeResourcesOutcomeCallable DescribeResourcesCallable(const Model::DescribeResourcesRequest& request);

                /**
                 *This API (DescribeRewrite) is used to query the redirection relationship between the forwarding rules of a CLB instance by instance ID. If no listener ID or forwarding rule ID is specified, all redirection relationships in the instance will be returned.
                 * @param req DescribeRewriteRequest
                 * @return DescribeRewriteOutcome
                 */
                DescribeRewriteOutcome DescribeRewrite(const Model::DescribeRewriteRequest &request);
                void DescribeRewriteAsync(const Model::DescribeRewriteRequest& request, const DescribeRewriteAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeRewriteOutcomeCallable DescribeRewriteCallable(const Model::DescribeRewriteRequest& request);

                /**
                 *This API is used to get the information of servers bound to a target group.
                 * @param req DescribeTargetGroupInstancesRequest
                 * @return DescribeTargetGroupInstancesOutcome
                 */
                DescribeTargetGroupInstancesOutcome DescribeTargetGroupInstances(const Model::DescribeTargetGroupInstancesRequest &request);
                void DescribeTargetGroupInstancesAsync(const Model::DescribeTargetGroupInstancesRequest& request, const DescribeTargetGroupInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeTargetGroupInstancesOutcomeCallable DescribeTargetGroupInstancesCallable(const Model::DescribeTargetGroupInstancesRequest& request);

                /**
                 *This API is used to get the target group list.
                 * @param req DescribeTargetGroupListRequest
                 * @return DescribeTargetGroupListOutcome
                 */
                DescribeTargetGroupListOutcome DescribeTargetGroupList(const Model::DescribeTargetGroupListRequest &request);
                void DescribeTargetGroupListAsync(const Model::DescribeTargetGroupListRequest& request, const DescribeTargetGroupListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeTargetGroupListOutcomeCallable DescribeTargetGroupListCallable(const Model::DescribeTargetGroupListRequest& request);

                /**
                 *This API is used to query the target group information.
                 * @param req DescribeTargetGroupsRequest
                 * @return DescribeTargetGroupsOutcome
                 */
                DescribeTargetGroupsOutcome DescribeTargetGroups(const Model::DescribeTargetGroupsRequest &request);
                void DescribeTargetGroupsAsync(const Model::DescribeTargetGroupsRequest& request, const DescribeTargetGroupsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeTargetGroupsOutcomeCallable DescribeTargetGroupsCallable(const Model::DescribeTargetGroupsRequest& request);

                /**
                 *This API (DescribeTargetHealth) is used to query the health check result of a real server of a CLB instance.
                 * @param req DescribeTargetHealthRequest
                 * @return DescribeTargetHealthOutcome
                 */
                DescribeTargetHealthOutcome DescribeTargetHealth(const Model::DescribeTargetHealthRequest &request);
                void DescribeTargetHealthAsync(const Model::DescribeTargetHealthRequest& request, const DescribeTargetHealthAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeTargetHealthOutcomeCallable DescribeTargetHealthCallable(const Model::DescribeTargetHealthRequest& request);

                /**
                 *This API (DescribeTargets) is used to query the list of real servers bound to some listeners of a CLB instance.
                 * @param req DescribeTargetsRequest
                 * @return DescribeTargetsOutcome
                 */
                DescribeTargetsOutcome DescribeTargets(const Model::DescribeTargetsRequest &request);
                void DescribeTargetsAsync(const Model::DescribeTargetsRequest& request, const DescribeTargetsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeTargetsOutcomeCallable DescribeTargetsCallable(const Model::DescribeTargetsRequest& request);

                /**
                 *This API is used to query the execution status of an async task. After non-query APIs (used to create/delete CLB instances, listeners, or rules or to bind/unbind real servers) are called successfully, this API needs to be used to query whether the task is successful.
                 * @param req DescribeTaskStatusRequest
                 * @return DescribeTaskStatusOutcome
                 */
                DescribeTaskStatusOutcome DescribeTaskStatus(const Model::DescribeTaskStatusRequest &request);
                void DescribeTaskStatusAsync(const Model::DescribeTaskStatusRequest& request, const DescribeTaskStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeTaskStatusOutcomeCallable DescribeTaskStatusCallable(const Model::DescribeTaskStatusRequest& request);

                /**
                 *This API is used to unbind target groups from a rule.
This is an async API. After it is returned successfully, you can call the `DescribeTaskStatus` API with the returned `RequestID` as an input parameter to check whether this task is successful.
                 * @param req DisassociateTargetGroupsRequest
                 * @return DisassociateTargetGroupsOutcome
                 */
                DisassociateTargetGroupsOutcome DisassociateTargetGroups(const Model::DisassociateTargetGroupsRequest &request);
                void DisassociateTargetGroupsAsync(const Model::DisassociateTargetGroupsRequest& request, const DisassociateTargetGroupsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DisassociateTargetGroupsOutcomeCallable DisassociateTargetGroupsCallable(const Model::DisassociateTargetGroupsRequest& request);

                /**
                 *After the original access address and the address to be redirected are configured manually, the system will automatically redirect requests made to the original access address to the target address of the corresponding path. Multiple paths can be configured as a redirection policy under one domain name to achieve automatic redirection between HTTP and HTTPS. A redirection policy should meet the following rules: if A has already been redirected to B, then it cannot be redirected to C (unless the original redirection relationship is deleted and a new one is created), and B cannot be redirected to any other addresses.
                 * @param req ManualRewriteRequest
                 * @return ManualRewriteOutcome
                 */
                ManualRewriteOutcome ManualRewrite(const Model::ManualRewriteRequest &request);
                void ManualRewriteAsync(const Model::ManualRewriteRequest& request, const ManualRewriteAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ManualRewriteOutcomeCallable ManualRewriteCallable(const Model::ManualRewriteRequest& request);

                /**
                 *This API is used to upgrade classic CLB instances to application CLB instances.
This is an async API. After it is returned successfully, you can check the action result by calling `DescribeLoadBalancers`. 
                 * @param req MigrateClassicalLoadBalancersRequest
                 * @return MigrateClassicalLoadBalancersOutcome
                 */
                MigrateClassicalLoadBalancersOutcome MigrateClassicalLoadBalancers(const Model::MigrateClassicalLoadBalancersRequest &request);
                void MigrateClassicalLoadBalancersAsync(const Model::MigrateClassicalLoadBalancersRequest& request, const MigrateClassicalLoadBalancersAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                MigrateClassicalLoadBalancersOutcomeCallable MigrateClassicalLoadBalancersCallable(const Model::MigrateClassicalLoadBalancersRequest& request);

                /**
                 *This API is used to modify the client IP blocklist of a CLB instance. One forwarding rule supports blocking up to 2,000,000 IPs. One blocklist can contain up to 2,000,000 entries.
(This API is in beta test. To use it, please submit a ticket.)
                 * @param req ModifyBlockIPListRequest
                 * @return ModifyBlockIPListOutcome
                 */
                ModifyBlockIPListOutcome ModifyBlockIPList(const Model::ModifyBlockIPListRequest &request);
                void ModifyBlockIPListAsync(const Model::ModifyBlockIPListRequest& request, const ModifyBlockIPListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyBlockIPListOutcomeCallable ModifyBlockIPListCallable(const Model::ModifyBlockIPListRequest& request);

                /**
                 *This API (ModifyDomain) is used to modify a domain name under a layer-7 CLB listener.
This is an async API. After it is returned successfully, you can call the DescribeTaskStatus API with the returned RequestID as an input parameter to check whether this task is successful.
                 * @param req ModifyDomainRequest
                 * @return ModifyDomainOutcome
                 */
                ModifyDomainOutcome ModifyDomain(const Model::ModifyDomainRequest &request);
                void ModifyDomainAsync(const Model::ModifyDomainRequest& request, const ModifyDomainAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyDomainOutcomeCallable ModifyDomainCallable(const Model::ModifyDomainRequest& request);

                /**
                 *This API is used to modify the domain name-level attributes of a layer-7 listener's forwarding rule, such as modifying the domain name, changing the DefaultServer, enabling/disabling HTTP/2, and modifying certificates.
This is an async API. After it is returned successfully, you can call the DescribeTaskStatus API with the returned RequestId as an input parameter to check whether this task is successful.
                 * @param req ModifyDomainAttributesRequest
                 * @return ModifyDomainAttributesOutcome
                 */
                ModifyDomainAttributesOutcome ModifyDomainAttributes(const Model::ModifyDomainAttributesRequest &request);
                void ModifyDomainAttributesAsync(const Model::ModifyDomainAttributesRequest& request, const ModifyDomainAttributesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyDomainAttributesOutcomeCallable ModifyDomainAttributesCallable(const Model::ModifyDomainAttributesRequest& request);

                /**
                 *This API is used to modify the cloud functions associated with a load balancing forwarding rule.
                 * @param req ModifyFunctionTargetsRequest
                 * @return ModifyFunctionTargetsOutcome
                 */
                ModifyFunctionTargetsOutcome ModifyFunctionTargets(const Model::ModifyFunctionTargetsRequest &request);
                void ModifyFunctionTargetsAsync(const Model::ModifyFunctionTargetsRequest& request, const ModifyFunctionTargetsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyFunctionTargetsOutcomeCallable ModifyFunctionTargetsCallable(const Model::ModifyFunctionTargetsRequest& request);

                /**
                 *This API (ModifyListener) is used to modify the attributes of a CLB listener, such as listener name, health check parameter, certificate information, and forwarding policy.
This is an async API. After it is returned successfully, you can call the DescribeTaskStatus API with the returned RequestID as an input parameter to check whether this task is successful.
                 * @param req ModifyListenerRequest
                 * @return ModifyListenerOutcome
                 */
                ModifyListenerOutcome ModifyListener(const Model::ModifyListenerRequest &request);
                void ModifyListenerAsync(const Model::ModifyListenerRequest& request, const ModifyListenerAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyListenerOutcomeCallable ModifyListenerCallable(const Model::ModifyListenerRequest& request);

                /**
                 *This API is used to modify the attributes of a CLB instance such as name and cross-region attributes.
This is an async API. After it is returned successfully, you can check the task result by calling `DescribeTaskStatus` with the returned `RequestID`.
                 * @param req ModifyLoadBalancerAttributesRequest
                 * @return ModifyLoadBalancerAttributesOutcome
                 */
                ModifyLoadBalancerAttributesOutcome ModifyLoadBalancerAttributes(const Model::ModifyLoadBalancerAttributesRequest &request);
                void ModifyLoadBalancerAttributesAsync(const Model::ModifyLoadBalancerAttributesRequest& request, const ModifyLoadBalancerAttributesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyLoadBalancerAttributesOutcomeCallable ModifyLoadBalancerAttributesCallable(const Model::ModifyLoadBalancerAttributesRequest& request);

                /**
                 *This API is used to upgrade a pay-as-you-go shared CLB instance to an LCU-supported CLB instance. <br/>
Limits
- This API can only be used to upgrade pay-as-you-go shared instances. To upgrade monthly-subscribed shared instances, please go to the CLB console.
- An LCU-supported instance cannot be changed back to a shared instance.
- Classic CLB instances cannot be upgraded to LCU-supported instances.
                 * @param req ModifyLoadBalancerSlaRequest
                 * @return ModifyLoadBalancerSlaOutcome
                 */
                ModifyLoadBalancerSlaOutcome ModifyLoadBalancerSla(const Model::ModifyLoadBalancerSlaRequest &request);
                void ModifyLoadBalancerSlaAsync(const Model::ModifyLoadBalancerSlaRequest& request, const ModifyLoadBalancerSlaAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyLoadBalancerSlaOutcomeCallable ModifyLoadBalancerSlaCallable(const Model::ModifyLoadBalancerSlaRequest& request);

                /**
                 *This API (ModifyRule) is used to modify the attributes of a forwarding rule under a layer-7 CLB listener, such as forwarding path, health check attribute, and forwarding policy.
This is an async API. After it is returned successfully, you can call the DescribeTaskStatus API with the returned RequestID as an input parameter to check whether this task is successful.
                 * @param req ModifyRuleRequest
                 * @return ModifyRuleOutcome
                 */
                ModifyRuleOutcome ModifyRule(const Model::ModifyRuleRequest &request);
                void ModifyRuleAsync(const Model::ModifyRuleRequest& request, const ModifyRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyRuleOutcomeCallable ModifyRuleCallable(const Model::ModifyRuleRequest& request);

                /**
                 *This API is used to rename a target group or modify its default port attribute.
                 * @param req ModifyTargetGroupAttributeRequest
                 * @return ModifyTargetGroupAttributeOutcome
                 */
                ModifyTargetGroupAttributeOutcome ModifyTargetGroupAttribute(const Model::ModifyTargetGroupAttributeRequest &request);
                void ModifyTargetGroupAttributeAsync(const Model::ModifyTargetGroupAttributeRequest& request, const ModifyTargetGroupAttributeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyTargetGroupAttributeOutcomeCallable ModifyTargetGroupAttributeCallable(const Model::ModifyTargetGroupAttributeRequest& request);

                /**
                 *This API is used to modify server ports of a target group in batches.
This is an async API. After it is returned successfully, you can call the `DescribeTaskStatus` API with the returned `RequestID` as an input parameter to check whether this task is successful.
                 * @param req ModifyTargetGroupInstancesPortRequest
                 * @return ModifyTargetGroupInstancesPortOutcome
                 */
                ModifyTargetGroupInstancesPortOutcome ModifyTargetGroupInstancesPort(const Model::ModifyTargetGroupInstancesPortRequest &request);
                void ModifyTargetGroupInstancesPortAsync(const Model::ModifyTargetGroupInstancesPortRequest& request, const ModifyTargetGroupInstancesPortAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyTargetGroupInstancesPortOutcomeCallable ModifyTargetGroupInstancesPortCallable(const Model::ModifyTargetGroupInstancesPortRequest& request);

                /**
                 *This API is used to modify server weights of a target group in batches.
This is an async API. After it is returned successfully, you can call the `DescribeTaskStatus` API with the returned `RequestID` as an input parameter to check whether this task is successful.
                 * @param req ModifyTargetGroupInstancesWeightRequest
                 * @return ModifyTargetGroupInstancesWeightOutcome
                 */
                ModifyTargetGroupInstancesWeightOutcome ModifyTargetGroupInstancesWeight(const Model::ModifyTargetGroupInstancesWeightRequest &request);
                void ModifyTargetGroupInstancesWeightAsync(const Model::ModifyTargetGroupInstancesWeightRequest& request, const ModifyTargetGroupInstancesWeightAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyTargetGroupInstancesWeightOutcomeCallable ModifyTargetGroupInstancesWeightCallable(const Model::ModifyTargetGroupInstancesWeightRequest& request);

                /**
                 *This API (ModifyTargetPort) is used to modify the port of a real server bound to a listener.
This is an async API. After it is returned successfully, you can call the DescribeTaskStatus API with the returned RequestID as an input parameter to check whether this task is successful.
                 * @param req ModifyTargetPortRequest
                 * @return ModifyTargetPortOutcome
                 */
                ModifyTargetPortOutcome ModifyTargetPort(const Model::ModifyTargetPortRequest &request);
                void ModifyTargetPortAsync(const Model::ModifyTargetPortRequest& request, const ModifyTargetPortAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyTargetPortOutcomeCallable ModifyTargetPortCallable(const Model::ModifyTargetPortRequest& request);

                /**
                 *This API (ModifyTargetWeight) is used to modify the forwarding weight of a real server bound to a CLB instance.
This is an async API. After it is returned successfully, you can call the DescribeTaskStatus API with the returned RequestID as an input parameter to check whether this task is successful.
                 * @param req ModifyTargetWeightRequest
                 * @return ModifyTargetWeightOutcome
                 */
                ModifyTargetWeightOutcome ModifyTargetWeight(const Model::ModifyTargetWeightRequest &request);
                void ModifyTargetWeightAsync(const Model::ModifyTargetWeightRequest& request, const ModifyTargetWeightAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyTargetWeightOutcomeCallable ModifyTargetWeightCallable(const Model::ModifyTargetWeightRequest& request);

                /**
                 *This API is used to bind an SCF function with the L7 forwarding rule of a CLB instance. Note that you need to create an L7 listener (HTTP, HTTPS) and forwarding rule first.
This is an async API. After it is returned successfully, you can call the `DescribeTaskStatus` API with the returned `RequestID` as an input parameter to check whether this task is successful.<br/>
**Limits:**
- Binding with SCF is only available in Guangzhou, Shenzhen Finance, Shanghai, Shanghai Finance, Beijing, Chengdu, Hong Kong (China), Singapore, Mumbai, Tokyo, and Silicon Valley.
- SCF functions can only be bound with CLB instances of bill-by-IP accounts but not with bill-by-CVM accounts. If you are using a bill-by-CVM account, we recommend upgrading it to a bill-by-IP account. For more information, please see [Checking Account Type](https://intl.cloud.tencent.com/document/product/1199/49090?from_cn_redirect=1). 
- SCF functions cannot be bound with classic CLB instances.
- SCF functions cannot be bound with classic network-based CLB instances.
- SCF functions in the same region can be bound with CLB instances. SCF functions can only be bound across VPCs but not regions.
- SCF functions can only be bound with IPv4 and IPv6 NAT64 CLB instances, but currently not with IPv6 CLB instances.
- SCF functions can only be bound with layer-7 HTTP and HTTPS listeners, but not with layer-7 QUIC listeners or layer-4 (TCP, UDP, and TCP SSL) listeners.
- Only SCF event-triggered functions can be bound with CLB instances.
                 * @param req RegisterFunctionTargetsRequest
                 * @return RegisterFunctionTargetsOutcome
                 */
                RegisterFunctionTargetsOutcome RegisterFunctionTargets(const Model::RegisterFunctionTargetsRequest &request);
                void RegisterFunctionTargetsAsync(const Model::RegisterFunctionTargetsRequest& request, const RegisterFunctionTargetsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                RegisterFunctionTargetsOutcomeCallable RegisterFunctionTargetsCallable(const Model::RegisterFunctionTargetsRequest& request);

                /**
                 *This API is used to register servers to a target group.
This is an async API. After it is returned successfully, you can call the `DescribeTaskStatus` API with the returned `RequestID` as an input parameter to check whether this task is successful.
                 * @param req RegisterTargetGroupInstancesRequest
                 * @return RegisterTargetGroupInstancesOutcome
                 */
                RegisterTargetGroupInstancesOutcome RegisterTargetGroupInstances(const Model::RegisterTargetGroupInstancesRequest &request);
                void RegisterTargetGroupInstancesAsync(const Model::RegisterTargetGroupInstancesRequest& request, const RegisterTargetGroupInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                RegisterTargetGroupInstancesOutcomeCallable RegisterTargetGroupInstancesCallable(const Model::RegisterTargetGroupInstancesRequest& request);

                /**
                 *This API (RegisterTargets) is used to bind one or more real servers to a CLB listener or layer-7 forwarding rule. Before using this API, you need to create relevant layer-4 listeners or layer-7 forwarding rules. For the former (TCP/UDP), only the listener ID needs to be specified, while for the latter (HTTP/HTTPS), the forwarding rule also needs to be specified through LocationId or Domain+Url.
This is an async API. After it is returned successfully, you can call the DescribeTaskStatus API with the returned RequestID as an input parameter to check whether this task is successful.
                 * @param req RegisterTargetsRequest
                 * @return RegisterTargetsOutcome
                 */
                RegisterTargetsOutcome RegisterTargets(const Model::RegisterTargetsRequest &request);
                void RegisterTargetsAsync(const Model::RegisterTargetsRequest& request, const RegisterTargetsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                RegisterTargetsOutcomeCallable RegisterTargetsCallable(const Model::RegisterTargetsRequest& request);

                /**
                 *This API is used to bind a real server with a classic CLB instance. This is an async API. After it is returned successfully, you can call the API `DescribeTaskStatus` with the returned RequestId as an input parameter to check whether this task is successful.
                 * @param req RegisterTargetsWithClassicalLBRequest
                 * @return RegisterTargetsWithClassicalLBOutcome
                 */
                RegisterTargetsWithClassicalLBOutcome RegisterTargetsWithClassicalLB(const Model::RegisterTargetsWithClassicalLBRequest &request);
                void RegisterTargetsWithClassicalLBAsync(const Model::RegisterTargetsWithClassicalLBRequest& request, const RegisterTargetsWithClassicalLBAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                RegisterTargetsWithClassicalLBOutcomeCallable RegisterTargetsWithClassicalLBCallable(const Model::RegisterTargetsWithClassicalLBRequest& request);

                /**
                 *This API (ReplaceCertForLoadBalancers) is used to replace the certificate associated with a CLB instance. A new certificates can be associated with a CLB only after the original certificate is disassociated from it.
This API supports replacing server certificates and client certificates.
The new certificate to be used can be specified by passing in the certificate ID. If no certificate ID is specified, relevant information such as certificate content must be passed in to create a new certificate and bind it to the CLB.
Note: This API can only be called in the Guangzhou region; for other regions, an error will occur due to domain name resolution problems.
                 * @param req ReplaceCertForLoadBalancersRequest
                 * @return ReplaceCertForLoadBalancersOutcome
                 */
                ReplaceCertForLoadBalancersOutcome ReplaceCertForLoadBalancers(const Model::ReplaceCertForLoadBalancersRequest &request);
                void ReplaceCertForLoadBalancersAsync(const Model::ReplaceCertForLoadBalancersRequest& request, const ReplaceCertForLoadBalancersAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ReplaceCertForLoadBalancersOutcomeCallable ReplaceCertForLoadBalancersCallable(const Model::ReplaceCertForLoadBalancersRequest& request);

                /**
                 *This API is used to create or manage a user-defined CLB configuration template.
                 * @param req SetCustomizedConfigForLoadBalancerRequest
                 * @return SetCustomizedConfigForLoadBalancerOutcome
                 */
                SetCustomizedConfigForLoadBalancerOutcome SetCustomizedConfigForLoadBalancer(const Model::SetCustomizedConfigForLoadBalancerRequest &request);
                void SetCustomizedConfigForLoadBalancerAsync(const Model::SetCustomizedConfigForLoadBalancerRequest& request, const SetCustomizedConfigForLoadBalancerAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                SetCustomizedConfigForLoadBalancerOutcomeCallable SetCustomizedConfigForLoadBalancerCallable(const Model::SetCustomizedConfigForLoadBalancerRequest& request);

                /**
                 *This API is used to add, delete, and update the CLS topic of a CLB instance.
                 * @param req SetLoadBalancerClsLogRequest
                 * @return SetLoadBalancerClsLogOutcome
                 */
                SetLoadBalancerClsLogOutcome SetLoadBalancerClsLog(const Model::SetLoadBalancerClsLogRequest &request);
                void SetLoadBalancerClsLogAsync(const Model::SetLoadBalancerClsLogRequest& request, const SetLoadBalancerClsLogAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                SetLoadBalancerClsLogOutcomeCallable SetLoadBalancerClsLogCallable(const Model::SetLoadBalancerClsLogRequest& request);

                /**
                 *This API (SetLoadBalancerSecurityGroups) is used to bind/unbind security groups for a public network CLB instance. You can use the DescribeLoadBalancers API to query the security groups bound to a CLB instance. This API uses `set` semantics.
During a binding operation, the input parameters need to be all security groups to be bound to the CLB instance (including those already bound ones and new ones).
During an unbinding operation, the input parameters need to be all the security groups still bound to the CLB instance after the unbinding operation. To unbind all security groups, you can leave this parameter empty or pass in an empty array. Note: Private network CLB do not support binding security groups.
                 * @param req SetLoadBalancerSecurityGroupsRequest
                 * @return SetLoadBalancerSecurityGroupsOutcome
                 */
                SetLoadBalancerSecurityGroupsOutcome SetLoadBalancerSecurityGroups(const Model::SetLoadBalancerSecurityGroupsRequest &request);
                void SetLoadBalancerSecurityGroupsAsync(const Model::SetLoadBalancerSecurityGroupsRequest& request, const SetLoadBalancerSecurityGroupsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                SetLoadBalancerSecurityGroupsOutcomeCallable SetLoadBalancerSecurityGroupsCallable(const Model::SetLoadBalancerSecurityGroupsRequest& request);

                /**
                 *This API is used to bind or unbind a security group for multiple public network CLB instances. Note: Private network CLB do not support binding security groups.
                 * @param req SetSecurityGroupForLoadbalancersRequest
                 * @return SetSecurityGroupForLoadbalancersOutcome
                 */
                SetSecurityGroupForLoadbalancersOutcome SetSecurityGroupForLoadbalancers(const Model::SetSecurityGroupForLoadbalancersRequest &request);
                void SetSecurityGroupForLoadbalancersAsync(const Model::SetSecurityGroupForLoadbalancersRequest& request, const SetSecurityGroupForLoadbalancersAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                SetSecurityGroupForLoadbalancersOutcomeCallable SetSecurityGroupForLoadbalancersCallable(const Model::SetSecurityGroupForLoadbalancersRequest& request);

            };
        }
    }
}

#endif // !TENCENTCLOUD_CLB_V20180317_CLBCLIENT_H_
