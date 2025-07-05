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

#ifndef TENCENTCLOUD_DLC_V20210125_MODEL_SMARTPOLICYBASEINFO_H_
#define TENCENTCLOUD_DLC_V20210125_MODEL_SMARTPOLICYBASEINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Dlc
    {
        namespace V20210125
        {
            namespace Model
            {
                /**
                * SmartPolicyBaseInfo
                */
                class SmartPolicyBaseInfo : public AbstractModel
                {
                public:
                    SmartPolicyBaseInfo();
                    ~SmartPolicyBaseInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取User UIN
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Uin User UIN
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetUin() const;

                    /**
                     * 设置User UIN
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _uin User UIN
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetUin(const std::string& _uin);

                    /**
                     * 判断参数 Uin 是否已赋值
                     * @return Uin 是否已赋值
                     * 
                     */
                    bool UinHasBeenSet() const;

                    /**
                     * 获取Catalog/Database/Table
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return PolicyType Catalog/Database/Table
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetPolicyType() const;

                    /**
                     * 设置Catalog/Database/Table
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _policyType Catalog/Database/Table
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetPolicyType(const std::string& _policyType);

                    /**
                     * 判断参数 PolicyType 是否已赋值
                     * @return PolicyType 是否已赋值
                     * 
                     */
                    bool PolicyTypeHasBeenSet() const;

                    /**
                     * 获取Catalog name
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Catalog Catalog name
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetCatalog() const;

                    /**
                     * 设置Catalog name
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _catalog Catalog name
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetCatalog(const std::string& _catalog);

                    /**
                     * 判断参数 Catalog 是否已赋值
                     * @return Catalog 是否已赋值
                     * 
                     */
                    bool CatalogHasBeenSet() const;

                    /**
                     * 获取Database name
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Database Database name
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetDatabase() const;

                    /**
                     * 设置Database name
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _database Database name
Note: This field may return null, indicating that no valid values can be obtained.
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
                     * 获取Table name
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Table Table name
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetTable() const;

                    /**
                     * 设置Table name
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _table Table name
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetTable(const std::string& _table);

                    /**
                     * 判断参数 Table 是否已赋值
                     * @return Table 是否已赋值
                     * 
                     */
                    bool TableHasBeenSet() const;

                    /**
                     * 获取User AppID
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return AppId User AppID
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetAppId() const;

                    /**
                     * 设置User AppID
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _appId User AppID
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetAppId(const std::string& _appId);

                    /**
                     * 判断参数 AppId 是否已赋值
                     * @return AppId 是否已赋值
                     * 
                     */
                    bool AppIdHasBeenSet() const;

                private:

                    /**
                     * User UIN
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_uin;
                    bool m_uinHasBeenSet;

                    /**
                     * Catalog/Database/Table
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_policyType;
                    bool m_policyTypeHasBeenSet;

                    /**
                     * Catalog name
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_catalog;
                    bool m_catalogHasBeenSet;

                    /**
                     * Database name
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_database;
                    bool m_databaseHasBeenSet;

                    /**
                     * Table name
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_table;
                    bool m_tableHasBeenSet;

                    /**
                     * User AppID
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_appId;
                    bool m_appIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DLC_V20210125_MODEL_SMARTPOLICYBASEINFO_H_
