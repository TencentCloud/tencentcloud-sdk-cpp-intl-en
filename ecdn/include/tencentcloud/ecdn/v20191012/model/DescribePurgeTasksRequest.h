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

#ifndef TENCENTCLOUD_ECDN_V20191012_MODEL_DESCRIBEPURGETASKSREQUEST_H_
#define TENCENTCLOUD_ECDN_V20191012_MODEL_DESCRIBEPURGETASKSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Ecdn
    {
        namespace V20191012
        {
            namespace Model
            {
                /**
                * DescribePurgeTasks request structure.
                */
                class DescribePurgeTasksRequest : public AbstractModel
                {
                public:
                    DescribePurgeTasksRequest();
                    ~DescribePurgeTasksRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Purge type to be queried. url: query URL purge records; path: query directory purge records.
                     * @return PurgeType Purge type to be queried. url: query URL purge records; path: query directory purge records.
                     * 
                     */
                    std::string GetPurgeType() const;

                    /**
                     * 设置Purge type to be queried. url: query URL purge records; path: query directory purge records.
                     * @param _purgeType Purge type to be queried. url: query URL purge records; path: query directory purge records.
                     * 
                     */
                    void SetPurgeType(const std::string& _purgeType);

                    /**
                     * 判断参数 PurgeType 是否已赋值
                     * @return PurgeType 是否已赋值
                     * 
                     */
                    bool PurgeTypeHasBeenSet() const;

                    /**
                     * 获取Start time, such as 2018-08-08 00:00:00
                     * @return StartTime Start time, such as 2018-08-08 00:00:00
                     * 
                     */
                    std::string GetStartTime() const;

                    /**
                     * 设置Start time, such as 2018-08-08 00:00:00
                     * @param _startTime Start time, such as 2018-08-08 00:00:00
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
                     * 获取End time, such as 2018-08-08 23:59:59
                     * @return EndTime End time, such as 2018-08-08 23:59:59
                     * 
                     */
                    std::string GetEndTime() const;

                    /**
                     * 设置End time, such as 2018-08-08 23:59:59
                     * @param _endTime End time, such as 2018-08-08 23:59:59
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
                     * 获取Task ID returned during submission. Either `TaskId` or start time must be specified for a query.
                     * @return TaskId Task ID returned during submission. Either `TaskId` or start time must be specified for a query.
                     * 
                     */
                    std::string GetTaskId() const;

                    /**
                     * 设置Task ID returned during submission. Either `TaskId` or start time must be specified for a query.
                     * @param _taskId Task ID returned during submission. Either `TaskId` or start time must be specified for a query.
                     * 
                     */
                    void SetTaskId(const std::string& _taskId);

                    /**
                     * 判断参数 TaskId 是否已赋值
                     * @return TaskId 是否已赋值
                     * 
                     */
                    bool TaskIdHasBeenSet() const;

                    /**
                     * 获取Pagination offset. Default value: 0 (starting from entry 0).
                     * @return Offset Pagination offset. Default value: 0 (starting from entry 0).
                     * 
                     */
                    int64_t GetOffset() const;

                    /**
                     * 设置Pagination offset. Default value: 0 (starting from entry 0).
                     * @param _offset Pagination offset. Default value: 0 (starting from entry 0).
                     * 
                     */
                    void SetOffset(const int64_t& _offset);

                    /**
                     * 判断参数 Offset 是否已赋值
                     * @return Offset 是否已赋值
                     * 
                     */
                    bool OffsetHasBeenSet() const;

                    /**
                     * 获取Pagination limit. Default value: 20.
                     * @return Limit Pagination limit. Default value: 20.
                     * 
                     */
                    int64_t GetLimit() const;

                    /**
                     * 设置Pagination limit. Default value: 20.
                     * @param _limit Pagination limit. Default value: 20.
                     * 
                     */
                    void SetLimit(const int64_t& _limit);

                    /**
                     * 判断参数 Limit 是否已赋值
                     * @return Limit 是否已赋值
                     * 
                     */
                    bool LimitHasBeenSet() const;

                    /**
                     * 获取Query keyword. Please enter a domain name or full URL beginning with `http(s)://`.
                     * @return Keyword Query keyword. Please enter a domain name or full URL beginning with `http(s)://`.
                     * 
                     */
                    std::string GetKeyword() const;

                    /**
                     * 设置Query keyword. Please enter a domain name or full URL beginning with `http(s)://`.
                     * @param _keyword Query keyword. Please enter a domain name or full URL beginning with `http(s)://`.
                     * 
                     */
                    void SetKeyword(const std::string& _keyword);

                    /**
                     * 判断参数 Keyword 是否已赋值
                     * @return Keyword 是否已赋值
                     * 
                     */
                    bool KeywordHasBeenSet() const;

                    /**
                     * 获取Specified task status to be queried. fail: failed, done: succeeded, process: purging.
                     * @return Status Specified task status to be queried. fail: failed, done: succeeded, process: purging.
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置Specified task status to be queried. fail: failed, done: succeeded, process: purging.
                     * @param _status Specified task status to be queried. fail: failed, done: succeeded, process: purging.
                     * 
                     */
                    void SetStatus(const std::string& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                private:

                    /**
                     * Purge type to be queried. url: query URL purge records; path: query directory purge records.
                     */
                    std::string m_purgeType;
                    bool m_purgeTypeHasBeenSet;

                    /**
                     * Start time, such as 2018-08-08 00:00:00
                     */
                    std::string m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * End time, such as 2018-08-08 23:59:59
                     */
                    std::string m_endTime;
                    bool m_endTimeHasBeenSet;

                    /**
                     * Task ID returned during submission. Either `TaskId` or start time must be specified for a query.
                     */
                    std::string m_taskId;
                    bool m_taskIdHasBeenSet;

                    /**
                     * Pagination offset. Default value: 0 (starting from entry 0).
                     */
                    int64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * Pagination limit. Default value: 20.
                     */
                    int64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * Query keyword. Please enter a domain name or full URL beginning with `http(s)://`.
                     */
                    std::string m_keyword;
                    bool m_keywordHasBeenSet;

                    /**
                     * Specified task status to be queried. fail: failed, done: succeeded, process: purging.
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ECDN_V20191012_MODEL_DESCRIBEPURGETASKSREQUEST_H_
