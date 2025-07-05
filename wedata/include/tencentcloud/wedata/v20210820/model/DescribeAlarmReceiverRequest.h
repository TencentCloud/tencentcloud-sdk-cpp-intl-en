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

#ifndef TENCENTCLOUD_WEDATA_V20210820_MODEL_DESCRIBEALARMRECEIVERREQUEST_H_
#define TENCENTCLOUD_WEDATA_V20210820_MODEL_DESCRIBEALARMRECEIVERREQUEST_H_

#include <string>
#include <vector>
#include <map>
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
                * DescribeAlarmReceiver request structure.
                */
                class DescribeAlarmReceiverRequest : public AbstractModel
                {
                public:
                    DescribeAlarmReceiverRequest();
                    ~DescribeAlarmReceiverRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Alert ID
                     * @return AlarmId Alert ID
                     * 
                     */
                    std::string GetAlarmId() const;

                    /**
                     * 设置Alert ID
                     * @param _alarmId Alert ID
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
                     * 获取Current Page
                     * @return PageNumber Current Page
                     * 
                     */
                    uint64_t GetPageNumber() const;

                    /**
                     * 设置Current Page
                     * @param _pageNumber Current Page
                     * 
                     */
                    void SetPageNumber(const uint64_t& _pageNumber);

                    /**
                     * 判断参数 PageNumber 是否已赋值
                     * @return PageNumber 是否已赋值
                     * 
                     */
                    bool PageNumberHasBeenSet() const;

                    /**
                     * 获取Number of records per page
                     * @return PageSize Number of records per page
                     * 
                     */
                    uint64_t GetPageSize() const;

                    /**
                     * 设置Number of records per page
                     * @param _pageSize Number of records per page
                     * 
                     */
                    void SetPageSize(const uint64_t& _pageSize);

                    /**
                     * 判断参数 PageSize 是否已赋值
                     * @return PageSize 是否已赋值
                     * 
                     */
                    bool PageSizeHasBeenSet() const;

                    /**
                     * 获取Project ID
                     * @return ProjectId Project ID
                     * 
                     */
                    std::string GetProjectId() const;

                    /**
                     * 设置Project ID
                     * @param _projectId Project ID
                     * 
                     */
                    void SetProjectId(const std::string& _projectId);

                    /**
                     * 判断参数 ProjectId 是否已赋值
                     * @return ProjectId 是否已赋值
                     * 
                     */
                    bool ProjectIdHasBeenSet() const;

                    /**
                     * 获取Type
                     * @return TaskType Type
                     * 
                     */
                    uint64_t GetTaskType() const;

                    /**
                     * 设置Type
                     * @param _taskType Type
                     * 
                     */
                    void SetTaskType(const uint64_t& _taskType);

                    /**
                     * 判断参数 TaskType 是否已赋值
                     * @return TaskType 是否已赋值
                     * 
                     */
                    bool TaskTypeHasBeenSet() const;

                    /**
                     * 获取Alarm Recipient ID (comma-separated)
                     * @return AlarmRecipient Alarm Recipient ID (comma-separated)
                     * 
                     */
                    std::string GetAlarmRecipient() const;

                    /**
                     * 设置Alarm Recipient ID (comma-separated)
                     * @param _alarmRecipient Alarm Recipient ID (comma-separated)
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
                     * 获取Name of alarm recipient (comma-separated)
                     * @return AlarmRecipientName Name of alarm recipient (comma-separated)
                     * 
                     */
                    std::string GetAlarmRecipientName() const;

                    /**
                     * 设置Name of alarm recipient (comma-separated)
                     * @param _alarmRecipientName Name of alarm recipient (comma-separated)
                     * 
                     */
                    void SetAlarmRecipientName(const std::string& _alarmRecipientName);

                    /**
                     * 判断参数 AlarmRecipientName 是否已赋值
                     * @return AlarmRecipientName 是否已赋值
                     * 
                     */
                    bool AlarmRecipientNameHasBeenSet() const;

                    /**
                     * 获取Alarm Time
                     * @return AlarmTime Alarm Time
                     * 
                     */
                    std::string GetAlarmTime() const;

                    /**
                     * 设置Alarm Time
                     * @param _alarmTime Alarm Time
                     * 
                     */
                    void SetAlarmTime(const std::string& _alarmTime);

                    /**
                     * 判断参数 AlarmTime 是否已赋值
                     * @return AlarmTime 是否已赋值
                     * 
                     */
                    bool AlarmTimeHasBeenSet() const;

                    /**
                     * 获取Message ID
                     * @return MessageId Message ID
                     * 
                     */
                    std::string GetMessageId() const;

                    /**
                     * 设置Message ID
                     * @param _messageId Message ID
                     * 
                     */
                    void SetMessageId(const std::string& _messageId);

                    /**
                     * 判断参数 MessageId 是否已赋值
                     * @return MessageId 是否已赋值
                     * 
                     */
                    bool MessageIdHasBeenSet() const;

                    /**
                     * 获取Alert Record ID
                     * @return RecordId Alert Record ID
                     * 
                     */
                    uint64_t GetRecordId() const;

                    /**
                     * 设置Alert Record ID
                     * @param _recordId Alert Record ID
                     * 
                     */
                    void SetRecordId(const uint64_t& _recordId);

                    /**
                     * 判断参数 RecordId 是否已赋值
                     * @return RecordId 是否已赋值
                     * 
                     */
                    bool RecordIdHasBeenSet() const;

                    /**
                     * 获取Monitored Object Type (1: All Tasks, 2: Assigned Task, 3: Designated Responsible Person, 4: Specified Resource Group)
                     * @return MonitorType Monitored Object Type (1: All Tasks, 2: Assigned Task, 3: Designated Responsible Person, 4: Specified Resource Group)
                     * 
                     */
                    uint64_t GetMonitorType() const;

                    /**
                     * 设置Monitored Object Type (1: All Tasks, 2: Assigned Task, 3: Designated Responsible Person, 4: Specified Resource Group)
                     * @param _monitorType Monitored Object Type (1: All Tasks, 2: Assigned Task, 3: Designated Responsible Person, 4: Specified Resource Group)
                     * 
                     */
                    void SetMonitorType(const uint64_t& _monitorType);

                    /**
                     * 判断参数 MonitorType 是否已赋值
                     * @return MonitorType 是否已赋值
                     * 
                     */
                    bool MonitorTypeHasBeenSet() const;

                private:

                    /**
                     * Alert ID
                     */
                    std::string m_alarmId;
                    bool m_alarmIdHasBeenSet;

                    /**
                     * Current Page
                     */
                    uint64_t m_pageNumber;
                    bool m_pageNumberHasBeenSet;

                    /**
                     * Number of records per page
                     */
                    uint64_t m_pageSize;
                    bool m_pageSizeHasBeenSet;

                    /**
                     * Project ID
                     */
                    std::string m_projectId;
                    bool m_projectIdHasBeenSet;

                    /**
                     * Type
                     */
                    uint64_t m_taskType;
                    bool m_taskTypeHasBeenSet;

                    /**
                     * Alarm Recipient ID (comma-separated)
                     */
                    std::string m_alarmRecipient;
                    bool m_alarmRecipientHasBeenSet;

                    /**
                     * Name of alarm recipient (comma-separated)
                     */
                    std::string m_alarmRecipientName;
                    bool m_alarmRecipientNameHasBeenSet;

                    /**
                     * Alarm Time
                     */
                    std::string m_alarmTime;
                    bool m_alarmTimeHasBeenSet;

                    /**
                     * Message ID
                     */
                    std::string m_messageId;
                    bool m_messageIdHasBeenSet;

                    /**
                     * Alert Record ID
                     */
                    uint64_t m_recordId;
                    bool m_recordIdHasBeenSet;

                    /**
                     * Monitored Object Type (1: All Tasks, 2: Assigned Task, 3: Designated Responsible Person, 4: Specified Resource Group)
                     */
                    uint64_t m_monitorType;
                    bool m_monitorTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20210820_MODEL_DESCRIBEALARMRECEIVERREQUEST_H_
