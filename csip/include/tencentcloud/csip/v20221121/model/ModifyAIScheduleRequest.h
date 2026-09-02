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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_MODIFYAISCHEDULEREQUEST_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_MODIFYAISCHEDULEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/csip/v20221121/model/AiScheduleTriggerInfo.h>


namespace TencentCloud
{
    namespace Csip
    {
        namespace V20221121
        {
            namespace Model
            {
                /**
                * ModifyAISchedule request structure.
                */
                class ModifyAIScheduleRequest : public AbstractModel
                {
                public:
                    ModifyAIScheduleRequest();
                    ~ModifyAIScheduleRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>ID of the AI scheduled task. It can be obtained through the CreateAISchedule API.</p>
                     * @return ScheduleId <p>ID of the AI scheduled task. It can be obtained through the CreateAISchedule API.</p>
                     * 
                     */
                    std::string GetScheduleId() const;

                    /**
                     * 设置<p>ID of the AI scheduled task. It can be obtained through the CreateAISchedule API.</p>
                     * @param _scheduleId <p>ID of the AI scheduled task. It can be obtained through the CreateAISchedule API.</p>
                     * 
                     */
                    void SetScheduleId(const std::string& _scheduleId);

                    /**
                     * 判断参数 ScheduleId 是否已赋值
                     * @return ScheduleId 是否已赋值
                     * 
                     */
                    bool ScheduleIdHasBeenSet() const;

                    /**
                     * 获取<p>Task name. Maximum 128 characters.</p>
                     * @return Name <p>Task name. Maximum 128 characters.</p>
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置<p>Task name. Maximum 128 characters.</p>
                     * @param _name <p>Task name. Maximum 128 characters.</p>
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
                     * 获取<p>Execute the prompt content. Maximum 2048 characters.</p>
                     * @return Prompts <p>Execute the prompt content. Maximum 2048 characters.</p>
                     * 
                     */
                    std::string GetPrompts() const;

                    /**
                     * 设置<p>Execute the prompt content. Maximum 2048 characters.</p>
                     * @param _prompts <p>Execute the prompt content. Maximum 2048 characters.</p>
                     * 
                     */
                    void SetPrompts(const std::string& _prompts);

                    /**
                     * 判断参数 Prompts 是否已赋值
                     * @return Prompts 是否已赋值
                     * 
                     */
                    bool PromptsHasBeenSet() const;

                    /**
                     * 获取<p>Maximum trigger count. 0 indicates unlimited.</p>
                     * @return MaxFireCount <p>Maximum trigger count. 0 indicates unlimited.</p>
                     * 
                     */
                    int64_t GetMaxFireCount() const;

                    /**
                     * 设置<p>Maximum trigger count. 0 indicates unlimited.</p>
                     * @param _maxFireCount <p>Maximum trigger count. 0 indicates unlimited.</p>
                     * 
                     */
                    void SetMaxFireCount(const int64_t& _maxFireCount);

                    /**
                     * 判断参数 MaxFireCount 是否已赋值
                     * @return MaxFireCount 是否已赋值
                     * 
                     */
                    bool MaxFireCountHasBeenSet() const;

                    /**
                     * 获取<p>Start of effective time, Unix millisecond timestamp. 0 indicates immediate effect.</p>
                     * @return StartTime <p>Start of effective time, Unix millisecond timestamp. 0 indicates immediate effect.</p>
                     * 
                     */
                    int64_t GetStartTime() const;

                    /**
                     * 设置<p>Start of effective time, Unix millisecond timestamp. 0 indicates immediate effect.</p>
                     * @param _startTime <p>Start of effective time, Unix millisecond timestamp. 0 indicates immediate effect.</p>
                     * 
                     */
                    void SetStartTime(const int64_t& _startTime);

                    /**
                     * 判断参数 StartTime 是否已赋值
                     * @return StartTime 是否已赋值
                     * 
                     */
                    bool StartTimeHasBeenSet() const;

                    /**
                     * 获取<p>Effective end time, Unix millisecond timestamp. 0 means never expires.</p>
                     * @return EndTime <p>Effective end time, Unix millisecond timestamp. 0 means never expires.</p>
                     * 
                     */
                    int64_t GetEndTime() const;

                    /**
                     * 设置<p>Effective end time, Unix millisecond timestamp. 0 means never expires.</p>
                     * @param _endTime <p>Effective end time, Unix millisecond timestamp. 0 means never expires.</p>
                     * 
                     */
                    void SetEndTime(const int64_t& _endTime);

                    /**
                     * 判断参数 EndTime 是否已赋值
                     * @return EndTime 是否已赋值
                     * 
                     */
                    bool EndTimeHasBeenSet() const;

                    /**
                     * 获取<p>Trigger list. When UpdateTriggers is true, full replacement is applied.</p>
                     * @return Triggers <p>Trigger list. When UpdateTriggers is true, full replacement is applied.</p>
                     * 
                     */
                    std::vector<AiScheduleTriggerInfo> GetTriggers() const;

                    /**
                     * 设置<p>Trigger list. When UpdateTriggers is true, full replacement is applied.</p>
                     * @param _triggers <p>Trigger list. When UpdateTriggers is true, full replacement is applied.</p>
                     * 
                     */
                    void SetTriggers(const std::vector<AiScheduleTriggerInfo>& _triggers);

                    /**
                     * 判断参数 Triggers 是否已赋值
                     * @return Triggers 是否已赋值
                     * 
                     */
                    bool TriggersHasBeenSet() const;

                    /**
                     * 获取<p>Whether to update the trigger list. Value: true (use the Triggers field for full replacement), false (does not update).</p>
                     * @return UpdateTriggers <p>Whether to update the trigger list. Value: true (use the Triggers field for full replacement), false (does not update).</p>
                     * 
                     */
                    bool GetUpdateTriggers() const;

                    /**
                     * 设置<p>Whether to update the trigger list. Value: true (use the Triggers field for full replacement), false (does not update).</p>
                     * @param _updateTriggers <p>Whether to update the trigger list. Value: true (use the Triggers field for full replacement), false (does not update).</p>
                     * 
                     */
                    void SetUpdateTriggers(const bool& _updateTriggers);

                    /**
                     * 判断参数 UpdateTriggers 是否已赋值
                     * @return UpdateTriggers 是否已赋值
                     * 
                     */
                    bool UpdateTriggersHasBeenSet() const;

                private:

                    /**
                     * <p>ID of the AI scheduled task. It can be obtained through the CreateAISchedule API.</p>
                     */
                    std::string m_scheduleId;
                    bool m_scheduleIdHasBeenSet;

                    /**
                     * <p>Task name. Maximum 128 characters.</p>
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * <p>Execute the prompt content. Maximum 2048 characters.</p>
                     */
                    std::string m_prompts;
                    bool m_promptsHasBeenSet;

                    /**
                     * <p>Maximum trigger count. 0 indicates unlimited.</p>
                     */
                    int64_t m_maxFireCount;
                    bool m_maxFireCountHasBeenSet;

                    /**
                     * <p>Start of effective time, Unix millisecond timestamp. 0 indicates immediate effect.</p>
                     */
                    int64_t m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * <p>Effective end time, Unix millisecond timestamp. 0 means never expires.</p>
                     */
                    int64_t m_endTime;
                    bool m_endTimeHasBeenSet;

                    /**
                     * <p>Trigger list. When UpdateTriggers is true, full replacement is applied.</p>
                     */
                    std::vector<AiScheduleTriggerInfo> m_triggers;
                    bool m_triggersHasBeenSet;

                    /**
                     * <p>Whether to update the trigger list. Value: true (use the Triggers field for full replacement), false (does not update).</p>
                     */
                    bool m_updateTriggers;
                    bool m_updateTriggersHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_MODIFYAISCHEDULEREQUEST_H_
