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

#ifndef TENCENTCLOUD_ES_V20180416_MODEL_DESCRIBEINSTANCELOGSREQUEST_H_
#define TENCENTCLOUD_ES_V20180416_MODEL_DESCRIBEINSTANCELOGSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Es
    {
        namespace V20180416
        {
            namespace Model
            {
                /**
                * DescribeInstanceLogs request structure.
                */
                class DescribeInstanceLogsRequest : public AbstractModel
                {
                public:
                    DescribeInstanceLogsRequest();
                    ~DescribeInstanceLogsRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Cluster instance ID
                     * @return InstanceId Cluster instance ID
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置Cluster instance ID
                     * @param InstanceId Cluster instance ID
                     */
                    void SetInstanceId(const std::string& _instanceId);

                    /**
                     * 判断参数 InstanceId 是否已赋值
                     * @return InstanceId 是否已赋值
                     */
                    bool InstanceIdHasBeenSet() const;

                    /**
                     * 获取Log type. Default value: 1
<li>1: primary log</li>
<li>2: search slow log</li>
<li>3: index slow log</li>
<li>4: GC log</li>
                     * @return LogType Log type. Default value: 1
<li>1: primary log</li>
<li>2: search slow log</li>
<li>3: index slow log</li>
<li>4: GC log</li>
                     */
                    uint64_t GetLogType() const;

                    /**
                     * 设置Log type. Default value: 1
<li>1: primary log</li>
<li>2: search slow log</li>
<li>3: index slow log</li>
<li>4: GC log</li>
                     * @param LogType Log type. Default value: 1
<li>1: primary log</li>
<li>2: search slow log</li>
<li>3: index slow log</li>
<li>4: GC log</li>
                     */
                    void SetLogType(const uint64_t& _logType);

                    /**
                     * 判断参数 LogType 是否已赋值
                     * @return LogType 是否已赋值
                     */
                    bool LogTypeHasBeenSet() const;

                    /**
                     * 获取Search keyword, which supports LUCENE syntax, such as `level:WARN`, `ip:1.1.1.1`, and `message:test-index`
                     * @return SearchKey Search keyword, which supports LUCENE syntax, such as `level:WARN`, `ip:1.1.1.1`, and `message:test-index`
                     */
                    std::string GetSearchKey() const;

                    /**
                     * 设置Search keyword, which supports LUCENE syntax, such as `level:WARN`, `ip:1.1.1.1`, and `message:test-index`
                     * @param SearchKey Search keyword, which supports LUCENE syntax, such as `level:WARN`, `ip:1.1.1.1`, and `message:test-index`
                     */
                    void SetSearchKey(const std::string& _searchKey);

                    /**
                     * 判断参数 SearchKey 是否已赋值
                     * @return SearchKey 是否已赋值
                     */
                    bool SearchKeyHasBeenSet() const;

                    /**
                     * 获取Log start time in the format of YYYY-MM-DD HH:MM:SS, such as 2019-01-22 20:15:53
                     * @return StartTime Log start time in the format of YYYY-MM-DD HH:MM:SS, such as 2019-01-22 20:15:53
                     */
                    std::string GetStartTime() const;

                    /**
                     * 设置Log start time in the format of YYYY-MM-DD HH:MM:SS, such as 2019-01-22 20:15:53
                     * @param StartTime Log start time in the format of YYYY-MM-DD HH:MM:SS, such as 2019-01-22 20:15:53
                     */
                    void SetStartTime(const std::string& _startTime);

                    /**
                     * 判断参数 StartTime 是否已赋值
                     * @return StartTime 是否已赋值
                     */
                    bool StartTimeHasBeenSet() const;

                    /**
                     * 获取Log end time in the format of YYYY-MM-DD HH:MM:SS, such as 2019-01-22 20:15:53
                     * @return EndTime Log end time in the format of YYYY-MM-DD HH:MM:SS, such as 2019-01-22 20:15:53
                     */
                    std::string GetEndTime() const;

                    /**
                     * 设置Log end time in the format of YYYY-MM-DD HH:MM:SS, such as 2019-01-22 20:15:53
                     * @param EndTime Log end time in the format of YYYY-MM-DD HH:MM:SS, such as 2019-01-22 20:15:53
                     */
                    void SetEndTime(const std::string& _endTime);

                    /**
                     * 判断参数 EndTime 是否已赋值
                     * @return EndTime 是否已赋值
                     */
                    bool EndTimeHasBeenSet() const;

                    /**
                     * 获取Pagination start value. Default value: 0
                     * @return Offset Pagination start value. Default value: 0
                     */
                    uint64_t GetOffset() const;

                    /**
                     * 设置Pagination start value. Default value: 0
                     * @param Offset Pagination start value. Default value: 0
                     */
                    void SetOffset(const uint64_t& _offset);

                    /**
                     * 判断参数 Offset 是否已赋值
                     * @return Offset 是否已赋值
                     */
                    bool OffsetHasBeenSet() const;

                    /**
                     * 获取Number of entries per page. Default value: 100. Maximum value: 100
                     * @return Limit Number of entries per page. Default value: 100. Maximum value: 100
                     */
                    uint64_t GetLimit() const;

                    /**
                     * 设置Number of entries per page. Default value: 100. Maximum value: 100
                     * @param Limit Number of entries per page. Default value: 100. Maximum value: 100
                     */
                    void SetLimit(const uint64_t& _limit);

                    /**
                     * 判断参数 Limit 是否已赋值
                     * @return Limit 是否已赋值
                     */
                    bool LimitHasBeenSet() const;

                    /**
                     * 获取Time sorting order. Default value: 0
<li>0: descending</li>
<li>1: ascending</li>
                     * @return OrderByType Time sorting order. Default value: 0
<li>0: descending</li>
<li>1: ascending</li>
                     */
                    uint64_t GetOrderByType() const;

                    /**
                     * 设置Time sorting order. Default value: 0
<li>0: descending</li>
<li>1: ascending</li>
                     * @param OrderByType Time sorting order. Default value: 0
<li>0: descending</li>
<li>1: ascending</li>
                     */
                    void SetOrderByType(const uint64_t& _orderByType);

                    /**
                     * 判断参数 OrderByType 是否已赋值
                     * @return OrderByType 是否已赋值
                     */
                    bool OrderByTypeHasBeenSet() const;

                private:

                    /**
                     * Cluster instance ID
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * Log type. Default value: 1
<li>1: primary log</li>
<li>2: search slow log</li>
<li>3: index slow log</li>
<li>4: GC log</li>
                     */
                    uint64_t m_logType;
                    bool m_logTypeHasBeenSet;

                    /**
                     * Search keyword, which supports LUCENE syntax, such as `level:WARN`, `ip:1.1.1.1`, and `message:test-index`
                     */
                    std::string m_searchKey;
                    bool m_searchKeyHasBeenSet;

                    /**
                     * Log start time in the format of YYYY-MM-DD HH:MM:SS, such as 2019-01-22 20:15:53
                     */
                    std::string m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * Log end time in the format of YYYY-MM-DD HH:MM:SS, such as 2019-01-22 20:15:53
                     */
                    std::string m_endTime;
                    bool m_endTimeHasBeenSet;

                    /**
                     * Pagination start value. Default value: 0
                     */
                    uint64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * Number of entries per page. Default value: 100. Maximum value: 100
                     */
                    uint64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * Time sorting order. Default value: 0
<li>0: descending</li>
<li>1: ascending</li>
                     */
                    uint64_t m_orderByType;
                    bool m_orderByTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ES_V20180416_MODEL_DESCRIBEINSTANCELOGSREQUEST_H_
