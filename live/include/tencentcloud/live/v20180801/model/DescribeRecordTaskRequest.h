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

#ifndef TENCENTCLOUD_LIVE_V20180801_MODEL_DESCRIBERECORDTASKREQUEST_H_
#define TENCENTCLOUD_LIVE_V20180801_MODEL_DESCRIBERECORDTASKREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Live
    {
        namespace V20180801
        {
            namespace Model
            {
                /**
                * DescribeRecordTask request structure.
                */
                class DescribeRecordTaskRequest : public AbstractModel
                {
                public:
                    DescribeRecordTaskRequest();
                    ~DescribeRecordTaskRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取The start time of the tasks to retrieve in Unix timestamp. The time range should not be earlier than 90 days before the current time, and the query span should not exceed one week.
                     * @return StartTime The start time of the tasks to retrieve in Unix timestamp. The time range should not be earlier than 90 days before the current time, and the query span should not exceed one week.
                     * 
                     */
                    uint64_t GetStartTime() const;

                    /**
                     * 设置The start time of the tasks to retrieve in Unix timestamp. The time range should not be earlier than 90 days before the current time, and the query span should not exceed one week.
                     * @param _startTime The start time of the tasks to retrieve in Unix timestamp. The time range should not be earlier than 90 days before the current time, and the query span should not exceed one week.
                     * 
                     */
                    void SetStartTime(const uint64_t& _startTime);

                    /**
                     * 判断参数 StartTime 是否已赋值
                     * @return StartTime 是否已赋值
                     * 
                     */
                    bool StartTimeHasBeenSet() const;

                    /**
                     * 获取The end time of the tasks to retrieve in Unix timestamp. The EndTime must be greater than the StartTime. The time range should not be earlier than 90 days before the current time, and the query span should not exceed one week. (Note: the start and end times of the task must be within the query time range).
                     * @return EndTime The end time of the tasks to retrieve in Unix timestamp. The EndTime must be greater than the StartTime. The time range should not be earlier than 90 days before the current time, and the query span should not exceed one week. (Note: the start and end times of the task must be within the query time range).
                     * 
                     */
                    uint64_t GetEndTime() const;

                    /**
                     * 设置The end time of the tasks to retrieve in Unix timestamp. The EndTime must be greater than the StartTime. The time range should not be earlier than 90 days before the current time, and the query span should not exceed one week. (Note: the start and end times of the task must be within the query time range).
                     * @param _endTime The end time of the tasks to retrieve in Unix timestamp. The EndTime must be greater than the StartTime. The time range should not be earlier than 90 days before the current time, and the query span should not exceed one week. (Note: the start and end times of the task must be within the query time range).
                     * 
                     */
                    void SetEndTime(const uint64_t& _endTime);

                    /**
                     * 判断参数 EndTime 是否已赋值
                     * @return EndTime 是否已赋值
                     * 
                     */
                    bool EndTimeHasBeenSet() const;

                    /**
                     * 获取Stream name.
                     * @return StreamName Stream name.
                     * 
                     */
                    std::string GetStreamName() const;

                    /**
                     * 设置Stream name.
                     * @param _streamName Stream name.
                     * 
                     */
                    void SetStreamName(const std::string& _streamName);

                    /**
                     * 判断参数 StreamName 是否已赋值
                     * @return StreamName 是否已赋值
                     * 
                     */
                    bool StreamNameHasBeenSet() const;

                    /**
                     * 获取Push domain name.
                     * @return DomainName Push domain name.
                     * 
                     */
                    std::string GetDomainName() const;

                    /**
                     * 设置Push domain name.
                     * @param _domainName Push domain name.
                     * 
                     */
                    void SetDomainName(const std::string& _domainName);

                    /**
                     * 判断参数 DomainName 是否已赋值
                     * @return DomainName 是否已赋值
                     * 
                     */
                    bool DomainNameHasBeenSet() const;

                    /**
                     * 获取Push path.
                     * @return AppName Push path.
                     * 
                     */
                    std::string GetAppName() const;

                    /**
                     * 设置Push path.
                     * @param _appName Push path.
                     * 
                     */
                    void SetAppName(const std::string& _appName);

                    /**
                     * 判断参数 AppName 是否已赋值
                     * @return AppName 是否已赋值
                     * 
                     */
                    bool AppNameHasBeenSet() const;

                    /**
                     * 获取Page token used for batch retrieval: If a single request cannot retrieve all data, the interface will return a ScrollToken. The next request carrying this token will start retrieving from the next record.
                     * @return ScrollToken Page token used for batch retrieval: If a single request cannot retrieve all data, the interface will return a ScrollToken. The next request carrying this token will start retrieving from the next record.
                     * 
                     */
                    std::string GetScrollToken() const;

                    /**
                     * 设置Page token used for batch retrieval: If a single request cannot retrieve all data, the interface will return a ScrollToken. The next request carrying this token will start retrieving from the next record.
                     * @param _scrollToken Page token used for batch retrieval: If a single request cannot retrieve all data, the interface will return a ScrollToken. The next request carrying this token will start retrieving from the next record.
                     * 
                     */
                    void SetScrollToken(const std::string& _scrollToken);

                    /**
                     * 判断参数 ScrollToken 是否已赋值
                     * @return ScrollToken 是否已赋值
                     * 
                     */
                    bool ScrollTokenHasBeenSet() const;

                private:

                    /**
                     * The start time of the tasks to retrieve in Unix timestamp. The time range should not be earlier than 90 days before the current time, and the query span should not exceed one week.
                     */
                    uint64_t m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * The end time of the tasks to retrieve in Unix timestamp. The EndTime must be greater than the StartTime. The time range should not be earlier than 90 days before the current time, and the query span should not exceed one week. (Note: the start and end times of the task must be within the query time range).
                     */
                    uint64_t m_endTime;
                    bool m_endTimeHasBeenSet;

                    /**
                     * Stream name.
                     */
                    std::string m_streamName;
                    bool m_streamNameHasBeenSet;

                    /**
                     * Push domain name.
                     */
                    std::string m_domainName;
                    bool m_domainNameHasBeenSet;

                    /**
                     * Push path.
                     */
                    std::string m_appName;
                    bool m_appNameHasBeenSet;

                    /**
                     * Page token used for batch retrieval: If a single request cannot retrieve all data, the interface will return a ScrollToken. The next request carrying this token will start retrieving from the next record.
                     */
                    std::string m_scrollToken;
                    bool m_scrollTokenHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_LIVE_V20180801_MODEL_DESCRIBERECORDTASKREQUEST_H_
