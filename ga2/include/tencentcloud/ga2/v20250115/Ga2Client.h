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

#ifndef TENCENTCLOUD_GA2_V20250115_GA2CLIENT_H_
#define TENCENTCLOUD_GA2_V20250115_GA2CLIENT_H_

#include <functional>
#include <future>
#include <tencentcloud/core/AbstractClient.h>
#include <tencentcloud/core/Credential.h>
#include <tencentcloud/core/profile/ClientProfile.h>
#include <tencentcloud/core/AsyncCallerContext.h>
#include <tencentcloud/ga2/v20250115/model/CreateAccelerateAreasRequest.h>
#include <tencentcloud/ga2/v20250115/model/CreateAccelerateAreasResponse.h>
#include <tencentcloud/ga2/v20250115/model/CreateEndpointGroupRequest.h>
#include <tencentcloud/ga2/v20250115/model/CreateEndpointGroupResponse.h>
#include <tencentcloud/ga2/v20250115/model/CreateForwardingPolicyRequest.h>
#include <tencentcloud/ga2/v20250115/model/CreateForwardingPolicyResponse.h>
#include <tencentcloud/ga2/v20250115/model/CreateForwardingRuleRequest.h>
#include <tencentcloud/ga2/v20250115/model/CreateForwardingRuleResponse.h>
#include <tencentcloud/ga2/v20250115/model/CreateGlobalAcceleratorRequest.h>
#include <tencentcloud/ga2/v20250115/model/CreateGlobalAcceleratorResponse.h>
#include <tencentcloud/ga2/v20250115/model/CreateGlobalAcceleratorAccessLogRequest.h>
#include <tencentcloud/ga2/v20250115/model/CreateGlobalAcceleratorAccessLogResponse.h>
#include <tencentcloud/ga2/v20250115/model/CreateGlobalAcceleratorAclPolicyRequest.h>
#include <tencentcloud/ga2/v20250115/model/CreateGlobalAcceleratorAclPolicyResponse.h>
#include <tencentcloud/ga2/v20250115/model/CreateGlobalAcceleratorAclRuleRequest.h>
#include <tencentcloud/ga2/v20250115/model/CreateGlobalAcceleratorAclRuleResponse.h>
#include <tencentcloud/ga2/v20250115/model/CreateListenerRequest.h>
#include <tencentcloud/ga2/v20250115/model/CreateListenerResponse.h>
#include <tencentcloud/ga2/v20250115/model/CreateListenerAdditionalCertRequest.h>
#include <tencentcloud/ga2/v20250115/model/CreateListenerAdditionalCertResponse.h>
#include <tencentcloud/ga2/v20250115/model/DeleteAccelerateAreasRequest.h>
#include <tencentcloud/ga2/v20250115/model/DeleteAccelerateAreasResponse.h>
#include <tencentcloud/ga2/v20250115/model/DeleteEndpointGroupsRequest.h>
#include <tencentcloud/ga2/v20250115/model/DeleteEndpointGroupsResponse.h>
#include <tencentcloud/ga2/v20250115/model/DeleteForwardingPolicyRequest.h>
#include <tencentcloud/ga2/v20250115/model/DeleteForwardingPolicyResponse.h>
#include <tencentcloud/ga2/v20250115/model/DeleteForwardingRuleRequest.h>
#include <tencentcloud/ga2/v20250115/model/DeleteForwardingRuleResponse.h>
#include <tencentcloud/ga2/v20250115/model/DeleteGlobalAcceleratorRequest.h>
#include <tencentcloud/ga2/v20250115/model/DeleteGlobalAcceleratorResponse.h>
#include <tencentcloud/ga2/v20250115/model/DeleteGlobalAcceleratorAccessLogRequest.h>
#include <tencentcloud/ga2/v20250115/model/DeleteGlobalAcceleratorAccessLogResponse.h>
#include <tencentcloud/ga2/v20250115/model/DeleteGlobalAcceleratorAclPolicyRequest.h>
#include <tencentcloud/ga2/v20250115/model/DeleteGlobalAcceleratorAclPolicyResponse.h>
#include <tencentcloud/ga2/v20250115/model/DeleteGlobalAcceleratorAclRuleRequest.h>
#include <tencentcloud/ga2/v20250115/model/DeleteGlobalAcceleratorAclRuleResponse.h>
#include <tencentcloud/ga2/v20250115/model/DeleteListenerRequest.h>
#include <tencentcloud/ga2/v20250115/model/DeleteListenerResponse.h>
#include <tencentcloud/ga2/v20250115/model/DeleteListenerAdditionalCertRequest.h>
#include <tencentcloud/ga2/v20250115/model/DeleteListenerAdditionalCertResponse.h>
#include <tencentcloud/ga2/v20250115/model/DescribeAccelerateAreasRequest.h>
#include <tencentcloud/ga2/v20250115/model/DescribeAccelerateAreasResponse.h>
#include <tencentcloud/ga2/v20250115/model/DescribeAccelerateRegionsRequest.h>
#include <tencentcloud/ga2/v20250115/model/DescribeAccelerateRegionsResponse.h>
#include <tencentcloud/ga2/v20250115/model/DescribeAccessLogParamRequest.h>
#include <tencentcloud/ga2/v20250115/model/DescribeAccessLogParamResponse.h>
#include <tencentcloud/ga2/v20250115/model/DescribeCrossBorderSettlementRequest.h>
#include <tencentcloud/ga2/v20250115/model/DescribeCrossBorderSettlementResponse.h>
#include <tencentcloud/ga2/v20250115/model/DescribeEndpointGroupsRequest.h>
#include <tencentcloud/ga2/v20250115/model/DescribeEndpointGroupsResponse.h>
#include <tencentcloud/ga2/v20250115/model/DescribeForwardingPolicyRequest.h>
#include <tencentcloud/ga2/v20250115/model/DescribeForwardingPolicyResponse.h>
#include <tencentcloud/ga2/v20250115/model/DescribeForwardingRuleRequest.h>
#include <tencentcloud/ga2/v20250115/model/DescribeForwardingRuleResponse.h>
#include <tencentcloud/ga2/v20250115/model/DescribeGlobalAcceleratorAccessLogRequest.h>
#include <tencentcloud/ga2/v20250115/model/DescribeGlobalAcceleratorAccessLogResponse.h>
#include <tencentcloud/ga2/v20250115/model/DescribeGlobalAcceleratorAclPoliciesRequest.h>
#include <tencentcloud/ga2/v20250115/model/DescribeGlobalAcceleratorAclPoliciesResponse.h>
#include <tencentcloud/ga2/v20250115/model/DescribeGlobalAcceleratorAclRulesRequest.h>
#include <tencentcloud/ga2/v20250115/model/DescribeGlobalAcceleratorAclRulesResponse.h>
#include <tencentcloud/ga2/v20250115/model/DescribeGlobalAcceleratorsRequest.h>
#include <tencentcloud/ga2/v20250115/model/DescribeGlobalAcceleratorsResponse.h>
#include <tencentcloud/ga2/v20250115/model/DescribeListenersRequest.h>
#include <tencentcloud/ga2/v20250115/model/DescribeListenersResponse.h>
#include <tencentcloud/ga2/v20250115/model/DescribeTaskResultRequest.h>
#include <tencentcloud/ga2/v20250115/model/DescribeTaskResultResponse.h>
#include <tencentcloud/ga2/v20250115/model/ModifyAccelerateAreasRequest.h>
#include <tencentcloud/ga2/v20250115/model/ModifyAccelerateAreasResponse.h>
#include <tencentcloud/ga2/v20250115/model/ModifyAccessLogStatusRequest.h>
#include <tencentcloud/ga2/v20250115/model/ModifyAccessLogStatusResponse.h>
#include <tencentcloud/ga2/v20250115/model/ModifyEndpointGroupRequest.h>
#include <tencentcloud/ga2/v20250115/model/ModifyEndpointGroupResponse.h>
#include <tencentcloud/ga2/v20250115/model/ModifyForwardingPolicyRequest.h>
#include <tencentcloud/ga2/v20250115/model/ModifyForwardingPolicyResponse.h>
#include <tencentcloud/ga2/v20250115/model/ModifyForwardingRuleRequest.h>
#include <tencentcloud/ga2/v20250115/model/ModifyForwardingRuleResponse.h>
#include <tencentcloud/ga2/v20250115/model/ModifyGlobalAcceleratorRequest.h>
#include <tencentcloud/ga2/v20250115/model/ModifyGlobalAcceleratorResponse.h>
#include <tencentcloud/ga2/v20250115/model/ModifyGlobalAcceleratorAccessLogRequest.h>
#include <tencentcloud/ga2/v20250115/model/ModifyGlobalAcceleratorAccessLogResponse.h>
#include <tencentcloud/ga2/v20250115/model/ModifyGlobalAcceleratorAclPolicyRequest.h>
#include <tencentcloud/ga2/v20250115/model/ModifyGlobalAcceleratorAclPolicyResponse.h>
#include <tencentcloud/ga2/v20250115/model/ModifyGlobalAcceleratorAclRuleRequest.h>
#include <tencentcloud/ga2/v20250115/model/ModifyGlobalAcceleratorAclRuleResponse.h>
#include <tencentcloud/ga2/v20250115/model/ModifyListenerRequest.h>
#include <tencentcloud/ga2/v20250115/model/ModifyListenerResponse.h>
#include <tencentcloud/ga2/v20250115/model/ReplaceListenerAdditionalCertRequest.h>
#include <tencentcloud/ga2/v20250115/model/ReplaceListenerAdditionalCertResponse.h>


namespace TencentCloud
{
    namespace Ga2
    {
        namespace V20250115
        {
            class Ga2Client : public AbstractClient
            {
            public:
                Ga2Client(const Credential &credential, const std::string &region);
                Ga2Client(const Credential &credential, const std::string &region, const ClientProfile &profile);

                typedef Outcome<Core::Error, Model::CreateAccelerateAreasResponse> CreateAccelerateAreasOutcome;
                typedef std::future<CreateAccelerateAreasOutcome> CreateAccelerateAreasOutcomeCallable;
                typedef std::function<void(const Ga2Client*, const Model::CreateAccelerateAreasRequest&, CreateAccelerateAreasOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateAccelerateAreasAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateEndpointGroupResponse> CreateEndpointGroupOutcome;
                typedef std::future<CreateEndpointGroupOutcome> CreateEndpointGroupOutcomeCallable;
                typedef std::function<void(const Ga2Client*, const Model::CreateEndpointGroupRequest&, CreateEndpointGroupOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateEndpointGroupAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateForwardingPolicyResponse> CreateForwardingPolicyOutcome;
                typedef std::future<CreateForwardingPolicyOutcome> CreateForwardingPolicyOutcomeCallable;
                typedef std::function<void(const Ga2Client*, const Model::CreateForwardingPolicyRequest&, CreateForwardingPolicyOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateForwardingPolicyAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateForwardingRuleResponse> CreateForwardingRuleOutcome;
                typedef std::future<CreateForwardingRuleOutcome> CreateForwardingRuleOutcomeCallable;
                typedef std::function<void(const Ga2Client*, const Model::CreateForwardingRuleRequest&, CreateForwardingRuleOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateForwardingRuleAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateGlobalAcceleratorResponse> CreateGlobalAcceleratorOutcome;
                typedef std::future<CreateGlobalAcceleratorOutcome> CreateGlobalAcceleratorOutcomeCallable;
                typedef std::function<void(const Ga2Client*, const Model::CreateGlobalAcceleratorRequest&, CreateGlobalAcceleratorOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateGlobalAcceleratorAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateGlobalAcceleratorAccessLogResponse> CreateGlobalAcceleratorAccessLogOutcome;
                typedef std::future<CreateGlobalAcceleratorAccessLogOutcome> CreateGlobalAcceleratorAccessLogOutcomeCallable;
                typedef std::function<void(const Ga2Client*, const Model::CreateGlobalAcceleratorAccessLogRequest&, CreateGlobalAcceleratorAccessLogOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateGlobalAcceleratorAccessLogAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateGlobalAcceleratorAclPolicyResponse> CreateGlobalAcceleratorAclPolicyOutcome;
                typedef std::future<CreateGlobalAcceleratorAclPolicyOutcome> CreateGlobalAcceleratorAclPolicyOutcomeCallable;
                typedef std::function<void(const Ga2Client*, const Model::CreateGlobalAcceleratorAclPolicyRequest&, CreateGlobalAcceleratorAclPolicyOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateGlobalAcceleratorAclPolicyAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateGlobalAcceleratorAclRuleResponse> CreateGlobalAcceleratorAclRuleOutcome;
                typedef std::future<CreateGlobalAcceleratorAclRuleOutcome> CreateGlobalAcceleratorAclRuleOutcomeCallable;
                typedef std::function<void(const Ga2Client*, const Model::CreateGlobalAcceleratorAclRuleRequest&, CreateGlobalAcceleratorAclRuleOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateGlobalAcceleratorAclRuleAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateListenerResponse> CreateListenerOutcome;
                typedef std::future<CreateListenerOutcome> CreateListenerOutcomeCallable;
                typedef std::function<void(const Ga2Client*, const Model::CreateListenerRequest&, CreateListenerOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateListenerAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateListenerAdditionalCertResponse> CreateListenerAdditionalCertOutcome;
                typedef std::future<CreateListenerAdditionalCertOutcome> CreateListenerAdditionalCertOutcomeCallable;
                typedef std::function<void(const Ga2Client*, const Model::CreateListenerAdditionalCertRequest&, CreateListenerAdditionalCertOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateListenerAdditionalCertAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteAccelerateAreasResponse> DeleteAccelerateAreasOutcome;
                typedef std::future<DeleteAccelerateAreasOutcome> DeleteAccelerateAreasOutcomeCallable;
                typedef std::function<void(const Ga2Client*, const Model::DeleteAccelerateAreasRequest&, DeleteAccelerateAreasOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteAccelerateAreasAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteEndpointGroupsResponse> DeleteEndpointGroupsOutcome;
                typedef std::future<DeleteEndpointGroupsOutcome> DeleteEndpointGroupsOutcomeCallable;
                typedef std::function<void(const Ga2Client*, const Model::DeleteEndpointGroupsRequest&, DeleteEndpointGroupsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteEndpointGroupsAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteForwardingPolicyResponse> DeleteForwardingPolicyOutcome;
                typedef std::future<DeleteForwardingPolicyOutcome> DeleteForwardingPolicyOutcomeCallable;
                typedef std::function<void(const Ga2Client*, const Model::DeleteForwardingPolicyRequest&, DeleteForwardingPolicyOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteForwardingPolicyAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteForwardingRuleResponse> DeleteForwardingRuleOutcome;
                typedef std::future<DeleteForwardingRuleOutcome> DeleteForwardingRuleOutcomeCallable;
                typedef std::function<void(const Ga2Client*, const Model::DeleteForwardingRuleRequest&, DeleteForwardingRuleOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteForwardingRuleAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteGlobalAcceleratorResponse> DeleteGlobalAcceleratorOutcome;
                typedef std::future<DeleteGlobalAcceleratorOutcome> DeleteGlobalAcceleratorOutcomeCallable;
                typedef std::function<void(const Ga2Client*, const Model::DeleteGlobalAcceleratorRequest&, DeleteGlobalAcceleratorOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteGlobalAcceleratorAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteGlobalAcceleratorAccessLogResponse> DeleteGlobalAcceleratorAccessLogOutcome;
                typedef std::future<DeleteGlobalAcceleratorAccessLogOutcome> DeleteGlobalAcceleratorAccessLogOutcomeCallable;
                typedef std::function<void(const Ga2Client*, const Model::DeleteGlobalAcceleratorAccessLogRequest&, DeleteGlobalAcceleratorAccessLogOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteGlobalAcceleratorAccessLogAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteGlobalAcceleratorAclPolicyResponse> DeleteGlobalAcceleratorAclPolicyOutcome;
                typedef std::future<DeleteGlobalAcceleratorAclPolicyOutcome> DeleteGlobalAcceleratorAclPolicyOutcomeCallable;
                typedef std::function<void(const Ga2Client*, const Model::DeleteGlobalAcceleratorAclPolicyRequest&, DeleteGlobalAcceleratorAclPolicyOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteGlobalAcceleratorAclPolicyAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteGlobalAcceleratorAclRuleResponse> DeleteGlobalAcceleratorAclRuleOutcome;
                typedef std::future<DeleteGlobalAcceleratorAclRuleOutcome> DeleteGlobalAcceleratorAclRuleOutcomeCallable;
                typedef std::function<void(const Ga2Client*, const Model::DeleteGlobalAcceleratorAclRuleRequest&, DeleteGlobalAcceleratorAclRuleOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteGlobalAcceleratorAclRuleAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteListenerResponse> DeleteListenerOutcome;
                typedef std::future<DeleteListenerOutcome> DeleteListenerOutcomeCallable;
                typedef std::function<void(const Ga2Client*, const Model::DeleteListenerRequest&, DeleteListenerOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteListenerAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteListenerAdditionalCertResponse> DeleteListenerAdditionalCertOutcome;
                typedef std::future<DeleteListenerAdditionalCertOutcome> DeleteListenerAdditionalCertOutcomeCallable;
                typedef std::function<void(const Ga2Client*, const Model::DeleteListenerAdditionalCertRequest&, DeleteListenerAdditionalCertOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteListenerAdditionalCertAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeAccelerateAreasResponse> DescribeAccelerateAreasOutcome;
                typedef std::future<DescribeAccelerateAreasOutcome> DescribeAccelerateAreasOutcomeCallable;
                typedef std::function<void(const Ga2Client*, const Model::DescribeAccelerateAreasRequest&, DescribeAccelerateAreasOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeAccelerateAreasAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeAccelerateRegionsResponse> DescribeAccelerateRegionsOutcome;
                typedef std::future<DescribeAccelerateRegionsOutcome> DescribeAccelerateRegionsOutcomeCallable;
                typedef std::function<void(const Ga2Client*, const Model::DescribeAccelerateRegionsRequest&, DescribeAccelerateRegionsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeAccelerateRegionsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeAccessLogParamResponse> DescribeAccessLogParamOutcome;
                typedef std::future<DescribeAccessLogParamOutcome> DescribeAccessLogParamOutcomeCallable;
                typedef std::function<void(const Ga2Client*, const Model::DescribeAccessLogParamRequest&, DescribeAccessLogParamOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeAccessLogParamAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeCrossBorderSettlementResponse> DescribeCrossBorderSettlementOutcome;
                typedef std::future<DescribeCrossBorderSettlementOutcome> DescribeCrossBorderSettlementOutcomeCallable;
                typedef std::function<void(const Ga2Client*, const Model::DescribeCrossBorderSettlementRequest&, DescribeCrossBorderSettlementOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeCrossBorderSettlementAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeEndpointGroupsResponse> DescribeEndpointGroupsOutcome;
                typedef std::future<DescribeEndpointGroupsOutcome> DescribeEndpointGroupsOutcomeCallable;
                typedef std::function<void(const Ga2Client*, const Model::DescribeEndpointGroupsRequest&, DescribeEndpointGroupsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeEndpointGroupsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeForwardingPolicyResponse> DescribeForwardingPolicyOutcome;
                typedef std::future<DescribeForwardingPolicyOutcome> DescribeForwardingPolicyOutcomeCallable;
                typedef std::function<void(const Ga2Client*, const Model::DescribeForwardingPolicyRequest&, DescribeForwardingPolicyOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeForwardingPolicyAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeForwardingRuleResponse> DescribeForwardingRuleOutcome;
                typedef std::future<DescribeForwardingRuleOutcome> DescribeForwardingRuleOutcomeCallable;
                typedef std::function<void(const Ga2Client*, const Model::DescribeForwardingRuleRequest&, DescribeForwardingRuleOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeForwardingRuleAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeGlobalAcceleratorAccessLogResponse> DescribeGlobalAcceleratorAccessLogOutcome;
                typedef std::future<DescribeGlobalAcceleratorAccessLogOutcome> DescribeGlobalAcceleratorAccessLogOutcomeCallable;
                typedef std::function<void(const Ga2Client*, const Model::DescribeGlobalAcceleratorAccessLogRequest&, DescribeGlobalAcceleratorAccessLogOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeGlobalAcceleratorAccessLogAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeGlobalAcceleratorAclPoliciesResponse> DescribeGlobalAcceleratorAclPoliciesOutcome;
                typedef std::future<DescribeGlobalAcceleratorAclPoliciesOutcome> DescribeGlobalAcceleratorAclPoliciesOutcomeCallable;
                typedef std::function<void(const Ga2Client*, const Model::DescribeGlobalAcceleratorAclPoliciesRequest&, DescribeGlobalAcceleratorAclPoliciesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeGlobalAcceleratorAclPoliciesAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeGlobalAcceleratorAclRulesResponse> DescribeGlobalAcceleratorAclRulesOutcome;
                typedef std::future<DescribeGlobalAcceleratorAclRulesOutcome> DescribeGlobalAcceleratorAclRulesOutcomeCallable;
                typedef std::function<void(const Ga2Client*, const Model::DescribeGlobalAcceleratorAclRulesRequest&, DescribeGlobalAcceleratorAclRulesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeGlobalAcceleratorAclRulesAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeGlobalAcceleratorsResponse> DescribeGlobalAcceleratorsOutcome;
                typedef std::future<DescribeGlobalAcceleratorsOutcome> DescribeGlobalAcceleratorsOutcomeCallable;
                typedef std::function<void(const Ga2Client*, const Model::DescribeGlobalAcceleratorsRequest&, DescribeGlobalAcceleratorsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeGlobalAcceleratorsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeListenersResponse> DescribeListenersOutcome;
                typedef std::future<DescribeListenersOutcome> DescribeListenersOutcomeCallable;
                typedef std::function<void(const Ga2Client*, const Model::DescribeListenersRequest&, DescribeListenersOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeListenersAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeTaskResultResponse> DescribeTaskResultOutcome;
                typedef std::future<DescribeTaskResultOutcome> DescribeTaskResultOutcomeCallable;
                typedef std::function<void(const Ga2Client*, const Model::DescribeTaskResultRequest&, DescribeTaskResultOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeTaskResultAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyAccelerateAreasResponse> ModifyAccelerateAreasOutcome;
                typedef std::future<ModifyAccelerateAreasOutcome> ModifyAccelerateAreasOutcomeCallable;
                typedef std::function<void(const Ga2Client*, const Model::ModifyAccelerateAreasRequest&, ModifyAccelerateAreasOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyAccelerateAreasAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyAccessLogStatusResponse> ModifyAccessLogStatusOutcome;
                typedef std::future<ModifyAccessLogStatusOutcome> ModifyAccessLogStatusOutcomeCallable;
                typedef std::function<void(const Ga2Client*, const Model::ModifyAccessLogStatusRequest&, ModifyAccessLogStatusOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyAccessLogStatusAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyEndpointGroupResponse> ModifyEndpointGroupOutcome;
                typedef std::future<ModifyEndpointGroupOutcome> ModifyEndpointGroupOutcomeCallable;
                typedef std::function<void(const Ga2Client*, const Model::ModifyEndpointGroupRequest&, ModifyEndpointGroupOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyEndpointGroupAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyForwardingPolicyResponse> ModifyForwardingPolicyOutcome;
                typedef std::future<ModifyForwardingPolicyOutcome> ModifyForwardingPolicyOutcomeCallable;
                typedef std::function<void(const Ga2Client*, const Model::ModifyForwardingPolicyRequest&, ModifyForwardingPolicyOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyForwardingPolicyAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyForwardingRuleResponse> ModifyForwardingRuleOutcome;
                typedef std::future<ModifyForwardingRuleOutcome> ModifyForwardingRuleOutcomeCallable;
                typedef std::function<void(const Ga2Client*, const Model::ModifyForwardingRuleRequest&, ModifyForwardingRuleOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyForwardingRuleAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyGlobalAcceleratorResponse> ModifyGlobalAcceleratorOutcome;
                typedef std::future<ModifyGlobalAcceleratorOutcome> ModifyGlobalAcceleratorOutcomeCallable;
                typedef std::function<void(const Ga2Client*, const Model::ModifyGlobalAcceleratorRequest&, ModifyGlobalAcceleratorOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyGlobalAcceleratorAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyGlobalAcceleratorAccessLogResponse> ModifyGlobalAcceleratorAccessLogOutcome;
                typedef std::future<ModifyGlobalAcceleratorAccessLogOutcome> ModifyGlobalAcceleratorAccessLogOutcomeCallable;
                typedef std::function<void(const Ga2Client*, const Model::ModifyGlobalAcceleratorAccessLogRequest&, ModifyGlobalAcceleratorAccessLogOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyGlobalAcceleratorAccessLogAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyGlobalAcceleratorAclPolicyResponse> ModifyGlobalAcceleratorAclPolicyOutcome;
                typedef std::future<ModifyGlobalAcceleratorAclPolicyOutcome> ModifyGlobalAcceleratorAclPolicyOutcomeCallable;
                typedef std::function<void(const Ga2Client*, const Model::ModifyGlobalAcceleratorAclPolicyRequest&, ModifyGlobalAcceleratorAclPolicyOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyGlobalAcceleratorAclPolicyAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyGlobalAcceleratorAclRuleResponse> ModifyGlobalAcceleratorAclRuleOutcome;
                typedef std::future<ModifyGlobalAcceleratorAclRuleOutcome> ModifyGlobalAcceleratorAclRuleOutcomeCallable;
                typedef std::function<void(const Ga2Client*, const Model::ModifyGlobalAcceleratorAclRuleRequest&, ModifyGlobalAcceleratorAclRuleOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyGlobalAcceleratorAclRuleAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyListenerResponse> ModifyListenerOutcome;
                typedef std::future<ModifyListenerOutcome> ModifyListenerOutcomeCallable;
                typedef std::function<void(const Ga2Client*, const Model::ModifyListenerRequest&, ModifyListenerOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyListenerAsyncHandler;
                typedef Outcome<Core::Error, Model::ReplaceListenerAdditionalCertResponse> ReplaceListenerAdditionalCertOutcome;
                typedef std::future<ReplaceListenerAdditionalCertOutcome> ReplaceListenerAdditionalCertOutcomeCallable;
                typedef std::function<void(const Ga2Client*, const Model::ReplaceListenerAdditionalCertRequest&, ReplaceListenerAdditionalCertOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ReplaceListenerAdditionalCertAsyncHandler;



                /**
                 *This API is used to create an acceleration region.
                 * @param req CreateAccelerateAreasRequest
                 * @return CreateAccelerateAreasOutcome
                 */
                CreateAccelerateAreasOutcome CreateAccelerateAreas(const Model::CreateAccelerateAreasRequest &request);
                void CreateAccelerateAreasAsync(const Model::CreateAccelerateAreasRequest& request, const CreateAccelerateAreasAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateAccelerateAreasOutcomeCallable CreateAccelerateAreasCallable(const Model::CreateAccelerateAreasRequest& request);

                /**
                 *This API is used to create a terminal node group.
                 * @param req CreateEndpointGroupRequest
                 * @return CreateEndpointGroupOutcome
                 */
                CreateEndpointGroupOutcome CreateEndpointGroup(const Model::CreateEndpointGroupRequest &request);
                void CreateEndpointGroupAsync(const Model::CreateEndpointGroupRequest& request, const CreateEndpointGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateEndpointGroupOutcomeCallable CreateEndpointGroupCallable(const Model::CreateEndpointGroupRequest& request);

                /**
                 *Create a layer-7 forwarding policy.
                 * @param req CreateForwardingPolicyRequest
                 * @return CreateForwardingPolicyOutcome
                 */
                CreateForwardingPolicyOutcome CreateForwardingPolicy(const Model::CreateForwardingPolicyRequest &request);
                void CreateForwardingPolicyAsync(const Model::CreateForwardingPolicyRequest& request, const CreateForwardingPolicyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateForwardingPolicyOutcomeCallable CreateForwardingPolicyCallable(const Model::CreateForwardingPolicyRequest& request);

                /**
                 *Create a Layer 7 forwarding rule
                 * @param req CreateForwardingRuleRequest
                 * @return CreateForwardingRuleOutcome
                 */
                CreateForwardingRuleOutcome CreateForwardingRule(const Model::CreateForwardingRuleRequest &request);
                void CreateForwardingRuleAsync(const Model::CreateForwardingRuleRequest& request, const CreateForwardingRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateForwardingRuleOutcomeCallable CreateForwardingRuleCallable(const Model::CreateForwardingRuleRequest& request);

                /**
                 *This API is used to create a global acceleration instance.
                 * @param req CreateGlobalAcceleratorRequest
                 * @return CreateGlobalAcceleratorOutcome
                 */
                CreateGlobalAcceleratorOutcome CreateGlobalAccelerator(const Model::CreateGlobalAcceleratorRequest &request);
                void CreateGlobalAcceleratorAsync(const Model::CreateGlobalAcceleratorRequest& request, const CreateGlobalAcceleratorAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateGlobalAcceleratorOutcomeCallable CreateGlobalAcceleratorCallable(const Model::CreateGlobalAcceleratorRequest& request);

                /**
                 *Create a GA access log
                 * @param req CreateGlobalAcceleratorAccessLogRequest
                 * @return CreateGlobalAcceleratorAccessLogOutcome
                 */
                CreateGlobalAcceleratorAccessLogOutcome CreateGlobalAcceleratorAccessLog(const Model::CreateGlobalAcceleratorAccessLogRequest &request);
                void CreateGlobalAcceleratorAccessLogAsync(const Model::CreateGlobalAcceleratorAccessLogRequest& request, const CreateGlobalAcceleratorAccessLogAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateGlobalAcceleratorAccessLogOutcomeCallable CreateGlobalAcceleratorAccessLogCallable(const Model::CreateGlobalAcceleratorAccessLogRequest& request);

                /**
                 *Create access control policy
                 * @param req CreateGlobalAcceleratorAclPolicyRequest
                 * @return CreateGlobalAcceleratorAclPolicyOutcome
                 */
                CreateGlobalAcceleratorAclPolicyOutcome CreateGlobalAcceleratorAclPolicy(const Model::CreateGlobalAcceleratorAclPolicyRequest &request);
                void CreateGlobalAcceleratorAclPolicyAsync(const Model::CreateGlobalAcceleratorAclPolicyRequest& request, const CreateGlobalAcceleratorAclPolicyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateGlobalAcceleratorAclPolicyOutcomeCallable CreateGlobalAcceleratorAclPolicyCallable(const Model::CreateGlobalAcceleratorAclPolicyRequest& request);

                /**
                 *Create an ACL rule
                 * @param req CreateGlobalAcceleratorAclRuleRequest
                 * @return CreateGlobalAcceleratorAclRuleOutcome
                 */
                CreateGlobalAcceleratorAclRuleOutcome CreateGlobalAcceleratorAclRule(const Model::CreateGlobalAcceleratorAclRuleRequest &request);
                void CreateGlobalAcceleratorAclRuleAsync(const Model::CreateGlobalAcceleratorAclRuleRequest& request, const CreateGlobalAcceleratorAclRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateGlobalAcceleratorAclRuleOutcomeCallable CreateGlobalAcceleratorAclRuleCallable(const Model::CreateGlobalAcceleratorAclRuleRequest& request);

                /**
                 *This API is used to create a listener.
                 * @param req CreateListenerRequest
                 * @return CreateListenerOutcome
                 */
                CreateListenerOutcome CreateListener(const Model::CreateListenerRequest &request);
                void CreateListenerAsync(const Model::CreateListenerRequest& request, const CreateListenerAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateListenerOutcomeCallable CreateListenerCallable(const Model::CreateListenerRequest& request);

                /**
                 *Add an extension certificate.
                 * @param req CreateListenerAdditionalCertRequest
                 * @return CreateListenerAdditionalCertOutcome
                 */
                CreateListenerAdditionalCertOutcome CreateListenerAdditionalCert(const Model::CreateListenerAdditionalCertRequest &request);
                void CreateListenerAdditionalCertAsync(const Model::CreateListenerAdditionalCertRequest& request, const CreateListenerAdditionalCertAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateListenerAdditionalCertOutcomeCallable CreateListenerAdditionalCertCallable(const Model::CreateListenerAdditionalCertRequest& request);

                /**
                 *Delete an acceleration region
                 * @param req DeleteAccelerateAreasRequest
                 * @return DeleteAccelerateAreasOutcome
                 */
                DeleteAccelerateAreasOutcome DeleteAccelerateAreas(const Model::DeleteAccelerateAreasRequest &request);
                void DeleteAccelerateAreasAsync(const Model::DeleteAccelerateAreasRequest& request, const DeleteAccelerateAreasAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteAccelerateAreasOutcomeCallable DeleteAccelerateAreasCallable(const Model::DeleteAccelerateAreasRequest& request);

                /**
                 *Delete a terminal node group.
                 * @param req DeleteEndpointGroupsRequest
                 * @return DeleteEndpointGroupsOutcome
                 */
                DeleteEndpointGroupsOutcome DeleteEndpointGroups(const Model::DeleteEndpointGroupsRequest &request);
                void DeleteEndpointGroupsAsync(const Model::DeleteEndpointGroupsRequest& request, const DeleteEndpointGroupsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteEndpointGroupsOutcomeCallable DeleteEndpointGroupsCallable(const Model::DeleteEndpointGroupsRequest& request);

                /**
                 *Delete a layer-7 forwarding policy.
                 * @param req DeleteForwardingPolicyRequest
                 * @return DeleteForwardingPolicyOutcome
                 */
                DeleteForwardingPolicyOutcome DeleteForwardingPolicy(const Model::DeleteForwardingPolicyRequest &request);
                void DeleteForwardingPolicyAsync(const Model::DeleteForwardingPolicyRequest& request, const DeleteForwardingPolicyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteForwardingPolicyOutcomeCallable DeleteForwardingPolicyCallable(const Model::DeleteForwardingPolicyRequest& request);

                /**
                 *Delete a Layer 7 forwarding rule
                 * @param req DeleteForwardingRuleRequest
                 * @return DeleteForwardingRuleOutcome
                 */
                DeleteForwardingRuleOutcome DeleteForwardingRule(const Model::DeleteForwardingRuleRequest &request);
                void DeleteForwardingRuleAsync(const Model::DeleteForwardingRuleRequest& request, const DeleteForwardingRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteForwardingRuleOutcomeCallable DeleteForwardingRuleCallable(const Model::DeleteForwardingRuleRequest& request);

                /**
                 *Deletes a global acceleration instance
                 * @param req DeleteGlobalAcceleratorRequest
                 * @return DeleteGlobalAcceleratorOutcome
                 */
                DeleteGlobalAcceleratorOutcome DeleteGlobalAccelerator(const Model::DeleteGlobalAcceleratorRequest &request);
                void DeleteGlobalAcceleratorAsync(const Model::DeleteGlobalAcceleratorRequest& request, const DeleteGlobalAcceleratorAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteGlobalAcceleratorOutcomeCallable DeleteGlobalAcceleratorCallable(const Model::DeleteGlobalAcceleratorRequest& request);

                /**
                 *This API is used to delete a GA log task.
                 * @param req DeleteGlobalAcceleratorAccessLogRequest
                 * @return DeleteGlobalAcceleratorAccessLogOutcome
                 */
                DeleteGlobalAcceleratorAccessLogOutcome DeleteGlobalAcceleratorAccessLog(const Model::DeleteGlobalAcceleratorAccessLogRequest &request);
                void DeleteGlobalAcceleratorAccessLogAsync(const Model::DeleteGlobalAcceleratorAccessLogRequest& request, const DeleteGlobalAcceleratorAccessLogAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteGlobalAcceleratorAccessLogOutcomeCallable DeleteGlobalAcceleratorAccessLogCallable(const Model::DeleteGlobalAcceleratorAccessLogRequest& request);

                /**
                 *Delete access control policy
                 * @param req DeleteGlobalAcceleratorAclPolicyRequest
                 * @return DeleteGlobalAcceleratorAclPolicyOutcome
                 */
                DeleteGlobalAcceleratorAclPolicyOutcome DeleteGlobalAcceleratorAclPolicy(const Model::DeleteGlobalAcceleratorAclPolicyRequest &request);
                void DeleteGlobalAcceleratorAclPolicyAsync(const Model::DeleteGlobalAcceleratorAclPolicyRequest& request, const DeleteGlobalAcceleratorAclPolicyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteGlobalAcceleratorAclPolicyOutcomeCallable DeleteGlobalAcceleratorAclPolicyCallable(const Model::DeleteGlobalAcceleratorAclPolicyRequest& request);

                /**
                 *Delete ACL rule
                 * @param req DeleteGlobalAcceleratorAclRuleRequest
                 * @return DeleteGlobalAcceleratorAclRuleOutcome
                 */
                DeleteGlobalAcceleratorAclRuleOutcome DeleteGlobalAcceleratorAclRule(const Model::DeleteGlobalAcceleratorAclRuleRequest &request);
                void DeleteGlobalAcceleratorAclRuleAsync(const Model::DeleteGlobalAcceleratorAclRuleRequest& request, const DeleteGlobalAcceleratorAclRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteGlobalAcceleratorAclRuleOutcomeCallable DeleteGlobalAcceleratorAclRuleCallable(const Model::DeleteGlobalAcceleratorAclRuleRequest& request);

                /**
                 *This API is used to delete a listener.
                 * @param req DeleteListenerRequest
                 * @return DeleteListenerOutcome
                 */
                DeleteListenerOutcome DeleteListener(const Model::DeleteListenerRequest &request);
                void DeleteListenerAsync(const Model::DeleteListenerRequest& request, const DeleteListenerAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteListenerOutcomeCallable DeleteListenerCallable(const Model::DeleteListenerRequest& request);

                /**
                 *Delete the extension certificate.
                 * @param req DeleteListenerAdditionalCertRequest
                 * @return DeleteListenerAdditionalCertOutcome
                 */
                DeleteListenerAdditionalCertOutcome DeleteListenerAdditionalCert(const Model::DeleteListenerAdditionalCertRequest &request);
                void DeleteListenerAdditionalCertAsync(const Model::DeleteListenerAdditionalCertRequest& request, const DeleteListenerAdditionalCertAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteListenerAdditionalCertOutcomeCallable DeleteListenerAdditionalCertCallable(const Model::DeleteListenerAdditionalCertRequest& request);

                /**
                 *Queries acceleration regions
                 * @param req DescribeAccelerateAreasRequest
                 * @return DescribeAccelerateAreasOutcome
                 */
                DescribeAccelerateAreasOutcome DescribeAccelerateAreas(const Model::DescribeAccelerateAreasRequest &request);
                void DescribeAccelerateAreasAsync(const Model::DescribeAccelerateAreasRequest& request, const DescribeAccelerateAreasAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeAccelerateAreasOutcomeCallable DescribeAccelerateAreasCallable(const Model::DescribeAccelerateAreasRequest& request);

                /**
                 *Queries selectable acceleration regions.
                 * @param req DescribeAccelerateRegionsRequest
                 * @return DescribeAccelerateRegionsOutcome
                 */
                DescribeAccelerateRegionsOutcome DescribeAccelerateRegions(const Model::DescribeAccelerateRegionsRequest &request);
                void DescribeAccelerateRegionsAsync(const Model::DescribeAccelerateRegionsRequest& request, const DescribeAccelerateRegionsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeAccelerateRegionsOutcomeCallable DescribeAccelerateRegionsCallable(const Model::DescribeAccelerateRegionsRequest& request);

                /**
                 *View access log reporting parameters
                 * @param req DescribeAccessLogParamRequest
                 * @return DescribeAccessLogParamOutcome
                 */
                DescribeAccessLogParamOutcome DescribeAccessLogParam(const Model::DescribeAccessLogParamRequest &request);
                void DescribeAccessLogParamAsync(const Model::DescribeAccessLogParamRequest& request, const DescribeAccessLogParamAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeAccessLogParamOutcomeCallable DescribeAccessLogParamCallable(const Model::DescribeAccessLogParamRequest& request);

                /**
                 *Querying Cross-Border Bills
                 * @param req DescribeCrossBorderSettlementRequest
                 * @return DescribeCrossBorderSettlementOutcome
                 */
                DescribeCrossBorderSettlementOutcome DescribeCrossBorderSettlement(const Model::DescribeCrossBorderSettlementRequest &request);
                void DescribeCrossBorderSettlementAsync(const Model::DescribeCrossBorderSettlementRequest& request, const DescribeCrossBorderSettlementAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeCrossBorderSettlementOutcomeCallable DescribeCrossBorderSettlementCallable(const Model::DescribeCrossBorderSettlementRequest& request);

                /**
                 *Query a terminal node group.
                 * @param req DescribeEndpointGroupsRequest
                 * @return DescribeEndpointGroupsOutcome
                 */
                DescribeEndpointGroupsOutcome DescribeEndpointGroups(const Model::DescribeEndpointGroupsRequest &request);
                void DescribeEndpointGroupsAsync(const Model::DescribeEndpointGroupsRequest& request, const DescribeEndpointGroupsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeEndpointGroupsOutcomeCallable DescribeEndpointGroupsCallable(const Model::DescribeEndpointGroupsRequest& request);

                /**
                 *View a layer-7 forwarding policy
                 * @param req DescribeForwardingPolicyRequest
                 * @return DescribeForwardingPolicyOutcome
                 */
                DescribeForwardingPolicyOutcome DescribeForwardingPolicy(const Model::DescribeForwardingPolicyRequest &request);
                void DescribeForwardingPolicyAsync(const Model::DescribeForwardingPolicyRequest& request, const DescribeForwardingPolicyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeForwardingPolicyOutcomeCallable DescribeForwardingPolicyCallable(const Model::DescribeForwardingPolicyRequest& request);

                /**
                 *View a Layer 7 forwarding rule
                 * @param req DescribeForwardingRuleRequest
                 * @return DescribeForwardingRuleOutcome
                 */
                DescribeForwardingRuleOutcome DescribeForwardingRule(const Model::DescribeForwardingRuleRequest &request);
                void DescribeForwardingRuleAsync(const Model::DescribeForwardingRuleRequest& request, const DescribeForwardingRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeForwardingRuleOutcomeCallable DescribeForwardingRuleCallable(const Model::DescribeForwardingRuleRequest& request);

                /**
                 *Query log tasks
                 * @param req DescribeGlobalAcceleratorAccessLogRequest
                 * @return DescribeGlobalAcceleratorAccessLogOutcome
                 */
                DescribeGlobalAcceleratorAccessLogOutcome DescribeGlobalAcceleratorAccessLog(const Model::DescribeGlobalAcceleratorAccessLogRequest &request);
                void DescribeGlobalAcceleratorAccessLogAsync(const Model::DescribeGlobalAcceleratorAccessLogRequest& request, const DescribeGlobalAcceleratorAccessLogAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeGlobalAcceleratorAccessLogOutcomeCallable DescribeGlobalAcceleratorAccessLogCallable(const Model::DescribeGlobalAcceleratorAccessLogRequest& request);

                /**
                 *View the access control policy
                 * @param req DescribeGlobalAcceleratorAclPoliciesRequest
                 * @return DescribeGlobalAcceleratorAclPoliciesOutcome
                 */
                DescribeGlobalAcceleratorAclPoliciesOutcome DescribeGlobalAcceleratorAclPolicies(const Model::DescribeGlobalAcceleratorAclPoliciesRequest &request);
                void DescribeGlobalAcceleratorAclPoliciesAsync(const Model::DescribeGlobalAcceleratorAclPoliciesRequest& request, const DescribeGlobalAcceleratorAclPoliciesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeGlobalAcceleratorAclPoliciesOutcomeCallable DescribeGlobalAcceleratorAclPoliciesCallable(const Model::DescribeGlobalAcceleratorAclPoliciesRequest& request);

                /**
                 *View ACL rules
                 * @param req DescribeGlobalAcceleratorAclRulesRequest
                 * @return DescribeGlobalAcceleratorAclRulesOutcome
                 */
                DescribeGlobalAcceleratorAclRulesOutcome DescribeGlobalAcceleratorAclRules(const Model::DescribeGlobalAcceleratorAclRulesRequest &request);
                void DescribeGlobalAcceleratorAclRulesAsync(const Model::DescribeGlobalAcceleratorAclRulesRequest& request, const DescribeGlobalAcceleratorAclRulesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeGlobalAcceleratorAclRulesOutcomeCallable DescribeGlobalAcceleratorAclRulesCallable(const Model::DescribeGlobalAcceleratorAclRulesRequest& request);

                /**
                 *Modify a global acceleration instance
                 * @param req DescribeGlobalAcceleratorsRequest
                 * @return DescribeGlobalAcceleratorsOutcome
                 */
                DescribeGlobalAcceleratorsOutcome DescribeGlobalAccelerators(const Model::DescribeGlobalAcceleratorsRequest &request);
                void DescribeGlobalAcceleratorsAsync(const Model::DescribeGlobalAcceleratorsRequest& request, const DescribeGlobalAcceleratorsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeGlobalAcceleratorsOutcomeCallable DescribeGlobalAcceleratorsCallable(const Model::DescribeGlobalAcceleratorsRequest& request);

                /**
                 *This API is used to query listeners.
                 * @param req DescribeListenersRequest
                 * @return DescribeListenersOutcome
                 */
                DescribeListenersOutcome DescribeListeners(const Model::DescribeListenersRequest &request);
                void DescribeListenersAsync(const Model::DescribeListenersRequest& request, const DescribeListenersAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeListenersOutcomeCallable DescribeListenersCallable(const Model::DescribeListenersRequest& request);

                /**
                 *Query asynchronous task result
                 * @param req DescribeTaskResultRequest
                 * @return DescribeTaskResultOutcome
                 */
                DescribeTaskResultOutcome DescribeTaskResult(const Model::DescribeTaskResultRequest &request);
                void DescribeTaskResultAsync(const Model::DescribeTaskResultRequest& request, const DescribeTaskResultAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeTaskResultOutcomeCallable DescribeTaskResultCallable(const Model::DescribeTaskResultRequest& request);

                /**
                 *Modify acceleration region
                 * @param req ModifyAccelerateAreasRequest
                 * @return ModifyAccelerateAreasOutcome
                 */
                ModifyAccelerateAreasOutcome ModifyAccelerateAreas(const Model::ModifyAccelerateAreasRequest &request);
                void ModifyAccelerateAreasAsync(const Model::ModifyAccelerateAreasRequest& request, const ModifyAccelerateAreasAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyAccelerateAreasOutcomeCallable ModifyAccelerateAreasCallable(const Model::ModifyAccelerateAreasRequest& request);

                /**
                 *Modify the status of a log task
                 * @param req ModifyAccessLogStatusRequest
                 * @return ModifyAccessLogStatusOutcome
                 */
                ModifyAccessLogStatusOutcome ModifyAccessLogStatus(const Model::ModifyAccessLogStatusRequest &request);
                void ModifyAccessLogStatusAsync(const Model::ModifyAccessLogStatusRequest& request, const ModifyAccessLogStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyAccessLogStatusOutcomeCallable ModifyAccessLogStatusCallable(const Model::ModifyAccessLogStatusRequest& request);

                /**
                 *This API is used to modify a terminal node group.
                 * @param req ModifyEndpointGroupRequest
                 * @return ModifyEndpointGroupOutcome
                 */
                ModifyEndpointGroupOutcome ModifyEndpointGroup(const Model::ModifyEndpointGroupRequest &request);
                void ModifyEndpointGroupAsync(const Model::ModifyEndpointGroupRequest& request, const ModifyEndpointGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyEndpointGroupOutcomeCallable ModifyEndpointGroupCallable(const Model::ModifyEndpointGroupRequest& request);

                /**
                 *Modify a layer-7 forwarding policy
                 * @param req ModifyForwardingPolicyRequest
                 * @return ModifyForwardingPolicyOutcome
                 */
                ModifyForwardingPolicyOutcome ModifyForwardingPolicy(const Model::ModifyForwardingPolicyRequest &request);
                void ModifyForwardingPolicyAsync(const Model::ModifyForwardingPolicyRequest& request, const ModifyForwardingPolicyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyForwardingPolicyOutcomeCallable ModifyForwardingPolicyCallable(const Model::ModifyForwardingPolicyRequest& request);

                /**
                 *This API is used to modify a Layer 7 forwarding rule.
                 * @param req ModifyForwardingRuleRequest
                 * @return ModifyForwardingRuleOutcome
                 */
                ModifyForwardingRuleOutcome ModifyForwardingRule(const Model::ModifyForwardingRuleRequest &request);
                void ModifyForwardingRuleAsync(const Model::ModifyForwardingRuleRequest& request, const ModifyForwardingRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyForwardingRuleOutcomeCallable ModifyForwardingRuleCallable(const Model::ModifyForwardingRuleRequest& request);

                /**
                 *Modify a global acceleration instance
                 * @param req ModifyGlobalAcceleratorRequest
                 * @return ModifyGlobalAcceleratorOutcome
                 */
                ModifyGlobalAcceleratorOutcome ModifyGlobalAccelerator(const Model::ModifyGlobalAcceleratorRequest &request);
                void ModifyGlobalAcceleratorAsync(const Model::ModifyGlobalAcceleratorRequest& request, const ModifyGlobalAcceleratorAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyGlobalAcceleratorOutcomeCallable ModifyGlobalAcceleratorCallable(const Model::ModifyGlobalAcceleratorRequest& request);

                /**
                 *Modify GA access logs
                 * @param req ModifyGlobalAcceleratorAccessLogRequest
                 * @return ModifyGlobalAcceleratorAccessLogOutcome
                 */
                ModifyGlobalAcceleratorAccessLogOutcome ModifyGlobalAcceleratorAccessLog(const Model::ModifyGlobalAcceleratorAccessLogRequest &request);
                void ModifyGlobalAcceleratorAccessLogAsync(const Model::ModifyGlobalAcceleratorAccessLogRequest& request, const ModifyGlobalAcceleratorAccessLogAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyGlobalAcceleratorAccessLogOutcomeCallable ModifyGlobalAcceleratorAccessLogCallable(const Model::ModifyGlobalAcceleratorAccessLogRequest& request);

                /**
                 *Modify the status of an access control policy
                 * @param req ModifyGlobalAcceleratorAclPolicyRequest
                 * @return ModifyGlobalAcceleratorAclPolicyOutcome
                 */
                ModifyGlobalAcceleratorAclPolicyOutcome ModifyGlobalAcceleratorAclPolicy(const Model::ModifyGlobalAcceleratorAclPolicyRequest &request);
                void ModifyGlobalAcceleratorAclPolicyAsync(const Model::ModifyGlobalAcceleratorAclPolicyRequest& request, const ModifyGlobalAcceleratorAclPolicyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyGlobalAcceleratorAclPolicyOutcomeCallable ModifyGlobalAcceleratorAclPolicyCallable(const Model::ModifyGlobalAcceleratorAclPolicyRequest& request);

                /**
                 *Modify ACL rules
                 * @param req ModifyGlobalAcceleratorAclRuleRequest
                 * @return ModifyGlobalAcceleratorAclRuleOutcome
                 */
                ModifyGlobalAcceleratorAclRuleOutcome ModifyGlobalAcceleratorAclRule(const Model::ModifyGlobalAcceleratorAclRuleRequest &request);
                void ModifyGlobalAcceleratorAclRuleAsync(const Model::ModifyGlobalAcceleratorAclRuleRequest& request, const ModifyGlobalAcceleratorAclRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyGlobalAcceleratorAclRuleOutcomeCallable ModifyGlobalAcceleratorAclRuleCallable(const Model::ModifyGlobalAcceleratorAclRuleRequest& request);

                /**
                 *Modify a listener
                 * @param req ModifyListenerRequest
                 * @return ModifyListenerOutcome
                 */
                ModifyListenerOutcome ModifyListener(const Model::ModifyListenerRequest &request);
                void ModifyListenerAsync(const Model::ModifyListenerRequest& request, const ModifyListenerAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyListenerOutcomeCallable ModifyListenerCallable(const Model::ModifyListenerRequest& request);

                /**
                 *Replace the extension certificate.
                 * @param req ReplaceListenerAdditionalCertRequest
                 * @return ReplaceListenerAdditionalCertOutcome
                 */
                ReplaceListenerAdditionalCertOutcome ReplaceListenerAdditionalCert(const Model::ReplaceListenerAdditionalCertRequest &request);
                void ReplaceListenerAdditionalCertAsync(const Model::ReplaceListenerAdditionalCertRequest& request, const ReplaceListenerAdditionalCertAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ReplaceListenerAdditionalCertOutcomeCallable ReplaceListenerAdditionalCertCallable(const Model::ReplaceListenerAdditionalCertRequest& request);

            };
        }
    }
}

#endif // !TENCENTCLOUD_GA2_V20250115_GA2CLIENT_H_
