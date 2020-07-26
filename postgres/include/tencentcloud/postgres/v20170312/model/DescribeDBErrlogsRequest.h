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

#ifndef TENCENTCLOUD_POSTGRES_V20170312_MODEL_DESCRIBEDBERRLOGSREQUEST_H_
#define TENCENTCLOUD_POSTGRES_V20170312_MODEL_DESCRIBEDBERRLOGSREQUEST_H_

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
                * DescribeDBErrlogs request structure.
                */
                class DescribeDBErrlogsRequest : public AbstractModel
                {
                public:
                    DescribeDBErrlogsRequest();
                    ~DescribeDBErrlogsRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Instance ID in the format of postgres-5bq3wfjd
                     * @return DBInstanceId Instance ID in the format of postgres-5bq3wfjd
                     */
                    std::string GetDBInstanceId() const;

                    /**
                     * 设置Instance ID in the format of postgres-5bq3wfjd
                     * @param DBInstanceId Instance ID in the format of postgres-5bq3wfjd
                     */
                    void SetDBInstanceId(const std::string& _dBInstanceId);

                    /**
                     * 判断参数 DBInstanceId 是否已赋值
                     * @return DBInstanceId 是否已赋值
                     */
                    bool DBInstanceIdHasBeenSet() const;

                    /**
                     * 获取Query start time in the format of 2018-01-01 00:00:00, which cannot be more than 7 days ago
                     * @return StartTime Query start time in the format of 2018-01-01 00:00:00, which cannot be more than 7 days ago
                     */
                    std::string GetStartTime() const;

                    /**
                     * 设置Query start time in the format of 2018-01-01 00:00:00, which cannot be more than 7 days ago
                     * @param StartTime Query start time in the format of 2018-01-01 00:00:00, which cannot be more than 7 days ago
                     */
                    void SetStartTime(const std::string& _startTime);

                    /**
                     * 判断参数 StartTime 是否已赋值
                     * @return StartTime 是否已赋值
                     */
                    bool StartTimeHasBeenSet() const;

                    /**
                     * 获取Query end time in the format of 2018-01-01 00:00:00
                     * @return EndTime Query end time in the format of 2018-01-01 00:00:00
                     */
                    std::string GetEndTime() const;

                    /**
                     * 设置Query end time in the format of 2018-01-01 00:00:00
                     * @param EndTime Query end time in the format of 2018-01-01 00:00:00
                     */
                    void SetEndTime(const std::string& _endTime);

                    /**
                     * 判断参数 EndTime 是否已赋值
                     * @return EndTime 是否已赋值
                     */
                    bool EndTimeHasBeenSet() const;

                    /**
                     * 获取Database name
                     * @return DatabaseName Database name
                     */
                    std::string GetDatabaseName() const;

                    /**
                     * 设置Database name
                     * @param DatabaseName Database name
                     */
                    void SetDatabaseName(const std::string& _databaseName);

                    /**
                     * 判断参数 DatabaseName 是否已赋值
                     * @return DatabaseName 是否已赋值
                     */
                    bool DatabaseNameHasBeenSet() const;

                    /**
                     * 获取Search keyword
                     * @return SearchKeys Search keyword
                     */
                    std::vector<std::string> GetSearchKeys() const;

                    /**
                     * 设置Search keyword
                     * @param SearchKeys Search keyword
                     */
                    void SetSearchKeys(const std::vector<std::string>& _searchKeys);

                    /**
                     * 判断参数 SearchKeys 是否已赋值
                     * @return SearchKeys 是否已赋值
                     */
                    bool SearchKeysHasBeenSet() const;

                    /**
                     * 获取Number of entries returned per page. Value range: 1-100
                     * @return Limit Number of entries returned per page. Value range: 1-100
                     */
                    int64_t GetLimit() const;

                    /**
                     * 设置Number of entries returned per page. Value range: 1-100
                     * @param Limit Number of entries returned per page. Value range: 1-100
                     */
                    void SetLimit(const int64_t& _limit);

                    /**
                     * 判断参数 Limit 是否已赋值
                     * @return Limit 是否已赋值
                     */
                    bool LimitHasBeenSet() const;

                    /**
                     * 获取Page number for data return in paged query. Pagination starts from 0
                     * @return Offset Page number for data return in paged query. Pagination starts from 0
                     */
                    int64_t GetOffset() const;

                    /**
                     * 设置Page number for data return in paged query. Pagination starts from 0
                     * @param Offset Page number for data return in paged query. Pagination starts from 0
                     */
                    void SetOffset(const int64_t& _offset);

                    /**
                     * 判断参数 Offset 是否已赋值
                     * @return Offset 是否已赋值
                     */
                    bool OffsetHasBeenSet() const;

                private:

                    /**
                     * Instance ID in the format of postgres-5bq3wfjd
                     */
                    std::string m_dBInstanceId;
                    bool m_dBInstanceIdHasBeenSet;

                    /**
                     * Query start time in the format of 2018-01-01 00:00:00, which cannot be more than 7 days ago
                     */
                    std::string m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * Query end time in the format of 2018-01-01 00:00:00
                     */
                    std::string m_endTime;
                    bool m_endTimeHasBeenSet;

                    /**
                     * Database name
                     */
                    std::string m_databaseName;
                    bool m_databaseNameHasBeenSet;

                    /**
                     * Search keyword
                     */
                    std::vector<std::string> m_searchKeys;
                    bool m_searchKeysHasBeenSet;

                    /**
                     * Number of entries returned per page. Value range: 1-100
                     */
                    int64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * Page number for data return in paged query. Pagination starts from 0
                     */
                    int64_t m_offset;
                    bool m_offsetHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_POSTGRES_V20170312_MODEL_DESCRIBEDBERRLOGSREQUEST_H_
