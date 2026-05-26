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

#ifndef TENCENTCLOUD_POSTGRES_V20170312_MODEL_DESCRIBEDBERRLOGSREQUEST_H_
#define TENCENTCLOUD_POSTGRES_V20170312_MODEL_DESCRIBEDBERRLOGSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/postgres/v20170312/model/LogFilter.h>


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
                     * 获取<p>Instance ID. It can be obtained through the <a href="https://www.tencentcloud.com/document/api/409/16773?from_cn_redirect=1">DescribeDBInstances</a> API.</p>
                     * @return DBInstanceId <p>Instance ID. It can be obtained through the <a href="https://www.tencentcloud.com/document/api/409/16773?from_cn_redirect=1">DescribeDBInstances</a> API.</p>
                     * 
                     */
                    std::string GetDBInstanceId() const;

                    /**
                     * 设置<p>Instance ID. It can be obtained through the <a href="https://www.tencentcloud.com/document/api/409/16773?from_cn_redirect=1">DescribeDBInstances</a> API.</p>
                     * @param _dBInstanceId <p>Instance ID. It can be obtained through the <a href="https://www.tencentcloud.com/document/api/409/16773?from_cn_redirect=1">DescribeDBInstances</a> API.</p>
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
                     * 获取<p>Query start time, such as 2018-01-01 00:00:00. Log retention time defaults to 7 days. Start time cannot exceed the retention period.</p>
                     * @return StartTime <p>Query start time, such as 2018-01-01 00:00:00. Log retention time defaults to 7 days. Start time cannot exceed the retention period.</p>
                     * 
                     */
                    std::string GetStartTime() const;

                    /**
                     * 设置<p>Query start time, such as 2018-01-01 00:00:00. Log retention time defaults to 7 days. Start time cannot exceed the retention period.</p>
                     * @param _startTime <p>Query start time, such as 2018-01-01 00:00:00. Log retention time defaults to 7 days. Start time cannot exceed the retention period.</p>
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
                     * 获取<p>Query end time, in the format of 2018-01-01 00:00:00.</p>
                     * @return EndTime <p>Query end time, in the format of 2018-01-01 00:00:00.</p>
                     * 
                     */
                    std::string GetEndTime() const;

                    /**
                     * 设置<p>Query end time, in the format of 2018-01-01 00:00:00.</p>
                     * @param _endTime <p>Query end time, in the format of 2018-01-01 00:00:00.</p>
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
                     * 获取<p>Database name</p>
                     * @return DatabaseName <p>Database name</p>
                     * 
                     */
                    std::string GetDatabaseName() const;

                    /**
                     * 设置<p>Database name</p>
                     * @param _databaseName <p>Database name</p>
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
                     * 获取<p>Search keywords.</p>
                     * @return SearchKeys <p>Search keywords.</p>
                     * 
                     */
                    std::vector<std::string> GetSearchKeys() const;

                    /**
                     * 设置<p>Search keywords.</p>
                     * @param _searchKeys <p>Search keywords.</p>
                     * 
                     */
                    void SetSearchKeys(const std::vector<std::string>& _searchKeys);

                    /**
                     * 判断参数 SearchKeys 是否已赋值
                     * @return SearchKeys 是否已赋值
                     * 
                     */
                    bool SearchKeysHasBeenSet() const;

                    /**
                     * 获取<p>Number of results returned per page, with a value range of 1-100. The default value is `50`.</p>
                     * @return Limit <p>Number of results returned per page, with a value range of 1-100. The default value is `50`.</p>
                     * 
                     */
                    int64_t GetLimit() const;

                    /**
                     * 设置<p>Number of results returned per page, with a value range of 1-100. The default value is `50`.</p>
                     * @param _limit <p>Number of results returned per page, with a value range of 1-100. The default value is `50`.</p>
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
                     * 获取<p>Data offset, which starts from 0. The default value is 0.</p>
                     * @return Offset <p>Data offset, which starts from 0. The default value is 0.</p>
                     * 
                     */
                    int64_t GetOffset() const;

                    /**
                     * 设置<p>Data offset, which starts from 0. The default value is 0.</p>
                     * @param _offset <p>Data offset, which starts from 0. The default value is 0.</p>
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
                     * 获取<p>Log filter criteria. Format is [{Type: "ApplicationName", Compare: "INC", Value: ["123"]}].</p>
                     * @return LogFilters <p>Log filter criteria. Format is [{Type: "ApplicationName", Compare: "INC", Value: ["123"]}].</p>
                     * 
                     */
                    std::vector<LogFilter> GetLogFilters() const;

                    /**
                     * 设置<p>Log filter criteria. Format is [{Type: "ApplicationName", Compare: "INC", Value: ["123"]}].</p>
                     * @param _logFilters <p>Log filter criteria. Format is [{Type: "ApplicationName", Compare: "INC", Value: ["123"]}].</p>
                     * 
                     */
                    void SetLogFilters(const std::vector<LogFilter>& _logFilters);

                    /**
                     * 判断参数 LogFilters 是否已赋值
                     * @return LogFilters 是否已赋值
                     * 
                     */
                    bool LogFiltersHasBeenSet() const;

                private:

                    /**
                     * <p>Instance ID. It can be obtained through the <a href="https://www.tencentcloud.com/document/api/409/16773?from_cn_redirect=1">DescribeDBInstances</a> API.</p>
                     */
                    std::string m_dBInstanceId;
                    bool m_dBInstanceIdHasBeenSet;

                    /**
                     * <p>Query start time, such as 2018-01-01 00:00:00. Log retention time defaults to 7 days. Start time cannot exceed the retention period.</p>
                     */
                    std::string m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * <p>Query end time, in the format of 2018-01-01 00:00:00.</p>
                     */
                    std::string m_endTime;
                    bool m_endTimeHasBeenSet;

                    /**
                     * <p>Database name</p>
                     */
                    std::string m_databaseName;
                    bool m_databaseNameHasBeenSet;

                    /**
                     * <p>Search keywords.</p>
                     */
                    std::vector<std::string> m_searchKeys;
                    bool m_searchKeysHasBeenSet;

                    /**
                     * <p>Number of results returned per page, with a value range of 1-100. The default value is `50`.</p>
                     */
                    int64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * <p>Data offset, which starts from 0. The default value is 0.</p>
                     */
                    int64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * <p>Log filter criteria. Format is [{Type: "ApplicationName", Compare: "INC", Value: ["123"]}].</p>
                     */
                    std::vector<LogFilter> m_logFilters;
                    bool m_logFiltersHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_POSTGRES_V20170312_MODEL_DESCRIBEDBERRLOGSREQUEST_H_
