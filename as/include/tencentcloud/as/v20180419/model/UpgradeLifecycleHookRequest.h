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

#ifndef TENCENTCLOUD_AS_V20180419_MODEL_UPGRADELIFECYCLEHOOKREQUEST_H_
#define TENCENTCLOUD_AS_V20180419_MODEL_UPGRADELIFECYCLEHOOKREQUEST_H_

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
                * UpgradeLifecycleHook request structure.
                */
                class UpgradeLifecycleHookRequest : public AbstractModel
                {
                public:
                    UpgradeLifecycleHookRequest();
                    ~UpgradeLifecycleHookRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Lifecycle hook ID. you can call the api [DescribeLifecycleHooks](https://intl.cloud.tencent.com/document/api/377/34452?from_cn_redirect=1) and retrieve the LifecycleHookId from the returned information to obtain the lifecycle hook ID.
                     * @return LifecycleHookId Lifecycle hook ID. you can call the api [DescribeLifecycleHooks](https://intl.cloud.tencent.com/document/api/377/34452?from_cn_redirect=1) and retrieve the LifecycleHookId from the returned information to obtain the lifecycle hook ID.
                     * 
                     */
                    std::string GetLifecycleHookId() const;

                    /**
                     * 设置Lifecycle hook ID. you can call the api [DescribeLifecycleHooks](https://intl.cloud.tencent.com/document/api/377/34452?from_cn_redirect=1) and retrieve the LifecycleHookId from the returned information to obtain the lifecycle hook ID.
                     * @param _lifecycleHookId Lifecycle hook ID. you can call the api [DescribeLifecycleHooks](https://intl.cloud.tencent.com/document/api/377/34452?from_cn_redirect=1) and retrieve the LifecycleHookId from the returned information to obtain the lifecycle hook ID.
                     * 
                     */
                    void SetLifecycleHookId(const std::string& _lifecycleHookId);

                    /**
                     * 判断参数 LifecycleHookId 是否已赋值
                     * @return LifecycleHookId 是否已赋值
                     * 
                     */
                    bool LifecycleHookIdHasBeenSet() const;

                    /**
                     * 获取Lifecycle hook name, which can contain chinese characters, letters, numbers, underscores (_), hyphens (-), and periods (.) with a maximum length of 128 characters.
                     * @return LifecycleHookName Lifecycle hook name, which can contain chinese characters, letters, numbers, underscores (_), hyphens (-), and periods (.) with a maximum length of 128 characters.
                     * 
                     */
                    std::string GetLifecycleHookName() const;

                    /**
                     * 设置Lifecycle hook name, which can contain chinese characters, letters, numbers, underscores (_), hyphens (-), and periods (.) with a maximum length of 128 characters.
                     * @param _lifecycleHookName Lifecycle hook name, which can contain chinese characters, letters, numbers, underscores (_), hyphens (-), and periods (.) with a maximum length of 128 characters.
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
`INSTANCE_LAUNCHING`: the lifecycle hook is being scaled out.
`INSTANCE_TERMINATING`: the lifecycle hook is being scaled in.
                     * @return LifecycleTransition Scenario for performing the lifecycle hook. valid values:.
`INSTANCE_LAUNCHING`: the lifecycle hook is being scaled out.
`INSTANCE_TERMINATING`: the lifecycle hook is being scaled in.
                     * 
                     */
                    std::string GetLifecycleTransition() const;

                    /**
                     * 设置Scenario for performing the lifecycle hook. valid values:.
`INSTANCE_LAUNCHING`: the lifecycle hook is being scaled out.
`INSTANCE_TERMINATING`: the lifecycle hook is being scaled in.
                     * @param _lifecycleTransition Scenario for performing the lifecycle hook. valid values:.
`INSTANCE_LAUNCHING`: the lifecycle hook is being scaled out.
`INSTANCE_TERMINATING`: the lifecycle hook is being scaled in.
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
                     * 获取Action to be taken by the scaling group in case of lifecycle hook timeout or LifecycleCommand execution failure. valid values are as follows:.
Default value, means CONTINUE to execute capacity expansion or reduction.
* ABANDON: for scale-out hooks, cvms that time out or fail to execute LifecycleCommand will be released directly or removed. for scale-in hooks, scale-in activities will continue.
                     * @return DefaultResult Action to be taken by the scaling group in case of lifecycle hook timeout or LifecycleCommand execution failure. valid values are as follows:.
Default value, means CONTINUE to execute capacity expansion or reduction.
* ABANDON: for scale-out hooks, cvms that time out or fail to execute LifecycleCommand will be released directly or removed. for scale-in hooks, scale-in activities will continue.
                     * 
                     */
                    std::string GetDefaultResult() const;

                    /**
                     * 设置Action to be taken by the scaling group in case of lifecycle hook timeout or LifecycleCommand execution failure. valid values are as follows:.
Default value, means CONTINUE to execute capacity expansion or reduction.
* ABANDON: for scale-out hooks, cvms that time out or fail to execute LifecycleCommand will be released directly or removed. for scale-in hooks, scale-in activities will continue.
                     * @param _defaultResult Action to be taken by the scaling group in case of lifecycle hook timeout or LifecycleCommand execution failure. valid values are as follows:.
Default value, means CONTINUE to execute capacity expansion or reduction.
* ABANDON: for scale-out hooks, cvms that time out or fail to execute LifecycleCommand will be released directly or removed. for scale-in hooks, scale-in activities will continue.
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
                     * 获取Additional information sent by auto scaling to notification targets, used when configuring a notification (default value: ""). NotificationMetadata and LifecycleCommand are mutually exclusive parameters and cannot be specified simultaneously.
                     * @return NotificationMetadata Additional information sent by auto scaling to notification targets, used when configuring a notification (default value: ""). NotificationMetadata and LifecycleCommand are mutually exclusive parameters and cannot be specified simultaneously.
                     * 
                     */
                    std::string GetNotificationMetadata() const;

                    /**
                     * 设置Additional information sent by auto scaling to notification targets, used when configuring a notification (default value: ""). NotificationMetadata and LifecycleCommand are mutually exclusive parameters and cannot be specified simultaneously.
                     * @param _notificationMetadata Additional information sent by auto scaling to notification targets, used when configuring a notification (default value: ""). NotificationMetadata and LifecycleCommand are mutually exclusive parameters and cannot be specified simultaneously.
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
                     * 获取Notification result. `NotificationTarget` and `LifecycleCommand` cannot be specified at the same time.
                     * @return NotificationTarget Notification result. `NotificationTarget` and `LifecycleCommand` cannot be specified at the same time.
                     * 
                     */
                    NotificationTarget GetNotificationTarget() const;

                    /**
                     * 设置Notification result. `NotificationTarget` and `LifecycleCommand` cannot be specified at the same time.
                     * @param _notificationTarget Notification result. `NotificationTarget` and `LifecycleCommand` cannot be specified at the same time.
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
                     * 获取The scenario where the lifecycle hook is applied. `EXTENSION`: the lifecycle hook will be triggered when AttachInstances, DetachInstances or RemoveInstaces is called. `NORMAL`: the lifecycle hook is not triggered by the above APIs. 
                     * @return LifecycleTransitionType The scenario where the lifecycle hook is applied. `EXTENSION`: the lifecycle hook will be triggered when AttachInstances, DetachInstances or RemoveInstaces is called. `NORMAL`: the lifecycle hook is not triggered by the above APIs. 
                     * 
                     */
                    std::string GetLifecycleTransitionType() const;

                    /**
                     * 设置The scenario where the lifecycle hook is applied. `EXTENSION`: the lifecycle hook will be triggered when AttachInstances, DetachInstances or RemoveInstaces is called. `NORMAL`: the lifecycle hook is not triggered by the above APIs. 
                     * @param _lifecycleTransitionType The scenario where the lifecycle hook is applied. `EXTENSION`: the lifecycle hook will be triggered when AttachInstances, DetachInstances or RemoveInstaces is called. `NORMAL`: the lifecycle hook is not triggered by the above APIs. 
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
                     * 获取Remote command execution object. `NotificationMetadata`, `NotificationTarget`, and `LifecycleCommand` are mutually exclusive and cannot be specified simultaneously.
                     * @return LifecycleCommand Remote command execution object. `NotificationMetadata`, `NotificationTarget`, and `LifecycleCommand` are mutually exclusive and cannot be specified simultaneously.
                     * 
                     */
                    LifecycleCommand GetLifecycleCommand() const;

                    /**
                     * 设置Remote command execution object. `NotificationMetadata`, `NotificationTarget`, and `LifecycleCommand` are mutually exclusive and cannot be specified simultaneously.
                     * @param _lifecycleCommand Remote command execution object. `NotificationMetadata`, `NotificationTarget`, and `LifecycleCommand` are mutually exclusive and cannot be specified simultaneously.
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
                     * Lifecycle hook ID. you can call the api [DescribeLifecycleHooks](https://intl.cloud.tencent.com/document/api/377/34452?from_cn_redirect=1) and retrieve the LifecycleHookId from the returned information to obtain the lifecycle hook ID.
                     */
                    std::string m_lifecycleHookId;
                    bool m_lifecycleHookIdHasBeenSet;

                    /**
                     * Lifecycle hook name, which can contain chinese characters, letters, numbers, underscores (_), hyphens (-), and periods (.) with a maximum length of 128 characters.
                     */
                    std::string m_lifecycleHookName;
                    bool m_lifecycleHookNameHasBeenSet;

                    /**
                     * Scenario for performing the lifecycle hook. valid values:.
`INSTANCE_LAUNCHING`: the lifecycle hook is being scaled out.
`INSTANCE_TERMINATING`: the lifecycle hook is being scaled in.
                     */
                    std::string m_lifecycleTransition;
                    bool m_lifecycleTransitionHasBeenSet;

                    /**
                     * Action to be taken by the scaling group in case of lifecycle hook timeout or LifecycleCommand execution failure. valid values are as follows:.
Default value, means CONTINUE to execute capacity expansion or reduction.
* ABANDON: for scale-out hooks, cvms that time out or fail to execute LifecycleCommand will be released directly or removed. for scale-in hooks, scale-in activities will continue.
                     */
                    std::string m_defaultResult;
                    bool m_defaultResultHasBeenSet;

                    /**
                     * The maximum length of time (in seconds) that can elapse before the lifecycle hook times out. Value range: 30-7200. Default value: 300
                     */
                    int64_t m_heartbeatTimeout;
                    bool m_heartbeatTimeoutHasBeenSet;

                    /**
                     * Additional information sent by auto scaling to notification targets, used when configuring a notification (default value: ""). NotificationMetadata and LifecycleCommand are mutually exclusive parameters and cannot be specified simultaneously.
                     */
                    std::string m_notificationMetadata;
                    bool m_notificationMetadataHasBeenSet;

                    /**
                     * Notification result. `NotificationTarget` and `LifecycleCommand` cannot be specified at the same time.
                     */
                    NotificationTarget m_notificationTarget;
                    bool m_notificationTargetHasBeenSet;

                    /**
                     * The scenario where the lifecycle hook is applied. `EXTENSION`: the lifecycle hook will be triggered when AttachInstances, DetachInstances or RemoveInstaces is called. `NORMAL`: the lifecycle hook is not triggered by the above APIs. 
                     */
                    std::string m_lifecycleTransitionType;
                    bool m_lifecycleTransitionTypeHasBeenSet;

                    /**
                     * Remote command execution object. `NotificationMetadata`, `NotificationTarget`, and `LifecycleCommand` are mutually exclusive and cannot be specified simultaneously.
                     */
                    LifecycleCommand m_lifecycleCommand;
                    bool m_lifecycleCommandHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_AS_V20180419_MODEL_UPGRADELIFECYCLEHOOKREQUEST_H_
