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

#ifndef TENCENTCLOUD_TCR_V20190924_TCRCLIENT_H_
#define TENCENTCLOUD_TCR_V20190924_TCRCLIENT_H_

#include <functional>
#include <future>
#include <tencentcloud/core/AbstractClient.h>
#include <tencentcloud/core/Credential.h>
#include <tencentcloud/core/profile/ClientProfile.h>
#include <tencentcloud/core/AsyncCallerContext.h>
#include <tencentcloud/tcr/v20190924/model/CheckInstanceRequest.h>
#include <tencentcloud/tcr/v20190924/model/CheckInstanceResponse.h>
#include <tencentcloud/tcr/v20190924/model/CheckInstanceNameRequest.h>
#include <tencentcloud/tcr/v20190924/model/CheckInstanceNameResponse.h>
#include <tencentcloud/tcr/v20190924/model/CreateImageAccelerationServiceRequest.h>
#include <tencentcloud/tcr/v20190924/model/CreateImageAccelerationServiceResponse.h>
#include <tencentcloud/tcr/v20190924/model/CreateImmutableTagRulesRequest.h>
#include <tencentcloud/tcr/v20190924/model/CreateImmutableTagRulesResponse.h>
#include <tencentcloud/tcr/v20190924/model/CreateInstanceRequest.h>
#include <tencentcloud/tcr/v20190924/model/CreateInstanceResponse.h>
#include <tencentcloud/tcr/v20190924/model/CreateInstanceCustomizedDomainRequest.h>
#include <tencentcloud/tcr/v20190924/model/CreateInstanceCustomizedDomainResponse.h>
#include <tencentcloud/tcr/v20190924/model/CreateInstanceTokenRequest.h>
#include <tencentcloud/tcr/v20190924/model/CreateInstanceTokenResponse.h>
#include <tencentcloud/tcr/v20190924/model/CreateMultipleSecurityPolicyRequest.h>
#include <tencentcloud/tcr/v20190924/model/CreateMultipleSecurityPolicyResponse.h>
#include <tencentcloud/tcr/v20190924/model/CreateNamespaceRequest.h>
#include <tencentcloud/tcr/v20190924/model/CreateNamespaceResponse.h>
#include <tencentcloud/tcr/v20190924/model/CreateReplicationInstanceRequest.h>
#include <tencentcloud/tcr/v20190924/model/CreateReplicationInstanceResponse.h>
#include <tencentcloud/tcr/v20190924/model/CreateRepositoryRequest.h>
#include <tencentcloud/tcr/v20190924/model/CreateRepositoryResponse.h>
#include <tencentcloud/tcr/v20190924/model/CreateSecurityPoliciesRequest.h>
#include <tencentcloud/tcr/v20190924/model/CreateSecurityPoliciesResponse.h>
#include <tencentcloud/tcr/v20190924/model/CreateSecurityPolicyRequest.h>
#include <tencentcloud/tcr/v20190924/model/CreateSecurityPolicyResponse.h>
#include <tencentcloud/tcr/v20190924/model/CreateSignatureRequest.h>
#include <tencentcloud/tcr/v20190924/model/CreateSignatureResponse.h>
#include <tencentcloud/tcr/v20190924/model/CreateSignaturePolicyRequest.h>
#include <tencentcloud/tcr/v20190924/model/CreateSignaturePolicyResponse.h>
#include <tencentcloud/tcr/v20190924/model/CreateTagRetentionExecutionRequest.h>
#include <tencentcloud/tcr/v20190924/model/CreateTagRetentionExecutionResponse.h>
#include <tencentcloud/tcr/v20190924/model/CreateTagRetentionRuleRequest.h>
#include <tencentcloud/tcr/v20190924/model/CreateTagRetentionRuleResponse.h>
#include <tencentcloud/tcr/v20190924/model/CreateWebhookTriggerRequest.h>
#include <tencentcloud/tcr/v20190924/model/CreateWebhookTriggerResponse.h>
#include <tencentcloud/tcr/v20190924/model/DeleteImageRequest.h>
#include <tencentcloud/tcr/v20190924/model/DeleteImageResponse.h>
#include <tencentcloud/tcr/v20190924/model/DeleteImageAccelerateServiceRequest.h>
#include <tencentcloud/tcr/v20190924/model/DeleteImageAccelerateServiceResponse.h>
#include <tencentcloud/tcr/v20190924/model/DeleteImmutableTagRulesRequest.h>
#include <tencentcloud/tcr/v20190924/model/DeleteImmutableTagRulesResponse.h>
#include <tencentcloud/tcr/v20190924/model/DeleteInstanceRequest.h>
#include <tencentcloud/tcr/v20190924/model/DeleteInstanceResponse.h>
#include <tencentcloud/tcr/v20190924/model/DeleteInstanceCustomizedDomainRequest.h>
#include <tencentcloud/tcr/v20190924/model/DeleteInstanceCustomizedDomainResponse.h>
#include <tencentcloud/tcr/v20190924/model/DeleteInstanceTokenRequest.h>
#include <tencentcloud/tcr/v20190924/model/DeleteInstanceTokenResponse.h>
#include <tencentcloud/tcr/v20190924/model/DeleteMultipleSecurityPolicyRequest.h>
#include <tencentcloud/tcr/v20190924/model/DeleteMultipleSecurityPolicyResponse.h>
#include <tencentcloud/tcr/v20190924/model/DeleteNamespaceRequest.h>
#include <tencentcloud/tcr/v20190924/model/DeleteNamespaceResponse.h>
#include <tencentcloud/tcr/v20190924/model/DeleteReplicationInstanceRequest.h>
#include <tencentcloud/tcr/v20190924/model/DeleteReplicationInstanceResponse.h>
#include <tencentcloud/tcr/v20190924/model/DeleteRepositoryRequest.h>
#include <tencentcloud/tcr/v20190924/model/DeleteRepositoryResponse.h>
#include <tencentcloud/tcr/v20190924/model/DeleteRepositoryTagsRequest.h>
#include <tencentcloud/tcr/v20190924/model/DeleteRepositoryTagsResponse.h>
#include <tencentcloud/tcr/v20190924/model/DeleteSecurityPolicyRequest.h>
#include <tencentcloud/tcr/v20190924/model/DeleteSecurityPolicyResponse.h>
#include <tencentcloud/tcr/v20190924/model/DeleteSignaturePolicyRequest.h>
#include <tencentcloud/tcr/v20190924/model/DeleteSignaturePolicyResponse.h>
#include <tencentcloud/tcr/v20190924/model/DeleteTagRetentionRuleRequest.h>
#include <tencentcloud/tcr/v20190924/model/DeleteTagRetentionRuleResponse.h>
#include <tencentcloud/tcr/v20190924/model/DeleteWebhookTriggerRequest.h>
#include <tencentcloud/tcr/v20190924/model/DeleteWebhookTriggerResponse.h>
#include <tencentcloud/tcr/v20190924/model/DescribeChartDownloadInfoRequest.h>
#include <tencentcloud/tcr/v20190924/model/DescribeChartDownloadInfoResponse.h>
#include <tencentcloud/tcr/v20190924/model/DescribeExternalEndpointStatusRequest.h>
#include <tencentcloud/tcr/v20190924/model/DescribeExternalEndpointStatusResponse.h>
#include <tencentcloud/tcr/v20190924/model/DescribeGCJobsRequest.h>
#include <tencentcloud/tcr/v20190924/model/DescribeGCJobsResponse.h>
#include <tencentcloud/tcr/v20190924/model/DescribeImageAccelerateServiceRequest.h>
#include <tencentcloud/tcr/v20190924/model/DescribeImageAccelerateServiceResponse.h>
#include <tencentcloud/tcr/v20190924/model/DescribeImageManifestsRequest.h>
#include <tencentcloud/tcr/v20190924/model/DescribeImageManifestsResponse.h>
#include <tencentcloud/tcr/v20190924/model/DescribeImagesRequest.h>
#include <tencentcloud/tcr/v20190924/model/DescribeImagesResponse.h>
#include <tencentcloud/tcr/v20190924/model/DescribeImmutableTagRulesRequest.h>
#include <tencentcloud/tcr/v20190924/model/DescribeImmutableTagRulesResponse.h>
#include <tencentcloud/tcr/v20190924/model/DescribeInstanceAllRequest.h>
#include <tencentcloud/tcr/v20190924/model/DescribeInstanceAllResponse.h>
#include <tencentcloud/tcr/v20190924/model/DescribeInstanceAllNamespacesRequest.h>
#include <tencentcloud/tcr/v20190924/model/DescribeInstanceAllNamespacesResponse.h>
#include <tencentcloud/tcr/v20190924/model/DescribeInstanceCustomizedDomainRequest.h>
#include <tencentcloud/tcr/v20190924/model/DescribeInstanceCustomizedDomainResponse.h>
#include <tencentcloud/tcr/v20190924/model/DescribeInstanceStatusRequest.h>
#include <tencentcloud/tcr/v20190924/model/DescribeInstanceStatusResponse.h>
#include <tencentcloud/tcr/v20190924/model/DescribeInstanceTokenRequest.h>
#include <tencentcloud/tcr/v20190924/model/DescribeInstanceTokenResponse.h>
#include <tencentcloud/tcr/v20190924/model/DescribeInstancesRequest.h>
#include <tencentcloud/tcr/v20190924/model/DescribeInstancesResponse.h>
#include <tencentcloud/tcr/v20190924/model/DescribeInternalEndpointsRequest.h>
#include <tencentcloud/tcr/v20190924/model/DescribeInternalEndpointsResponse.h>
#include <tencentcloud/tcr/v20190924/model/DescribeNamespacesRequest.h>
#include <tencentcloud/tcr/v20190924/model/DescribeNamespacesResponse.h>
#include <tencentcloud/tcr/v20190924/model/DescribeRegionsRequest.h>
#include <tencentcloud/tcr/v20190924/model/DescribeRegionsResponse.h>
#include <tencentcloud/tcr/v20190924/model/DescribeReplicationInstanceCreateTasksRequest.h>
#include <tencentcloud/tcr/v20190924/model/DescribeReplicationInstanceCreateTasksResponse.h>
#include <tencentcloud/tcr/v20190924/model/DescribeReplicationInstanceSyncStatusRequest.h>
#include <tencentcloud/tcr/v20190924/model/DescribeReplicationInstanceSyncStatusResponse.h>
#include <tencentcloud/tcr/v20190924/model/DescribeReplicationInstancesRequest.h>
#include <tencentcloud/tcr/v20190924/model/DescribeReplicationInstancesResponse.h>
#include <tencentcloud/tcr/v20190924/model/DescribeRepositoriesRequest.h>
#include <tencentcloud/tcr/v20190924/model/DescribeRepositoriesResponse.h>
#include <tencentcloud/tcr/v20190924/model/DescribeSecurityPoliciesRequest.h>
#include <tencentcloud/tcr/v20190924/model/DescribeSecurityPoliciesResponse.h>
#include <tencentcloud/tcr/v20190924/model/DescribeTagRetentionExecutionRequest.h>
#include <tencentcloud/tcr/v20190924/model/DescribeTagRetentionExecutionResponse.h>
#include <tencentcloud/tcr/v20190924/model/DescribeTagRetentionExecutionTaskRequest.h>
#include <tencentcloud/tcr/v20190924/model/DescribeTagRetentionExecutionTaskResponse.h>
#include <tencentcloud/tcr/v20190924/model/DescribeTagRetentionRulesRequest.h>
#include <tencentcloud/tcr/v20190924/model/DescribeTagRetentionRulesResponse.h>
#include <tencentcloud/tcr/v20190924/model/DescribeWebhookTriggerRequest.h>
#include <tencentcloud/tcr/v20190924/model/DescribeWebhookTriggerResponse.h>
#include <tencentcloud/tcr/v20190924/model/DescribeWebhookTriggerLogRequest.h>
#include <tencentcloud/tcr/v20190924/model/DescribeWebhookTriggerLogResponse.h>
#include <tencentcloud/tcr/v20190924/model/DownloadHelmChartRequest.h>
#include <tencentcloud/tcr/v20190924/model/DownloadHelmChartResponse.h>
#include <tencentcloud/tcr/v20190924/model/ManageExternalEndpointRequest.h>
#include <tencentcloud/tcr/v20190924/model/ManageExternalEndpointResponse.h>
#include <tencentcloud/tcr/v20190924/model/ManageInternalEndpointRequest.h>
#include <tencentcloud/tcr/v20190924/model/ManageInternalEndpointResponse.h>
#include <tencentcloud/tcr/v20190924/model/ManageReplicationRequest.h>
#include <tencentcloud/tcr/v20190924/model/ManageReplicationResponse.h>
#include <tencentcloud/tcr/v20190924/model/ModifyImmutableTagRulesRequest.h>
#include <tencentcloud/tcr/v20190924/model/ModifyImmutableTagRulesResponse.h>
#include <tencentcloud/tcr/v20190924/model/ModifyInstanceRequest.h>
#include <tencentcloud/tcr/v20190924/model/ModifyInstanceResponse.h>
#include <tencentcloud/tcr/v20190924/model/ModifyInstanceTokenRequest.h>
#include <tencentcloud/tcr/v20190924/model/ModifyInstanceTokenResponse.h>
#include <tencentcloud/tcr/v20190924/model/ModifyNamespaceRequest.h>
#include <tencentcloud/tcr/v20190924/model/ModifyNamespaceResponse.h>
#include <tencentcloud/tcr/v20190924/model/ModifyRepositoryRequest.h>
#include <tencentcloud/tcr/v20190924/model/ModifyRepositoryResponse.h>
#include <tencentcloud/tcr/v20190924/model/ModifySecurityPolicyRequest.h>
#include <tencentcloud/tcr/v20190924/model/ModifySecurityPolicyResponse.h>
#include <tencentcloud/tcr/v20190924/model/ModifyTagRetentionRuleRequest.h>
#include <tencentcloud/tcr/v20190924/model/ModifyTagRetentionRuleResponse.h>
#include <tencentcloud/tcr/v20190924/model/ModifyWebhookTriggerRequest.h>
#include <tencentcloud/tcr/v20190924/model/ModifyWebhookTriggerResponse.h>
#include <tencentcloud/tcr/v20190924/model/RenewInstanceRequest.h>
#include <tencentcloud/tcr/v20190924/model/RenewInstanceResponse.h>


namespace TencentCloud
{
    namespace Tcr
    {
        namespace V20190924
        {
            class TcrClient : public AbstractClient
            {
            public:
                TcrClient(const Credential &credential, const std::string &region);
                TcrClient(const Credential &credential, const std::string &region, const ClientProfile &profile);

                typedef Outcome<Core::Error, Model::CheckInstanceResponse> CheckInstanceOutcome;
                typedef std::future<CheckInstanceOutcome> CheckInstanceOutcomeCallable;
                typedef std::function<void(const TcrClient*, const Model::CheckInstanceRequest&, CheckInstanceOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CheckInstanceAsyncHandler;
                typedef Outcome<Core::Error, Model::CheckInstanceNameResponse> CheckInstanceNameOutcome;
                typedef std::future<CheckInstanceNameOutcome> CheckInstanceNameOutcomeCallable;
                typedef std::function<void(const TcrClient*, const Model::CheckInstanceNameRequest&, CheckInstanceNameOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CheckInstanceNameAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateImageAccelerationServiceResponse> CreateImageAccelerationServiceOutcome;
                typedef std::future<CreateImageAccelerationServiceOutcome> CreateImageAccelerationServiceOutcomeCallable;
                typedef std::function<void(const TcrClient*, const Model::CreateImageAccelerationServiceRequest&, CreateImageAccelerationServiceOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateImageAccelerationServiceAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateImmutableTagRulesResponse> CreateImmutableTagRulesOutcome;
                typedef std::future<CreateImmutableTagRulesOutcome> CreateImmutableTagRulesOutcomeCallable;
                typedef std::function<void(const TcrClient*, const Model::CreateImmutableTagRulesRequest&, CreateImmutableTagRulesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateImmutableTagRulesAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateInstanceResponse> CreateInstanceOutcome;
                typedef std::future<CreateInstanceOutcome> CreateInstanceOutcomeCallable;
                typedef std::function<void(const TcrClient*, const Model::CreateInstanceRequest&, CreateInstanceOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateInstanceAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateInstanceCustomizedDomainResponse> CreateInstanceCustomizedDomainOutcome;
                typedef std::future<CreateInstanceCustomizedDomainOutcome> CreateInstanceCustomizedDomainOutcomeCallable;
                typedef std::function<void(const TcrClient*, const Model::CreateInstanceCustomizedDomainRequest&, CreateInstanceCustomizedDomainOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateInstanceCustomizedDomainAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateInstanceTokenResponse> CreateInstanceTokenOutcome;
                typedef std::future<CreateInstanceTokenOutcome> CreateInstanceTokenOutcomeCallable;
                typedef std::function<void(const TcrClient*, const Model::CreateInstanceTokenRequest&, CreateInstanceTokenOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateInstanceTokenAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateMultipleSecurityPolicyResponse> CreateMultipleSecurityPolicyOutcome;
                typedef std::future<CreateMultipleSecurityPolicyOutcome> CreateMultipleSecurityPolicyOutcomeCallable;
                typedef std::function<void(const TcrClient*, const Model::CreateMultipleSecurityPolicyRequest&, CreateMultipleSecurityPolicyOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateMultipleSecurityPolicyAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateNamespaceResponse> CreateNamespaceOutcome;
                typedef std::future<CreateNamespaceOutcome> CreateNamespaceOutcomeCallable;
                typedef std::function<void(const TcrClient*, const Model::CreateNamespaceRequest&, CreateNamespaceOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateNamespaceAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateReplicationInstanceResponse> CreateReplicationInstanceOutcome;
                typedef std::future<CreateReplicationInstanceOutcome> CreateReplicationInstanceOutcomeCallable;
                typedef std::function<void(const TcrClient*, const Model::CreateReplicationInstanceRequest&, CreateReplicationInstanceOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateReplicationInstanceAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateRepositoryResponse> CreateRepositoryOutcome;
                typedef std::future<CreateRepositoryOutcome> CreateRepositoryOutcomeCallable;
                typedef std::function<void(const TcrClient*, const Model::CreateRepositoryRequest&, CreateRepositoryOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateRepositoryAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateSecurityPoliciesResponse> CreateSecurityPoliciesOutcome;
                typedef std::future<CreateSecurityPoliciesOutcome> CreateSecurityPoliciesOutcomeCallable;
                typedef std::function<void(const TcrClient*, const Model::CreateSecurityPoliciesRequest&, CreateSecurityPoliciesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateSecurityPoliciesAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateSecurityPolicyResponse> CreateSecurityPolicyOutcome;
                typedef std::future<CreateSecurityPolicyOutcome> CreateSecurityPolicyOutcomeCallable;
                typedef std::function<void(const TcrClient*, const Model::CreateSecurityPolicyRequest&, CreateSecurityPolicyOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateSecurityPolicyAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateSignatureResponse> CreateSignatureOutcome;
                typedef std::future<CreateSignatureOutcome> CreateSignatureOutcomeCallable;
                typedef std::function<void(const TcrClient*, const Model::CreateSignatureRequest&, CreateSignatureOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateSignatureAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateSignaturePolicyResponse> CreateSignaturePolicyOutcome;
                typedef std::future<CreateSignaturePolicyOutcome> CreateSignaturePolicyOutcomeCallable;
                typedef std::function<void(const TcrClient*, const Model::CreateSignaturePolicyRequest&, CreateSignaturePolicyOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateSignaturePolicyAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateTagRetentionExecutionResponse> CreateTagRetentionExecutionOutcome;
                typedef std::future<CreateTagRetentionExecutionOutcome> CreateTagRetentionExecutionOutcomeCallable;
                typedef std::function<void(const TcrClient*, const Model::CreateTagRetentionExecutionRequest&, CreateTagRetentionExecutionOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateTagRetentionExecutionAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateTagRetentionRuleResponse> CreateTagRetentionRuleOutcome;
                typedef std::future<CreateTagRetentionRuleOutcome> CreateTagRetentionRuleOutcomeCallable;
                typedef std::function<void(const TcrClient*, const Model::CreateTagRetentionRuleRequest&, CreateTagRetentionRuleOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateTagRetentionRuleAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateWebhookTriggerResponse> CreateWebhookTriggerOutcome;
                typedef std::future<CreateWebhookTriggerOutcome> CreateWebhookTriggerOutcomeCallable;
                typedef std::function<void(const TcrClient*, const Model::CreateWebhookTriggerRequest&, CreateWebhookTriggerOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateWebhookTriggerAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteImageResponse> DeleteImageOutcome;
                typedef std::future<DeleteImageOutcome> DeleteImageOutcomeCallable;
                typedef std::function<void(const TcrClient*, const Model::DeleteImageRequest&, DeleteImageOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteImageAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteImageAccelerateServiceResponse> DeleteImageAccelerateServiceOutcome;
                typedef std::future<DeleteImageAccelerateServiceOutcome> DeleteImageAccelerateServiceOutcomeCallable;
                typedef std::function<void(const TcrClient*, const Model::DeleteImageAccelerateServiceRequest&, DeleteImageAccelerateServiceOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteImageAccelerateServiceAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteImmutableTagRulesResponse> DeleteImmutableTagRulesOutcome;
                typedef std::future<DeleteImmutableTagRulesOutcome> DeleteImmutableTagRulesOutcomeCallable;
                typedef std::function<void(const TcrClient*, const Model::DeleteImmutableTagRulesRequest&, DeleteImmutableTagRulesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteImmutableTagRulesAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteInstanceResponse> DeleteInstanceOutcome;
                typedef std::future<DeleteInstanceOutcome> DeleteInstanceOutcomeCallable;
                typedef std::function<void(const TcrClient*, const Model::DeleteInstanceRequest&, DeleteInstanceOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteInstanceAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteInstanceCustomizedDomainResponse> DeleteInstanceCustomizedDomainOutcome;
                typedef std::future<DeleteInstanceCustomizedDomainOutcome> DeleteInstanceCustomizedDomainOutcomeCallable;
                typedef std::function<void(const TcrClient*, const Model::DeleteInstanceCustomizedDomainRequest&, DeleteInstanceCustomizedDomainOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteInstanceCustomizedDomainAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteInstanceTokenResponse> DeleteInstanceTokenOutcome;
                typedef std::future<DeleteInstanceTokenOutcome> DeleteInstanceTokenOutcomeCallable;
                typedef std::function<void(const TcrClient*, const Model::DeleteInstanceTokenRequest&, DeleteInstanceTokenOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteInstanceTokenAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteMultipleSecurityPolicyResponse> DeleteMultipleSecurityPolicyOutcome;
                typedef std::future<DeleteMultipleSecurityPolicyOutcome> DeleteMultipleSecurityPolicyOutcomeCallable;
                typedef std::function<void(const TcrClient*, const Model::DeleteMultipleSecurityPolicyRequest&, DeleteMultipleSecurityPolicyOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteMultipleSecurityPolicyAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteNamespaceResponse> DeleteNamespaceOutcome;
                typedef std::future<DeleteNamespaceOutcome> DeleteNamespaceOutcomeCallable;
                typedef std::function<void(const TcrClient*, const Model::DeleteNamespaceRequest&, DeleteNamespaceOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteNamespaceAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteReplicationInstanceResponse> DeleteReplicationInstanceOutcome;
                typedef std::future<DeleteReplicationInstanceOutcome> DeleteReplicationInstanceOutcomeCallable;
                typedef std::function<void(const TcrClient*, const Model::DeleteReplicationInstanceRequest&, DeleteReplicationInstanceOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteReplicationInstanceAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteRepositoryResponse> DeleteRepositoryOutcome;
                typedef std::future<DeleteRepositoryOutcome> DeleteRepositoryOutcomeCallable;
                typedef std::function<void(const TcrClient*, const Model::DeleteRepositoryRequest&, DeleteRepositoryOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteRepositoryAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteRepositoryTagsResponse> DeleteRepositoryTagsOutcome;
                typedef std::future<DeleteRepositoryTagsOutcome> DeleteRepositoryTagsOutcomeCallable;
                typedef std::function<void(const TcrClient*, const Model::DeleteRepositoryTagsRequest&, DeleteRepositoryTagsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteRepositoryTagsAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteSecurityPolicyResponse> DeleteSecurityPolicyOutcome;
                typedef std::future<DeleteSecurityPolicyOutcome> DeleteSecurityPolicyOutcomeCallable;
                typedef std::function<void(const TcrClient*, const Model::DeleteSecurityPolicyRequest&, DeleteSecurityPolicyOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteSecurityPolicyAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteSignaturePolicyResponse> DeleteSignaturePolicyOutcome;
                typedef std::future<DeleteSignaturePolicyOutcome> DeleteSignaturePolicyOutcomeCallable;
                typedef std::function<void(const TcrClient*, const Model::DeleteSignaturePolicyRequest&, DeleteSignaturePolicyOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteSignaturePolicyAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteTagRetentionRuleResponse> DeleteTagRetentionRuleOutcome;
                typedef std::future<DeleteTagRetentionRuleOutcome> DeleteTagRetentionRuleOutcomeCallable;
                typedef std::function<void(const TcrClient*, const Model::DeleteTagRetentionRuleRequest&, DeleteTagRetentionRuleOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteTagRetentionRuleAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteWebhookTriggerResponse> DeleteWebhookTriggerOutcome;
                typedef std::future<DeleteWebhookTriggerOutcome> DeleteWebhookTriggerOutcomeCallable;
                typedef std::function<void(const TcrClient*, const Model::DeleteWebhookTriggerRequest&, DeleteWebhookTriggerOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteWebhookTriggerAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeChartDownloadInfoResponse> DescribeChartDownloadInfoOutcome;
                typedef std::future<DescribeChartDownloadInfoOutcome> DescribeChartDownloadInfoOutcomeCallable;
                typedef std::function<void(const TcrClient*, const Model::DescribeChartDownloadInfoRequest&, DescribeChartDownloadInfoOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeChartDownloadInfoAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeExternalEndpointStatusResponse> DescribeExternalEndpointStatusOutcome;
                typedef std::future<DescribeExternalEndpointStatusOutcome> DescribeExternalEndpointStatusOutcomeCallable;
                typedef std::function<void(const TcrClient*, const Model::DescribeExternalEndpointStatusRequest&, DescribeExternalEndpointStatusOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeExternalEndpointStatusAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeGCJobsResponse> DescribeGCJobsOutcome;
                typedef std::future<DescribeGCJobsOutcome> DescribeGCJobsOutcomeCallable;
                typedef std::function<void(const TcrClient*, const Model::DescribeGCJobsRequest&, DescribeGCJobsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeGCJobsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeImageAccelerateServiceResponse> DescribeImageAccelerateServiceOutcome;
                typedef std::future<DescribeImageAccelerateServiceOutcome> DescribeImageAccelerateServiceOutcomeCallable;
                typedef std::function<void(const TcrClient*, const Model::DescribeImageAccelerateServiceRequest&, DescribeImageAccelerateServiceOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeImageAccelerateServiceAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeImageManifestsResponse> DescribeImageManifestsOutcome;
                typedef std::future<DescribeImageManifestsOutcome> DescribeImageManifestsOutcomeCallable;
                typedef std::function<void(const TcrClient*, const Model::DescribeImageManifestsRequest&, DescribeImageManifestsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeImageManifestsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeImagesResponse> DescribeImagesOutcome;
                typedef std::future<DescribeImagesOutcome> DescribeImagesOutcomeCallable;
                typedef std::function<void(const TcrClient*, const Model::DescribeImagesRequest&, DescribeImagesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeImagesAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeImmutableTagRulesResponse> DescribeImmutableTagRulesOutcome;
                typedef std::future<DescribeImmutableTagRulesOutcome> DescribeImmutableTagRulesOutcomeCallable;
                typedef std::function<void(const TcrClient*, const Model::DescribeImmutableTagRulesRequest&, DescribeImmutableTagRulesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeImmutableTagRulesAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeInstanceAllResponse> DescribeInstanceAllOutcome;
                typedef std::future<DescribeInstanceAllOutcome> DescribeInstanceAllOutcomeCallable;
                typedef std::function<void(const TcrClient*, const Model::DescribeInstanceAllRequest&, DescribeInstanceAllOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeInstanceAllAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeInstanceAllNamespacesResponse> DescribeInstanceAllNamespacesOutcome;
                typedef std::future<DescribeInstanceAllNamespacesOutcome> DescribeInstanceAllNamespacesOutcomeCallable;
                typedef std::function<void(const TcrClient*, const Model::DescribeInstanceAllNamespacesRequest&, DescribeInstanceAllNamespacesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeInstanceAllNamespacesAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeInstanceCustomizedDomainResponse> DescribeInstanceCustomizedDomainOutcome;
                typedef std::future<DescribeInstanceCustomizedDomainOutcome> DescribeInstanceCustomizedDomainOutcomeCallable;
                typedef std::function<void(const TcrClient*, const Model::DescribeInstanceCustomizedDomainRequest&, DescribeInstanceCustomizedDomainOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeInstanceCustomizedDomainAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeInstanceStatusResponse> DescribeInstanceStatusOutcome;
                typedef std::future<DescribeInstanceStatusOutcome> DescribeInstanceStatusOutcomeCallable;
                typedef std::function<void(const TcrClient*, const Model::DescribeInstanceStatusRequest&, DescribeInstanceStatusOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeInstanceStatusAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeInstanceTokenResponse> DescribeInstanceTokenOutcome;
                typedef std::future<DescribeInstanceTokenOutcome> DescribeInstanceTokenOutcomeCallable;
                typedef std::function<void(const TcrClient*, const Model::DescribeInstanceTokenRequest&, DescribeInstanceTokenOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeInstanceTokenAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeInstancesResponse> DescribeInstancesOutcome;
                typedef std::future<DescribeInstancesOutcome> DescribeInstancesOutcomeCallable;
                typedef std::function<void(const TcrClient*, const Model::DescribeInstancesRequest&, DescribeInstancesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeInstancesAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeInternalEndpointsResponse> DescribeInternalEndpointsOutcome;
                typedef std::future<DescribeInternalEndpointsOutcome> DescribeInternalEndpointsOutcomeCallable;
                typedef std::function<void(const TcrClient*, const Model::DescribeInternalEndpointsRequest&, DescribeInternalEndpointsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeInternalEndpointsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeNamespacesResponse> DescribeNamespacesOutcome;
                typedef std::future<DescribeNamespacesOutcome> DescribeNamespacesOutcomeCallable;
                typedef std::function<void(const TcrClient*, const Model::DescribeNamespacesRequest&, DescribeNamespacesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeNamespacesAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeRegionsResponse> DescribeRegionsOutcome;
                typedef std::future<DescribeRegionsOutcome> DescribeRegionsOutcomeCallable;
                typedef std::function<void(const TcrClient*, const Model::DescribeRegionsRequest&, DescribeRegionsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeRegionsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeReplicationInstanceCreateTasksResponse> DescribeReplicationInstanceCreateTasksOutcome;
                typedef std::future<DescribeReplicationInstanceCreateTasksOutcome> DescribeReplicationInstanceCreateTasksOutcomeCallable;
                typedef std::function<void(const TcrClient*, const Model::DescribeReplicationInstanceCreateTasksRequest&, DescribeReplicationInstanceCreateTasksOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeReplicationInstanceCreateTasksAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeReplicationInstanceSyncStatusResponse> DescribeReplicationInstanceSyncStatusOutcome;
                typedef std::future<DescribeReplicationInstanceSyncStatusOutcome> DescribeReplicationInstanceSyncStatusOutcomeCallable;
                typedef std::function<void(const TcrClient*, const Model::DescribeReplicationInstanceSyncStatusRequest&, DescribeReplicationInstanceSyncStatusOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeReplicationInstanceSyncStatusAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeReplicationInstancesResponse> DescribeReplicationInstancesOutcome;
                typedef std::future<DescribeReplicationInstancesOutcome> DescribeReplicationInstancesOutcomeCallable;
                typedef std::function<void(const TcrClient*, const Model::DescribeReplicationInstancesRequest&, DescribeReplicationInstancesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeReplicationInstancesAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeRepositoriesResponse> DescribeRepositoriesOutcome;
                typedef std::future<DescribeRepositoriesOutcome> DescribeRepositoriesOutcomeCallable;
                typedef std::function<void(const TcrClient*, const Model::DescribeRepositoriesRequest&, DescribeRepositoriesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeRepositoriesAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeSecurityPoliciesResponse> DescribeSecurityPoliciesOutcome;
                typedef std::future<DescribeSecurityPoliciesOutcome> DescribeSecurityPoliciesOutcomeCallable;
                typedef std::function<void(const TcrClient*, const Model::DescribeSecurityPoliciesRequest&, DescribeSecurityPoliciesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeSecurityPoliciesAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeTagRetentionExecutionResponse> DescribeTagRetentionExecutionOutcome;
                typedef std::future<DescribeTagRetentionExecutionOutcome> DescribeTagRetentionExecutionOutcomeCallable;
                typedef std::function<void(const TcrClient*, const Model::DescribeTagRetentionExecutionRequest&, DescribeTagRetentionExecutionOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeTagRetentionExecutionAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeTagRetentionExecutionTaskResponse> DescribeTagRetentionExecutionTaskOutcome;
                typedef std::future<DescribeTagRetentionExecutionTaskOutcome> DescribeTagRetentionExecutionTaskOutcomeCallable;
                typedef std::function<void(const TcrClient*, const Model::DescribeTagRetentionExecutionTaskRequest&, DescribeTagRetentionExecutionTaskOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeTagRetentionExecutionTaskAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeTagRetentionRulesResponse> DescribeTagRetentionRulesOutcome;
                typedef std::future<DescribeTagRetentionRulesOutcome> DescribeTagRetentionRulesOutcomeCallable;
                typedef std::function<void(const TcrClient*, const Model::DescribeTagRetentionRulesRequest&, DescribeTagRetentionRulesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeTagRetentionRulesAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeWebhookTriggerResponse> DescribeWebhookTriggerOutcome;
                typedef std::future<DescribeWebhookTriggerOutcome> DescribeWebhookTriggerOutcomeCallable;
                typedef std::function<void(const TcrClient*, const Model::DescribeWebhookTriggerRequest&, DescribeWebhookTriggerOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeWebhookTriggerAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeWebhookTriggerLogResponse> DescribeWebhookTriggerLogOutcome;
                typedef std::future<DescribeWebhookTriggerLogOutcome> DescribeWebhookTriggerLogOutcomeCallable;
                typedef std::function<void(const TcrClient*, const Model::DescribeWebhookTriggerLogRequest&, DescribeWebhookTriggerLogOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeWebhookTriggerLogAsyncHandler;
                typedef Outcome<Core::Error, Model::DownloadHelmChartResponse> DownloadHelmChartOutcome;
                typedef std::future<DownloadHelmChartOutcome> DownloadHelmChartOutcomeCallable;
                typedef std::function<void(const TcrClient*, const Model::DownloadHelmChartRequest&, DownloadHelmChartOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DownloadHelmChartAsyncHandler;
                typedef Outcome<Core::Error, Model::ManageExternalEndpointResponse> ManageExternalEndpointOutcome;
                typedef std::future<ManageExternalEndpointOutcome> ManageExternalEndpointOutcomeCallable;
                typedef std::function<void(const TcrClient*, const Model::ManageExternalEndpointRequest&, ManageExternalEndpointOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ManageExternalEndpointAsyncHandler;
                typedef Outcome<Core::Error, Model::ManageInternalEndpointResponse> ManageInternalEndpointOutcome;
                typedef std::future<ManageInternalEndpointOutcome> ManageInternalEndpointOutcomeCallable;
                typedef std::function<void(const TcrClient*, const Model::ManageInternalEndpointRequest&, ManageInternalEndpointOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ManageInternalEndpointAsyncHandler;
                typedef Outcome<Core::Error, Model::ManageReplicationResponse> ManageReplicationOutcome;
                typedef std::future<ManageReplicationOutcome> ManageReplicationOutcomeCallable;
                typedef std::function<void(const TcrClient*, const Model::ManageReplicationRequest&, ManageReplicationOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ManageReplicationAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyImmutableTagRulesResponse> ModifyImmutableTagRulesOutcome;
                typedef std::future<ModifyImmutableTagRulesOutcome> ModifyImmutableTagRulesOutcomeCallable;
                typedef std::function<void(const TcrClient*, const Model::ModifyImmutableTagRulesRequest&, ModifyImmutableTagRulesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyImmutableTagRulesAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyInstanceResponse> ModifyInstanceOutcome;
                typedef std::future<ModifyInstanceOutcome> ModifyInstanceOutcomeCallable;
                typedef std::function<void(const TcrClient*, const Model::ModifyInstanceRequest&, ModifyInstanceOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyInstanceAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyInstanceTokenResponse> ModifyInstanceTokenOutcome;
                typedef std::future<ModifyInstanceTokenOutcome> ModifyInstanceTokenOutcomeCallable;
                typedef std::function<void(const TcrClient*, const Model::ModifyInstanceTokenRequest&, ModifyInstanceTokenOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyInstanceTokenAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyNamespaceResponse> ModifyNamespaceOutcome;
                typedef std::future<ModifyNamespaceOutcome> ModifyNamespaceOutcomeCallable;
                typedef std::function<void(const TcrClient*, const Model::ModifyNamespaceRequest&, ModifyNamespaceOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyNamespaceAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyRepositoryResponse> ModifyRepositoryOutcome;
                typedef std::future<ModifyRepositoryOutcome> ModifyRepositoryOutcomeCallable;
                typedef std::function<void(const TcrClient*, const Model::ModifyRepositoryRequest&, ModifyRepositoryOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyRepositoryAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifySecurityPolicyResponse> ModifySecurityPolicyOutcome;
                typedef std::future<ModifySecurityPolicyOutcome> ModifySecurityPolicyOutcomeCallable;
                typedef std::function<void(const TcrClient*, const Model::ModifySecurityPolicyRequest&, ModifySecurityPolicyOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifySecurityPolicyAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyTagRetentionRuleResponse> ModifyTagRetentionRuleOutcome;
                typedef std::future<ModifyTagRetentionRuleOutcome> ModifyTagRetentionRuleOutcomeCallable;
                typedef std::function<void(const TcrClient*, const Model::ModifyTagRetentionRuleRequest&, ModifyTagRetentionRuleOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyTagRetentionRuleAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyWebhookTriggerResponse> ModifyWebhookTriggerOutcome;
                typedef std::future<ModifyWebhookTriggerOutcome> ModifyWebhookTriggerOutcomeCallable;
                typedef std::function<void(const TcrClient*, const Model::ModifyWebhookTriggerRequest&, ModifyWebhookTriggerOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyWebhookTriggerAsyncHandler;
                typedef Outcome<Core::Error, Model::RenewInstanceResponse> RenewInstanceOutcome;
                typedef std::future<RenewInstanceOutcome> RenewInstanceOutcomeCallable;
                typedef std::function<void(const TcrClient*, const Model::RenewInstanceRequest&, RenewInstanceOutcome, const std::shared_ptr<const AsyncCallerContext>&)> RenewInstanceAsyncHandler;



                /**
                 *This API is used to verify the information of the Enterprise Edition instance.
                 * @param req CheckInstanceRequest
                 * @return CheckInstanceOutcome
                 */
                CheckInstanceOutcome CheckInstance(const Model::CheckInstanceRequest &request);
                void CheckInstanceAsync(const Model::CheckInstanceRequest& request, const CheckInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CheckInstanceOutcomeCallable CheckInstanceCallable(const Model::CheckInstanceRequest& request);

                /**
                 *This API is used to check whether the name of the instance to be created meets the specifications.
                 * @param req CheckInstanceNameRequest
                 * @return CheckInstanceNameOutcome
                 */
                CheckInstanceNameOutcome CheckInstanceName(const Model::CheckInstanceNameRequest &request);
                void CheckInstanceNameAsync(const Model::CheckInstanceNameRequest& request, const CheckInstanceNameAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CheckInstanceNameOutcomeCallable CheckInstanceNameCallable(const Model::CheckInstanceNameRequest& request);

                /**
                 *This API is used to create an image acceleration service.
                 * @param req CreateImageAccelerationServiceRequest
                 * @return CreateImageAccelerationServiceOutcome
                 */
                CreateImageAccelerationServiceOutcome CreateImageAccelerationService(const Model::CreateImageAccelerationServiceRequest &request);
                void CreateImageAccelerationServiceAsync(const Model::CreateImageAccelerationServiceRequest& request, const CreateImageAccelerationServiceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateImageAccelerationServiceOutcomeCallable CreateImageAccelerationServiceCallable(const Model::CreateImageAccelerationServiceRequest& request);

                /**
                 *This API is used to create the tag immutability rule.
                 * @param req CreateImmutableTagRulesRequest
                 * @return CreateImmutableTagRulesOutcome
                 */
                CreateImmutableTagRulesOutcome CreateImmutableTagRules(const Model::CreateImmutableTagRulesRequest &request);
                void CreateImmutableTagRulesAsync(const Model::CreateImmutableTagRulesRequest& request, const CreateImmutableTagRulesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateImmutableTagRulesOutcomeCallable CreateImmutableTagRulesCallable(const Model::CreateImmutableTagRulesRequest& request);

                /**
                 *This API is used to create an instance.
                 * @param req CreateInstanceRequest
                 * @return CreateInstanceOutcome
                 */
                CreateInstanceOutcome CreateInstance(const Model::CreateInstanceRequest &request);
                void CreateInstanceAsync(const Model::CreateInstanceRequest& request, const CreateInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateInstanceOutcomeCallable CreateInstanceCallable(const Model::CreateInstanceRequest& request);

                /**
                 *This API is used to create a custom domain name.
                 * @param req CreateInstanceCustomizedDomainRequest
                 * @return CreateInstanceCustomizedDomainOutcome
                 */
                CreateInstanceCustomizedDomainOutcome CreateInstanceCustomizedDomain(const Model::CreateInstanceCustomizedDomainRequest &request);
                void CreateInstanceCustomizedDomainAsync(const Model::CreateInstanceCustomizedDomainRequest& request, const CreateInstanceCustomizedDomainAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateInstanceCustomizedDomainOutcomeCallable CreateInstanceCustomizedDomainCallable(const Model::CreateInstanceCustomizedDomainRequest& request);

                /**
                 *This API is used to create a temporary or long-term instance access credential.
                 * @param req CreateInstanceTokenRequest
                 * @return CreateInstanceTokenOutcome
                 */
                CreateInstanceTokenOutcome CreateInstanceToken(const Model::CreateInstanceTokenRequest &request);
                void CreateInstanceTokenAsync(const Model::CreateInstanceTokenRequest& request, const CreateInstanceTokenAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateInstanceTokenOutcomeCallable CreateInstanceTokenCallable(const Model::CreateInstanceTokenRequest& request);

                /**
                 *This API is used to create multiple public network access allowlist policies of the TCR instance.
                 * @param req CreateMultipleSecurityPolicyRequest
                 * @return CreateMultipleSecurityPolicyOutcome
                 */
                CreateMultipleSecurityPolicyOutcome CreateMultipleSecurityPolicy(const Model::CreateMultipleSecurityPolicyRequest &request);
                void CreateMultipleSecurityPolicyAsync(const Model::CreateMultipleSecurityPolicyRequest& request, const CreateMultipleSecurityPolicyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateMultipleSecurityPolicyOutcomeCallable CreateMultipleSecurityPolicyCallable(const Model::CreateMultipleSecurityPolicyRequest& request);

                /**
                 *This API is used to create a namespace in an Enterprise Edition instance.
                 * @param req CreateNamespaceRequest
                 * @return CreateNamespaceOutcome
                 */
                CreateNamespaceOutcome CreateNamespace(const Model::CreateNamespaceRequest &request);
                void CreateNamespaceAsync(const Model::CreateNamespaceRequest& request, const CreateNamespaceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateNamespaceOutcomeCallable CreateNamespaceCallable(const Model::CreateNamespaceRequest& request);

                /**
                 *This API is used to create a replication instance.
                 * @param req CreateReplicationInstanceRequest
                 * @return CreateReplicationInstanceOutcome
                 */
                CreateReplicationInstanceOutcome CreateReplicationInstance(const Model::CreateReplicationInstanceRequest &request);
                void CreateReplicationInstanceAsync(const Model::CreateReplicationInstanceRequest& request, const CreateReplicationInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateReplicationInstanceOutcomeCallable CreateReplicationInstanceCallable(const Model::CreateReplicationInstanceRequest& request);

                /**
                 *This API is used to create an image repository in an Enterprise Edition instance.
                 * @param req CreateRepositoryRequest
                 * @return CreateRepositoryOutcome
                 */
                CreateRepositoryOutcome CreateRepository(const Model::CreateRepositoryRequest &request);
                void CreateRepositoryAsync(const Model::CreateRepositoryRequest& request, const CreateRepositoryAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateRepositoryOutcomeCallable CreateRepositoryCallable(const Model::CreateRepositoryRequest& request);

                /**
                 *This API is used to create public network access allowlist policies for an instance.
                 * @param req CreateSecurityPoliciesRequest
                 * @return CreateSecurityPoliciesOutcome
                 */
                CreateSecurityPoliciesOutcome CreateSecurityPolicies(const Model::CreateSecurityPoliciesRequest &request);
                void CreateSecurityPoliciesAsync(const Model::CreateSecurityPoliciesRequest& request, const CreateSecurityPoliciesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateSecurityPoliciesOutcomeCallable CreateSecurityPoliciesCallable(const Model::CreateSecurityPoliciesRequest& request);

                /**
                 *This API is used to create a public network access allowlist policy for an instance.
                 * @param req CreateSecurityPolicyRequest
                 * @return CreateSecurityPolicyOutcome
                 */
                CreateSecurityPolicyOutcome CreateSecurityPolicy(const Model::CreateSecurityPolicyRequest &request);
                void CreateSecurityPolicyAsync(const Model::CreateSecurityPolicyRequest& request, const CreateSecurityPolicyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateSecurityPolicyOutcomeCallable CreateSecurityPolicyCallable(const Model::CreateSecurityPolicyRequest& request);

                /**
                 *This API is used to create a signature for an image tag.
                 * @param req CreateSignatureRequest
                 * @return CreateSignatureOutcome
                 */
                CreateSignatureOutcome CreateSignature(const Model::CreateSignatureRequest &request);
                void CreateSignatureAsync(const Model::CreateSignatureRequest& request, const CreateSignatureAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateSignatureOutcomeCallable CreateSignatureCallable(const Model::CreateSignatureRequest& request);

                /**
                 *This API is used to create an image signature policy.
                 * @param req CreateSignaturePolicyRequest
                 * @return CreateSignaturePolicyOutcome
                 */
                CreateSignaturePolicyOutcome CreateSignaturePolicy(const Model::CreateSignaturePolicyRequest &request);
                void CreateSignaturePolicyAsync(const Model::CreateSignaturePolicyRequest& request, const CreateSignaturePolicyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateSignaturePolicyOutcomeCallable CreateSignaturePolicyCallable(const Model::CreateSignaturePolicyRequest& request);

                /**
                 *This API is used to execute tag retention manually.
                 * @param req CreateTagRetentionExecutionRequest
                 * @return CreateTagRetentionExecutionOutcome
                 */
                CreateTagRetentionExecutionOutcome CreateTagRetentionExecution(const Model::CreateTagRetentionExecutionRequest &request);
                void CreateTagRetentionExecutionAsync(const Model::CreateTagRetentionExecutionRequest& request, const CreateTagRetentionExecutionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateTagRetentionExecutionOutcomeCallable CreateTagRetentionExecutionCallable(const Model::CreateTagRetentionExecutionRequest& request);

                /**
                 *This API is used to create a tag retention rule.
                 * @param req CreateTagRetentionRuleRequest
                 * @return CreateTagRetentionRuleOutcome
                 */
                CreateTagRetentionRuleOutcome CreateTagRetentionRule(const Model::CreateTagRetentionRuleRequest &request);
                void CreateTagRetentionRuleAsync(const Model::CreateTagRetentionRuleRequest& request, const CreateTagRetentionRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateTagRetentionRuleOutcomeCallable CreateTagRetentionRuleCallable(const Model::CreateTagRetentionRuleRequest& request);

                /**
                 *This API is used to create a trigger.
                 * @param req CreateWebhookTriggerRequest
                 * @return CreateWebhookTriggerOutcome
                 */
                CreateWebhookTriggerOutcome CreateWebhookTrigger(const Model::CreateWebhookTriggerRequest &request);
                void CreateWebhookTriggerAsync(const Model::CreateWebhookTriggerRequest& request, const CreateWebhookTriggerAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateWebhookTriggerOutcomeCallable CreateWebhookTriggerCallable(const Model::CreateWebhookTriggerRequest& request);

                /**
                 *This API is used to delete the specified image.
                 * @param req DeleteImageRequest
                 * @return DeleteImageOutcome
                 */
                DeleteImageOutcome DeleteImage(const Model::DeleteImageRequest &request);
                void DeleteImageAsync(const Model::DeleteImageRequest& request, const DeleteImageAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteImageOutcomeCallable DeleteImageCallable(const Model::DeleteImageRequest& request);

                /**
                 *This API is used to delete an image acceleration service.
                 * @param req DeleteImageAccelerateServiceRequest
                 * @return DeleteImageAccelerateServiceOutcome
                 */
                DeleteImageAccelerateServiceOutcome DeleteImageAccelerateService(const Model::DeleteImageAccelerateServiceRequest &request);
                void DeleteImageAccelerateServiceAsync(const Model::DeleteImageAccelerateServiceRequest& request, const DeleteImageAccelerateServiceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteImageAccelerateServiceOutcomeCallable DeleteImageAccelerateServiceCallable(const Model::DeleteImageAccelerateServiceRequest& request);

                /**
                 * This API is used to delete the tag immutability rule.
                 * @param req DeleteImmutableTagRulesRequest
                 * @return DeleteImmutableTagRulesOutcome
                 */
                DeleteImmutableTagRulesOutcome DeleteImmutableTagRules(const Model::DeleteImmutableTagRulesRequest &request);
                void DeleteImmutableTagRulesAsync(const Model::DeleteImmutableTagRulesRequest& request, const DeleteImmutableTagRulesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteImmutableTagRulesOutcomeCallable DeleteImmutableTagRulesCallable(const Model::DeleteImmutableTagRulesRequest& request);

                /**
                 *This API is used to delete a TCR Enterprise Edition instance.
                 * @param req DeleteInstanceRequest
                 * @return DeleteInstanceOutcome
                 */
                DeleteInstanceOutcome DeleteInstance(const Model::DeleteInstanceRequest &request);
                void DeleteInstanceAsync(const Model::DeleteInstanceRequest& request, const DeleteInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteInstanceOutcomeCallable DeleteInstanceCallable(const Model::DeleteInstanceRequest& request);

                /**
                 *This API is used to delete a custom domain name.
                 * @param req DeleteInstanceCustomizedDomainRequest
                 * @return DeleteInstanceCustomizedDomainOutcome
                 */
                DeleteInstanceCustomizedDomainOutcome DeleteInstanceCustomizedDomain(const Model::DeleteInstanceCustomizedDomainRequest &request);
                void DeleteInstanceCustomizedDomainAsync(const Model::DeleteInstanceCustomizedDomainRequest& request, const DeleteInstanceCustomizedDomainAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteInstanceCustomizedDomainOutcomeCallable DeleteInstanceCustomizedDomainCallable(const Model::DeleteInstanceCustomizedDomainRequest& request);

                /**
                 *This API is used to delete a long-term access credential.
                 * @param req DeleteInstanceTokenRequest
                 * @return DeleteInstanceTokenOutcome
                 */
                DeleteInstanceTokenOutcome DeleteInstanceToken(const Model::DeleteInstanceTokenRequest &request);
                void DeleteInstanceTokenAsync(const Model::DeleteInstanceTokenRequest& request, const DeleteInstanceTokenAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteInstanceTokenOutcomeCallable DeleteInstanceTokenCallable(const Model::DeleteInstanceTokenRequest& request);

                /**
                 *This API is used to delete multiple public network access allowlist policies of the instance.
                 * @param req DeleteMultipleSecurityPolicyRequest
                 * @return DeleteMultipleSecurityPolicyOutcome
                 */
                DeleteMultipleSecurityPolicyOutcome DeleteMultipleSecurityPolicy(const Model::DeleteMultipleSecurityPolicyRequest &request);
                void DeleteMultipleSecurityPolicyAsync(const Model::DeleteMultipleSecurityPolicyRequest& request, const DeleteMultipleSecurityPolicyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteMultipleSecurityPolicyOutcomeCallable DeleteMultipleSecurityPolicyCallable(const Model::DeleteMultipleSecurityPolicyRequest& request);

                /**
                 *This API is used to delete a namespace.
                 * @param req DeleteNamespaceRequest
                 * @return DeleteNamespaceOutcome
                 */
                DeleteNamespaceOutcome DeleteNamespace(const Model::DeleteNamespaceRequest &request);
                void DeleteNamespaceAsync(const Model::DeleteNamespaceRequest& request, const DeleteNamespaceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteNamespaceOutcomeCallable DeleteNamespaceCallable(const Model::DeleteNamespaceRequest& request);

                /**
                 *This API is used to delete a replica instance.
                 * @param req DeleteReplicationInstanceRequest
                 * @return DeleteReplicationInstanceOutcome
                 */
                DeleteReplicationInstanceOutcome DeleteReplicationInstance(const Model::DeleteReplicationInstanceRequest &request);
                void DeleteReplicationInstanceAsync(const Model::DeleteReplicationInstanceRequest& request, const DeleteReplicationInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteReplicationInstanceOutcomeCallable DeleteReplicationInstanceCallable(const Model::DeleteReplicationInstanceRequest& request);

                /**
                 *This API is used to delete an image repository.
                 * @param req DeleteRepositoryRequest
                 * @return DeleteRepositoryOutcome
                 */
                DeleteRepositoryOutcome DeleteRepository(const Model::DeleteRepositoryRequest &request);
                void DeleteRepositoryAsync(const Model::DeleteRepositoryRequest& request, const DeleteRepositoryAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteRepositoryOutcomeCallable DeleteRepositoryCallable(const Model::DeleteRepositoryRequest& request);

                /**
                 *This API is used to batch delete repository tags in an Enterprise Edition instance.
                 * @param req DeleteRepositoryTagsRequest
                 * @return DeleteRepositoryTagsOutcome
                 */
                DeleteRepositoryTagsOutcome DeleteRepositoryTags(const Model::DeleteRepositoryTagsRequest &request);
                void DeleteRepositoryTagsAsync(const Model::DeleteRepositoryTagsRequest& request, const DeleteRepositoryTagsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteRepositoryTagsOutcomeCallable DeleteRepositoryTagsCallable(const Model::DeleteRepositoryTagsRequest& request);

                /**
                 *This API is used to delete a public network access allowlist policy of an instance.
                 * @param req DeleteSecurityPolicyRequest
                 * @return DeleteSecurityPolicyOutcome
                 */
                DeleteSecurityPolicyOutcome DeleteSecurityPolicy(const Model::DeleteSecurityPolicyRequest &request);
                void DeleteSecurityPolicyAsync(const Model::DeleteSecurityPolicyRequest& request, const DeleteSecurityPolicyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteSecurityPolicyOutcomeCallable DeleteSecurityPolicyCallable(const Model::DeleteSecurityPolicyRequest& request);

                /**
                 *This API is used to delete a namespace signing policy.
                 * @param req DeleteSignaturePolicyRequest
                 * @return DeleteSignaturePolicyOutcome
                 */
                DeleteSignaturePolicyOutcome DeleteSignaturePolicy(const Model::DeleteSignaturePolicyRequest &request);
                void DeleteSignaturePolicyAsync(const Model::DeleteSignaturePolicyRequest& request, const DeleteSignaturePolicyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteSignaturePolicyOutcomeCallable DeleteSignaturePolicyCallable(const Model::DeleteSignaturePolicyRequest& request);

                /**
                 *This API is used to delete a tag retention rule.
                 * @param req DeleteTagRetentionRuleRequest
                 * @return DeleteTagRetentionRuleOutcome
                 */
                DeleteTagRetentionRuleOutcome DeleteTagRetentionRule(const Model::DeleteTagRetentionRuleRequest &request);
                void DeleteTagRetentionRuleAsync(const Model::DeleteTagRetentionRuleRequest& request, const DeleteTagRetentionRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteTagRetentionRuleOutcomeCallable DeleteTagRetentionRuleCallable(const Model::DeleteTagRetentionRuleRequest& request);

                /**
                 *This API is used to delete a trigger.
                 * @param req DeleteWebhookTriggerRequest
                 * @return DeleteWebhookTriggerOutcome
                 */
                DeleteWebhookTriggerOutcome DeleteWebhookTrigger(const Model::DeleteWebhookTriggerRequest &request);
                void DeleteWebhookTriggerAsync(const Model::DeleteWebhookTriggerRequest& request, const DeleteWebhookTriggerAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteWebhookTriggerOutcomeCallable DeleteWebhookTriggerCallable(const Model::DeleteWebhookTriggerRequest& request);

                /**
                 *This API is used to return the chart download information in an Enterprise Edition instance.
                 * @param req DescribeChartDownloadInfoRequest
                 * @return DescribeChartDownloadInfoOutcome
                 */
                DescribeChartDownloadInfoOutcome DescribeChartDownloadInfo(const Model::DescribeChartDownloadInfoRequest &request);
                void DescribeChartDownloadInfoAsync(const Model::DescribeChartDownloadInfoRequest& request, const DescribeChartDownloadInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeChartDownloadInfoOutcomeCallable DescribeChartDownloadInfoCallable(const Model::DescribeChartDownloadInfoRequest& request);

                /**
                 *This API is used to query the public network access entry status of an instance.
                 * @param req DescribeExternalEndpointStatusRequest
                 * @return DescribeExternalEndpointStatusOutcome
                 */
                DescribeExternalEndpointStatusOutcome DescribeExternalEndpointStatus(const Model::DescribeExternalEndpointStatusRequest &request);
                void DescribeExternalEndpointStatusAsync(const Model::DescribeExternalEndpointStatusRequest& request, const DescribeExternalEndpointStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeExternalEndpointStatusOutcomeCallable DescribeExternalEndpointStatusCallable(const Model::DescribeExternalEndpointStatusRequest& request);

                /**
                 *This API is used to query the last ten garbage collection (GC) records.
                 * @param req DescribeGCJobsRequest
                 * @return DescribeGCJobsOutcome
                 */
                DescribeGCJobsOutcome DescribeGCJobs(const Model::DescribeGCJobsRequest &request);
                void DescribeGCJobsAsync(const Model::DescribeGCJobsRequest& request, const DescribeGCJobsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeGCJobsOutcomeCallable DescribeGCJobsCallable(const Model::DescribeGCJobsRequest& request);

                /**
                 *This API is used to query the status of an image acceleration service.
                 * @param req DescribeImageAccelerateServiceRequest
                 * @return DescribeImageAccelerateServiceOutcome
                 */
                DescribeImageAccelerateServiceOutcome DescribeImageAccelerateService(const Model::DescribeImageAccelerateServiceRequest &request);
                void DescribeImageAccelerateServiceAsync(const Model::DescribeImageAccelerateServiceRequest& request, const DescribeImageAccelerateServiceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeImageAccelerateServiceOutcomeCallable DescribeImageAccelerateServiceCallable(const Model::DescribeImageAccelerateServiceRequest& request);

                /**
                 *This API is used to query the manifest information of a container image.
                 * @param req DescribeImageManifestsRequest
                 * @return DescribeImageManifestsOutcome
                 */
                DescribeImageManifestsOutcome DescribeImageManifests(const Model::DescribeImageManifestsRequest &request);
                void DescribeImageManifestsAsync(const Model::DescribeImageManifestsRequest& request, const DescribeImageManifestsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeImageManifestsOutcomeCallable DescribeImageManifestsCallable(const Model::DescribeImageManifestsRequest& request);

                /**
                 *This API is used to query the list of image tags or the information of the specified container image.
                 * @param req DescribeImagesRequest
                 * @return DescribeImagesOutcome
                 */
                DescribeImagesOutcome DescribeImages(const Model::DescribeImagesRequest &request);
                void DescribeImagesAsync(const Model::DescribeImagesRequest& request, const DescribeImagesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeImagesOutcomeCallable DescribeImagesCallable(const Model::DescribeImagesRequest& request);

                /**
                 *This API is used to list the tag immutability rule.
                 * @param req DescribeImmutableTagRulesRequest
                 * @return DescribeImmutableTagRulesOutcome
                 */
                DescribeImmutableTagRulesOutcome DescribeImmutableTagRules(const Model::DescribeImmutableTagRulesRequest &request);
                void DescribeImmutableTagRulesAsync(const Model::DescribeImmutableTagRulesRequest& request, const DescribeImmutableTagRulesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeImmutableTagRulesOutcomeCallable DescribeImmutableTagRulesCallable(const Model::DescribeImmutableTagRulesRequest& request);

                /**
                 *This API is used to query the information of all instances.
                 * @param req DescribeInstanceAllRequest
                 * @return DescribeInstanceAllOutcome
                 */
                DescribeInstanceAllOutcome DescribeInstanceAll(const Model::DescribeInstanceAllRequest &request);
                void DescribeInstanceAllAsync(const Model::DescribeInstanceAllRequest& request, const DescribeInstanceAllAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeInstanceAllOutcomeCallable DescribeInstanceAllCallable(const Model::DescribeInstanceAllRequest& request);

                /**
                 *This API is used to query the list of all namespaces in an instance.
                 * @param req DescribeInstanceAllNamespacesRequest
                 * @return DescribeInstanceAllNamespacesOutcome
                 */
                DescribeInstanceAllNamespacesOutcome DescribeInstanceAllNamespaces(const Model::DescribeInstanceAllNamespacesRequest &request);
                void DescribeInstanceAllNamespacesAsync(const Model::DescribeInstanceAllNamespacesRequest& request, const DescribeInstanceAllNamespacesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeInstanceAllNamespacesOutcomeCallable DescribeInstanceAllNamespacesCallable(const Model::DescribeInstanceAllNamespacesRequest& request);

                /**
                 *This API is used to query the list of custom domain names of an instance.
                 * @param req DescribeInstanceCustomizedDomainRequest
                 * @return DescribeInstanceCustomizedDomainOutcome
                 */
                DescribeInstanceCustomizedDomainOutcome DescribeInstanceCustomizedDomain(const Model::DescribeInstanceCustomizedDomainRequest &request);
                void DescribeInstanceCustomizedDomainAsync(const Model::DescribeInstanceCustomizedDomainRequest& request, const DescribeInstanceCustomizedDomainAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeInstanceCustomizedDomainOutcomeCallable DescribeInstanceCustomizedDomainCallable(const Model::DescribeInstanceCustomizedDomainRequest& request);

                /**
                 *This API is used to query the current status and process information of an instance.
                 * @param req DescribeInstanceStatusRequest
                 * @return DescribeInstanceStatusOutcome
                 */
                DescribeInstanceStatusOutcome DescribeInstanceStatus(const Model::DescribeInstanceStatusRequest &request);
                void DescribeInstanceStatusAsync(const Model::DescribeInstanceStatusRequest& request, const DescribeInstanceStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeInstanceStatusOutcomeCallable DescribeInstanceStatusCallable(const Model::DescribeInstanceStatusRequest& request);

                /**
                 *This API is used to query the information of long-term access credentials.
                 * @param req DescribeInstanceTokenRequest
                 * @return DescribeInstanceTokenOutcome
                 */
                DescribeInstanceTokenOutcome DescribeInstanceToken(const Model::DescribeInstanceTokenRequest &request);
                void DescribeInstanceTokenAsync(const Model::DescribeInstanceTokenRequest& request, const DescribeInstanceTokenAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeInstanceTokenOutcomeCallable DescribeInstanceTokenCallable(const Model::DescribeInstanceTokenRequest& request);

                /**
                 *This API is used to query the instance information.
                 * @param req DescribeInstancesRequest
                 * @return DescribeInstancesOutcome
                 */
                DescribeInstancesOutcome DescribeInstances(const Model::DescribeInstancesRequest &request);
                void DescribeInstancesAsync(const Model::DescribeInstancesRequest& request, const DescribeInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeInstancesOutcomeCallable DescribeInstancesCallable(const Model::DescribeInstancesRequest& request);

                /**
                 *This API is used to query the VPC URLs for private network access to an instance.
                 * @param req DescribeInternalEndpointsRequest
                 * @return DescribeInternalEndpointsOutcome
                 */
                DescribeInternalEndpointsOutcome DescribeInternalEndpoints(const Model::DescribeInternalEndpointsRequest &request);
                void DescribeInternalEndpointsAsync(const Model::DescribeInternalEndpointsRequest& request, const DescribeInternalEndpointsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeInternalEndpointsOutcomeCallable DescribeInternalEndpointsCallable(const Model::DescribeInternalEndpointsRequest& request);

                /**
                 *This API is used to query the namespace list or the information of the specified namespace.
                 * @param req DescribeNamespacesRequest
                 * @return DescribeNamespacesOutcome
                 */
                DescribeNamespacesOutcome DescribeNamespaces(const Model::DescribeNamespacesRequest &request);
                void DescribeNamespacesAsync(const Model::DescribeNamespacesRequest& request, const DescribeNamespacesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeNamespacesOutcomeCallable DescribeNamespacesCallable(const Model::DescribeNamespacesRequest& request);

                /**
                 *This API is used to get the available regions in TCR.
                 * @param req DescribeRegionsRequest
                 * @return DescribeRegionsOutcome
                 */
                DescribeRegionsOutcome DescribeRegions(const Model::DescribeRegionsRequest &request);
                void DescribeRegionsAsync(const Model::DescribeRegionsRequest& request, const DescribeRegionsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeRegionsOutcomeCallable DescribeRegionsCallable(const Model::DescribeRegionsRequest& request);

                /**
                 *This API is used to query the task status of creating a replication instance.
                 * @param req DescribeReplicationInstanceCreateTasksRequest
                 * @return DescribeReplicationInstanceCreateTasksOutcome
                 */
                DescribeReplicationInstanceCreateTasksOutcome DescribeReplicationInstanceCreateTasks(const Model::DescribeReplicationInstanceCreateTasksRequest &request);
                void DescribeReplicationInstanceCreateTasksAsync(const Model::DescribeReplicationInstanceCreateTasksRequest& request, const DescribeReplicationInstanceCreateTasksAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeReplicationInstanceCreateTasksOutcomeCallable DescribeReplicationInstanceCreateTasksCallable(const Model::DescribeReplicationInstanceCreateTasksRequest& request);

                /**
                 *This API is used to query the synchronization status of a replication instance.
                 * @param req DescribeReplicationInstanceSyncStatusRequest
                 * @return DescribeReplicationInstanceSyncStatusOutcome
                 */
                DescribeReplicationInstanceSyncStatusOutcome DescribeReplicationInstanceSyncStatus(const Model::DescribeReplicationInstanceSyncStatusRequest &request);
                void DescribeReplicationInstanceSyncStatusAsync(const Model::DescribeReplicationInstanceSyncStatusRequest& request, const DescribeReplicationInstanceSyncStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeReplicationInstanceSyncStatusOutcomeCallable DescribeReplicationInstanceSyncStatusCallable(const Model::DescribeReplicationInstanceSyncStatusRequest& request);

                /**
                 *This API is used to query the list of replication instances.
                 * @param req DescribeReplicationInstancesRequest
                 * @return DescribeReplicationInstancesOutcome
                 */
                DescribeReplicationInstancesOutcome DescribeReplicationInstances(const Model::DescribeReplicationInstancesRequest &request);
                void DescribeReplicationInstancesAsync(const Model::DescribeReplicationInstancesRequest& request, const DescribeReplicationInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeReplicationInstancesOutcomeCallable DescribeReplicationInstancesCallable(const Model::DescribeReplicationInstancesRequest& request);

                /**
                 *This API is used to query the image repository list or the information of the specified image repository.
                 * @param req DescribeRepositoriesRequest
                 * @return DescribeRepositoriesOutcome
                 */
                DescribeRepositoriesOutcome DescribeRepositories(const Model::DescribeRepositoriesRequest &request);
                void DescribeRepositoriesAsync(const Model::DescribeRepositoriesRequest& request, const DescribeRepositoriesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeRepositoriesOutcomeCallable DescribeRepositoriesCallable(const Model::DescribeRepositoriesRequest& request);

                /**
                 *This API is used to query the public network access allowlist policies of an instance.
                 * @param req DescribeSecurityPoliciesRequest
                 * @return DescribeSecurityPoliciesOutcome
                 */
                DescribeSecurityPoliciesOutcome DescribeSecurityPolicies(const Model::DescribeSecurityPoliciesRequest &request);
                void DescribeSecurityPoliciesAsync(const Model::DescribeSecurityPoliciesRequest& request, const DescribeSecurityPoliciesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeSecurityPoliciesOutcomeCallable DescribeSecurityPoliciesCallable(const Model::DescribeSecurityPoliciesRequest& request);

                /**
                 *This API is used to query tag retention execution records.
                 * @param req DescribeTagRetentionExecutionRequest
                 * @return DescribeTagRetentionExecutionOutcome
                 */
                DescribeTagRetentionExecutionOutcome DescribeTagRetentionExecution(const Model::DescribeTagRetentionExecutionRequest &request);
                void DescribeTagRetentionExecutionAsync(const Model::DescribeTagRetentionExecutionRequest& request, const DescribeTagRetentionExecutionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeTagRetentionExecutionOutcomeCallable DescribeTagRetentionExecutionCallable(const Model::DescribeTagRetentionExecutionRequest& request);

                /**
                 *This API is used to query tag retention execution tasks.
                 * @param req DescribeTagRetentionExecutionTaskRequest
                 * @return DescribeTagRetentionExecutionTaskOutcome
                 */
                DescribeTagRetentionExecutionTaskOutcome DescribeTagRetentionExecutionTask(const Model::DescribeTagRetentionExecutionTaskRequest &request);
                void DescribeTagRetentionExecutionTaskAsync(const Model::DescribeTagRetentionExecutionTaskRequest& request, const DescribeTagRetentionExecutionTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeTagRetentionExecutionTaskOutcomeCallable DescribeTagRetentionExecutionTaskCallable(const Model::DescribeTagRetentionExecutionTaskRequest& request);

                /**
                 *This API is used to query tag retention rules.
                 * @param req DescribeTagRetentionRulesRequest
                 * @return DescribeTagRetentionRulesOutcome
                 */
                DescribeTagRetentionRulesOutcome DescribeTagRetentionRules(const Model::DescribeTagRetentionRulesRequest &request);
                void DescribeTagRetentionRulesAsync(const Model::DescribeTagRetentionRulesRequest& request, const DescribeTagRetentionRulesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeTagRetentionRulesOutcomeCallable DescribeTagRetentionRulesCallable(const Model::DescribeTagRetentionRulesRequest& request);

                /**
                 *This API is used to query triggers.
                 * @param req DescribeWebhookTriggerRequest
                 * @return DescribeWebhookTriggerOutcome
                 */
                DescribeWebhookTriggerOutcome DescribeWebhookTrigger(const Model::DescribeWebhookTriggerRequest &request);
                void DescribeWebhookTriggerAsync(const Model::DescribeWebhookTriggerRequest& request, const DescribeWebhookTriggerAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeWebhookTriggerOutcomeCallable DescribeWebhookTriggerCallable(const Model::DescribeWebhookTriggerRequest& request);

                /**
                 *This API is used to get trigger logs.
                 * @param req DescribeWebhookTriggerLogRequest
                 * @return DescribeWebhookTriggerLogOutcome
                 */
                DescribeWebhookTriggerLogOutcome DescribeWebhookTriggerLog(const Model::DescribeWebhookTriggerLogRequest &request);
                void DescribeWebhookTriggerLogAsync(const Model::DescribeWebhookTriggerLogRequest& request, const DescribeWebhookTriggerLogAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeWebhookTriggerLogOutcomeCallable DescribeWebhookTriggerLogCallable(const Model::DescribeWebhookTriggerLogRequest& request);

                /**
                 *This API is used to download a Helm chart in TCR.
                 * @param req DownloadHelmChartRequest
                 * @return DownloadHelmChartOutcome
                 */
                DownloadHelmChartOutcome DownloadHelmChart(const Model::DownloadHelmChartRequest &request);
                void DownloadHelmChartAsync(const Model::DownloadHelmChartRequest& request, const DownloadHelmChartAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DownloadHelmChartOutcomeCallable DownloadHelmChartCallable(const Model::DownloadHelmChartRequest& request);

                /**
                 *This API is used to manage the public network access of an instance.
                 * @param req ManageExternalEndpointRequest
                 * @return ManageExternalEndpointOutcome
                 */
                ManageExternalEndpointOutcome ManageExternalEndpoint(const Model::ManageExternalEndpointRequest &request);
                void ManageExternalEndpointAsync(const Model::ManageExternalEndpointRequest& request, const ManageExternalEndpointAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ManageExternalEndpointOutcomeCallable ManageExternalEndpointCallable(const Model::ManageExternalEndpointRequest& request);

                /**
                 *This API is used to manage VPC URLs for private network access to an instance.
                 * @param req ManageInternalEndpointRequest
                 * @return ManageInternalEndpointOutcome
                 */
                ManageInternalEndpointOutcome ManageInternalEndpoint(const Model::ManageInternalEndpointRequest &request);
                void ManageInternalEndpointAsync(const Model::ManageInternalEndpointRequest& request, const ManageInternalEndpointAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ManageInternalEndpointOutcomeCallable ManageInternalEndpointCallable(const Model::ManageInternalEndpointRequest& request);

                /**
                 *This API is used to manage the instance synchronization rule.
                 * @param req ManageReplicationRequest
                 * @return ManageReplicationOutcome
                 */
                ManageReplicationOutcome ManageReplication(const Model::ManageReplicationRequest &request);
                void ManageReplicationAsync(const Model::ManageReplicationRequest& request, const ManageReplicationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ManageReplicationOutcomeCallable ManageReplicationCallable(const Model::ManageReplicationRequest& request);

                /**
                 *This API is used to update the tag immutability rule.
                 * @param req ModifyImmutableTagRulesRequest
                 * @return ModifyImmutableTagRulesOutcome
                 */
                ModifyImmutableTagRulesOutcome ModifyImmutableTagRules(const Model::ModifyImmutableTagRulesRequest &request);
                void ModifyImmutableTagRulesAsync(const Model::ModifyImmutableTagRulesRequest& request, const ModifyImmutableTagRulesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyImmutableTagRulesOutcomeCallable ModifyImmutableTagRulesCallable(const Model::ModifyImmutableTagRulesRequest& request);

                /**
                 *This API is used to update instance information.
                 * @param req ModifyInstanceRequest
                 * @return ModifyInstanceOutcome
                 */
                ModifyInstanceOutcome ModifyInstance(const Model::ModifyInstanceRequest &request);
                void ModifyInstanceAsync(const Model::ModifyInstanceRequest& request, const ModifyInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyInstanceOutcomeCallable ModifyInstanceCallable(const Model::ModifyInstanceRequest& request);

                /**
                 *This API is used to update the status of the specified long-term access credential in an instance.
                 * @param req ModifyInstanceTokenRequest
                 * @return ModifyInstanceTokenOutcome
                 */
                ModifyInstanceTokenOutcome ModifyInstanceToken(const Model::ModifyInstanceTokenRequest &request);
                void ModifyInstanceTokenAsync(const Model::ModifyInstanceTokenRequest& request, const ModifyInstanceTokenAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyInstanceTokenOutcomeCallable ModifyInstanceTokenCallable(const Model::ModifyInstanceTokenRequest& request);

                /**
                 *This API is used to update the information of a namespace. Currently, only the namespace access level can be modified.
                 * @param req ModifyNamespaceRequest
                 * @return ModifyNamespaceOutcome
                 */
                ModifyNamespaceOutcome ModifyNamespace(const Model::ModifyNamespaceRequest &request);
                void ModifyNamespaceAsync(const Model::ModifyNamespaceRequest& request, const ModifyNamespaceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyNamespaceOutcomeCallable ModifyNamespaceCallable(const Model::ModifyNamespaceRequest& request);

                /**
                 *This API is used to update the information of an image repository. The repository description can be modified.
                 * @param req ModifyRepositoryRequest
                 * @return ModifyRepositoryOutcome
                 */
                ModifyRepositoryOutcome ModifyRepository(const Model::ModifyRepositoryRequest &request);
                void ModifyRepositoryAsync(const Model::ModifyRepositoryRequest& request, const ModifyRepositoryAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyRepositoryOutcomeCallable ModifyRepositoryCallable(const Model::ModifyRepositoryRequest& request);

                /**
                 *This API is used to update the public network access allowlist of an instance.
                 * @param req ModifySecurityPolicyRequest
                 * @return ModifySecurityPolicyOutcome
                 */
                ModifySecurityPolicyOutcome ModifySecurityPolicy(const Model::ModifySecurityPolicyRequest &request);
                void ModifySecurityPolicyAsync(const Model::ModifySecurityPolicyRequest& request, const ModifySecurityPolicyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifySecurityPolicyOutcomeCallable ModifySecurityPolicyCallable(const Model::ModifySecurityPolicyRequest& request);

                /**
                 *This API is used to update a tag retention rule.
                 * @param req ModifyTagRetentionRuleRequest
                 * @return ModifyTagRetentionRuleOutcome
                 */
                ModifyTagRetentionRuleOutcome ModifyTagRetentionRule(const Model::ModifyTagRetentionRuleRequest &request);
                void ModifyTagRetentionRuleAsync(const Model::ModifyTagRetentionRuleRequest& request, const ModifyTagRetentionRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyTagRetentionRuleOutcomeCallable ModifyTagRetentionRuleCallable(const Model::ModifyTagRetentionRuleRequest& request);

                /**
                 *This API is used to update a trigger.
                 * @param req ModifyWebhookTriggerRequest
                 * @return ModifyWebhookTriggerOutcome
                 */
                ModifyWebhookTriggerOutcome ModifyWebhookTrigger(const Model::ModifyWebhookTriggerRequest &request);
                void ModifyWebhookTriggerAsync(const Model::ModifyWebhookTriggerRequest& request, const ModifyWebhookTriggerAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyWebhookTriggerOutcomeCallable ModifyWebhookTriggerCallable(const Model::ModifyWebhookTriggerRequest& request);

                /**
                 *This API is used to renew a prepaid instance or change the billing mode from pay-as-you-go billing to monthly subscription billing.
                 * @param req RenewInstanceRequest
                 * @return RenewInstanceOutcome
                 */
                RenewInstanceOutcome RenewInstance(const Model::RenewInstanceRequest &request);
                void RenewInstanceAsync(const Model::RenewInstanceRequest& request, const RenewInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                RenewInstanceOutcomeCallable RenewInstanceCallable(const Model::RenewInstanceRequest& request);

            };
        }
    }
}

#endif // !TENCENTCLOUD_TCR_V20190924_TCRCLIENT_H_
