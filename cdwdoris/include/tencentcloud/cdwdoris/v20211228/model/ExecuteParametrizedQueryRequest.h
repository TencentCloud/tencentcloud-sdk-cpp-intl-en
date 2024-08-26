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

#ifndef TENCENTCLOUD_CDWDORIS_V20211228_MODEL_EXECUTEPARAMETRIZEDQUERYREQUEST_H_
#define TENCENTCLOUD_CDWDORIS_V20211228_MODEL_EXECUTEPARAMETRIZEDQUERYREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cdwdoris/v20211228/model/PropertiesMap.h>


namespace TencentCloud
{
    namespace Cdwdoris
    {
        namespace V20211228
        {
            namespace Model
            {
                /**
                * ExecuteParametrizedQuery request structure.
                */
                class ExecuteParametrizedQueryRequest : public AbstractModel
                {
                public:
                    ExecuteParametrizedQueryRequest();
                    ~ExecuteParametrizedQueryRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Database name
                     * @return Database Database name
                     * 
                     */
                    std::string GetDatabase() const;

                    /**
                     * 设置Database name
                     * @param _database Database name
                     * 
                     */
                    void SetDatabase(const std::string& _database);

                    /**
                     * 判断参数 Database 是否已赋值
                     * @return Database 是否已赋值
                     * 
                     */
                    bool DatabaseHasBeenSet() const;

                    /**
                     * 获取SQL query statement
                     * @return Sql SQL query statement
                     * 
                     */
                    std::string GetSql() const;

                    /**
                     * 设置SQL query statement
                     * @param _sql SQL query statement
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
                     * 获取Query parameter array.
                     * @return QueryParameter Query parameter array.
                     * 
                     */
                    std::vector<PropertiesMap> GetQueryParameter() const;

                    /**
                     * 设置Query parameter array.
                     * @param _queryParameter Query parameter array.
                     * 
                     */
                    void SetQueryParameter(const std::vector<PropertiesMap>& _queryParameter);

                    /**
                     * 判断参数 QueryParameter 是否已赋值
                     * @return QueryParameter 是否已赋值
                     * 
                     */
                    bool QueryParameterHasBeenSet() const;

                    /**
                     * 获取Page number, which is 1 by default.
                     * @return PageNum Page number, which is 1 by default.
                     * 
                     */
                    uint64_t GetPageNum() const;

                    /**
                     * 设置Page number, which is 1 by default.
                     * @param _pageNum Page number, which is 1 by default.
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
                     * 获取Number of records per page, which is 10 by default.
                     * @return PageSize Number of records per page, which is 10 by default.
                     * 
                     */
                    uint64_t GetPageSize() const;

                    /**
                     * 设置Number of records per page, which is 10 by default.
                     * @param _pageSize Number of records per page, which is 10 by default.
                     * 
                     */
                    void SetPageSize(const uint64_t& _pageSize);

                    /**
                     * 判断参数 PageSize 是否已赋值
                     * @return PageSize 是否已赋值
                     * 
                     */
                    bool PageSizeHasBeenSet() const;

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

                private:

                    /**
                     * Database name
                     */
                    std::string m_database;
                    bool m_databaseHasBeenSet;

                    /**
                     * SQL query statement
                     */
                    std::string m_sql;
                    bool m_sqlHasBeenSet;

                    /**
                     * Query parameter array.
                     */
                    std::vector<PropertiesMap> m_queryParameter;
                    bool m_queryParameterHasBeenSet;

                    /**
                     * Page number, which is 1 by default.
                     */
                    uint64_t m_pageNum;
                    bool m_pageNumHasBeenSet;

                    /**
                     * Number of records per page, which is 10 by default.
                     */
                    uint64_t m_pageSize;
                    bool m_pageSizeHasBeenSet;

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

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CDWDORIS_V20211228_MODEL_EXECUTEPARAMETRIZEDQUERYREQUEST_H_
