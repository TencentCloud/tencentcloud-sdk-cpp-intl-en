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

#ifndef TENCENTCLOUD_WEDATA_V20210820_MODEL_TABLEMETA_H_
#define TENCENTCLOUD_WEDATA_V20210820_MODEL_TABLEMETA_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/wedata/v20210820/model/TablePropertyScore.h>
#include <tencentcloud/wedata/v20210820/model/TableHeat.h>
#include <tencentcloud/wedata/v20210820/model/SearchColumnDocVO.h>


namespace TencentCloud
{
    namespace Wedata
    {
        namespace V20210820
        {
            namespace Model
            {
                /**
                * Table Metadata Information
                */
                class TableMeta : public AbstractModel
                {
                public:
                    TableMeta();
                    ~TableMeta() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Global Unique ID of the Table
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return TableId Global Unique ID of the Table
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    std::string GetTableId() const;

                    /**
                     * 设置Global Unique ID of the Table
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _tableId Global Unique ID of the Table
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetTableId(const std::string& _tableId);

                    /**
                     * 判断参数 TableId 是否已赋值
                     * @return TableId 是否已赋值
                     * 
                     */
                    bool TableIdHasBeenSet() const;

                    /**
                     * 获取Table NameNote: This field may return null, indicating that no valid value can be obtained.
                     * @return TableName Table NameNote: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    std::string GetTableName() const;

                    /**
                     * 设置Table NameNote: This field may return null, indicating that no valid value can be obtained.
                     * @param _tableName Table NameNote: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetTableName(const std::string& _tableName);

                    /**
                     * 判断参数 TableName 是否已赋值
                     * @return TableName 是否已赋值
                     * 
                     */
                    bool TableNameHasBeenSet() const;

                    /**
                     * 获取Person in ChargeNote: This field may return null, indicating that no valid value can be obtained.
                     * @return TableOwnerName Person in ChargeNote: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    std::string GetTableOwnerName() const;

                    /**
                     * 设置Person in ChargeNote: This field may return null, indicating that no valid value can be obtained.
                     * @param _tableOwnerName Person in ChargeNote: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetTableOwnerName(const std::string& _tableOwnerName);

                    /**
                     * 判断参数 TableOwnerName 是否已赋值
                     * @return TableOwnerName 是否已赋值
                     * 
                     */
                    bool TableOwnerNameHasBeenSet() const;

                    /**
                     * 获取Data Source Global Unique ID
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return DatasourceId Data Source Global Unique ID
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    int64_t GetDatasourceId() const;

                    /**
                     * 设置Data Source Global Unique ID
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _datasourceId Data Source Global Unique ID
Note: This field may return null, indicating that no valid value can be obtained.
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
                     * 获取Cluster Name
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return ClusterName Cluster Name
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    std::string GetClusterName() const;

                    /**
                     * 设置Cluster Name
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _clusterName Cluster Name
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetClusterName(const std::string& _clusterName);

                    /**
                     * 判断参数 ClusterName 是否已赋值
                     * @return ClusterName 是否已赋值
                     * 
                     */
                    bool ClusterNameHasBeenSet() const;

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
                     * 获取Table Path
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return TablePath Table Path
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    std::string GetTablePath() const;

                    /**
                     * 设置Table Path
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _tablePath Table Path
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetTablePath(const std::string& _tablePath);

                    /**
                     * 判断参数 TablePath 是否已赋值
                     * @return TablePath 是否已赋值
                     * 
                     */
                    bool TablePathHasBeenSet() const;

                    /**
                     * 获取Chinese Table Name
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return TableNameCn Chinese Table Name
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    std::string GetTableNameCn() const;

                    /**
                     * 设置Chinese Table Name
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _tableNameCn Chinese Table Name
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetTableNameCn(const std::string& _tableNameCn);

                    /**
                     * 判断参数 TableNameCn 是否已赋值
                     * @return TableNameCn 是否已赋值
                     * 
                     */
                    bool TableNameCnHasBeenSet() const;

                    /**
                     * 获取Metadata Tenant ID
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return MetastoreId Metadata Tenant ID
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    int64_t GetMetastoreId() const;

                    /**
                     * 设置Metadata Tenant ID
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _metastoreId Metadata Tenant ID
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetMetastoreId(const int64_t& _metastoreId);

                    /**
                     * 判断参数 MetastoreId 是否已赋值
                     * @return MetastoreId 是否已赋值
                     * 
                     */
                    bool MetastoreIdHasBeenSet() const;

                    /**
                     * 获取Technology Type, available values: HIVE,MYSQL,KAFKA, HBASE
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return MetastoreType Technology Type, available values: HIVE,MYSQL,KAFKA, HBASE
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    std::string GetMetastoreType() const;

                    /**
                     * 设置Technology Type, available values: HIVE,MYSQL,KAFKA, HBASE
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _metastoreType Technology Type, available values: HIVE,MYSQL,KAFKA, HBASE
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
                     * 获取Table Description
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return Description Table Description
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置Table Description
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _description Table Description
Note: This field may return null, indicating that no valid value can be obtained.
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
                     * 获取Column Separator
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return ColumnSeparator Column Separator
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    std::string GetColumnSeparator() const;

                    /**
                     * 设置Column Separator
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _columnSeparator Column Separator
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetColumnSeparator(const std::string& _columnSeparator);

                    /**
                     * 判断参数 ColumnSeparator 是否已赋值
                     * @return ColumnSeparator 是否已赋值
                     * 
                     */
                    bool ColumnSeparatorHasBeenSet() const;

                    /**
                     * 获取Storage Format
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return StorageFormat Storage Format
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    std::string GetStorageFormat() const;

                    /**
                     * 设置Storage Format
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _storageFormat Storage Format
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetStorageFormat(const std::string& _storageFormat);

                    /**
                     * 判断参数 StorageFormat 是否已赋值
                     * @return StorageFormat 是否已赋值
                     * 
                     */
                    bool StorageFormatHasBeenSet() const;

                    /**
                     * 获取Storage Volume, Byte Count
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return StorageSize Storage Volume, Byte Count
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    int64_t GetStorageSize() const;

                    /**
                     * 设置Storage Volume, Byte Count
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _storageSize Storage Volume, Byte Count
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
                     * 获取Table Types, such as hive MANAGED_TABLE;EXTERNAL_TABLE
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return TableType Table Types, such as hive MANAGED_TABLE;EXTERNAL_TABLE
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    std::string GetTableType() const;

                    /**
                     * 设置Table Types, such as hive MANAGED_TABLE;EXTERNAL_TABLE
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _tableType Table Types, such as hive MANAGED_TABLE;EXTERNAL_TABLE
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetTableType(const std::string& _tableType);

                    /**
                     * 判断参数 TableType 是否已赋值
                     * @return TableType 是否已赋值
                     * 
                     */
                    bool TableTypeHasBeenSet() const;

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

                    /**
                     * 获取Latest Data Modification Time
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return ModifyTime Latest Data Modification Time
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    std::string GetModifyTime() const;

                    /**
                     * 设置Latest Data Modification Time
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _modifyTime Latest Data Modification Time
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetModifyTime(const std::string& _modifyTime);

                    /**
                     * 判断参数 ModifyTime 是否已赋值
                     * @return ModifyTime 是否已赋值
                     * 
                     */
                    bool ModifyTimeHasBeenSet() const;

                    /**
                     * 获取Latest DDL Modification Time
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return DdlModifyTime Latest DDL Modification Time
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    std::string GetDdlModifyTime() const;

                    /**
                     * 设置Latest DDL Modification Time
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _ddlModifyTime Latest DDL Modification Time
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetDdlModifyTime(const std::string& _ddlModifyTime);

                    /**
                     * 判断参数 DdlModifyTime 是否已赋值
                     * @return DdlModifyTime 是否已赋值
                     * 
                     */
                    bool DdlModifyTimeHasBeenSet() const;

                    /**
                     * 获取Last Access Time of Data
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return LastAccessTime Last Access Time of Data
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    std::string GetLastAccessTime() const;

                    /**
                     * 设置Last Access Time of Data
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _lastAccessTime Last Access Time of Data
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetLastAccessTime(const std::string& _lastAccessTime);

                    /**
                     * 判断参数 LastAccessTime 是否已赋值
                     * @return LastAccessTime 是否已赋值
                     * 
                     */
                    bool LastAccessTimeHasBeenSet() const;

                    /**
                     * 获取Project Name in English
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return ProjectName Project Name in English
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    std::string GetProjectName() const;

                    /**
                     * 设置Project Name in English
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _projectName Project Name in English
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
                     * 获取Data Directory ID (may be multiple)
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return BizCatalogIds Data Directory ID (may be multiple)
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    std::vector<std::string> GetBizCatalogIds() const;

                    /**
                     * 设置Data Directory ID (may be multiple)
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _bizCatalogIds Data Directory ID (may be multiple)
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetBizCatalogIds(const std::vector<std::string>& _bizCatalogIds);

                    /**
                     * 判断参数 BizCatalogIds 是否已赋值
                     * @return BizCatalogIds 是否已赋值
                     * 
                     */
                    bool BizCatalogIdsHasBeenSet() const;

                    /**
                     * 获取Data Directory (may be multiple)
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return BizCatalogNames Data Directory (may be multiple)
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    std::vector<std::string> GetBizCatalogNames() const;

                    /**
                     * 设置Data Directory (may be multiple)
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _bizCatalogNames Data Directory (may be multiple)
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetBizCatalogNames(const std::vector<std::string>& _bizCatalogNames);

                    /**
                     * 判断参数 BizCatalogNames 是否已赋值
                     * @return BizCatalogNames 是否已赋值
                     * 
                     */
                    bool BizCatalogNamesHasBeenSet() const;

                    /**
                     * 获取true for Favorited/false indicates not favorited
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return HasFavorite true for Favorited/false indicates not favorited
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    bool GetHasFavorite() const;

                    /**
                     * 设置true for Favorited/false indicates not favorited
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _hasFavorite true for Favorited/false indicates not favorited
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetHasFavorite(const bool& _hasFavorite);

                    /**
                     * 判断参数 HasFavorite 是否已赋值
                     * @return HasFavorite 是否已赋值
                     * 
                     */
                    bool HasFavoriteHasBeenSet() const;

                    /**
                     * 获取LifecycleNote: This field may return null, indicating that no valid value can be obtained.
                     * @return LifeCycleTime LifecycleNote: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    int64_t GetLifeCycleTime() const;

                    /**
                     * 设置LifecycleNote: This field may return null, indicating that no valid value can be obtained.
                     * @param _lifeCycleTime LifecycleNote: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetLifeCycleTime(const int64_t& _lifeCycleTime);

                    /**
                     * 判断参数 LifeCycleTime 是否已赋值
                     * @return LifeCycleTime 是否已赋值
                     * 
                     */
                    bool LifeCycleTimeHasBeenSet() const;

                    /**
                     * 获取Storage Volume, displayed in appropriate units
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return StorageSizeWithUnit Storage Volume, displayed in appropriate units
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    std::string GetStorageSizeWithUnit() const;

                    /**
                     * 设置Storage Volume, displayed in appropriate units
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _storageSizeWithUnit Storage Volume, displayed in appropriate units
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
                     * 获取Instance ID of the Data Source Engine: e.g., EMR Cluster Instance ID/Data Source Instance ID
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return InstanceId Instance ID of the Data Source Engine: e.g., EMR Cluster Instance ID/Data Source Instance ID
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置Instance ID of the Data Source Engine: e.g., EMR Cluster Instance ID/Data Source Instance ID
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _instanceId Instance ID of the Data Source Engine: e.g., EMR Cluster Instance ID/Data Source Instance ID
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
                     * 获取Data Source Technology Type: HIVE/MYSQL/HBASE/KAFKA etc.
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return TechnologyType Data Source Technology Type: HIVE/MYSQL/HBASE/KAFKA etc.
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    std::string GetTechnologyType() const;

                    /**
                     * 设置Data Source Technology Type: HIVE/MYSQL/HBASE/KAFKA etc.
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _technologyType Data Source Technology Type: HIVE/MYSQL/HBASE/KAFKA etc.
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetTechnologyType(const std::string& _technologyType);

                    /**
                     * 判断参数 TechnologyType 是否已赋值
                     * @return TechnologyType 是否已赋值
                     * 
                     */
                    bool TechnologyTypeHasBeenSet() const;

                    /**
                     * 获取Table English Name
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return TableNameEn Table English Name
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    std::string GetTableNameEn() const;

                    /**
                     * 设置Table English Name
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _tableNameEn Table English Name
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetTableNameEn(const std::string& _tableNameEn);

                    /**
                     * 判断参数 TableNameEn 是否已赋值
                     * @return TableNameEn 是否已赋值
                     * 
                     */
                    bool TableNameEnHasBeenSet() const;

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
                     * 获取Number of partitions in Kafka Topic
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return Partitions Number of partitions in Kafka Topic
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    std::string GetPartitions() const;

                    /**
                     * 设置Number of partitions in Kafka Topic
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _partitions Number of partitions in Kafka Topic
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetPartitions(const std::string& _partitions);

                    /**
                     * 判断参数 Partitions 是否已赋值
                     * @return Partitions 是否已赋值
                     * 
                     */
                    bool PartitionsHasBeenSet() const;

                    /**
                     * 获取Number of replicas in Kafka Topic
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return ReplicationFactor Number of replicas in Kafka Topic
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    std::string GetReplicationFactor() const;

                    /**
                     * 设置Number of replicas in Kafka Topic
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _replicationFactor Number of replicas in Kafka Topic
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetReplicationFactor(const std::string& _replicationFactor);

                    /**
                     * 判断参数 ReplicationFactor 是否已赋值
                     * @return ReplicationFactor 是否已赋值
                     * 
                     */
                    bool ReplicationFactorHasBeenSet() const;

                    /**
                     * 获取Project English and Chinese Name
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return ProjectDisplayName Project English and Chinese Name
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    std::string GetProjectDisplayName() const;

                    /**
                     * 设置Project English and Chinese Name
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _projectDisplayName Project English and Chinese Name
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
                     * 获取Last Modified Time of Data
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return DataModifyTime Last Modified Time of Data
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    std::string GetDataModifyTime() const;

                    /**
                     * 设置Last Modified Time of Data
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _dataModifyTime Last Modified Time of Data
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetDataModifyTime(const std::string& _dataModifyTime);

                    /**
                     * 判断参数 DataModifyTime 是否已赋值
                     * @return DataModifyTime 是否已赋值
                     * 
                     */
                    bool DataModifyTimeHasBeenSet() const;

                    /**
                     * 获取Cluster ID
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return ClusterId Cluster ID
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    std::string GetClusterId() const;

                    /**
                     * 设置Cluster ID
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _clusterId Cluster ID
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetClusterId(const std::string& _clusterId);

                    /**
                     * 判断参数 ClusterId 是否已赋值
                     * @return ClusterId 是否已赋值
                     * 
                     */
                    bool ClusterIdHasBeenSet() const;

                    /**
                     * 获取Current user has Administrator Privileges
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return HasAdminAuthority Current user has Administrator Privileges
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    bool GetHasAdminAuthority() const;

                    /**
                     * 设置Current user has Administrator Privileges
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _hasAdminAuthority Current user has Administrator Privileges
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetHasAdminAuthority(const bool& _hasAdminAuthority);

                    /**
                     * 判断参数 HasAdminAuthority 是否已赋值
                     * @return HasAdminAuthority 是否已赋值
                     * 
                     */
                    bool HasAdminAuthorityHasBeenSet() const;

                    /**
                     * 获取Data Source Display Name
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return DatasourceDisplayName Data Source Display Name
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    std::string GetDatasourceDisplayName() const;

                    /**
                     * 设置Data Source Display Name
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _datasourceDisplayName Data Source Display Name
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetDatasourceDisplayName(const std::string& _datasourceDisplayName);

                    /**
                     * 判断参数 DatasourceDisplayName 是否已赋值
                     * @return DatasourceDisplayName 是否已赋值
                     * 
                     */
                    bool DatasourceDisplayNameHasBeenSet() const;

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
                     * 获取Total favorites on the table under the tenant
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return FavoriteCount Total favorites on the table under the tenant
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    int64_t GetFavoriteCount() const;

                    /**
                     * 设置Total favorites on the table under the tenant
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _favoriteCount Total favorites on the table under the tenant
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetFavoriteCount(const int64_t& _favoriteCount);

                    /**
                     * 判断参数 FavoriteCount 是否已赋值
                     * @return FavoriteCount 是否已赋值
                     * 
                     */
                    bool FavoriteCountHasBeenSet() const;

                    /**
                     * 获取Total likes on the table under the tenant
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return LikeCount Total likes on the table under the tenant
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    int64_t GetLikeCount() const;

                    /**
                     * 设置Total likes on the table under the tenant
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _likeCount Total likes on the table under the tenant
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetLikeCount(const int64_t& _likeCount);

                    /**
                     * 判断参数 LikeCount 是否已赋值
                     * @return LikeCount 是否已赋值
                     * 
                     */
                    bool LikeCountHasBeenSet() const;

                    /**
                     * 获取true for liked/false for not liked status
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return HasLike true for liked/false for not liked status
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    bool GetHasLike() const;

                    /**
                     * 设置true for liked/false for not liked status
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _hasLike true for liked/false for not liked status
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetHasLike(const bool& _hasLike);

                    /**
                     * 判断参数 HasLike 是否已赋值
                     * @return HasLike 是否已赋值
                     * 
                     */
                    bool HasLikeHasBeenSet() const;

                    /**
                     * 获取Asset score of the table
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return TablePropertyScore Asset score of the table
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    TablePropertyScore GetTablePropertyScore() const;

                    /**
                     * 设置Asset score of the table
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _tablePropertyScore Asset score of the table
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetTablePropertyScore(const TablePropertyScore& _tablePropertyScore);

                    /**
                     * 判断参数 TablePropertyScore 是否已赋值
                     * @return TablePropertyScore 是否已赋值
                     * 
                     */
                    bool TablePropertyScoreHasBeenSet() const;

                    /**
                     * 获取Heat value of the table
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return TableHeat Heat value of the table
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    TableHeat GetTableHeat() const;

                    /**
                     * 设置Heat value of the table
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _tableHeat Heat value of the table
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetTableHeat(const TableHeat& _tableHeat);

                    /**
                     * 判断参数 TableHeat 是否已赋值
                     * @return TableHeat 是否已赋值
                     * 
                     */
                    bool TableHeatHasBeenSet() const;

                    /**
                     * 获取Data source ownerProjectId
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return OwnerProjectId Data source ownerProjectId
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    std::string GetOwnerProjectId() const;

                    /**
                     * 设置Data source ownerProjectId
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _ownerProjectId Data source ownerProjectId
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetOwnerProjectId(const std::string& _ownerProjectId);

                    /**
                     * 判断参数 OwnerProjectId 是否已赋值
                     * @return OwnerProjectId 是否已赋值
                     * 
                     */
                    bool OwnerProjectIdHasBeenSet() const;

                    /**
                     * 获取Table Owner ID
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return TableOwnerId Table Owner ID
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    std::string GetTableOwnerId() const;

                    /**
                     * 设置Table Owner ID
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _tableOwnerId Table Owner ID
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetTableOwnerId(const std::string& _tableOwnerId);

                    /**
                     * 判断参数 TableOwnerId 是否已赋值
                     * @return TableOwnerId 是否已赋值
                     * 
                     */
                    bool TableOwnerIdHasBeenSet() const;

                    /**
                     * 获取System Source -CLUSTER, DB - Self Definition Source
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return DataSourceCategory System Source -CLUSTER, DB - Self Definition Source
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    std::string GetDataSourceCategory() const;

                    /**
                     * 设置System Source -CLUSTER, DB - Self Definition Source
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _dataSourceCategory System Source -CLUSTER, DB - Self Definition Source
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetDataSourceCategory(const std::string& _dataSourceCategory);

                    /**
                     * 判断参数 DataSourceCategory 是否已赋值
                     * @return DataSourceCategory 是否已赋值
                     * 
                     */
                    bool DataSourceCategoryHasBeenSet() const;

                    /**
                     * 获取Table Field Information
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return Columns Table Field Information
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    std::vector<SearchColumnDocVO> GetColumns() const;

                    /**
                     * 设置Table Field Information
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _columns Table Field Information
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetColumns(const std::vector<SearchColumnDocVO>& _columns);

                    /**
                     * 判断参数 Columns 是否已赋值
                     * @return Columns 是否已赋值
                     * 
                     */
                    bool ColumnsHasBeenSet() const;

                    /**
                     * 获取Table Collection Type
TABLE, VIEW, MANAGED_TABLE (Hive managed table), EXTERNAL_TABLE (Hive external table), VIRTUAL_VIEW (virtual view), MATERIALIZED_VIEW (materialized view), LATERAL_VIEW, INDEX_TABLE (index table), END_SELECT (query structure), INSTANCE (intermediate temporary table type (data lineage)), CDW (CDW table type)
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return MetaCrawlType Table Collection Type
TABLE, VIEW, MANAGED_TABLE (Hive managed table), EXTERNAL_TABLE (Hive external table), VIRTUAL_VIEW (virtual view), MATERIALIZED_VIEW (materialized view), LATERAL_VIEW, INDEX_TABLE (index table), END_SELECT (query structure), INSTANCE (intermediate temporary table type (data lineage)), CDW (CDW table type)
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    std::string GetMetaCrawlType() const;

                    /**
                     * 设置Table Collection Type
TABLE, VIEW, MANAGED_TABLE (Hive managed table), EXTERNAL_TABLE (Hive external table), VIRTUAL_VIEW (virtual view), MATERIALIZED_VIEW (materialized view), LATERAL_VIEW, INDEX_TABLE (index table), END_SELECT (query structure), INSTANCE (intermediate temporary table type (data lineage)), CDW (CDW table type)
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _metaCrawlType Table Collection Type
TABLE, VIEW, MANAGED_TABLE (Hive managed table), EXTERNAL_TABLE (Hive external table), VIRTUAL_VIEW (virtual view), MATERIALIZED_VIEW (materialized view), LATERAL_VIEW, INDEX_TABLE (index table), END_SELECT (query structure), INSTANCE (intermediate temporary table type (data lineage)), CDW (CDW table type)
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetMetaCrawlType(const std::string& _metaCrawlType);

                    /**
                     * 判断参数 MetaCrawlType 是否已赋值
                     * @return MetaCrawlType 是否已赋值
                     * 
                     */
                    bool MetaCrawlTypeHasBeenSet() const;

                    /**
                     * 获取Is View
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return IsView Is View
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    bool GetIsView() const;

                    /**
                     * 设置Is View
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _isView Is View
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetIsView(const bool& _isView);

                    /**
                     * 判断参数 IsView 是否已赋值
                     * @return IsView 是否已赋值
                     * 
                     */
                    bool IsViewHasBeenSet() const;

                    /**
                     * 获取Storage locationNote: This field may return null, indicating that no valid value can be obtained.
                     * @return Location Storage locationNote: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    std::string GetLocation() const;

                    /**
                     * 设置Storage locationNote: This field may return null, indicating that no valid value can be obtained.
                     * @param _location Storage locationNote: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetLocation(const std::string& _location);

                    /**
                     * 判断参数 Location 是否已赋值
                     * @return Location 是否已赋值
                     * 
                     */
                    bool LocationHasBeenSet() const;

                    /**
                     * 获取Determine if it is a partitioned table 1 Yes 0 No
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return IsPartitionTable Determine if it is a partitioned table 1 Yes 0 No
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    int64_t GetIsPartitionTable() const;

                    /**
                     * 设置Determine if it is a partitioned table 1 Yes 0 No
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _isPartitionTable Determine if it is a partitioned table 1 Yes 0 No
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetIsPartitionTable(const int64_t& _isPartitionTable);

                    /**
                     * 判断参数 IsPartitionTable 是否已赋值
                     * @return IsPartitionTable 是否已赋值
                     * 
                     */
                    bool IsPartitionTableHasBeenSet() const;

                    /**
                     * 获取Partition Field Key
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return PartitionColumns Partition Field Key
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    std::vector<std::string> GetPartitionColumns() const;

                    /**
                     * 设置Partition Field Key
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _partitionColumns Partition Field Key
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetPartitionColumns(const std::vector<std::string>& _partitionColumns);

                    /**
                     * 判断参数 PartitionColumns 是否已赋值
                     * @return PartitionColumns 是否已赋值
                     * 
                     */
                    bool PartitionColumnsHasBeenSet() const;

                    /**
                     * 获取Lifecycle - Partition Retention Days [Valid when Partition Retention Policy is applied]
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return PartitionExpireDays Lifecycle - Partition Retention Days [Valid when Partition Retention Policy is applied]
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    int64_t GetPartitionExpireDays() const;

                    /**
                     * 设置Lifecycle - Partition Retention Days [Valid when Partition Retention Policy is applied]
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _partitionExpireDays Lifecycle - Partition Retention Days [Valid when Partition Retention Policy is applied]
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetPartitionExpireDays(const int64_t& _partitionExpireDays);

                    /**
                     * 判断参数 PartitionExpireDays 是否已赋值
                     * @return PartitionExpireDays 是否已赋值
                     * 
                     */
                    bool PartitionExpireDaysHasBeenSet() const;

                private:

                    /**
                     * Global Unique ID of the Table
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    std::string m_tableId;
                    bool m_tableIdHasBeenSet;

                    /**
                     * Table NameNote: This field may return null, indicating that no valid value can be obtained.
                     */
                    std::string m_tableName;
                    bool m_tableNameHasBeenSet;

                    /**
                     * Person in ChargeNote: This field may return null, indicating that no valid value can be obtained.
                     */
                    std::string m_tableOwnerName;
                    bool m_tableOwnerNameHasBeenSet;

                    /**
                     * Data Source Global Unique ID
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    int64_t m_datasourceId;
                    bool m_datasourceIdHasBeenSet;

                    /**
                     * Cluster Name
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    std::string m_clusterName;
                    bool m_clusterNameHasBeenSet;

                    /**
                     * Data Source Name
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    std::string m_datasourceName;
                    bool m_datasourceNameHasBeenSet;

                    /**
                     * Database nameNote: This field may return null, indicating that no valid value can be obtained.
                     */
                    std::string m_databaseName;
                    bool m_databaseNameHasBeenSet;

                    /**
                     * Table Path
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    std::string m_tablePath;
                    bool m_tablePathHasBeenSet;

                    /**
                     * Chinese Table Name
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    std::string m_tableNameCn;
                    bool m_tableNameCnHasBeenSet;

                    /**
                     * Metadata Tenant ID
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    int64_t m_metastoreId;
                    bool m_metastoreIdHasBeenSet;

                    /**
                     * Technology Type, available values: HIVE,MYSQL,KAFKA, HBASE
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    std::string m_metastoreType;
                    bool m_metastoreTypeHasBeenSet;

                    /**
                     * Table Description
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * Column Separator
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    std::string m_columnSeparator;
                    bool m_columnSeparatorHasBeenSet;

                    /**
                     * Storage Format
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    std::string m_storageFormat;
                    bool m_storageFormatHasBeenSet;

                    /**
                     * Storage Volume, Byte Count
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    int64_t m_storageSize;
                    bool m_storageSizeHasBeenSet;

                    /**
                     * Table Types, such as hive MANAGED_TABLE;EXTERNAL_TABLE
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    std::string m_tableType;
                    bool m_tableTypeHasBeenSet;

                    /**
                     * Creation TimeNote: This field may return null, indicating that no valid value can be obtained.
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * Latest Data Modification Time
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    std::string m_modifyTime;
                    bool m_modifyTimeHasBeenSet;

                    /**
                     * Latest DDL Modification Time
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    std::string m_ddlModifyTime;
                    bool m_ddlModifyTimeHasBeenSet;

                    /**
                     * Last Access Time of Data
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    std::string m_lastAccessTime;
                    bool m_lastAccessTimeHasBeenSet;

                    /**
                     * Project Name in English
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    std::string m_projectName;
                    bool m_projectNameHasBeenSet;

                    /**
                     * Data Directory ID (may be multiple)
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    std::vector<std::string> m_bizCatalogIds;
                    bool m_bizCatalogIdsHasBeenSet;

                    /**
                     * Data Directory (may be multiple)
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    std::vector<std::string> m_bizCatalogNames;
                    bool m_bizCatalogNamesHasBeenSet;

                    /**
                     * true for Favorited/false indicates not favorited
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    bool m_hasFavorite;
                    bool m_hasFavoriteHasBeenSet;

                    /**
                     * LifecycleNote: This field may return null, indicating that no valid value can be obtained.
                     */
                    int64_t m_lifeCycleTime;
                    bool m_lifeCycleTimeHasBeenSet;

                    /**
                     * Storage Volume, displayed in appropriate units
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    std::string m_storageSizeWithUnit;
                    bool m_storageSizeWithUnitHasBeenSet;

                    /**
                     * Instance ID of the Data Source Engine: e.g., EMR Cluster Instance ID/Data Source Instance ID
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * Data Source Technology Type: HIVE/MYSQL/HBASE/KAFKA etc.
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    std::string m_technologyType;
                    bool m_technologyTypeHasBeenSet;

                    /**
                     * Table English Name
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    std::string m_tableNameEn;
                    bool m_tableNameEnHasBeenSet;

                    /**
                     * Project IDNote: This field may return null, indicating that no valid value can be obtained.
                     */
                    std::string m_projectId;
                    bool m_projectIdHasBeenSet;

                    /**
                     * Number of partitions in Kafka Topic
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    std::string m_partitions;
                    bool m_partitionsHasBeenSet;

                    /**
                     * Number of replicas in Kafka Topic
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    std::string m_replicationFactor;
                    bool m_replicationFactorHasBeenSet;

                    /**
                     * Project English and Chinese Name
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    std::string m_projectDisplayName;
                    bool m_projectDisplayNameHasBeenSet;

                    /**
                     * Last Modified Time of Data
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    std::string m_dataModifyTime;
                    bool m_dataModifyTimeHasBeenSet;

                    /**
                     * Cluster ID
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    std::string m_clusterId;
                    bool m_clusterIdHasBeenSet;

                    /**
                     * Current user has Administrator Privileges
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    bool m_hasAdminAuthority;
                    bool m_hasAdminAuthorityHasBeenSet;

                    /**
                     * Data Source Display Name
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    std::string m_datasourceDisplayName;
                    bool m_datasourceDisplayNameHasBeenSet;

                    /**
                     * Database ID
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    std::string m_databaseId;
                    bool m_databaseIdHasBeenSet;

                    /**
                     * Total favorites on the table under the tenant
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    int64_t m_favoriteCount;
                    bool m_favoriteCountHasBeenSet;

                    /**
                     * Total likes on the table under the tenant
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    int64_t m_likeCount;
                    bool m_likeCountHasBeenSet;

                    /**
                     * true for liked/false for not liked status
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    bool m_hasLike;
                    bool m_hasLikeHasBeenSet;

                    /**
                     * Asset score of the table
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    TablePropertyScore m_tablePropertyScore;
                    bool m_tablePropertyScoreHasBeenSet;

                    /**
                     * Heat value of the table
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    TableHeat m_tableHeat;
                    bool m_tableHeatHasBeenSet;

                    /**
                     * Data source ownerProjectId
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    std::string m_ownerProjectId;
                    bool m_ownerProjectIdHasBeenSet;

                    /**
                     * Table Owner ID
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    std::string m_tableOwnerId;
                    bool m_tableOwnerIdHasBeenSet;

                    /**
                     * System Source -CLUSTER, DB - Self Definition Source
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    std::string m_dataSourceCategory;
                    bool m_dataSourceCategoryHasBeenSet;

                    /**
                     * Table Field Information
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    std::vector<SearchColumnDocVO> m_columns;
                    bool m_columnsHasBeenSet;

                    /**
                     * Table Collection Type
TABLE, VIEW, MANAGED_TABLE (Hive managed table), EXTERNAL_TABLE (Hive external table), VIRTUAL_VIEW (virtual view), MATERIALIZED_VIEW (materialized view), LATERAL_VIEW, INDEX_TABLE (index table), END_SELECT (query structure), INSTANCE (intermediate temporary table type (data lineage)), CDW (CDW table type)
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    std::string m_metaCrawlType;
                    bool m_metaCrawlTypeHasBeenSet;

                    /**
                     * Is View
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    bool m_isView;
                    bool m_isViewHasBeenSet;

                    /**
                     * Storage locationNote: This field may return null, indicating that no valid value can be obtained.
                     */
                    std::string m_location;
                    bool m_locationHasBeenSet;

                    /**
                     * Determine if it is a partitioned table 1 Yes 0 No
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    int64_t m_isPartitionTable;
                    bool m_isPartitionTableHasBeenSet;

                    /**
                     * Partition Field Key
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    std::vector<std::string> m_partitionColumns;
                    bool m_partitionColumnsHasBeenSet;

                    /**
                     * Lifecycle - Partition Retention Days [Valid when Partition Retention Policy is applied]
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    int64_t m_partitionExpireDays;
                    bool m_partitionExpireDaysHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20210820_MODEL_TABLEMETA_H_
