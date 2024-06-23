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

#ifndef TENCENTCLOUD_WEDATA_V20210820_MODEL_ALARMINFO_H_
#define TENCENTCLOUD_WEDATA_V20210820_MODEL_ALARMINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Wedata
    {
        namespace V20210820
        {
            namespace Model
            {
                /**
                * Task Alert Information
                */
                class AlarmInfo : public AbstractModel
                {
                public:
                    AlarmInfo();
                    ~AlarmInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Associated Task ID
                     * @return TaskIds Associated Task ID
                     * 
                     */
                    std::string GetTaskIds() const;

                    /**
                     * 设置Associated Task ID
                     * @param _taskIds Associated Task ID
                     * 
                     */
                    void SetTaskIds(const std::string& _taskIds);

                    /**
                     * 判断参数 TaskIds 是否已赋值
                     * @return TaskIds 是否已赋值
                     * 
                     */
                    bool TaskIdsHasBeenSet() const;

                    /**
                     * 获取Alert Categories; 'failure' indicates failure alert; 'overtime' indicates timeout alert
                     * @return AlarmType Alert Categories; 'failure' indicates failure alert; 'overtime' indicates timeout alert
                     * 
                     */
                    std::string GetAlarmType() const;

                    /**
                     * 设置Alert Categories; 'failure' indicates failure alert; 'overtime' indicates timeout alert
                     * @param _alarmType Alert Categories; 'failure' indicates failure alert; 'overtime' indicates timeout alert
                     * 
                     */
                    void SetAlarmType(const std::string& _alarmType);

                    /**
                     * 判断参数 AlarmType 是否已赋值
                     * @return AlarmType 是否已赋值
                     * 
                     */
                    bool AlarmTypeHasBeenSet() const;

                    /**
                     * 获取Alert Method; 'SMS' indicates SMS; 'Email' indicates email; 'HTTP' indicates an interface method; 'Wechat' indicates WeChat method
                     * @return AlarmWay Alert Method; 'SMS' indicates SMS; 'Email' indicates email; 'HTTP' indicates an interface method; 'Wechat' indicates WeChat method
                     * 
                     */
                    std::string GetAlarmWay() const;

                    /**
                     * 设置Alert Method; 'SMS' indicates SMS; 'Email' indicates email; 'HTTP' indicates an interface method; 'Wechat' indicates WeChat method
                     * @param _alarmWay Alert Method; 'SMS' indicates SMS; 'Email' indicates email; 'HTTP' indicates an interface method; 'Wechat' indicates WeChat method
                     * 
                     */
                    void SetAlarmWay(const std::string& _alarmWay);

                    /**
                     * 判断参数 AlarmWay 是否已赋值
                     * @return AlarmWay 是否已赋值
                     * 
                     */
                    bool AlarmWayHasBeenSet() const;

                    /**
                     * 获取Alert Recipient, multiple recipients separated by ;
                     * @return AlarmRecipient Alert Recipient, multiple recipients separated by ;
                     * 
                     */
                    std::string GetAlarmRecipient() const;

                    /**
                     * 设置Alert Recipient, multiple recipients separated by ;
                     * @param _alarmRecipient Alert Recipient, multiple recipients separated by ;
                     * 
                     */
                    void SetAlarmRecipient(const std::string& _alarmRecipient);

                    /**
                     * 判断参数 AlarmRecipient 是否已赋值
                     * @return AlarmRecipient 是否已赋值
                     * 
                     */
                    bool AlarmRecipientHasBeenSet() const;

                    /**
                     * 获取Alert Recipient ID, multiple recipient IDs separated by ;
                     * @return AlarmRecipientId Alert Recipient ID, multiple recipient IDs separated by ;
                     * 
                     */
                    std::string GetAlarmRecipientId() const;

                    /**
                     * 设置Alert Recipient ID, multiple recipient IDs separated by ;
                     * @param _alarmRecipientId Alert Recipient ID, multiple recipient IDs separated by ;
                     * 
                     */
                    void SetAlarmRecipientId(const std::string& _alarmRecipientId);

                    /**
                     * 判断参数 AlarmRecipientId 是否已赋值
                     * @return AlarmRecipientId 是否已赋值
                     * 
                     */
                    bool AlarmRecipientIdHasBeenSet() const;

                    /**
                     * 获取Estimated Running Hours, value range 0-23
                     * @return Hours Estimated Running Hours, value range 0-23
                     * 
                     */
                    uint64_t GetHours() const;

                    /**
                     * 设置Estimated Running Hours, value range 0-23
                     * @param _hours Estimated Running Hours, value range 0-23
                     * 
                     */
                    void SetHours(const uint64_t& _hours);

                    /**
                     * 判断参数 Hours 是否已赋值
                     * @return Hours 是否已赋值
                     * 
                     */
                    bool HoursHasBeenSet() const;

                    /**
                     * 获取Estimated Running Minutes, value range 0-59
                     * @return Minutes Estimated Running Minutes, value range 0-59
                     * 
                     */
                    uint64_t GetMinutes() const;

                    /**
                     * 设置Estimated Running Minutes, value range 0-59
                     * @param _minutes Estimated Running Minutes, value range 0-59
                     * 
                     */
                    void SetMinutes(const uint64_t& _minutes);

                    /**
                     * 判断参数 Minutes 是否已赋值
                     * @return Minutes 是否已赋值
                     * 
                     */
                    bool MinutesHasBeenSet() const;

                    /**
                     * 获取Alert Trigger Moment; '1' means first run failure; '2' means failure after all retries;
                     * @return TriggerType Alert Trigger Moment; '1' means first run failure; '2' means failure after all retries;
                     * 
                     */
                    uint64_t GetTriggerType() const;

                    /**
                     * 设置Alert Trigger Moment; '1' means first run failure; '2' means failure after all retries;
                     * @param _triggerType Alert Trigger Moment; '1' means first run failure; '2' means failure after all retries;
                     * 
                     */
                    void SetTriggerType(const uint64_t& _triggerType);

                    /**
                     * 判断参数 TriggerType 是否已赋值
                     * @return TriggerType 是否已赋值
                     * 
                     */
                    bool TriggerTypeHasBeenSet() const;

                    /**
                     * 获取Alert Information ID
                     * @return AlarmId Alert Information ID
                     * 
                     */
                    std::string GetAlarmId() const;

                    /**
                     * 设置Alert Information ID
                     * @param _alarmId Alert Information ID
                     * 
                     */
                    void SetAlarmId(const std::string& _alarmId);

                    /**
                     * 判断参数 AlarmId 是否已赋值
                     * @return AlarmId 是否已赋值
                     * 
                     */
                    bool AlarmIdHasBeenSet() const;

                    /**
                     * 获取Alert Status Setting; '1' indicates available; '0' indicates unavailable, default is available
                     * @return Status Alert Status Setting; '1' indicates available; '0' indicates unavailable, default is available
                     * 
                     */
                    uint64_t GetStatus() const;

                    /**
                     * 设置Alert Status Setting; '1' indicates available; '0' indicates unavailable, default is available
                     * @param _status Alert Status Setting; '1' indicates available; '0' indicates unavailable, default is available
                     * 
                     */
                    void SetStatus(const uint64_t& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                private:

                    /**
                     * Associated Task ID
                     */
                    std::string m_taskIds;
                    bool m_taskIdsHasBeenSet;

                    /**
                     * Alert Categories; 'failure' indicates failure alert; 'overtime' indicates timeout alert
                     */
                    std::string m_alarmType;
                    bool m_alarmTypeHasBeenSet;

                    /**
                     * Alert Method; 'SMS' indicates SMS; 'Email' indicates email; 'HTTP' indicates an interface method; 'Wechat' indicates WeChat method
                     */
                    std::string m_alarmWay;
                    bool m_alarmWayHasBeenSet;

                    /**
                     * Alert Recipient, multiple recipients separated by ;
                     */
                    std::string m_alarmRecipient;
                    bool m_alarmRecipientHasBeenSet;

                    /**
                     * Alert Recipient ID, multiple recipient IDs separated by ;
                     */
                    std::string m_alarmRecipientId;
                    bool m_alarmRecipientIdHasBeenSet;

                    /**
                     * Estimated Running Hours, value range 0-23
                     */
                    uint64_t m_hours;
                    bool m_hoursHasBeenSet;

                    /**
                     * Estimated Running Minutes, value range 0-59
                     */
                    uint64_t m_minutes;
                    bool m_minutesHasBeenSet;

                    /**
                     * Alert Trigger Moment; '1' means first run failure; '2' means failure after all retries;
                     */
                    uint64_t m_triggerType;
                    bool m_triggerTypeHasBeenSet;

                    /**
                     * Alert Information ID
                     */
                    std::string m_alarmId;
                    bool m_alarmIdHasBeenSet;

                    /**
                     * Alert Status Setting; '1' indicates available; '0' indicates unavailable, default is available
                     */
                    uint64_t m_status;
                    bool m_statusHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20210820_MODEL_ALARMINFO_H_
