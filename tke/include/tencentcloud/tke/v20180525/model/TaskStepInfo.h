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

#ifndef TENCENTCLOUD_TKE_V20180525_MODEL_TASKSTEPINFO_H_
#define TENCENTCLOUD_TKE_V20180525_MODEL_TASKSTEPINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tke
    {
        namespace V20180525
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
pending: the step is not started
running: the step is in progress
success: the step is completed
failed: the step failed
                     * @return LifeState Lifecycle
pending: the step is not started
running: the step is in progress
success: the step is completed
failed: the step failed
                     */
                    std::string GetLifeState() const;

                    /**
                     * 设置Lifecycle
pending: the step is not started
running: the step is in progress
success: the step is completed
failed: the step failed
                     * @param LifeState Lifecycle
pending: the step is not started
running: the step is in progress
success: the step is completed
failed: the step failed
                     */
                    void SetLifeState(const std::string& _lifeState);

                    /**
                     * 判断参数 LifeState 是否已赋值
                     * @return LifeState 是否已赋值
                     */
                    bool LifeStateHasBeenSet() const;

                    /**
                     * 获取Step start time
Note: this field may return `null`, indicating that no valid value is obtained.
                     * @return StartAt Step start time
Note: this field may return `null`, indicating that no valid value is obtained.
                     */
                    std::string GetStartAt() const;

                    /**
                     * 设置Step start time
Note: this field may return `null`, indicating that no valid value is obtained.
                     * @param StartAt Step start time
Note: this field may return `null`, indicating that no valid value is obtained.
                     */
                    void SetStartAt(const std::string& _startAt);

                    /**
                     * 判断参数 StartAt 是否已赋值
                     * @return StartAt 是否已赋值
                     */
                    bool StartAtHasBeenSet() const;

                    /**
                     * 获取Step end time
Note: this field may return `null`, indicating that no valid value is obtained.
                     * @return EndAt Step end time
Note: this field may return `null`, indicating that no valid value is obtained.
                     */
                    std::string GetEndAt() const;

                    /**
                     * 设置Step end time
Note: this field may return `null`, indicating that no valid value is obtained.
                     * @param EndAt Step end time
Note: this field may return `null`, indicating that no valid value is obtained.
                     */
                    void SetEndAt(const std::string& _endAt);

                    /**
                     * 判断参数 EndAt 是否已赋值
                     * @return EndAt 是否已赋值
                     */
                    bool EndAtHasBeenSet() const;

                    /**
                     * 获取If the lifecycle of the step is failed, this field will display the error information.
Note: this field may return `null`, indicating that no valid value is obtained.
                     * @return FailedMsg If the lifecycle of the step is failed, this field will display the error information.
Note: this field may return `null`, indicating that no valid value is obtained.
                     */
                    std::string GetFailedMsg() const;

                    /**
                     * 设置If the lifecycle of the step is failed, this field will display the error information.
Note: this field may return `null`, indicating that no valid value is obtained.
                     * @param FailedMsg If the lifecycle of the step is failed, this field will display the error information.
Note: this field may return `null`, indicating that no valid value is obtained.
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
pending: the step is not started
running: the step is in progress
success: the step is completed
failed: the step failed
                     */
                    std::string m_lifeState;
                    bool m_lifeStateHasBeenSet;

                    /**
                     * Step start time
Note: this field may return `null`, indicating that no valid value is obtained.
                     */
                    std::string m_startAt;
                    bool m_startAtHasBeenSet;

                    /**
                     * Step end time
Note: this field may return `null`, indicating that no valid value is obtained.
                     */
                    std::string m_endAt;
                    bool m_endAtHasBeenSet;

                    /**
                     * If the lifecycle of the step is failed, this field will display the error information.
Note: this field may return `null`, indicating that no valid value is obtained.
                     */
                    std::string m_failedMsg;
                    bool m_failedMsgHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TKE_V20180525_MODEL_TASKSTEPINFO_H_
