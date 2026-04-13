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

#ifndef TENCENTCLOUD_POSTGRES_V20170312_MODEL_MODIFYDATABASEOWNERREQUEST_H_
#define TENCENTCLOUD_POSTGRES_V20170312_MODEL_MODIFYDATABASEOWNERREQUEST_H_

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
                * ModifyDatabaseOwner request structure.
                */
                class ModifyDatabaseOwnerRequest : public AbstractModel
                {
                public:
                    ModifyDatabaseOwnerRequest();
                    ~ModifyDatabaseOwnerRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Instance ID. obtain through the api [DescribeDBInstances](https://www.tencentcloud.com/document/api/409/16773?from_cn_redirect=1).
                     * @return DBInstanceId Instance ID. obtain through the api [DescribeDBInstances](https://www.tencentcloud.com/document/api/409/16773?from_cn_redirect=1).
                     * 
                     */
                    std::string GetDBInstanceId() const;

                    /**
                     * 设置Instance ID. obtain through the api [DescribeDBInstances](https://www.tencentcloud.com/document/api/409/16773?from_cn_redirect=1).
                     * @param _dBInstanceId Instance ID. obtain through the api [DescribeDBInstances](https://www.tencentcloud.com/document/api/409/16773?from_cn_redirect=1).
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
                     * 获取Database name. obtain through the api [DescribeDatabases](https://www.tencentcloud.com/document/api/409/43353?from_cn_redirect=1).
                     * @return DatabaseName Database name. obtain through the api [DescribeDatabases](https://www.tencentcloud.com/document/api/409/43353?from_cn_redirect=1).
                     * 
                     */
                    std::string GetDatabaseName() const;

                    /**
                     * 设置Database name. obtain through the api [DescribeDatabases](https://www.tencentcloud.com/document/api/409/43353?from_cn_redirect=1).
                     * @param _databaseName Database name. obtain through the api [DescribeDatabases](https://www.tencentcloud.com/document/api/409/43353?from_cn_redirect=1).
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
                     * 获取New owner of the database. obtain through the api [DescribeAccounts](https://www.tencentcloud.com/document/api/409/18109?from_cn_redirect=1).
                     * @return DatabaseOwner New owner of the database. obtain through the api [DescribeAccounts](https://www.tencentcloud.com/document/api/409/18109?from_cn_redirect=1).
                     * 
                     */
                    std::string GetDatabaseOwner() const;

                    /**
                     * 设置New owner of the database. obtain through the api [DescribeAccounts](https://www.tencentcloud.com/document/api/409/18109?from_cn_redirect=1).
                     * @param _databaseOwner New owner of the database. obtain through the api [DescribeAccounts](https://www.tencentcloud.com/document/api/409/18109?from_cn_redirect=1).
                     * 
                     */
                    void SetDatabaseOwner(const std::string& _databaseOwner);

                    /**
                     * 判断参数 DatabaseOwner 是否已赋值
                     * @return DatabaseOwner 是否已赋值
                     * 
                     */
                    bool DatabaseOwnerHasBeenSet() const;

                private:

                    /**
                     * Instance ID. obtain through the api [DescribeDBInstances](https://www.tencentcloud.com/document/api/409/16773?from_cn_redirect=1).
                     */
                    std::string m_dBInstanceId;
                    bool m_dBInstanceIdHasBeenSet;

                    /**
                     * Database name. obtain through the api [DescribeDatabases](https://www.tencentcloud.com/document/api/409/43353?from_cn_redirect=1).
                     */
                    std::string m_databaseName;
                    bool m_databaseNameHasBeenSet;

                    /**
                     * New owner of the database. obtain through the api [DescribeAccounts](https://www.tencentcloud.com/document/api/409/18109?from_cn_redirect=1).
                     */
                    std::string m_databaseOwner;
                    bool m_databaseOwnerHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_POSTGRES_V20170312_MODEL_MODIFYDATABASEOWNERREQUEST_H_
