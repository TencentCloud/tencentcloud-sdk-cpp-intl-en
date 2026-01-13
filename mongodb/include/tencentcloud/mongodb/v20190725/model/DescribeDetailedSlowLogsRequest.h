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

#ifndef TENCENTCLOUD_MONGODB_V20190725_MODEL_DESCRIBEDETAILEDSLOWLOGSREQUEST_H_
#define TENCENTCLOUD_MONGODB_V20190725_MODEL_DESCRIBEDETAILEDSLOWLOGSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Mongodb
    {
        namespace V20190725
        {
            namespace Model
            {
                /**
                * DescribeDetailedSlowLogs request structure.
                */
                class DescribeDetailedSlowLogsRequest : public AbstractModel
                {
                public:
                    DescribeDetailedSlowLogsRequest();
                    ~DescribeDetailedSlowLogsRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Instance ID. Log in to the [TencentDB for MongoDB console](https://console.cloud.tencent.com/mongodb), and copy the instance ID from the instance list.
                     * @return InstanceId Instance ID. Log in to the [TencentDB for MongoDB console](https://console.cloud.tencent.com/mongodb), and copy the instance ID from the instance list.
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置Instance ID. Log in to the [TencentDB for MongoDB console](https://console.cloud.tencent.com/mongodb), and copy the instance ID from the instance list.
                     * @param _instanceId Instance ID. Log in to the [TencentDB for MongoDB console](https://console.cloud.tencent.com/mongodb), and copy the instance ID from the instance list.
                     * 
                     */
                    void SetInstanceId(const std::string& _instanceId);

                    /**
                     * 判断参数 InstanceId 是否已赋值
                     * @return InstanceId 是否已赋值
                     * 
                     */
                    bool InstanceIdHasBeenSet() const;

                    /**
                     * 获取Specifies the start time for querying slow logs. - Format: yyyy-mm-dd hh:mm:ss. For example, 2019-06-01 10:00:00. - The query start and end time interval cannot exceed 24 hours. Only slow logs within the last 7 days can be queried.
                     * @return StartTime Specifies the start time for querying slow logs. - Format: yyyy-mm-dd hh:mm:ss. For example, 2019-06-01 10:00:00. - The query start and end time interval cannot exceed 24 hours. Only slow logs within the last 7 days can be queried.
                     * 
                     */
                    std::string GetStartTime() const;

                    /**
                     * 设置Specifies the start time for querying slow logs. - Format: yyyy-mm-dd hh:mm:ss. For example, 2019-06-01 10:00:00. - The query start and end time interval cannot exceed 24 hours. Only slow logs within the last 7 days can be queried.
                     * @param _startTime Specifies the start time for querying slow logs. - Format: yyyy-mm-dd hh:mm:ss. For example, 2019-06-01 10:00:00. - The query start and end time interval cannot exceed 24 hours. Only slow logs within the last 7 days can be queried.
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
                     * 获取Specifies the end time for querying slow logs.
- Format: yyyy-mm-dd hh:mm:ss. For example, 2019-06-02 12:00:00.
- The query start and end time interval cannot exceed 24 hours. Only slow logs within the last 7 days can be queried.
                     * @return EndTime Specifies the end time for querying slow logs.
- Format: yyyy-mm-dd hh:mm:ss. For example, 2019-06-02 12:00:00.
- The query start and end time interval cannot exceed 24 hours. Only slow logs within the last 7 days can be queried.
                     * 
                     */
                    std::string GetEndTime() const;

                    /**
                     * 设置Specifies the end time for querying slow logs.
- Format: yyyy-mm-dd hh:mm:ss. For example, 2019-06-02 12:00:00.
- The query start and end time interval cannot exceed 24 hours. Only slow logs within the last 7 days can be queried.
                     * @param _endTime Specifies the end time for querying slow logs.
- Format: yyyy-mm-dd hh:mm:ss. For example, 2019-06-02 12:00:00.
- The query start and end time interval cannot exceed 24 hours. Only slow logs within the last 7 days can be queried.
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
                     * 获取Specifies the threshold for querying slow logs, in milliseconds. It indicates that the execution time of the slow log query exceeds this value. The default value is 100.
                     * @return ExecTime Specifies the threshold for querying slow logs, in milliseconds. It indicates that the execution time of the slow log query exceeds this value. The default value is 100.
                     * 
                     */
                    int64_t GetExecTime() const;

                    /**
                     * 设置Specifies the threshold for querying slow logs, in milliseconds. It indicates that the execution time of the slow log query exceeds this value. The default value is 100.
                     * @param _execTime Specifies the threshold for querying slow logs, in milliseconds. It indicates that the execution time of the slow log query exceeds this value. The default value is 100.
                     * 
                     */
                    void SetExecTime(const int64_t& _execTime);

                    /**
                     * 判断参数 ExecTime 是否已赋值
                     * @return ExecTime 是否已赋值
                     * 
                     */
                    bool ExecTimeHasBeenSet() const;

                    /**
                     * 获取Specifies the command type for querying slow logs.
                     * @return Commands Specifies the command type for querying slow logs.
                     * 
                     */
                    std::vector<std::string> GetCommands() const;

                    /**
                     * 设置Specifies the command type for querying slow logs.
                     * @param _commands Specifies the command type for querying slow logs.
                     * 
                     */
                    void SetCommands(const std::vector<std::string>& _commands);

                    /**
                     * 判断参数 Commands 是否已赋值
                     * @return Commands 是否已赋值
                     * 
                     */
                    bool CommandsHasBeenSet() const;

                    /**
                     * 获取Full-text search keyword. The logical operator among multiple keywords is OR.
                     * @return Texts Full-text search keyword. The logical operator among multiple keywords is OR.
                     * 
                     */
                    std::vector<std::string> GetTexts() const;

                    /**
                     * 设置Full-text search keyword. The logical operator among multiple keywords is OR.
                     * @param _texts Full-text search keyword. The logical operator among multiple keywords is OR.
                     * 
                     */
                    void SetTexts(const std::vector<std::string>& _texts);

                    /**
                     * 判断参数 Texts 是否已赋值
                     * @return Texts 是否已赋值
                     * 
                     */
                    bool TextsHasBeenSet() const;

                    /**
                     * 获取Specifies the node name for querying slow logs. The [DescribeDBInstanceNodeProperty](https://www.tencentcloud.com/document/product/240/82022?from_cn_redirect=1) API can be called to query the node name.
                     * @return NodeNames Specifies the node name for querying slow logs. The [DescribeDBInstanceNodeProperty](https://www.tencentcloud.com/document/product/240/82022?from_cn_redirect=1) API can be called to query the node name.
                     * 
                     */
                    std::vector<std::string> GetNodeNames() const;

                    /**
                     * 设置Specifies the node name for querying slow logs. The [DescribeDBInstanceNodeProperty](https://www.tencentcloud.com/document/product/240/82022?from_cn_redirect=1) API can be called to query the node name.
                     * @param _nodeNames Specifies the node name for querying slow logs. The [DescribeDBInstanceNodeProperty](https://www.tencentcloud.com/document/product/240/82022?from_cn_redirect=1) API can be called to query the node name.
                     * 
                     */
                    void SetNodeNames(const std::vector<std::string>& _nodeNames);

                    /**
                     * 判断参数 NodeNames 是否已赋值
                     * @return NodeNames 是否已赋值
                     * 
                     */
                    bool NodeNamesHasBeenSet() const;

                    /**
                     * 获取Specifies the queryHash value to be queried.
                     * @return QueryHash Specifies the queryHash value to be queried.
                     * 
                     */
                    std::vector<std::string> GetQueryHash() const;

                    /**
                     * 设置Specifies the queryHash value to be queried.
                     * @param _queryHash Specifies the queryHash value to be queried.
                     * 
                     */
                    void SetQueryHash(const std::vector<std::string>& _queryHash);

                    /**
                     * 判断参数 QueryHash 是否已赋值
                     * @return QueryHash 是否已赋值
                     * 
                     */
                    bool QueryHashHasBeenSet() const;

                    /**
                     * 获取Pagination offset. The default value is 0, and the value range is [0, 100].

                     * @return Offset Pagination offset. The default value is 0, and the value range is [0, 100].

                     * 
                     */
                    int64_t GetOffset() const;

                    /**
                     * 设置Pagination offset. The default value is 0, and the value range is [0, 100].

                     * @param _offset Pagination offset. The default value is 0, and the value range is [0, 100].

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
                     * 获取Number of returned entries. The default value is 20, and the value range is [0, 10000].
                     * @return Limit Number of returned entries. The default value is 20, and the value range is [0, 10000].
                     * 
                     */
                    int64_t GetLimit() const;

                    /**
                     * 设置Number of returned entries. The default value is 20, and the value range is [0, 10000].
                     * @param _limit Number of returned entries. The default value is 20, and the value range is [0, 10000].
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
                     * 获取Specifies the sorting condition for slow logs.
- StartTime: sort by the generation time of slow logs.
- ExecTime: sort by the execution time of slow logs.
                     * @return OrderBy Specifies the sorting condition for slow logs.
- StartTime: sort by the generation time of slow logs.
- ExecTime: sort by the execution time of slow logs.
                     * 
                     */
                    std::string GetOrderBy() const;

                    /**
                     * 设置Specifies the sorting condition for slow logs.
- StartTime: sort by the generation time of slow logs.
- ExecTime: sort by the execution time of slow logs.
                     * @param _orderBy Specifies the sorting condition for slow logs.
- StartTime: sort by the generation time of slow logs.
- ExecTime: sort by the execution time of slow logs.
                     * 
                     */
                    void SetOrderBy(const std::string& _orderBy);

                    /**
                     * 判断参数 OrderBy 是否已赋值
                     * @return OrderBy 是否已赋值
                     * 
                     */
                    bool OrderByHasBeenSet() const;

                    /**
                     * 获取Specifies the sorting method.
- desc: descending order.
- asc: ascending order.
                     * @return OrderByType Specifies the sorting method.
- desc: descending order.
- asc: ascending order.
                     * 
                     */
                    std::string GetOrderByType() const;

                    /**
                     * 设置Specifies the sorting method.
- desc: descending order.
- asc: ascending order.
                     * @param _orderByType Specifies the sorting method.
- desc: descending order.
- asc: ascending order.
                     * 
                     */
                    void SetOrderByType(const std::string& _orderByType);

                    /**
                     * 判断参数 OrderByType 是否已赋值
                     * @return OrderByType 是否已赋值
                     * 
                     */
                    bool OrderByTypeHasBeenSet() const;

                private:

                    /**
                     * Instance ID. Log in to the [TencentDB for MongoDB console](https://console.cloud.tencent.com/mongodb), and copy the instance ID from the instance list.
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * Specifies the start time for querying slow logs. - Format: yyyy-mm-dd hh:mm:ss. For example, 2019-06-01 10:00:00. - The query start and end time interval cannot exceed 24 hours. Only slow logs within the last 7 days can be queried.
                     */
                    std::string m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * Specifies the end time for querying slow logs.
- Format: yyyy-mm-dd hh:mm:ss. For example, 2019-06-02 12:00:00.
- The query start and end time interval cannot exceed 24 hours. Only slow logs within the last 7 days can be queried.
                     */
                    std::string m_endTime;
                    bool m_endTimeHasBeenSet;

                    /**
                     * Specifies the threshold for querying slow logs, in milliseconds. It indicates that the execution time of the slow log query exceeds this value. The default value is 100.
                     */
                    int64_t m_execTime;
                    bool m_execTimeHasBeenSet;

                    /**
                     * Specifies the command type for querying slow logs.
                     */
                    std::vector<std::string> m_commands;
                    bool m_commandsHasBeenSet;

                    /**
                     * Full-text search keyword. The logical operator among multiple keywords is OR.
                     */
                    std::vector<std::string> m_texts;
                    bool m_textsHasBeenSet;

                    /**
                     * Specifies the node name for querying slow logs. The [DescribeDBInstanceNodeProperty](https://www.tencentcloud.com/document/product/240/82022?from_cn_redirect=1) API can be called to query the node name.
                     */
                    std::vector<std::string> m_nodeNames;
                    bool m_nodeNamesHasBeenSet;

                    /**
                     * Specifies the queryHash value to be queried.
                     */
                    std::vector<std::string> m_queryHash;
                    bool m_queryHashHasBeenSet;

                    /**
                     * Pagination offset. The default value is 0, and the value range is [0, 100].

                     */
                    int64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * Number of returned entries. The default value is 20, and the value range is [0, 10000].
                     */
                    int64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * Specifies the sorting condition for slow logs.
- StartTime: sort by the generation time of slow logs.
- ExecTime: sort by the execution time of slow logs.
                     */
                    std::string m_orderBy;
                    bool m_orderByHasBeenSet;

                    /**
                     * Specifies the sorting method.
- desc: descending order.
- asc: ascending order.
                     */
                    std::string m_orderByType;
                    bool m_orderByTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MONGODB_V20190725_MODEL_DESCRIBEDETAILEDSLOWLOGSREQUEST_H_
