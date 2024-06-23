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

#ifndef TENCENTCLOUD_WEDATA_V20210820_MODEL_INTEGRATIONNODEINFO_H_
#define TENCENTCLOUD_WEDATA_V20210820_MODEL_INTEGRATIONNODEINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/wedata/v20210820/model/RecordField.h>
#include <tencentcloud/wedata/v20210820/model/IntegrationNodeSchema.h>
#include <tencentcloud/wedata/v20210820/model/IntegrationNodeMapping.h>


namespace TencentCloud
{
    namespace Wedata
    {
        namespace V20210820
        {
            namespace Model
            {
                /**
                * Integrated Task Node
                */
                class IntegrationNodeInfo : public AbstractModel
                {
                public:
                    IntegrationNodeInfo();
                    ~IntegrationNodeInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Integration Node ID
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return Id Integration Node ID
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    std::string GetId() const;

                    /**
                     * 设置Integration Node ID
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _id Integration Node ID
Note: This field may return null, indicating that no valid value can be obtained.
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
                     * 获取Task ID of the Integrated Node
                     * @return TaskId Task ID of the Integrated Node
                     * 
                     */
                    std::string GetTaskId() const;

                    /**
                     * 设置Task ID of the Integrated Node
                     * @param _taskId Task ID of the Integrated Node
                     * 
                     */
                    void SetTaskId(const std::string& _taskId);

                    /**
                     * 判断参数 TaskId 是否已赋值
                     * @return TaskId 是否已赋值
                     * 
                     */
                    bool TaskIdHasBeenSet() const;

                    /**
                     * 获取Integration Node Name
                     * @return Name Integration Node Name
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置Integration Node Name
                     * @param _name Integration Node Name
                     * 
                     */
                    void SetName(const std::string& _name);

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     * 
                     */
                    bool NameHasBeenSet() const;

                    /**
                     * 获取Integration Node Type, INPUT: Input Node, OUTPUT: Output Node
                     * @return NodeType Integration Node Type, INPUT: Input Node, OUTPUT: Output Node
                     * 
                     */
                    std::string GetNodeType() const;

                    /**
                     * 设置Integration Node Type, INPUT: Input Node, OUTPUT: Output Node
                     * @param _nodeType Integration Node Type, INPUT: Input Node, OUTPUT: Output Node
                     * 
                     */
                    void SetNodeType(const std::string& _nodeType);

                    /**
                     * 判断参数 NodeType 是否已赋值
                     * @return NodeType 是否已赋值
                     * 
                     */
                    bool NodeTypeHasBeenSet() const;

                    /**
                     * 获取Node Data Source Type: MYSQL|POSTGRE|ORACLE|SQLSERVER|FTP|HIVE|HDFS|ICEBERG|KAFKA|HBASE|SPARK|VIRTUAL|TBASE|DB2|DM|GAUSSDB|GBASE|IMPALA|ES|S3_DATAINSIGHT|GREENPLUM|PHOENIX|SAP_HANA|SFTP|OCEANBASE|CLICKHOUSE|KUDU|VERTICA|REDIS|COS|DLC|DLCV1|DORIS|CKAFKA|DTS_KAFKA|S3|CDW|LOCAL|TDSQLC|TDSQL|TDSQL_MYSQL|MONGODB|INFORMIX|SYBASE|REST_API|SuperSQL|PRESTO|DR_SUM|TiDB|StarRocks|Trino|Kyuubi|GDB|TCHOUSE_X|TCHOUSE_P|TDSQL_POSTGRE
                     * @return DataSourceType Node Data Source Type: MYSQL|POSTGRE|ORACLE|SQLSERVER|FTP|HIVE|HDFS|ICEBERG|KAFKA|HBASE|SPARK|VIRTUAL|TBASE|DB2|DM|GAUSSDB|GBASE|IMPALA|ES|S3_DATAINSIGHT|GREENPLUM|PHOENIX|SAP_HANA|SFTP|OCEANBASE|CLICKHOUSE|KUDU|VERTICA|REDIS|COS|DLC|DLCV1|DORIS|CKAFKA|DTS_KAFKA|S3|CDW|LOCAL|TDSQLC|TDSQL|TDSQL_MYSQL|MONGODB|INFORMIX|SYBASE|REST_API|SuperSQL|PRESTO|DR_SUM|TiDB|StarRocks|Trino|Kyuubi|GDB|TCHOUSE_X|TCHOUSE_P|TDSQL_POSTGRE
                     * 
                     */
                    std::string GetDataSourceType() const;

                    /**
                     * 设置Node Data Source Type: MYSQL|POSTGRE|ORACLE|SQLSERVER|FTP|HIVE|HDFS|ICEBERG|KAFKA|HBASE|SPARK|VIRTUAL|TBASE|DB2|DM|GAUSSDB|GBASE|IMPALA|ES|S3_DATAINSIGHT|GREENPLUM|PHOENIX|SAP_HANA|SFTP|OCEANBASE|CLICKHOUSE|KUDU|VERTICA|REDIS|COS|DLC|DLCV1|DORIS|CKAFKA|DTS_KAFKA|S3|CDW|LOCAL|TDSQLC|TDSQL|TDSQL_MYSQL|MONGODB|INFORMIX|SYBASE|REST_API|SuperSQL|PRESTO|DR_SUM|TiDB|StarRocks|Trino|Kyuubi|GDB|TCHOUSE_X|TCHOUSE_P|TDSQL_POSTGRE
                     * @param _dataSourceType Node Data Source Type: MYSQL|POSTGRE|ORACLE|SQLSERVER|FTP|HIVE|HDFS|ICEBERG|KAFKA|HBASE|SPARK|VIRTUAL|TBASE|DB2|DM|GAUSSDB|GBASE|IMPALA|ES|S3_DATAINSIGHT|GREENPLUM|PHOENIX|SAP_HANA|SFTP|OCEANBASE|CLICKHOUSE|KUDU|VERTICA|REDIS|COS|DLC|DLCV1|DORIS|CKAFKA|DTS_KAFKA|S3|CDW|LOCAL|TDSQLC|TDSQL|TDSQL_MYSQL|MONGODB|INFORMIX|SYBASE|REST_API|SuperSQL|PRESTO|DR_SUM|TiDB|StarRocks|Trino|Kyuubi|GDB|TCHOUSE_X|TCHOUSE_P|TDSQL_POSTGRE
                     * 
                     */
                    void SetDataSourceType(const std::string& _dataSourceType);

                    /**
                     * 判断参数 DataSourceType 是否已赋值
                     * @return DataSourceType 是否已赋值
                     * 
                     */
                    bool DataSourceTypeHasBeenSet() const;

                    /**
                     * 获取Node Description
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return Description Node Description
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置Node Description
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _description Node Description
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
                     * 获取Data source IDNote: This field may return null, indicating that no valid value can be obtained.
                     * @return DatasourceId Data source IDNote: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    std::string GetDatasourceId() const;

                    /**
                     * 设置Data source IDNote: This field may return null, indicating that no valid value can be obtained.
                     * @param _datasourceId Data source IDNote: This field may return null, indicating that no valid value can be obtained.
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
                     * 获取Node Configuration Information
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return Config Node Configuration Information
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    std::vector<RecordField> GetConfig() const;

                    /**
                     * 设置Node Configuration Information
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _config Node Configuration Information
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetConfig(const std::vector<RecordField>& _config);

                    /**
                     * 判断参数 Config 是否已赋值
                     * @return Config 是否已赋值
                     * 
                     */
                    bool ConfigHasBeenSet() const;

                    /**
                     * 获取Node Extension Configuration Information
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return ExtConfig Node Extension Configuration Information
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    std::vector<RecordField> GetExtConfig() const;

                    /**
                     * 设置Node Extension Configuration Information
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _extConfig Node Extension Configuration Information
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetExtConfig(const std::vector<RecordField>& _extConfig);

                    /**
                     * 判断参数 ExtConfig 是否已赋值
                     * @return ExtConfig 是否已赋值
                     * 
                     */
                    bool ExtConfigHasBeenSet() const;

                    /**
                     * 获取Node Schema
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return Schema Node Schema
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    std::vector<IntegrationNodeSchema> GetSchema() const;

                    /**
                     * 设置Node Schema
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _schema Node Schema
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetSchema(const std::vector<IntegrationNodeSchema>& _schema);

                    /**
                     * 判断参数 Schema 是否已赋值
                     * @return Schema 是否已赋值
                     * 
                     */
                    bool SchemaHasBeenSet() const;

                    /**
                     * 获取Node Mapping
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return NodeMapping Node Mapping
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    IntegrationNodeMapping GetNodeMapping() const;

                    /**
                     * 设置Node Mapping
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _nodeMapping Node Mapping
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetNodeMapping(const IntegrationNodeMapping& _nodeMapping);

                    /**
                     * 判断参数 NodeMapping 是否已赋值
                     * @return NodeMapping 是否已赋值
                     * 
                     */
                    bool NodeMappingHasBeenSet() const;

                    /**
                     * 获取Belonging User AppId, Display Fields Non-passed
                     * @return AppId Belonging User AppId, Display Fields Non-passed
                     * 
                     */
                    std::string GetAppId() const;

                    /**
                     * 设置Belonging User AppId, Display Fields Non-passed
                     * @param _appId Belonging User AppId, Display Fields Non-passed
                     * 
                     */
                    void SetAppId(const std::string& _appId);

                    /**
                     * 判断参数 AppId 是否已赋值
                     * @return AppId 是否已赋值
                     * 
                     */
                    bool AppIdHasBeenSet() const;

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
                     * 获取Creator UIN, Display Fields Non-passed
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return CreatorUin Creator UIN, Display Fields Non-passed
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    std::string GetCreatorUin() const;

                    /**
                     * 设置Creator UIN, Display Fields Non-passed
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _creatorUin Creator UIN, Display Fields Non-passed
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetCreatorUin(const std::string& _creatorUin);

                    /**
                     * 判断参数 CreatorUin 是否已赋值
                     * @return CreatorUin 是否已赋值
                     * 
                     */
                    bool CreatorUinHasBeenSet() const;

                    /**
                     * 获取Operator UIN, Display Fields Non-passed
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return OperatorUin Operator UIN, Display Fields Non-passed
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    std::string GetOperatorUin() const;

                    /**
                     * 设置Operator UIN, Display Fields Non-passed
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _operatorUin Operator UIN, Display Fields Non-passed
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetOperatorUin(const std::string& _operatorUin);

                    /**
                     * 判断参数 OperatorUin 是否已赋值
                     * @return OperatorUin 是否已赋值
                     * 
                     */
                    bool OperatorUinHasBeenSet() const;

                    /**
                     * 获取owner uin Display Fields Non-passed
                     * @return OwnerUin owner uin Display Fields Non-passed
                     * 
                     */
                    std::string GetOwnerUin() const;

                    /**
                     * 设置owner uin Display Fields Non-passed
                     * @param _ownerUin owner uin Display Fields Non-passed
                     * 
                     */
                    void SetOwnerUin(const std::string& _ownerUin);

                    /**
                     * 判断参数 OwnerUin 是否已赋值
                     * @return OwnerUin 是否已赋值
                     * 
                     */
                    bool OwnerUinHasBeenSet() const;

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

                private:

                    /**
                     * Integration Node ID
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    std::string m_id;
                    bool m_idHasBeenSet;

                    /**
                     * Task ID of the Integrated Node
                     */
                    std::string m_taskId;
                    bool m_taskIdHasBeenSet;

                    /**
                     * Integration Node Name
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * Integration Node Type, INPUT: Input Node, OUTPUT: Output Node
                     */
                    std::string m_nodeType;
                    bool m_nodeTypeHasBeenSet;

                    /**
                     * Node Data Source Type: MYSQL|POSTGRE|ORACLE|SQLSERVER|FTP|HIVE|HDFS|ICEBERG|KAFKA|HBASE|SPARK|VIRTUAL|TBASE|DB2|DM|GAUSSDB|GBASE|IMPALA|ES|S3_DATAINSIGHT|GREENPLUM|PHOENIX|SAP_HANA|SFTP|OCEANBASE|CLICKHOUSE|KUDU|VERTICA|REDIS|COS|DLC|DLCV1|DORIS|CKAFKA|DTS_KAFKA|S3|CDW|LOCAL|TDSQLC|TDSQL|TDSQL_MYSQL|MONGODB|INFORMIX|SYBASE|REST_API|SuperSQL|PRESTO|DR_SUM|TiDB|StarRocks|Trino|Kyuubi|GDB|TCHOUSE_X|TCHOUSE_P|TDSQL_POSTGRE
                     */
                    std::string m_dataSourceType;
                    bool m_dataSourceTypeHasBeenSet;

                    /**
                     * Node Description
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * Data source IDNote: This field may return null, indicating that no valid value can be obtained.
                     */
                    std::string m_datasourceId;
                    bool m_datasourceIdHasBeenSet;

                    /**
                     * Node Configuration Information
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    std::vector<RecordField> m_config;
                    bool m_configHasBeenSet;

                    /**
                     * Node Extension Configuration Information
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    std::vector<RecordField> m_extConfig;
                    bool m_extConfigHasBeenSet;

                    /**
                     * Node Schema
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    std::vector<IntegrationNodeSchema> m_schema;
                    bool m_schemaHasBeenSet;

                    /**
                     * Node Mapping
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    IntegrationNodeMapping m_nodeMapping;
                    bool m_nodeMappingHasBeenSet;

                    /**
                     * Belonging User AppId, Display Fields Non-passed
                     */
                    std::string m_appId;
                    bool m_appIdHasBeenSet;

                    /**
                     * Project ID
                     */
                    std::string m_projectId;
                    bool m_projectIdHasBeenSet;

                    /**
                     * Creator UIN, Display Fields Non-passed
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    std::string m_creatorUin;
                    bool m_creatorUinHasBeenSet;

                    /**
                     * Operator UIN, Display Fields Non-passed
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    std::string m_operatorUin;
                    bool m_operatorUinHasBeenSet;

                    /**
                     * owner uin Display Fields Non-passed
                     */
                    std::string m_ownerUin;
                    bool m_ownerUinHasBeenSet;

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

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20210820_MODEL_INTEGRATIONNODEINFO_H_
