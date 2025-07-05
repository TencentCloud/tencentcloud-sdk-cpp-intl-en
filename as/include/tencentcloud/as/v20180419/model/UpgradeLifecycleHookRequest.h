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
                     * 获取Lifecycle hook ID
                     * @return LifecycleHookId Lifecycle hook ID
                     * 
                     */
                    std::string GetLifecycleHookId() const;

                    /**
                     * 设置Lifecycle hook ID
                     * @param _lifecycleHookId Lifecycle hook ID
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
                     * 获取Lifecycle hook name
                     * @return LifecycleHookName Lifecycle hook name
                     * 
                     */
                    std::string GetLifecycleHookName() const;

                    /**
                     * 设置Lifecycle hook name
                     * @param _lifecycleHookName Lifecycle hook name
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
                     * 获取Scenario for the lifecycle hook. Value range: "INSTANCE_LAUNCHING", "INSTANCE_TERMINATING"
                     * @return LifecycleTransition Scenario for the lifecycle hook. Value range: "INSTANCE_LAUNCHING", "INSTANCE_TERMINATING"
                     * 
                     */
                    std::string GetLifecycleTransition() const;

                    /**
                     * 设置Scenario for the lifecycle hook. Value range: "INSTANCE_LAUNCHING", "INSTANCE_TERMINATING"
                     * @param _lifecycleTransition Scenario for the lifecycle hook. Value range: "INSTANCE_LAUNCHING", "INSTANCE_TERMINATING"
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
                     * 获取Defines the action to be taken by the auto scaling group upon lifecycle hook timeout. Value range: "CONTINUE", "ABANDON". Default value: "CONTINUE"
                     * @return DefaultResult Defines the action to be taken by the auto scaling group upon lifecycle hook timeout. Value range: "CONTINUE", "ABANDON". Default value: "CONTINUE"
                     * 
                     */
                    std::string GetDefaultResult() const;

                    /**
                     * 设置Defines the action to be taken by the auto scaling group upon lifecycle hook timeout. Value range: "CONTINUE", "ABANDON". Default value: "CONTINUE"
                     * @param _defaultResult Defines the action to be taken by the auto scaling group upon lifecycle hook timeout. Value range: "CONTINUE", "ABANDON". Default value: "CONTINUE"
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
                     * 获取Additional information of a notification that Auto Scaling sends to targets. This parameter is set when you configure a notification (default value: "").
                     * @return NotificationMetadata Additional information of a notification that Auto Scaling sends to targets. This parameter is set when you configure a notification (default value: "").
                     * 
                     */
                    std::string GetNotificationMetadata() const;

                    /**
                     * 设置Additional information of a notification that Auto Scaling sends to targets. This parameter is set when you configure a notification (default value: "").
                     * @param _notificationMetadata Additional information of a notification that Auto Scaling sends to targets. This parameter is set when you configure a notification (default value: "").
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
                     * 获取Remote command execution object. `NotificationTarget` and `LifecycleCommand` cannot be specified at the same time.
                     * @return LifecycleCommand Remote command execution object. `NotificationTarget` and `LifecycleCommand` cannot be specified at the same time.
                     * 
                     */
                    LifecycleCommand GetLifecycleCommand() const;

                    /**
                     * 设置Remote command execution object. `NotificationTarget` and `LifecycleCommand` cannot be specified at the same time.
                     * @param _lifecycleCommand Remote command execution object. `NotificationTarget` and `LifecycleCommand` cannot be specified at the same time.
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
                     * Lifecycle hook ID
                     */
                    std::string m_lifecycleHookId;
                    bool m_lifecycleHookIdHasBeenSet;

                    /**
                     * Lifecycle hook name
                     */
                    std::string m_lifecycleHookName;
                    bool m_lifecycleHookNameHasBeenSet;

                    /**
                     * Scenario for the lifecycle hook. Value range: "INSTANCE_LAUNCHING", "INSTANCE_TERMINATING"
                     */
                    std::string m_lifecycleTransition;
                    bool m_lifecycleTransitionHasBeenSet;

                    /**
                     * Defines the action to be taken by the auto scaling group upon lifecycle hook timeout. Value range: "CONTINUE", "ABANDON". Default value: "CONTINUE"
                     */
                    std::string m_defaultResult;
                    bool m_defaultResultHasBeenSet;

                    /**
                     * The maximum length of time (in seconds) that can elapse before the lifecycle hook times out. Value range: 30-7200. Default value: 300
                     */
                    int64_t m_heartbeatTimeout;
                    bool m_heartbeatTimeoutHasBeenSet;

                    /**
                     * Additional information of a notification that Auto Scaling sends to targets. This parameter is set when you configure a notification (default value: "").
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
                     * Remote command execution object. `NotificationTarget` and `LifecycleCommand` cannot be specified at the same time.
                     */
                    LifecycleCommand m_lifecycleCommand;
                    bool m_lifecycleCommandHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_AS_V20180419_MODEL_UPGRADELIFECYCLEHOOKREQUEST_H_
