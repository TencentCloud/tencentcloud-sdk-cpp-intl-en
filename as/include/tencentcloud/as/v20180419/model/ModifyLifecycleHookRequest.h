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

#ifndef TENCENTCLOUD_AS_V20180419_MODEL_MODIFYLIFECYCLEHOOKREQUEST_H_
#define TENCENTCLOUD_AS_V20180419_MODEL_MODIFYLIFECYCLEHOOKREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/as/v20180419/model/NotificationTarget.h>


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
                     * 获取Lifecycle hook ID.
                     * @return LifecycleHookId Lifecycle hook ID.
                     */
                    std::string GetLifecycleHookId() const;

                    /**
                     * 设置Lifecycle hook ID.
                     * @param LifecycleHookId Lifecycle hook ID.
                     */
                    void SetLifecycleHookId(const std::string& _lifecycleHookId);

                    /**
                     * 判断参数 LifecycleHookId 是否已赋值
                     * @return LifecycleHookId 是否已赋值
                     */
                    bool LifecycleHookIdHasBeenSet() const;

                    /**
                     * 获取Lifecycle hook name.
                     * @return LifecycleHookName Lifecycle hook name.
                     */
                    std::string GetLifecycleHookName() const;

                    /**
                     * 设置Lifecycle hook name.
                     * @param LifecycleHookName Lifecycle hook name.
                     */
                    void SetLifecycleHookName(const std::string& _lifecycleHookName);

                    /**
                     * 判断参数 LifecycleHookName 是否已赋值
                     * @return LifecycleHookName 是否已赋值
                     */
                    bool LifecycleHookNameHasBeenSet() const;

                    /**
                     * 获取The time when the lifecycle hook is applied. Valid values:
<li> `INSTANCE_LAUNCHING`: After the instance launch
<li> `INSTANCE_TERMINATING`: Before the instance termination
                     * @return LifecycleTransition The time when the lifecycle hook is applied. Valid values:
<li> `INSTANCE_LAUNCHING`: After the instance launch
<li> `INSTANCE_TERMINATING`: Before the instance termination
                     */
                    std::string GetLifecycleTransition() const;

                    /**
                     * 设置The time when the lifecycle hook is applied. Valid values:
<li> `INSTANCE_LAUNCHING`: After the instance launch
<li> `INSTANCE_TERMINATING`: Before the instance termination
                     * @param LifecycleTransition The time when the lifecycle hook is applied. Valid values:
<li> `INSTANCE_LAUNCHING`: After the instance launch
<li> `INSTANCE_TERMINATING`: Before the instance termination
                     */
                    void SetLifecycleTransition(const std::string& _lifecycleTransition);

                    /**
                     * 判断参数 LifecycleTransition 是否已赋值
                     * @return LifecycleTransition 是否已赋值
                     */
                    bool LifecycleTransitionHasBeenSet() const;

                    /**
                     * 获取Actions after the lifecycle hook times out. Valid values:
<li> `CONTINUE`: Continue the scaling activity after the timeout
<li> `ABANDON`: Terminate the scaling activity after the timeout
                     * @return DefaultResult Actions after the lifecycle hook times out. Valid values:
<li> `CONTINUE`: Continue the scaling activity after the timeout
<li> `ABANDON`: Terminate the scaling activity after the timeout
                     */
                    std::string GetDefaultResult() const;

                    /**
                     * 设置Actions after the lifecycle hook times out. Valid values:
<li> `CONTINUE`: Continue the scaling activity after the timeout
<li> `ABANDON`: Terminate the scaling activity after the timeout
                     * @param DefaultResult Actions after the lifecycle hook times out. Valid values:
<li> `CONTINUE`: Continue the scaling activity after the timeout
<li> `ABANDON`: Terminate the scaling activity after the timeout
                     */
                    void SetDefaultResult(const std::string& _defaultResult);

                    /**
                     * 判断参数 DefaultResult 是否已赋值
                     * @return DefaultResult 是否已赋值
                     */
                    bool DefaultResultHasBeenSet() const;

                    /**
                     * 获取The maximum length of time (in seconds) that can elapse before the lifecycle hook times out. Value range: 30 - 7,200 seconds.
                     * @return HeartbeatTimeout The maximum length of time (in seconds) that can elapse before the lifecycle hook times out. Value range: 30 - 7,200 seconds.
                     */
                    uint64_t GetHeartbeatTimeout() const;

                    /**
                     * 设置The maximum length of time (in seconds) that can elapse before the lifecycle hook times out. Value range: 30 - 7,200 seconds.
                     * @param HeartbeatTimeout The maximum length of time (in seconds) that can elapse before the lifecycle hook times out. Value range: 30 - 7,200 seconds.
                     */
                    void SetHeartbeatTimeout(const uint64_t& _heartbeatTimeout);

                    /**
                     * 判断参数 HeartbeatTimeout 是否已赋值
                     * @return HeartbeatTimeout 是否已赋值
                     */
                    bool HeartbeatTimeoutHasBeenSet() const;

                    /**
                     * 获取Additional information sent by AS to the notification target.
                     * @return NotificationMetadata Additional information sent by AS to the notification target.
                     */
                    std::string GetNotificationMetadata() const;

                    /**
                     * 设置Additional information sent by AS to the notification target.
                     * @param NotificationMetadata Additional information sent by AS to the notification target.
                     */
                    void SetNotificationMetadata(const std::string& _notificationMetadata);

                    /**
                     * 判断参数 NotificationMetadata 是否已赋值
                     * @return NotificationMetadata 是否已赋值
                     */
                    bool NotificationMetadataHasBeenSet() const;

                    /**
                     * 获取The scenario where the lifecycle hook is applied. `EXTENSION`: The lifecycle hook will be triggered when `AttachInstances`, `DetachInstances` or `RemoveInstances` is called. `NORMAL`: The lifecycle hook is not triggered by the above APIs.
                     * @return LifecycleTransitionType The scenario where the lifecycle hook is applied. `EXTENSION`: The lifecycle hook will be triggered when `AttachInstances`, `DetachInstances` or `RemoveInstances` is called. `NORMAL`: The lifecycle hook is not triggered by the above APIs.
                     */
                    std::string GetLifecycleTransitionType() const;

                    /**
                     * 设置The scenario where the lifecycle hook is applied. `EXTENSION`: The lifecycle hook will be triggered when `AttachInstances`, `DetachInstances` or `RemoveInstances` is called. `NORMAL`: The lifecycle hook is not triggered by the above APIs.
                     * @param LifecycleTransitionType The scenario where the lifecycle hook is applied. `EXTENSION`: The lifecycle hook will be triggered when `AttachInstances`, `DetachInstances` or `RemoveInstances` is called. `NORMAL`: The lifecycle hook is not triggered by the above APIs.
                     */
                    void SetLifecycleTransitionType(const std::string& _lifecycleTransitionType);

                    /**
                     * 判断参数 LifecycleTransitionType 是否已赋值
                     * @return LifecycleTransitionType 是否已赋值
                     */
                    bool LifecycleTransitionTypeHasBeenSet() const;

                    /**
                     * 获取Information of the notification target.
                     * @return NotificationTarget Information of the notification target.
                     */
                    NotificationTarget GetNotificationTarget() const;

                    /**
                     * 设置Information of the notification target.
                     * @param NotificationTarget Information of the notification target.
                     */
                    void SetNotificationTarget(const NotificationTarget& _notificationTarget);

                    /**
                     * 判断参数 NotificationTarget 是否已赋值
                     * @return NotificationTarget 是否已赋值
                     */
                    bool NotificationTargetHasBeenSet() const;

                private:

                    /**
                     * Lifecycle hook ID.
                     */
                    std::string m_lifecycleHookId;
                    bool m_lifecycleHookIdHasBeenSet;

                    /**
                     * Lifecycle hook name.
                     */
                    std::string m_lifecycleHookName;
                    bool m_lifecycleHookNameHasBeenSet;

                    /**
                     * The time when the lifecycle hook is applied. Valid values:
<li> `INSTANCE_LAUNCHING`: After the instance launch
<li> `INSTANCE_TERMINATING`: Before the instance termination
                     */
                    std::string m_lifecycleTransition;
                    bool m_lifecycleTransitionHasBeenSet;

                    /**
                     * Actions after the lifecycle hook times out. Valid values:
<li> `CONTINUE`: Continue the scaling activity after the timeout
<li> `ABANDON`: Terminate the scaling activity after the timeout
                     */
                    std::string m_defaultResult;
                    bool m_defaultResultHasBeenSet;

                    /**
                     * The maximum length of time (in seconds) that can elapse before the lifecycle hook times out. Value range: 30 - 7,200 seconds.
                     */
                    uint64_t m_heartbeatTimeout;
                    bool m_heartbeatTimeoutHasBeenSet;

                    /**
                     * Additional information sent by AS to the notification target.
                     */
                    std::string m_notificationMetadata;
                    bool m_notificationMetadataHasBeenSet;

                    /**
                     * The scenario where the lifecycle hook is applied. `EXTENSION`: The lifecycle hook will be triggered when `AttachInstances`, `DetachInstances` or `RemoveInstances` is called. `NORMAL`: The lifecycle hook is not triggered by the above APIs.
                     */
                    std::string m_lifecycleTransitionType;
                    bool m_lifecycleTransitionTypeHasBeenSet;

                    /**
                     * Information of the notification target.
                     */
                    NotificationTarget m_notificationTarget;
                    bool m_notificationTargetHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_AS_V20180419_MODEL_MODIFYLIFECYCLEHOOKREQUEST_H_
