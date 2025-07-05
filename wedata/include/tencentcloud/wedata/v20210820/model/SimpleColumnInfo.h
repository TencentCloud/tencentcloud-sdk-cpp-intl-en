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

#ifndef TENCENTCLOUD_WEDATA_V20210820_MODEL_SIMPLECOLUMNINFO_H_
#define TENCENTCLOUD_WEDATA_V20210820_MODEL_SIMPLECOLUMNINFO_H_

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
                * Lineage Column Description
                */
                class SimpleColumnInfo : public AbstractModel
                {
                public:
                    SimpleColumnInfo();
                    ~SimpleColumnInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Column ID
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return Id Column ID
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    std::string GetId() const;

                    /**
                     * 设置Column ID
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _id Column ID
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
                     * 获取Qualified Name
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return QualifiedName Qualified Name
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    std::string GetQualifiedName() const;

                    /**
                     * 设置Qualified Name
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _qualifiedName Qualified Name
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
                     * 获取Column nameNote: This field may return null, indicating that no valid value can be obtained.
                     * @return ColumnName Column nameNote: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    std::string GetColumnName() const;

                    /**
                     * 设置Column nameNote: This field may return null, indicating that no valid value can be obtained.
                     * @param _columnName Column nameNote: This field may return null, indicating that no valid value can be obtained.
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
                     * 获取Column Chinese Name
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return ColumnNameCn Column Chinese Name
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    std::string GetColumnNameCn() const;

                    /**
                     * 设置Column Chinese Name
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _columnNameCn Column Chinese Name
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
                     * 获取Column Type
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return ColumnType Column Type
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    std::string GetColumnType() const;

                    /**
                     * 设置Column Type
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _columnType Column Type
Note: This field may return null, indicating that no valid value can be obtained.
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
                     * 获取Column Description
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return Description Column Description
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置Column Description
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _description Column Description
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
                     * 获取Prefix Path
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return PrefixPath Prefix Path
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    std::string GetPrefixPath() const;

                    /**
                     * 设置Prefix Path
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _prefixPath Prefix Path
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
                     * 获取Modification TimeNote: This field may return null, indicating that no valid value can be obtained.
                     * @return ModifyTime Modification TimeNote: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    std::string GetModifyTime() const;

                    /**
                     * 设置Modification TimeNote: This field may return null, indicating that no valid value can be obtained.
                     * @param _modifyTime Modification TimeNote: This field may return null, indicating that no valid value can be obtained.
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
                     * 获取Downstream Quantity
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return DownStreamCount Downstream Quantity
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    int64_t GetDownStreamCount() const;

                    /**
                     * 设置Downstream Quantity
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _downStreamCount Downstream Quantity
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
                     * 获取Upstream Quantity
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return UpStreamCount Upstream Quantity
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    int64_t GetUpStreamCount() const;

                    /**
                     * 设置Upstream Quantity
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _upStreamCount Upstream Quantity
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
                     * 获取Task Collection
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return Tasks Task Collection
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    std::vector<std::string> GetTasks() const;

                    /**
                     * 设置Task Collection
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _tasks Task Collection
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
                     * Column ID
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    std::string m_id;
                    bool m_idHasBeenSet;

                    /**
                     * Qualified Name
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    std::string m_qualifiedName;
                    bool m_qualifiedNameHasBeenSet;

                    /**
                     * Column nameNote: This field may return null, indicating that no valid value can be obtained.
                     */
                    std::string m_columnName;
                    bool m_columnNameHasBeenSet;

                    /**
                     * Column Chinese Name
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    std::string m_columnNameCn;
                    bool m_columnNameCnHasBeenSet;

                    /**
                     * Column Type
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    std::string m_columnType;
                    bool m_columnTypeHasBeenSet;

                    /**
                     * Column Description
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * Prefix Path
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
                     * Modification TimeNote: This field may return null, indicating that no valid value can be obtained.
                     */
                    std::string m_modifyTime;
                    bool m_modifyTimeHasBeenSet;

                    /**
                     * Data Source ID
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    std::string m_datasourceId;
                    bool m_datasourceIdHasBeenSet;

                    /**
                     * Downstream Quantity
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    int64_t m_downStreamCount;
                    bool m_downStreamCountHasBeenSet;

                    /**
                     * Upstream Quantity
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    int64_t m_upStreamCount;
                    bool m_upStreamCountHasBeenSet;

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
                     * Task Collection
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    std::vector<std::string> m_tasks;
                    bool m_tasksHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20210820_MODEL_SIMPLECOLUMNINFO_H_
