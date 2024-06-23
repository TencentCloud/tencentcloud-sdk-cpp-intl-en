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

#ifndef TENCENTCLOUD_WEDATA_V20210820_MODEL_TABLEBASICINFO_H_
#define TENCENTCLOUD_WEDATA_V20210820_MODEL_TABLEBASICINFO_H_

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
                * Table Metadata Information
                */
                class TableBasicInfo : public AbstractModel
                {
                public:
                    TableBasicInfo();
                    ~TableBasicInfo() = default;
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
                     * 获取Data Source Global Unique ID
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return DatasourceId Data Source Global Unique ID
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    std::string GetDatasourceId() const;

                    /**
                     * 设置Data Source Global Unique ID
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _datasourceId Data Source Global Unique ID
Note: This field may return null, indicating that no valid value can be obtained.
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
                     * 获取Engine/Storage Type
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return EngineType Engine/Storage Type
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    std::string GetEngineType() const;

                    /**
                     * 设置Engine/Storage Type
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _engineType Engine/Storage Type
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetEngineType(const std::string& _engineType);

                    /**
                     * 判断参数 EngineType 是否已赋值
                     * @return EngineType 是否已赋值
                     * 
                     */
                    bool EngineTypeHasBeenSet() const;

                    /**
                     * 获取Table Types, such as View, External Table, etc.
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return TableType Table Types, such as View, External Table, etc.
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    std::string GetTableType() const;

                    /**
                     * 设置Table Types, such as View, External Table, etc.
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _tableType Table Types, such as View, External Table, etc.
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
                     * 获取Responsible Person ID
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return TableOwnerId Responsible Person ID
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    std::string GetTableOwnerId() const;

                    /**
                     * 设置Responsible Person ID
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _tableOwnerId Responsible Person ID
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
                     * 获取Person in Charge
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return TableOwnerName Person in Charge
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    std::string GetTableOwnerName() const;

                    /**
                     * 设置Person in Charge
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _tableOwnerName Person in Charge
Note: This field may return null, indicating that no valid value can be obtained.
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
                     * 获取Storage locationNote: This field may return null, indicating that no valid value can be obtained.
                     * @return StorageLocation Storage locationNote: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    int64_t GetStorageLocation() const;

                    /**
                     * 设置Storage locationNote: This field may return null, indicating that no valid value can be obtained.
                     * @param _storageLocation Storage locationNote: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetStorageLocation(const int64_t& _storageLocation);

                    /**
                     * 判断参数 StorageLocation 是否已赋值
                     * @return StorageLocation 是否已赋值
                     * 
                     */
                    bool StorageLocationHasBeenSet() const;

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
                     * 获取Whether it is a partitioned table, 0-Full Table 1-Partition Table
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return IsPartitionTable Whether it is a partitioned table, 0-Full Table 1-Partition Table
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    int64_t GetIsPartitionTable() const;

                    /**
                     * 设置Whether it is a partitioned table, 0-Full Table 1-Partition Table
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _isPartitionTable Whether it is a partitioned table, 0-Full Table 1-Partition Table
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
                     * 获取Partition field list
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return PartitionColumns Partition field list
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    std::vector<std::string> GetPartitionColumns() const;

                    /**
                     * 设置Partition field list
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _partitionColumns Partition field list
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
                    uint64_t GetStorageSize() const;

                    /**
                     * 设置Storage Volume, Byte Count
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _storageSize Storage Volume, Byte Count
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetStorageSize(const uint64_t& _storageSize);

                    /**
                     * 判断参数 StorageSize 是否已赋值
                     * @return StorageSize 是否已赋值
                     * 
                     */
                    bool StorageSizeHasBeenSet() const;

                    /**
                     * 获取Storage Volume, Unit
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return StorageSizeWithUnit Storage Volume, Unit
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    std::string GetStorageSizeWithUnit() const;

                    /**
                     * 设置Storage Volume, Unit
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _storageSizeWithUnit Storage Volume, Unit
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
                     * 获取Cumulative storage [MB]
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return TotalSizeMb Cumulative storage [MB]
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    uint64_t GetTotalSizeMb() const;

                    /**
                     * 设置Cumulative storage [MB]
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _totalSizeMb Cumulative storage [MB]
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetTotalSizeMb(const uint64_t& _totalSizeMb);

                    /**
                     * 判断参数 TotalSizeMb 是否已赋值
                     * @return TotalSizeMb 是否已赋值
                     * 
                     */
                    bool TotalSizeMbHasBeenSet() const;

                    /**
                     * 获取Replica quantityNote: This field may return null, indicating that no valid value can be obtained.
                     * @return ReplicaCount Replica quantityNote: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    int64_t GetReplicaCount() const;

                    /**
                     * 设置Replica quantityNote: This field may return null, indicating that no valid value can be obtained.
                     * @param _replicaCount Replica quantityNote: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetReplicaCount(const int64_t& _replicaCount);

                    /**
                     * 判断参数 ReplicaCount 是否已赋值
                     * @return ReplicaCount 是否已赋值
                     * 
                     */
                    bool ReplicaCountHasBeenSet() const;

                    /**
                     * 获取Number of Files
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return FileCount Number of Files
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    int64_t GetFileCount() const;

                    /**
                     * 设置Number of Files
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _fileCount Number of Files
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetFileCount(const int64_t& _fileCount);

                    /**
                     * 判断参数 FileCount 是否已赋值
                     * @return FileCount 是否已赋值
                     * 
                     */
                    bool FileCountHasBeenSet() const;

                    /**
                     * 获取Total Partitions (including hive, iceberg)
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return PartitionCount Total Partitions (including hive, iceberg)
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    int64_t GetPartitionCount() const;

                    /**
                     * 设置Total Partitions (including hive, iceberg)
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _partitionCount Total Partitions (including hive, iceberg)
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetPartitionCount(const int64_t& _partitionCount);

                    /**
                     * 判断参数 PartitionCount 是否已赋值
                     * @return PartitionCount 是否已赋值
                     * 
                     */
                    bool PartitionCountHasBeenSet() const;

                    /**
                     * 获取Number of partition fields (including hive, iceberg)
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return PartitionFieldCount Number of partition fields (including hive, iceberg)
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    int64_t GetPartitionFieldCount() const;

                    /**
                     * 设置Number of partition fields (including hive, iceberg)
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _partitionFieldCount Number of partition fields (including hive, iceberg)
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetPartitionFieldCount(const int64_t& _partitionFieldCount);

                    /**
                     * 判断参数 PartitionFieldCount 是否已赋值
                     * @return PartitionFieldCount 是否已赋值
                     * 
                     */
                    bool PartitionFieldCountHasBeenSet() const;

                    /**
                     * 获取Lifecycle - Partition Retention Days [Effective during Partition Retention Policy]
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return PartitionExpireDays Lifecycle - Partition Retention Days [Effective during Partition Retention Policy]
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    int64_t GetPartitionExpireDays() const;

                    /**
                     * 设置Lifecycle - Partition Retention Days [Effective during Partition Retention Policy]
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _partitionExpireDays Lifecycle - Partition Retention Days [Effective during Partition Retention Policy]
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
                     * 获取Update timeNote: This field may return null, indicating that no valid value can be obtained.
                     * @return UpdateTime Update timeNote: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    std::string GetUpdateTime() const;

                    /**
                     * 设置Update timeNote: This field may return null, indicating that no valid value can be obtained.
                     * @param _updateTime Update timeNote: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetUpdateTime(const std::string& _updateTime);

                    /**
                     * 判断参数 UpdateTime 是否已赋值
                     * @return UpdateTime 是否已赋值
                     * 
                     */
                    bool UpdateTimeHasBeenSet() const;

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

                private:

                    /**
                     * Global Unique ID of the Table
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    std::string m_tableId;
                    bool m_tableIdHasBeenSet;

                    /**
                     * Data Source Global Unique ID
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    std::string m_datasourceId;
                    bool m_datasourceIdHasBeenSet;

                    /**
                     * Data Source Name
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    std::string m_datasourceName;
                    bool m_datasourceNameHasBeenSet;

                    /**
                     * Database ID
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    std::string m_databaseId;
                    bool m_databaseIdHasBeenSet;

                    /**
                     * Database nameNote: This field may return null, indicating that no valid value can be obtained.
                     */
                    std::string m_databaseName;
                    bool m_databaseNameHasBeenSet;

                    /**
                     * Table NameNote: This field may return null, indicating that no valid value can be obtained.
                     */
                    std::string m_tableName;
                    bool m_tableNameHasBeenSet;

                    /**
                     * Engine/Storage Type
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    std::string m_engineType;
                    bool m_engineTypeHasBeenSet;

                    /**
                     * Table Types, such as View, External Table, etc.
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    std::string m_tableType;
                    bool m_tableTypeHasBeenSet;

                    /**
                     * Project IDNote: This field may return null, indicating that no valid value can be obtained.
                     */
                    std::string m_projectId;
                    bool m_projectIdHasBeenSet;

                    /**
                     * Project Name in English
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    std::string m_projectName;
                    bool m_projectNameHasBeenSet;

                    /**
                     * Project English and Chinese Name
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    std::string m_projectDisplayName;
                    bool m_projectDisplayNameHasBeenSet;

                    /**
                     * Responsible Person ID
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    std::string m_tableOwnerId;
                    bool m_tableOwnerIdHasBeenSet;

                    /**
                     * Person in Charge
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    std::string m_tableOwnerName;
                    bool m_tableOwnerNameHasBeenSet;

                    /**
                     * Storage locationNote: This field may return null, indicating that no valid value can be obtained.
                     */
                    int64_t m_storageLocation;
                    bool m_storageLocationHasBeenSet;

                    /**
                     * Table Description
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * Whether it is a partitioned table, 0-Full Table 1-Partition Table
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    int64_t m_isPartitionTable;
                    bool m_isPartitionTableHasBeenSet;

                    /**
                     * Partition field list
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    std::vector<std::string> m_partitionColumns;
                    bool m_partitionColumnsHasBeenSet;

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
                    uint64_t m_storageSize;
                    bool m_storageSizeHasBeenSet;

                    /**
                     * Storage Volume, Unit
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    std::string m_storageSizeWithUnit;
                    bool m_storageSizeWithUnitHasBeenSet;

                    /**
                     * Cumulative storage [MB]
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    uint64_t m_totalSizeMb;
                    bool m_totalSizeMbHasBeenSet;

                    /**
                     * Replica quantityNote: This field may return null, indicating that no valid value can be obtained.
                     */
                    int64_t m_replicaCount;
                    bool m_replicaCountHasBeenSet;

                    /**
                     * Number of Files
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    int64_t m_fileCount;
                    bool m_fileCountHasBeenSet;

                    /**
                     * Total Partitions (including hive, iceberg)
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    int64_t m_partitionCount;
                    bool m_partitionCountHasBeenSet;

                    /**
                     * Number of partition fields (including hive, iceberg)
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    int64_t m_partitionFieldCount;
                    bool m_partitionFieldCountHasBeenSet;

                    /**
                     * Lifecycle - Partition Retention Days [Effective during Partition Retention Policy]
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    int64_t m_partitionExpireDays;
                    bool m_partitionExpireDaysHasBeenSet;

                    /**
                     * Creation TimeNote: This field may return null, indicating that no valid value can be obtained.
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * Update timeNote: This field may return null, indicating that no valid value can be obtained.
                     */
                    std::string m_updateTime;
                    bool m_updateTimeHasBeenSet;

                    /**
                     * Storage locationNote: This field may return null, indicating that no valid value can be obtained.
                     */
                    std::string m_location;
                    bool m_locationHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20210820_MODEL_TABLEBASICINFO_H_
