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

#ifndef TENCENTCLOUD_MONITOR_V20180724_MODEL_TASKSTEPINFO_H_
#define TENCENTCLOUD_MONITOR_V20180724_MODEL_TASKSTEPINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Monitor
    {
        namespace V20180724
        {
            namespace Model
            {
                /**
                * Task step information
                */
                class TaskStepInfo : public AbstractModel
                {
                public:
                    TaskStepInfo();
                    ~TaskStepInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Step name
                     * @return Step Step name
                     */
                    std::string GetStep() const;

                    /**
                     * 设置Step name
                     * @param Step Step name
                     */
                    void SetStep(const std::string& _step);

                    /**
                     * 判断参数 Step 是否已赋值
                     * @return Step 是否已赋值
                     */
                    bool StepHasBeenSet() const;

                    /**
                     * 获取Lifecycle
`pending`
`running`
`success`
`failed`
                     * @return LifeState Lifecycle
`pending`
`running`
`success`
`failed`
                     */
                    std::string GetLifeState() const;

                    /**
                     * 设置Lifecycle
`pending`
`running`
`success`
`failed`
                     * @param LifeState Lifecycle
`pending`
`running`
`success`
`failed`
                     */
                    void SetLifeState(const std::string& _lifeState);

                    /**
                     * 判断参数 LifeState 是否已赋值
                     * @return LifeState 是否已赋值
                     */
                    bool LifeStateHasBeenSet() const;

                    /**
                     * 获取Step start time
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return StartAt Step start time
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string GetStartAt() const;

                    /**
                     * 设置Step start time
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param StartAt Step start time
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    void SetStartAt(const std::string& _startAt);

                    /**
                     * 判断参数 StartAt 是否已赋值
                     * @return StartAt 是否已赋值
                     */
                    bool StartAtHasBeenSet() const;

                    /**
                     * 获取Step end time
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return EndAt Step end time
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string GetEndAt() const;

                    /**
                     * 设置Step end time
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param EndAt Step end time
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    void SetEndAt(const std::string& _endAt);

                    /**
                     * 判断参数 EndAt 是否已赋值
                     * @return EndAt 是否已赋值
                     */
                    bool EndAtHasBeenSet() const;

                    /**
                     * 获取If `LifeState` is `failed`, this field displays the error message.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return FailedMsg If `LifeState` is `failed`, this field displays the error message.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string GetFailedMsg() const;

                    /**
                     * 设置If `LifeState` is `failed`, this field displays the error message.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param FailedMsg If `LifeState` is `failed`, this field displays the error message.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    void SetFailedMsg(const std::string& _failedMsg);

                    /**
                     * 判断参数 FailedMsg 是否已赋值
                     * @return FailedMsg 是否已赋值
                     */
                    bool FailedMsgHasBeenSet() const;

                private:

                    /**
                     * Step name
                     */
                    std::string m_step;
                    bool m_stepHasBeenSet;

                    /**
                     * Lifecycle
`pending`
`running`
`success`
`failed`
                     */
                    std::string m_lifeState;
                    bool m_lifeStateHasBeenSet;

                    /**
                     * Step start time
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_startAt;
                    bool m_startAtHasBeenSet;

                    /**
                     * Step end time
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_endAt;
                    bool m_endAtHasBeenSet;

                    /**
                     * If `LifeState` is `failed`, this field displays the error message.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_failedMsg;
                    bool m_failedMsgHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MONITOR_V20180724_MODEL_TASKSTEPINFO_H_
