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

#ifndef TENCENTCLOUD_AS_V20180419_MODEL_MODIFYLIFECYCLEHOOKREQUEST_H_
#define TENCENTCLOUD_AS_V20180419_MODEL_MODIFYLIFECYCLEHOOKREQUEST_H_

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
                * ModifyLifecycleHook request structure.
                */
                class ModifyLifecycleHookRequest : public AbstractModel
                {
                public:
                    ModifyLifecycleHookRequest();
                    ~ModifyLifecycleHookRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Lifecycle hook ID. you can get the lifecycle hook ID by calling the api [DescribeLifecycleHooks](https://intl.cloud.tencent.com/document/api/377/34452?from_cn_redirect=1) and retrieving the LifecycleHookId from the returned information.
                     * @return LifecycleHookId Lifecycle hook ID. you can get the lifecycle hook ID by calling the api [DescribeLifecycleHooks](https://intl.cloud.tencent.com/document/api/377/34452?from_cn_redirect=1) and retrieving the LifecycleHookId from the returned information.
                     * 
                     */
                    std::string GetLifecycleHookId() const;

                    /**
                     * 设置Lifecycle hook ID. you can get the lifecycle hook ID by calling the api [DescribeLifecycleHooks](https://intl.cloud.tencent.com/document/api/377/34452?from_cn_redirect=1) and retrieving the LifecycleHookId from the returned information.
                     * @param _lifecycleHookId Lifecycle hook ID. you can get the lifecycle hook ID by calling the api [DescribeLifecycleHooks](https://intl.cloud.tencent.com/document/api/377/34452?from_cn_redirect=1) and retrieving the LifecycleHookId from the returned information.
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
                     * 获取Lifecycle hook name. Name only supports chinese, english, digits, underscore (_), hyphen (-), decimal point (.), maximum length cannot exceed 128.
                     * @return LifecycleHookName Lifecycle hook name. Name only supports chinese, english, digits, underscore (_), hyphen (-), decimal point (.), maximum length cannot exceed 128.
                     * 
                     */
                    std::string GetLifecycleHookName() const;

                    /**
                     * 设置Lifecycle hook name. Name only supports chinese, english, digits, underscore (_), hyphen (-), decimal point (.), maximum length cannot exceed 128.
                     * @param _lifecycleHookName Lifecycle hook name. Name only supports chinese, english, digits, underscore (_), hyphen (-), decimal point (.), maximum length cannot exceed 128.
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
                     * 获取Scenario for entering the lifecycle hook. valid values:.
`INSTANCE_LAUNCHING`: the lifecycle hook is being scaled out.
`INSTANCE_TERMINATING`: the lifecycle hook is being scaled in.
                     * @return LifecycleTransition Scenario for entering the lifecycle hook. valid values:.
`INSTANCE_LAUNCHING`: the lifecycle hook is being scaled out.
`INSTANCE_TERMINATING`: the lifecycle hook is being scaled in.
                     * 
                     */
                    std::string GetLifecycleTransition() const;

                    /**
                     * 设置Scenario for entering the lifecycle hook. valid values:.
`INSTANCE_LAUNCHING`: the lifecycle hook is being scaled out.
`INSTANCE_TERMINATING`: the lifecycle hook is being scaled in.
                     * @param _lifecycleTransition Scenario for entering the lifecycle hook. valid values:.
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
                     * 获取Action to be taken by the scaling group in case of lifecycle hook timeout or LifecycleCommand execution failure. valid values:.
Default value means CONTINUE to execute capacity expansion or reduction.
* ABANDON: for scale-out hooks, cvms that time out or fail to execute LifecycleCommand are released directly or removed. for scale-in hooks, scale-in activities continue.
                     * @return DefaultResult Action to be taken by the scaling group in case of lifecycle hook timeout or LifecycleCommand execution failure. valid values:.
Default value means CONTINUE to execute capacity expansion or reduction.
* ABANDON: for scale-out hooks, cvms that time out or fail to execute LifecycleCommand are released directly or removed. for scale-in hooks, scale-in activities continue.
                     * 
                     */
                    std::string GetDefaultResult() const;

                    /**
                     * 设置Action to be taken by the scaling group in case of lifecycle hook timeout or LifecycleCommand execution failure. valid values:.
Default value means CONTINUE to execute capacity expansion or reduction.
* ABANDON: for scale-out hooks, cvms that time out or fail to execute LifecycleCommand are released directly or removed. for scale-in hooks, scale-in activities continue.
                     * @param _defaultResult Action to be taken by the scaling group in case of lifecycle hook timeout or LifecycleCommand execution failure. valid values:.
Default value means CONTINUE to execute capacity expansion or reduction.
* ABANDON: for scale-out hooks, cvms that time out or fail to execute LifecycleCommand are released directly or removed. for scale-in hooks, scale-in activities continue.
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
                     * 获取The maximum length of time (in seconds) that can elapse before the lifecycle hook times out. Value range: 30 - 7,200 seconds.
                     * @return HeartbeatTimeout The maximum length of time (in seconds) that can elapse before the lifecycle hook times out. Value range: 30 - 7,200 seconds.
                     * 
                     */
                    uint64_t GetHeartbeatTimeout() const;

                    /**
                     * 设置The maximum length of time (in seconds) that can elapse before the lifecycle hook times out. Value range: 30 - 7,200 seconds.
                     * @param _heartbeatTimeout The maximum length of time (in seconds) that can elapse before the lifecycle hook times out. Value range: 30 - 7,200 seconds.
                     * 
                     */
                    void SetHeartbeatTimeout(const uint64_t& _heartbeatTimeout);

                    /**
                     * 判断参数 HeartbeatTimeout 是否已赋值
                     * @return HeartbeatTimeout 是否已赋值
                     * 
                     */
                    bool HeartbeatTimeoutHasBeenSet() const;

                    /**
                     * 获取Specifies the additional information sent by auto scaling to the notification target. NotificationMetadata and LifecycleCommand are mutually exclusive. the two cannot be specified simultaneously.
                     * @return NotificationMetadata Specifies the additional information sent by auto scaling to the notification target. NotificationMetadata and LifecycleCommand are mutually exclusive. the two cannot be specified simultaneously.
                     * 
                     */
                    std::string GetNotificationMetadata() const;

                    /**
                     * 设置Specifies the additional information sent by auto scaling to the notification target. NotificationMetadata and LifecycleCommand are mutually exclusive. the two cannot be specified simultaneously.
                     * @param _notificationMetadata Specifies the additional information sent by auto scaling to the notification target. NotificationMetadata and LifecycleCommand are mutually exclusive. the two cannot be specified simultaneously.
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
                     * 获取The scenario where the lifecycle hook is applied. `EXTENSION`: The lifecycle hook will be triggered when `AttachInstances`, `DetachInstances` or `RemoveInstances` is called. `NORMAL`: The lifecycle hook is not triggered by the above APIs.
                     * @return LifecycleTransitionType The scenario where the lifecycle hook is applied. `EXTENSION`: The lifecycle hook will be triggered when `AttachInstances`, `DetachInstances` or `RemoveInstances` is called. `NORMAL`: The lifecycle hook is not triggered by the above APIs.
                     * 
                     */
                    std::string GetLifecycleTransitionType() const;

                    /**
                     * 设置The scenario where the lifecycle hook is applied. `EXTENSION`: The lifecycle hook will be triggered when `AttachInstances`, `DetachInstances` or `RemoveInstances` is called. `NORMAL`: The lifecycle hook is not triggered by the above APIs.
                     * @param _lifecycleTransitionType The scenario where the lifecycle hook is applied. `EXTENSION`: The lifecycle hook will be triggered when `AttachInstances`, `DetachInstances` or `RemoveInstances` is called. `NORMAL`: The lifecycle hook is not triggered by the above APIs.
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
                     * 获取Notify the target information. NotificationTarget and LifecycleCommand are mutually exclusive. the two cannot be specified simultaneously.
                     * @return NotificationTarget Notify the target information. NotificationTarget and LifecycleCommand are mutually exclusive. the two cannot be specified simultaneously.
                     * 
                     */
                    NotificationTarget GetNotificationTarget() const;

                    /**
                     * 设置Notify the target information. NotificationTarget and LifecycleCommand are mutually exclusive. the two cannot be specified simultaneously.
                     * @param _notificationTarget Notify the target information. NotificationTarget and LifecycleCommand are mutually exclusive. the two cannot be specified simultaneously.
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
                     * 获取Remote command execution object. `NotificationMetadata`, `NotificationTarget`, and `LifecycleCommand` cannot be specified at the same time.
                     * @return LifecycleCommand Remote command execution object. `NotificationMetadata`, `NotificationTarget`, and `LifecycleCommand` cannot be specified at the same time.
                     * 
                     */
                    LifecycleCommand GetLifecycleCommand() const;

                    /**
                     * 设置Remote command execution object. `NotificationMetadata`, `NotificationTarget`, and `LifecycleCommand` cannot be specified at the same time.
                     * @param _lifecycleCommand Remote command execution object. `NotificationMetadata`, `NotificationTarget`, and `LifecycleCommand` cannot be specified at the same time.
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
                     * Lifecycle hook ID. you can get the lifecycle hook ID by calling the api [DescribeLifecycleHooks](https://intl.cloud.tencent.com/document/api/377/34452?from_cn_redirect=1) and retrieving the LifecycleHookId from the returned information.
                     */
                    std::string m_lifecycleHookId;
                    bool m_lifecycleHookIdHasBeenSet;

                    /**
                     * Lifecycle hook name. Name only supports chinese, english, digits, underscore (_), hyphen (-), decimal point (.), maximum length cannot exceed 128.
                     */
                    std::string m_lifecycleHookName;
                    bool m_lifecycleHookNameHasBeenSet;

                    /**
                     * Scenario for entering the lifecycle hook. valid values:.
`INSTANCE_LAUNCHING`: the lifecycle hook is being scaled out.
`INSTANCE_TERMINATING`: the lifecycle hook is being scaled in.
                     */
                    std::string m_lifecycleTransition;
                    bool m_lifecycleTransitionHasBeenSet;

                    /**
                     * Action to be taken by the scaling group in case of lifecycle hook timeout or LifecycleCommand execution failure. valid values:.
Default value means CONTINUE to execute capacity expansion or reduction.
* ABANDON: for scale-out hooks, cvms that time out or fail to execute LifecycleCommand are released directly or removed. for scale-in hooks, scale-in activities continue.
                     */
                    std::string m_defaultResult;
                    bool m_defaultResultHasBeenSet;

                    /**
                     * The maximum length of time (in seconds) that can elapse before the lifecycle hook times out. Value range: 30 - 7,200 seconds.
                     */
                    uint64_t m_heartbeatTimeout;
                    bool m_heartbeatTimeoutHasBeenSet;

                    /**
                     * Specifies the additional information sent by auto scaling to the notification target. NotificationMetadata and LifecycleCommand are mutually exclusive. the two cannot be specified simultaneously.
                     */
                    std::string m_notificationMetadata;
                    bool m_notificationMetadataHasBeenSet;

                    /**
                     * The scenario where the lifecycle hook is applied. `EXTENSION`: The lifecycle hook will be triggered when `AttachInstances`, `DetachInstances` or `RemoveInstances` is called. `NORMAL`: The lifecycle hook is not triggered by the above APIs.
                     */
                    std::string m_lifecycleTransitionType;
                    bool m_lifecycleTransitionTypeHasBeenSet;

                    /**
                     * Notify the target information. NotificationTarget and LifecycleCommand are mutually exclusive. the two cannot be specified simultaneously.
                     */
                    NotificationTarget m_notificationTarget;
                    bool m_notificationTargetHasBeenSet;

                    /**
                     * Remote command execution object. `NotificationMetadata`, `NotificationTarget`, and `LifecycleCommand` cannot be specified at the same time.
                     */
                    LifecycleCommand m_lifecycleCommand;
                    bool m_lifecycleCommandHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_AS_V20180419_MODEL_MODIFYLIFECYCLEHOOKREQUEST_H_
