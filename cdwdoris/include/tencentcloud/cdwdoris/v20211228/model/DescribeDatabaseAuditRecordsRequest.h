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

#ifndef TENCENTCLOUD_CDWDORIS_V20211228_MODEL_DESCRIBEDATABASEAUDITRECORDSREQUEST_H_
#define TENCENTCLOUD_CDWDORIS_V20211228_MODEL_DESCRIBEDATABASEAUDITRECORDSREQUEST_H_

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
                * DescribeDatabaseAuditRecords request structure.
                */
                class DescribeDatabaseAuditRecordsRequest : public AbstractModel
                {
                public:
                    DescribeDatabaseAuditRecordsRequest();
                    ~DescribeDatabaseAuditRecordsRequest() = default;
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
                     * @return OrderType Sort parameters
                     * 
                     */
                    std::string GetOrderType() const;

                    /**
                     * 设置Sort parameters
                     * @param _orderType Sort parameters
                     * 
                     */
                    void SetOrderType(const std::string& _orderType);

                    /**
                     * 判断参数 OrderType 是否已赋值
                     * @return OrderType 是否已赋值
                     * 
                     */
                    bool OrderTypeHasBeenSet() const;

                    /**
                     * 获取User
                     * @return User User
                     * 
                     */
                    std::string GetUser() const;

                    /**
                     * 设置User
                     * @param _user User
                     * 
                     */
                    void SetUser(const std::string& _user);

                    /**
                     * 判断参数 User 是否已赋值
                     * @return User 是否已赋值
                     * 
                     */
                    bool UserHasBeenSet() const;

                    /**
                     * 获取Database
                     * @return DbName Database
                     * 
                     */
                    std::string GetDbName() const;

                    /**
                     * 设置Database
                     * @param _dbName Database
                     * 
                     */
                    void SetDbName(const std::string& _dbName);

                    /**
                     * 判断参数 DbName 是否已赋值
                     * @return DbName 是否已赋值
                     * 
                     */
                    bool DbNameHasBeenSet() const;

                    /**
                     * 获取SQL type
                     * @return SqlType SQL type
                     * 
                     */
                    std::string GetSqlType() const;

                    /**
                     * 设置SQL type
                     * @param _sqlType SQL type
                     * 
                     */
                    void SetSqlType(const std::string& _sqlType);

                    /**
                     * 判断参数 SqlType 是否已赋值
                     * @return SqlType 是否已赋值
                     * 
                     */
                    bool SqlTypeHasBeenSet() const;

                    /**
                     * 获取SQL statement
                     * @return Sql SQL statement
                     * 
                     */
                    std::string GetSql() const;

                    /**
                     * 设置SQL statement
                     * @param _sql SQL statement
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
                     * 获取Users (multiple selections)
                     * @return Users Users (multiple selections)
                     * 
                     */
                    std::vector<std::string> GetUsers() const;

                    /**
                     * 设置Users (multiple selections)
                     * @param _users Users (multiple selections)
                     * 
                     */
                    void SetUsers(const std::vector<std::string>& _users);

                    /**
                     * 判断参数 Users 是否已赋值
                     * @return Users 是否已赋值
                     * 
                     */
                    bool UsersHasBeenSet() const;

                    /**
                     * 获取Databases (multiple selections)
                     * @return DbNames Databases (multiple selections)
                     * 
                     */
                    std::vector<std::string> GetDbNames() const;

                    /**
                     * 设置Databases (multiple selections)
                     * @param _dbNames Databases (multiple selections)
                     * 
                     */
                    void SetDbNames(const std::vector<std::string>& _dbNames);

                    /**
                     * 判断参数 DbNames 是否已赋值
                     * @return DbNames 是否已赋值
                     * 
                     */
                    bool DbNamesHasBeenSet() const;

                    /**
                     * 获取SQL types (multiple selections)
                     * @return SqlTypes SQL types (multiple selections)
                     * 
                     */
                    std::vector<std::string> GetSqlTypes() const;

                    /**
                     * 设置SQL types (multiple selections)
                     * @param _sqlTypes SQL types (multiple selections)
                     * 
                     */
                    void SetSqlTypes(const std::vector<std::string>& _sqlTypes);

                    /**
                     * 判断参数 SqlTypes 是否已赋值
                     * @return SqlTypes 是否已赋值
                     * 
                     */
                    bool SqlTypesHasBeenSet() const;

                    /**
                     * 获取Catalog names (multiple selections)
                     * @return Catalogs Catalog names (multiple selections)
                     * 
                     */
                    std::vector<std::string> GetCatalogs() const;

                    /**
                     * 设置Catalog names (multiple selections)
                     * @param _catalogs Catalog names (multiple selections)
                     * 
                     */
                    void SetCatalogs(const std::vector<std::string>& _catalogs);

                    /**
                     * 判断参数 Catalogs 是否已赋值
                     * @return Catalogs 是否已赋值
                     * 
                     */
                    bool CatalogsHasBeenSet() const;

                private:

                    /**
                     * Instance ID
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

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
                    std::string m_orderType;
                    bool m_orderTypeHasBeenSet;

                    /**
                     * User
                     */
                    std::string m_user;
                    bool m_userHasBeenSet;

                    /**
                     * Database
                     */
                    std::string m_dbName;
                    bool m_dbNameHasBeenSet;

                    /**
                     * SQL type
                     */
                    std::string m_sqlType;
                    bool m_sqlTypeHasBeenSet;

                    /**
                     * SQL statement
                     */
                    std::string m_sql;
                    bool m_sqlHasBeenSet;

                    /**
                     * Users (multiple selections)
                     */
                    std::vector<std::string> m_users;
                    bool m_usersHasBeenSet;

                    /**
                     * Databases (multiple selections)
                     */
                    std::vector<std::string> m_dbNames;
                    bool m_dbNamesHasBeenSet;

                    /**
                     * SQL types (multiple selections)
                     */
                    std::vector<std::string> m_sqlTypes;
                    bool m_sqlTypesHasBeenSet;

                    /**
                     * Catalog names (multiple selections)
                     */
                    std::vector<std::string> m_catalogs;
                    bool m_catalogsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CDWDORIS_V20211228_MODEL_DESCRIBEDATABASEAUDITRECORDSREQUEST_H_
