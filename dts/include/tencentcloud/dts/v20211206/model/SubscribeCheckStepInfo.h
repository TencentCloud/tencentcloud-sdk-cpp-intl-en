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

#ifndef TENCENTCLOUD_DTS_V20211206_MODEL_SUBSCRIBECHECKSTEPINFO_H_
#define TENCENTCLOUD_DTS_V20211206_MODEL_SUBSCRIBECHECKSTEPINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/dts/v20211206/model/SubscribeCheckStepTip.h>


namespace TencentCloud
{
    namespace Dts
    {
        namespace V20211206
        {
            namespace Model
            {
                /**
                * Information about each step of the subscription check task.
                */
                class SubscribeCheckStepInfo : public AbstractModel
                {
                public:
                    SubscribeCheckStepInfo();
                    ~SubscribeCheckStepInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Step name
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return StepName Step name
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetStepName() const;

                    /**
                     * 设置Step name
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _stepName Step name
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetStepName(const std::string& _stepName);

                    /**
                     * 判断参数 StepName 是否已赋值
                     * @return StepName 是否已赋值
                     * 
                     */
                    bool StepNameHasBeenSet() const;

                    /**
                     * 获取Step Id
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return StepId Step Id
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetStepId() const;

                    /**
                     * 设置Step Id
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _stepId Step Id
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetStepId(const std::string& _stepId);

                    /**
                     * 判断参数 StepId 是否已赋值
                     * @return StepId 是否已赋值
                     * 
                     */
                    bool StepIdHasBeenSet() const;

                    /**
                     * 获取Step number, starting from 1
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return StepNo Step number, starting from 1
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    uint64_t GetStepNo() const;

                    /**
                     * 设置Step number, starting from 1
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _stepNo Step number, starting from 1
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetStepNo(const uint64_t& _stepNo);

                    /**
                     * 判断参数 StepNo 是否已赋值
                     * @return StepNo 是否已赋值
                     * 
                     */
                    bool StepNoHasBeenSet() const;

                    /**
                     * 获取Current step status. Valid values: notStarted, running, finished, failed.Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Status Current step status. Valid values: notStarted, running, finished, failed.Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置Current step status. Valid values: notStarted, running, finished, failed.Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _status Current step status. Valid values: notStarted, running, finished, failed.Note: This field may return null, indicating that no valid values can be obtained.
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
                     * 获取Current step progressNote: This field may return null, indicating that no valid values can be obtained.
                     * @return Percent Current step progressNote: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    uint64_t GetPercent() const;

                    /**
                     * 设置Current step progressNote: This field may return null, indicating that no valid values can be obtained.
                     * @param _percent Current step progressNote: This field may return null, indicating that no valid values can be obtained.
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
                     * 获取Error messageNote: This field may return null, indicating that no valid values can be obtained.
                     * @return Errors Error messageNote: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::vector<SubscribeCheckStepTip> GetErrors() const;

                    /**
                     * 设置Error messageNote: This field may return null, indicating that no valid values can be obtained.
                     * @param _errors Error messageNote: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetErrors(const std::vector<SubscribeCheckStepTip>& _errors);

                    /**
                     * 判断参数 Errors 是否已赋值
                     * @return Errors 是否已赋值
                     * 
                     */
                    bool ErrorsHasBeenSet() const;

                    /**
                     * 获取Warning messageNote: This field may return null, indicating that no valid values can be obtained.
                     * @return Warnings Warning messageNote: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::vector<SubscribeCheckStepTip> GetWarnings() const;

                    /**
                     * 设置Warning messageNote: This field may return null, indicating that no valid values can be obtained.
                     * @param _warnings Warning messageNote: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetWarnings(const std::vector<SubscribeCheckStepTip>& _warnings);

                    /**
                     * 判断参数 Warnings 是否已赋值
                     * @return Warnings 是否已赋值
                     * 
                     */
                    bool WarningsHasBeenSet() const;

                private:

                    /**
                     * Step name
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_stepName;
                    bool m_stepNameHasBeenSet;

                    /**
                     * Step Id
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_stepId;
                    bool m_stepIdHasBeenSet;

                    /**
                     * Step number, starting from 1
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    uint64_t m_stepNo;
                    bool m_stepNoHasBeenSet;

                    /**
                     * Current step status. Valid values: notStarted, running, finished, failed.Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * Current step progressNote: This field may return null, indicating that no valid values can be obtained.
                     */
                    uint64_t m_percent;
                    bool m_percentHasBeenSet;

                    /**
                     * Error messageNote: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<SubscribeCheckStepTip> m_errors;
                    bool m_errorsHasBeenSet;

                    /**
                     * Warning messageNote: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<SubscribeCheckStepTip> m_warnings;
                    bool m_warningsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DTS_V20211206_MODEL_SUBSCRIBECHECKSTEPINFO_H_
