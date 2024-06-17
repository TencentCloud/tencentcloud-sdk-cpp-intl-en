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

#ifndef TENCENTCLOUD_POSTGRES_V20170312_MODEL_DESCRIBESLOWQUERYLISTREQUEST_H_
#define TENCENTCLOUD_POSTGRES_V20170312_MODEL_DESCRIBESLOWQUERYLISTREQUEST_H_

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
                * DescribeSlowQueryList request structure.
                */
                class DescribeSlowQueryListRequest : public AbstractModel
                {
                public:
                    DescribeSlowQueryListRequest();
                    ~DescribeSlowQueryListRequest() = default;
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
                     * 获取Query start time, in the format of 2018-01-01 00:00:00. The log is retained for seven days by default, so the start time must fall within the retention period.
                     * @return StartTime Query start time, in the format of 2018-01-01 00:00:00. The log is retained for seven days by default, so the start time must fall within the retention period.
                     * 
                     */
                    std::string GetStartTime() const;

                    /**
                     * 设置Query start time, in the format of 2018-01-01 00:00:00. The log is retained for seven days by default, so the start time must fall within the retention period.
                     * @param _startTime Query start time, in the format of 2018-01-01 00:00:00. The log is retained for seven days by default, so the start time must fall within the retention period.
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
                     * 获取Query end time, in the format of 2018-01-01 00:00:00.
                     * @return EndTime Query end time, in the format of 2018-01-01 00:00:00.
                     * 
                     */
                    std::string GetEndTime() const;

                    /**
                     * 设置Query end time, in the format of 2018-01-01 00:00:00.
                     * @param _endTime Query end time, in the format of 2018-01-01 00:00:00.
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
                     * 获取Database name.
                     * @return DatabaseName Database name.
                     * 
                     */
                    std::string GetDatabaseName() const;

                    /**
                     * 设置Database name.
                     * @param _databaseName Database name.
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
                     * 获取Sorting method, including ascending: `asc` and descending: `desc`. The default value is `desc`.	
                     * @return OrderByType Sorting method, including ascending: `asc` and descending: `desc`. The default value is `desc`.	
                     * 
                     */
                    std::string GetOrderByType() const;

                    /**
                     * 设置Sorting method, including ascending: `asc` and descending: `desc`. The default value is `desc`.	
                     * @param _orderByType Sorting method, including ascending: `asc` and descending: `desc`. The default value is `desc`.	
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
                     * 获取Sorting field, with a value range of `[SessionStartTime, Duration]`. The default value is `SessionStartTime`.
                     * @return OrderBy Sorting field, with a value range of `[SessionStartTime, Duration]`. The default value is `SessionStartTime`.
                     * 
                     */
                    std::string GetOrderBy() const;

                    /**
                     * 设置Sorting field, with a value range of `[SessionStartTime, Duration]`. The default value is `SessionStartTime`.
                     * @param _orderBy Sorting field, with a value range of `[SessionStartTime, Duration]`. The default value is `SessionStartTime`.
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
                     * 获取Number of results returned per page, with a value range of 1-100. The default value is `50`.
                     * @return Limit Number of results returned per page, with a value range of 1-100. The default value is `50`.
                     * 
                     */
                    int64_t GetLimit() const;

                    /**
                     * 设置Number of results returned per page, with a value range of 1-100. The default value is `50`.
                     * @param _limit Number of results returned per page, with a value range of 1-100. The default value is `50`.
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
                     * 获取Data offset, which starts from 0. The default value is `0`.
                     * @return Offset Data offset, which starts from 0. The default value is `0`.
                     * 
                     */
                    int64_t GetOffset() const;

                    /**
                     * 设置Data offset, which starts from 0. The default value is `0`.
                     * @param _offset Data offset, which starts from 0. The default value is `0`.
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
                     * Query start time, in the format of 2018-01-01 00:00:00. The log is retained for seven days by default, so the start time must fall within the retention period.
                     */
                    std::string m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * Query end time, in the format of 2018-01-01 00:00:00.
                     */
                    std::string m_endTime;
                    bool m_endTimeHasBeenSet;

                    /**
                     * Database name.
                     */
                    std::string m_databaseName;
                    bool m_databaseNameHasBeenSet;

                    /**
                     * Sorting method, including ascending: `asc` and descending: `desc`. The default value is `desc`.	
                     */
                    std::string m_orderByType;
                    bool m_orderByTypeHasBeenSet;

                    /**
                     * Sorting field, with a value range of `[SessionStartTime, Duration]`. The default value is `SessionStartTime`.
                     */
                    std::string m_orderBy;
                    bool m_orderByHasBeenSet;

                    /**
                     * Number of results returned per page, with a value range of 1-100. The default value is `50`.
                     */
                    int64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * Data offset, which starts from 0. The default value is `0`.
                     */
                    int64_t m_offset;
                    bool m_offsetHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_POSTGRES_V20170312_MODEL_DESCRIBESLOWQUERYLISTREQUEST_H_
