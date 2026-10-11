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

#ifndef TENCENTCLOUD_EMR_V20190103_MODEL_AUTOSCALERECORD_H_
#define TENCENTCLOUD_EMR_V20190103_MODEL_AUTOSCALERECORD_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Emr
    {
        namespace V20190103
        {
            namespace Model
            {
                /**
                * Auto scaling record.
                */
                class AutoScaleRecord : public AbstractModel
                {
                public:
                    AutoScaleRecord();
                    ~AutoScaleRecord() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>Scaling rule name.</p>
                     * @return StrategyName <p>Scaling rule name.</p>
                     * 
                     */
                    std::string GetStrategyName() const;

                    /**
                     * 设置<p>Scaling rule name.</p>
                     * @param _strategyName <p>Scaling rule name.</p>
                     * 
                     */
                    void SetStrategyName(const std::string& _strategyName);

                    /**
                     * 判断参数 StrategyName 是否已赋值
                     * @return StrategyName 是否已赋值
                     * 
                     */
                    bool StrategyNameHasBeenSet() const;

                    /**
                     * 获取<p>&quot;SCALE_OUT&quot; and &quot;SCALE_IN&quot;, indicating scale-out and scale-in, respectively.</p>
                     * @return ScaleAction <p>&quot;SCALE_OUT&quot; and &quot;SCALE_IN&quot;, indicating scale-out and scale-in, respectively.</p>
                     * 
                     */
                    std::string GetScaleAction() const;

                    /**
                     * 设置<p>&quot;SCALE_OUT&quot; and &quot;SCALE_IN&quot;, indicating scale-out and scale-in, respectively.</p>
                     * @param _scaleAction <p>&quot;SCALE_OUT&quot; and &quot;SCALE_IN&quot;, indicating scale-out and scale-in, respectively.</p>
                     * 
                     */
                    void SetScaleAction(const std::string& _scaleAction);

                    /**
                     * 判断参数 ScaleAction 是否已赋值
                     * @return ScaleAction 是否已赋值
                     * 
                     */
                    bool ScaleActionHasBeenSet() const;

                    /**
                     * 获取<p>The value is &quot;SUCCESS&quot;, &quot;FAILED&quot;, &quot;PART_SUCCESS&quot;, or &quot;IN_PROCESS&quot;, indicating success, failure, partial success, and in-process, respectively.</p>
                     * @return ActionStatus <p>The value is &quot;SUCCESS&quot;, &quot;FAILED&quot;, &quot;PART_SUCCESS&quot;, or &quot;IN_PROCESS&quot;, indicating success, failure, partial success, and in-process, respectively.</p>
                     * 
                     */
                    std::string GetActionStatus() const;

                    /**
                     * 设置<p>The value is &quot;SUCCESS&quot;, &quot;FAILED&quot;, &quot;PART_SUCCESS&quot;, or &quot;IN_PROCESS&quot;, indicating success, failure, partial success, and in-process, respectively.</p>
                     * @param _actionStatus <p>The value is &quot;SUCCESS&quot;, &quot;FAILED&quot;, &quot;PART_SUCCESS&quot;, or &quot;IN_PROCESS&quot;, indicating success, failure, partial success, and in-process, respectively.</p>
                     * 
                     */
                    void SetActionStatus(const std::string& _actionStatus);

                    /**
                     * 判断参数 ActionStatus 是否已赋值
                     * @return ActionStatus 是否已赋值
                     * 
                     */
                    bool ActionStatusHasBeenSet() const;

                    /**
                     * 获取<p>Flow trigger time.</p>
                     * @return ActionTime <p>Flow trigger time.</p>
                     * 
                     */
                    std::string GetActionTime() const;

                    /**
                     * 设置<p>Flow trigger time.</p>
                     * @param _actionTime <p>Flow trigger time.</p>
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
                     * 获取<p>Scaling-related description.</p>
                     * @return ScaleInfo <p>Scaling-related description.</p>
                     * 
                     */
                    std::string GetScaleInfo() const;

                    /**
                     * 设置<p>Scaling-related description.</p>
                     * @param _scaleInfo <p>Scaling-related description.</p>
                     * 
                     */
                    void SetScaleInfo(const std::string& _scaleInfo);

                    /**
                     * 判断参数 ScaleInfo 是否已赋值
                     * @return ScaleInfo 是否已赋值
                     * 
                     */
                    bool ScaleInfoHasBeenSet() const;

                    /**
                     * 获取<p>Valid only when ScaleAction is SCALE_OUT.</p>
                     * @return ExpectScaleNum <p>Valid only when ScaleAction is SCALE_OUT.</p>
                     * 
                     */
                    int64_t GetExpectScaleNum() const;

                    /**
                     * 设置<p>Valid only when ScaleAction is SCALE_OUT.</p>
                     * @param _expectScaleNum <p>Valid only when ScaleAction is SCALE_OUT.</p>
                     * 
                     */
                    void SetExpectScaleNum(const int64_t& _expectScaleNum);

                    /**
                     * 判断参数 ExpectScaleNum 是否已赋值
                     * @return ExpectScaleNum 是否已赋值
                     * 
                     */
                    bool ExpectScaleNumHasBeenSet() const;

                    /**
                     * 获取<p>Flow end time.</p>
                     * @return EndTime <p>Flow end time.</p>
                     * 
                     */
                    std::string GetEndTime() const;

                    /**
                     * 设置<p>Flow end time.</p>
                     * @param _endTime <p>Flow end time.</p>
                     * 
                     */
                    void SetEndTime(const std::string& _endTime);

                    /**
                     * 判断参数 EndTime 是否已赋值
                     * @return EndTime 是否已赋值
                     * 
                     */
                    bool EndTimeHasBeenSet() const;

                    /**
                     * 获取<p>Policy type. Load-based scaling or time-based scaling. 1 indicates load-based scaling, and 2 indicates time-based scaling.</p>
                     * @return StrategyType <p>Policy type. Load-based scaling or time-based scaling. 1 indicates load-based scaling, and 2 indicates time-based scaling.</p>
                     * 
                     */
                    int64_t GetStrategyType() const;

                    /**
                     * 设置<p>Policy type. Load-based scaling or time-based scaling. 1 indicates load-based scaling, and 2 indicates time-based scaling.</p>
                     * @param _strategyType <p>Policy type. Load-based scaling or time-based scaling. 1 indicates load-based scaling, and 2 indicates time-based scaling.</p>
                     * 
                     */
                    void SetStrategyType(const int64_t& _strategyType);

                    /**
                     * 判断参数 StrategyType 是否已赋值
                     * @return StrategyType 是否已赋值
                     * 
                     */
                    bool StrategyTypeHasBeenSet() const;

                    /**
                     * 获取<p>Specifications information used during scale-out.</p>
                     * @return SpecInfo <p>Specifications information used during scale-out.</p>
                     * 
                     */
                    std::string GetSpecInfo() const;

                    /**
                     * 设置<p>Specifications information used during scale-out.</p>
                     * @param _specInfo <p>Specifications information used during scale-out.</p>
                     * 
                     */
                    void SetSpecInfo(const std::string& _specInfo);

                    /**
                     * 判断参数 SpecInfo 是否已赋值
                     * @return SpecInfo 是否已赋值
                     * 
                     */
                    bool SpecInfoHasBeenSet() const;

                    /**
                     * 获取<p>Compensatory scale-out. Valid values: 0 (disable) and 1 (enable).</p>
                     * @return CompensateFlag <p>Compensatory scale-out. Valid values: 0 (disable) and 1 (enable).</p>
                     * 
                     */
                    int64_t GetCompensateFlag() const;

                    /**
                     * 设置<p>Compensatory scale-out. Valid values: 0 (disable) and 1 (enable).</p>
                     * @param _compensateFlag <p>Compensatory scale-out. Valid values: 0 (disable) and 1 (enable).</p>
                     * 
                     */
                    void SetCompensateFlag(const int64_t& _compensateFlag);

                    /**
                     * 判断参数 CompensateFlag 是否已赋值
                     * @return CompensateFlag 是否已赋值
                     * 
                     */
                    bool CompensateFlagHasBeenSet() const;

                    /**
                     * 获取<p>Number of compensations.</p>
                     * @return CompensateCount <p>Number of compensations.</p>
                     * 
                     */
                    int64_t GetCompensateCount() const;

                    /**
                     * 设置<p>Number of compensations.</p>
                     * @param _compensateCount <p>Number of compensations.</p>
                     * 
                     */
                    void SetCompensateCount(const int64_t& _compensateCount);

                    /**
                     * 判断参数 CompensateCount 是否已赋值
                     * @return CompensateCount 是否已赋值
                     * 
                     */
                    bool CompensateCountHasBeenSet() const;

                    /**
                     * 获取<p>Number of retries.</p>
                     * @return RetryCount <p>Number of retries.</p>
                     * 
                     */
                    uint64_t GetRetryCount() const;

                    /**
                     * 设置<p>Number of retries.</p>
                     * @param _retryCount <p>Number of retries.</p>
                     * 
                     */
                    void SetRetryCount(const uint64_t& _retryCount);

                    /**
                     * 判断参数 RetryCount 是否已赋值
                     * @return RetryCount 是否已赋值
                     * 
                     */
                    bool RetryCountHasBeenSet() const;

                    /**
                     * 获取<p>Retry information.</p>
                     * @return RetryInfo <p>Retry information.</p>
                     * 
                     */
                    std::string GetRetryInfo() const;

                    /**
                     * 设置<p>Retry information.</p>
                     * @param _retryInfo <p>Retry information.</p>
                     * 
                     */
                    void SetRetryInfo(const std::string& _retryInfo);

                    /**
                     * 判断参数 RetryInfo 是否已赋值
                     * @return RetryInfo 是否已赋值
                     * 
                     */
                    bool RetryInfoHasBeenSet() const;

                    /**
                     * 获取<p>Retry description in English.</p>
                     * @return RetryEnReason <p>Retry description in English.</p>
                     * 
                     */
                    std::string GetRetryEnReason() const;

                    /**
                     * 设置<p>Retry description in English.</p>
                     * @param _retryEnReason <p>Retry description in English.</p>
                     * 
                     */
                    void SetRetryEnReason(const std::string& _retryEnReason);

                    /**
                     * 判断参数 RetryEnReason 是否已赋值
                     * @return RetryEnReason 是否已赋值
                     * 
                     */
                    bool RetryEnReasonHasBeenSet() const;

                    /**
                     * 获取<p>Retry description.</p>
                     * @return RetryReason <p>Retry description.</p>
                     * 
                     */
                    std::string GetRetryReason() const;

                    /**
                     * 设置<p>Retry description.</p>
                     * @param _retryReason <p>Retry description.</p>
                     * 
                     */
                    void SetRetryReason(const std::string& _retryReason);

                    /**
                     * 判断参数 RetryReason 是否已赋值
                     * @return RetryReason 是否已赋值
                     * 
                     */
                    bool RetryReasonHasBeenSet() const;

                    /**
                     * 获取<p>Missing category.</p>
                     * @return ShortageClass <p>Missing category.</p>
                     * 
                     */
                    int64_t GetShortageClass() const;

                    /**
                     * 设置<p>Missing category.</p>
                     * @param _shortageClass <p>Missing category.</p>
                     * 
                     */
                    void SetShortageClass(const int64_t& _shortageClass);

                    /**
                     * 判断参数 ShortageClass 是否已赋值
                     * @return ShortageClass 是否已赋值
                     * 
                     */
                    bool ShortageClassHasBeenSet() const;

                private:

                    /**
                     * <p>Scaling rule name.</p>
                     */
                    std::string m_strategyName;
                    bool m_strategyNameHasBeenSet;

                    /**
                     * <p>&quot;SCALE_OUT&quot; and &quot;SCALE_IN&quot;, indicating scale-out and scale-in, respectively.</p>
                     */
                    std::string m_scaleAction;
                    bool m_scaleActionHasBeenSet;

                    /**
                     * <p>The value is &quot;SUCCESS&quot;, &quot;FAILED&quot;, &quot;PART_SUCCESS&quot;, or &quot;IN_PROCESS&quot;, indicating success, failure, partial success, and in-process, respectively.</p>
                     */
                    std::string m_actionStatus;
                    bool m_actionStatusHasBeenSet;

                    /**
                     * <p>Flow trigger time.</p>
                     */
                    std::string m_actionTime;
                    bool m_actionTimeHasBeenSet;

                    /**
                     * <p>Scaling-related description.</p>
                     */
                    std::string m_scaleInfo;
                    bool m_scaleInfoHasBeenSet;

                    /**
                     * <p>Valid only when ScaleAction is SCALE_OUT.</p>
                     */
                    int64_t m_expectScaleNum;
                    bool m_expectScaleNumHasBeenSet;

                    /**
                     * <p>Flow end time.</p>
                     */
                    std::string m_endTime;
                    bool m_endTimeHasBeenSet;

                    /**
                     * <p>Policy type. Load-based scaling or time-based scaling. 1 indicates load-based scaling, and 2 indicates time-based scaling.</p>
                     */
                    int64_t m_strategyType;
                    bool m_strategyTypeHasBeenSet;

                    /**
                     * <p>Specifications information used during scale-out.</p>
                     */
                    std::string m_specInfo;
                    bool m_specInfoHasBeenSet;

                    /**
                     * <p>Compensatory scale-out. Valid values: 0 (disable) and 1 (enable).</p>
                     */
                    int64_t m_compensateFlag;
                    bool m_compensateFlagHasBeenSet;

                    /**
                     * <p>Number of compensations.</p>
                     */
                    int64_t m_compensateCount;
                    bool m_compensateCountHasBeenSet;

                    /**
                     * <p>Number of retries.</p>
                     */
                    uint64_t m_retryCount;
                    bool m_retryCountHasBeenSet;

                    /**
                     * <p>Retry information.</p>
                     */
                    std::string m_retryInfo;
                    bool m_retryInfoHasBeenSet;

                    /**
                     * <p>Retry description in English.</p>
                     */
                    std::string m_retryEnReason;
                    bool m_retryEnReasonHasBeenSet;

                    /**
                     * <p>Retry description.</p>
                     */
                    std::string m_retryReason;
                    bool m_retryReasonHasBeenSet;

                    /**
                     * <p>Missing category.</p>
                     */
                    int64_t m_shortageClass;
                    bool m_shortageClassHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_EMR_V20190103_MODEL_AUTOSCALERECORD_H_
