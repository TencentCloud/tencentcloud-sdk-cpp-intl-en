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

#ifndef TENCENTCLOUD_WEDATA_V20210820_MODEL_GENHIVETABLEDDLSQLREQUEST_H_
#define TENCENTCLOUD_WEDATA_V20210820_MODEL_GENHIVETABLEDDLSQLREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/wedata/v20210820/model/SourceFieldInfo.h>
#include <tencentcloud/wedata/v20210820/model/Partition.h>
#include <tencentcloud/wedata/v20210820/model/Property.h>
#include <tencentcloud/wedata/v20210820/model/TableBaseInfo.h>


namespace TencentCloud
{
    namespace Wedata
    {
        namespace V20210820
        {
            namespace Model
            {
                /**
                * GenHiveTableDDLSql request structure.
                */
                class GenHiveTableDDLSqlRequest : public AbstractModel
                {
                public:
                    GenHiveTableDDLSqlRequest();
                    ~GenHiveTableDDLSqlRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Project ID
                     * @return ProjectId Project ID
                     * 
                     */
                    std::string GetProjectId() const;

                    /**
                     * 设置Project ID
                     * @param _projectId Project ID
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
                     * 获取Target Database
                     * @return SinkDatabase Target Database
                     * 
                     */
                    std::string GetSinkDatabase() const;

                    /**
                     * 设置Target Database
                     * @param _sinkDatabase Target Database
                     * 
                     */
                    void SetSinkDatabase(const std::string& _sinkDatabase);

                    /**
                     * 判断参数 SinkDatabase 是否已赋值
                     * @return SinkDatabase 是否已赋值
                     * 
                     */
                    bool SinkDatabaseHasBeenSet() const;

                    /**
                     * 获取Node ID
                     * @return Id Node ID
                     * 
                     */
                    std::string GetId() const;

                    /**
                     * 设置Node ID
                     * @param _id Node ID
                     * 
                     */
                    void SetId(const std::string& _id);

                    /**
                     * 判断参数 Id 是否已赋值
                     * @return Id 是否已赋值
                     * 
                     */
                    bool IdHasBeenSet() const;

                    /**
                     * 获取Metadata Type (MYSQL,ORACLE)
                     * @return MsType Metadata Type (MYSQL,ORACLE)
                     * 
                     */
                    std::string GetMsType() const;

                    /**
                     * 设置Metadata Type (MYSQL,ORACLE)
                     * @param _msType Metadata Type (MYSQL,ORACLE)
                     * 
                     */
                    void SetMsType(const std::string& _msType);

                    /**
                     * 判断参数 MsType 是否已赋值
                     * @return MsType 是否已赋值
                     * 
                     */
                    bool MsTypeHasBeenSet() const;

                    /**
                     * 获取Data source ID
                     * @return DatasourceId Data source ID
                     * 
                     */
                    std::string GetDatasourceId() const;

                    /**
                     * 设置Data source ID
                     * @param _datasourceId Data source ID
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
                     * 获取Source Library Name
                     * @return SourceDatabase Source Library Name
                     * 
                     */
                    std::string GetSourceDatabase() const;

                    /**
                     * 设置Source Library Name
                     * @param _sourceDatabase Source Library Name
                     * 
                     */
                    void SetSourceDatabase(const std::string& _sourceDatabase);

                    /**
                     * 判断参数 SourceDatabase 是否已赋值
                     * @return SourceDatabase 是否已赋值
                     * 
                     */
                    bool SourceDatabaseHasBeenSet() const;

                    /**
                     * 获取Source Table Name
                     * @return TableName Source Table Name
                     * 
                     */
                    std::string GetTableName() const;

                    /**
                     * 设置Source Table Name
                     * @param _tableName Source Table Name
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
                     * 获取Target Table Metadata Type (HIVE,GBASE)
                     * @return SinkType Target Table Metadata Type (HIVE,GBASE)
                     * 
                     */
                    std::string GetSinkType() const;

                    /**
                     * 设置Target Table Metadata Type (HIVE,GBASE)
                     * @param _sinkType Target Table Metadata Type (HIVE,GBASE)
                     * 
                     */
                    void SetSinkType(const std::string& _sinkType);

                    /**
                     * 判断参数 SinkType 是否已赋值
                     * @return SinkType 是否已赋值
                     * 
                     */
                    bool SinkTypeHasBeenSet() const;

                    /**
                     * 获取Source Schema Name
                     * @return SchemaName Source Schema Name
                     * 
                     */
                    std::string GetSchemaName() const;

                    /**
                     * 设置Source Schema Name
                     * @param _schemaName Source Schema Name
                     * 
                     */
                    void SetSchemaName(const std::string& _schemaName);

                    /**
                     * 判断参数 SchemaName 是否已赋值
                     * @return SchemaName 是否已赋值
                     * 
                     */
                    bool SchemaNameHasBeenSet() const;

                    /**
                     * 获取Field Information of Upstream Node
                     * @return SourceFieldInfoList Field Information of Upstream Node
                     * 
                     */
                    std::vector<SourceFieldInfo> GetSourceFieldInfoList() const;

                    /**
                     * 设置Field Information of Upstream Node
                     * @param _sourceFieldInfoList Field Information of Upstream Node
                     * 
                     */
                    void SetSourceFieldInfoList(const std::vector<SourceFieldInfo>& _sourceFieldInfoList);

                    /**
                     * 判断参数 SourceFieldInfoList 是否已赋值
                     * @return SourceFieldInfoList 是否已赋值
                     * 
                     */
                    bool SourceFieldInfoListHasBeenSet() const;

                    /**
                     * 获取Partition Field
                     * @return Partitions Partition Field
                     * 
                     */
                    std::vector<Partition> GetPartitions() const;

                    /**
                     * 设置Partition Field
                     * @param _partitions Partition Field
                     * 
                     */
                    void SetPartitions(const std::vector<Partition>& _partitions);

                    /**
                     * 判断参数 Partitions 是否已赋值
                     * @return Partitions 是否已赋值
                     * 
                     */
                    bool PartitionsHasBeenSet() const;

                    /**
                     * 获取Table Creation Attributes
                     * @return Properties Table Creation Attributes
                     * 
                     */
                    std::vector<Property> GetProperties() const;

                    /**
                     * 设置Table Creation Attributes
                     * @param _properties Table Creation Attributes
                     * 
                     */
                    void SetProperties(const std::vector<Property>& _properties);

                    /**
                     * 判断参数 Properties 是否已赋值
                     * @return Properties 是否已赋值
                     * 
                     */
                    bool PropertiesHasBeenSet() const;

                    /**
                     * 获取Table Creation Mode,0: Wizard Mode,1: ddl
                     * @return TableMode Table Creation Mode,0: Wizard Mode,1: ddl
                     * 
                     */
                    int64_t GetTableMode() const;

                    /**
                     * 设置Table Creation Mode,0: Wizard Mode,1: ddl
                     * @param _tableMode Table Creation Mode,0: Wizard Mode,1: ddl
                     * 
                     */
                    void SetTableMode(const int64_t& _tableMode);

                    /**
                     * 判断参数 TableMode 是否已赋值
                     * @return TableMode 是否已赋值
                     * 
                     */
                    bool TableModeHasBeenSet() const;

                    /**
                     * 获取DLC Table Version, v1/v2
                     * @return TableVersion DLC Table Version, v1/v2
                     * 
                     */
                    std::string GetTableVersion() const;

                    /**
                     * 设置DLC Table Version, v1/v2
                     * @param _tableVersion DLC Table Version, v1/v2
                     * 
                     */
                    void SetTableVersion(const std::string& _tableVersion);

                    /**
                     * 判断参数 TableVersion 是否已赋值
                     * @return TableVersion 是否已赋值
                     * 
                     */
                    bool TableVersionHasBeenSet() const;

                    /**
                     * 获取Whether to Upsert Writes
                     * @return UpsertFlag Whether to Upsert Writes
                     * 
                     */
                    bool GetUpsertFlag() const;

                    /**
                     * 设置Whether to Upsert Writes
                     * @param _upsertFlag Whether to Upsert Writes
                     * 
                     */
                    void SetUpsertFlag(const bool& _upsertFlag);

                    /**
                     * 判断参数 UpsertFlag 是否已赋值
                     * @return UpsertFlag 是否已赋值
                     * 
                     */
                    bool UpsertFlagHasBeenSet() const;

                    /**
                     * 获取Table Description Information
                     * @return TableComment Table Description Information
                     * 
                     */
                    std::string GetTableComment() const;

                    /**
                     * 设置Table Description Information
                     * @param _tableComment Table Description Information
                     * 
                     */
                    void SetTableComment(const std::string& _tableComment);

                    /**
                     * 判断参数 TableComment 是否已赋值
                     * @return TableComment 是否已赋值
                     * 
                     */
                    bool TableCommentHasBeenSet() const;

                    /**
                     * 获取Threshold for Increased Number of Files, Exceeding Value Will Trigger Small File Merge
                     * @return AddDataFiles Threshold for Increased Number of Files, Exceeding Value Will Trigger Small File Merge
                     * 
                     */
                    int64_t GetAddDataFiles() const;

                    /**
                     * 设置Threshold for Increased Number of Files, Exceeding Value Will Trigger Small File Merge
                     * @param _addDataFiles Threshold for Increased Number of Files, Exceeding Value Will Trigger Small File Merge
                     * 
                     */
                    void SetAddDataFiles(const int64_t& _addDataFiles);

                    /**
                     * 判断参数 AddDataFiles 是否已赋值
                     * @return AddDataFiles 是否已赋值
                     * 
                     */
                    bool AddDataFilesHasBeenSet() const;

                    /**
                     * 获取Threshold for Increased Number of Equality Deletes, Exceeding Value Will Trigger Small File Merge
                     * @return AddEqualityDeletes Threshold for Increased Number of Equality Deletes, Exceeding Value Will Trigger Small File Merge
                     * 
                     */
                    int64_t GetAddEqualityDeletes() const;

                    /**
                     * 设置Threshold for Increased Number of Equality Deletes, Exceeding Value Will Trigger Small File Merge
                     * @param _addEqualityDeletes Threshold for Increased Number of Equality Deletes, Exceeding Value Will Trigger Small File Merge
                     * 
                     */
                    void SetAddEqualityDeletes(const int64_t& _addEqualityDeletes);

                    /**
                     * 判断参数 AddEqualityDeletes 是否已赋值
                     * @return AddEqualityDeletes 是否已赋值
                     * 
                     */
                    bool AddEqualityDeletesHasBeenSet() const;

                    /**
                     * 获取Threshold for Increased Number of Position Deletes, Exceeding Value Will Trigger Small File Merge
                     * @return AddPositionDeletes Threshold for Increased Number of Position Deletes, Exceeding Value Will Trigger Small File Merge
                     * 
                     */
                    int64_t GetAddPositionDeletes() const;

                    /**
                     * 设置Threshold for Increased Number of Position Deletes, Exceeding Value Will Trigger Small File Merge
                     * @param _addPositionDeletes Threshold for Increased Number of Position Deletes, Exceeding Value Will Trigger Small File Merge
                     * 
                     */
                    void SetAddPositionDeletes(const int64_t& _addPositionDeletes);

                    /**
                     * 判断参数 AddPositionDeletes 是否已赋值
                     * @return AddPositionDeletes 是否已赋值
                     * 
                     */
                    bool AddPositionDeletesHasBeenSet() const;

                    /**
                     * 获取Threshold for Increased Number of Delete Files
                     * @return AddDeleteFiles Threshold for Increased Number of Delete Files
                     * 
                     */
                    int64_t GetAddDeleteFiles() const;

                    /**
                     * 设置Threshold for Increased Number of Delete Files
                     * @param _addDeleteFiles Threshold for Increased Number of Delete Files
                     * 
                     */
                    void SetAddDeleteFiles(const int64_t& _addDeleteFiles);

                    /**
                     * 判断参数 AddDeleteFiles 是否已赋值
                     * @return AddDeleteFiles 是否已赋值
                     * 
                     */
                    bool AddDeleteFilesHasBeenSet() const;

                    /**
                     * 获取Downstream Node Data Source ID
                     * @return TargetDatasourceId Downstream Node Data Source ID
                     * 
                     */
                    std::string GetTargetDatasourceId() const;

                    /**
                     * 设置Downstream Node Data Source ID
                     * @param _targetDatasourceId Downstream Node Data Source ID
                     * 
                     */
                    void SetTargetDatasourceId(const std::string& _targetDatasourceId);

                    /**
                     * 判断参数 TargetDatasourceId 是否已赋值
                     * @return TargetDatasourceId 是否已赋值
                     * 
                     */
                    bool TargetDatasourceIdHasBeenSet() const;

                    /**
                     * 获取DLC Upsert Primary Key
                     * @return UpsertKeys DLC Upsert Primary Key
                     * 
                     */
                    std::vector<std::string> GetUpsertKeys() const;

                    /**
                     * 设置DLC Upsert Primary Key
                     * @param _upsertKeys DLC Upsert Primary Key
                     * 
                     */
                    void SetUpsertKeys(const std::vector<std::string>& _upsertKeys);

                    /**
                     * 判断参数 UpsertKeys 是否已赋值
                     * @return UpsertKeys 是否已赋值
                     * 
                     */
                    bool UpsertKeysHasBeenSet() const;

                    /**
                     * 获取DLC Table Governance Information
                     * @return TableBaseInfo DLC Table Governance Information
                     * 
                     */
                    TableBaseInfo GetTableBaseInfo() const;

                    /**
                     * 设置DLC Table Governance Information
                     * @param _tableBaseInfo DLC Table Governance Information
                     * 
                     */
                    void SetTableBaseInfo(const TableBaseInfo& _tableBaseInfo);

                    /**
                     * 判断参数 TableBaseInfo 是否已赋值
                     * @return TableBaseInfo 是否已赋值
                     * 
                     */
                    bool TableBaseInfoHasBeenSet() const;

                    /**
                     * 获取Target Schema Name
                     * @return SinkSchemaName Target Schema Name
                     * 
                     */
                    std::string GetSinkSchemaName() const;

                    /**
                     * 设置Target Schema Name
                     * @param _sinkSchemaName Target Schema Name
                     * 
                     */
                    void SetSinkSchemaName(const std::string& _sinkSchemaName);

                    /**
                     * 判断参数 SinkSchemaName 是否已赋值
                     * @return SinkSchemaName 是否已赋值
                     * 
                     */
                    bool SinkSchemaNameHasBeenSet() const;

                private:

                    /**
                     * Project ID
                     */
                    std::string m_projectId;
                    bool m_projectIdHasBeenSet;

                    /**
                     * Target Database
                     */
                    std::string m_sinkDatabase;
                    bool m_sinkDatabaseHasBeenSet;

                    /**
                     * Node ID
                     */
                    std::string m_id;
                    bool m_idHasBeenSet;

                    /**
                     * Metadata Type (MYSQL,ORACLE)
                     */
                    std::string m_msType;
                    bool m_msTypeHasBeenSet;

                    /**
                     * Data source ID
                     */
                    std::string m_datasourceId;
                    bool m_datasourceIdHasBeenSet;

                    /**
                     * Source Library Name
                     */
                    std::string m_sourceDatabase;
                    bool m_sourceDatabaseHasBeenSet;

                    /**
                     * Source Table Name
                     */
                    std::string m_tableName;
                    bool m_tableNameHasBeenSet;

                    /**
                     * Target Table Metadata Type (HIVE,GBASE)
                     */
                    std::string m_sinkType;
                    bool m_sinkTypeHasBeenSet;

                    /**
                     * Source Schema Name
                     */
                    std::string m_schemaName;
                    bool m_schemaNameHasBeenSet;

                    /**
                     * Field Information of Upstream Node
                     */
                    std::vector<SourceFieldInfo> m_sourceFieldInfoList;
                    bool m_sourceFieldInfoListHasBeenSet;

                    /**
                     * Partition Field
                     */
                    std::vector<Partition> m_partitions;
                    bool m_partitionsHasBeenSet;

                    /**
                     * Table Creation Attributes
                     */
                    std::vector<Property> m_properties;
                    bool m_propertiesHasBeenSet;

                    /**
                     * Table Creation Mode,0: Wizard Mode,1: ddl
                     */
                    int64_t m_tableMode;
                    bool m_tableModeHasBeenSet;

                    /**
                     * DLC Table Version, v1/v2
                     */
                    std::string m_tableVersion;
                    bool m_tableVersionHasBeenSet;

                    /**
                     * Whether to Upsert Writes
                     */
                    bool m_upsertFlag;
                    bool m_upsertFlagHasBeenSet;

                    /**
                     * Table Description Information
                     */
                    std::string m_tableComment;
                    bool m_tableCommentHasBeenSet;

                    /**
                     * Threshold for Increased Number of Files, Exceeding Value Will Trigger Small File Merge
                     */
                    int64_t m_addDataFiles;
                    bool m_addDataFilesHasBeenSet;

                    /**
                     * Threshold for Increased Number of Equality Deletes, Exceeding Value Will Trigger Small File Merge
                     */
                    int64_t m_addEqualityDeletes;
                    bool m_addEqualityDeletesHasBeenSet;

                    /**
                     * Threshold for Increased Number of Position Deletes, Exceeding Value Will Trigger Small File Merge
                     */
                    int64_t m_addPositionDeletes;
                    bool m_addPositionDeletesHasBeenSet;

                    /**
                     * Threshold for Increased Number of Delete Files
                     */
                    int64_t m_addDeleteFiles;
                    bool m_addDeleteFilesHasBeenSet;

                    /**
                     * Downstream Node Data Source ID
                     */
                    std::string m_targetDatasourceId;
                    bool m_targetDatasourceIdHasBeenSet;

                    /**
                     * DLC Upsert Primary Key
                     */
                    std::vector<std::string> m_upsertKeys;
                    bool m_upsertKeysHasBeenSet;

                    /**
                     * DLC Table Governance Information
                     */
                    TableBaseInfo m_tableBaseInfo;
                    bool m_tableBaseInfoHasBeenSet;

                    /**
                     * Target Schema Name
                     */
                    std::string m_sinkSchemaName;
                    bool m_sinkSchemaNameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20210820_MODEL_GENHIVETABLEDDLSQLREQUEST_H_
