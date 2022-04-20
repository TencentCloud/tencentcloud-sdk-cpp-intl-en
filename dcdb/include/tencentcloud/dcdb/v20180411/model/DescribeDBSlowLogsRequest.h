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

#ifndef TENCENTCLOUD_DCDB_V20180411_MODEL_DESCRIBEDBSLOWLOGSREQUEST_H_
#define TENCENTCLOUD_DCDB_V20180411_MODEL_DESCRIBEDBSLOWLOGSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Dcdb
    {
        namespace V20180411
        {
            namespace Model
            {
                /**
                * DescribeDBSlowLogs request structure.
                */
                class DescribeDBSlowLogsRequest : public AbstractModel
                {
                public:
                    DescribeDBSlowLogsRequest();
                    ~DescribeDBSlowLogsRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Instance ID in the format of dcdbt-hw0qj6m1
                     * @return InstanceId Instance ID in the format of dcdbt-hw0qj6m1
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置Instance ID in the format of dcdbt-hw0qj6m1
                     * @param InstanceId Instance ID in the format of dcdbt-hw0qj6m1
                     */
                    void SetInstanceId(const std::string& _instanceId);

                    /**
                     * 判断参数 InstanceId 是否已赋值
                     * @return InstanceId 是否已赋值
                     */
                    bool InstanceIdHasBeenSet() const;

                    /**
                     * 获取Data entry number starting from which to return results
                     * @return Offset Data entry number starting from which to return results
                     */
                    uint64_t GetOffset() const;

                    /**
                     * 设置Data entry number starting from which to return results
                     * @param Offset Data entry number starting from which to return results
                     */
                    void SetOffset(const uint64_t& _offset);

                    /**
                     * 判断参数 Offset 是否已赋值
                     * @return Offset 是否已赋值
                     */
                    bool OffsetHasBeenSet() const;

                    /**
                     * 获取Number of results to be returned
                     * @return Limit Number of results to be returned
                     */
                    uint64_t GetLimit() const;

                    /**
                     * 设置Number of results to be returned
                     * @param Limit Number of results to be returned
                     */
                    void SetLimit(const uint64_t& _limit);

                    /**
                     * 判断参数 Limit 是否已赋值
                     * @return Limit 是否已赋值
                     */
                    bool LimitHasBeenSet() const;

                    /**
                     * 获取Query start time in the format of 2016-07-23 14:55:20
                     * @return StartTime Query start time in the format of 2016-07-23 14:55:20
                     */
                    std::string GetStartTime() const;

                    /**
                     * 设置Query start time in the format of 2016-07-23 14:55:20
                     * @param StartTime Query start time in the format of 2016-07-23 14:55:20
                     */
                    void SetStartTime(const std::string& _startTime);

                    /**
                     * 判断参数 StartTime 是否已赋值
                     * @return StartTime 是否已赋值
                     */
                    bool StartTimeHasBeenSet() const;

                    /**
                     * 获取Shard ID of the instance in the format of shard-53ima8ln
                     * @return ShardId Shard ID of the instance in the format of shard-53ima8ln
                     */
                    std::string GetShardId() const;

                    /**
                     * 设置Shard ID of the instance in the format of shard-53ima8ln
                     * @param ShardId Shard ID of the instance in the format of shard-53ima8ln
                     */
                    void SetShardId(const std::string& _shardId);

                    /**
                     * 判断参数 ShardId 是否已赋值
                     * @return ShardId 是否已赋值
                     */
                    bool ShardIdHasBeenSet() const;

                    /**
                     * 获取Query end time in the format of 2016-08-22 14:55:20. If this parameter is left empty, the current time will be used as the query end time.
                     * @return EndTime Query end time in the format of 2016-08-22 14:55:20. If this parameter is left empty, the current time will be used as the query end time.
                     */
                    std::string GetEndTime() const;

                    /**
                     * 设置Query end time in the format of 2016-08-22 14:55:20. If this parameter is left empty, the current time will be used as the query end time.
                     * @param EndTime Query end time in the format of 2016-08-22 14:55:20. If this parameter is left empty, the current time will be used as the query end time.
                     */
                    void SetEndTime(const std::string& _endTime);

                    /**
                     * 判断参数 EndTime 是否已赋值
                     * @return EndTime 是否已赋值
                     */
                    bool EndTimeHasBeenSet() const;

                    /**
                     * 获取Specific name of the database to be queried
                     * @return Db Specific name of the database to be queried
                     */
                    std::string GetDb() const;

                    /**
                     * 设置Specific name of the database to be queried
                     * @param Db Specific name of the database to be queried
                     */
                    void SetDb(const std::string& _db);

                    /**
                     * 判断参数 Db 是否已赋值
                     * @return Db 是否已赋值
                     */
                    bool DbHasBeenSet() const;

                    /**
                     * 获取Sorting metric. Valid values: `query_time_sum`, `query_count`. Default value: `query_time_sum`
                     * @return OrderBy Sorting metric. Valid values: `query_time_sum`, `query_count`. Default value: `query_time_sum`
                     */
                    std::string GetOrderBy() const;

                    /**
                     * 设置Sorting metric. Valid values: `query_time_sum`, `query_count`. Default value: `query_time_sum`
                     * @param OrderBy Sorting metric. Valid values: `query_time_sum`, `query_count`. Default value: `query_time_sum`
                     */
                    void SetOrderBy(const std::string& _orderBy);

                    /**
                     * 判断参数 OrderBy 是否已赋值
                     * @return OrderBy 是否已赋值
                     */
                    bool OrderByHasBeenSet() const;

                    /**
                     * 获取Sorting order. Valid values: `desc` (descending), `asc` (ascending). Default value: `desc`
                     * @return OrderByType Sorting order. Valid values: `desc` (descending), `asc` (ascending). Default value: `desc`
                     */
                    std::string GetOrderByType() const;

                    /**
                     * 设置Sorting order. Valid values: `desc` (descending), `asc` (ascending). Default value: `desc`
                     * @param OrderByType Sorting order. Valid values: `desc` (descending), `asc` (ascending). Default value: `desc`
                     */
                    void SetOrderByType(const std::string& _orderByType);

                    /**
                     * 判断参数 OrderByType 是否已赋值
                     * @return OrderByType 是否已赋值
                     */
                    bool OrderByTypeHasBeenSet() const;

                    /**
                     * 获取Query slow queries from either the source or the replica. Valid values: `0` (source), `1` (replica). Default value: `0`
                     * @return Slave Query slow queries from either the source or the replica. Valid values: `0` (source), `1` (replica). Default value: `0`
                     */
                    int64_t GetSlave() const;

                    /**
                     * 设置Query slow queries from either the source or the replica. Valid values: `0` (source), `1` (replica). Default value: `0`
                     * @param Slave Query slow queries from either the source or the replica. Valid values: `0` (source), `1` (replica). Default value: `0`
                     */
                    void SetSlave(const int64_t& _slave);

                    /**
                     * 判断参数 Slave 是否已赋值
                     * @return Slave 是否已赋值
                     */
                    bool SlaveHasBeenSet() const;

                private:

                    /**
                     * Instance ID in the format of dcdbt-hw0qj6m1
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * Data entry number starting from which to return results
                     */
                    uint64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * Number of results to be returned
                     */
                    uint64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * Query start time in the format of 2016-07-23 14:55:20
                     */
                    std::string m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * Shard ID of the instance in the format of shard-53ima8ln
                     */
                    std::string m_shardId;
                    bool m_shardIdHasBeenSet;

                    /**
                     * Query end time in the format of 2016-08-22 14:55:20. If this parameter is left empty, the current time will be used as the query end time.
                     */
                    std::string m_endTime;
                    bool m_endTimeHasBeenSet;

                    /**
                     * Specific name of the database to be queried
                     */
                    std::string m_db;
                    bool m_dbHasBeenSet;

                    /**
                     * Sorting metric. Valid values: `query_time_sum`, `query_count`. Default value: `query_time_sum`
                     */
                    std::string m_orderBy;
                    bool m_orderByHasBeenSet;

                    /**
                     * Sorting order. Valid values: `desc` (descending), `asc` (ascending). Default value: `desc`
                     */
                    std::string m_orderByType;
                    bool m_orderByTypeHasBeenSet;

                    /**
                     * Query slow queries from either the source or the replica. Valid values: `0` (source), `1` (replica). Default value: `0`
                     */
                    int64_t m_slave;
                    bool m_slaveHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DCDB_V20180411_MODEL_DESCRIBEDBSLOWLOGSREQUEST_H_
