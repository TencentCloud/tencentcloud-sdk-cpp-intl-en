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

#ifndef TENCENTCLOUD_CCC_V20200210_MODEL_DESCRIBEPREDICTIVEDIALINGCAMPAIGNRESPONSE_H_
#define TENCENTCLOUD_CCC_V20200210_MODEL_DESCRIBEPREDICTIVEDIALINGCAMPAIGNRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Ccc
    {
        namespace V20200210
        {
            namespace Model
            {
                /**
                * DescribePredictiveDialingCampaign response structure.
                */
                class DescribePredictiveDialingCampaignResponse : public AbstractModel
                {
                public:
                    DescribePredictiveDialingCampaignResponse();
                    ~DescribePredictiveDialingCampaignResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取Task id.
                     * @return CampaignId Task id.
                     * 
                     */
                    int64_t GetCampaignId() const;

                    /**
                     * 判断参数 CampaignId 是否已赋值
                     * @return CampaignId 是否已赋值
                     * 
                     */
                    bool CampaignIdHasBeenSet() const;

                    /**
                     * 获取Task name.
                     * @return Name Task name.
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     * 
                     */
                    bool NameHasBeenSet() const;

                    /**
                     * 获取Being called sequence: 0 for random 1 for in order.
                     * @return CallOrder Being called sequence: 0 for random 1 for in order.
                     * 
                     */
                    int64_t GetCallOrder() const;

                    /**
                     * 判断参数 CallOrder 是否已赋值
                     * @return CallOrder 是否已赋值
                     * 
                     */
                    bool CallOrderHasBeenSet() const;

                    /**
                     * 获取ID of the used skill group of agents.
                     * @return SkillGroupId ID of the used skill group of agents.
                     * 
                     */
                    int64_t GetSkillGroupId() const;

                    /**
                     * 判断参数 SkillGroupId 是否已赋值
                     * @return SkillGroupId 是否已赋值
                     * 
                     */
                    bool SkillGroupIdHasBeenSet() const;

                    /**
                     * 获取Specified ivr id.
                     * @return IVRId Specified ivr id.
                     * 
                     */
                    int64_t GetIVRId() const;

                    /**
                     * 判断参数 IVRId 是否已赋值
                     * @return IVRId 是否已赋值
                     * 
                     */
                    bool IVRIdHasBeenSet() const;

                    /**
                     * 获取Running priority of multiple tasks in the same application, from high to low 1 - 5.
                     * @return Priority Running priority of multiple tasks in the same application, from high to low 1 - 5.
                     * 
                     */
                    int64_t GetPriority() const;

                    /**
                     * 判断参数 Priority 是否已赋值
                     * @return Priority 是否已赋值
                     * 
                     */
                    bool PriorityHasBeenSet() const;

                    /**
                     * 获取Expected call drop rate, percentage, 5 - 50.
                     * @return ExpectedAbandonRate Expected call drop rate, percentage, 5 - 50.
                     * 
                     */
                    int64_t GetExpectedAbandonRate() const;

                    /**
                     * 判断参数 ExpectedAbandonRate 是否已赋值
                     * @return ExpectedAbandonRate 是否已赋值
                     * 
                     */
                    bool ExpectedAbandonRateHasBeenSet() const;

                    /**
                     * 获取Number of call retries, 0 - 2.
                     * @return RetryTimes Number of call retries, 0 - 2.
                     * 
                     */
                    int64_t GetRetryTimes() const;

                    /**
                     * 判断参数 RetryTimes 是否已赋值
                     * @return RetryTimes 是否已赋值
                     * 
                     */
                    bool RetryTimesHasBeenSet() const;

                    /**
                     * 获取Call retry interval, in seconds, [60 - 86,400].
                     * @return RetryInterval Call retry interval, in seconds, [60 - 86,400].
                     * 
                     */
                    int64_t GetRetryInterval() const;

                    /**
                     * 判断参数 RetryInterval 是否已赋值
                     * @return RetryInterval 是否已赋值
                     * 
                     */
                    bool RetryIntervalHasBeenSet() const;

                    /**
                     * 获取Task start time. unix timestamp. the task will automatically start after this time.
                     * @return StartTime Task start time. unix timestamp. the task will automatically start after this time.
                     * 
                     */
                    int64_t GetStartTime() const;

                    /**
                     * 判断参数 StartTime 是否已赋值
                     * @return StartTime 是否已赋值
                     * 
                     */
                    bool StartTimeHasBeenSet() const;

                    /**
                     * 获取Task termination time. unix timestamp. the task will automatically terminate after this time.
                     * @return EndTime Task termination time. unix timestamp. the task will automatically terminate after this time.
                     * 
                     */
                    int64_t GetEndTime() const;

                    /**
                     * 判断参数 EndTime 是否已赋值
                     * @return EndTime 是否已赋值
                     * 
                     */
                    bool EndTimeHasBeenSet() const;

                private:

                    /**
                     * Task id.
                     */
                    int64_t m_campaignId;
                    bool m_campaignIdHasBeenSet;

                    /**
                     * Task name.
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * Being called sequence: 0 for random 1 for in order.
                     */
                    int64_t m_callOrder;
                    bool m_callOrderHasBeenSet;

                    /**
                     * ID of the used skill group of agents.
                     */
                    int64_t m_skillGroupId;
                    bool m_skillGroupIdHasBeenSet;

                    /**
                     * Specified ivr id.
                     */
                    int64_t m_iVRId;
                    bool m_iVRIdHasBeenSet;

                    /**
                     * Running priority of multiple tasks in the same application, from high to low 1 - 5.
                     */
                    int64_t m_priority;
                    bool m_priorityHasBeenSet;

                    /**
                     * Expected call drop rate, percentage, 5 - 50.
                     */
                    int64_t m_expectedAbandonRate;
                    bool m_expectedAbandonRateHasBeenSet;

                    /**
                     * Number of call retries, 0 - 2.
                     */
                    int64_t m_retryTimes;
                    bool m_retryTimesHasBeenSet;

                    /**
                     * Call retry interval, in seconds, [60 - 86,400].
                     */
                    int64_t m_retryInterval;
                    bool m_retryIntervalHasBeenSet;

                    /**
                     * Task start time. unix timestamp. the task will automatically start after this time.
                     */
                    int64_t m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * Task termination time. unix timestamp. the task will automatically terminate after this time.
                     */
                    int64_t m_endTime;
                    bool m_endTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CCC_V20200210_MODEL_DESCRIBEPREDICTIVEDIALINGCAMPAIGNRESPONSE_H_
