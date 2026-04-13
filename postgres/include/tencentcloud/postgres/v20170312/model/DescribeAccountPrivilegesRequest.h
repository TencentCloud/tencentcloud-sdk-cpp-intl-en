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

#ifndef TENCENTCLOUD_POSTGRES_V20170312_MODEL_DESCRIBEACCOUNTPRIVILEGESREQUEST_H_
#define TENCENTCLOUD_POSTGRES_V20170312_MODEL_DESCRIBEACCOUNTPRIVILEGESREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/postgres/v20170312/model/DatabaseObject.h>


namespace TencentCloud
{
    namespace Postgres
    {
        namespace V20170312
        {
            namespace Model
            {
                /**
                * DescribeAccountPrivileges request structure.
                */
                class DescribeAccountPrivilegesRequest : public AbstractModel
                {
                public:
                    DescribeAccountPrivilegesRequest();
                    ~DescribeAccountPrivilegesRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Instance ID. obtain through the api [DescribeDBInstances](https://www.tencentcloud.com/document/product/409/16773?lang=en).
                     * @return DBInstanceId Instance ID. obtain through the api [DescribeDBInstances](https://www.tencentcloud.com/document/product/409/16773?lang=en).
                     * 
                     */
                    std::string GetDBInstanceId() const;

                    /**
                     * 设置Instance ID. obtain through the api [DescribeDBInstances](https://www.tencentcloud.com/document/product/409/16773?lang=en).
                     * @param _dBInstanceId Instance ID. obtain through the api [DescribeDBInstances](https://www.tencentcloud.com/document/product/409/16773?lang=en).
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
                     * 获取Describes the permissions owned by this account for a database object. the account name can be obtained through the [DescribeAccounts](https://www.tencentcloud.com/document/product/409/18109?lang=en) api.
                     * @return UserName Describes the permissions owned by this account for a database object. the account name can be obtained through the [DescribeAccounts](https://www.tencentcloud.com/document/product/409/18109?lang=en) api.
                     * 
                     */
                    std::string GetUserName() const;

                    /**
                     * 设置Describes the permissions owned by this account for a database object. the account name can be obtained through the [DescribeAccounts](https://www.tencentcloud.com/document/product/409/18109?lang=en) api.
                     * @param _userName Describes the permissions owned by this account for a database object. the account name can be obtained through the [DescribeAccounts](https://www.tencentcloud.com/document/product/409/18109?lang=en) api.
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
                     * 获取Specifies the database object information to query.
                     * @return DatabaseObjectSet Specifies the database object information to query.
                     * 
                     */
                    std::vector<DatabaseObject> GetDatabaseObjectSet() const;

                    /**
                     * 设置Specifies the database object information to query.
                     * @param _databaseObjectSet Specifies the database object information to query.
                     * 
                     */
                    void SetDatabaseObjectSet(const std::vector<DatabaseObject>& _databaseObjectSet);

                    /**
                     * 判断参数 DatabaseObjectSet 是否已赋值
                     * @return DatabaseObjectSet 是否已赋值
                     * 
                     */
                    bool DatabaseObjectSetHasBeenSet() const;

                private:

                    /**
                     * Instance ID. obtain through the api [DescribeDBInstances](https://www.tencentcloud.com/document/product/409/16773?lang=en).
                     */
                    std::string m_dBInstanceId;
                    bool m_dBInstanceIdHasBeenSet;

                    /**
                     * Describes the permissions owned by this account for a database object. the account name can be obtained through the [DescribeAccounts](https://www.tencentcloud.com/document/product/409/18109?lang=en) api.
                     */
                    std::string m_userName;
                    bool m_userNameHasBeenSet;

                    /**
                     * Specifies the database object information to query.
                     */
                    std::vector<DatabaseObject> m_databaseObjectSet;
                    bool m_databaseObjectSetHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_POSTGRES_V20170312_MODEL_DESCRIBEACCOUNTPRIVILEGESREQUEST_H_
