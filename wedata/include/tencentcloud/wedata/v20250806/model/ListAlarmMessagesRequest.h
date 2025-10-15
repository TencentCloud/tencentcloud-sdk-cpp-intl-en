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

#ifndef TENCENTCLOUD_WEDATA_V20250806_MODEL_LISTALARMMESSAGESREQUEST_H_
#define TENCENTCLOUD_WEDATA_V20250806_MODEL_LISTALARMMESSAGESREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Wedata
    {
        namespace V20250806
        {
            namespace Model
            {
                /**
                * ListAlarmMessages request structure.
                */
                class ListAlarmMessagesRequest : public AbstractModel
                {
                public:
                    ListAlarmMessagesRequest();
                    ~ListAlarmMessagesRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Project id.
                     * @return ProjectId Project id.
                     * 
                     */
                    std::string GetProjectId() const;

                    /**
                     * 设置Project id.
                     * @param _projectId Project id.
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
                     * 获取Page number for pagination, minimum value is 1.
                     * @return PageNumber Page number for pagination, minimum value is 1.
                     * 
                     */
                    uint64_t GetPageNumber() const;

                    /**
                     * 设置Page number for pagination, minimum value is 1.
                     * @param _pageNumber Page number for pagination, minimum value is 1.
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
                     * 获取Specifies the number of items displayed per page. maximum value: 100.
                     * @return PageSize Specifies the number of items displayed per page. maximum value: 100.
                     * 
                     */
                    uint64_t GetPageSize() const;

                    /**
                     * 设置Specifies the number of items displayed per page. maximum value: 100.
                     * @param _pageSize Specifies the number of items displayed per page. maximum value: 100.
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
                     * 获取Starting Alarm time. format: yyyy-MM-dd HH:MM:ss.
                     * @return StartTime Starting Alarm time. format: yyyy-MM-dd HH:MM:ss.
                     * 
                     */
                    std::string GetStartTime() const;

                    /**
                     * 设置Starting Alarm time. format: yyyy-MM-dd HH:MM:ss.
                     * @param _startTime Starting Alarm time. format: yyyy-MM-dd HH:MM:ss.
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
                     * 获取Specifies the Alarm end time in the format yyyy-MM-dd HH:MM:ss.
                     * @return EndTime Specifies the Alarm end time in the format yyyy-MM-dd HH:MM:ss.
                     * 
                     */
                    std::string GetEndTime() const;

                    /**
                     * 设置Specifies the Alarm end time in the format yyyy-MM-dd HH:MM:ss.
                     * @param _endTime Specifies the Alarm end time in the format yyyy-MM-dd HH:MM:ss.
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
                     * 获取Alarm level.
                     * @return AlarmLevel Alarm level.
                     * 
                     */
                    uint64_t GetAlarmLevel() const;

                    /**
                     * 设置Alarm level.
                     * @param _alarmLevel Alarm level.
                     * 
                     */
                    void SetAlarmLevel(const uint64_t& _alarmLevel);

                    /**
                     * 判断参数 AlarmLevel 是否已赋值
                     * @return AlarmLevel 是否已赋值
                     * 
                     */
                    bool AlarmLevelHasBeenSet() const;

                    /**
                     * 获取Alert recipient Id.
                     * @return AlarmRecipientId Alert recipient Id.
                     * 
                     */
                    std::string GetAlarmRecipientId() const;

                    /**
                     * 设置Alert recipient Id.
                     * @param _alarmRecipientId Alert recipient Id.
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
                     * 获取For incoming and returned filter time zone, default UTC+8.
                     * @return TimeZone For incoming and returned filter time zone, default UTC+8.
                     * 
                     */
                    std::string GetTimeZone() const;

                    /**
                     * 设置For incoming and returned filter time zone, default UTC+8.
                     * @param _timeZone For incoming and returned filter time zone, default UTC+8.
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
                     * Project id.
                     */
                    std::string m_projectId;
                    bool m_projectIdHasBeenSet;

                    /**
                     * Page number for pagination, minimum value is 1.
                     */
                    uint64_t m_pageNumber;
                    bool m_pageNumberHasBeenSet;

                    /**
                     * Specifies the number of items displayed per page. maximum value: 100.
                     */
                    uint64_t m_pageSize;
                    bool m_pageSizeHasBeenSet;

                    /**
                     * Starting Alarm time. format: yyyy-MM-dd HH:MM:ss.
                     */
                    std::string m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * Specifies the Alarm end time in the format yyyy-MM-dd HH:MM:ss.
                     */
                    std::string m_endTime;
                    bool m_endTimeHasBeenSet;

                    /**
                     * Alarm level.
                     */
                    uint64_t m_alarmLevel;
                    bool m_alarmLevelHasBeenSet;

                    /**
                     * Alert recipient Id.
                     */
                    std::string m_alarmRecipientId;
                    bool m_alarmRecipientIdHasBeenSet;

                    /**
                     * For incoming and returned filter time zone, default UTC+8.
                     */
                    std::string m_timeZone;
                    bool m_timeZoneHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20250806_MODEL_LISTALARMMESSAGESREQUEST_H_
