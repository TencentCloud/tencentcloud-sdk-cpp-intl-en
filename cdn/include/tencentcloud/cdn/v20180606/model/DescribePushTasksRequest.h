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

#ifndef TENCENTCLOUD_CDN_V20180606_MODEL_DESCRIBEPUSHTASKSREQUEST_H_
#define TENCENTCLOUD_CDN_V20180606_MODEL_DESCRIBEPUSHTASKSREQUEST_H_

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
                * DescribePushTasks request structure.
                */
                class DescribePushTasksRequest : public AbstractModel
                {
                public:
                    DescribePushTasksRequest();
                    ~DescribePushTasksRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Starting time, such as `2018-08-08 00:00:00`
                     * @return StartTime Starting time, such as `2018-08-08 00:00:00`
                     */
                    std::string GetStartTime() const;

                    /**
                     * 设置Starting time, such as `2018-08-08 00:00:00`
                     * @param StartTime Starting time, such as `2018-08-08 00:00:00`
                     */
                    void SetStartTime(const std::string& _startTime);

                    /**
                     * 判断参数 StartTime 是否已赋值
                     * @return StartTime 是否已赋值
                     */
                    bool StartTimeHasBeenSet() const;

                    /**
                     * 获取End time, such as `2018-08-08 23:59:59`
                     * @return EndTime End time, such as `2018-08-08 23:59:59`
                     */
                    std::string GetEndTime() const;

                    /**
                     * 设置End time, such as `2018-08-08 23:59:59`
                     * @param EndTime End time, such as `2018-08-08 23:59:59`
                     */
                    void SetEndTime(const std::string& _endTime);

                    /**
                     * 判断参数 EndTime 是否已赋值
                     * @return EndTime 是否已赋值
                     */
                    bool EndTimeHasBeenSet() const;

                    /**
                     * 获取Specifies a task ID for your query.
You must specify either a task ID or a starting time.
                     * @return TaskId Specifies a task ID for your query.
You must specify either a task ID or a starting time.
                     */
                    std::string GetTaskId() const;

                    /**
                     * 设置Specifies a task ID for your query.
You must specify either a task ID or a starting time.
                     * @param TaskId Specifies a task ID for your query.
You must specify either a task ID or a starting time.
                     */
                    void SetTaskId(const std::string& _taskId);

                    /**
                     * 判断参数 TaskId 是否已赋值
                     * @return TaskId 是否已赋值
                     */
                    bool TaskIdHasBeenSet() const;

                    /**
                     * 获取Specifies a keyword for your query. Please enter a domain name or a complete URL beginning with `http(s)://`
                     * @return Keyword Specifies a keyword for your query. Please enter a domain name or a complete URL beginning with `http(s)://`
                     */
                    std::string GetKeyword() const;

                    /**
                     * 设置Specifies a keyword for your query. Please enter a domain name or a complete URL beginning with `http(s)://`
                     * @param Keyword Specifies a keyword for your query. Please enter a domain name or a complete URL beginning with `http(s)://`
                     */
                    void SetKeyword(const std::string& _keyword);

                    /**
                     * 判断参数 Keyword 是否已赋值
                     * @return Keyword 是否已赋值
                     */
                    bool KeywordHasBeenSet() const;

                    /**
                     * 获取Offset for paginated queries. Default value: 0
                     * @return Offset Offset for paginated queries. Default value: 0
                     */
                    int64_t GetOffset() const;

                    /**
                     * 设置Offset for paginated queries. Default value: 0
                     * @param Offset Offset for paginated queries. Default value: 0
                     */
                    void SetOffset(const int64_t& _offset);

                    /**
                     * 判断参数 Offset 是否已赋值
                     * @return Offset 是否已赋值
                     */
                    bool OffsetHasBeenSet() const;

                    /**
                     * 获取Limit on paginated queries. Default value: 20
                     * @return Limit Limit on paginated queries. Default value: 20
                     */
                    int64_t GetLimit() const;

                    /**
                     * 设置Limit on paginated queries. Default value: 20
                     * @param Limit Limit on paginated queries. Default value: 20
                     */
                    void SetLimit(const int64_t& _limit);

                    /**
                     * 判断参数 Limit 是否已赋值
                     * @return Limit 是否已赋值
                     */
                    bool LimitHasBeenSet() const;

                    /**
                     * 获取Specifies a region for your query:
`mainland`: Chinese mainland
`overseas`: Outside the Chinese mainland
`global`: Globe
                     * @return Area Specifies a region for your query:
`mainland`: Chinese mainland
`overseas`: Outside the Chinese mainland
`global`: Globe
                     */
                    std::string GetArea() const;

                    /**
                     * 设置Specifies a region for your query:
`mainland`: Chinese mainland
`overseas`: Outside the Chinese mainland
`global`: Globe
                     * @param Area Specifies a region for your query:
`mainland`: Chinese mainland
`overseas`: Outside the Chinese mainland
`global`: Globe
                     */
                    void SetArea(const std::string& _area);

                    /**
                     * 判断参数 Area 是否已赋值
                     * @return Area 是否已赋值
                     */
                    bool AreaHasBeenSet() const;

                    /**
                     * 获取Queries the status of a specified task
`fail`: Prefetch failed
`done`: Prefetch succeeded
`process`: Prefetch in progress
`invalid`: Invalid prefetch with 4XX/5XX status code returned from the origin server
                     * @return Status Queries the status of a specified task
`fail`: Prefetch failed
`done`: Prefetch succeeded
`process`: Prefetch in progress
`invalid`: Invalid prefetch with 4XX/5XX status code returned from the origin server
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置Queries the status of a specified task
`fail`: Prefetch failed
`done`: Prefetch succeeded
`process`: Prefetch in progress
`invalid`: Invalid prefetch with 4XX/5XX status code returned from the origin server
                     * @param Status Queries the status of a specified task
`fail`: Prefetch failed
`done`: Prefetch succeeded
`process`: Prefetch in progress
`invalid`: Invalid prefetch with 4XX/5XX status code returned from the origin server
                     */
                    void SetStatus(const std::string& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     */
                    bool StatusHasBeenSet() const;

                private:

                    /**
                     * Starting time, such as `2018-08-08 00:00:00`
                     */
                    std::string m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * End time, such as `2018-08-08 23:59:59`
                     */
                    std::string m_endTime;
                    bool m_endTimeHasBeenSet;

                    /**
                     * Specifies a task ID for your query.
You must specify either a task ID or a starting time.
                     */
                    std::string m_taskId;
                    bool m_taskIdHasBeenSet;

                    /**
                     * Specifies a keyword for your query. Please enter a domain name or a complete URL beginning with `http(s)://`
                     */
                    std::string m_keyword;
                    bool m_keywordHasBeenSet;

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
                     * Specifies a region for your query:
`mainland`: Chinese mainland
`overseas`: Outside the Chinese mainland
`global`: Globe
                     */
                    std::string m_area;
                    bool m_areaHasBeenSet;

                    /**
                     * Queries the status of a specified task
`fail`: Prefetch failed
`done`: Prefetch succeeded
`process`: Prefetch in progress
`invalid`: Invalid prefetch with 4XX/5XX status code returned from the origin server
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CDN_V20180606_MODEL_DESCRIBEPUSHTASKSREQUEST_H_
