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
                     * 获取Timer action currently only supports terminating one value: TerminateInstances.
                     * @return TimerAction Timer action currently only supports terminating one value: TerminateInstances.
                     * 
                     */
                    std::string GetTimerAction() const;

                    /**
                     * 设置Timer action currently only supports terminating one value: TerminateInstances.
                     * @param _timerAction Timer action currently only supports terminating one value: TerminateInstances.
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
                     * 获取Execution time, in standard ISO8601 representation and using UTC time. format: YYYY-MM-DDThh:MM:ssZ. for example, 2018-05-29T11:26:40Z. the execution time must be later than the current time by 5 minutes.
                     * @return ActionTime Execution time, in standard ISO8601 representation and using UTC time. format: YYYY-MM-DDThh:MM:ssZ. for example, 2018-05-29T11:26:40Z. the execution time must be later than the current time by 5 minutes.
                     * 
                     */
                    std::string GetActionTime() const;

                    /**
                     * 设置Execution time, in standard ISO8601 representation and using UTC time. format: YYYY-MM-DDThh:MM:ssZ. for example, 2018-05-29T11:26:40Z. the execution time must be later than the current time by 5 minutes.
                     * @param _actionTime Execution time, in standard ISO8601 representation and using UTC time. format: YYYY-MM-DDThh:MM:ssZ. for example, 2018-05-29T11:26:40Z. the execution time must be later than the current time by 5 minutes.
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
                     * 获取Extension data. only used as output usage.
                     * @return Externals Extension data. only used as output usage.
                     * 
                     */
                    Externals GetExternals() const;

                    /**
                     * 设置Extension data. only used as output usage.
                     * @param _externals Extension data. only used as output usage.
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
                     * 获取Timer ID. only used as output usage.
                     * @return ActionTimerId Timer ID. only used as output usage.
                     * 
                     */
                    std::string GetActionTimerId() const;

                    /**
                     * 设置Timer ID. only used as output usage.
                     * @param _actionTimerId Timer ID. only used as output usage.
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
                     * 获取Timer status, for output usage only. value ranges from: <li>UNDO: unexecuted</li> <li>DOING: executing</li> <li>DONE: execution completed.</li>.
                     * @return Status Timer status, for output usage only. value ranges from: <li>UNDO: unexecuted</li> <li>DOING: executing</li> <li>DONE: execution completed.</li>.
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置Timer status, for output usage only. value ranges from: <li>UNDO: unexecuted</li> <li>DOING: executing</li> <li>DONE: execution completed.</li>.
                     * @param _status Timer status, for output usage only. value ranges from: <li>UNDO: unexecuted</li> <li>DOING: executing</li> <li>DONE: execution completed.</li>.
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
                     * 获取Instance ID corresponding to a timer. used only for output.
                     * @return InstanceId Instance ID corresponding to a timer. used only for output.
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置Instance ID corresponding to a timer. used only for output.
                     * @param _instanceId Instance ID corresponding to a timer. used only for output.
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
                     * Timer action currently only supports terminating one value: TerminateInstances.
                     */
                    std::string m_timerAction;
                    bool m_timerActionHasBeenSet;

                    /**
                     * Execution time, in standard ISO8601 representation and using UTC time. format: YYYY-MM-DDThh:MM:ssZ. for example, 2018-05-29T11:26:40Z. the execution time must be later than the current time by 5 minutes.
                     */
                    std::string m_actionTime;
                    bool m_actionTimeHasBeenSet;

                    /**
                     * Extension data. only used as output usage.
                     */
                    Externals m_externals;
                    bool m_externalsHasBeenSet;

                    /**
                     * Timer ID. only used as output usage.
                     */
                    std::string m_actionTimerId;
                    bool m_actionTimerIdHasBeenSet;

                    /**
                     * Timer status, for output usage only. value ranges from: <li>UNDO: unexecuted</li> <li>DOING: executing</li> <li>DONE: execution completed.</li>.
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * Instance ID corresponding to a timer. used only for output.
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CVM_V20170312_MODEL_ACTIONTIMER_H_
