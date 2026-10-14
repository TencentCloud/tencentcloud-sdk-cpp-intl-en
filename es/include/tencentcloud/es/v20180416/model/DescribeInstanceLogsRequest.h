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
                     * 获取Cluster instance ID.
                     * @return InstanceId Cluster instance ID.
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置Cluster instance ID.
                     * @param _instanceId Cluster instance ID.
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
                     * 获取Log type. Default value: 1.
<li>1, master log</li>
<li>2. Search slow logs</li>
<li>3. Index slow log</li>
<li>4. GC log</li>
                     * @return LogType Log type. Default value: 1.
<li>1, master log</li>
<li>2. Search slow logs</li>
<li>3. Index slow log</li>
<li>4. GC log</li>
                     * 
                     */
                    uint64_t GetLogType() const;

                    /**
                     * 设置Log type. Default value: 1.
<li>1, master log</li>
<li>2. Search slow logs</li>
<li>3. Index slow log</li>
<li>4. GC log</li>
                     * @param _logType Log type. Default value: 1.
<li>1, master log</li>
<li>2. Search slow logs</li>
<li>3. Index slow log</li>
<li>4. GC log</li>
                     * 
                     */
                    void SetLogType(const uint64_t& _logType);

                    /**
                     * 判断参数 LogType 是否已赋值
                     * @return LogType 是否已赋值
                     * 
                     */
                    bool LogTypeHasBeenSet() const;

                    /**
                     * 获取Search term. LUCENE grammar is supported, for example, level:WARN, ip:1.1.1.1, message:test-index
                     * @return SearchKey Search term. LUCENE grammar is supported, for example, level:WARN, ip:1.1.1.1, message:test-index
                     * 
                     */
                    std::string GetSearchKey() const;

                    /**
                     * 设置Search term. LUCENE grammar is supported, for example, level:WARN, ip:1.1.1.1, message:test-index
                     * @param _searchKey Search term. LUCENE grammar is supported, for example, level:WARN, ip:1.1.1.1, message:test-index
                     * 
                     */
                    void SetSearchKey(const std::string& _searchKey);

                    /**
                     * 判断参数 SearchKey 是否已赋值
                     * @return SearchKey 是否已赋值
                     * 
                     */
                    bool SearchKeyHasBeenSet() const;

                    /**
                     * 获取Log start time in the format of YYYY-MM-DD HH:MM:SS, for example, 2019-01-22 20:15:53
                     * @return StartTime Log start time in the format of YYYY-MM-DD HH:MM:SS, for example, 2019-01-22 20:15:53
                     * 
                     */
                    std::string GetStartTime() const;

                    /**
                     * 设置Log start time in the format of YYYY-MM-DD HH:MM:SS, for example, 2019-01-22 20:15:53
                     * @param _startTime Log start time in the format of YYYY-MM-DD HH:MM:SS, for example, 2019-01-22 20:15:53
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
                     * 获取Log end time in the format of YYYY-MM-DD HH:MM:SS, for example, 2019-01-22 20:15:53
                     * @return EndTime Log end time in the format of YYYY-MM-DD HH:MM:SS, for example, 2019-01-22 20:15:53
                     * 
                     */
                    std::string GetEndTime() const;

                    /**
                     * 设置Log end time in the format of YYYY-MM-DD HH:MM:SS, for example, 2019-01-22 20:15:53
                     * @param _endTime Log end time in the format of YYYY-MM-DD HH:MM:SS, for example, 2019-01-22 20:15:53
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
                     * 获取Pagination starting value. Default value: 0.
                     * @return Offset Pagination starting value. Default value: 0.
                     * 
                     */
                    uint64_t GetOffset() const;

                    /**
                     * 设置Pagination starting value. Default value: 0.
                     * @param _offset Pagination starting value. Default value: 0.
                     * 
                     */
                    void SetOffset(const uint64_t& _offset);

                    /**
                     * 判断参数 Offset 是否已赋值
                     * @return Offset 是否已赋值
                     * 
                     */
                    bool OffsetHasBeenSet() const;

                    /**
                     * 获取Pagination size. Default value: 100. Maximum value: 100.
                     * @return Limit Pagination size. Default value: 100. Maximum value: 100.
                     * 
                     */
                    uint64_t GetLimit() const;

                    /**
                     * 设置Pagination size. Default value: 100. Maximum value: 100.
                     * @param _limit Pagination size. Default value: 100. Maximum value: 100.
                     * 
                     */
                    void SetLimit(const uint64_t& _limit);

                    /**
                     * 判断参数 Limit 是否已赋值
                     * @return Limit 是否已赋值
                     * 
                     */
                    bool LimitHasBeenSet() const;

                    /**
                     * 获取Time sort method. Default value: 0.
<li>0: descending order</li>
<li>1, ascending</li>
                     * @return OrderByType Time sort method. Default value: 0.
<li>0: descending order</li>
<li>1, ascending</li>
                     * 
                     */
                    uint64_t GetOrderByType() const;

                    /**
                     * 设置Time sort method. Default value: 0.
<li>0: descending order</li>
<li>1, ascending</li>
                     * @param _orderByType Time sort method. Default value: 0.
<li>0: descending order</li>
<li>1, ascending</li>
                     * 
                     */
                    void SetOrderByType(const uint64_t& _orderByType);

                    /**
                     * 判断参数 OrderByType 是否已赋值
                     * @return OrderByType 是否已赋值
                     * 
                     */
                    bool OrderByTypeHasBeenSet() const;

                    /**
                     * 获取Log level
                     * @return LogLevels Log level
                     * 
                     */
                    std::vector<std::string> GetLogLevels() const;

                    /**
                     * 设置Log level
                     * @param _logLevels Log level
                     * 
                     */
                    void SetLogLevels(const std::vector<std::string>& _logLevels);

                    /**
                     * 判断参数 LogLevels 是否已赋值
                     * @return LogLevels 是否已赋值
                     * 
                     */
                    bool LogLevelsHasBeenSet() const;

                    /**
                     * 获取Node ID.
                     * @return NodeIds Node ID.
                     * 
                     */
                    std::vector<std::string> GetNodeIds() const;

                    /**
                     * 设置Node ID.
                     * @param _nodeIds Node ID.
                     * 
                     */
                    void SetNodeIds(const std::vector<std::string>& _nodeIds);

                    /**
                     * 判断参数 NodeIds 是否已赋值
                     * @return NodeIds 是否已赋值
                     * 
                     */
                    bool NodeIdsHasBeenSet() const;

                    /**
                     * 获取Slow log index name
                     * @return IndexName Slow log index name
                     * 
                     */
                    std::string GetIndexName() const;

                    /**
                     * 设置Slow log index name
                     * @param _indexName Slow log index name
                     * 
                     */
                    void SetIndexName(const std::string& _indexName);

                    /**
                     * 判断参数 IndexName 是否已赋值
                     * @return IndexName 是否已赋值
                     * 
                     */
                    bool IndexNameHasBeenSet() const;

                    /**
                     * 获取Slow log index shards
                     * @return ShardId Slow log index shards
                     * 
                     */
                    std::string GetShardId() const;

                    /**
                     * 设置Slow log index shards
                     * @param _shardId Slow log index shards
                     * 
                     */
                    void SetShardId(const std::string& _shardId);

                    /**
                     * 判断参数 ShardId 是否已赋值
                     * @return ShardId 是否已赋值
                     * 
                     */
                    bool ShardIdHasBeenSet() const;

                    /**
                     * 获取Slow log query time
                     * @return QueryCost Slow log query time
                     * 
                     */
                    uint64_t GetQueryCost() const;

                    /**
                     * 设置Slow log query time
                     * @param _queryCost Slow log query time
                     * 
                     */
                    void SetQueryCost(const uint64_t& _queryCost);

                    /**
                     * 判断参数 QueryCost 是否已赋值
                     * @return QueryCost 是否已赋值
                     * 
                     */
                    bool QueryCostHasBeenSet() const;

                private:

                    /**
                     * Cluster instance ID.
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * Log type. Default value: 1.
<li>1, master log</li>
<li>2. Search slow logs</li>
<li>3. Index slow log</li>
<li>4. GC log</li>
                     */
                    uint64_t m_logType;
                    bool m_logTypeHasBeenSet;

                    /**
                     * Search term. LUCENE grammar is supported, for example, level:WARN, ip:1.1.1.1, message:test-index
                     */
                    std::string m_searchKey;
                    bool m_searchKeyHasBeenSet;

                    /**
                     * Log start time in the format of YYYY-MM-DD HH:MM:SS, for example, 2019-01-22 20:15:53
                     */
                    std::string m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * Log end time in the format of YYYY-MM-DD HH:MM:SS, for example, 2019-01-22 20:15:53
                     */
                    std::string m_endTime;
                    bool m_endTimeHasBeenSet;

                    /**
                     * Pagination starting value. Default value: 0.
                     */
                    uint64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * Pagination size. Default value: 100. Maximum value: 100.
                     */
                    uint64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * Time sort method. Default value: 0.
<li>0: descending order</li>
<li>1, ascending</li>
                     */
                    uint64_t m_orderByType;
                    bool m_orderByTypeHasBeenSet;

                    /**
                     * Log level
                     */
                    std::vector<std::string> m_logLevels;
                    bool m_logLevelsHasBeenSet;

                    /**
                     * Node ID.
                     */
                    std::vector<std::string> m_nodeIds;
                    bool m_nodeIdsHasBeenSet;

                    /**
                     * Slow log index name
                     */
                    std::string m_indexName;
                    bool m_indexNameHasBeenSet;

                    /**
                     * Slow log index shards
                     */
                    std::string m_shardId;
                    bool m_shardIdHasBeenSet;

                    /**
                     * Slow log query time
                     */
                    uint64_t m_queryCost;
                    bool m_queryCostHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ES_V20180416_MODEL_DESCRIBEINSTANCELOGSREQUEST_H_
