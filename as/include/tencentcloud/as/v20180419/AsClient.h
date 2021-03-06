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

#ifndef TENCENTCLOUD_AS_V20180419_ASCLIENT_H_
#define TENCENTCLOUD_AS_V20180419_ASCLIENT_H_

#include <functional>
#include <future>
#include <tencentcloud/core/AbstractClient.h>
#include <tencentcloud/core/Credential.h>
#include <tencentcloud/core/profile/ClientProfile.h>
#include <tencentcloud/core/AsyncCallerContext.h>
#include <tencentcloud/as/v20180419/model/AttachInstancesRequest.h>
#include <tencentcloud/as/v20180419/model/AttachInstancesResponse.h>
#include <tencentcloud/as/v20180419/model/CompleteLifecycleActionRequest.h>
#include <tencentcloud/as/v20180419/model/CompleteLifecycleActionResponse.h>
#include <tencentcloud/as/v20180419/model/CreateAutoScalingGroupRequest.h>
#include <tencentcloud/as/v20180419/model/CreateAutoScalingGroupResponse.h>
#include <tencentcloud/as/v20180419/model/CreateAutoScalingGroupFromInstanceRequest.h>
#include <tencentcloud/as/v20180419/model/CreateAutoScalingGroupFromInstanceResponse.h>
#include <tencentcloud/as/v20180419/model/CreateLaunchConfigurationRequest.h>
#include <tencentcloud/as/v20180419/model/CreateLaunchConfigurationResponse.h>
#include <tencentcloud/as/v20180419/model/CreateLifecycleHookRequest.h>
#include <tencentcloud/as/v20180419/model/CreateLifecycleHookResponse.h>
#include <tencentcloud/as/v20180419/model/CreateNotificationConfigurationRequest.h>
#include <tencentcloud/as/v20180419/model/CreateNotificationConfigurationResponse.h>
#include <tencentcloud/as/v20180419/model/CreatePaiInstanceRequest.h>
#include <tencentcloud/as/v20180419/model/CreatePaiInstanceResponse.h>
#include <tencentcloud/as/v20180419/model/CreateScalingPolicyRequest.h>
#include <tencentcloud/as/v20180419/model/CreateScalingPolicyResponse.h>
#include <tencentcloud/as/v20180419/model/CreateScheduledActionRequest.h>
#include <tencentcloud/as/v20180419/model/CreateScheduledActionResponse.h>
#include <tencentcloud/as/v20180419/model/DeleteAutoScalingGroupRequest.h>
#include <tencentcloud/as/v20180419/model/DeleteAutoScalingGroupResponse.h>
#include <tencentcloud/as/v20180419/model/DeleteLaunchConfigurationRequest.h>
#include <tencentcloud/as/v20180419/model/DeleteLaunchConfigurationResponse.h>
#include <tencentcloud/as/v20180419/model/DeleteLifecycleHookRequest.h>
#include <tencentcloud/as/v20180419/model/DeleteLifecycleHookResponse.h>
#include <tencentcloud/as/v20180419/model/DeleteNotificationConfigurationRequest.h>
#include <tencentcloud/as/v20180419/model/DeleteNotificationConfigurationResponse.h>
#include <tencentcloud/as/v20180419/model/DeleteScalingPolicyRequest.h>
#include <tencentcloud/as/v20180419/model/DeleteScalingPolicyResponse.h>
#include <tencentcloud/as/v20180419/model/DeleteScheduledActionRequest.h>
#include <tencentcloud/as/v20180419/model/DeleteScheduledActionResponse.h>
#include <tencentcloud/as/v20180419/model/DescribeAccountLimitsRequest.h>
#include <tencentcloud/as/v20180419/model/DescribeAccountLimitsResponse.h>
#include <tencentcloud/as/v20180419/model/DescribeAutoScalingActivitiesRequest.h>
#include <tencentcloud/as/v20180419/model/DescribeAutoScalingActivitiesResponse.h>
#include <tencentcloud/as/v20180419/model/DescribeAutoScalingGroupLastActivitiesRequest.h>
#include <tencentcloud/as/v20180419/model/DescribeAutoScalingGroupLastActivitiesResponse.h>
#include <tencentcloud/as/v20180419/model/DescribeAutoScalingGroupsRequest.h>
#include <tencentcloud/as/v20180419/model/DescribeAutoScalingGroupsResponse.h>
#include <tencentcloud/as/v20180419/model/DescribeAutoScalingInstancesRequest.h>
#include <tencentcloud/as/v20180419/model/DescribeAutoScalingInstancesResponse.h>
#include <tencentcloud/as/v20180419/model/DescribeLaunchConfigurationsRequest.h>
#include <tencentcloud/as/v20180419/model/DescribeLaunchConfigurationsResponse.h>
#include <tencentcloud/as/v20180419/model/DescribeLifecycleHooksRequest.h>
#include <tencentcloud/as/v20180419/model/DescribeLifecycleHooksResponse.h>
#include <tencentcloud/as/v20180419/model/DescribeNotificationConfigurationsRequest.h>
#include <tencentcloud/as/v20180419/model/DescribeNotificationConfigurationsResponse.h>
#include <tencentcloud/as/v20180419/model/DescribePaiInstancesRequest.h>
#include <tencentcloud/as/v20180419/model/DescribePaiInstancesResponse.h>
#include <tencentcloud/as/v20180419/model/DescribeScalingPoliciesRequest.h>
#include <tencentcloud/as/v20180419/model/DescribeScalingPoliciesResponse.h>
#include <tencentcloud/as/v20180419/model/DescribeScheduledActionsRequest.h>
#include <tencentcloud/as/v20180419/model/DescribeScheduledActionsResponse.h>
#include <tencentcloud/as/v20180419/model/DetachInstancesRequest.h>
#include <tencentcloud/as/v20180419/model/DetachInstancesResponse.h>
#include <tencentcloud/as/v20180419/model/DisableAutoScalingGroupRequest.h>
#include <tencentcloud/as/v20180419/model/DisableAutoScalingGroupResponse.h>
#include <tencentcloud/as/v20180419/model/EnableAutoScalingGroupRequest.h>
#include <tencentcloud/as/v20180419/model/EnableAutoScalingGroupResponse.h>
#include <tencentcloud/as/v20180419/model/ExecuteScalingPolicyRequest.h>
#include <tencentcloud/as/v20180419/model/ExecuteScalingPolicyResponse.h>
#include <tencentcloud/as/v20180419/model/ModifyAutoScalingGroupRequest.h>
#include <tencentcloud/as/v20180419/model/ModifyAutoScalingGroupResponse.h>
#include <tencentcloud/as/v20180419/model/ModifyDesiredCapacityRequest.h>
#include <tencentcloud/as/v20180419/model/ModifyDesiredCapacityResponse.h>
#include <tencentcloud/as/v20180419/model/ModifyLaunchConfigurationAttributesRequest.h>
#include <tencentcloud/as/v20180419/model/ModifyLaunchConfigurationAttributesResponse.h>
#include <tencentcloud/as/v20180419/model/ModifyLoadBalancersRequest.h>
#include <tencentcloud/as/v20180419/model/ModifyLoadBalancersResponse.h>
#include <tencentcloud/as/v20180419/model/ModifyNotificationConfigurationRequest.h>
#include <tencentcloud/as/v20180419/model/ModifyNotificationConfigurationResponse.h>
#include <tencentcloud/as/v20180419/model/ModifyScalingPolicyRequest.h>
#include <tencentcloud/as/v20180419/model/ModifyScalingPolicyResponse.h>
#include <tencentcloud/as/v20180419/model/ModifyScheduledActionRequest.h>
#include <tencentcloud/as/v20180419/model/ModifyScheduledActionResponse.h>
#include <tencentcloud/as/v20180419/model/PreviewPaiDomainNameRequest.h>
#include <tencentcloud/as/v20180419/model/PreviewPaiDomainNameResponse.h>
#include <tencentcloud/as/v20180419/model/RemoveInstancesRequest.h>
#include <tencentcloud/as/v20180419/model/RemoveInstancesResponse.h>
#include <tencentcloud/as/v20180419/model/SetInstancesProtectionRequest.h>
#include <tencentcloud/as/v20180419/model/SetInstancesProtectionResponse.h>
#include <tencentcloud/as/v20180419/model/StartAutoScalingInstancesRequest.h>
#include <tencentcloud/as/v20180419/model/StartAutoScalingInstancesResponse.h>
#include <tencentcloud/as/v20180419/model/StopAutoScalingInstancesRequest.h>
#include <tencentcloud/as/v20180419/model/StopAutoScalingInstancesResponse.h>
#include <tencentcloud/as/v20180419/model/UpgradeLaunchConfigurationRequest.h>
#include <tencentcloud/as/v20180419/model/UpgradeLaunchConfigurationResponse.h>
#include <tencentcloud/as/v20180419/model/UpgradeLifecycleHookRequest.h>
#include <tencentcloud/as/v20180419/model/UpgradeLifecycleHookResponse.h>


namespace TencentCloud
{
    namespace As
    {
        namespace V20180419
        {
            class AsClient : public AbstractClient
            {
            public:
                AsClient(const Credential &credential, const std::string &region);
                AsClient(const Credential &credential, const std::string &region, const ClientProfile &profile);

                typedef Outcome<Error, Model::AttachInstancesResponse> AttachInstancesOutcome;
                typedef std::future<AttachInstancesOutcome> AttachInstancesOutcomeCallable;
                typedef std::function<void(const AsClient*, const Model::AttachInstancesRequest&, AttachInstancesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> AttachInstancesAsyncHandler;
                typedef Outcome<Error, Model::CompleteLifecycleActionResponse> CompleteLifecycleActionOutcome;
                typedef std::future<CompleteLifecycleActionOutcome> CompleteLifecycleActionOutcomeCallable;
                typedef std::function<void(const AsClient*, const Model::CompleteLifecycleActionRequest&, CompleteLifecycleActionOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CompleteLifecycleActionAsyncHandler;
                typedef Outcome<Error, Model::CreateAutoScalingGroupResponse> CreateAutoScalingGroupOutcome;
                typedef std::future<CreateAutoScalingGroupOutcome> CreateAutoScalingGroupOutcomeCallable;
                typedef std::function<void(const AsClient*, const Model::CreateAutoScalingGroupRequest&, CreateAutoScalingGroupOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateAutoScalingGroupAsyncHandler;
                typedef Outcome<Error, Model::CreateAutoScalingGroupFromInstanceResponse> CreateAutoScalingGroupFromInstanceOutcome;
                typedef std::future<CreateAutoScalingGroupFromInstanceOutcome> CreateAutoScalingGroupFromInstanceOutcomeCallable;
                typedef std::function<void(const AsClient*, const Model::CreateAutoScalingGroupFromInstanceRequest&, CreateAutoScalingGroupFromInstanceOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateAutoScalingGroupFromInstanceAsyncHandler;
                typedef Outcome<Error, Model::CreateLaunchConfigurationResponse> CreateLaunchConfigurationOutcome;
                typedef std::future<CreateLaunchConfigurationOutcome> CreateLaunchConfigurationOutcomeCallable;
                typedef std::function<void(const AsClient*, const Model::CreateLaunchConfigurationRequest&, CreateLaunchConfigurationOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateLaunchConfigurationAsyncHandler;
                typedef Outcome<Error, Model::CreateLifecycleHookResponse> CreateLifecycleHookOutcome;
                typedef std::future<CreateLifecycleHookOutcome> CreateLifecycleHookOutcomeCallable;
                typedef std::function<void(const AsClient*, const Model::CreateLifecycleHookRequest&, CreateLifecycleHookOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateLifecycleHookAsyncHandler;
                typedef Outcome<Error, Model::CreateNotificationConfigurationResponse> CreateNotificationConfigurationOutcome;
                typedef std::future<CreateNotificationConfigurationOutcome> CreateNotificationConfigurationOutcomeCallable;
                typedef std::function<void(const AsClient*, const Model::CreateNotificationConfigurationRequest&, CreateNotificationConfigurationOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateNotificationConfigurationAsyncHandler;
                typedef Outcome<Error, Model::CreatePaiInstanceResponse> CreatePaiInstanceOutcome;
                typedef std::future<CreatePaiInstanceOutcome> CreatePaiInstanceOutcomeCallable;
                typedef std::function<void(const AsClient*, const Model::CreatePaiInstanceRequest&, CreatePaiInstanceOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreatePaiInstanceAsyncHandler;
                typedef Outcome<Error, Model::CreateScalingPolicyResponse> CreateScalingPolicyOutcome;
                typedef std::future<CreateScalingPolicyOutcome> CreateScalingPolicyOutcomeCallable;
                typedef std::function<void(const AsClient*, const Model::CreateScalingPolicyRequest&, CreateScalingPolicyOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateScalingPolicyAsyncHandler;
                typedef Outcome<Error, Model::CreateScheduledActionResponse> CreateScheduledActionOutcome;
                typedef std::future<CreateScheduledActionOutcome> CreateScheduledActionOutcomeCallable;
                typedef std::function<void(const AsClient*, const Model::CreateScheduledActionRequest&, CreateScheduledActionOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateScheduledActionAsyncHandler;
                typedef Outcome<Error, Model::DeleteAutoScalingGroupResponse> DeleteAutoScalingGroupOutcome;
                typedef std::future<DeleteAutoScalingGroupOutcome> DeleteAutoScalingGroupOutcomeCallable;
                typedef std::function<void(const AsClient*, const Model::DeleteAutoScalingGroupRequest&, DeleteAutoScalingGroupOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteAutoScalingGroupAsyncHandler;
                typedef Outcome<Error, Model::DeleteLaunchConfigurationResponse> DeleteLaunchConfigurationOutcome;
                typedef std::future<DeleteLaunchConfigurationOutcome> DeleteLaunchConfigurationOutcomeCallable;
                typedef std::function<void(const AsClient*, const Model::DeleteLaunchConfigurationRequest&, DeleteLaunchConfigurationOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteLaunchConfigurationAsyncHandler;
                typedef Outcome<Error, Model::DeleteLifecycleHookResponse> DeleteLifecycleHookOutcome;
                typedef std::future<DeleteLifecycleHookOutcome> DeleteLifecycleHookOutcomeCallable;
                typedef std::function<void(const AsClient*, const Model::DeleteLifecycleHookRequest&, DeleteLifecycleHookOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteLifecycleHookAsyncHandler;
                typedef Outcome<Error, Model::DeleteNotificationConfigurationResponse> DeleteNotificationConfigurationOutcome;
                typedef std::future<DeleteNotificationConfigurationOutcome> DeleteNotificationConfigurationOutcomeCallable;
                typedef std::function<void(const AsClient*, const Model::DeleteNotificationConfigurationRequest&, DeleteNotificationConfigurationOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteNotificationConfigurationAsyncHandler;
                typedef Outcome<Error, Model::DeleteScalingPolicyResponse> DeleteScalingPolicyOutcome;
                typedef std::future<DeleteScalingPolicyOutcome> DeleteScalingPolicyOutcomeCallable;
                typedef std::function<void(const AsClient*, const Model::DeleteScalingPolicyRequest&, DeleteScalingPolicyOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteScalingPolicyAsyncHandler;
                typedef Outcome<Error, Model::DeleteScheduledActionResponse> DeleteScheduledActionOutcome;
                typedef std::future<DeleteScheduledActionOutcome> DeleteScheduledActionOutcomeCallable;
                typedef std::function<void(const AsClient*, const Model::DeleteScheduledActionRequest&, DeleteScheduledActionOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteScheduledActionAsyncHandler;
                typedef Outcome<Error, Model::DescribeAccountLimitsResponse> DescribeAccountLimitsOutcome;
                typedef std::future<DescribeAccountLimitsOutcome> DescribeAccountLimitsOutcomeCallable;
                typedef std::function<void(const AsClient*, const Model::DescribeAccountLimitsRequest&, DescribeAccountLimitsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeAccountLimitsAsyncHandler;
                typedef Outcome<Error, Model::DescribeAutoScalingActivitiesResponse> DescribeAutoScalingActivitiesOutcome;
                typedef std::future<DescribeAutoScalingActivitiesOutcome> DescribeAutoScalingActivitiesOutcomeCallable;
                typedef std::function<void(const AsClient*, const Model::DescribeAutoScalingActivitiesRequest&, DescribeAutoScalingActivitiesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeAutoScalingActivitiesAsyncHandler;
                typedef Outcome<Error, Model::DescribeAutoScalingGroupLastActivitiesResponse> DescribeAutoScalingGroupLastActivitiesOutcome;
                typedef std::future<DescribeAutoScalingGroupLastActivitiesOutcome> DescribeAutoScalingGroupLastActivitiesOutcomeCallable;
                typedef std::function<void(const AsClient*, const Model::DescribeAutoScalingGroupLastActivitiesRequest&, DescribeAutoScalingGroupLastActivitiesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeAutoScalingGroupLastActivitiesAsyncHandler;
                typedef Outcome<Error, Model::DescribeAutoScalingGroupsResponse> DescribeAutoScalingGroupsOutcome;
                typedef std::future<DescribeAutoScalingGroupsOutcome> DescribeAutoScalingGroupsOutcomeCallable;
                typedef std::function<void(const AsClient*, const Model::DescribeAutoScalingGroupsRequest&, DescribeAutoScalingGroupsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeAutoScalingGroupsAsyncHandler;
                typedef Outcome<Error, Model::DescribeAutoScalingInstancesResponse> DescribeAutoScalingInstancesOutcome;
                typedef std::future<DescribeAutoScalingInstancesOutcome> DescribeAutoScalingInstancesOutcomeCallable;
                typedef std::function<void(const AsClient*, const Model::DescribeAutoScalingInstancesRequest&, DescribeAutoScalingInstancesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeAutoScalingInstancesAsyncHandler;
                typedef Outcome<Error, Model::DescribeLaunchConfigurationsResponse> DescribeLaunchConfigurationsOutcome;
                typedef std::future<DescribeLaunchConfigurationsOutcome> DescribeLaunchConfigurationsOutcomeCallable;
                typedef std::function<void(const AsClient*, const Model::DescribeLaunchConfigurationsRequest&, DescribeLaunchConfigurationsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeLaunchConfigurationsAsyncHandler;
                typedef Outcome<Error, Model::DescribeLifecycleHooksResponse> DescribeLifecycleHooksOutcome;
                typedef std::future<DescribeLifecycleHooksOutcome> DescribeLifecycleHooksOutcomeCallable;
                typedef std::function<void(const AsClient*, const Model::DescribeLifecycleHooksRequest&, DescribeLifecycleHooksOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeLifecycleHooksAsyncHandler;
                typedef Outcome<Error, Model::DescribeNotificationConfigurationsResponse> DescribeNotificationConfigurationsOutcome;
                typedef std::future<DescribeNotificationConfigurationsOutcome> DescribeNotificationConfigurationsOutcomeCallable;
                typedef std::function<void(const AsClient*, const Model::DescribeNotificationConfigurationsRequest&, DescribeNotificationConfigurationsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeNotificationConfigurationsAsyncHandler;
                typedef Outcome<Error, Model::DescribePaiInstancesResponse> DescribePaiInstancesOutcome;
                typedef std::future<DescribePaiInstancesOutcome> DescribePaiInstancesOutcomeCallable;
                typedef std::function<void(const AsClient*, const Model::DescribePaiInstancesRequest&, DescribePaiInstancesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribePaiInstancesAsyncHandler;
                typedef Outcome<Error, Model::DescribeScalingPoliciesResponse> DescribeScalingPoliciesOutcome;
                typedef std::future<DescribeScalingPoliciesOutcome> DescribeScalingPoliciesOutcomeCallable;
                typedef std::function<void(const AsClient*, const Model::DescribeScalingPoliciesRequest&, DescribeScalingPoliciesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeScalingPoliciesAsyncHandler;
                typedef Outcome<Error, Model::DescribeScheduledActionsResponse> DescribeScheduledActionsOutcome;
                typedef std::future<DescribeScheduledActionsOutcome> DescribeScheduledActionsOutcomeCallable;
                typedef std::function<void(const AsClient*, const Model::DescribeScheduledActionsRequest&, DescribeScheduledActionsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeScheduledActionsAsyncHandler;
                typedef Outcome<Error, Model::DetachInstancesResponse> DetachInstancesOutcome;
                typedef std::future<DetachInstancesOutcome> DetachInstancesOutcomeCallable;
                typedef std::function<void(const AsClient*, const Model::DetachInstancesRequest&, DetachInstancesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DetachInstancesAsyncHandler;
                typedef Outcome<Error, Model::DisableAutoScalingGroupResponse> DisableAutoScalingGroupOutcome;
                typedef std::future<DisableAutoScalingGroupOutcome> DisableAutoScalingGroupOutcomeCallable;
                typedef std::function<void(const AsClient*, const Model::DisableAutoScalingGroupRequest&, DisableAutoScalingGroupOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DisableAutoScalingGroupAsyncHandler;
                typedef Outcome<Error, Model::EnableAutoScalingGroupResponse> EnableAutoScalingGroupOutcome;
                typedef std::future<EnableAutoScalingGroupOutcome> EnableAutoScalingGroupOutcomeCallable;
                typedef std::function<void(const AsClient*, const Model::EnableAutoScalingGroupRequest&, EnableAutoScalingGroupOutcome, const std::shared_ptr<const AsyncCallerContext>&)> EnableAutoScalingGroupAsyncHandler;
                typedef Outcome<Error, Model::ExecuteScalingPolicyResponse> ExecuteScalingPolicyOutcome;
                typedef std::future<ExecuteScalingPolicyOutcome> ExecuteScalingPolicyOutcomeCallable;
                typedef std::function<void(const AsClient*, const Model::ExecuteScalingPolicyRequest&, ExecuteScalingPolicyOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ExecuteScalingPolicyAsyncHandler;
                typedef Outcome<Error, Model::ModifyAutoScalingGroupResponse> ModifyAutoScalingGroupOutcome;
                typedef std::future<ModifyAutoScalingGroupOutcome> ModifyAutoScalingGroupOutcomeCallable;
                typedef std::function<void(const AsClient*, const Model::ModifyAutoScalingGroupRequest&, ModifyAutoScalingGroupOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyAutoScalingGroupAsyncHandler;
                typedef Outcome<Error, Model::ModifyDesiredCapacityResponse> ModifyDesiredCapacityOutcome;
                typedef std::future<ModifyDesiredCapacityOutcome> ModifyDesiredCapacityOutcomeCallable;
                typedef std::function<void(const AsClient*, const Model::ModifyDesiredCapacityRequest&, ModifyDesiredCapacityOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyDesiredCapacityAsyncHandler;
                typedef Outcome<Error, Model::ModifyLaunchConfigurationAttributesResponse> ModifyLaunchConfigurationAttributesOutcome;
                typedef std::future<ModifyLaunchConfigurationAttributesOutcome> ModifyLaunchConfigurationAttributesOutcomeCallable;
                typedef std::function<void(const AsClient*, const Model::ModifyLaunchConfigurationAttributesRequest&, ModifyLaunchConfigurationAttributesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyLaunchConfigurationAttributesAsyncHandler;
                typedef Outcome<Error, Model::ModifyLoadBalancersResponse> ModifyLoadBalancersOutcome;
                typedef std::future<ModifyLoadBalancersOutcome> ModifyLoadBalancersOutcomeCallable;
                typedef std::function<void(const AsClient*, const Model::ModifyLoadBalancersRequest&, ModifyLoadBalancersOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyLoadBalancersAsyncHandler;
                typedef Outcome<Error, Model::ModifyNotificationConfigurationResponse> ModifyNotificationConfigurationOutcome;
                typedef std::future<ModifyNotificationConfigurationOutcome> ModifyNotificationConfigurationOutcomeCallable;
                typedef std::function<void(const AsClient*, const Model::ModifyNotificationConfigurationRequest&, ModifyNotificationConfigurationOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyNotificationConfigurationAsyncHandler;
                typedef Outcome<Error, Model::ModifyScalingPolicyResponse> ModifyScalingPolicyOutcome;
                typedef std::future<ModifyScalingPolicyOutcome> ModifyScalingPolicyOutcomeCallable;
                typedef std::function<void(const AsClient*, const Model::ModifyScalingPolicyRequest&, ModifyScalingPolicyOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyScalingPolicyAsyncHandler;
                typedef Outcome<Error, Model::ModifyScheduledActionResponse> ModifyScheduledActionOutcome;
                typedef std::future<ModifyScheduledActionOutcome> ModifyScheduledActionOutcomeCallable;
                typedef std::function<void(const AsClient*, const Model::ModifyScheduledActionRequest&, ModifyScheduledActionOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyScheduledActionAsyncHandler;
                typedef Outcome<Error, Model::PreviewPaiDomainNameResponse> PreviewPaiDomainNameOutcome;
                typedef std::future<PreviewPaiDomainNameOutcome> PreviewPaiDomainNameOutcomeCallable;
                typedef std::function<void(const AsClient*, const Model::PreviewPaiDomainNameRequest&, PreviewPaiDomainNameOutcome, const std::shared_ptr<const AsyncCallerContext>&)> PreviewPaiDomainNameAsyncHandler;
                typedef Outcome<Error, Model::RemoveInstancesResponse> RemoveInstancesOutcome;
                typedef std::future<RemoveInstancesOutcome> RemoveInstancesOutcomeCallable;
                typedef std::function<void(const AsClient*, const Model::RemoveInstancesRequest&, RemoveInstancesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> RemoveInstancesAsyncHandler;
                typedef Outcome<Error, Model::SetInstancesProtectionResponse> SetInstancesProtectionOutcome;
                typedef std::future<SetInstancesProtectionOutcome> SetInstancesProtectionOutcomeCallable;
                typedef std::function<void(const AsClient*, const Model::SetInstancesProtectionRequest&, SetInstancesProtectionOutcome, const std::shared_ptr<const AsyncCallerContext>&)> SetInstancesProtectionAsyncHandler;
                typedef Outcome<Error, Model::StartAutoScalingInstancesResponse> StartAutoScalingInstancesOutcome;
                typedef std::future<StartAutoScalingInstancesOutcome> StartAutoScalingInstancesOutcomeCallable;
                typedef std::function<void(const AsClient*, const Model::StartAutoScalingInstancesRequest&, StartAutoScalingInstancesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> StartAutoScalingInstancesAsyncHandler;
                typedef Outcome<Error, Model::StopAutoScalingInstancesResponse> StopAutoScalingInstancesOutcome;
                typedef std::future<StopAutoScalingInstancesOutcome> StopAutoScalingInstancesOutcomeCallable;
                typedef std::function<void(const AsClient*, const Model::StopAutoScalingInstancesRequest&, StopAutoScalingInstancesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> StopAutoScalingInstancesAsyncHandler;
                typedef Outcome<Error, Model::UpgradeLaunchConfigurationResponse> UpgradeLaunchConfigurationOutcome;
                typedef std::future<UpgradeLaunchConfigurationOutcome> UpgradeLaunchConfigurationOutcomeCallable;
                typedef std::function<void(const AsClient*, const Model::UpgradeLaunchConfigurationRequest&, UpgradeLaunchConfigurationOutcome, const std::shared_ptr<const AsyncCallerContext>&)> UpgradeLaunchConfigurationAsyncHandler;
                typedef Outcome<Error, Model::UpgradeLifecycleHookResponse> UpgradeLifecycleHookOutcome;
                typedef std::future<UpgradeLifecycleHookOutcome> UpgradeLifecycleHookOutcomeCallable;
                typedef std::function<void(const AsClient*, const Model::UpgradeLifecycleHookRequest&, UpgradeLifecycleHookOutcome, const std::shared_ptr<const AsyncCallerContext>&)> UpgradeLifecycleHookAsyncHandler;



                /**
                 *This API (AttachInstances) is used to add CVM instances to an auto scaling group.

                 * @param req AttachInstancesRequest
                 * @return AttachInstancesOutcome
                 */
                AttachInstancesOutcome AttachInstances(const Model::AttachInstancesRequest &request);
                void AttachInstancesAsync(const Model::AttachInstancesRequest& request, const AttachInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                AttachInstancesOutcomeCallable AttachInstancesCallable(const Model::AttachInstancesRequest& request);

                /**
                 *This API (CompleteLifecycleAction) is used to complete a lifecycle action.

* The result ("CONTINUE" or "ABANDON") of a specific lifecycle hook can be specified by calling this API. If this API is not called at all, the lifecycle hook will be processed based on the "DefaultResult" after timeout.

                 * @param req CompleteLifecycleActionRequest
                 * @return CompleteLifecycleActionOutcome
                 */
                CompleteLifecycleActionOutcome CompleteLifecycleAction(const Model::CompleteLifecycleActionRequest &request);
                void CompleteLifecycleActionAsync(const Model::CompleteLifecycleActionRequest& request, const CompleteLifecycleActionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CompleteLifecycleActionOutcomeCallable CompleteLifecycleActionCallable(const Model::CompleteLifecycleActionRequest& request);

                /**
                 *This API (CreateAutoScalingGroup) is used to create an auto scaling group.
                 * @param req CreateAutoScalingGroupRequest
                 * @return CreateAutoScalingGroupOutcome
                 */
                CreateAutoScalingGroupOutcome CreateAutoScalingGroup(const Model::CreateAutoScalingGroupRequest &request);
                void CreateAutoScalingGroupAsync(const Model::CreateAutoScalingGroupRequest& request, const CreateAutoScalingGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateAutoScalingGroupOutcomeCallable CreateAutoScalingGroupCallable(const Model::CreateAutoScalingGroupRequest& request);

                /**
                 *This API is used to create launch configurations and scaling groups based on an instance.

Note: for a scaling group that is created based on a monthly-subscribed instance, the instances added for scale-out are pay-as-you-go instance.
                 * @param req CreateAutoScalingGroupFromInstanceRequest
                 * @return CreateAutoScalingGroupFromInstanceOutcome
                 */
                CreateAutoScalingGroupFromInstanceOutcome CreateAutoScalingGroupFromInstance(const Model::CreateAutoScalingGroupFromInstanceRequest &request);
                void CreateAutoScalingGroupFromInstanceAsync(const Model::CreateAutoScalingGroupFromInstanceRequest& request, const CreateAutoScalingGroupFromInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateAutoScalingGroupFromInstanceOutcomeCallable CreateAutoScalingGroupFromInstanceCallable(const Model::CreateAutoScalingGroupFromInstanceRequest& request);

                /**
                 *This API (CreateLaunchConfiguration) is used to create a launch configuration.

* A few fields of a launch configuration can be modified through `ModifyLaunchConfigurationAttributes`. To use a new launch configuration, it is recommended to create it from scratch.

* You can create up to 20 launch configurations for each project. For more information, see [Usage Limits](https://cloud.tencent.com/document/product/377/3120).

                 * @param req CreateLaunchConfigurationRequest
                 * @return CreateLaunchConfigurationOutcome
                 */
                CreateLaunchConfigurationOutcome CreateLaunchConfiguration(const Model::CreateLaunchConfigurationRequest &request);
                void CreateLaunchConfigurationAsync(const Model::CreateLaunchConfigurationRequest& request, const CreateLaunchConfigurationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateLaunchConfigurationOutcomeCallable CreateLaunchConfigurationCallable(const Model::CreateLaunchConfigurationRequest& request);

                /**
                 *This API (CreateLifeCycleHook) is used to create a lifecycle hook.

* You can configure message notifications in the following format for lifecycle hooks, which will be sent to your CMQ queue by AS:

```
{
	"Service": "Tencent Cloud Auto Scaling",
	"Time": "2019-03-14T10:15:11Z",
	"AppId": "1251783334",
	"ActivityId": "asa-fznnvrja",
	"AutoScalingGroupId": "asg-rrrrtttt",
	"LifecycleHookId": "ash-xxxxyyyy",
	"LifecycleHookName": "my-hook",
	"LifecycleActionToken": "3080e1c9-0efe-4dd7-ad3b-90cd6618298f",
	"InstanceId": "ins-aaaabbbb",
	"LifecycleTransition": "INSTANCE_LAUNCHING",
	"NotificationMetadata": ""
}
```
                 * @param req CreateLifecycleHookRequest
                 * @return CreateLifecycleHookOutcome
                 */
                CreateLifecycleHookOutcome CreateLifecycleHook(const Model::CreateLifecycleHookRequest &request);
                void CreateLifecycleHookAsync(const Model::CreateLifecycleHookRequest& request, const CreateLifecycleHookAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateLifecycleHookOutcomeCallable CreateLifecycleHookCallable(const Model::CreateLifecycleHookRequest& request);

                /**
                 *This API (CreateNotificationConfiguration) is used to create a notification.
                 * @param req CreateNotificationConfigurationRequest
                 * @return CreateNotificationConfigurationOutcome
                 */
                CreateNotificationConfigurationOutcome CreateNotificationConfiguration(const Model::CreateNotificationConfigurationRequest &request);
                void CreateNotificationConfigurationAsync(const Model::CreateNotificationConfigurationRequest& request, const CreateNotificationConfigurationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateNotificationConfigurationOutcomeCallable CreateNotificationConfigurationCallable(const Model::CreateNotificationConfigurationRequest& request);

                /**
                 *This API (CreatePaiInstance) is used to create a PAI instance.
                 * @param req CreatePaiInstanceRequest
                 * @return CreatePaiInstanceOutcome
                 */
                CreatePaiInstanceOutcome CreatePaiInstance(const Model::CreatePaiInstanceRequest &request);
                void CreatePaiInstanceAsync(const Model::CreatePaiInstanceRequest& request, const CreatePaiInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreatePaiInstanceOutcomeCallable CreatePaiInstanceCallable(const Model::CreatePaiInstanceRequest& request);

                /**
                 *This API (CreateScalingPolicy) is used to create an alarm trigger policy.
                 * @param req CreateScalingPolicyRequest
                 * @return CreateScalingPolicyOutcome
                 */
                CreateScalingPolicyOutcome CreateScalingPolicy(const Model::CreateScalingPolicyRequest &request);
                void CreateScalingPolicyAsync(const Model::CreateScalingPolicyRequest& request, const CreateScalingPolicyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateScalingPolicyOutcomeCallable CreateScalingPolicyCallable(const Model::CreateScalingPolicyRequest& request);

                /**
                 *This API (CreateScheduledAction) is used to create a scheduled task.
                 * @param req CreateScheduledActionRequest
                 * @return CreateScheduledActionOutcome
                 */
                CreateScheduledActionOutcome CreateScheduledAction(const Model::CreateScheduledActionRequest &request);
                void CreateScheduledActionAsync(const Model::CreateScheduledActionRequest& request, const CreateScheduledActionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateScheduledActionOutcomeCallable CreateScheduledActionCallable(const Model::CreateScheduledActionRequest& request);

                /**
                 *This API (DeleteAutoScalingGroup) is used to delete the specified auto scaling group that has no instances and remains inactive.
                 * @param req DeleteAutoScalingGroupRequest
                 * @return DeleteAutoScalingGroupOutcome
                 */
                DeleteAutoScalingGroupOutcome DeleteAutoScalingGroup(const Model::DeleteAutoScalingGroupRequest &request);
                void DeleteAutoScalingGroupAsync(const Model::DeleteAutoScalingGroupRequest& request, const DeleteAutoScalingGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteAutoScalingGroupOutcomeCallable DeleteAutoScalingGroupCallable(const Model::DeleteAutoScalingGroupRequest& request);

                /**
                 *This API (DeleteLaunchConfiguration) is used to delete a launch configuration.

* If the launch configuration is active in an auto scaling group, it cannot be deleted.

                 * @param req DeleteLaunchConfigurationRequest
                 * @return DeleteLaunchConfigurationOutcome
                 */
                DeleteLaunchConfigurationOutcome DeleteLaunchConfiguration(const Model::DeleteLaunchConfigurationRequest &request);
                void DeleteLaunchConfigurationAsync(const Model::DeleteLaunchConfigurationRequest& request, const DeleteLaunchConfigurationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteLaunchConfigurationOutcomeCallable DeleteLaunchConfigurationCallable(const Model::DeleteLaunchConfigurationRequest& request);

                /**
                 *This API (DeleteLifeCycleHook) is used to delete a lifecycle hook.
                 * @param req DeleteLifecycleHookRequest
                 * @return DeleteLifecycleHookOutcome
                 */
                DeleteLifecycleHookOutcome DeleteLifecycleHook(const Model::DeleteLifecycleHookRequest &request);
                void DeleteLifecycleHookAsync(const Model::DeleteLifecycleHookRequest& request, const DeleteLifecycleHookAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteLifecycleHookOutcomeCallable DeleteLifecycleHookCallable(const Model::DeleteLifecycleHookRequest& request);

                /**
                 *This API (DeleteNotificationConfiguration) is used to delete the specified notification.
                 * @param req DeleteNotificationConfigurationRequest
                 * @return DeleteNotificationConfigurationOutcome
                 */
                DeleteNotificationConfigurationOutcome DeleteNotificationConfiguration(const Model::DeleteNotificationConfigurationRequest &request);
                void DeleteNotificationConfigurationAsync(const Model::DeleteNotificationConfigurationRequest& request, const DeleteNotificationConfigurationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteNotificationConfigurationOutcomeCallable DeleteNotificationConfigurationCallable(const Model::DeleteNotificationConfigurationRequest& request);

                /**
                 *This API (DeleteScalingPolicy) is used to delete an alarm trigger policy.
                 * @param req DeleteScalingPolicyRequest
                 * @return DeleteScalingPolicyOutcome
                 */
                DeleteScalingPolicyOutcome DeleteScalingPolicy(const Model::DeleteScalingPolicyRequest &request);
                void DeleteScalingPolicyAsync(const Model::DeleteScalingPolicyRequest& request, const DeleteScalingPolicyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteScalingPolicyOutcomeCallable DeleteScalingPolicyCallable(const Model::DeleteScalingPolicyRequest& request);

                /**
                 *This API (DeleteScheduledAction) is used to delete the specified scheduled task.
                 * @param req DeleteScheduledActionRequest
                 * @return DeleteScheduledActionOutcome
                 */
                DeleteScheduledActionOutcome DeleteScheduledAction(const Model::DeleteScheduledActionRequest &request);
                void DeleteScheduledActionAsync(const Model::DeleteScheduledActionRequest& request, const DeleteScheduledActionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteScheduledActionOutcomeCallable DeleteScheduledActionCallable(const Model::DeleteScheduledActionRequest& request);

                /**
                 *This API (DescribeAccountLimits) is used to query the limits of user's AS resources.
                 * @param req DescribeAccountLimitsRequest
                 * @return DescribeAccountLimitsOutcome
                 */
                DescribeAccountLimitsOutcome DescribeAccountLimits(const Model::DescribeAccountLimitsRequest &request);
                void DescribeAccountLimitsAsync(const Model::DescribeAccountLimitsRequest& request, const DescribeAccountLimitsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeAccountLimitsOutcomeCallable DescribeAccountLimitsCallable(const Model::DescribeAccountLimitsRequest& request);

                /**
                 *This API (DescribeAutoScalingActivities) is used to query the activity history of an auto scaling group.
                 * @param req DescribeAutoScalingActivitiesRequest
                 * @return DescribeAutoScalingActivitiesOutcome
                 */
                DescribeAutoScalingActivitiesOutcome DescribeAutoScalingActivities(const Model::DescribeAutoScalingActivitiesRequest &request);
                void DescribeAutoScalingActivitiesAsync(const Model::DescribeAutoScalingActivitiesRequest& request, const DescribeAutoScalingActivitiesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeAutoScalingActivitiesOutcomeCallable DescribeAutoScalingActivitiesCallable(const Model::DescribeAutoScalingActivitiesRequest& request);

                /**
                 *This API is used to query the latest activity history of an auto scaling group.
                 * @param req DescribeAutoScalingGroupLastActivitiesRequest
                 * @return DescribeAutoScalingGroupLastActivitiesOutcome
                 */
                DescribeAutoScalingGroupLastActivitiesOutcome DescribeAutoScalingGroupLastActivities(const Model::DescribeAutoScalingGroupLastActivitiesRequest &request);
                void DescribeAutoScalingGroupLastActivitiesAsync(const Model::DescribeAutoScalingGroupLastActivitiesRequest& request, const DescribeAutoScalingGroupLastActivitiesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeAutoScalingGroupLastActivitiesOutcomeCallable DescribeAutoScalingGroupLastActivitiesCallable(const Model::DescribeAutoScalingGroupLastActivitiesRequest& request);

                /**
                 *This API (DescribeAutoScalingGroups) is used to query the information of auto scaling groups.

* You can query the details of auto scaling groups based on information such as auto scaling group ID, auto scaling group name, or launch configuration ID. For more information on filters, see `Filter`.
* If the parameter is empty, a certain number (specified by `Limit` and 20 by default) of auto scaling groups of the current user will be returned.
                 * @param req DescribeAutoScalingGroupsRequest
                 * @return DescribeAutoScalingGroupsOutcome
                 */
                DescribeAutoScalingGroupsOutcome DescribeAutoScalingGroups(const Model::DescribeAutoScalingGroupsRequest &request);
                void DescribeAutoScalingGroupsAsync(const Model::DescribeAutoScalingGroupsRequest& request, const DescribeAutoScalingGroupsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeAutoScalingGroupsOutcomeCallable DescribeAutoScalingGroupsCallable(const Model::DescribeAutoScalingGroupsRequest& request);

                /**
                 *This API (DescribeAutoScalingInstances) is used to query the information of instances associated with AS.

* You can query the details of instances based on information such as instance ID and auto scaling group ID. For more information on filters, see `Filter`.
* If the parameter is empty, a certain number (specified by `Limit` and 20 by default) of instances of the current user will be returned.
                 * @param req DescribeAutoScalingInstancesRequest
                 * @return DescribeAutoScalingInstancesOutcome
                 */
                DescribeAutoScalingInstancesOutcome DescribeAutoScalingInstances(const Model::DescribeAutoScalingInstancesRequest &request);
                void DescribeAutoScalingInstancesAsync(const Model::DescribeAutoScalingInstancesRequest& request, const DescribeAutoScalingInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeAutoScalingInstancesOutcomeCallable DescribeAutoScalingInstancesCallable(const Model::DescribeAutoScalingInstancesRequest& request);

                /**
                 *This API (DescribeLaunchConfigurations) is used to query the information of launch configurations.

* You can query the launch configuration details based on information such as launch configuration ID and name. For more information on filters, see `Filter`.
* If the parameter is empty, a certain number (specified by `Limit` and 20 by default) of launch configurations of the current user will be returned.
                 * @param req DescribeLaunchConfigurationsRequest
                 * @return DescribeLaunchConfigurationsOutcome
                 */
                DescribeLaunchConfigurationsOutcome DescribeLaunchConfigurations(const Model::DescribeLaunchConfigurationsRequest &request);
                void DescribeLaunchConfigurationsAsync(const Model::DescribeLaunchConfigurationsRequest& request, const DescribeLaunchConfigurationsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeLaunchConfigurationsOutcomeCallable DescribeLaunchConfigurationsCallable(const Model::DescribeLaunchConfigurationsRequest& request);

                /**
                 *This API (DescribeLifecycleHooks) is used to query the information of lifecycle hooks.

* You can query the details of lifecycle hooks based on information such as auto scaling group ID, lifecycle hook ID, or lifecycle hook name. For more information on filters, see `Filter`.
* If the parameter is empty, a certain number (specified by `Limit` and 20 by default) of lifecycle hooks of the current user will be returned.
                 * @param req DescribeLifecycleHooksRequest
                 * @return DescribeLifecycleHooksOutcome
                 */
                DescribeLifecycleHooksOutcome DescribeLifecycleHooks(const Model::DescribeLifecycleHooksRequest &request);
                void DescribeLifecycleHooksAsync(const Model::DescribeLifecycleHooksRequest& request, const DescribeLifecycleHooksAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeLifecycleHooksOutcomeCallable DescribeLifecycleHooksCallable(const Model::DescribeLifecycleHooksRequest& request);

                /**
                 *This API (DescribeNotificationConfigurations) is used to query the information of one or more notifications.

You can query the details of notifications based on information such as notification ID and auto scaling group ID. For more information on filters, see `Filter`.
If the parameter is empty, a certain number (specified by `Limit` and 20 by default) of notifications of the current user will be returned.
                 * @param req DescribeNotificationConfigurationsRequest
                 * @return DescribeNotificationConfigurationsOutcome
                 */
                DescribeNotificationConfigurationsOutcome DescribeNotificationConfigurations(const Model::DescribeNotificationConfigurationsRequest &request);
                void DescribeNotificationConfigurationsAsync(const Model::DescribeNotificationConfigurationsRequest& request, const DescribeNotificationConfigurationsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeNotificationConfigurationsOutcomeCallable DescribeNotificationConfigurationsCallable(const Model::DescribeNotificationConfigurationsRequest& request);

                /**
                 *This API (DescribePaiInstances) is used to query the information of PAI instances.

* You can query the detailed information of PAI instances based on information such as instance ID and instance domain name. For more information on filters, see `Filter`.
* If the parameter is empty, a certain number (specified by `Limit` and 20 by default) of PAI instances of the current user will be returned.
                 * @param req DescribePaiInstancesRequest
                 * @return DescribePaiInstancesOutcome
                 */
                DescribePaiInstancesOutcome DescribePaiInstances(const Model::DescribePaiInstancesRequest &request);
                void DescribePaiInstancesAsync(const Model::DescribePaiInstancesRequest& request, const DescribePaiInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribePaiInstancesOutcomeCallable DescribePaiInstancesCallable(const Model::DescribePaiInstancesRequest& request);

                /**
                 *This API (DescribeScalingPolicies) is used to query alarm trigger policies.
                 * @param req DescribeScalingPoliciesRequest
                 * @return DescribeScalingPoliciesOutcome
                 */
                DescribeScalingPoliciesOutcome DescribeScalingPolicies(const Model::DescribeScalingPoliciesRequest &request);
                void DescribeScalingPoliciesAsync(const Model::DescribeScalingPoliciesRequest& request, const DescribeScalingPoliciesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeScalingPoliciesOutcomeCallable DescribeScalingPoliciesCallable(const Model::DescribeScalingPoliciesRequest& request);

                /**
                 *This API (DescribeScheduledActions) is used to query the details of one or more scheduled tasks.

* You can query the details of scheduled tasks based on information such as scheduled task ID, scheduled task name, or auto scaling group ID. For more information on filters, see `Filter`.
* If the parameter is empty, a certain number (specified by `Limit` and 20 by default) of scheduled tasks of the current user will be returned.
                 * @param req DescribeScheduledActionsRequest
                 * @return DescribeScheduledActionsOutcome
                 */
                DescribeScheduledActionsOutcome DescribeScheduledActions(const Model::DescribeScheduledActionsRequest &request);
                void DescribeScheduledActionsAsync(const Model::DescribeScheduledActionsRequest& request, const DescribeScheduledActionsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeScheduledActionsOutcomeCallable DescribeScheduledActionsCallable(const Model::DescribeScheduledActionsRequest& request);

                /**
                 *This API (DetachInstances) is used to remove CVM instances from an auto scaling group. Instances removed via this API will not be terminated.
                 * @param req DetachInstancesRequest
                 * @return DetachInstancesOutcome
                 */
                DetachInstancesOutcome DetachInstances(const Model::DetachInstancesRequest &request);
                void DetachInstancesAsync(const Model::DetachInstancesRequest& request, const DetachInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DetachInstancesOutcomeCallable DetachInstancesCallable(const Model::DetachInstancesRequest& request);

                /**
                 *This API (DisableAutoScalingGroup) is used to disable the specified auto scaling group.
                 * @param req DisableAutoScalingGroupRequest
                 * @return DisableAutoScalingGroupOutcome
                 */
                DisableAutoScalingGroupOutcome DisableAutoScalingGroup(const Model::DisableAutoScalingGroupRequest &request);
                void DisableAutoScalingGroupAsync(const Model::DisableAutoScalingGroupRequest& request, const DisableAutoScalingGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DisableAutoScalingGroupOutcomeCallable DisableAutoScalingGroupCallable(const Model::DisableAutoScalingGroupRequest& request);

                /**
                 *This API (EnableAutoScalingGroup) is used to enable the specified auto scaling group.
                 * @param req EnableAutoScalingGroupRequest
                 * @return EnableAutoScalingGroupOutcome
                 */
                EnableAutoScalingGroupOutcome EnableAutoScalingGroup(const Model::EnableAutoScalingGroupRequest &request);
                void EnableAutoScalingGroupAsync(const Model::EnableAutoScalingGroupRequest& request, const EnableAutoScalingGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                EnableAutoScalingGroupOutcomeCallable EnableAutoScalingGroupCallable(const Model::EnableAutoScalingGroupRequest& request);

                /**
                 *This API (ExecuteScalingPolicy) is used to execute a scaling policy.

* The scaling policy can be executed based on the scaling policy ID.
* When the auto scaling group to which the scaling policy belongs is performing a scaling activity, the scaling policy will be rejected.
                 * @param req ExecuteScalingPolicyRequest
                 * @return ExecuteScalingPolicyOutcome
                 */
                ExecuteScalingPolicyOutcome ExecuteScalingPolicy(const Model::ExecuteScalingPolicyRequest &request);
                void ExecuteScalingPolicyAsync(const Model::ExecuteScalingPolicyRequest& request, const ExecuteScalingPolicyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ExecuteScalingPolicyOutcomeCallable ExecuteScalingPolicyCallable(const Model::ExecuteScalingPolicyRequest& request);

                /**
                 *This API (ModifyAutoScalingGroup) is used to modify an auto scaling group.
                 * @param req ModifyAutoScalingGroupRequest
                 * @return ModifyAutoScalingGroupOutcome
                 */
                ModifyAutoScalingGroupOutcome ModifyAutoScalingGroup(const Model::ModifyAutoScalingGroupRequest &request);
                void ModifyAutoScalingGroupAsync(const Model::ModifyAutoScalingGroupRequest& request, const ModifyAutoScalingGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyAutoScalingGroupOutcomeCallable ModifyAutoScalingGroupCallable(const Model::ModifyAutoScalingGroupRequest& request);

                /**
                 *This API (ModifyDesiredCapacity) is used to modify the desired number of instances in the specified auto scaling group.
                 * @param req ModifyDesiredCapacityRequest
                 * @return ModifyDesiredCapacityOutcome
                 */
                ModifyDesiredCapacityOutcome ModifyDesiredCapacity(const Model::ModifyDesiredCapacityRequest &request);
                void ModifyDesiredCapacityAsync(const Model::ModifyDesiredCapacityRequest& request, const ModifyDesiredCapacityAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyDesiredCapacityOutcomeCallable ModifyDesiredCapacityCallable(const Model::ModifyDesiredCapacityRequest& request);

                /**
                 *This API (ModifyLaunchConfigurationAttributes) is used to modify some attributes of a launch configuration.

* The changes of launch configuration do not affect the existing instances. New instances will be created based on the modified configuration.
* This API supports modifying certain simple types of attributes.
                 * @param req ModifyLaunchConfigurationAttributesRequest
                 * @return ModifyLaunchConfigurationAttributesOutcome
                 */
                ModifyLaunchConfigurationAttributesOutcome ModifyLaunchConfigurationAttributes(const Model::ModifyLaunchConfigurationAttributesRequest &request);
                void ModifyLaunchConfigurationAttributesAsync(const Model::ModifyLaunchConfigurationAttributesRequest& request, const ModifyLaunchConfigurationAttributesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyLaunchConfigurationAttributesOutcomeCallable ModifyLaunchConfigurationAttributesCallable(const Model::ModifyLaunchConfigurationAttributesRequest& request);

                /**
                 *This API (ModifyLoadBalancers) is used to modify the load balancers of an auto scaling group.

* This API can specify a new load balancer configuration for the auto scaling group. The new configuration overwrites the original load balancer configuration.
* If you want to clear the load balancer for the auto scaling group, specify only the auto scaling group ID but not the specific load balancer when calling this API.
* This API modifies the load balancer of the auto scaling group and generate a scaling activity to asynchronously modify the load balancers of existing instances.
                 * @param req ModifyLoadBalancersRequest
                 * @return ModifyLoadBalancersOutcome
                 */
                ModifyLoadBalancersOutcome ModifyLoadBalancers(const Model::ModifyLoadBalancersRequest &request);
                void ModifyLoadBalancersAsync(const Model::ModifyLoadBalancersRequest& request, const ModifyLoadBalancersAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyLoadBalancersOutcomeCallable ModifyLoadBalancersCallable(const Model::ModifyLoadBalancersRequest& request);

                /**
                 *This API (ModifyNotificationConfiguration) is used to modify a notification.
                 * @param req ModifyNotificationConfigurationRequest
                 * @return ModifyNotificationConfigurationOutcome
                 */
                ModifyNotificationConfigurationOutcome ModifyNotificationConfiguration(const Model::ModifyNotificationConfigurationRequest &request);
                void ModifyNotificationConfigurationAsync(const Model::ModifyNotificationConfigurationRequest& request, const ModifyNotificationConfigurationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyNotificationConfigurationOutcomeCallable ModifyNotificationConfigurationCallable(const Model::ModifyNotificationConfigurationRequest& request);

                /**
                 *This API (ModifyScalingPolicy) is used to modify an alarm trigger policy.
                 * @param req ModifyScalingPolicyRequest
                 * @return ModifyScalingPolicyOutcome
                 */
                ModifyScalingPolicyOutcome ModifyScalingPolicy(const Model::ModifyScalingPolicyRequest &request);
                void ModifyScalingPolicyAsync(const Model::ModifyScalingPolicyRequest& request, const ModifyScalingPolicyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyScalingPolicyOutcomeCallable ModifyScalingPolicyCallable(const Model::ModifyScalingPolicyRequest& request);

                /**
                 *This API (ModifyScheduledAction) is used to modify a scheduled task.
                 * @param req ModifyScheduledActionRequest
                 * @return ModifyScheduledActionOutcome
                 */
                ModifyScheduledActionOutcome ModifyScheduledAction(const Model::ModifyScheduledActionRequest &request);
                void ModifyScheduledActionAsync(const Model::ModifyScheduledActionRequest& request, const ModifyScheduledActionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyScheduledActionOutcomeCallable ModifyScheduledActionCallable(const Model::ModifyScheduledActionRequest& request);

                /**
                 *This API (PreviewPaiDomainName) is used to preview a PAI domain name.

                 * @param req PreviewPaiDomainNameRequest
                 * @return PreviewPaiDomainNameOutcome
                 */
                PreviewPaiDomainNameOutcome PreviewPaiDomainName(const Model::PreviewPaiDomainNameRequest &request);
                void PreviewPaiDomainNameAsync(const Model::PreviewPaiDomainNameRequest& request, const PreviewPaiDomainNameAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                PreviewPaiDomainNameOutcomeCallable PreviewPaiDomainNameCallable(const Model::PreviewPaiDomainNameRequest& request);

                /**
                 *This API (RemoveInstances) is used to remove CVM instances from an auto scaling group. Instances created automatically by AS will be terminated, while those added to the auto scaling group after creation will be removed and retained.
                 * @param req RemoveInstancesRequest
                 * @return RemoveInstancesOutcome
                 */
                RemoveInstancesOutcome RemoveInstances(const Model::RemoveInstancesRequest &request);
                void RemoveInstancesAsync(const Model::RemoveInstancesRequest& request, const RemoveInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                RemoveInstancesOutcomeCallable RemoveInstancesCallable(const Model::RemoveInstancesRequest& request);

                /**
                 *This API (SetInstancesProtection) is used to enable scale-in protection for an instance.
When an instance has scale-in protection enabled, it will not be removed when scaling is triggered by replacement of unhealthy instances, alarm trigger policy, threshold change, etc.
                 * @param req SetInstancesProtectionRequest
                 * @return SetInstancesProtectionOutcome
                 */
                SetInstancesProtectionOutcome SetInstancesProtection(const Model::SetInstancesProtectionRequest &request);
                void SetInstancesProtectionAsync(const Model::SetInstancesProtectionRequest& request, const SetInstancesProtectionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                SetInstancesProtectionOutcomeCallable SetInstancesProtectionCallable(const Model::SetInstancesProtectionRequest& request);

                /**
                 *This API is used to start up CVM instances in a scaling group.
* After startup, the instance will be in the `IN_SERVICE` status, which will increase the desired capacity. Please note that the desired capacity cannot exceed the maximum value.
* This API supports batch operation. Up to 100 instances can be started up in each request.
                 * @param req StartAutoScalingInstancesRequest
                 * @return StartAutoScalingInstancesOutcome
                 */
                StartAutoScalingInstancesOutcome StartAutoScalingInstances(const Model::StartAutoScalingInstancesRequest &request);
                void StartAutoScalingInstancesAsync(const Model::StartAutoScalingInstancesRequest& request, const StartAutoScalingInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                StartAutoScalingInstancesOutcomeCallable StartAutoScalingInstancesCallable(const Model::StartAutoScalingInstancesRequest& request);

                /**
                 *This API is used to shut down CVM instances in a scaling group.
* Use the `SOFT_FIRST` shutdown, which means the CVM will be forcibly shut down if the soft shutdown fails.
* Shutting down instances in the `IN_SERVICE` status will reduce the desired capacity, but the desired capacity cannot be less than the minimum value.
* To use the `STOP_CHARGING` shutdown, the instances you want to shut down must satisfy the conditions of [no charges when shut down](https://cloud.tencent.com/document/product/213/19918).
* This API supports batch operation. Up to 100 instances can be shut down in each request.
                 * @param req StopAutoScalingInstancesRequest
                 * @return StopAutoScalingInstancesOutcome
                 */
                StopAutoScalingInstancesOutcome StopAutoScalingInstances(const Model::StopAutoScalingInstancesRequest &request);
                void StopAutoScalingInstancesAsync(const Model::StopAutoScalingInstancesRequest& request, const StopAutoScalingInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                StopAutoScalingInstancesOutcomeCallable StopAutoScalingInstancesCallable(const Model::StopAutoScalingInstancesRequest& request);

                /**
                 *This API (UpgradeLaunchConfiguration) is used to upgrade a launch configuration.

* This API is used to upgrade a launch configuration in a "completely overriding" manner, i.e., it uniformly sets a new configuration according to the API parameters regardless of the original parameters. If optional fields are left empty, their default values will be used.
* After the launch configuration is upgraded, the existing instances that have been created by it will not be changed, but new instances will be created according to the new configuration.
                 * @param req UpgradeLaunchConfigurationRequest
                 * @return UpgradeLaunchConfigurationOutcome
                 */
                UpgradeLaunchConfigurationOutcome UpgradeLaunchConfiguration(const Model::UpgradeLaunchConfigurationRequest &request);
                void UpgradeLaunchConfigurationAsync(const Model::UpgradeLaunchConfigurationRequest& request, const UpgradeLaunchConfigurationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                UpgradeLaunchConfigurationOutcomeCallable UpgradeLaunchConfigurationCallable(const Model::UpgradeLaunchConfigurationRequest& request);

                /**
                 *This API (UpgradeLifecycleHook) is used to upgrade a lifecycle hook.

* This API is used to upgrade a lifecycle hook in a "completely overriding" manner, i.e., it uniformly sets a new configuration according to the API parameters regardless of the original parameters. If optional fields are left empty, their default values will be used.

                 * @param req UpgradeLifecycleHookRequest
                 * @return UpgradeLifecycleHookOutcome
                 */
                UpgradeLifecycleHookOutcome UpgradeLifecycleHook(const Model::UpgradeLifecycleHookRequest &request);
                void UpgradeLifecycleHookAsync(const Model::UpgradeLifecycleHookRequest& request, const UpgradeLifecycleHookAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                UpgradeLifecycleHookOutcomeCallable UpgradeLifecycleHookCallable(const Model::UpgradeLifecycleHookRequest& request);

            };
        }
    }
}

#endif // !TENCENTCLOUD_AS_V20180419_ASCLIENT_H_
