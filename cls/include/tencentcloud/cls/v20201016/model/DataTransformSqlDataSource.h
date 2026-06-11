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

#ifndef TENCENTCLOUD_CLS_V20201016_MODEL_DATATRANSFORMSQLDATASOURCE_H_
#define TENCENTCLOUD_CLS_V20201016_MODEL_DATATRANSFORMSQLDATASOURCE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cls
    {
        namespace V20201016
        {
            namespace Model
            {
                /**
                * SQL information of external tables
                */
                class DataTransformSqlDataSource : public AbstractModel
                {
                public:
                    DataTransformSqlDataSource();
                    ~DataTransformSqlDataSource() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Data source type 1: MySql; 2: Self-built MySql; 3: PostgreSQL
                     * @return DataSource Data source type 1: MySql; 2: Self-built MySql; 3: PostgreSQL
                     * 
                     */
                    uint64_t GetDataSource() const;

                    /**
                     * 设置Data source type 1: MySql; 2: Self-built MySql; 3: PostgreSQL
                     * @param _dataSource Data source type 1: MySql; 2: Self-built MySql; 3: PostgreSQL
                     * 
                     */
                    void SetDataSource(const uint64_t& _dataSource);

                    /**
                     * 判断参数 DataSource 是否已赋值
                     * @return DataSource 是否已赋值
                     * 
                     */
                    bool DataSourceHasBeenSet() const;

                    /**
                     * 获取Region of the InstanceId. For example: ap-guangzhou
                     * @return Region Region of the InstanceId. For example: ap-guangzhou
                     * 
                     */
                    std::string GetRegion() const;

                    /**
                     * 设置Region of the InstanceId. For example: ap-guangzhou
                     * @param _region Region of the InstanceId. For example: ap-guangzhou
                     * 
                     */
                    void SetRegion(const std::string& _region);

                    /**
                     * 判断参数 Region 是否已赋值
                     * @return Region 是否已赋值
                     * 
                     */
                    bool RegionHasBeenSet() const;

                    /**
                     * 获取Instance ID.
-When DataSource is 1, it means the id of a cloud database Mysql Instance, such as cdb-zxcvbnm.

                     * @return InstanceId Instance ID.
-When DataSource is 1, it means the id of a cloud database Mysql Instance, such as cdb-zxcvbnm.

                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置Instance ID.
-When DataSource is 1, it means the id of a cloud database Mysql Instance, such as cdb-zxcvbnm.

                     * @param _instanceId Instance ID.
-When DataSource is 1, it means the id of a cloud database Mysql Instance, such as cdb-zxcvbnm.

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
                     * 获取mysql access username
                     * @return User mysql access username
                     * 
                     */
                    std::string GetUser() const;

                    /**
                     * 设置mysql access username
                     * @param _user mysql access username
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
                     * 获取Alias. For use in data processing statement.
                     * @return AliasName Alias. For use in data processing statement.
                     * 
                     */
                    std::string GetAliasName() const;

                    /**
                     * 设置Alias. For use in data processing statement.
                     * @param _aliasName Alias. For use in data processing statement.
                     * 
                     */
                    void SetAliasName(const std::string& _aliasName);

                    /**
                     * 判断参数 AliasName 是否已赋值
                     * @return AliasName 是否已赋值
                     * 
                     */
                    bool AliasNameHasBeenSet() const;

                    /**
                     * 获取mysql access password.
                     * @return Password mysql access password.
                     * 
                     */
                    std::string GetPassword() const;

                    /**
                     * 设置mysql access password.
                     * @param _password mysql access password.
                     * 
                     */
                    void SetPassword(const std::string& _password);

                    /**
                     * 判断参数 Password 是否已赋值
                     * @return Password 是否已赋值
                     * 
                     */
                    bool PasswordHasBeenSet() const;

                private:

                    /**
                     * Data source type 1: MySql; 2: Self-built MySql; 3: PostgreSQL
                     */
                    uint64_t m_dataSource;
                    bool m_dataSourceHasBeenSet;

                    /**
                     * Region of the InstanceId. For example: ap-guangzhou
                     */
                    std::string m_region;
                    bool m_regionHasBeenSet;

                    /**
                     * Instance ID.
-When DataSource is 1, it means the id of a cloud database Mysql Instance, such as cdb-zxcvbnm.

                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * mysql access username
                     */
                    std::string m_user;
                    bool m_userHasBeenSet;

                    /**
                     * Alias. For use in data processing statement.
                     */
                    std::string m_aliasName;
                    bool m_aliasNameHasBeenSet;

                    /**
                     * mysql access password.
                     */
                    std::string m_password;
                    bool m_passwordHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CLS_V20201016_MODEL_DATATRANSFORMSQLDATASOURCE_H_
