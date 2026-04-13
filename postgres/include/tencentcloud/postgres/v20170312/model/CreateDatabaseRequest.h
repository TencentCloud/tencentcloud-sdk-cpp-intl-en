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

#ifndef TENCENTCLOUD_POSTGRES_V20170312_MODEL_CREATEDATABASEREQUEST_H_
#define TENCENTCLOUD_POSTGRES_V20170312_MODEL_CREATEDATABASEREQUEST_H_

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
                * CreateDatabase request structure.
                */
                class CreateDatabaseRequest : public AbstractModel
                {
                public:
                    CreateDatabaseRequest();
                    ~CreateDatabaseRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Specifies the instance ID, such as postgres-6fego161. obtain through the api [DescribeDBInstances](https://www.tencentcloud.com/document/api/409/16773?from_cn_redirect=1).
                     * @return DBInstanceId Specifies the instance ID, such as postgres-6fego161. obtain through the api [DescribeDBInstances](https://www.tencentcloud.com/document/api/409/16773?from_cn_redirect=1).
                     * 
                     */
                    std::string GetDBInstanceId() const;

                    /**
                     * 设置Specifies the instance ID, such as postgres-6fego161. obtain through the api [DescribeDBInstances](https://www.tencentcloud.com/document/api/409/16773?from_cn_redirect=1).
                     * @param _dBInstanceId Specifies the instance ID, such as postgres-6fego161. obtain through the api [DescribeDBInstances](https://www.tencentcloud.com/document/api/409/16773?from_cn_redirect=1).
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
                     * 获取Specifies the user-created database name.
Name specification: consists of letters (a-z, a-z), digits (0-9), and underscores (_), starting with a letter or underscore (_), up to 63 characters. system reserved keywords cannot be used, and 'postgres' is not allowed.
                     * @return DatabaseName Specifies the user-created database name.
Name specification: consists of letters (a-z, a-z), digits (0-9), and underscores (_), starting with a letter or underscore (_), up to 63 characters. system reserved keywords cannot be used, and 'postgres' is not allowed.
                     * 
                     */
                    std::string GetDatabaseName() const;

                    /**
                     * 设置Specifies the user-created database name.
Name specification: consists of letters (a-z, a-z), digits (0-9), and underscores (_), starting with a letter or underscore (_), up to 63 characters. system reserved keywords cannot be used, and 'postgres' is not allowed.
                     * @param _databaseName Specifies the user-created database name.
Name specification: consists of letters (a-z, a-z), digits (0-9), and underscores (_), starting with a letter or underscore (_), up to 63 characters. system reserved keywords cannot be used, and 'postgres' is not allowed.
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
                     * 获取Owner of the database. obtain through the api [DescribeAccounts](https://www.tencentcloud.com/document/api/409/18109?from_cn_redirect=1).
                     * @return DatabaseOwner Owner of the database. obtain through the api [DescribeAccounts](https://www.tencentcloud.com/document/api/409/18109?from_cn_redirect=1).
                     * 
                     */
                    std::string GetDatabaseOwner() const;

                    /**
                     * 设置Owner of the database. obtain through the api [DescribeAccounts](https://www.tencentcloud.com/document/api/409/18109?from_cn_redirect=1).
                     * @param _databaseOwner Owner of the database. obtain through the api [DescribeAccounts](https://www.tencentcloud.com/document/api/409/18109?from_cn_redirect=1).
                     * 
                     */
                    void SetDatabaseOwner(const std::string& _databaseOwner);

                    /**
                     * 判断参数 DatabaseOwner 是否已赋值
                     * @return DatabaseOwner 是否已赋值
                     * 
                     */
                    bool DatabaseOwnerHasBeenSet() const;

                    /**
                     * 获取Specifies the character encoding of the database.
Supported character sets include UTF8, LATIN1, LATIN2, WIN1250, WIN1251, WIN1252, KOI8R, EUC_JP, and EUC_KR.
Default value: UTF8.
                     * @return Encoding Specifies the character encoding of the database.
Supported character sets include UTF8, LATIN1, LATIN2, WIN1250, WIN1251, WIN1252, KOI8R, EUC_JP, and EUC_KR.
Default value: UTF8.
                     * 
                     */
                    std::string GetEncoding() const;

                    /**
                     * 设置Specifies the character encoding of the database.
Supported character sets include UTF8, LATIN1, LATIN2, WIN1250, WIN1251, WIN1252, KOI8R, EUC_JP, and EUC_KR.
Default value: UTF8.
                     * @param _encoding Specifies the character encoding of the database.
Supported character sets include UTF8, LATIN1, LATIN2, WIN1250, WIN1251, WIN1252, KOI8R, EUC_JP, and EUC_KR.
Default value: UTF8.
                     * 
                     */
                    void SetEncoding(const std::string& _encoding);

                    /**
                     * 判断参数 Encoding 是否已赋值
                     * @return Encoding 是否已赋值
                     * 
                     */
                    bool EncodingHasBeenSet() const;

                    /**
                     * 获取Specifies the database sorting rule.
                     * @return Collate Specifies the database sorting rule.
                     * 
                     */
                    std::string GetCollate() const;

                    /**
                     * 设置Specifies the database sorting rule.
                     * @param _collate Specifies the database sorting rule.
                     * 
                     */
                    void SetCollate(const std::string& _collate);

                    /**
                     * 判断参数 Collate 是否已赋值
                     * @return Collate 是否已赋值
                     * 
                     */
                    bool CollateHasBeenSet() const;

                    /**
                     * 获取Specifies the character category of the database.
                     * @return Ctype Specifies the character category of the database.
                     * 
                     */
                    std::string GetCtype() const;

                    /**
                     * 设置Specifies the character category of the database.
                     * @param _ctype Specifies the character category of the database.
                     * 
                     */
                    void SetCtype(const std::string& _ctype);

                    /**
                     * 判断参数 Ctype 是否已赋值
                     * @return Ctype 是否已赋值
                     * 
                     */
                    bool CtypeHasBeenSet() const;

                private:

                    /**
                     * Specifies the instance ID, such as postgres-6fego161. obtain through the api [DescribeDBInstances](https://www.tencentcloud.com/document/api/409/16773?from_cn_redirect=1).
                     */
                    std::string m_dBInstanceId;
                    bool m_dBInstanceIdHasBeenSet;

                    /**
                     * Specifies the user-created database name.
Name specification: consists of letters (a-z, a-z), digits (0-9), and underscores (_), starting with a letter or underscore (_), up to 63 characters. system reserved keywords cannot be used, and 'postgres' is not allowed.
                     */
                    std::string m_databaseName;
                    bool m_databaseNameHasBeenSet;

                    /**
                     * Owner of the database. obtain through the api [DescribeAccounts](https://www.tencentcloud.com/document/api/409/18109?from_cn_redirect=1).
                     */
                    std::string m_databaseOwner;
                    bool m_databaseOwnerHasBeenSet;

                    /**
                     * Specifies the character encoding of the database.
Supported character sets include UTF8, LATIN1, LATIN2, WIN1250, WIN1251, WIN1252, KOI8R, EUC_JP, and EUC_KR.
Default value: UTF8.
                     */
                    std::string m_encoding;
                    bool m_encodingHasBeenSet;

                    /**
                     * Specifies the database sorting rule.
                     */
                    std::string m_collate;
                    bool m_collateHasBeenSet;

                    /**
                     * Specifies the character category of the database.
                     */
                    std::string m_ctype;
                    bool m_ctypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_POSTGRES_V20170312_MODEL_CREATEDATABASEREQUEST_H_
