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

#ifndef TENCENTCLOUD_DTS_V20211206_MODEL_STEPINFO_H_
#define TENCENTCLOUD_DTS_V20211206_MODEL_STEPINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/dts/v20211206/model/StepTip.h>


namespace TencentCloud
{
    namespace Dts
    {
        namespace V20211206
        {
            namespace Model
            {
                /**
                * Step details
                */
                class StepInfo : public AbstractModel
                {
                public:
                    StepInfo();
                    ~StepInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Step number
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return StepNo Step number
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    uint64_t GetStepNo() const;

                    /**
                     * 设置Step number
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _stepNo Step number
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
                     * 获取Step ID
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return StepId Step ID
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetStepId() const;

                    /**
                     * 设置Step ID
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _stepId Step ID
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
                     * 获取Status of the current step. Valid values: `notStarted`, `running`, `failed`, `finished, `skipped`, `paused`.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Status Status of the current step. Valid values: `notStarted`, `running`, `failed`, `finished, `skipped`, `paused`.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置Status of the current step. Valid values: `notStarted`, `running`, `failed`, `finished, `skipped`, `paused`.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _status Status of the current step. Valid values: `notStarted`, `running`, `failed`, `finished, `skipped`, `paused`.
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
                     * 获取Step start time, which may be null.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return StartTime Step start time, which may be null.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetStartTime() const;

                    /**
                     * 设置Step start time, which may be null.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _startTime Step start time, which may be null.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetStartTime(const std::string& _startTime);

                    /**
                     * 判断参数 StartTime 是否已赋值
                     * @return StartTime 是否已赋值
                     * 
                     */
                    bool StartTimeHasBeenSet() const;

                    /**
                     * 获取Error message
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Errors Error message
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::vector<StepTip> GetErrors() const;

                    /**
                     * 设置Error message
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _errors Error message
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetErrors(const std::vector<StepTip>& _errors);

                    /**
                     * 判断参数 Errors 是否已赋值
                     * @return Errors 是否已赋值
                     * 
                     */
                    bool ErrorsHasBeenSet() const;

                    /**
                     * 获取Warning message
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Warnings Warning message
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::vector<StepTip> GetWarnings() const;

                    /**
                     * 设置Warning message
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _warnings Warning message
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetWarnings(const std::vector<StepTip>& _warnings);

                    /**
                     * 判断参数 Warnings 是否已赋值
                     * @return Warnings 是否已赋值
                     * 
                     */
                    bool WarningsHasBeenSet() const;

                    /**
                     * 获取Current step progress. Value range: 0-100. The value `-1` indicates that the progress of the current step is unavailable. Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Progress Current step progress. Value range: 0-100. The value `-1` indicates that the progress of the current step is unavailable. Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    int64_t GetProgress() const;

                    /**
                     * 设置Current step progress. Value range: 0-100. The value `-1` indicates that the progress of the current step is unavailable. Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _progress Current step progress. Value range: 0-100. The value `-1` indicates that the progress of the current step is unavailable. Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetProgress(const int64_t& _progress);

                    /**
                     * 判断参数 Progress 是否已赋值
                     * @return Progress 是否已赋值
                     * 
                     */
                    bool ProgressHasBeenSet() const;

                private:

                    /**
                     * Step number
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    uint64_t m_stepNo;
                    bool m_stepNoHasBeenSet;

                    /**
                     * Step name
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_stepName;
                    bool m_stepNameHasBeenSet;

                    /**
                     * Step ID
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_stepId;
                    bool m_stepIdHasBeenSet;

                    /**
                     * Status of the current step. Valid values: `notStarted`, `running`, `failed`, `finished, `skipped`, `paused`.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * Step start time, which may be null.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * Error message
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<StepTip> m_errors;
                    bool m_errorsHasBeenSet;

                    /**
                     * Warning message
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<StepTip> m_warnings;
                    bool m_warningsHasBeenSet;

                    /**
                     * Current step progress. Value range: 0-100. The value `-1` indicates that the progress of the current step is unavailable. Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t m_progress;
                    bool m_progressHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DTS_V20211206_MODEL_STEPINFO_H_
