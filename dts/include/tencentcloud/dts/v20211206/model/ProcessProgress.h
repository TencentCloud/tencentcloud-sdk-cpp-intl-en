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

#ifndef TENCENTCLOUD_DTS_V20211206_MODEL_PROCESSPROGRESS_H_
#define TENCENTCLOUD_DTS_V20211206_MODEL_PROCESSPROGRESS_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/dts/v20211206/model/StepDetailInfo.h>


namespace TencentCloud
{
    namespace Dts
    {
        namespace V20211206
        {
            namespace Model
            {
                /**
                * Task step information
                */
                class ProcessProgress : public AbstractModel
                {
                public:
                    ProcessProgress();
                    ~ProcessProgress() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Step status. Valid values: `notStarted`, `running`, `success`, `failed`.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Status Step status. Valid values: `notStarted`, `running`, `success`, `failed`.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置Step status. Valid values: `notStarted`, `running`, `success`, `failed`.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _status Step status. Valid values: `notStarted`, `running`, `success`, `failed`.
Note: This field may return null, indicating that no valid values can be obtained.
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
                     * 获取Progress information
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Percent Progress information
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    uint64_t GetPercent() const;

                    /**
                     * 设置Progress information
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _percent Progress information
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetPercent(const uint64_t& _percent);

                    /**
                     * 判断参数 Percent 是否已赋值
                     * @return Percent 是否已赋值
                     * 
                     */
                    bool PercentHasBeenSet() const;

                    /**
                     * 获取Total number of steps
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return StepAll Total number of steps
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    uint64_t GetStepAll() const;

                    /**
                     * 设置Total number of steps
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _stepAll Total number of steps
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetStepAll(const uint64_t& _stepAll);

                    /**
                     * 判断参数 StepAll 是否已赋值
                     * @return StepAll 是否已赋值
                     * 
                     */
                    bool StepAllHasBeenSet() const;

                    /**
                     * 获取Current step
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return StepNow Current step
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    uint64_t GetStepNow() const;

                    /**
                     * 设置Current step
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _stepNow Current step
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetStepNow(const uint64_t& _stepNow);

                    /**
                     * 判断参数 StepNow 是否已赋值
                     * @return StepNow 是否已赋值
                     * 
                     */
                    bool StepNowHasBeenSet() const;

                    /**
                     * 获取The prompt output in the current step
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Message The prompt output in the current step
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetMessage() const;

                    /**
                     * 设置The prompt output in the current step
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _message The prompt output in the current step
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetMessage(const std::string& _message);

                    /**
                     * 判断参数 Message 是否已赋值
                     * @return Message 是否已赋值
                     * 
                     */
                    bool MessageHasBeenSet() const;

                    /**
                     * 获取Step information
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Steps Step information
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::vector<StepDetailInfo> GetSteps() const;

                    /**
                     * 设置Step information
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _steps Step information
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetSteps(const std::vector<StepDetailInfo>& _steps);

                    /**
                     * 判断参数 Steps 是否已赋值
                     * @return Steps 是否已赋值
                     * 
                     */
                    bool StepsHasBeenSet() const;

                private:

                    /**
                     * Step status. Valid values: `notStarted`, `running`, `success`, `failed`.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * Progress information
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    uint64_t m_percent;
                    bool m_percentHasBeenSet;

                    /**
                     * Total number of steps
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    uint64_t m_stepAll;
                    bool m_stepAllHasBeenSet;

                    /**
                     * Current step
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    uint64_t m_stepNow;
                    bool m_stepNowHasBeenSet;

                    /**
                     * The prompt output in the current step
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_message;
                    bool m_messageHasBeenSet;

                    /**
                     * Step information
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<StepDetailInfo> m_steps;
                    bool m_stepsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DTS_V20211206_MODEL_PROCESSPROGRESS_H_
