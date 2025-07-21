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

#ifndef TENCENTCLOUD_AS_V20180419_MODEL_LIFECYCLEHOOK_H_
#define TENCENTCLOUD_AS_V20180419_MODEL_LIFECYCLEHOOK_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
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
                * Lifecycle hook
                */
                class LifecycleHook : public AbstractModel
                {
                public:
                    LifecycleHook();
                    ~LifecycleHook() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


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
                     * 获取Auto scaling group ID
                     * @return AutoScalingGroupId Auto scaling group ID
                     * 
                     */
                    std::string GetAutoScalingGroupId() const;

                    /**
                     * 设置Auto scaling group ID
                     * @param _autoScalingGroupId Auto scaling group ID
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
                     * 获取Action to be taken by the scaling group in case of lifecycle hook timeout or LifecycleCommand execution failure. valid values:.
-CONTINUE execution by default means capacity expansion or reduction.
-For scale-out hooks, cvms with hook timeout or failed LifecycleCommand execution will be released directly or removed; for scale-in hooks, scale-in activities will continue.
                     * @return DefaultResult Action to be taken by the scaling group in case of lifecycle hook timeout or LifecycleCommand execution failure. valid values:.
-CONTINUE execution by default means capacity expansion or reduction.
-For scale-out hooks, cvms with hook timeout or failed LifecycleCommand execution will be released directly or removed; for scale-in hooks, scale-in activities will continue.
                     * 
                     */
                    std::string GetDefaultResult() const;

                    /**
                     * 设置Action to be taken by the scaling group in case of lifecycle hook timeout or LifecycleCommand execution failure. valid values:.
-CONTINUE execution by default means capacity expansion or reduction.
-For scale-out hooks, cvms with hook timeout or failed LifecycleCommand execution will be released directly or removed; for scale-in hooks, scale-in activities will continue.
                     * @param _defaultResult Action to be taken by the scaling group in case of lifecycle hook timeout or LifecycleCommand execution failure. valid values:.
-CONTINUE execution by default means capacity expansion or reduction.
-For scale-out hooks, cvms with hook timeout or failed LifecycleCommand execution will be released directly or removed; for scale-in hooks, scale-in activities will continue.
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
                     * 获取Specifies the timeout waiting time of the lifecycle hook in seconds. value range: 30 to 7200.
                     * @return HeartbeatTimeout Specifies the timeout waiting time of the lifecycle hook in seconds. value range: 30 to 7200.
                     * 
                     */
                    int64_t GetHeartbeatTimeout() const;

                    /**
                     * 设置Specifies the timeout waiting time of the lifecycle hook in seconds. value range: 30 to 7200.
                     * @param _heartbeatTimeout Specifies the timeout waiting time of the lifecycle hook in seconds. value range: 30 to 7200.
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
                     * 获取Scenario for entering the lifecycle hook. valid values:.
-`INSTANCE_LAUNCHING`: the lifecycle hook is being scaled out.
-INSTANCE_TERMINATING: scale-in lifecycle hook.
                     * @return LifecycleTransition Scenario for entering the lifecycle hook. valid values:.
-`INSTANCE_LAUNCHING`: the lifecycle hook is being scaled out.
-INSTANCE_TERMINATING: scale-in lifecycle hook.
                     * 
                     */
                    std::string GetLifecycleTransition() const;

                    /**
                     * 设置Scenario for entering the lifecycle hook. valid values:.
-`INSTANCE_LAUNCHING`: the lifecycle hook is being scaled out.
-INSTANCE_TERMINATING: scale-in lifecycle hook.
                     * @param _lifecycleTransition Scenario for entering the lifecycle hook. valid values:.
-`INSTANCE_LAUNCHING`: the lifecycle hook is being scaled out.
-INSTANCE_TERMINATING: scale-in lifecycle hook.
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
                     * 获取Additional information for the notification target
                     * @return NotificationMetadata Additional information for the notification target
                     * 
                     */
                    std::string GetNotificationMetadata() const;

                    /**
                     * 设置Additional information for the notification target
                     * @param _notificationMetadata Additional information for the notification target
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
                     * 获取Creation time. uses UTC for timing.
                     * @return CreatedTime Creation time. uses UTC for timing.
                     * 
                     */
                    std::string GetCreatedTime() const;

                    /**
                     * 设置Creation time. uses UTC for timing.
                     * @param _createdTime Creation time. uses UTC for timing.
                     * 
                     */
                    void SetCreatedTime(const std::string& _createdTime);

                    /**
                     * 判断参数 CreatedTime 是否已赋值
                     * @return CreatedTime 是否已赋值
                     * 
                     */
                    bool CreatedTimeHasBeenSet() const;

                    /**
                     * 获取Notification target
                     * @return NotificationTarget Notification target
                     * 
                     */
                    NotificationTarget GetNotificationTarget() const;

                    /**
                     * 设置Notification target
                     * @param _notificationTarget Notification target
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
Description: when set to `EXTENSION`, the lifecycle hook will be triggered during `AttachInstances`, `DetachInstances`, or `RemoveInstances` API calls. if set to `NORMAL`, the lifecycle hook will not be triggered by these apis.
                     * @return LifecycleTransitionType Specifies the scenario type for performing the lifecycle hook. valid values: NORMAL and EXTENSION. default value: NORMAL.
Description: when set to `EXTENSION`, the lifecycle hook will be triggered during `AttachInstances`, `DetachInstances`, or `RemoveInstances` API calls. if set to `NORMAL`, the lifecycle hook will not be triggered by these apis.
                     * 
                     */
                    std::string GetLifecycleTransitionType() const;

                    /**
                     * 设置Specifies the scenario type for performing the lifecycle hook. valid values: NORMAL and EXTENSION. default value: NORMAL.
Description: when set to `EXTENSION`, the lifecycle hook will be triggered during `AttachInstances`, `DetachInstances`, or `RemoveInstances` API calls. if set to `NORMAL`, the lifecycle hook will not be triggered by these apis.
                     * @param _lifecycleTransitionType Specifies the scenario type for performing the lifecycle hook. valid values: NORMAL and EXTENSION. default value: NORMAL.
Description: when set to `EXTENSION`, the lifecycle hook will be triggered during `AttachInstances`, `DetachInstances`, or `RemoveInstances` API calls. if set to `NORMAL`, the lifecycle hook will not be triggered by these apis.
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
                     * 获取Remote command execution object.
                     * @return LifecycleCommand Remote command execution object.
                     * 
                     */
                    LifecycleCommand GetLifecycleCommand() const;

                    /**
                     * 设置Remote command execution object.
                     * @param _lifecycleCommand Remote command execution object.
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
                     * Auto scaling group ID
                     */
                    std::string m_autoScalingGroupId;
                    bool m_autoScalingGroupIdHasBeenSet;

                    /**
                     * Action to be taken by the scaling group in case of lifecycle hook timeout or LifecycleCommand execution failure. valid values:.
-CONTINUE execution by default means capacity expansion or reduction.
-For scale-out hooks, cvms with hook timeout or failed LifecycleCommand execution will be released directly or removed; for scale-in hooks, scale-in activities will continue.
                     */
                    std::string m_defaultResult;
                    bool m_defaultResultHasBeenSet;

                    /**
                     * Specifies the timeout waiting time of the lifecycle hook in seconds. value range: 30 to 7200.
                     */
                    int64_t m_heartbeatTimeout;
                    bool m_heartbeatTimeoutHasBeenSet;

                    /**
                     * Scenario for entering the lifecycle hook. valid values:.
-`INSTANCE_LAUNCHING`: the lifecycle hook is being scaled out.
-INSTANCE_TERMINATING: scale-in lifecycle hook.
                     */
                    std::string m_lifecycleTransition;
                    bool m_lifecycleTransitionHasBeenSet;

                    /**
                     * Additional information for the notification target
                     */
                    std::string m_notificationMetadata;
                    bool m_notificationMetadataHasBeenSet;

                    /**
                     * Creation time. uses UTC for timing.
                     */
                    std::string m_createdTime;
                    bool m_createdTimeHasBeenSet;

                    /**
                     * Notification target
                     */
                    NotificationTarget m_notificationTarget;
                    bool m_notificationTargetHasBeenSet;

                    /**
                     * Specifies the scenario type for performing the lifecycle hook. valid values: NORMAL and EXTENSION. default value: NORMAL.
Description: when set to `EXTENSION`, the lifecycle hook will be triggered during `AttachInstances`, `DetachInstances`, or `RemoveInstances` API calls. if set to `NORMAL`, the lifecycle hook will not be triggered by these apis.
                     */
                    std::string m_lifecycleTransitionType;
                    bool m_lifecycleTransitionTypeHasBeenSet;

                    /**
                     * Remote command execution object.
                     */
                    LifecycleCommand m_lifecycleCommand;
                    bool m_lifecycleCommandHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_AS_V20180419_MODEL_LIFECYCLEHOOK_H_
