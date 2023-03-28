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
                     * 获取Timer name. Currently `TerminateInstances` is the only supported value.
                     * @return TimerAction Timer name. Currently `TerminateInstances` is the only supported value.
                     */
                    std::string GetTimerAction() const;

                    /**
                     * 设置Timer name. Currently `TerminateInstances` is the only supported value.
                     * @param TimerAction Timer name. Currently `TerminateInstances` is the only supported value.
                     */
                    void SetTimerAction(const std::string& _timerAction);

                    /**
                     * 判断参数 TimerAction 是否已赋值
                     * @return TimerAction 是否已赋值
                     */
                    bool TimerActionHasBeenSet() const;

                    /**
                     * 获取Execution time, which follows the ISO8601 standard and uses UTC time. It must be at least 5 minutes later than the current time. Format: YYYY-MM-DDThh:mm:ssZ. For example: 2018-05-29T11:26:40Z.
                     * @return ActionTime Execution time, which follows the ISO8601 standard and uses UTC time. It must be at least 5 minutes later than the current time. Format: YYYY-MM-DDThh:mm:ssZ. For example: 2018-05-29T11:26:40Z.
                     */
                    std::string GetActionTime() const;

                    /**
                     * 设置Execution time, which follows the ISO8601 standard and uses UTC time. It must be at least 5 minutes later than the current time. Format: YYYY-MM-DDThh:mm:ssZ. For example: 2018-05-29T11:26:40Z.
                     * @param ActionTime Execution time, which follows the ISO8601 standard and uses UTC time. It must be at least 5 minutes later than the current time. Format: YYYY-MM-DDThh:mm:ssZ. For example: 2018-05-29T11:26:40Z.
                     */
                    void SetActionTime(const std::string& _actionTime);

                    /**
                     * 判断参数 ActionTime 是否已赋值
                     * @return ActionTime 是否已赋值
                     */
                    bool ActionTimeHasBeenSet() const;

                    /**
                     * 获取Additional data
                     * @return Externals Additional data
                     */
                    Externals GetExternals() const;

                    /**
                     * 设置Additional data
                     * @param Externals Additional data
                     */
                    void SetExternals(const Externals& _externals);

                    /**
                     * 判断参数 Externals 是否已赋值
                     * @return Externals 是否已赋值
                     */
                    bool ExternalsHasBeenSet() const;

                private:

                    /**
                     * Timer name. Currently `TerminateInstances` is the only supported value.
                     */
                    std::string m_timerAction;
                    bool m_timerActionHasBeenSet;

                    /**
                     * Execution time, which follows the ISO8601 standard and uses UTC time. It must be at least 5 minutes later than the current time. Format: YYYY-MM-DDThh:mm:ssZ. For example: 2018-05-29T11:26:40Z.
                     */
                    std::string m_actionTime;
                    bool m_actionTimeHasBeenSet;

                    /**
                     * Additional data
                     */
                    Externals m_externals;
                    bool m_externalsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CVM_V20170312_MODEL_ACTIONTIMER_H_
