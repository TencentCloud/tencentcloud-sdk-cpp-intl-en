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

#ifndef TENCENTCLOUD_WEDATA_V20210820_MODEL_TABLELINEAGEBASEINFO_H_
#define TENCENTCLOUD_WEDATA_V20210820_MODEL_TABLELINEAGEBASEINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/wedata/v20210820/model/LineageParamRecord.h>
#include <tencentcloud/wedata/v20210820/model/RecordField.h>


namespace TencentCloud
{
    namespace Wedata
    {
        namespace V20210820
        {
            namespace Model
            {
                /**
                * Table Lineage Details
                */
                class TableLineageBaseInfo : public AbstractModel
                {
                public:
                    TableLineageBaseInfo();
                    ~TableLineageBaseInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Metadata Type
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return MetastoreType Metadata Type
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    std::string GetMetastoreType() const;

                    /**
                     * 设置Metadata Type
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _metastoreType Metadata Type
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
                     * 获取Path from Central Node to this Node
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return PrefixPath Path from Central Node to this Node
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    std::string GetPrefixPath() const;

                    /**
                     * 设置Path from Central Node to this Node
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _prefixPath Path from Central Node to this Node
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetPrefixPath(const std::string& _prefixPath);

                    /**
                     * 判断参数 PrefixPath 是否已赋值
                     * @return PrefixPath 是否已赋值
                     * 
                     */
                    bool PrefixPathHasBeenSet() const;

                    /**
                     * 获取Space ID
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return ProjectId Space ID
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    std::string GetProjectId() const;

                    /**
                     * 设置Space ID
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _projectId Space ID
Note: This field may return null, indicating that no valid value can be obtained.
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
                     * 获取Table ID
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return TableId Table ID
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    std::string GetTableId() const;

                    /**
                     * 设置Table ID
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _tableId Table ID
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
                     * 获取Table Lineage Parameters
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return Params Table Lineage Parameters
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    std::vector<LineageParamRecord> GetParams() const;

                    /**
                     * 设置Table Lineage Parameters
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _params Table Lineage Parameters
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetParams(const std::vector<LineageParamRecord>& _params);

                    /**
                     * 判断参数 Params 是否已赋值
                     * @return Params 是否已赋值
                     * 
                     */
                    bool ParamsHasBeenSet() const;

                    /**
                     * 获取Parent Node List
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return ParentSet Parent Node List
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    std::string GetParentSet() const;

                    /**
                     * 设置Parent Node List
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _parentSet Parent Node List
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetParentSet(const std::string& _parentSet);

                    /**
                     * 判断参数 ParentSet 是否已赋值
                     * @return ParentSet 是否已赋值
                     * 
                     */
                    bool ParentSetHasBeenSet() const;

                    /**
                     * 获取Child Node List
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return ChildSet Child Node List
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    std::string GetChildSet() const;

                    /**
                     * 设置Child Node List
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _childSet Child Node List
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetChildSet(const std::string& _childSet);

                    /**
                     * 判断参数 ChildSet 是否已赋值
                     * @return ChildSet 是否已赋值
                     * 
                     */
                    bool ChildSetHasBeenSet() const;

                    /**
                     * 获取Additional parameters
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return ExtParams Additional parameters
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    std::vector<RecordField> GetExtParams() const;

                    /**
                     * 设置Additional parameters
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _extParams Additional parameters
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetExtParams(const std::vector<RecordField>& _extParams);

                    /**
                     * 判断参数 ExtParams 是否已赋值
                     * @return ExtParams 是否已赋值
                     * 
                     */
                    bool ExtParamsHasBeenSet() const;

                    /**
                     * 获取Lineage ID
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return Id Lineage ID
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    std::string GetId() const;

                    /**
                     * 设置Lineage ID
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _id Lineage ID
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
                     * 获取Metadata Type Name
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return MetastoreTypeName Metadata Type Name
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    std::string GetMetastoreTypeName() const;

                    /**
                     * 设置Metadata Type Name
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _metastoreTypeName Metadata Type Name
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetMetastoreTypeName(const std::string& _metastoreTypeName);

                    /**
                     * 判断参数 MetastoreTypeName 是否已赋值
                     * @return MetastoreTypeName 是否已赋值
                     * 
                     */
                    bool MetastoreTypeNameHasBeenSet() const;

                    /**
                     * 获取Table Name
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return TableName Table Name
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    std::string GetTableName() const;

                    /**
                     * 设置Table Name
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _tableName Table Name
Note: This field may return null, indicating that no valid value can be obtained.
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
                     * 获取Full Table Name
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return QualifiedName Full Table Name
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    std::string GetQualifiedName() const;

                    /**
                     * 设置Full Table Name
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _qualifiedName Full Table Name
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetQualifiedName(const std::string& _qualifiedName);

                    /**
                     * 判断参数 QualifiedName 是否已赋值
                     * @return QualifiedName 是否已赋值
                     * 
                     */
                    bool QualifiedNameHasBeenSet() const;

                    /**
                     * 获取Number of Downstream Nodes in Lineage
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return DownStreamCount Number of Downstream Nodes in Lineage
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    int64_t GetDownStreamCount() const;

                    /**
                     * 设置Number of Downstream Nodes in Lineage
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _downStreamCount Number of Downstream Nodes in Lineage
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetDownStreamCount(const int64_t& _downStreamCount);

                    /**
                     * 判断参数 DownStreamCount 是否已赋值
                     * @return DownStreamCount 是否已赋值
                     * 
                     */
                    bool DownStreamCountHasBeenSet() const;

                    /**
                     * 获取Number of Upstream Nodes in Lineage
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return UpStreamCount Number of Upstream Nodes in Lineage
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    int64_t GetUpStreamCount() const;

                    /**
                     * 设置Number of Upstream Nodes in Lineage
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _upStreamCount Number of Upstream Nodes in Lineage
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetUpStreamCount(const int64_t& _upStreamCount);

                    /**
                     * 判断参数 UpStreamCount 是否已赋值
                     * @return UpStreamCount 是否已赋值
                     * 
                     */
                    bool UpStreamCountHasBeenSet() const;

                    /**
                     * 获取Bloodline Description
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return Description Bloodline Description
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置Bloodline Description
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _description Bloodline Description
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
                     * 获取Bloodline Creation Time
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return CreateTime Bloodline Creation Time
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置Bloodline Creation Time
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _createTime Bloodline Creation Time
Note: This field may return null, indicating that no valid value can be obtained.
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
                     * 获取Bloodline Update Time
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return ModifyTime Bloodline Update Time
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    std::string GetModifyTime() const;

                    /**
                     * 设置Bloodline Update Time
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _modifyTime Bloodline Update Time
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
                     * 获取Modify the task ID list of lineage
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return Tasks Modify the task ID list of lineage
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    std::vector<std::string> GetTasks() const;

                    /**
                     * 设置Modify the task ID list of lineage
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _tasks Modify the task ID list of lineage
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetTasks(const std::vector<std::string>& _tasks);

                    /**
                     * 判断参数 Tasks 是否已赋值
                     * @return Tasks 是否已赋值
                     * 
                     */
                    bool TasksHasBeenSet() const;

                private:

                    /**
                     * Metadata Type
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    std::string m_metastoreType;
                    bool m_metastoreTypeHasBeenSet;

                    /**
                     * Path from Central Node to this Node
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    std::string m_prefixPath;
                    bool m_prefixPathHasBeenSet;

                    /**
                     * Space ID
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    std::string m_projectId;
                    bool m_projectIdHasBeenSet;

                    /**
                     * Data source IDNote: This field may return null, indicating that no valid value can be obtained.
                     */
                    std::string m_datasourceId;
                    bool m_datasourceIdHasBeenSet;

                    /**
                     * Table ID
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    std::string m_tableId;
                    bool m_tableIdHasBeenSet;

                    /**
                     * Table Lineage Parameters
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    std::vector<LineageParamRecord> m_params;
                    bool m_paramsHasBeenSet;

                    /**
                     * Parent Node List
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    std::string m_parentSet;
                    bool m_parentSetHasBeenSet;

                    /**
                     * Child Node List
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    std::string m_childSet;
                    bool m_childSetHasBeenSet;

                    /**
                     * Additional parameters
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    std::vector<RecordField> m_extParams;
                    bool m_extParamsHasBeenSet;

                    /**
                     * Lineage ID
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    std::string m_id;
                    bool m_idHasBeenSet;

                    /**
                     * Metadata Type Name
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    std::string m_metastoreTypeName;
                    bool m_metastoreTypeNameHasBeenSet;

                    /**
                     * Table Name
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    std::string m_tableName;
                    bool m_tableNameHasBeenSet;

                    /**
                     * Full Table Name
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    std::string m_qualifiedName;
                    bool m_qualifiedNameHasBeenSet;

                    /**
                     * Number of Downstream Nodes in Lineage
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    int64_t m_downStreamCount;
                    bool m_downStreamCountHasBeenSet;

                    /**
                     * Number of Upstream Nodes in Lineage
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    int64_t m_upStreamCount;
                    bool m_upStreamCountHasBeenSet;

                    /**
                     * Bloodline Description
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * Bloodline Creation Time
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * Bloodline Update Time
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    std::string m_modifyTime;
                    bool m_modifyTimeHasBeenSet;

                    /**
                     * Modify the task ID list of lineage
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    std::vector<std::string> m_tasks;
                    bool m_tasksHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20210820_MODEL_TABLELINEAGEBASEINFO_H_
