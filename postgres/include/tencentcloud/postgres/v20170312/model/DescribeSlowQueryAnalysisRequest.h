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

#ifndef TENCENTCLOUD_POSTGRES_V20170312_MODEL_DESCRIBESLOWQUERYANALYSISREQUEST_H_
#define TENCENTCLOUD_POSTGRES_V20170312_MODEL_DESCRIBESLOWQUERYANALYSISREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Postgres
    {
        namespace V20170312
        {
            namespace Model
            {
                /**
                * DescribeSlowQueryAnalysis request structure.
                */
                class DescribeSlowQueryAnalysisRequest : public AbstractModel
                {
                public:
                    DescribeSlowQueryAnalysisRequest();
                    ~DescribeSlowQueryAnalysisRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Instance ID.
                     * @return DBInstanceId Instance ID.
                     * 
                     */
                    std::string GetDBInstanceId() const;

                    /**
                     * 设置Instance ID.
                     * @param _dBInstanceId Instance ID.
                     * 
                     */
                    void SetDBInstanceId(const std::string& _dBInstanceId);

                    /**
                     * 判断参数 DBInstanceId 是否已赋值
                     * @return DBInstanceId 是否已赋值
                     * 
                     */
                    bool DBInstanceIdHasBeenSet() const;

                    /**
                     * 获取Start timestamp of the query range in the format of "YYYY-MM-DD HH:mm:ss". The log is retained for seven days by default, so the start timestamp must fall within the retention period.
                     * @return StartTime Start timestamp of the query range in the format of "YYYY-MM-DD HH:mm:ss". The log is retained for seven days by default, so the start timestamp must fall within the retention period.
                     * 
                     */
                    std::string GetStartTime() const;

                    /**
                     * 设置Start timestamp of the query range in the format of "YYYY-MM-DD HH:mm:ss". The log is retained for seven days by default, so the start timestamp must fall within the retention period.
                     * @param _startTime Start timestamp of the query range in the format of "YYYY-MM-DD HH:mm:ss". The log is retained for seven days by default, so the start timestamp must fall within the retention period.
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
                     * 获取End timestamp of the query range in the format of "YYYY-MM-DD HH:mm:ss".
                     * @return EndTime End timestamp of the query range in the format of "YYYY-MM-DD HH:mm:ss".
                     * 
                     */
                    std::string GetEndTime() const;

                    /**
                     * 设置End timestamp of the query range in the format of "YYYY-MM-DD HH:mm:ss".
                     * @param _endTime End timestamp of the query range in the format of "YYYY-MM-DD HH:mm:ss".
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
                     * 获取Filter by database name. This parameter is optional.
                     * @return DatabaseName Filter by database name. This parameter is optional.
                     * 
                     */
                    std::string GetDatabaseName() const;

                    /**
                     * 设置Filter by database name. This parameter is optional.
                     * @param _databaseName Filter by database name. This parameter is optional.
                     * 
                     */
                    void SetDatabaseName(const std::string& _databaseName);

                    /**
                     * 判断参数 DatabaseName 是否已赋值
                     * @return DatabaseName 是否已赋值
                     * 
                     */
                    bool DatabaseNameHasBeenSet() const;

                    /**
                     * 获取Sort by field. Valid values: `CallNum`, `CostTime`, `AvgCostTime`. Default value: `CallNum`.
                     * @return OrderBy Sort by field. Valid values: `CallNum`, `CostTime`, `AvgCostTime`. Default value: `CallNum`.
                     * 
                     */
                    std::string GetOrderBy() const;

                    /**
                     * 设置Sort by field. Valid values: `CallNum`, `CostTime`, `AvgCostTime`. Default value: `CallNum`.
                     * @param _orderBy Sort by field. Valid values: `CallNum`, `CostTime`, `AvgCostTime`. Default value: `CallNum`.
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
                     * 获取Sorting order. Valid values: `asc` (ascending), `desc` (descending). Default value: `desc`.
                     * @return OrderByType Sorting order. Valid values: `asc` (ascending), `desc` (descending). Default value: `desc`.
                     * 
                     */
                    std::string GetOrderByType() const;

                    /**
                     * 设置Sorting order. Valid values: `asc` (ascending), `desc` (descending). Default value: `desc`.
                     * @param _orderByType Sorting order. Valid values: `asc` (ascending), `desc` (descending). Default value: `desc`.
                     * 
                     */
                    void SetOrderByType(const std::string& _orderByType);

                    /**
                     * 判断参数 OrderByType 是否已赋值
                     * @return OrderByType 是否已赋值
                     * 
                     */
                    bool OrderByTypeHasBeenSet() const;

                    /**
                     * 获取Number of entries per page. Value range: [1,100]. Default value: `50`.
                     * @return Limit Number of entries per page. Value range: [1,100]. Default value: `50`.
                     * 
                     */
                    int64_t GetLimit() const;

                    /**
                     * 设置Number of entries per page. Value range: [1,100]. Default value: `50`.
                     * @param _limit Number of entries per page. Value range: [1,100]. Default value: `50`.
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
                     * 获取Pagination offset. Value range: [0,INF). Default value: `0`.
                     * @return Offset Pagination offset. Value range: [0,INF). Default value: `0`.
                     * 
                     */
                    int64_t GetOffset() const;

                    /**
                     * 设置Pagination offset. Value range: [0,INF). Default value: `0`.
                     * @param _offset Pagination offset. Value range: [0,INF). Default value: `0`.
                     * 
                     */
                    void SetOffset(const int64_t& _offset);

                    /**
                     * 判断参数 Offset 是否已赋值
                     * @return Offset 是否已赋值
                     * 
                     */
                    bool OffsetHasBeenSet() const;

                private:

                    /**
                     * Instance ID.
                     */
                    std::string m_dBInstanceId;
                    bool m_dBInstanceIdHasBeenSet;

                    /**
                     * Start timestamp of the query range in the format of "YYYY-MM-DD HH:mm:ss". The log is retained for seven days by default, so the start timestamp must fall within the retention period.
                     */
                    std::string m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * End timestamp of the query range in the format of "YYYY-MM-DD HH:mm:ss".
                     */
                    std::string m_endTime;
                    bool m_endTimeHasBeenSet;

                    /**
                     * Filter by database name. This parameter is optional.
                     */
                    std::string m_databaseName;
                    bool m_databaseNameHasBeenSet;

                    /**
                     * Sort by field. Valid values: `CallNum`, `CostTime`, `AvgCostTime`. Default value: `CallNum`.
                     */
                    std::string m_orderBy;
                    bool m_orderByHasBeenSet;

                    /**
                     * Sorting order. Valid values: `asc` (ascending), `desc` (descending). Default value: `desc`.
                     */
                    std::string m_orderByType;
                    bool m_orderByTypeHasBeenSet;

                    /**
                     * Number of entries per page. Value range: [1,100]. Default value: `50`.
                     */
                    int64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * Pagination offset. Value range: [0,INF). Default value: `0`.
                     */
                    int64_t m_offset;
                    bool m_offsetHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_POSTGRES_V20170312_MODEL_DESCRIBESLOWQUERYANALYSISREQUEST_H_
