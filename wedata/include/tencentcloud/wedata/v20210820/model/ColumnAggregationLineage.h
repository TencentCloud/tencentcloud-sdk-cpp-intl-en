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

#ifndef TENCENTCLOUD_WEDATA_V20210820_MODEL_COLUMNAGGREGATIONLINEAGE_H_
#define TENCENTCLOUD_WEDATA_V20210820_MODEL_COLUMNAGGREGATIONLINEAGE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/wedata/v20210820/model/SimpleColumnInfo.h>


namespace TencentCloud
{
    namespace Wedata
    {
        namespace V20210820
        {
            namespace Model
            {
                /**
                * Column Lineage Aggregation Information
                */
                class ColumnAggregationLineage : public AbstractModel
                {
                public:
                    ColumnAggregationLineage();
                    ~ColumnAggregationLineage() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Table nameNote: This field may return null, indicating that no valid value can be obtained.
                     * @return TableName Table nameNote: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    std::string GetTableName() const;

                    /**
                     * 设置Table nameNote: This field may return null, indicating that no valid value can be obtained.
                     * @param _tableName Table nameNote: This field may return null, indicating that no valid value can be obtained.
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
                     * 获取Parent Node ID
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return ParentId Parent Node ID
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    std::string GetParentId() const;

                    /**
                     * 设置Parent Node ID
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _parentId Parent Node ID
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
                     * 获取String Type Parent Node Collection
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return ParentSet String Type Parent Node Collection
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    std::string GetParentSet() const;

                    /**
                     * 设置String Type Parent Node Collection
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _parentSet String Type Parent Node Collection
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
                     * 获取String Type Child Node Collection
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return ChildSet String Type Child Node Collection
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    std::string GetChildSet() const;

                    /**
                     * 设置String Type Child Node Collection
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _childSet String Type Child Node Collection
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
                     * 获取Column Information Collection
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return ColumnInfoSet Column Information Collection
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    std::vector<SimpleColumnInfo> GetColumnInfoSet() const;

                    /**
                     * 设置Column Information Collection
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _columnInfoSet Column Information Collection
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetColumnInfoSet(const std::vector<SimpleColumnInfo>& _columnInfoSet);

                    /**
                     * 判断参数 ColumnInfoSet 是否已赋值
                     * @return ColumnInfoSet 是否已赋值
                     * 
                     */
                    bool ColumnInfoSetHasBeenSet() const;

                private:

                    /**
                     * Table nameNote: This field may return null, indicating that no valid value can be obtained.
                     */
                    std::string m_tableName;
                    bool m_tableNameHasBeenSet;

                    /**
                     * Parent Node ID
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
                     * String Type Parent Node Collection
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    std::string m_parentSet;
                    bool m_parentSetHasBeenSet;

                    /**
                     * String Type Child Node Collection
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    std::string m_childSet;
                    bool m_childSetHasBeenSet;

                    /**
                     * Column Information Collection
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    std::vector<SimpleColumnInfo> m_columnInfoSet;
                    bool m_columnInfoSetHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20210820_MODEL_COLUMNAGGREGATIONLINEAGE_H_
