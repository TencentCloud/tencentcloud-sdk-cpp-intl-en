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

#ifndef TENCENTCLOUD_AS_V20180419_MODEL_CREATELIFECYCLEHOOKREQUEST_H_
#define TENCENTCLOUD_AS_V20180419_MODEL_CREATELIFECYCLEHOOKREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/as/v20180419/model/NotificationTarget.h>
#include <tencentcloud/as/v20180419/model/LifecycleCommand.h>


namespace TencentCloud
{
    namespace As
    {
        namespace V20180419
        {
            namespace Model
            {
                /**
                * CreateLifecycleHook request structure.
                */
                class CreateLifecycleHookRequest : public AbstractModel
                {
                public:
                    CreateLifecycleHookRequest();
                    ~CreateLifecycleHookRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Scaling group ID. obtain available scaling group ids in the following ways:.
<li>Query the scaling group ID by logging in to the [console](https://console.cloud.tencent.com/autoscaling/group).</li>.
<li>Specifies the scaling group ID obtained by calling the api [DescribeAutoScalingGroups](https://intl.cloud.tencent.com/document/api/377/20438?from_cn_redirect=1) and retrieving the AutoScalingGroupId from the return information.</li>.
                     * @return AutoScalingGroupId Scaling group ID. obtain available scaling group ids in the following ways:.
<li>Query the scaling group ID by logging in to the [console](https://console.cloud.tencent.com/autoscaling/group).</li>.
<li>Specifies the scaling group ID obtained by calling the api [DescribeAutoScalingGroups](https://intl.cloud.tencent.com/document/api/377/20438?from_cn_redirect=1) and retrieving the AutoScalingGroupId from the return information.</li>.
                     * 
                     */
                    std::string GetAutoScalingGroupId() const;

                    /**
                     * 设置Scaling group ID. obtain available scaling group ids in the following ways:.
<li>Query the scaling group ID by logging in to the [console](https://console.cloud.tencent.com/autoscaling/group).</li>.
<li>Specifies the scaling group ID obtained by calling the api [DescribeAutoScalingGroups](https://intl.cloud.tencent.com/document/api/377/20438?from_cn_redirect=1) and retrieving the AutoScalingGroupId from the return information.</li>.
                     * @param _autoScalingGroupId Scaling group ID. obtain available scaling group ids in the following ways:.
<li>Query the scaling group ID by logging in to the [console](https://console.cloud.tencent.com/autoscaling/group).</li>.
<li>Specifies the scaling group ID obtained by calling the api [DescribeAutoScalingGroups](https://intl.cloud.tencent.com/document/api/377/20438?from_cn_redirect=1) and retrieving the AutoScalingGroupId from the return information.</li>.
                     * 
                     */
                    void SetAutoScalingGroupId(const std::string& _autoScalingGroupId);

                    /**
                     * 判断参数 AutoScalingGroupId 是否已赋值
                     * @return AutoScalingGroupId 是否已赋值
                     * 
                     */
                    bool AutoScalingGroupIdHasBeenSet() const;

                    /**
                     * 获取Lifecycle hook name, which can contain Chinese characters, letters, numbers, underscores (_), hyphens (-), and periods (.) with a maximum length of 128 bytes.
                     * @return LifecycleHookName Lifecycle hook name, which can contain Chinese characters, letters, numbers, underscores (_), hyphens (-), and periods (.) with a maximum length of 128 bytes.
                     * 
                     */
                    std::string GetLifecycleHookName() const;

                    /**
                     * 设置Lifecycle hook name, which can contain Chinese characters, letters, numbers, underscores (_), hyphens (-), and periods (.) with a maximum length of 128 bytes.
                     * @param _lifecycleHookName Lifecycle hook name, which can contain Chinese characters, letters, numbers, underscores (_), hyphens (-), and periods (.) with a maximum length of 128 bytes.
                     * 
                     */
                    void SetLifecycleHookName(const std::string& _lifecycleHookName);

                    /**
                     * 判断参数 LifecycleHookName 是否已赋值
                     * @return LifecycleHookName 是否已赋值
                     * 
                     */
                    bool LifecycleHookNameHasBeenSet() const;

                    /**
                     * 获取Scenario for performing the lifecycle hook. valid values:.
<Li>`INSTANCE_LAUNCHING`: the lifecycle hook is being scaled out.</li>.
<Li>`INSTANCE_TERMINATING`: scaling in lifecycle hook</li>.
                     * @return LifecycleTransition Scenario for performing the lifecycle hook. valid values:.
<Li>`INSTANCE_LAUNCHING`: the lifecycle hook is being scaled out.</li>.
<Li>`INSTANCE_TERMINATING`: scaling in lifecycle hook</li>.
                     * 
                     */
                    std::string GetLifecycleTransition() const;

                    /**
                     * 设置Scenario for performing the lifecycle hook. valid values:.
<Li>`INSTANCE_LAUNCHING`: the lifecycle hook is being scaled out.</li>.
<Li>`INSTANCE_TERMINATING`: scaling in lifecycle hook</li>.
                     * @param _lifecycleTransition Scenario for performing the lifecycle hook. valid values:.
<Li>`INSTANCE_LAUNCHING`: the lifecycle hook is being scaled out.</li>.
<Li>`INSTANCE_TERMINATING`: scaling in lifecycle hook</li>.
                     * 
                     */
                    void SetLifecycleTransition(const std::string& _lifecycleTransition);

                    /**
                     * 判断参数 LifecycleTransition 是否已赋值
                     * @return LifecycleTransition 是否已赋值
                     * 
                     */
                    bool LifecycleTransitionHasBeenSet() const;

                    /**
                     * 获取Action to be taken by the scaling group in case of lifecycle hook timeout or LifecycleCommand execution failure. valid values:.
<Li>CONTINUE: default value, means continue execution of capacity expansion or reduction</li>.
<li>ABANDON: for scale-out hooks, CVM instances with hook timeout or failed LifecycleCommand execution will be released directly or removed. for scale-in hooks, scale-in activities will continue.</li>.
                     * @return DefaultResult Action to be taken by the scaling group in case of lifecycle hook timeout or LifecycleCommand execution failure. valid values:.
<Li>CONTINUE: default value, means continue execution of capacity expansion or reduction</li>.
<li>ABANDON: for scale-out hooks, CVM instances with hook timeout or failed LifecycleCommand execution will be released directly or removed. for scale-in hooks, scale-in activities will continue.</li>.
                     * 
                     */
                    std::string GetDefaultResult() const;

                    /**
                     * 设置Action to be taken by the scaling group in case of lifecycle hook timeout or LifecycleCommand execution failure. valid values:.
<Li>CONTINUE: default value, means continue execution of capacity expansion or reduction</li>.
<li>ABANDON: for scale-out hooks, CVM instances with hook timeout or failed LifecycleCommand execution will be released directly or removed. for scale-in hooks, scale-in activities will continue.</li>.
                     * @param _defaultResult Action to be taken by the scaling group in case of lifecycle hook timeout or LifecycleCommand execution failure. valid values:.
<Li>CONTINUE: default value, means continue execution of capacity expansion or reduction</li>.
<li>ABANDON: for scale-out hooks, CVM instances with hook timeout or failed LifecycleCommand execution will be released directly or removed. for scale-in hooks, scale-in activities will continue.</li>.
                     * 
                     */
                    void SetDefaultResult(const std::string& _defaultResult);

                    /**
                     * 判断参数 DefaultResult 是否已赋值
                     * @return DefaultResult 是否已赋值
                     * 
                     */
                    bool DefaultResultHasBeenSet() const;

                    /**
                     * 获取The maximum length of time (in seconds) that can elapse before the lifecycle hook times out. Value range: 30-7200. Default value: 300
                     * @return HeartbeatTimeout The maximum length of time (in seconds) that can elapse before the lifecycle hook times out. Value range: 30-7200. Default value: 300
                     * 
                     */
                    int64_t GetHeartbeatTimeout() const;

                    /**
                     * 设置The maximum length of time (in seconds) that can elapse before the lifecycle hook times out. Value range: 30-7200. Default value: 300
                     * @param _heartbeatTimeout The maximum length of time (in seconds) that can elapse before the lifecycle hook times out. Value range: 30-7200. Default value: 300
                     * 
                     */
                    void SetHeartbeatTimeout(const int64_t& _heartbeatTimeout);

                    /**
                     * 判断参数 HeartbeatTimeout 是否已赋值
                     * @return HeartbeatTimeout 是否已赋值
                     * 
                     */
                    bool HeartbeatTimeoutHasBeenSet() const;

                    /**
                     * 获取Additional information of a notification that auto scaling sends to targets. this parameter is set when you configure a notification (default value: ""), with a maximum length of 1024 characters. NotificationMetadata and LifecycleCommand are mutually exclusive, and either can be specified.
                     * @return NotificationMetadata Additional information of a notification that auto scaling sends to targets. this parameter is set when you configure a notification (default value: ""), with a maximum length of 1024 characters. NotificationMetadata and LifecycleCommand are mutually exclusive, and either can be specified.
                     * 
                     */
                    std::string GetNotificationMetadata() const;

                    /**
                     * 设置Additional information of a notification that auto scaling sends to targets. this parameter is set when you configure a notification (default value: ""), with a maximum length of 1024 characters. NotificationMetadata and LifecycleCommand are mutually exclusive, and either can be specified.
                     * @param _notificationMetadata Additional information of a notification that auto scaling sends to targets. this parameter is set when you configure a notification (default value: ""), with a maximum length of 1024 characters. NotificationMetadata and LifecycleCommand are mutually exclusive, and either can be specified.
                     * 
                     */
                    void SetNotificationMetadata(const std::string& _notificationMetadata);

                    /**
                     * 判断参数 NotificationMetadata 是否已赋值
                     * @return NotificationMetadata 是否已赋值
                     * 
                     */
                    bool NotificationMetadataHasBeenSet() const;

                    /**
                     * 获取Notification target. `NotificationTarget` and `LifecycleCommand` cannot be specified at the same time.
                     * @return NotificationTarget Notification target. `NotificationTarget` and `LifecycleCommand` cannot be specified at the same time.
                     * 
                     */
                    NotificationTarget GetNotificationTarget() const;

                    /**
                     * 设置Notification target. `NotificationTarget` and `LifecycleCommand` cannot be specified at the same time.
                     * @param _notificationTarget Notification target. `NotificationTarget` and `LifecycleCommand` cannot be specified at the same time.
                     * 
                     */
                    void SetNotificationTarget(const NotificationTarget& _notificationTarget);

                    /**
                     * 判断参数 NotificationTarget 是否已赋值
                     * @return NotificationTarget 是否已赋值
                     * 
                     */
                    bool NotificationTargetHasBeenSet() const;

                    /**
                     * 获取Specifies the scenario type for performing the lifecycle hook. valid values: NORMAL and EXTENSION. default value: NORMAL.
`EXTENSION`: the lifecycle hook will be triggered when calling [AttachInstances](https://intl.cloud.tencent.com/document/api/377/20441?from_cn_redirect=1), [DetachInstances](https://intl.cloud.tencent.com/document/api/377/20436?from_cn_redirect=1), [removeinstances](https://intl.cloud.tencent.com/document/api/377/20431?from_cn_redirect=1), [StopAutoScalingInstances](https://intl.cloud.tencent.com/document/api/377/40286?from_cn_redirect=1), [StartAutoScalingInstances](https://intl.cloud.tencent.com/document/api/377/40287?from_cn_redirect=1), or [StartInstanceRefresh](https://intl.cloud.tencent.com/document/api/377/99172?from_cn_redirect=1). `NORMAL`: the lifecycle hook is not triggered by these apis.
                     * @return LifecycleTransitionType Specifies the scenario type for performing the lifecycle hook. valid values: NORMAL and EXTENSION. default value: NORMAL.
`EXTENSION`: the lifecycle hook will be triggered when calling [AttachInstances](https://intl.cloud.tencent.com/document/api/377/20441?from_cn_redirect=1), [DetachInstances](https://intl.cloud.tencent.com/document/api/377/20436?from_cn_redirect=1), [removeinstances](https://intl.cloud.tencent.com/document/api/377/20431?from_cn_redirect=1), [StopAutoScalingInstances](https://intl.cloud.tencent.com/document/api/377/40286?from_cn_redirect=1), [StartAutoScalingInstances](https://intl.cloud.tencent.com/document/api/377/40287?from_cn_redirect=1), or [StartInstanceRefresh](https://intl.cloud.tencent.com/document/api/377/99172?from_cn_redirect=1). `NORMAL`: the lifecycle hook is not triggered by these apis.
                     * 
                     */
                    std::string GetLifecycleTransitionType() const;

                    /**
                     * 设置Specifies the scenario type for performing the lifecycle hook. valid values: NORMAL and EXTENSION. default value: NORMAL.
`EXTENSION`: the lifecycle hook will be triggered when calling [AttachInstances](https://intl.cloud.tencent.com/document/api/377/20441?from_cn_redirect=1), [DetachInstances](https://intl.cloud.tencent.com/document/api/377/20436?from_cn_redirect=1), [removeinstances](https://intl.cloud.tencent.com/document/api/377/20431?from_cn_redirect=1), [StopAutoScalingInstances](https://intl.cloud.tencent.com/document/api/377/40286?from_cn_redirect=1), [StartAutoScalingInstances](https://intl.cloud.tencent.com/document/api/377/40287?from_cn_redirect=1), or [StartInstanceRefresh](https://intl.cloud.tencent.com/document/api/377/99172?from_cn_redirect=1). `NORMAL`: the lifecycle hook is not triggered by these apis.
                     * @param _lifecycleTransitionType Specifies the scenario type for performing the lifecycle hook. valid values: NORMAL and EXTENSION. default value: NORMAL.
`EXTENSION`: the lifecycle hook will be triggered when calling [AttachInstances](https://intl.cloud.tencent.com/document/api/377/20441?from_cn_redirect=1), [DetachInstances](https://intl.cloud.tencent.com/document/api/377/20436?from_cn_redirect=1), [removeinstances](https://intl.cloud.tencent.com/document/api/377/20431?from_cn_redirect=1), [StopAutoScalingInstances](https://intl.cloud.tencent.com/document/api/377/40286?from_cn_redirect=1), [StartAutoScalingInstances](https://intl.cloud.tencent.com/document/api/377/40287?from_cn_redirect=1), or [StartInstanceRefresh](https://intl.cloud.tencent.com/document/api/377/99172?from_cn_redirect=1). `NORMAL`: the lifecycle hook is not triggered by these apis.
                     * 
                     */
                    void SetLifecycleTransitionType(const std::string& _lifecycleTransitionType);

                    /**
                     * 判断参数 LifecycleTransitionType 是否已赋值
                     * @return LifecycleTransitionType 是否已赋值
                     * 
                     */
                    bool LifecycleTransitionTypeHasBeenSet() const;

                    /**
                     * 获取Specifies the remote command execution object. NotificationTarget and NotificationMetadata are mutually exclusive with this parameter. either cannot be specified simultaneously.
                     * @return LifecycleCommand Specifies the remote command execution object. NotificationTarget and NotificationMetadata are mutually exclusive with this parameter. either cannot be specified simultaneously.
                     * 
                     */
                    LifecycleCommand GetLifecycleCommand() const;

                    /**
                     * 设置Specifies the remote command execution object. NotificationTarget and NotificationMetadata are mutually exclusive with this parameter. either cannot be specified simultaneously.
                     * @param _lifecycleCommand Specifies the remote command execution object. NotificationTarget and NotificationMetadata are mutually exclusive with this parameter. either cannot be specified simultaneously.
                     * 
                     */
                    void SetLifecycleCommand(const LifecycleCommand& _lifecycleCommand);

                    /**
                     * 判断参数 LifecycleCommand 是否已赋值
                     * @return LifecycleCommand 是否已赋值
                     * 
                     */
                    bool LifecycleCommandHasBeenSet() const;

                private:

                    /**
                     * Scaling group ID. obtain available scaling group ids in the following ways:.
<li>Query the scaling group ID by logging in to the [console](https://console.cloud.tencent.com/autoscaling/group).</li>.
<li>Specifies the scaling group ID obtained by calling the api [DescribeAutoScalingGroups](https://intl.cloud.tencent.com/document/api/377/20438?from_cn_redirect=1) and retrieving the AutoScalingGroupId from the return information.</li>.
                     */
                    std::string m_autoScalingGroupId;
                    bool m_autoScalingGroupIdHasBeenSet;

                    /**
                     * Lifecycle hook name, which can contain Chinese characters, letters, numbers, underscores (_), hyphens (-), and periods (.) with a maximum length of 128 bytes.
                     */
                    std::string m_lifecycleHookName;
                    bool m_lifecycleHookNameHasBeenSet;

                    /**
                     * Scenario for performing the lifecycle hook. valid values:.
<Li>`INSTANCE_LAUNCHING`: the lifecycle hook is being scaled out.</li>.
<Li>`INSTANCE_TERMINATING`: scaling in lifecycle hook</li>.
                     */
                    std::string m_lifecycleTransition;
                    bool m_lifecycleTransitionHasBeenSet;

                    /**
                     * Action to be taken by the scaling group in case of lifecycle hook timeout or LifecycleCommand execution failure. valid values:.
<Li>CONTINUE: default value, means continue execution of capacity expansion or reduction</li>.
<li>ABANDON: for scale-out hooks, CVM instances with hook timeout or failed LifecycleCommand execution will be released directly or removed. for scale-in hooks, scale-in activities will continue.</li>.
                     */
                    std::string m_defaultResult;
                    bool m_defaultResultHasBeenSet;

                    /**
                     * The maximum length of time (in seconds) that can elapse before the lifecycle hook times out. Value range: 30-7200. Default value: 300
                     */
                    int64_t m_heartbeatTimeout;
                    bool m_heartbeatTimeoutHasBeenSet;

                    /**
                     * Additional information of a notification that auto scaling sends to targets. this parameter is set when you configure a notification (default value: ""), with a maximum length of 1024 characters. NotificationMetadata and LifecycleCommand are mutually exclusive, and either can be specified.
                     */
                    std::string m_notificationMetadata;
                    bool m_notificationMetadataHasBeenSet;

                    /**
                     * Notification target. `NotificationTarget` and `LifecycleCommand` cannot be specified at the same time.
                     */
                    NotificationTarget m_notificationTarget;
                    bool m_notificationTargetHasBeenSet;

                    /**
                     * Specifies the scenario type for performing the lifecycle hook. valid values: NORMAL and EXTENSION. default value: NORMAL.
`EXTENSION`: the lifecycle hook will be triggered when calling [AttachInstances](https://intl.cloud.tencent.com/document/api/377/20441?from_cn_redirect=1), [DetachInstances](https://intl.cloud.tencent.com/document/api/377/20436?from_cn_redirect=1), [removeinstances](https://intl.cloud.tencent.com/document/api/377/20431?from_cn_redirect=1), [StopAutoScalingInstances](https://intl.cloud.tencent.com/document/api/377/40286?from_cn_redirect=1), [StartAutoScalingInstances](https://intl.cloud.tencent.com/document/api/377/40287?from_cn_redirect=1), or [StartInstanceRefresh](https://intl.cloud.tencent.com/document/api/377/99172?from_cn_redirect=1). `NORMAL`: the lifecycle hook is not triggered by these apis.
                     */
                    std::string m_lifecycleTransitionType;
                    bool m_lifecycleTransitionTypeHasBeenSet;

                    /**
                     * Specifies the remote command execution object. NotificationTarget and NotificationMetadata are mutually exclusive with this parameter. either cannot be specified simultaneously.
                     */
                    LifecycleCommand m_lifecycleCommand;
                    bool m_lifecycleCommandHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_AS_V20180419_MODEL_CREATELIFECYCLEHOOKREQUEST_H_
