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

#ifndef TENCENTCLOUD_CVM_V20170312_MODEL_ACTIONTIMER_H_
#define TENCENTCLOUD_CVM_V20170312_MODEL_ACTIONTIMER_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cvm/v20170312/model/Externals.h>


namespace TencentCloud
{
    namespace Cvm
    {
        namespace V20170312
        {
            namespace Model
            {
                /**
                * Scheduled tasks.
                */
                class ActionTimer : public AbstractModel
                {
                public:
                    ActionTimer();
                    ~ActionTimer() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Timer action. Valid value: `TerminateInstances`.
Note: This field may return `null`, indicating that no valid values can be obtained.
                     * @return TimerAction Timer action. Valid value: `TerminateInstances`.
Note: This field may return `null`, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetTimerAction() const;

                    /**
                     * 设置Timer action. Valid value: `TerminateInstances`.
Note: This field may return `null`, indicating that no valid values can be obtained.
                     * @param _timerAction Timer action. Valid value: `TerminateInstances`.
Note: This field may return `null`, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetTimerAction(const std::string& _timerAction);

                    /**
                     * 判断参数 TimerAction 是否已赋值
                     * @return TimerAction 是否已赋值
                     * 
                     */
                    bool TimerActionHasBeenSet() const;

                    /**
                     * 获取Action time, which follows the ISO8601 standard and uses UTC time. It must be 5 minutes later than the current time. Format: YYYY-MM-DDThh:mm:ssZ. For example: 2018-05-29T11:26:40Z.
Note: This field may return `null`, indicating that no valid values can be obtained.
                     * @return ActionTime Action time, which follows the ISO8601 standard and uses UTC time. It must be 5 minutes later than the current time. Format: YYYY-MM-DDThh:mm:ssZ. For example: 2018-05-29T11:26:40Z.
Note: This field may return `null`, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetActionTime() const;

                    /**
                     * 设置Action time, which follows the ISO8601 standard and uses UTC time. It must be 5 minutes later than the current time. Format: YYYY-MM-DDThh:mm:ssZ. For example: 2018-05-29T11:26:40Z.
Note: This field may return `null`, indicating that no valid values can be obtained.
                     * @param _actionTime Action time, which follows the ISO8601 standard and uses UTC time. It must be 5 minutes later than the current time. Format: YYYY-MM-DDThh:mm:ssZ. For example: 2018-05-29T11:26:40Z.
Note: This field may return `null`, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetActionTime(const std::string& _actionTime);

                    /**
                     * 判断参数 ActionTime 是否已赋值
                     * @return ActionTime 是否已赋值
                     * 
                     */
                    bool ActionTimeHasBeenSet() const;

                    /**
                     * 获取Extended data
Note: This field may return `null`, indicating that no valid values can be obtained.
                     * @return Externals Extended data
Note: This field may return `null`, indicating that no valid values can be obtained.
                     * 
                     */
                    Externals GetExternals() const;

                    /**
                     * 设置Extended data
Note: This field may return `null`, indicating that no valid values can be obtained.
                     * @param _externals Extended data
Note: This field may return `null`, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetExternals(const Externals& _externals);

                    /**
                     * 判断参数 Externals 是否已赋值
                     * @return Externals 是否已赋值
                     * 
                     */
                    bool ExternalsHasBeenSet() const;

                    /**
                     * 获取Timer ID.
                     * @return ActionTimerId Timer ID.
                     * 
                     */
                    std::string GetActionTimerId() const;

                    /**
                     * 设置Timer ID.
                     * @param _actionTimerId Timer ID.
                     * 
                     */
                    void SetActionTimerId(const std::string& _actionTimerId);

                    /**
                     * 判断参数 ActionTimerId 是否已赋值
                     * @return ActionTimerId 是否已赋值
                     * 
                     */
                    bool ActionTimerIdHasBeenSet() const;

                    /**
                     * 获取Timer status. Valid values:

UNDO: Not triggered.
DOING: Triggering.
DONE: Triggered already.

                     * @return Status Timer status. Valid values:

UNDO: Not triggered.
DOING: Triggering.
DONE: Triggered already.

                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置Timer status. Valid values:

UNDO: Not triggered.
DOING: Triggering.
DONE: Triggered already.

                     * @param _status Timer status. Valid values:

UNDO: Not triggered.
DOING: Triggering.
DONE: Triggered already.

                     * 
                     */
                    void SetStatus(const std::string& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取Instance ID corresponding to a timer.
                     * @return InstanceId Instance ID corresponding to a timer.
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置Instance ID corresponding to a timer.
                     * @param _instanceId Instance ID corresponding to a timer.
                     * 
                     */
                    void SetInstanceId(const std::string& _instanceId);

                    /**
                     * 判断参数 InstanceId 是否已赋值
                     * @return InstanceId 是否已赋值
                     * 
                     */
                    bool InstanceIdHasBeenSet() const;

                private:

                    /**
                     * Timer action. Valid value: `TerminateInstances`.
Note: This field may return `null`, indicating that no valid values can be obtained.
                     */
                    std::string m_timerAction;
                    bool m_timerActionHasBeenSet;

                    /**
                     * Action time, which follows the ISO8601 standard and uses UTC time. It must be 5 minutes later than the current time. Format: YYYY-MM-DDThh:mm:ssZ. For example: 2018-05-29T11:26:40Z.
Note: This field may return `null`, indicating that no valid values can be obtained.
                     */
                    std::string m_actionTime;
                    bool m_actionTimeHasBeenSet;

                    /**
                     * Extended data
Note: This field may return `null`, indicating that no valid values can be obtained.
                     */
                    Externals m_externals;
                    bool m_externalsHasBeenSet;

                    /**
                     * Timer ID.
                     */
                    std::string m_actionTimerId;
                    bool m_actionTimerIdHasBeenSet;

                    /**
                     * Timer status. Valid values:

UNDO: Not triggered.
DOING: Triggering.
DONE: Triggered already.

                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * Instance ID corresponding to a timer.
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CVM_V20170312_MODEL_ACTIONTIMER_H_
