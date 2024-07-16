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

#ifndef TENCENTCLOUD_CDWDORIS_V20211228_MODEL_DESCRIBESLOWQUERYRECORDSREQUEST_H_
#define TENCENTCLOUD_CDWDORIS_V20211228_MODEL_DESCRIBESLOWQUERYRECORDSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cdwdoris
    {
        namespace V20211228
        {
            namespace Model
            {
                /**
                * DescribeSlowQueryRecords request structure.
                */
                class DescribeSlowQueryRecordsRequest : public AbstractModel
                {
                public:
                    DescribeSlowQueryRecordsRequest();
                    ~DescribeSlowQueryRecordsRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Instance ID
                     * @return InstanceId Instance ID
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置Instance ID
                     * @param _instanceId Instance ID
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
                     * 获取Slow log time
                     * @return QueryDurationMs Slow log time
                     * 
                     */
                    int64_t GetQueryDurationMs() const;

                    /**
                     * 设置Slow log time
                     * @param _queryDurationMs Slow log time
                     * 
                     */
                    void SetQueryDurationMs(const int64_t& _queryDurationMs);

                    /**
                     * 判断参数 QueryDurationMs 是否已赋值
                     * @return QueryDurationMs 是否已赋值
                     * 
                     */
                    bool QueryDurationMsHasBeenSet() const;

                    /**
                     * 获取Start time
                     * @return StartTime Start time
                     * 
                     */
                    std::string GetStartTime() const;

                    /**
                     * 设置Start time
                     * @param _startTime Start time
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
                     * 获取End time
                     * @return EndTime End time
                     * 
                     */
                    std::string GetEndTime() const;

                    /**
                     * 设置End time
                     * @param _endTime End time
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
                     * 获取Paging
                     * @return PageSize Paging
                     * 
                     */
                    int64_t GetPageSize() const;

                    /**
                     * 设置Paging
                     * @param _pageSize Paging
                     * 
                     */
                    void SetPageSize(const int64_t& _pageSize);

                    /**
                     * 判断参数 PageSize 是否已赋值
                     * @return PageSize 是否已赋值
                     * 
                     */
                    bool PageSizeHasBeenSet() const;

                    /**
                     * 获取Paging
                     * @return PageNum Paging
                     * 
                     */
                    int64_t GetPageNum() const;

                    /**
                     * 设置Paging
                     * @param _pageNum Paging
                     * 
                     */
                    void SetPageNum(const int64_t& _pageNum);

                    /**
                     * 判断参数 PageNum 是否已赋值
                     * @return PageNum 是否已赋值
                     * 
                     */
                    bool PageNumHasBeenSet() const;

                    /**
                     * 获取Sort parameters
                     * @return DurationMs Sort parameters
                     * 
                     */
                    std::string GetDurationMs() const;

                    /**
                     * 设置Sort parameters
                     * @param _durationMs Sort parameters
                     * 
                     */
                    void SetDurationMs(const std::string& _durationMs);

                    /**
                     * 判断参数 DurationMs 是否已赋值
                     * @return DurationMs 是否已赋值
                     * 
                     */
                    bool DurationMsHasBeenSet() const;

                    /**
                     * 获取Database name
                     * @return DbName Database name
                     * 
                     */
                    std::vector<std::string> GetDbName() const;

                    /**
                     * 设置Database name
                     * @param _dbName Database name
                     * 
                     */
                    void SetDbName(const std::vector<std::string>& _dbName);

                    /**
                     * 判断参数 DbName 是否已赋值
                     * @return DbName 是否已赋值
                     * 
                     */
                    bool DbNameHasBeenSet() const;

                    /**
                     * 获取Whether it is a query. 0 indicates no, and 1 indicates yes.
                     * @return IsQuery Whether it is a query. 0 indicates no, and 1 indicates yes.
                     * 
                     */
                    int64_t GetIsQuery() const;

                    /**
                     * 设置Whether it is a query. 0 indicates no, and 1 indicates yes.
                     * @param _isQuery Whether it is a query. 0 indicates no, and 1 indicates yes.
                     * 
                     */
                    void SetIsQuery(const int64_t& _isQuery);

                    /**
                     * 判断参数 IsQuery 是否已赋值
                     * @return IsQuery 是否已赋值
                     * 
                     */
                    bool IsQueryHasBeenSet() const;

                    /**
                     * 获取catalog name
                     * @return CatalogName catalog name
                     * 
                     */
                    std::vector<std::string> GetCatalogName() const;

                    /**
                     * 设置catalog name
                     * @param _catalogName catalog name
                     * 
                     */
                    void SetCatalogName(const std::vector<std::string>& _catalogName);

                    /**
                     * 判断参数 CatalogName 是否已赋值
                     * @return CatalogName 是否已赋值
                     * 
                     */
                    bool CatalogNameHasBeenSet() const;

                    /**
                     * 获取SQL name
                     * @return Sql SQL name
                     * 
                     */
                    std::string GetSql() const;

                    /**
                     * 设置SQL name
                     * @param _sql SQL name
                     * 
                     */
                    void SetSql(const std::string& _sql);

                    /**
                     * 判断参数 Sql 是否已赋值
                     * @return Sql 是否已赋值
                     * 
                     */
                    bool SqlHasBeenSet() const;

                    /**
                     * 获取ReadRows sort field
                     * @return ReadRows ReadRows sort field
                     * 
                     */
                    std::string GetReadRows() const;

                    /**
                     * 设置ReadRows sort field
                     * @param _readRows ReadRows sort field
                     * 
                     */
                    void SetReadRows(const std::string& _readRows);

                    /**
                     * 判断参数 ReadRows 是否已赋值
                     * @return ReadRows 是否已赋值
                     * 
                     */
                    bool ReadRowsHasBeenSet() const;

                    /**
                     * 获取ResultBytes sort field
                     * @return ResultBytes ResultBytes sort field
                     * 
                     */
                    std::string GetResultBytes() const;

                    /**
                     * 设置ResultBytes sort field
                     * @param _resultBytes ResultBytes sort field
                     * 
                     */
                    void SetResultBytes(const std::string& _resultBytes);

                    /**
                     * 判断参数 ResultBytes 是否已赋值
                     * @return ResultBytes 是否已赋值
                     * 
                     */
                    bool ResultBytesHasBeenSet() const;

                    /**
                     * 获取MemoryUsage sort field
                     * @return MemoryUsage MemoryUsage sort field
                     * 
                     */
                    std::string GetMemoryUsage() const;

                    /**
                     * 设置MemoryUsage sort field
                     * @param _memoryUsage MemoryUsage sort field
                     * 
                     */
                    void SetMemoryUsage(const std::string& _memoryUsage);

                    /**
                     * 判断参数 MemoryUsage 是否已赋值
                     * @return MemoryUsage 是否已赋值
                     * 
                     */
                    bool MemoryUsageHasBeenSet() const;

                private:

                    /**
                     * Instance ID
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * Slow log time
                     */
                    int64_t m_queryDurationMs;
                    bool m_queryDurationMsHasBeenSet;

                    /**
                     * Start time
                     */
                    std::string m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * End time
                     */
                    std::string m_endTime;
                    bool m_endTimeHasBeenSet;

                    /**
                     * Paging
                     */
                    int64_t m_pageSize;
                    bool m_pageSizeHasBeenSet;

                    /**
                     * Paging
                     */
                    int64_t m_pageNum;
                    bool m_pageNumHasBeenSet;

                    /**
                     * Sort parameters
                     */
                    std::string m_durationMs;
                    bool m_durationMsHasBeenSet;

                    /**
                     * Database name
                     */
                    std::vector<std::string> m_dbName;
                    bool m_dbNameHasBeenSet;

                    /**
                     * Whether it is a query. 0 indicates no, and 1 indicates yes.
                     */
                    int64_t m_isQuery;
                    bool m_isQueryHasBeenSet;

                    /**
                     * catalog name
                     */
                    std::vector<std::string> m_catalogName;
                    bool m_catalogNameHasBeenSet;

                    /**
                     * SQL name
                     */
                    std::string m_sql;
                    bool m_sqlHasBeenSet;

                    /**
                     * ReadRows sort field
                     */
                    std::string m_readRows;
                    bool m_readRowsHasBeenSet;

                    /**
                     * ResultBytes sort field
                     */
                    std::string m_resultBytes;
                    bool m_resultBytesHasBeenSet;

                    /**
                     * MemoryUsage sort field
                     */
                    std::string m_memoryUsage;
                    bool m_memoryUsageHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CDWDORIS_V20211228_MODEL_DESCRIBESLOWQUERYRECORDSREQUEST_H_
