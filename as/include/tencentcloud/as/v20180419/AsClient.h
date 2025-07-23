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
#include <tencentcloud/as/v20180419/model/AttachLoadBalancersRequest.h>
#include <tencentcloud/as/v20180419/model/AttachLoadBalancersResponse.h>
#include <tencentcloud/as/v20180419/model/CancelInstanceRefreshRequest.h>
#include <tencentcloud/as/v20180419/model/CancelInstanceRefreshResponse.h>
#include <tencentcloud/as/v20180419/model/ClearLaunchConfigurationAttributesRequest.h>
#include <tencentcloud/as/v20180419/model/ClearLaunchConfigurationAttributesResponse.h>
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
#include <tencentcloud/as/v20180419/model/DescribeAutoScalingAdvicesRequest.h>
#include <tencentcloud/as/v20180419/model/DescribeAutoScalingAdvicesResponse.h>
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
#include <tencentcloud/as/v20180419/model/DescribeRefreshActivitiesRequest.h>
#include <tencentcloud/as/v20180419/model/DescribeRefreshActivitiesResponse.h>
#include <tencentcloud/as/v20180419/model/DescribeScalingPoliciesRequest.h>
#include <tencentcloud/as/v20180419/model/DescribeScalingPoliciesResponse.h>
#include <tencentcloud/as/v20180419/model/DescribeScheduledActionsRequest.h>
#include <tencentcloud/as/v20180419/model/DescribeScheduledActionsResponse.h>
#include <tencentcloud/as/v20180419/model/DetachInstancesRequest.h>
#include <tencentcloud/as/v20180419/model/DetachInstancesResponse.h>
#include <tencentcloud/as/v20180419/model/DetachLoadBalancersRequest.h>
#include <tencentcloud/as/v20180419/model/DetachLoadBalancersResponse.h>
#include <tencentcloud/as/v20180419/model/DisableAutoScalingGroupRequest.h>
#include <tencentcloud/as/v20180419/model/DisableAutoScalingGroupResponse.h>
#include <tencentcloud/as/v20180419/model/EnableAutoScalingGroupRequest.h>
#include <tencentcloud/as/v20180419/model/EnableAutoScalingGroupResponse.h>
#include <tencentcloud/as/v20180419/model/EnterStandbyRequest.h>
#include <tencentcloud/as/v20180419/model/EnterStandbyResponse.h>
#include <tencentcloud/as/v20180419/model/ExecuteScalingPolicyRequest.h>
#include <tencentcloud/as/v20180419/model/ExecuteScalingPolicyResponse.h>
#include <tencentcloud/as/v20180419/model/ExitStandbyRequest.h>
#include <tencentcloud/as/v20180419/model/ExitStandbyResponse.h>
#include <tencentcloud/as/v20180419/model/ModifyAutoScalingGroupRequest.h>
#include <tencentcloud/as/v20180419/model/ModifyAutoScalingGroupResponse.h>
#include <tencentcloud/as/v20180419/model/ModifyDesiredCapacityRequest.h>
#include <tencentcloud/as/v20180419/model/ModifyDesiredCapacityResponse.h>
#include <tencentcloud/as/v20180419/model/ModifyLaunchConfigurationAttributesRequest.h>
#include <tencentcloud/as/v20180419/model/ModifyLaunchConfigurationAttributesResponse.h>
#include <tencentcloud/as/v20180419/model/ModifyLifecycleHookRequest.h>
#include <tencentcloud/as/v20180419/model/ModifyLifecycleHookResponse.h>
#include <tencentcloud/as/v20180419/model/ModifyLoadBalancerTargetAttributesRequest.h>
#include <tencentcloud/as/v20180419/model/ModifyLoadBalancerTargetAttributesResponse.h>
#include <tencentcloud/as/v20180419/model/ModifyLoadBalancersRequest.h>
#include <tencentcloud/as/v20180419/model/ModifyLoadBalancersResponse.h>
#include <tencentcloud/as/v20180419/model/ModifyNotificationConfigurationRequest.h>
#include <tencentcloud/as/v20180419/model/ModifyNotificationConfigurationResponse.h>
#include <tencentcloud/as/v20180419/model/ModifyScalingPolicyRequest.h>
#include <tencentcloud/as/v20180419/model/ModifyScalingPolicyResponse.h>
#include <tencentcloud/as/v20180419/model/ModifyScheduledActionRequest.h>
#include <tencentcloud/as/v20180419/model/ModifyScheduledActionResponse.h>
#include <tencentcloud/as/v20180419/model/RemoveInstancesRequest.h>
#include <tencentcloud/as/v20180419/model/RemoveInstancesResponse.h>
#include <tencentcloud/as/v20180419/model/ResumeInstanceRefreshRequest.h>
#include <tencentcloud/as/v20180419/model/ResumeInstanceRefreshResponse.h>
#include <tencentcloud/as/v20180419/model/RollbackInstanceRefreshRequest.h>
#include <tencentcloud/as/v20180419/model/RollbackInstanceRefreshResponse.h>
#include <tencentcloud/as/v20180419/model/ScaleInInstancesRequest.h>
#include <tencentcloud/as/v20180419/model/ScaleInInstancesResponse.h>
#include <tencentcloud/as/v20180419/model/ScaleOutInstancesRequest.h>
#include <tencentcloud/as/v20180419/model/ScaleOutInstancesResponse.h>
#include <tencentcloud/as/v20180419/model/SetInstancesProtectionRequest.h>
#include <tencentcloud/as/v20180419/model/SetInstancesProtectionResponse.h>
#include <tencentcloud/as/v20180419/model/StartAutoScalingInstancesRequest.h>
#include <tencentcloud/as/v20180419/model/StartAutoScalingInstancesResponse.h>
#include <tencentcloud/as/v20180419/model/StartInstanceRefreshRequest.h>
#include <tencentcloud/as/v20180419/model/StartInstanceRefreshResponse.h>
#include <tencentcloud/as/v20180419/model/StopAutoScalingInstancesRequest.h>
#include <tencentcloud/as/v20180419/model/StopAutoScalingInstancesResponse.h>
#include <tencentcloud/as/v20180419/model/StopInstanceRefreshRequest.h>
#include <tencentcloud/as/v20180419/model/StopInstanceRefreshResponse.h>
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

                typedef Outcome<Core::Error, Model::AttachInstancesResponse> AttachInstancesOutcome;
                typedef std::future<AttachInstancesOutcome> AttachInstancesOutcomeCallable;
                typedef std::function<void(const AsClient*, const Model::AttachInstancesRequest&, AttachInstancesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> AttachInstancesAsyncHandler;
                typedef Outcome<Core::Error, Model::AttachLoadBalancersResponse> AttachLoadBalancersOutcome;
                typedef std::future<AttachLoadBalancersOutcome> AttachLoadBalancersOutcomeCallable;
                typedef std::function<void(const AsClient*, const Model::AttachLoadBalancersRequest&, AttachLoadBalancersOutcome, const std::shared_ptr<const AsyncCallerContext>&)> AttachLoadBalancersAsyncHandler;
                typedef Outcome<Core::Error, Model::CancelInstanceRefreshResponse> CancelInstanceRefreshOutcome;
                typedef std::future<CancelInstanceRefreshOutcome> CancelInstanceRefreshOutcomeCallable;
                typedef std::function<void(const AsClient*, const Model::CancelInstanceRefreshRequest&, CancelInstanceRefreshOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CancelInstanceRefreshAsyncHandler;
                typedef Outcome<Core::Error, Model::ClearLaunchConfigurationAttributesResponse> ClearLaunchConfigurationAttributesOutcome;
                typedef std::future<ClearLaunchConfigurationAttributesOutcome> ClearLaunchConfigurationAttributesOutcomeCallable;
                typedef std::function<void(const AsClient*, const Model::ClearLaunchConfigurationAttributesRequest&, ClearLaunchConfigurationAttributesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ClearLaunchConfigurationAttributesAsyncHandler;
                typedef Outcome<Core::Error, Model::CompleteLifecycleActionResponse> CompleteLifecycleActionOutcome;
                typedef std::future<CompleteLifecycleActionOutcome> CompleteLifecycleActionOutcomeCallable;
                typedef std::function<void(const AsClient*, const Model::CompleteLifecycleActionRequest&, CompleteLifecycleActionOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CompleteLifecycleActionAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateAutoScalingGroupResponse> CreateAutoScalingGroupOutcome;
                typedef std::future<CreateAutoScalingGroupOutcome> CreateAutoScalingGroupOutcomeCallable;
                typedef std::function<void(const AsClient*, const Model::CreateAutoScalingGroupRequest&, CreateAutoScalingGroupOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateAutoScalingGroupAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateAutoScalingGroupFromInstanceResponse> CreateAutoScalingGroupFromInstanceOutcome;
                typedef std::future<CreateAutoScalingGroupFromInstanceOutcome> CreateAutoScalingGroupFromInstanceOutcomeCallable;
                typedef std::function<void(const AsClient*, const Model::CreateAutoScalingGroupFromInstanceRequest&, CreateAutoScalingGroupFromInstanceOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateAutoScalingGroupFromInstanceAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateLaunchConfigurationResponse> CreateLaunchConfigurationOutcome;
                typedef std::future<CreateLaunchConfigurationOutcome> CreateLaunchConfigurationOutcomeCallable;
                typedef std::function<void(const AsClient*, const Model::CreateLaunchConfigurationRequest&, CreateLaunchConfigurationOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateLaunchConfigurationAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateLifecycleHookResponse> CreateLifecycleHookOutcome;
                typedef std::future<CreateLifecycleHookOutcome> CreateLifecycleHookOutcomeCallable;
                typedef std::function<void(const AsClient*, const Model::CreateLifecycleHookRequest&, CreateLifecycleHookOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateLifecycleHookAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateNotificationConfigurationResponse> CreateNotificationConfigurationOutcome;
                typedef std::future<CreateNotificationConfigurationOutcome> CreateNotificationConfigurationOutcomeCallable;
                typedef std::function<void(const AsClient*, const Model::CreateNotificationConfigurationRequest&, CreateNotificationConfigurationOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateNotificationConfigurationAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateScalingPolicyResponse> CreateScalingPolicyOutcome;
                typedef std::future<CreateScalingPolicyOutcome> CreateScalingPolicyOutcomeCallable;
                typedef std::function<void(const AsClient*, const Model::CreateScalingPolicyRequest&, CreateScalingPolicyOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateScalingPolicyAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateScheduledActionResponse> CreateScheduledActionOutcome;
                typedef std::future<CreateScheduledActionOutcome> CreateScheduledActionOutcomeCallable;
                typedef std::function<void(const AsClient*, const Model::CreateScheduledActionRequest&, CreateScheduledActionOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateScheduledActionAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteAutoScalingGroupResponse> DeleteAutoScalingGroupOutcome;
                typedef std::future<DeleteAutoScalingGroupOutcome> DeleteAutoScalingGroupOutcomeCallable;
                typedef std::function<void(const AsClient*, const Model::DeleteAutoScalingGroupRequest&, DeleteAutoScalingGroupOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteAutoScalingGroupAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteLaunchConfigurationResponse> DeleteLaunchConfigurationOutcome;
                typedef std::future<DeleteLaunchConfigurationOutcome> DeleteLaunchConfigurationOutcomeCallable;
                typedef std::function<void(const AsClient*, const Model::DeleteLaunchConfigurationRequest&, DeleteLaunchConfigurationOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteLaunchConfigurationAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteLifecycleHookResponse> DeleteLifecycleHookOutcome;
                typedef std::future<DeleteLifecycleHookOutcome> DeleteLifecycleHookOutcomeCallable;
                typedef std::function<void(const AsClient*, const Model::DeleteLifecycleHookRequest&, DeleteLifecycleHookOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteLifecycleHookAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteNotificationConfigurationResponse> DeleteNotificationConfigurationOutcome;
                typedef std::future<DeleteNotificationConfigurationOutcome> DeleteNotificationConfigurationOutcomeCallable;
                typedef std::function<void(const AsClient*, const Model::DeleteNotificationConfigurationRequest&, DeleteNotificationConfigurationOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteNotificationConfigurationAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteScalingPolicyResponse> DeleteScalingPolicyOutcome;
                typedef std::future<DeleteScalingPolicyOutcome> DeleteScalingPolicyOutcomeCallable;
                typedef std::function<void(const AsClient*, const Model::DeleteScalingPolicyRequest&, DeleteScalingPolicyOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteScalingPolicyAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteScheduledActionResponse> DeleteScheduledActionOutcome;
                typedef std::future<DeleteScheduledActionOutcome> DeleteScheduledActionOutcomeCallable;
                typedef std::function<void(const AsClient*, const Model::DeleteScheduledActionRequest&, DeleteScheduledActionOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteScheduledActionAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeAccountLimitsResponse> DescribeAccountLimitsOutcome;
                typedef std::future<DescribeAccountLimitsOutcome> DescribeAccountLimitsOutcomeCallable;
                typedef std::function<void(const AsClient*, const Model::DescribeAccountLimitsRequest&, DescribeAccountLimitsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeAccountLimitsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeAutoScalingActivitiesResponse> DescribeAutoScalingActivitiesOutcome;
                typedef std::future<DescribeAutoScalingActivitiesOutcome> DescribeAutoScalingActivitiesOutcomeCallable;
                typedef std::function<void(const AsClient*, const Model::DescribeAutoScalingActivitiesRequest&, DescribeAutoScalingActivitiesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeAutoScalingActivitiesAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeAutoScalingAdvicesResponse> DescribeAutoScalingAdvicesOutcome;
                typedef std::future<DescribeAutoScalingAdvicesOutcome> DescribeAutoScalingAdvicesOutcomeCallable;
                typedef std::function<void(const AsClient*, const Model::DescribeAutoScalingAdvicesRequest&, DescribeAutoScalingAdvicesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeAutoScalingAdvicesAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeAutoScalingGroupLastActivitiesResponse> DescribeAutoScalingGroupLastActivitiesOutcome;
                typedef std::future<DescribeAutoScalingGroupLastActivitiesOutcome> DescribeAutoScalingGroupLastActivitiesOutcomeCallable;
                typedef std::function<void(const AsClient*, const Model::DescribeAutoScalingGroupLastActivitiesRequest&, DescribeAutoScalingGroupLastActivitiesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeAutoScalingGroupLastActivitiesAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeAutoScalingGroupsResponse> DescribeAutoScalingGroupsOutcome;
                typedef std::future<DescribeAutoScalingGroupsOutcome> DescribeAutoScalingGroupsOutcomeCallable;
                typedef std::function<void(const AsClient*, const Model::DescribeAutoScalingGroupsRequest&, DescribeAutoScalingGroupsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeAutoScalingGroupsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeAutoScalingInstancesResponse> DescribeAutoScalingInstancesOutcome;
                typedef std::future<DescribeAutoScalingInstancesOutcome> DescribeAutoScalingInstancesOutcomeCallable;
                typedef std::function<void(const AsClient*, const Model::DescribeAutoScalingInstancesRequest&, DescribeAutoScalingInstancesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeAutoScalingInstancesAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeLaunchConfigurationsResponse> DescribeLaunchConfigurationsOutcome;
                typedef std::future<DescribeLaunchConfigurationsOutcome> DescribeLaunchConfigurationsOutcomeCallable;
                typedef std::function<void(const AsClient*, const Model::DescribeLaunchConfigurationsRequest&, DescribeLaunchConfigurationsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeLaunchConfigurationsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeLifecycleHooksResponse> DescribeLifecycleHooksOutcome;
                typedef std::future<DescribeLifecycleHooksOutcome> DescribeLifecycleHooksOutcomeCallable;
                typedef std::function<void(const AsClient*, const Model::DescribeLifecycleHooksRequest&, DescribeLifecycleHooksOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeLifecycleHooksAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeNotificationConfigurationsResponse> DescribeNotificationConfigurationsOutcome;
                typedef std::future<DescribeNotificationConfigurationsOutcome> DescribeNotificationConfigurationsOutcomeCallable;
                typedef std::function<void(const AsClient*, const Model::DescribeNotificationConfigurationsRequest&, DescribeNotificationConfigurationsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeNotificationConfigurationsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeRefreshActivitiesResponse> DescribeRefreshActivitiesOutcome;
                typedef std::future<DescribeRefreshActivitiesOutcome> DescribeRefreshActivitiesOutcomeCallable;
                typedef std::function<void(const AsClient*, const Model::DescribeRefreshActivitiesRequest&, DescribeRefreshActivitiesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeRefreshActivitiesAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeScalingPoliciesResponse> DescribeScalingPoliciesOutcome;
                typedef std::future<DescribeScalingPoliciesOutcome> DescribeScalingPoliciesOutcomeCallable;
                typedef std::function<void(const AsClient*, const Model::DescribeScalingPoliciesRequest&, DescribeScalingPoliciesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeScalingPoliciesAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeScheduledActionsResponse> DescribeScheduledActionsOutcome;
                typedef std::future<DescribeScheduledActionsOutcome> DescribeScheduledActionsOutcomeCallable;
                typedef std::function<void(const AsClient*, const Model::DescribeScheduledActionsRequest&, DescribeScheduledActionsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeScheduledActionsAsyncHandler;
                typedef Outcome<Core::Error, Model::DetachInstancesResponse> DetachInstancesOutcome;
                typedef std::future<DetachInstancesOutcome> DetachInstancesOutcomeCallable;
                typedef std::function<void(const AsClient*, const Model::DetachInstancesRequest&, DetachInstancesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DetachInstancesAsyncHandler;
                typedef Outcome<Core::Error, Model::DetachLoadBalancersResponse> DetachLoadBalancersOutcome;
                typedef std::future<DetachLoadBalancersOutcome> DetachLoadBalancersOutcomeCallable;
                typedef std::function<void(const AsClient*, const Model::DetachLoadBalancersRequest&, DetachLoadBalancersOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DetachLoadBalancersAsyncHandler;
                typedef Outcome<Core::Error, Model::DisableAutoScalingGroupResponse> DisableAutoScalingGroupOutcome;
                typedef std::future<DisableAutoScalingGroupOutcome> DisableAutoScalingGroupOutcomeCallable;
                typedef std::function<void(const AsClient*, const Model::DisableAutoScalingGroupRequest&, DisableAutoScalingGroupOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DisableAutoScalingGroupAsyncHandler;
                typedef Outcome<Core::Error, Model::EnableAutoScalingGroupResponse> EnableAutoScalingGroupOutcome;
                typedef std::future<EnableAutoScalingGroupOutcome> EnableAutoScalingGroupOutcomeCallable;
                typedef std::function<void(const AsClient*, const Model::EnableAutoScalingGroupRequest&, EnableAutoScalingGroupOutcome, const std::shared_ptr<const AsyncCallerContext>&)> EnableAutoScalingGroupAsyncHandler;
                typedef Outcome<Core::Error, Model::EnterStandbyResponse> EnterStandbyOutcome;
                typedef std::future<EnterStandbyOutcome> EnterStandbyOutcomeCallable;
                typedef std::function<void(const AsClient*, const Model::EnterStandbyRequest&, EnterStandbyOutcome, const std::shared_ptr<const AsyncCallerContext>&)> EnterStandbyAsyncHandler;
                typedef Outcome<Core::Error, Model::ExecuteScalingPolicyResponse> ExecuteScalingPolicyOutcome;
                typedef std::future<ExecuteScalingPolicyOutcome> ExecuteScalingPolicyOutcomeCallable;
                typedef std::function<void(const AsClient*, const Model::ExecuteScalingPolicyRequest&, ExecuteScalingPolicyOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ExecuteScalingPolicyAsyncHandler;
                typedef Outcome<Core::Error, Model::ExitStandbyResponse> ExitStandbyOutcome;
                typedef std::future<ExitStandbyOutcome> ExitStandbyOutcomeCallable;
                typedef std::function<void(const AsClient*, const Model::ExitStandbyRequest&, ExitStandbyOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ExitStandbyAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyAutoScalingGroupResponse> ModifyAutoScalingGroupOutcome;
                typedef std::future<ModifyAutoScalingGroupOutcome> ModifyAutoScalingGroupOutcomeCallable;
                typedef std::function<void(const AsClient*, const Model::ModifyAutoScalingGroupRequest&, ModifyAutoScalingGroupOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyAutoScalingGroupAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyDesiredCapacityResponse> ModifyDesiredCapacityOutcome;
                typedef std::future<ModifyDesiredCapacityOutcome> ModifyDesiredCapacityOutcomeCallable;
                typedef std::function<void(const AsClient*, const Model::ModifyDesiredCapacityRequest&, ModifyDesiredCapacityOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyDesiredCapacityAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyLaunchConfigurationAttributesResponse> ModifyLaunchConfigurationAttributesOutcome;
                typedef std::future<ModifyLaunchConfigurationAttributesOutcome> ModifyLaunchConfigurationAttributesOutcomeCallable;
                typedef std::function<void(const AsClient*, const Model::ModifyLaunchConfigurationAttributesRequest&, ModifyLaunchConfigurationAttributesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyLaunchConfigurationAttributesAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyLifecycleHookResponse> ModifyLifecycleHookOutcome;
                typedef std::future<ModifyLifecycleHookOutcome> ModifyLifecycleHookOutcomeCallable;
                typedef std::function<void(const AsClient*, const Model::ModifyLifecycleHookRequest&, ModifyLifecycleHookOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyLifecycleHookAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyLoadBalancerTargetAttributesResponse> ModifyLoadBalancerTargetAttributesOutcome;
                typedef std::future<ModifyLoadBalancerTargetAttributesOutcome> ModifyLoadBalancerTargetAttributesOutcomeCallable;
                typedef std::function<void(const AsClient*, const Model::ModifyLoadBalancerTargetAttributesRequest&, ModifyLoadBalancerTargetAttributesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyLoadBalancerTargetAttributesAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyLoadBalancersResponse> ModifyLoadBalancersOutcome;
                typedef std::future<ModifyLoadBalancersOutcome> ModifyLoadBalancersOutcomeCallable;
                typedef std::function<void(const AsClient*, const Model::ModifyLoadBalancersRequest&, ModifyLoadBalancersOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyLoadBalancersAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyNotificationConfigurationResponse> ModifyNotificationConfigurationOutcome;
                typedef std::future<ModifyNotificationConfigurationOutcome> ModifyNotificationConfigurationOutcomeCallable;
                typedef std::function<void(const AsClient*, const Model::ModifyNotificationConfigurationRequest&, ModifyNotificationConfigurationOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyNotificationConfigurationAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyScalingPolicyResponse> ModifyScalingPolicyOutcome;
                typedef std::future<ModifyScalingPolicyOutcome> ModifyScalingPolicyOutcomeCallable;
                typedef std::function<void(const AsClient*, const Model::ModifyScalingPolicyRequest&, ModifyScalingPolicyOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyScalingPolicyAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyScheduledActionResponse> ModifyScheduledActionOutcome;
                typedef std::future<ModifyScheduledActionOutcome> ModifyScheduledActionOutcomeCallable;
                typedef std::function<void(const AsClient*, const Model::ModifyScheduledActionRequest&, ModifyScheduledActionOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyScheduledActionAsyncHandler;
                typedef Outcome<Core::Error, Model::RemoveInstancesResponse> RemoveInstancesOutcome;
                typedef std::future<RemoveInstancesOutcome> RemoveInstancesOutcomeCallable;
                typedef std::function<void(const AsClient*, const Model::RemoveInstancesRequest&, RemoveInstancesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> RemoveInstancesAsyncHandler;
                typedef Outcome<Core::Error, Model::ResumeInstanceRefreshResponse> ResumeInstanceRefreshOutcome;
                typedef std::future<ResumeInstanceRefreshOutcome> ResumeInstanceRefreshOutcomeCallable;
                typedef std::function<void(const AsClient*, const Model::ResumeInstanceRefreshRequest&, ResumeInstanceRefreshOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ResumeInstanceRefreshAsyncHandler;
                typedef Outcome<Core::Error, Model::RollbackInstanceRefreshResponse> RollbackInstanceRefreshOutcome;
                typedef std::future<RollbackInstanceRefreshOutcome> RollbackInstanceRefreshOutcomeCallable;
                typedef std::function<void(const AsClient*, const Model::RollbackInstanceRefreshRequest&, RollbackInstanceRefreshOutcome, const std::shared_ptr<const AsyncCallerContext>&)> RollbackInstanceRefreshAsyncHandler;
                typedef Outcome<Core::Error, Model::ScaleInInstancesResponse> ScaleInInstancesOutcome;
                typedef std::future<ScaleInInstancesOutcome> ScaleInInstancesOutcomeCallable;
                typedef std::function<void(const AsClient*, const Model::ScaleInInstancesRequest&, ScaleInInstancesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ScaleInInstancesAsyncHandler;
                typedef Outcome<Core::Error, Model::ScaleOutInstancesResponse> ScaleOutInstancesOutcome;
                typedef std::future<ScaleOutInstancesOutcome> ScaleOutInstancesOutcomeCallable;
                typedef std::function<void(const AsClient*, const Model::ScaleOutInstancesRequest&, ScaleOutInstancesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ScaleOutInstancesAsyncHandler;
                typedef Outcome<Core::Error, Model::SetInstancesProtectionResponse> SetInstancesProtectionOutcome;
                typedef std::future<SetInstancesProtectionOutcome> SetInstancesProtectionOutcomeCallable;
                typedef std::function<void(const AsClient*, const Model::SetInstancesProtectionRequest&, SetInstancesProtectionOutcome, const std::shared_ptr<const AsyncCallerContext>&)> SetInstancesProtectionAsyncHandler;
                typedef Outcome<Core::Error, Model::StartAutoScalingInstancesResponse> StartAutoScalingInstancesOutcome;
                typedef std::future<StartAutoScalingInstancesOutcome> StartAutoScalingInstancesOutcomeCallable;
                typedef std::function<void(const AsClient*, const Model::StartAutoScalingInstancesRequest&, StartAutoScalingInstancesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> StartAutoScalingInstancesAsyncHandler;
                typedef Outcome<Core::Error, Model::StartInstanceRefreshResponse> StartInstanceRefreshOutcome;
                typedef std::future<StartInstanceRefreshOutcome> StartInstanceRefreshOutcomeCallable;
                typedef std::function<void(const AsClient*, const Model::StartInstanceRefreshRequest&, StartInstanceRefreshOutcome, const std::shared_ptr<const AsyncCallerContext>&)> StartInstanceRefreshAsyncHandler;
                typedef Outcome<Core::Error, Model::StopAutoScalingInstancesResponse> StopAutoScalingInstancesOutcome;
                typedef std::future<StopAutoScalingInstancesOutcome> StopAutoScalingInstancesOutcomeCallable;
                typedef std::function<void(const AsClient*, const Model::StopAutoScalingInstancesRequest&, StopAutoScalingInstancesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> StopAutoScalingInstancesAsyncHandler;
                typedef Outcome<Core::Error, Model::StopInstanceRefreshResponse> StopInstanceRefreshOutcome;
                typedef std::future<StopInstanceRefreshOutcome> StopInstanceRefreshOutcomeCallable;
                typedef std::function<void(const AsClient*, const Model::StopInstanceRefreshRequest&, StopInstanceRefreshOutcome, const std::shared_ptr<const AsyncCallerContext>&)> StopInstanceRefreshAsyncHandler;
                typedef Outcome<Core::Error, Model::UpgradeLaunchConfigurationResponse> UpgradeLaunchConfigurationOutcome;
                typedef std::future<UpgradeLaunchConfigurationOutcome> UpgradeLaunchConfigurationOutcomeCallable;
                typedef std::function<void(const AsClient*, const Model::UpgradeLaunchConfigurationRequest&, UpgradeLaunchConfigurationOutcome, const std::shared_ptr<const AsyncCallerContext>&)> UpgradeLaunchConfigurationAsyncHandler;
                typedef Outcome<Core::Error, Model::UpgradeLifecycleHookResponse> UpgradeLifecycleHookOutcome;
                typedef std::future<UpgradeLifecycleHookOutcome> UpgradeLifecycleHookOutcomeCallable;
                typedef std::function<void(const AsClient*, const Model::UpgradeLifecycleHookRequest&, UpgradeLifecycleHookOutcome, const std::shared_ptr<const AsyncCallerContext>&)> UpgradeLifecycleHookAsyncHandler;



                /**
                 *This interface (AttachInstances) is used to add CVM instances to a scaling group.
* Only CVM instances in `RUNNING` or `STOPPED` status can be added.
This API is used to ensure added CVM instances match the VPC network of the scaling group.
                 * @param req AttachInstancesRequest
                 * @return AttachInstancesOutcome
                 */
                AttachInstancesOutcome AttachInstances(const Model::AttachInstancesRequest &request);
                void AttachInstancesAsync(const Model::AttachInstancesRequest& request, const AttachInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                AttachInstancesOutcomeCallable AttachInstancesCallable(const Model::AttachInstancesRequest& request);

                /**
                 *This API is used to add CLBs to a security group.
                 * @param req AttachLoadBalancersRequest
                 * @return AttachLoadBalancersOutcome
                 */
                AttachLoadBalancersOutcome AttachLoadBalancers(const Model::AttachLoadBalancersRequest &request);
                void AttachLoadBalancersAsync(const Model::AttachLoadBalancersRequest& request, const AttachLoadBalancersAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                AttachLoadBalancersOutcomeCallable AttachLoadBalancersCallable(const Model::AttachLoadBalancersRequest& request);

                /**
                 *This API is used to cancel the instance refresh activity of the scaling group.
* The batches that have already been refreshed remain unaffected, but the batches pending refresh will be canceled.
* If a batch is currently refreshing, cancellation is not allowed. You can suspend the event and wait until the current batch finishes before canceling.
This API is used to refresh the failed instances. If a refresh fails, the affected instances will remain in standby status, and require manual intervention to exit the standby status or terminate the instances.
* Rollback operations are not allowed after cancellation, and recovery is unsupported.
Temporarily expanded instances due to the maxSurge parameter are automatically destroyed after cancellation.
* During scale-in, all instances have already been updated and cannot be canceled.
                 * @param req CancelInstanceRefreshRequest
                 * @return CancelInstanceRefreshOutcome
                 */
                CancelInstanceRefreshOutcome CancelInstanceRefresh(const Model::CancelInstanceRefreshRequest &request);
                void CancelInstanceRefreshAsync(const Model::CancelInstanceRefreshRequest& request, const CancelInstanceRefreshAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CancelInstanceRefreshOutcomeCallable CancelInstanceRefreshCallable(const Model::CancelInstanceRefreshRequest& request);

                /**
                 *This API is used to clear specific attributes of the launch configuration.
                 * @param req ClearLaunchConfigurationAttributesRequest
                 * @return ClearLaunchConfigurationAttributesOutcome
                 */
                ClearLaunchConfigurationAttributesOutcome ClearLaunchConfigurationAttributes(const Model::ClearLaunchConfigurationAttributesRequest &request);
                void ClearLaunchConfigurationAttributesAsync(const Model::ClearLaunchConfigurationAttributesRequest& request, const ClearLaunchConfigurationAttributesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ClearLaunchConfigurationAttributesOutcomeCallable ClearLaunchConfigurationAttributesCallable(const Model::ClearLaunchConfigurationAttributesRequest& request);

                /**
                 *This API is used to complete a lifecycle action by setting the status of lifecycle hook to `CONTINUE` or `ABANDON`.

* If this API is not called, the lifecycle hook goes to the status specified in `DefaultResult` after the timeout period.
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
                 * @param req CreateAutoScalingGroupFromInstanceRequest
                 * @return CreateAutoScalingGroupFromInstanceOutcome
                 */
                CreateAutoScalingGroupFromInstanceOutcome CreateAutoScalingGroupFromInstance(const Model::CreateAutoScalingGroupFromInstanceRequest &request);
                void CreateAutoScalingGroupFromInstanceAsync(const Model::CreateAutoScalingGroupFromInstanceRequest& request, const CreateAutoScalingGroupFromInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateAutoScalingGroupFromInstanceOutcomeCallable CreateAutoScalingGroupFromInstanceCallable(const Model::CreateAutoScalingGroupFromInstanceRequest& request);

                /**
                 *This interface (CreateLaunchConfiguration) is used to create new launch configuration.

* To modify a launch configuration, use [ModifyLaunchConfigurationAttributes](https://intl.cloud.tencent.com/document/api/377/31298?from_cn_redirect=1) to partially modify fields. If needed, create a new launch configuration.

By default, 50 launch configurations can be created per region. For details, see [Usage Limits](https://intl.cloud.tencent.com/document/product/377/3120?from_cn_redirect=1).
                 * @param req CreateLaunchConfigurationRequest
                 * @return CreateLaunchConfigurationOutcome
                 */
                CreateLaunchConfigurationOutcome CreateLaunchConfiguration(const Model::CreateLaunchConfigurationRequest &request);
                void CreateLaunchConfigurationAsync(const Model::CreateLaunchConfigurationRequest& request, const CreateLaunchConfigurationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateLaunchConfigurationOutcomeCallable CreateLaunchConfigurationCallable(const Model::CreateLaunchConfigurationRequest& request);

                /**
                 *This interface (CreateLifecycleHook) is used for creating a lifecycle hook.

* You can configure notifications or automation commands for the lifecycle hook.

If you configured a notification, Auto Scaling will notify the TDMQ Message Queue of the following information:.

```
{
	"Service": "Tencent Cloud Auto Scaling",
	"Time": "2019-03-14T10:15:11Z",
	"AppId": "1251783334",
	"ActivityId": "asa-fznnvrja",
	"AutoScalingGroupId": "asg-ft6y7u8n",
	"LifecycleHookId": "ash-p9i7y6t5",
	"LifecycleHookName": "my-hook",
	"LifecycleActionToken": "3080e1c9-0efe-4dd7-ad3b-90cd6618298f",
	"InstanceId": "ins-y6dr5e43",
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
                 *This API is used to create a notification policy.
When the notification is sent to a CMQ topic or queue, the following contents are included:
```
{
    "Service": "Tencent Cloud Auto Scaling",
    "CreatedTime": "2021-10-11T10:15:11Z", // Activity creation time
    "AppId": "100000000",
    "ActivityId": "asa-fznnvrja", // Scaling activity ID
    "AutoScalingGroupId": "asg-pc2oqu2z", // Scaling group ID
    "ActivityType": "SCALE_OUT",  // Scaling activity type
    "StatusCode": "SUCCESSFUL",   // Scaling activity result
    "Description": "Activity was launched in response to a difference between desired capacity and actual capacity,
    scale out 1 instance(s).", // Scaling activity description
    "StartTime": "2021-10-11T10:15:11Z",  // Activity starting time
    "EndTime": "2021-10-11T10:15:32Z",    // Activity ending time
    "DetailedStatusMessageSet": [ // A collection of failed attempts during the scaling process (Failed attempts are allowed in a successful scaling activity)
        {
            "Code": "InvalidInstanceType",
            "Zone": "ap-guangzhou-2",
            "InstanceId": "",
            "InstanceChargeType": "POSTPAID_BY_HOUR",
            "SubnetId": "subnet-4t5mgeuu",
            "Message": "The specified instance type `S5.LARGE8` is invalid in `subnet-4t5mgeuu`, `ap-guangzhou-2`.",
            "InstanceType": "S5.LARGE8",
        }
    ]
}
```
                 * @param req CreateNotificationConfigurationRequest
                 * @return CreateNotificationConfigurationOutcome
                 */
                CreateNotificationConfigurationOutcome CreateNotificationConfiguration(const Model::CreateNotificationConfigurationRequest &request);
                void CreateNotificationConfigurationAsync(const Model::CreateNotificationConfigurationRequest& request, const CreateNotificationConfigurationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateNotificationConfigurationOutcomeCallable CreateNotificationConfigurationCallable(const Model::CreateNotificationConfigurationRequest& request);

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
                 *This API is used to delete an auto-scaling group. Make sure that there are no `IN_SERVICE` instances in the group, and there are no ongoing scaling activities. When you delete a scaling group, instances in the status of `CREATION_FAILED`, `TERMINATION_FAILED` and `DETACH_FAILED` are not terminated.
                 * @param req DeleteAutoScalingGroupRequest
                 * @return DeleteAutoScalingGroupOutcome
                 */
                DeleteAutoScalingGroupOutcome DeleteAutoScalingGroup(const Model::DeleteAutoScalingGroupRequest &request);
                void DeleteAutoScalingGroupAsync(const Model::DeleteAutoScalingGroupRequest& request, const DeleteAutoScalingGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteAutoScalingGroupOutcomeCallable DeleteAutoScalingGroupCallable(const Model::DeleteAutoScalingGroupRequest& request);

                /**
                 *This API (DeleteLaunchConfiguration) is used to delete a launch configuration.

* If the launch configuration is active in a scaling group, it cannot be deleted.
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
                 *This API is used to query suggestions for scaling group configurations.
                 * @param req DescribeAutoScalingAdvicesRequest
                 * @return DescribeAutoScalingAdvicesOutcome
                 */
                DescribeAutoScalingAdvicesOutcome DescribeAutoScalingAdvices(const Model::DescribeAutoScalingAdvicesRequest &request);
                void DescribeAutoScalingAdvicesAsync(const Model::DescribeAutoScalingAdvicesRequest& request, const DescribeAutoScalingAdvicesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeAutoScalingAdvicesOutcomeCallable DescribeAutoScalingAdvicesCallable(const Model::DescribeAutoScalingAdvicesRequest& request);

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
                 *This API is used to query the information of launch configurations.

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
                 *This API (DescribeRefreshActivities) is used to query the instance refresh activity records of a scaling group.
                 * @param req DescribeRefreshActivitiesRequest
                 * @return DescribeRefreshActivitiesOutcome
                 */
                DescribeRefreshActivitiesOutcome DescribeRefreshActivities(const Model::DescribeRefreshActivitiesRequest &request);
                void DescribeRefreshActivitiesAsync(const Model::DescribeRefreshActivitiesRequest& request, const DescribeRefreshActivitiesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeRefreshActivitiesOutcomeCallable DescribeRefreshActivitiesCallable(const Model::DescribeRefreshActivitiesRequest& request);

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
                 *This API is used to remove CVM instances from a scaling group. Instances removed via this API will not be terminated.
* If the number of remaining `IN_SERVICE` instances in the scaling group is less than the minimum capacity, this API will return an error.
* However, if the scaling group is in `DISABLED` status, the removal will not verify the relationship between the number of `IN_SERVICE` instances and the minimum capacity.
* This removal will unassociate the CVM from the CLB instance that has been configured for the scaling group.
                 * @param req DetachInstancesRequest
                 * @return DetachInstancesOutcome
                 */
                DetachInstancesOutcome DetachInstances(const Model::DetachInstancesRequest &request);
                void DetachInstancesAsync(const Model::DetachInstancesRequest& request, const DetachInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DetachInstancesOutcomeCallable DetachInstancesCallable(const Model::DetachInstancesRequest& request);

                /**
                 *This API is used to unbind one or more CLBs from a scaling group. This API will not terminate CLBs.
                 * @param req DetachLoadBalancersRequest
                 * @return DetachLoadBalancersOutcome
                 */
                DetachLoadBalancersOutcome DetachLoadBalancers(const Model::DetachLoadBalancersRequest &request);
                void DetachLoadBalancersAsync(const Model::DetachLoadBalancersRequest& request, const DetachLoadBalancersAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DetachLoadBalancersOutcomeCallable DetachLoadBalancersCallable(const Model::DetachLoadBalancersRequest& request);

                /**
                 *This API is used to disable the specified auto-scaling group.
* When a scaling group is disabled, the following activities are not triggered automatically:
    - Scaling activities triggered alert policies
    - Scaling activities triggered by desired group capacity
    - Replacement of unhealthy instances
    - Scheduled actions
* When the scaling group is disabled, you can trigger scaling activities manually, including: 
    - Scale out to the specify number of instances (ScaleOutInstances)
    - Scale in to the specify number of instances (ScaleInInstances)
    - Remove instances from the scaling group (DetachInstances)
    - Delete instances from the scaling group (RemoveInstances)
    - Add instances to a scaling group (AttachInstances)
    - Shut down CVM instances in a scaling group (StopAutoScalingInstances)
    - Start up CVM instances in a scaling group (StartAutoScalingInstances)
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
                 *This API is used to set instances within the scaling group to standby status.
Instances in standby status have a CLB weight value of 0 and will not be selected for scaling in, unhealthy replacement, or refresh operation.
This API is used to call the Auto Scaling power-on/power-off API which may change the standby status, while the Cloud Virtual Machine server power on/off API will not affect it.
The instance enters standby status, and the scaling group attempts to lower the expected number of instances, which will not be less than the minimum value.
                 * @param req EnterStandbyRequest
                 * @return EnterStandbyOutcome
                 */
                EnterStandbyOutcome EnterStandby(const Model::EnterStandbyRequest &request);
                void EnterStandbyAsync(const Model::EnterStandbyRequest& request, const EnterStandbyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                EnterStandbyOutcomeCallable EnterStandbyCallable(const Model::EnterStandbyRequest& request);

                /**
                 *This API is used to execute a scaling policy.

* The scaling policy can be executed based on the scaling policy ID.
* The policy cannot be executed if there are ongoing scaling actions on the scaling group.
* Executing a target tracking policy is not supported.
                 * @param req ExecuteScalingPolicyRequest
                 * @return ExecuteScalingPolicyOutcome
                 */
                ExecuteScalingPolicyOutcome ExecuteScalingPolicy(const Model::ExecuteScalingPolicyRequest &request);
                void ExecuteScalingPolicyAsync(const Model::ExecuteScalingPolicyRequest& request, const ExecuteScalingPolicyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ExecuteScalingPolicyOutcomeCallable ExecuteScalingPolicyCallable(const Model::ExecuteScalingPolicyRequest& request);

                /**
                 *This API is used to exit instances from standby status in the scaling group.
* After exiting standby status, the instance enters running state and the CLB weight value is restored to the default value.
This API is used to call the Auto Scaling power-on/power-off API which may change the standby status, while the Cloud Virtual Machine server power on/off API will not affect it.
After instances exit standby status, the scaling group will raise the expected number of instances. The new expected number cannot exceed the maximum value.
                 * @param req ExitStandbyRequest
                 * @return ExitStandbyOutcome
                 */
                ExitStandbyOutcome ExitStandby(const Model::ExitStandbyRequest &request);
                void ExitStandbyAsync(const Model::ExitStandbyRequest& request, const ExitStandbyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ExitStandbyOutcomeCallable ExitStandbyCallable(const Model::ExitStandbyRequest& request);

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
                 *This API (ModifyLaunchConfigurationAttributes) is used to modify part of a launch configuration's attributes.

This API is used to modify the startup configuration. Existing instances scaled out using this configuration will not change, while newly added instances using this launch configuration will scale out according to the new configuration.
                 * @param req ModifyLaunchConfigurationAttributesRequest
                 * @return ModifyLaunchConfigurationAttributesOutcome
                 */
                ModifyLaunchConfigurationAttributesOutcome ModifyLaunchConfigurationAttributes(const Model::ModifyLaunchConfigurationAttributesRequest &request);
                void ModifyLaunchConfigurationAttributesAsync(const Model::ModifyLaunchConfigurationAttributesRequest& request, const ModifyLaunchConfigurationAttributesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyLaunchConfigurationAttributesOutcomeCallable ModifyLaunchConfigurationAttributesCallable(const Model::ModifyLaunchConfigurationAttributesRequest& request);

                /**
                 *This API is used to modify the lifecycle hook.
                 * @param req ModifyLifecycleHookRequest
                 * @return ModifyLifecycleHookOutcome
                 */
                ModifyLifecycleHookOutcome ModifyLifecycleHook(const Model::ModifyLifecycleHookRequest &request);
                void ModifyLifecycleHookAsync(const Model::ModifyLifecycleHookRequest& request, const ModifyLifecycleHookAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyLifecycleHookOutcomeCallable ModifyLifecycleHookCallable(const Model::ModifyLifecycleHookRequest& request);

                /**
                 *This API is used to modify the target rule attributes of the CLB in the scaling group.
                 * @param req ModifyLoadBalancerTargetAttributesRequest
                 * @return ModifyLoadBalancerTargetAttributesOutcome
                 */
                ModifyLoadBalancerTargetAttributesOutcome ModifyLoadBalancerTargetAttributes(const Model::ModifyLoadBalancerTargetAttributesRequest &request);
                void ModifyLoadBalancerTargetAttributesAsync(const Model::ModifyLoadBalancerTargetAttributesRequest& request, const ModifyLoadBalancerTargetAttributesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyLoadBalancerTargetAttributesOutcomeCallable ModifyLoadBalancerTargetAttributesCallable(const Model::ModifyLoadBalancerTargetAttributesRequest& request);

                /**
                 *This API is used to modify the cloud load balancers of a scaling group.

* This API can specify a new cloud load balancer configuration for the scaling group. The new configuration overwrites the original load balancer configuration.
* To clear the cloud load balancer of the scaling group, specify only the scaling group ID but not the specific cloud load balancer.
* This API modifies the cloud load balancer of the scaling group and generate a scaling activity to asynchronously modify the cloud load balancers of existing instances.
                 * @param req ModifyLoadBalancersRequest
                 * @return ModifyLoadBalancersOutcome
                 */
                ModifyLoadBalancersOutcome ModifyLoadBalancers(const Model::ModifyLoadBalancersRequest &request);
                void ModifyLoadBalancersAsync(const Model::ModifyLoadBalancersRequest& request, const ModifyLoadBalancersAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyLoadBalancersOutcomeCallable ModifyLoadBalancersCallable(const Model::ModifyLoadBalancersRequest& request);

                /**
                 *This API is used to modify a notification policy.
* The receiver type of the notification policy cannot be modified.
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
                 *This API is used to delete CVM instances from a scaling group. Instances that are automatically created through AS will be terminated, while those manually added to the scaling group will be removed and retained.
* If the number of remaining `IN_SERVICE` instances in the scaling group is less than the minimum capacity, this API will return an error.
* However, if the scaling group is in `DISABLED` status, the removal will not verify the relationship between the number of `IN_SERVICE` instances and the minimum capacity.
* This removal will unassociate the CVM from the CLB instance that has been configured for the scaling group.
                 * @param req RemoveInstancesRequest
                 * @return RemoveInstancesOutcome
                 */
                RemoveInstancesOutcome RemoveInstances(const Model::RemoveInstancesRequest &request);
                void RemoveInstancesAsync(const Model::RemoveInstancesRequest& request, const RemoveInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                RemoveInstancesOutcomeCallable RemoveInstancesCallable(const Model::RemoveInstancesRequest& request);

                /**
                 *This API is used to resume the paused instance refresh activity, allowing it to retry failed instances in the current batch or proceed with refreshing subsequent batches. Note that calling this API is ineffective when the activity is not in a paused status.

- When the MaxSurge parameter is used, the activity may be paused due to scale-out or scale-in failures. This API can also be used to retry scaling operations.
                 * @param req ResumeInstanceRefreshRequest
                 * @return ResumeInstanceRefreshOutcome
                 */
                ResumeInstanceRefreshOutcome ResumeInstanceRefresh(const Model::ResumeInstanceRefreshRequest &request);
                void ResumeInstanceRefreshAsync(const Model::ResumeInstanceRefreshRequest& request, const ResumeInstanceRefreshAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ResumeInstanceRefreshOutcomeCallable ResumeInstanceRefreshCallable(const Model::ResumeInstanceRefreshRequest& request);

                /**
                 *This API is used to generate a new instance refresh activity, which also supports batch refreshing and operations such as pausing, resuming, and canceling. This API returns RefreshActivityId for the rollback activity.
* The instances pending refresh in the original activity are updated to canceled status. Nonexistent instances are disregarded, while instances in all other statuses proceed to enter the rollback process.
* The instances that are being refreshed in the original activity will not be immediately terminated. Instead, the rollback activity will be executed after their refresh complete.
* Rollback is supported for activities that are in the paused status or those succeeded in refreshing last time. It is not supported for activities in other statuses.
* When the original refresh activity involves reinstalling instances, for the ImageId parameter, it will automatically recover to the image ID before the rollback; for parameters such as UserData, EnhancedService, LoginSettings, and HostName, they will still be read from the launch configuration, requiring users to manually modify the launch configuration before initiating the rollback.
* The rollback activity does not support the MaxSurge parameter currently.
                 * @param req RollbackInstanceRefreshRequest
                 * @return RollbackInstanceRefreshOutcome
                 */
                RollbackInstanceRefreshOutcome RollbackInstanceRefresh(const Model::RollbackInstanceRefreshRequest &request);
                void RollbackInstanceRefreshAsync(const Model::RollbackInstanceRefreshRequest& request, const RollbackInstanceRefreshAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                RollbackInstanceRefreshOutcomeCallable RollbackInstanceRefreshCallable(const Model::RollbackInstanceRefreshRequest& request);

                /**
                 *This API is used to reduce the specified number of instances from the scaling group.
* There is no on going scaling task.
* This API is valid even when the scaling group is disabled. For more details, see [DisableAutoScalingGroup](https://intl.cloud.tencent.com/document/api/377/20435?from_cn_redirect=1).
* You can specify the instances to remove in the scale-in activity by using `TerminationPolicies`. For more information, see [Scaling In Policies](https://intl.cloud.tencent.com/document/product/377/8563?from_cn_redirect=1).
* Only the `IN_SERVICE` instances will be reduced. To reduce instances in other statues, use the [`DetachInstances`](https://intl.cloud.tencent.com/document/api/377/31011?from_cn_redirect=1) or [`RemoveInstances`](https://intl.cloud.tencent.com/document/api/377/31005?from_cn_redirect=1) API.
* The desired capacity will be reduced accordingly. The new desired capacity should be no less than the minimum capacity.
* If the scale-in activity failed or partially succeeded, the final desired capacity only deducts the instances that have been reduced successfully.
                 * @param req ScaleInInstancesRequest
                 * @return ScaleInInstancesOutcome
                 */
                ScaleInInstancesOutcome ScaleInInstances(const Model::ScaleInInstancesRequest &request);
                void ScaleInInstancesAsync(const Model::ScaleInInstancesRequest& request, const ScaleInInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ScaleInInstancesOutcomeCallable ScaleInInstancesCallable(const Model::ScaleInInstancesRequest& request);

                /**
                 *This API is used to add the specified number of instances to a scaling group. It returns the scaling activity ID `ActivityId`.
* Make sure that there are no ongoing scaling tasks.
* This API is valid even when the scaling group is disabled. For more details, see [DisableAutoScalingGroup](https://intl.cloud.tencent.com/document/api/377/20435?from_cn_redirect=1).
* The total number of instances after this action cannot exceed the maximum capacity.
* If a scale-out action failed or partially succeeded, only the number of successfully created instances is added to the number of desired capacity.
* If the allocation policy is `SPOT_MIXED`, there may be multiple scaling activities triggered for one scaling task. In this case, the first activity ID (`ActivityId`) is returned.
                 * @param req ScaleOutInstancesRequest
                 * @return ScaleOutInstancesOutcome
                 */
                ScaleOutInstancesOutcome ScaleOutInstances(const Model::ScaleOutInstancesRequest &request);
                void ScaleOutInstancesAsync(const Model::ScaleOutInstancesRequest& request, const ScaleOutInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ScaleOutInstancesOutcomeCallable ScaleOutInstancesCallable(const Model::ScaleOutInstancesRequest& request);

                /**
                 *This API is used to enable scale-in protection for an instance.
When scale-in protection is enabled, the instance will not be removed in scale-in activities triggered by replacement of unhealthy instances, alarm threshold reached, change of desired quantity, etc.
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
                 *This API is used to refresh running CVM instances in the scaling group and return the RefreshActivityId for the instance refresh activity based on parameters in the launch configuration.
* For refresh methods involving reinstallation (currently only reinstallation is supported), during reinstallation, only the ImageId, UserData, EnhancedService, HostName, and LoginSettings parameters will be fetched from the launch configuration for refreshing; other parameters of the instance will not be refreshed.
* During the instance refresh process (including paused status), the scaling group will be disabled. It is not recommended to modify the associated launch configuration during a refresh, as this may impact the refresh parameters, leading to inconsistent instance configurations.
* In rolling update mode, instance refreshes are performed in multiple batches. If there are failed refreshes within a batch, the activity will enter a failed paused status.
* Instances pending refresh that are removed or destroyed will be marked as NOT_FOUND status, but they will not block the instance refresh activity.
* Even if a running instance has parameters consistent with the latest launch configuration, it can still undergo another refresh.
                 * @param req StartInstanceRefreshRequest
                 * @return StartInstanceRefreshOutcome
                 */
                StartInstanceRefreshOutcome StartInstanceRefresh(const Model::StartInstanceRefreshRequest &request);
                void StartInstanceRefreshAsync(const Model::StartInstanceRefreshRequest& request, const StartInstanceRefreshAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                StartInstanceRefreshOutcomeCallable StartInstanceRefreshCallable(const Model::StartInstanceRefreshRequest& request);

                /**
                 *This API is used to shut down CVM instances in a scaling group.
* Use the `SOFT_FIRST` shutdown, which means the CVM will be forcibly shut down if the soft shutdown fails.
* Shutting down instances in the `IN_SERVICE` status will reduce the desired capacity, but the desired capacity cannot be less than the minimum value.
* To use the `STOP_CHARGING` shutdown, the instances you want to shut down must satisfy the conditions of [no charges when shut down](https://intl.cloud.tencent.com/document/product/213/19918?from_cn_redirect=1).
* This API supports batch operation. Up to 100 instances can be shut down in each request.
                 * @param req StopAutoScalingInstancesRequest
                 * @return StopAutoScalingInstancesOutcome
                 */
                StopAutoScalingInstancesOutcome StopAutoScalingInstances(const Model::StopAutoScalingInstancesRequest &request);
                void StopAutoScalingInstancesAsync(const Model::StopAutoScalingInstancesRequest& request, const StopAutoScalingInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                StopAutoScalingInstancesOutcomeCallable StopAutoScalingInstancesCallable(const Model::StopAutoScalingInstancesRequest& request);

                /**
                 *This API is used to pause the ongoing instance refresh activity.
* In the paused status, the scaling group will also be disabled.
* The instances that are currently being updated or scaled out will not be paused, but instances pending updates will have their updates paused.
* During scale-in, all instances have already been updated and cannot be paused.
                 * @param req StopInstanceRefreshRequest
                 * @return StopInstanceRefreshOutcome
                 */
                StopInstanceRefreshOutcome StopInstanceRefresh(const Model::StopInstanceRefreshRequest &request);
                void StopInstanceRefreshAsync(const Model::StopInstanceRefreshRequest& request, const StopInstanceRefreshAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                StopInstanceRefreshOutcomeCallable StopInstanceRefreshCallable(const Model::StopInstanceRefreshRequest& request);

                /**
                 *There is a replacement API: ModifyLaunchConfiguration. This API carries the risk of parameter overwriting, and it has currently been hidden on the official website.
This API (UpgradeLaunchConfiguration) is used to upgrade the launch configuration.
* This API is used to upgrade the launch configuration, adopting an "entirely overwrite" approach. Regardless of previous parameter settings, they will be uniformly replaced with new configurations as specified in the interface parameters. For non-mandatory fields, if not filled in, default values will be assigned.
* After upgrading and modifying the launch configuration, existing instances that have been scaled out using this configuration will not undergo any changes. Subsequently, newly added instances using this upgraded launch configuration will be scaled out according to the new configuration.
                 * @param req UpgradeLaunchConfigurationRequest
                 * @return UpgradeLaunchConfigurationOutcome
                 */
                UpgradeLaunchConfigurationOutcome UpgradeLaunchConfiguration(const Model::UpgradeLaunchConfigurationRequest &request);
                void UpgradeLaunchConfigurationAsync(const Model::UpgradeLaunchConfigurationRequest& request, const UpgradeLaunchConfigurationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                UpgradeLaunchConfigurationOutcomeCallable UpgradeLaunchConfigurationCallable(const Model::UpgradeLaunchConfigurationRequest& request);

                /**
                 *This API is used to upgrade the lifecycle hook.

* This API is used to upgrade the lifecycle hook, adopting a "comprehensive overwrite" style. Regardless of how the previous parameters were set, it uniformly uses the new configurations for API parameters. For optional fields, if they are not filled in, default values will be used.
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
