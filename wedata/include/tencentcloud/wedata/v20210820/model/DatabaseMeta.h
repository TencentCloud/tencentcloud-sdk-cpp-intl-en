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

#ifndef TENCENTCLOUD_WEDATA_V20210820_MODEL_DATABASEMETA_H_
#define TENCENTCLOUD_WEDATA_V20210820_MODEL_DATABASEMETA_H_

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
                * Data Source Metadata
                */
                class DatabaseMeta : public AbstractModel
                {
                public:
                    DatabaseMeta();
                    ~DatabaseMeta() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Project IDNote: This field may return null, indicating that no valid value can be obtained.
                     * @return ProjectId Project IDNote: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    std::string GetProjectId() const;

                    /**
                     * 设置Project IDNote: This field may return null, indicating that no valid value can be obtained.
                     * @param _projectId Project IDNote: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetProjectId(const std::string& _projectId);

                    /**
                     * 判断参数 ProjectId 是否已赋值
                     * @return ProjectId 是否已赋值
                     * 
                     */
                    bool ProjectIdHasBeenSet() const;

                    /**
                     * 获取Technology Type
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return MetastoreType Technology Type
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    std::string GetMetastoreType() const;

                    /**
                     * 设置Technology Type
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _metastoreType Technology Type
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetMetastoreType(const std::string& _metastoreType);

                    /**
                     * 判断参数 MetastoreType 是否已赋值
                     * @return MetastoreType 是否已赋值
                     * 
                     */
                    bool MetastoreTypeHasBeenSet() const;

                    /**
                     * 获取Data Source Name
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return DatasourceName Data Source Name
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    std::string GetDatasourceName() const;

                    /**
                     * 设置Data Source Name
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _datasourceName Data Source Name
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
                    int64_t GetDatasourceId() const;

                    /**
                     * 设置Data Source IDNote: This field may return null, indicating that no valid value can be obtained.
                     * @param _datasourceId Data Source IDNote: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetDatasourceId(const int64_t& _datasourceId);

                    /**
                     * 判断参数 DatasourceId 是否已赋值
                     * @return DatasourceId 是否已赋值
                     * 
                     */
                    bool DatasourceIdHasBeenSet() const;

                    /**
                     * 获取Project English Name
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return ProjectName Project English Name
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    std::string GetProjectName() const;

                    /**
                     * 设置Project English Name
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _projectName Project English Name
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetProjectName(const std::string& _projectName);

                    /**
                     * 判断参数 ProjectName 是否已赋值
                     * @return ProjectName 是否已赋值
                     * 
                     */
                    bool ProjectNameHasBeenSet() const;

                    /**
                     * 获取Data Source Category: Binding Engine, Binding Database, Available Values: DB, ENGINE
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return Category Data Source Category: Binding Engine, Binding Database, Available Values: DB, ENGINE
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    std::string GetCategory() const;

                    /**
                     * 设置Data Source Category: Binding Engine, Binding Database, Available Values: DB, ENGINE
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _category Data Source Category: Binding Engine, Binding Database, Available Values: DB, ENGINE
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetCategory(const std::string& _category);

                    /**
                     * 判断参数 Category 是否已赋值
                     * @return Category 是否已赋值
                     * 
                     */
                    bool CategoryHasBeenSet() const;

                    /**
                     * 获取Data source description informationNote: This field may return null, indicating that no valid value can be obtained.
                     * @return Description Data source description informationNote: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置Data source description informationNote: This field may return null, indicating that no valid value can be obtained.
                     * @param _description Data source description informationNote: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetDescription(const std::string& _description);

                    /**
                     * 判断参数 Description 是否已赋值
                     * @return Description 是否已赋值
                     * 
                     */
                    bool DescriptionHasBeenSet() const;

                    /**
                     * 获取Instance ID of the data source engine, e.g., CDB Instance IDNote: This field may return null, indicating that no valid value can be obtained.
                     * @return Instance Instance ID of the data source engine, e.g., CDB Instance IDNote: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    std::string GetInstance() const;

                    /**
                     * 设置Instance ID of the data source engine, e.g., CDB Instance IDNote: This field may return null, indicating that no valid value can be obtained.
                     * @param _instance Instance ID of the data source engine, e.g., CDB Instance IDNote: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetInstance(const std::string& _instance);

                    /**
                     * 判断参数 Instance 是否已赋值
                     * @return Instance 是否已赋值
                     * 
                     */
                    bool InstanceHasBeenSet() const;

                    /**
                     * 获取Data Source Engine Region
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return Region Data Source Engine Region
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    std::string GetRegion() const;

                    /**
                     * 设置Data Source Engine Region
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _region Data Source Engine Region
Note: This field may return null, indicating that no valid value can be obtained.
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
                     * 获取Visibility of the data source, where 1 is visible and 0 is not visible. Default is 1Note: This field may return null, indicating that no valid value can be obtained.
                     * @return Status Visibility of the data source, where 1 is visible and 0 is not visible. Default is 1Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    int64_t GetStatus() const;

                    /**
                     * 设置Visibility of the data source, where 1 is visible and 0 is not visible. Default is 1Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _status Visibility of the data source, where 1 is visible and 0 is not visible. Default is 1Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetStatus(const int64_t& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取Database Name
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return DatabaseName Database Name
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    std::string GetDatabaseName() const;

                    /**
                     * 设置Database Name
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _databaseName Database Name
Note: This field may return null, indicating that no valid value can be obtained.
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
                     * 获取Project Chinese Name
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return ProjectDisplayName Project Chinese Name
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    std::string GetProjectDisplayName() const;

                    /**
                     * 设置Project Chinese Name
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _projectDisplayName Project Chinese Name
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetProjectDisplayName(const std::string& _projectDisplayName);

                    /**
                     * 判断参数 ProjectDisplayName 是否已赋值
                     * @return ProjectDisplayName 是否已赋值
                     * 
                     */
                    bool ProjectDisplayNameHasBeenSet() const;

                    /**
                     * 获取Person in Charge Name
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return OwnerAccountName Person in Charge Name
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    std::string GetOwnerAccountName() const;

                    /**
                     * 设置Person in Charge Name
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _ownerAccountName Person in Charge Name
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetOwnerAccountName(const std::string& _ownerAccountName);

                    /**
                     * 判断参数 OwnerAccountName 是否已赋值
                     * @return OwnerAccountName 是否已赋值
                     * 
                     */
                    bool OwnerAccountNameHasBeenSet() const;

                    /**
                     * 获取Data Source Display Name
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return DisplayName Data Source Display Name
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    std::string GetDisplayName() const;

                    /**
                     * 设置Data Source Display Name
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _displayName Data Source Display Name
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetDisplayName(const std::string& _displayName);

                    /**
                     * 判断参数 DisplayName 是否已赋值
                     * @return DisplayName 是否已赋值
                     * 
                     */
                    bool DisplayNameHasBeenSet() const;

                    /**
                     * 获取Database ID
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return DatabaseId Database ID
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    std::string GetDatabaseId() const;

                    /**
                     * 设置Database ID
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _databaseId Database ID
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
                     * 获取Data Source Type: hive/mysql/hbase, etc.
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return Catalog Data Source Type: hive/mysql/hbase, etc.
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    std::string GetCatalog() const;

                    /**
                     * 设置Data Source Type: hive/mysql/hbase, etc.
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _catalog Data Source Type: hive/mysql/hbase, etc.
Note: This field may return null, indicating that no valid value can be obtained.
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
                     * 获取Storage Size in bytes
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return StorageSize Storage Size in bytes
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    int64_t GetStorageSize() const;

                    /**
                     * 设置Storage Size in bytes
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _storageSize Storage Size in bytes
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetStorageSize(const int64_t& _storageSize);

                    /**
                     * 判断参数 StorageSize 是否已赋值
                     * @return StorageSize 是否已赋值
                     * 
                     */
                    bool StorageSizeHasBeenSet() const;

                    /**
                     * 获取Formatted Storage Size, with unit, e.g., 12B
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return StorageSizeWithUnit Formatted Storage Size, with unit, e.g., 12B
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    std::string GetStorageSizeWithUnit() const;

                    /**
                     * 设置Formatted Storage Size, with unit, e.g., 12B
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _storageSizeWithUnit Formatted Storage Size, with unit, e.g., 12B
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetStorageSizeWithUnit(const std::string& _storageSizeWithUnit);

                    /**
                     * 判断参数 StorageSizeWithUnit 是否已赋值
                     * @return StorageSizeWithUnit 是否已赋值
                     * 
                     */
                    bool StorageSizeWithUnitHasBeenSet() const;

                    /**
                     * 获取Creation TimeNote: This field may return null, indicating that no valid value can be obtained.
                     * @return CreateTime Creation TimeNote: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置Creation TimeNote: This field may return null, indicating that no valid value can be obtained.
                     * @param _createTime Creation TimeNote: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetCreateTime(const std::string& _createTime);

                    /**
                     * 判断参数 CreateTime 是否已赋值
                     * @return CreateTime 是否已赋值
                     * 
                     */
                    bool CreateTimeHasBeenSet() const;

                private:

                    /**
                     * Project IDNote: This field may return null, indicating that no valid value can be obtained.
                     */
                    std::string m_projectId;
                    bool m_projectIdHasBeenSet;

                    /**
                     * Technology Type
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    std::string m_metastoreType;
                    bool m_metastoreTypeHasBeenSet;

                    /**
                     * Data Source Name
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    std::string m_datasourceName;
                    bool m_datasourceNameHasBeenSet;

                    /**
                     * Data Source IDNote: This field may return null, indicating that no valid value can be obtained.
                     */
                    int64_t m_datasourceId;
                    bool m_datasourceIdHasBeenSet;

                    /**
                     * Project English Name
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    std::string m_projectName;
                    bool m_projectNameHasBeenSet;

                    /**
                     * Data Source Category: Binding Engine, Binding Database, Available Values: DB, ENGINE
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    std::string m_category;
                    bool m_categoryHasBeenSet;

                    /**
                     * Data source description informationNote: This field may return null, indicating that no valid value can be obtained.
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * Instance ID of the data source engine, e.g., CDB Instance IDNote: This field may return null, indicating that no valid value can be obtained.
                     */
                    std::string m_instance;
                    bool m_instanceHasBeenSet;

                    /**
                     * Data Source Engine Region
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    std::string m_region;
                    bool m_regionHasBeenSet;

                    /**
                     * Visibility of the data source, where 1 is visible and 0 is not visible. Default is 1Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    int64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * Database Name
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    std::string m_databaseName;
                    bool m_databaseNameHasBeenSet;

                    /**
                     * Project Chinese Name
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    std::string m_projectDisplayName;
                    bool m_projectDisplayNameHasBeenSet;

                    /**
                     * Person in Charge Name
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    std::string m_ownerAccountName;
                    bool m_ownerAccountNameHasBeenSet;

                    /**
                     * Data Source Display Name
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    std::string m_displayName;
                    bool m_displayNameHasBeenSet;

                    /**
                     * Database ID
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    std::string m_databaseId;
                    bool m_databaseIdHasBeenSet;

                    /**
                     * Data Source Type: hive/mysql/hbase, etc.
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    std::string m_catalog;
                    bool m_catalogHasBeenSet;

                    /**
                     * Storage Size in bytes
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    int64_t m_storageSize;
                    bool m_storageSizeHasBeenSet;

                    /**
                     * Formatted Storage Size, with unit, e.g., 12B
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    std::string m_storageSizeWithUnit;
                    bool m_storageSizeWithUnitHasBeenSet;

                    /**
                     * Creation TimeNote: This field may return null, indicating that no valid value can be obtained.
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20210820_MODEL_DATABASEMETA_H_
