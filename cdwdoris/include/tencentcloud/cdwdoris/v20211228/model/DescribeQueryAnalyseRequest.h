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

#ifndef TENCENTCLOUD_CDWDORIS_V20211228_MODEL_DESCRIBEQUERYANALYSEREQUEST_H_
#define TENCENTCLOUD_CDWDORIS_V20211228_MODEL_DESCRIBEQUERYANALYSEREQUEST_H_

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
                * DescribeQueryAnalyse request structure.
                */
                class DescribeQueryAnalyseRequest : public AbstractModel
                {
                public:
                    DescribeQueryAnalyseRequest();
                    ~DescribeQueryAnalyseRequest() = default;
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
                     * 获取Use the user who has corresponding permissions for operations. If the TCHouse-D cluster uses a kernel account registered by a CAM user, you do not need to fill it in.
                     * @return UserName Use the user who has corresponding permissions for operations. If the TCHouse-D cluster uses a kernel account registered by a CAM user, you do not need to fill it in.
                     * 
                     */
                    std::string GetUserName() const;

                    /**
                     * 设置Use the user who has corresponding permissions for operations. If the TCHouse-D cluster uses a kernel account registered by a CAM user, you do not need to fill it in.
                     * @param _userName Use the user who has corresponding permissions for operations. If the TCHouse-D cluster uses a kernel account registered by a CAM user, you do not need to fill it in.
                     * 
                     */
                    void SetUserName(const std::string& _userName);

                    /**
                     * 判断参数 UserName 是否已赋值
                     * @return UserName 是否已赋值
                     * 
                     */
                    bool UserNameHasBeenSet() const;

                    /**
                     * 获取Password corresponding to the user. If the TCHouse-D cluster uses a kernel account registered by a CAM user, you do not need to fill it in.
                     * @return PassWord Password corresponding to the user. If the TCHouse-D cluster uses a kernel account registered by a CAM user, you do not need to fill it in.
                     * 
                     */
                    std::string GetPassWord() const;

                    /**
                     * 设置Password corresponding to the user. If the TCHouse-D cluster uses a kernel account registered by a CAM user, you do not need to fill it in.
                     * @param _passWord Password corresponding to the user. If the TCHouse-D cluster uses a kernel account registered by a CAM user, you do not need to fill it in.
                     * 
                     */
                    void SetPassWord(const std::string& _passWord);

                    /**
                     * 判断参数 PassWord 是否已赋值
                     * @return PassWord 是否已赋值
                     * 
                     */
                    bool PassWordHasBeenSet() const;

                    /**
                     * 获取Start time of operation period
                     * @return StartTime Start time of operation period
                     * 
                     */
                    std::string GetStartTime() const;

                    /**
                     * 设置Start time of operation period
                     * @param _startTime Start time of operation period
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
                     * 获取End time of operation period.
                     * @return EndTime End time of operation period.
                     * 
                     */
                    std::string GetEndTime() const;

                    /**
                     * 设置End time of operation period.
                     * @param _endTime End time of operation period.
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
                     * 获取SQL fragments (fuzzy query supported)
                     * @return SQLFragment SQL fragments (fuzzy query supported)
                     * 
                     */
                    std::string GetSQLFragment() const;

                    /**
                     * 设置SQL fragments (fuzzy query supported)
                     * @param _sQLFragment SQL fragments (fuzzy query supported)
                     * 
                     */
                    void SetSQLFragment(const std::string& _sQLFragment);

                    /**
                     * 判断参数 SQLFragment 是否已赋值
                     * @return SQLFragment 是否已赋值
                     * 
                     */
                    bool SQLFragmentHasBeenSet() const;

                    /**
                     * 获取Catalog filter condition
                     * @return CatalogFilter Catalog filter condition
                     * 
                     */
                    std::string GetCatalogFilter() const;

                    /**
                     * 设置Catalog filter condition
                     * @param _catalogFilter Catalog filter condition
                     * 
                     */
                    void SetCatalogFilter(const std::string& _catalogFilter);

                    /**
                     * 判断参数 CatalogFilter 是否已赋值
                     * @return CatalogFilter 是否已赋值
                     * 
                     */
                    bool CatalogFilterHasBeenSet() const;

                    /**
                     * 获取Database name filter condition
                     * @return DatabaseFilter Database name filter condition
                     * 
                     */
                    std::string GetDatabaseFilter() const;

                    /**
                     * 设置Database name filter condition
                     * @param _databaseFilter Database name filter condition
                     * 
                     */
                    void SetDatabaseFilter(const std::string& _databaseFilter);

                    /**
                     * 判断参数 DatabaseFilter 是否已赋值
                     * @return DatabaseFilter 是否已赋值
                     * 
                     */
                    bool DatabaseFilterHasBeenSet() const;

                    /**
                     * 获取SQL type filter criteria
                     * @return SQLTypeFilter SQL type filter criteria
                     * 
                     */
                    std::string GetSQLTypeFilter() const;

                    /**
                     * 设置SQL type filter criteria
                     * @param _sQLTypeFilter SQL type filter criteria
                     * 
                     */
                    void SetSQLTypeFilter(const std::string& _sQLTypeFilter);

                    /**
                     * 判断参数 SQLTypeFilter 是否已赋值
                     * @return SQLTypeFilter 是否已赋值
                     * 
                     */
                    bool SQLTypeFilterHasBeenSet() const;

                    /**
                     * 获取Sorting field
                     * @return SortField Sorting field
                     * 
                     */
                    std::string GetSortField() const;

                    /**
                     * 设置Sorting field
                     * @param _sortField Sorting field
                     * 
                     */
                    void SetSortField(const std::string& _sortField);

                    /**
                     * 判断参数 SortField 是否已赋值
                     * @return SortField 是否已赋值
                     * 
                     */
                    bool SortFieldHasBeenSet() const;

                    /**
                     * 获取Sorting order: asc (ascending) or desc (descending)
                     * @return SortOrder Sorting order: asc (ascending) or desc (descending)
                     * 
                     */
                    std::string GetSortOrder() const;

                    /**
                     * 设置Sorting order: asc (ascending) or desc (descending)
                     * @param _sortOrder Sorting order: asc (ascending) or desc (descending)
                     * 
                     */
                    void SetSortOrder(const std::string& _sortOrder);

                    /**
                     * 判断参数 SortOrder 是否已赋值
                     * @return SortOrder 是否已赋值
                     * 
                     */
                    bool SortOrderHasBeenSet() const;

                    /**
                     * 获取Minimum query execution time, in milliseconds.
                     * @return QueryTime Minimum query execution time, in milliseconds.
                     * 
                     */
                    uint64_t GetQueryTime() const;

                    /**
                     * 设置Minimum query execution time, in milliseconds.
                     * @param _queryTime Minimum query execution time, in milliseconds.
                     * 
                     */
                    void SetQueryTime(const uint64_t& _queryTime);

                    /**
                     * 判断参数 QueryTime 是否已赋值
                     * @return QueryTime 是否已赋值
                     * 
                     */
                    bool QueryTimeHasBeenSet() const;

                    /**
                     * 获取Page number, defaults to 1.
                     * @return PageNum Page number, defaults to 1.
                     * 
                     */
                    uint64_t GetPageNum() const;

                    /**
                     * 设置Page number, defaults to 1.
                     * @param _pageNum Page number, defaults to 1.
                     * 
                     */
                    void SetPageNum(const uint64_t& _pageNum);

                    /**
                     * 判断参数 PageNum 是否已赋值
                     * @return PageNum 是否已赋值
                     * 
                     */
                    bool PageNumHasBeenSet() const;

                    /**
                     * 获取Number of records per page, defaults to 10.
                     * @return PageSize Number of records per page, defaults to 10.
                     * 
                     */
                    uint64_t GetPageSize() const;

                    /**
                     * 设置Number of records per page, defaults to 10.
                     * @param _pageSize Number of records per page, defaults to 10.
                     * 
                     */
                    void SetPageSize(const uint64_t& _pageSize);

                    /**
                     * 判断参数 PageSize 是否已赋值
                     * @return PageSize 是否已赋值
                     * 
                     */
                    bool PageSizeHasBeenSet() const;

                private:

                    /**
                     * Instance ID
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * Use the user who has corresponding permissions for operations. If the TCHouse-D cluster uses a kernel account registered by a CAM user, you do not need to fill it in.
                     */
                    std::string m_userName;
                    bool m_userNameHasBeenSet;

                    /**
                     * Password corresponding to the user. If the TCHouse-D cluster uses a kernel account registered by a CAM user, you do not need to fill it in.
                     */
                    std::string m_passWord;
                    bool m_passWordHasBeenSet;

                    /**
                     * Start time of operation period
                     */
                    std::string m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * End time of operation period.
                     */
                    std::string m_endTime;
                    bool m_endTimeHasBeenSet;

                    /**
                     * SQL fragments (fuzzy query supported)
                     */
                    std::string m_sQLFragment;
                    bool m_sQLFragmentHasBeenSet;

                    /**
                     * Catalog filter condition
                     */
                    std::string m_catalogFilter;
                    bool m_catalogFilterHasBeenSet;

                    /**
                     * Database name filter condition
                     */
                    std::string m_databaseFilter;
                    bool m_databaseFilterHasBeenSet;

                    /**
                     * SQL type filter criteria
                     */
                    std::string m_sQLTypeFilter;
                    bool m_sQLTypeFilterHasBeenSet;

                    /**
                     * Sorting field
                     */
                    std::string m_sortField;
                    bool m_sortFieldHasBeenSet;

                    /**
                     * Sorting order: asc (ascending) or desc (descending)
                     */
                    std::string m_sortOrder;
                    bool m_sortOrderHasBeenSet;

                    /**
                     * Minimum query execution time, in milliseconds.
                     */
                    uint64_t m_queryTime;
                    bool m_queryTimeHasBeenSet;

                    /**
                     * Page number, defaults to 1.
                     */
                    uint64_t m_pageNum;
                    bool m_pageNumHasBeenSet;

                    /**
                     * Number of records per page, defaults to 10.
                     */
                    uint64_t m_pageSize;
                    bool m_pageSizeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CDWDORIS_V20211228_MODEL_DESCRIBEQUERYANALYSEREQUEST_H_
