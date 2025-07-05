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

#ifndef TENCENTCLOUD_CDN_V20180606_MODEL_DESCRIBEPURGETASKSREQUEST_H_
#define TENCENTCLOUD_CDN_V20180606_MODEL_DESCRIBEPURGETASKSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cdn
    {
        namespace V20180606
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
                     * 获取Specifies a purge type:
`url`: URL purge record
`path`: Directory purge record
                     * @return PurgeType Specifies a purge type:
`url`: URL purge record
`path`: Directory purge record
                     * 
                     */
                    std::string GetPurgeType() const;

                    /**
                     * 设置Specifies a purge type:
`url`: URL purge record
`path`: Directory purge record
                     * @param _purgeType Specifies a purge type:
`url`: URL purge record
`path`: Directory purge record
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
                     * 获取Specifies the starting time of the period you want to query, such as `2018-08-08 00:00:00`
                     * @return StartTime Specifies the starting time of the period you want to query, such as `2018-08-08 00:00:00`
                     * 
                     */
                    std::string GetStartTime() const;

                    /**
                     * 设置Specifies the starting time of the period you want to query, such as `2018-08-08 00:00:00`
                     * @param _startTime Specifies the starting time of the period you want to query, such as `2018-08-08 00:00:00`
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
                     * 获取Specifies the end time of the period you want to query, such as 2018-08-08 23:59:59
                     * @return EndTime Specifies the end time of the period you want to query, such as 2018-08-08 23:59:59
                     * 
                     */
                    std::string GetEndTime() const;

                    /**
                     * 设置Specifies the end time of the period you want to query, such as 2018-08-08 23:59:59
                     * @param _endTime Specifies the end time of the period you want to query, such as 2018-08-08 23:59:59
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
                     * 获取Specifies a task ID when you want to query by task ID.
You must specify either a task ID or a starting time for your query.
                     * @return TaskId Specifies a task ID when you want to query by task ID.
You must specify either a task ID or a starting time for your query.
                     * 
                     */
                    std::string GetTaskId() const;

                    /**
                     * 设置Specifies a task ID when you want to query by task ID.
You must specify either a task ID or a starting time for your query.
                     * @param _taskId Specifies a task ID when you want to query by task ID.
You must specify either a task ID or a starting time for your query.
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
                     * 获取Offset for paginated queries. Default value: 0
                     * @return Offset Offset for paginated queries. Default value: 0
                     * 
                     */
                    int64_t GetOffset() const;

                    /**
                     * 设置Offset for paginated queries. Default value: 0
                     * @param _offset Offset for paginated queries. Default value: 0
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
                     * 获取Limit on paginated queries. Default value: 20
                     * @return Limit Limit on paginated queries. Default value: 20
                     * 
                     */
                    int64_t GetLimit() const;

                    /**
                     * 设置Limit on paginated queries. Default value: 20
                     * @param _limit Limit on paginated queries. Default value: 20
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
                     * 获取You can filter the results by domain name or a complete URL beginning with `http(s)://`
                     * @return Keyword You can filter the results by domain name or a complete URL beginning with `http(s)://`
                     * 
                     */
                    std::string GetKeyword() const;

                    /**
                     * 设置You can filter the results by domain name or a complete URL beginning with `http(s)://`
                     * @param _keyword You can filter the results by domain name or a complete URL beginning with `http(s)://`
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
                     * 获取Specifies a task state for your query:
`fail`: purge failed
`done`: purge succeeded
`process`: purge in progress
                     * @return Status Specifies a task state for your query:
`fail`: purge failed
`done`: purge succeeded
`process`: purge in progress
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置Specifies a task state for your query:
`fail`: purge failed
`done`: purge succeeded
`process`: purge in progress
                     * @param _status Specifies a task state for your query:
`fail`: purge failed
`done`: purge succeeded
`process`: purge in progress
                     * 
                     */
                    void SetStatus(const std::string& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取Specifies a purge region for your query:
`mainland`: within Mainland China
`overseas`: outside Mainland China
`global`: global
                     * @return Area Specifies a purge region for your query:
`mainland`: within Mainland China
`overseas`: outside Mainland China
`global`: global
                     * 
                     */
                    std::string GetArea() const;

                    /**
                     * 设置Specifies a purge region for your query:
`mainland`: within Mainland China
`overseas`: outside Mainland China
`global`: global
                     * @param _area Specifies a purge region for your query:
`mainland`: within Mainland China
`overseas`: outside Mainland China
`global`: global
                     * 
                     */
                    void SetArea(const std::string& _area);

                    /**
                     * 判断参数 Area 是否已赋值
                     * @return Area 是否已赋值
                     * 
                     */
                    bool AreaHasBeenSet() const;

                private:

                    /**
                     * Specifies a purge type:
`url`: URL purge record
`path`: Directory purge record
                     */
                    std::string m_purgeType;
                    bool m_purgeTypeHasBeenSet;

                    /**
                     * Specifies the starting time of the period you want to query, such as `2018-08-08 00:00:00`
                     */
                    std::string m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * Specifies the end time of the period you want to query, such as 2018-08-08 23:59:59
                     */
                    std::string m_endTime;
                    bool m_endTimeHasBeenSet;

                    /**
                     * Specifies a task ID when you want to query by task ID.
You must specify either a task ID or a starting time for your query.
                     */
                    std::string m_taskId;
                    bool m_taskIdHasBeenSet;

                    /**
                     * Offset for paginated queries. Default value: 0
                     */
                    int64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * Limit on paginated queries. Default value: 20
                     */
                    int64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * You can filter the results by domain name or a complete URL beginning with `http(s)://`
                     */
                    std::string m_keyword;
                    bool m_keywordHasBeenSet;

                    /**
                     * Specifies a task state for your query:
`fail`: purge failed
`done`: purge succeeded
`process`: purge in progress
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * Specifies a purge region for your query:
`mainland`: within Mainland China
`overseas`: outside Mainland China
`global`: global
                     */
                    std::string m_area;
                    bool m_areaHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CDN_V20180606_MODEL_DESCRIBEPURGETASKSREQUEST_H_
