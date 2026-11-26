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

#ifndef TENCENTCLOUD_TEO_V20220901_MODEL_INFERENCESCHEDULEDSCALINGPOLICY_H_
#define TENCENTCLOUD_TEO_V20220901_MODEL_INFERENCESCHEDULEDSCALINGPOLICY_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/teo/v20220901/model/InferenceScheduledScalingAction.h>
#include <tencentcloud/teo/v20220901/model/InferenceScheduledScalingEffectiveRange.h>


namespace TencentCloud
{
    namespace Teo
    {
        namespace V20220901
        {
            namespace Model
            {
                /**
                * Scheduled scaling policy configuration for edge reasoning.
                */
                class InferenceScheduledScalingPolicy : public AbstractModel
                {
                public:
                    InferenceScheduledScalingPolicy();
                    ~InferenceScheduledScalingPolicy() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取List of scheduled scaling actions. Fill in at least 1 and up to 10.
                     * @return ScheduledActions List of scheduled scaling actions. Fill in at least 1 and up to 10.
                     * 
                     */
                    std::vector<InferenceScheduledScalingAction> GetScheduledActions() const;

                    /**
                     * 设置List of scheduled scaling actions. Fill in at least 1 and up to 10.
                     * @param _scheduledActions List of scheduled scaling actions. Fill in at least 1 and up to 10.
                     * 
                     */
                    void SetScheduledActions(const std::vector<InferenceScheduledScalingAction>& _scheduledActions);

                    /**
                     * 判断参数 ScheduledActions 是否已赋值
                     * @return ScheduledActions 是否已赋值
                     * 
                     */
                    bool ScheduledActionsHasBeenSet() const;

                    /**
                     * 获取Validity period range, for description of whether the scheduled scaling policy is long-term valid or valid only within a specified date range.
                     * @return EffectiveRange Validity period range, for description of whether the scheduled scaling policy is long-term valid or valid only within a specified date range.
                     * 
                     */
                    InferenceScheduledScalingEffectiveRange GetEffectiveRange() const;

                    /**
                     * 设置Validity period range, for description of whether the scheduled scaling policy is long-term valid or valid only within a specified date range.
                     * @param _effectiveRange Validity period range, for description of whether the scheduled scaling policy is long-term valid or valid only within a specified date range.
                     * 
                     */
                    void SetEffectiveRange(const InferenceScheduledScalingEffectiveRange& _effectiveRange);

                    /**
                     * 判断参数 EffectiveRange 是否已赋值
                     * @return EffectiveRange 是否已赋值
                     * 
                     */
                    bool EffectiveRangeHasBeenSet() const;

                    /**
                     * 获取Time zone. Use the [IANA time zone](https://www.iana.org/time-zones) to identify the trigger time in ScheduledActions, such as UTC, Asia/Shanghai, America/New_York, Europe/London, and Asia/Kolkata. UTC is used by default if this parameter is not specified.





                     * @return TimeZone Time zone. Use the [IANA time zone](https://www.iana.org/time-zones) to identify the trigger time in ScheduledActions, such as UTC, Asia/Shanghai, America/New_York, Europe/London, and Asia/Kolkata. UTC is used by default if this parameter is not specified.





                     * 
                     */
                    std::string GetTimeZone() const;

                    /**
                     * 设置Time zone. Use the [IANA time zone](https://www.iana.org/time-zones) to identify the trigger time in ScheduledActions, such as UTC, Asia/Shanghai, America/New_York, Europe/London, and Asia/Kolkata. UTC is used by default if this parameter is not specified.





                     * @param _timeZone Time zone. Use the [IANA time zone](https://www.iana.org/time-zones) to identify the trigger time in ScheduledActions, such as UTC, Asia/Shanghai, America/New_York, Europe/London, and Asia/Kolkata. UTC is used by default if this parameter is not specified.





                     * 
                     */
                    void SetTimeZone(const std::string& _timeZone);

                    /**
                     * 判断参数 TimeZone 是否已赋值
                     * @return TimeZone 是否已赋值
                     * 
                     */
                    bool TimeZoneHasBeenSet() const;

                private:

                    /**
                     * List of scheduled scaling actions. Fill in at least 1 and up to 10.
                     */
                    std::vector<InferenceScheduledScalingAction> m_scheduledActions;
                    bool m_scheduledActionsHasBeenSet;

                    /**
                     * Validity period range, for description of whether the scheduled scaling policy is long-term valid or valid only within a specified date range.
                     */
                    InferenceScheduledScalingEffectiveRange m_effectiveRange;
                    bool m_effectiveRangeHasBeenSet;

                    /**
                     * Time zone. Use the [IANA time zone](https://www.iana.org/time-zones) to identify the trigger time in ScheduledActions, such as UTC, Asia/Shanghai, America/New_York, Europe/London, and Asia/Kolkata. UTC is used by default if this parameter is not specified.





                     */
                    std::string m_timeZone;
                    bool m_timeZoneHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220901_MODEL_INFERENCESCHEDULEDSCALINGPOLICY_H_
