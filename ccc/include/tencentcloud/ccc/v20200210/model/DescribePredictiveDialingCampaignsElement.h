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

#ifndef TENCENTCLOUD_CCC_V20200210_MODEL_DESCRIBEPREDICTIVEDIALINGCAMPAIGNSELEMENT_H_
#define TENCENTCLOUD_CCC_V20200210_MODEL_DESCRIBEPREDICTIVEDIALINGCAMPAIGNSELEMENT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
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
                * Query the predictive outbound call task list elements.
                */
                class DescribePredictiveDialingCampaignsElement : public AbstractModel
                {
                public:
                    DescribePredictiveDialingCampaignsElement();
                    ~DescribePredictiveDialingCampaignsElement() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<Task id>.
                     * @return CampaignId <Task id>.
                     * 
                     */
                    int64_t GetCampaignId() const;

                    /**
                     * 设置<Task id>.
                     * @param _campaignId <Task id>.
                     * 
                     */
                    void SetCampaignId(const int64_t& _campaignId);

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
                     * 设置Task name.
                     * @param _name Task name.
                     * 
                     */
                    void SetName(const std::string& _name);

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     * 
                     */
                    bool NameHasBeenSet() const;

                    /**
                     * 获取Task status 0 - ready to start, 1 - in progress, 2 - paused, 3 - terminated, 4 - completed.
                     * @return Status Task status 0 - ready to start, 1 - in progress, 2 - paused, 3 - terminated, 4 - completed.
                     * 
                     */
                    int64_t GetStatus() const;

                    /**
                     * 设置Task status 0 - ready to start, 1 - in progress, 2 - paused, 3 - terminated, 4 - completed.
                     * @param _status Task status 0 - ready to start, 1 - in progress, 2 - paused, 3 - terminated, 4 - completed.
                     * 
                     */
                    void SetStatus(const int64_t& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取Task status reasons 0 - normal, 1 - manually ended, 2 - ended due to overtime.
                     * @return StatusReason Task status reasons 0 - normal, 1 - manually ended, 2 - ended due to overtime.
                     * 
                     */
                    int64_t GetStatusReason() const;

                    /**
                     * 设置Task status reasons 0 - normal, 1 - manually ended, 2 - ended due to overtime.
                     * @param _statusReason Task status reasons 0 - normal, 1 - manually ended, 2 - ended due to overtime.
                     * 
                     */
                    void SetStatusReason(const int64_t& _statusReason);

                    /**
                     * 判断参数 StatusReason 是否已赋值
                     * @return StatusReason 是否已赋值
                     * 
                     */
                    bool StatusReasonHasBeenSet() const;

                    /**
                     * 获取Number of called numbers.
                     * @return CalleeCount Number of called numbers.
                     * 
                     */
                    int64_t GetCalleeCount() const;

                    /**
                     * 设置Number of called numbers.
                     * @param _calleeCount Number of called numbers.
                     * 
                     */
                    void SetCalleeCount(const int64_t& _calleeCount);

                    /**
                     * 判断参数 CalleeCount 是否已赋值
                     * @return CalleeCount 是否已赋值
                     * 
                     */
                    bool CalleeCountHasBeenSet() const;

                    /**
                     * 获取Number of completed calls.
                     * @return FinishedCalleeCount Number of completed calls.
                     * 
                     */
                    int64_t GetFinishedCalleeCount() const;

                    /**
                     * 设置Number of completed calls.
                     * @param _finishedCalleeCount Number of completed calls.
                     * 
                     */
                    void SetFinishedCalleeCount(const int64_t& _finishedCalleeCount);

                    /**
                     * 判断参数 FinishedCalleeCount 是否已赋值
                     * @return FinishedCalleeCount 是否已赋值
                     * 
                     */
                    bool FinishedCalleeCountHasBeenSet() const;

                    /**
                     * 获取Running priority of multiple tasks in the same application, from high to low 1 - 5.
                     * @return Priority Running priority of multiple tasks in the same application, from high to low 1 - 5.
                     * 
                     */
                    int64_t GetPriority() const;

                    /**
                     * 设置Running priority of multiple tasks in the same application, from high to low 1 - 5.
                     * @param _priority Running priority of multiple tasks in the same application, from high to low 1 - 5.
                     * 
                     */
                    void SetPriority(const int64_t& _priority);

                    /**
                     * 判断参数 Priority 是否已赋值
                     * @return Priority 是否已赋值
                     * 
                     */
                    bool PriorityHasBeenSet() const;

                    /**
                     * 获取ID of the used skill group of agents.
                     * @return SkillGroupId ID of the used skill group of agents.
                     * 
                     */
                    int64_t GetSkillGroupId() const;

                    /**
                     * 设置ID of the used skill group of agents.
                     * @param _skillGroupId ID of the used skill group of agents.
                     * 
                     */
                    void SetSkillGroupId(const int64_t& _skillGroupId);

                    /**
                     * 判断参数 SkillGroupId 是否已赋值
                     * @return SkillGroupId 是否已赋值
                     * 
                     */
                    bool SkillGroupIdHasBeenSet() const;

                private:

                    /**
                     * <Task id>.
                     */
                    int64_t m_campaignId;
                    bool m_campaignIdHasBeenSet;

                    /**
                     * Task name.
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * Task status 0 - ready to start, 1 - in progress, 2 - paused, 3 - terminated, 4 - completed.
                     */
                    int64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * Task status reasons 0 - normal, 1 - manually ended, 2 - ended due to overtime.
                     */
                    int64_t m_statusReason;
                    bool m_statusReasonHasBeenSet;

                    /**
                     * Number of called numbers.
                     */
                    int64_t m_calleeCount;
                    bool m_calleeCountHasBeenSet;

                    /**
                     * Number of completed calls.
                     */
                    int64_t m_finishedCalleeCount;
                    bool m_finishedCalleeCountHasBeenSet;

                    /**
                     * Running priority of multiple tasks in the same application, from high to low 1 - 5.
                     */
                    int64_t m_priority;
                    bool m_priorityHasBeenSet;

                    /**
                     * ID of the used skill group of agents.
                     */
                    int64_t m_skillGroupId;
                    bool m_skillGroupIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CCC_V20200210_MODEL_DESCRIBEPREDICTIVEDIALINGCAMPAIGNSELEMENT_H_
