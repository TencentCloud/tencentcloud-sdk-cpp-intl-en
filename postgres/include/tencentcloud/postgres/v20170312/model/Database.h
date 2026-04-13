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

#ifndef TENCENTCLOUD_POSTGRES_V20170312_MODEL_DATABASE_H_
#define TENCENTCLOUD_POSTGRES_V20170312_MODEL_DATABASE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
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
                * Describes the database detailed information, including owner and character encoding.
                */
                class Database : public AbstractModel
                {
                public:
                    Database();
                    ~Database() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Database name
                     * @return DatabaseName Database name
                     * 
                     */
                    std::string GetDatabaseName() const;

                    /**
                     * 设置Database name
                     * @param _databaseName Database name
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
                     * 获取Specifies the database owner.
                     * @return DatabaseOwner Specifies the database owner.
                     * 
                     */
                    std::string GetDatabaseOwner() const;

                    /**
                     * 设置Specifies the database owner.
                     * @param _databaseOwner Specifies the database owner.
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
                     * 获取Specifies the database character encoding.
                     * @return Encoding Specifies the database character encoding.
                     * 
                     */
                    std::string GetEncoding() const;

                    /**
                     * 设置Specifies the database character encoding.
                     * @param _encoding Specifies the database character encoding.
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

                    /**
                     * 获取Specifies whether the database allows connections.
                     * @return AllowConn Specifies whether the database allows connections.
                     * 
                     */
                    bool GetAllowConn() const;

                    /**
                     * 设置Specifies whether the database allows connections.
                     * @param _allowConn Specifies whether the database allows connections.
                     * 
                     */
                    void SetAllowConn(const bool& _allowConn);

                    /**
                     * 判断参数 AllowConn 是否已赋值
                     * @return AllowConn 是否已赋值
                     * 
                     */
                    bool AllowConnHasBeenSet() const;

                    /**
                     * 获取Maximum number of connections for the database. -1 indicates unlimited.
                     * @return ConnLimit Maximum number of connections for the database. -1 indicates unlimited.
                     * 
                     */
                    int64_t GetConnLimit() const;

                    /**
                     * 设置Maximum number of connections for the database. -1 indicates unlimited.
                     * @param _connLimit Maximum number of connections for the database. -1 indicates unlimited.
                     * 
                     */
                    void SetConnLimit(const int64_t& _connLimit);

                    /**
                     * 判断参数 ConnLimit 是否已赋值
                     * @return ConnLimit 是否已赋值
                     * 
                     */
                    bool ConnLimitHasBeenSet() const;

                    /**
                     * 获取Specifies the database permission list.
                     * @return Privileges Specifies the database permission list.
                     * 
                     */
                    std::string GetPrivileges() const;

                    /**
                     * 设置Specifies the database permission list.
                     * @param _privileges Specifies the database permission list.
                     * 
                     */
                    void SetPrivileges(const std::string& _privileges);

                    /**
                     * 判断参数 Privileges 是否已赋值
                     * @return Privileges 是否已赋值
                     * 
                     */
                    bool PrivilegesHasBeenSet() const;

                private:

                    /**
                     * Database name
                     */
                    std::string m_databaseName;
                    bool m_databaseNameHasBeenSet;

                    /**
                     * Specifies the database owner.
                     */
                    std::string m_databaseOwner;
                    bool m_databaseOwnerHasBeenSet;

                    /**
                     * Specifies the database character encoding.
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

                    /**
                     * Specifies whether the database allows connections.
                     */
                    bool m_allowConn;
                    bool m_allowConnHasBeenSet;

                    /**
                     * Maximum number of connections for the database. -1 indicates unlimited.
                     */
                    int64_t m_connLimit;
                    bool m_connLimitHasBeenSet;

                    /**
                     * Specifies the database permission list.
                     */
                    std::string m_privileges;
                    bool m_privilegesHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_POSTGRES_V20170312_MODEL_DATABASE_H_
