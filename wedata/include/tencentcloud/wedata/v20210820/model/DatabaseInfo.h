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

#ifndef TENCENTCLOUD_WEDATA_V20210820_MODEL_DATABASEINFO_H_
#define TENCENTCLOUD_WEDATA_V20210820_MODEL_DATABASEINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Wedata
    {
        namespace V20210820
        {
            namespace Model
            {
                /**
                * Data Quality Data Source Database
                */
                class DatabaseInfo : public AbstractModel
                {
                public:
                    DatabaseInfo();
                    ~DatabaseInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Data source name
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return DatasourceName Data source name
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    std::string GetDatasourceName() const;

                    /**
                     * 设置Data source name
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _datasourceName Data source name
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetDatasourceName(const std::string& _datasourceName);

                    /**
                     * 判断参数 DatasourceName 是否已赋值
                     * @return DatasourceName 是否已赋值
                     * 
                     */
                    bool DatasourceNameHasBeenSet() const;

                    /**
                     * 获取Data Source IDNote: This field may return null, indicating that no valid value can be obtained.
                     * @return DatasourceId Data Source IDNote: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    std::string GetDatasourceId() const;

                    /**
                     * 设置Data Source IDNote: This field may return null, indicating that no valid value can be obtained.
                     * @param _datasourceId Data Source IDNote: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetDatasourceId(const std::string& _datasourceId);

                    /**
                     * 判断参数 DatasourceId 是否已赋值
                     * @return DatasourceId 是否已赋值
                     * 
                     */
                    bool DatasourceIdHasBeenSet() const;

                    /**
                     * 获取Database nameNote: This field may return null, indicating that no valid value can be obtained.
                     * @return DatabaseName Database nameNote: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    std::string GetDatabaseName() const;

                    /**
                     * 设置Database nameNote: This field may return null, indicating that no valid value can be obtained.
                     * @param _databaseName Database nameNote: This field may return null, indicating that no valid value can be obtained.
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
                     * 获取Database id
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return DatabaseId Database id
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    std::string GetDatabaseId() const;

                    /**
                     * 设置Database id
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _databaseId Database id
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetDatabaseId(const std::string& _databaseId);

                    /**
                     * 判断参数 DatabaseId 是否已赋值
                     * @return DatabaseId 是否已赋值
                     * 
                     */
                    bool DatabaseIdHasBeenSet() const;

                    /**
                     * 获取Instance Id
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return InstanceId Instance Id
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置Instance Id
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _instanceId Instance Id
Note: This field may return null, indicating that no valid value can be obtained.
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
                     * 获取Data source typeNote: This field may return null, indicating that no valid value can be obtained.
                     * @return DatasourceType Data source typeNote: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    uint64_t GetDatasourceType() const;

                    /**
                     * 设置Data source typeNote: This field may return null, indicating that no valid value can be obtained.
                     * @param _datasourceType Data source typeNote: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetDatasourceType(const uint64_t& _datasourceType);

                    /**
                     * 判断参数 DatasourceType 是否已赋值
                     * @return DatasourceType 是否已赋值
                     * 
                     */
                    bool DatasourceTypeHasBeenSet() const;

                    /**
                     * 获取Database Original Name
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return OriginDatabaseName Database Original Name
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    std::string GetOriginDatabaseName() const;

                    /**
                     * 设置Database Original Name
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _originDatabaseName Database Original Name
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetOriginDatabaseName(const std::string& _originDatabaseName);

                    /**
                     * 判断参数 OriginDatabaseName 是否已赋值
                     * @return OriginDatabaseName 是否已赋值
                     * 
                     */
                    bool OriginDatabaseNameHasBeenSet() const;

                    /**
                     * 获取Schema NameNote: This field may return null, indicating that no valid value can be obtained.
                     * @return OriginSchemaName Schema NameNote: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    std::string GetOriginSchemaName() const;

                    /**
                     * 设置Schema NameNote: This field may return null, indicating that no valid value can be obtained.
                     * @param _originSchemaName Schema NameNote: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetOriginSchemaName(const std::string& _originSchemaName);

                    /**
                     * 判断参数 OriginSchemaName 是否已赋值
                     * @return OriginSchemaName 是否已赋值
                     * 
                     */
                    bool OriginSchemaNameHasBeenSet() const;

                    /**
                     * 获取0 or Not Returned. Undefined, 1. generation 2. development
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return DsEnvType 0 or Not Returned. Undefined, 1. generation 2. development
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    int64_t GetDsEnvType() const;

                    /**
                     * 设置0 or Not Returned. Undefined, 1. generation 2. development
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _dsEnvType 0 or Not Returned. Undefined, 1. generation 2. development
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetDsEnvType(const int64_t& _dsEnvType);

                    /**
                     * 判断参数 DsEnvType 是否已赋值
                     * @return DsEnvType 是否已赋值
                     * 
                     */
                    bool DsEnvTypeHasBeenSet() const;

                private:

                    /**
                     * Data source name
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    std::string m_datasourceName;
                    bool m_datasourceNameHasBeenSet;

                    /**
                     * Data Source IDNote: This field may return null, indicating that no valid value can be obtained.
                     */
                    std::string m_datasourceId;
                    bool m_datasourceIdHasBeenSet;

                    /**
                     * Database nameNote: This field may return null, indicating that no valid value can be obtained.
                     */
                    std::string m_databaseName;
                    bool m_databaseNameHasBeenSet;

                    /**
                     * Database id
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    std::string m_databaseId;
                    bool m_databaseIdHasBeenSet;

                    /**
                     * Instance Id
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * Data source typeNote: This field may return null, indicating that no valid value can be obtained.
                     */
                    uint64_t m_datasourceType;
                    bool m_datasourceTypeHasBeenSet;

                    /**
                     * Database Original Name
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    std::string m_originDatabaseName;
                    bool m_originDatabaseNameHasBeenSet;

                    /**
                     * Schema NameNote: This field may return null, indicating that no valid value can be obtained.
                     */
                    std::string m_originSchemaName;
                    bool m_originSchemaNameHasBeenSet;

                    /**
                     * 0 or Not Returned. Undefined, 1. generation 2. development
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    int64_t m_dsEnvType;
                    bool m_dsEnvTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20210820_MODEL_DATABASEINFO_H_
