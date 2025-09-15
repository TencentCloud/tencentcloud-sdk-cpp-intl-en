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
                * Elastic Scaling Record
                */
                class AutoScaleRecord : public AbstractModel
                {
                public:
                    AutoScaleRecord();
                    ~AutoScaleRecord() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Name of the scale-in or scale-out rule.
                     * @return StrategyName Name of the scale-in or scale-out rule.
                     * 
                     */
                    std::string GetStrategyName() const;

                    /**
                     * 设置Name of the scale-in or scale-out rule.
                     * @param _strategyName Name of the scale-in or scale-out rule.
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
                     * 获取"SCALE_OUT" and "SCALE_IN", representing expansion and reduction respectively.
                     * @return ScaleAction "SCALE_OUT" and "SCALE_IN", representing expansion and reduction respectively.
                     * 
                     */
                    std::string GetScaleAction() const;

                    /**
                     * 设置"SCALE_OUT" and "SCALE_IN", representing expansion and reduction respectively.
                     * @param _scaleAction "SCALE_OUT" and "SCALE_IN", representing expansion and reduction respectively.
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
                     * 获取The values are "SUCCESS", "FAILED", "PART_SUCCESS", "IN_PROCESS", which indicate success, failure, partial success, and in-progress, respectively.
                     * @return ActionStatus The values are "SUCCESS", "FAILED", "PART_SUCCESS", "IN_PROCESS", which indicate success, failure, partial success, and in-progress, respectively.
                     * 
                     */
                    std::string GetActionStatus() const;

                    /**
                     * 设置The values are "SUCCESS", "FAILED", "PART_SUCCESS", "IN_PROCESS", which indicate success, failure, partial success, and in-progress, respectively.
                     * @param _actionStatus The values are "SUCCESS", "FAILED", "PART_SUCCESS", "IN_PROCESS", which indicate success, failure, partial success, and in-progress, respectively.
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
                     * 获取Process initiation time.
                     * @return ActionTime Process initiation time.
                     * 
                     */
                    std::string GetActionTime() const;

                    /**
                     * 设置Process initiation time.
                     * @param _actionTime Process initiation time.
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
                     * 获取Description related to auto-scaling.
                     * @return ScaleInfo Description related to auto-scaling.
                     * 
                     */
                    std::string GetScaleInfo() const;

                    /**
                     * 设置Description related to auto-scaling.
                     * @param _scaleInfo Description related to auto-scaling.
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
                     * 获取Valid only when ScaleAction is SCALE_OUT.
                     * @return ExpectScaleNum Valid only when ScaleAction is SCALE_OUT.
                     * 
                     */
                    int64_t GetExpectScaleNum() const;

                    /**
                     * 设置Valid only when ScaleAction is SCALE_OUT.
                     * @param _expectScaleNum Valid only when ScaleAction is SCALE_OUT.
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
                     * 获取Process termination time.
                     * @return EndTime Process termination time.
                     * 
                     */
                    std::string GetEndTime() const;

                    /**
                     * 设置Process termination time.
                     * @param _endTime Process termination time.
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
                     * 获取Policy type. Valid values: 1 (load-based scaling), 2 (time-based scaling).
                     * @return StrategyType Policy type. Valid values: 1 (load-based scaling), 2 (time-based scaling).
                     * 
                     */
                    int64_t GetStrategyType() const;

                    /**
                     * 设置Policy type. Valid values: 1 (load-based scaling), 2 (time-based scaling).
                     * @param _strategyType Policy type. Valid values: 1 (load-based scaling), 2 (time-based scaling).
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
                     * 获取Specification information used during scale-out.
                     * @return SpecInfo Specification information used during scale-out.
                     * 
                     */
                    std::string GetSpecInfo() const;

                    /**
                     * 设置Specification information used during scale-out.
                     * @param _specInfo Specification information used during scale-out.
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
                     * 获取Compensatory scale-out. 0: disable, 1: enable.
                     * @return CompensateFlag Compensatory scale-out. 0: disable, 1: enable.
                     * 
                     */
                    int64_t GetCompensateFlag() const;

                    /**
                     * 设置Compensatory scale-out. 0: disable, 1: enable.
                     * @param _compensateFlag Compensatory scale-out. 0: disable, 1: enable.
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
                     * 获取Number of compensations.
                     * @return CompensateCount Number of compensations.
                     * 
                     */
                    int64_t GetCompensateCount() const;

                    /**
                     * 设置Number of compensations.
                     * @param _compensateCount Number of compensations.
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
                     * 获取Number of retries.
                     * @return RetryCount Number of retries.
                     * 
                     */
                    uint64_t GetRetryCount() const;

                    /**
                     * 设置Number of retries.
                     * @param _retryCount Number of retries.
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
                     * 获取Retry information.
                     * @return RetryInfo Retry information.
                     * 
                     */
                    std::string GetRetryInfo() const;

                    /**
                     * 设置Retry information.
                     * @param _retryInfo Retry information.
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
                     * 获取Retry description in English.
                     * @return RetryEnReason Retry description in English.
                     * 
                     */
                    std::string GetRetryEnReason() const;

                    /**
                     * 设置Retry description in English.
                     * @param _retryEnReason Retry description in English.
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
                     * 获取Retry description.
                     * @return RetryReason Retry description.
                     * 
                     */
                    std::string GetRetryReason() const;

                    /**
                     * 设置Retry description.
                     * @param _retryReason Retry description.
                     * 
                     */
                    void SetRetryReason(const std::string& _retryReason);

                    /**
                     * 判断参数 RetryReason 是否已赋值
                     * @return RetryReason 是否已赋值
                     * 
                     */
                    bool RetryReasonHasBeenSet() const;

                private:

                    /**
                     * Name of the scale-in or scale-out rule.
                     */
                    std::string m_strategyName;
                    bool m_strategyNameHasBeenSet;

                    /**
                     * "SCALE_OUT" and "SCALE_IN", representing expansion and reduction respectively.
                     */
                    std::string m_scaleAction;
                    bool m_scaleActionHasBeenSet;

                    /**
                     * The values are "SUCCESS", "FAILED", "PART_SUCCESS", "IN_PROCESS", which indicate success, failure, partial success, and in-progress, respectively.
                     */
                    std::string m_actionStatus;
                    bool m_actionStatusHasBeenSet;

                    /**
                     * Process initiation time.
                     */
                    std::string m_actionTime;
                    bool m_actionTimeHasBeenSet;

                    /**
                     * Description related to auto-scaling.
                     */
                    std::string m_scaleInfo;
                    bool m_scaleInfoHasBeenSet;

                    /**
                     * Valid only when ScaleAction is SCALE_OUT.
                     */
                    int64_t m_expectScaleNum;
                    bool m_expectScaleNumHasBeenSet;

                    /**
                     * Process termination time.
                     */
                    std::string m_endTime;
                    bool m_endTimeHasBeenSet;

                    /**
                     * Policy type. Valid values: 1 (load-based scaling), 2 (time-based scaling).
                     */
                    int64_t m_strategyType;
                    bool m_strategyTypeHasBeenSet;

                    /**
                     * Specification information used during scale-out.
                     */
                    std::string m_specInfo;
                    bool m_specInfoHasBeenSet;

                    /**
                     * Compensatory scale-out. 0: disable, 1: enable.
                     */
                    int64_t m_compensateFlag;
                    bool m_compensateFlagHasBeenSet;

                    /**
                     * Number of compensations.
                     */
                    int64_t m_compensateCount;
                    bool m_compensateCountHasBeenSet;

                    /**
                     * Number of retries.
                     */
                    uint64_t m_retryCount;
                    bool m_retryCountHasBeenSet;

                    /**
                     * Retry information.
                     */
                    std::string m_retryInfo;
                    bool m_retryInfoHasBeenSet;

                    /**
                     * Retry description in English.
                     */
                    std::string m_retryEnReason;
                    bool m_retryEnReasonHasBeenSet;

                    /**
                     * Retry description.
                     */
                    std::string m_retryReason;
                    bool m_retryReasonHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_EMR_V20190103_MODEL_AUTOSCALERECORD_H_
