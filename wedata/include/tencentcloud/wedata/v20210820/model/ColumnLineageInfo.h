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

#ifndef TENCENTCLOUD_WEDATA_V20210820_MODEL_COLUMNLINEAGEINFO_H_
#define TENCENTCLOUD_WEDATA_V20210820_MODEL_COLUMNLINEAGEINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/wedata/v20210820/model/LineageParamRecord.h>


namespace TencentCloud
{
    namespace Wedata
    {
        namespace V20210820
        {
            namespace Model
            {
                /**
                * Lineage Field Information
                */
                class ColumnLineageInfo : public AbstractModel
                {
                public:
                    ColumnLineageInfo();
                    ~ColumnLineageInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


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
                     * 获取Data Source ID
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return DatasourceId Data Source ID
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    std::string GetDatasourceId() const;

                    /**
                     * 设置Data Source ID
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _datasourceId Data Source ID
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
                     * 获取Field NameNote: This field may return null, indicating that no valid value can be obtained.
                     * @return ColumnName Field NameNote: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    std::string GetColumnName() const;

                    /**
                     * 设置Field NameNote: This field may return null, indicating that no valid value can be obtained.
                     * @param _columnName Field NameNote: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetColumnName(const std::string& _columnName);

                    /**
                     * 判断参数 ColumnName 是否已赋值
                     * @return ColumnName 是否已赋值
                     * 
                     */
                    bool ColumnNameHasBeenSet() const;

                    /**
                     * 获取Field Chinese Name
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return ColumnNameCn Field Chinese Name
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    std::string GetColumnNameCn() const;

                    /**
                     * 设置Field Chinese Name
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _columnNameCn Field Chinese Name
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetColumnNameCn(const std::string& _columnNameCn);

                    /**
                     * 判断参数 ColumnNameCn 是否已赋值
                     * @return ColumnNameCn 是否已赋值
                     * 
                     */
                    bool ColumnNameCnHasBeenSet() const;

                    /**
                     * 获取Field TypeNote: This field may return null, indicating that no valid value can be obtained.
                     * @return ColumnType Field TypeNote: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    std::string GetColumnType() const;

                    /**
                     * 设置Field TypeNote: This field may return null, indicating that no valid value can be obtained.
                     * @param _columnType Field TypeNote: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetColumnType(const std::string& _columnType);

                    /**
                     * 判断参数 ColumnType 是否已赋值
                     * @return ColumnType 是否已赋值
                     * 
                     */
                    bool ColumnTypeHasBeenSet() const;

                    /**
                     * 获取Relationship Parameters
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return RelationParams Relationship Parameters
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    std::string GetRelationParams() const;

                    /**
                     * 设置Relationship Parameters
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _relationParams Relationship Parameters
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetRelationParams(const std::string& _relationParams);

                    /**
                     * 判断参数 RelationParams 是否已赋值
                     * @return RelationParams 是否已赋值
                     * 
                     */
                    bool RelationParamsHasBeenSet() const;

                    /**
                     * 获取ParameterNote: This field may return null, indicating that no valid value can be obtained.
                     * @return Params ParameterNote: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    std::string GetParams() const;

                    /**
                     * 设置ParameterNote: This field may return null, indicating that no valid value can be obtained.
                     * @param _params ParameterNote: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetParams(const std::string& _params);

                    /**
                     * 判断参数 Params 是否已赋值
                     * @return Params 是否已赋值
                     * 
                     */
                    bool ParamsHasBeenSet() const;

                    /**
                     * 获取Parent ID
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return ParentId Parent ID
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    std::string GetParentId() const;

                    /**
                     * 设置Parent ID
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _parentId Parent ID
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetParentId(const std::string& _parentId);

                    /**
                     * 判断参数 ParentId 是否已赋值
                     * @return ParentId 是否已赋值
                     * 
                     */
                    bool ParentIdHasBeenSet() const;

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
                     * 获取Full Field Name
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return QualifiedName Full Field Name
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    std::string GetQualifiedName() const;

                    /**
                     * 设置Full Field Name
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _qualifiedName Full Field Name
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
                     * 获取Number of Downstream Nodes
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return DownStreamCount Number of Downstream Nodes
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    int64_t GetDownStreamCount() const;

                    /**
                     * 设置Number of Downstream Nodes
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _downStreamCount Number of Downstream Nodes
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
                     * 获取Number of Upstream Nodes
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return UpStreamCount Number of Upstream Nodes
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    int64_t GetUpStreamCount() const;

                    /**
                     * 设置Number of Upstream Nodes
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _upStreamCount Number of Upstream Nodes
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
                     * 获取DescriptionNote: This field may return null, indicating that no valid value can be obtained.
                     * @return Description DescriptionNote: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置DescriptionNote: This field may return null, indicating that no valid value can be obtained.
                     * @param _description DescriptionNote: This field may return null, indicating that no valid value can be obtained.
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
                     * 获取Path Information Starting from the Central Node
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return PrefixPath Path Information Starting from the Central Node
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    std::string GetPrefixPath() const;

                    /**
                     * 设置Path Information Starting from the Central Node
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _prefixPath Path Information Starting from the Central Node
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
                     * @return ModifyTime Update timeNote: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    std::string GetModifyTime() const;

                    /**
                     * 设置Update timeNote: This field may return null, indicating that no valid value can be obtained.
                     * @param _modifyTime Update timeNote: This field may return null, indicating that no valid value can be obtained.
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
                     * 获取Task ID list
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return Tasks Task ID list
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    std::vector<std::string> GetTasks() const;

                    /**
                     * 设置Task ID list
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _tasks Task ID list
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

                    /**
                     * 获取Parent Node List String
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return ParentSet Parent Node List String
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    std::string GetParentSet() const;

                    /**
                     * 设置Parent Node List String
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _parentSet Parent Node List String
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
                     * 获取Child Node List String
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return ChildSet Child Node List String
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    std::string GetChildSet() const;

                    /**
                     * 设置Child Node List String
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _childSet Child Node List String
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
                    std::vector<LineageParamRecord> GetExtParams() const;

                    /**
                     * 设置Additional parameters
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _extParams Additional parameters
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetExtParams(const std::vector<LineageParamRecord>& _extParams);

                    /**
                     * 判断参数 ExtParams 是否已赋值
                     * @return ExtParams 是否已赋值
                     * 
                     */
                    bool ExtParamsHasBeenSet() const;

                    /**
                     * 获取Table IDNote: This field may return null, indicating that no valid value can be obtained.
                     * @return TableId Table IDNote: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    std::string GetTableId() const;

                    /**
                     * 设置Table IDNote: This field may return null, indicating that no valid value can be obtained.
                     * @param _tableId Table IDNote: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetTableId(const std::string& _tableId);

                    /**
                     * 判断参数 TableId 是否已赋值
                     * @return TableId 是否已赋值
                     * 
                     */
                    bool TableIdHasBeenSet() const;

                private:

                    /**
                     * Lineage ID
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    std::string m_id;
                    bool m_idHasBeenSet;

                    /**
                     * Data Source ID
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    std::string m_datasourceId;
                    bool m_datasourceIdHasBeenSet;

                    /**
                     * Field NameNote: This field may return null, indicating that no valid value can be obtained.
                     */
                    std::string m_columnName;
                    bool m_columnNameHasBeenSet;

                    /**
                     * Field Chinese Name
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    std::string m_columnNameCn;
                    bool m_columnNameCnHasBeenSet;

                    /**
                     * Field TypeNote: This field may return null, indicating that no valid value can be obtained.
                     */
                    std::string m_columnType;
                    bool m_columnTypeHasBeenSet;

                    /**
                     * Relationship Parameters
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    std::string m_relationParams;
                    bool m_relationParamsHasBeenSet;

                    /**
                     * ParameterNote: This field may return null, indicating that no valid value can be obtained.
                     */
                    std::string m_params;
                    bool m_paramsHasBeenSet;

                    /**
                     * Parent ID
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    std::string m_parentId;
                    bool m_parentIdHasBeenSet;

                    /**
                     * Metadata Type
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    std::string m_metastoreType;
                    bool m_metastoreTypeHasBeenSet;

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
                     * Full Field Name
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    std::string m_qualifiedName;
                    bool m_qualifiedNameHasBeenSet;

                    /**
                     * Number of Downstream Nodes
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    int64_t m_downStreamCount;
                    bool m_downStreamCountHasBeenSet;

                    /**
                     * Number of Upstream Nodes
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    int64_t m_upStreamCount;
                    bool m_upStreamCountHasBeenSet;

                    /**
                     * DescriptionNote: This field may return null, indicating that no valid value can be obtained.
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * Path Information Starting from the Central Node
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    std::string m_prefixPath;
                    bool m_prefixPathHasBeenSet;

                    /**
                     * Creation TimeNote: This field may return null, indicating that no valid value can be obtained.
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * Update timeNote: This field may return null, indicating that no valid value can be obtained.
                     */
                    std::string m_modifyTime;
                    bool m_modifyTimeHasBeenSet;

                    /**
                     * Task ID list
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    std::vector<std::string> m_tasks;
                    bool m_tasksHasBeenSet;

                    /**
                     * Parent Node List String
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    std::string m_parentSet;
                    bool m_parentSetHasBeenSet;

                    /**
                     * Child Node List String
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    std::string m_childSet;
                    bool m_childSetHasBeenSet;

                    /**
                     * Additional parameters
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    std::vector<LineageParamRecord> m_extParams;
                    bool m_extParamsHasBeenSet;

                    /**
                     * Table IDNote: This field may return null, indicating that no valid value can be obtained.
                     */
                    std::string m_tableId;
                    bool m_tableIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20210820_MODEL_COLUMNLINEAGEINFO_H_
