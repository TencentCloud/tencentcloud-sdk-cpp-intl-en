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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_AISCHEDULEINFO_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_AISCHEDULEINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/csip/v20221121/model/AiScheduleTriggerInfo.h>
#include <tencentcloud/csip/v20221121/model/AIScheduleUserIdentity.h>


namespace TencentCloud
{
    namespace Csip
    {
        namespace V20221121
        {
            namespace Model
            {
                /**
                * AI scheduled task information
                */
                class AiScheduleInfo : public AbstractModel
                {
                public:
                    AiScheduleInfo();
                    ~AiScheduleInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>ID of the AI scheduled task.</p>
                     * @return ScheduleId <p>ID of the AI scheduled task.</p>
                     * 
                     */
                    std::string GetScheduleId() const;

                    /**
                     * 设置<p>ID of the AI scheduled task.</p>
                     * @param _scheduleId <p>ID of the AI scheduled task.</p>
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
                     * 获取<p>Status. Parameter Value: 1 (enabled), 2 (disabled).</p>
                     * @return Status <p>Status. Parameter Value: 1 (enabled), 2 (disabled).</p>
                     * 
                     */
                    int64_t GetStatus() const;

                    /**
                     * 设置<p>Status. Parameter Value: 1 (enabled), 2 (disabled).</p>
                     * @param _status <p>Status. Parameter Value: 1 (enabled), 2 (disabled).</p>
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
                     * 获取<p>Trigger</p>
                     * @return Triggers <p>Trigger</p>
                     * 
                     */
                    std::vector<AiScheduleTriggerInfo> GetTriggers() const;

                    /**
                     * 设置<p>Trigger</p>
                     * @param _triggers <p>Trigger</p>
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
                     * 获取<p>Trigger count.</p>
                     * @return CurrentFireCount <p>Trigger count.</p>
                     * 
                     */
                    int64_t GetCurrentFireCount() const;

                    /**
                     * 设置<p>Trigger count.</p>
                     * @param _currentFireCount <p>Trigger count.</p>
                     * 
                     */
                    void SetCurrentFireCount(const int64_t& _currentFireCount);

                    /**
                     * 判断参数 CurrentFireCount 是否已赋值
                     * @return CurrentFireCount 是否已赋值
                     * 
                     */
                    bool CurrentFireCountHasBeenSet() const;

                    /**
                     * 获取<p>Start of effective time, Unix millisecond timestamp. 0 means effective immediately.</p>
                     * @return StartTime <p>Start of effective time, Unix millisecond timestamp. 0 means effective immediately.</p>
                     * 
                     */
                    int64_t GetStartTime() const;

                    /**
                     * 设置<p>Start of effective time, Unix millisecond timestamp. 0 means effective immediately.</p>
                     * @param _startTime <p>Start of effective time, Unix millisecond timestamp. 0 means effective immediately.</p>
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
                     * 获取<p>Expiration time, Unix millisecond timestamp. 0 means never expires.</p>
                     * @return EndTime <p>Expiration time, Unix millisecond timestamp. 0 means never expires.</p>
                     * 
                     */
                    int64_t GetEndTime() const;

                    /**
                     * 设置<p>Expiration time, Unix millisecond timestamp. 0 means never expires.</p>
                     * @param _endTime <p>Expiration time, Unix millisecond timestamp. 0 means never expires.</p>
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
                     * 获取<p>Creation time, Unix millisecond timestamp.</p>
                     * @return CreateTime <p>Creation time, Unix millisecond timestamp.</p>
                     * 
                     */
                    int64_t GetCreateTime() const;

                    /**
                     * 设置<p>Creation time, Unix millisecond timestamp.</p>
                     * @param _createTime <p>Creation time, Unix millisecond timestamp.</p>
                     * 
                     */
                    void SetCreateTime(const int64_t& _createTime);

                    /**
                     * 判断参数 CreateTime 是否已赋值
                     * @return CreateTime 是否已赋值
                     * 
                     */
                    bool CreateTimeHasBeenSet() const;

                    /**
                     * 获取<p>Update time, Unix millisecond timestamp.</p>
                     * @return UpdateTime <p>Update time, Unix millisecond timestamp.</p>
                     * 
                     */
                    int64_t GetUpdateTime() const;

                    /**
                     * 设置<p>Update time, Unix millisecond timestamp.</p>
                     * @param _updateTime <p>Update time, Unix millisecond timestamp.</p>
                     * 
                     */
                    void SetUpdateTime(const int64_t& _updateTime);

                    /**
                     * 判断参数 UpdateTime 是否已赋值
                     * @return UpdateTime 是否已赋值
                     * 
                     */
                    bool UpdateTimeHasBeenSet() const;

                    /**
                     * 获取<p>Identity information</p>
                     * @return Identity <p>Identity information</p>
                     * 
                     */
                    AIScheduleUserIdentity GetIdentity() const;

                    /**
                     * 设置<p>Identity information</p>
                     * @param _identity <p>Identity information</p>
                     * 
                     */
                    void SetIdentity(const AIScheduleUserIdentity& _identity);

                    /**
                     * 判断参数 Identity 是否已赋值
                     * @return Identity 是否已赋值
                     * 
                     */
                    bool IdentityHasBeenSet() const;

                private:

                    /**
                     * <p>ID of the AI scheduled task.</p>
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
                     * <p>Status. Parameter Value: 1 (enabled), 2 (disabled).</p>
                     */
                    int64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * <p>Trigger</p>
                     */
                    std::vector<AiScheduleTriggerInfo> m_triggers;
                    bool m_triggersHasBeenSet;

                    /**
                     * <p>Maximum trigger count. 0 indicates unlimited.</p>
                     */
                    int64_t m_maxFireCount;
                    bool m_maxFireCountHasBeenSet;

                    /**
                     * <p>Trigger count.</p>
                     */
                    int64_t m_currentFireCount;
                    bool m_currentFireCountHasBeenSet;

                    /**
                     * <p>Start of effective time, Unix millisecond timestamp. 0 means effective immediately.</p>
                     */
                    int64_t m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * <p>Expiration time, Unix millisecond timestamp. 0 means never expires.</p>
                     */
                    int64_t m_endTime;
                    bool m_endTimeHasBeenSet;

                    /**
                     * <p>Creation time, Unix millisecond timestamp.</p>
                     */
                    int64_t m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * <p>Update time, Unix millisecond timestamp.</p>
                     */
                    int64_t m_updateTime;
                    bool m_updateTimeHasBeenSet;

                    /**
                     * <p>Identity information</p>
                     */
                    AIScheduleUserIdentity m_identity;
                    bool m_identityHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_AISCHEDULEINFO_H_
