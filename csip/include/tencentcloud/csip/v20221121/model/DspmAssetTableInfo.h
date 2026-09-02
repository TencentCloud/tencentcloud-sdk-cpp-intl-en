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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_DSPMASSETTABLEINFO_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_DSPMASSETTABLEINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/csip/v20221121/model/DspmIdentifyCategoryDetail.h>


namespace TencentCloud
{
    namespace Csip
    {
        namespace V20221121
        {
            namespace Model
            {
                /**
                * dspm asset table information
                */
                class DspmAssetTableInfo : public AbstractModel
                {
                public:
                    DspmAssetTableInfo();
                    ~DspmAssetTableInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>Asset instance id</p>
                     * @return AssetId <p>Asset instance id</p>
                     * 
                     */
                    std::string GetAssetId() const;

                    /**
                     * 设置<p>Asset instance id</p>
                     * @param _assetId <p>Asset instance id</p>
                     * 
                     */
                    void SetAssetId(const std::string& _assetId);

                    /**
                     * 判断参数 AssetId 是否已赋值
                     * @return AssetId 是否已赋值
                     * 
                     */
                    bool AssetIdHasBeenSet() const;

                    /**
                     * 获取<p>Database name</p>
                     * @return DbName <p>Database name</p>
                     * 
                     */
                    std::string GetDbName() const;

                    /**
                     * 设置<p>Database name</p>
                     * @param _dbName <p>Database name</p>
                     * 
                     */
                    void SetDbName(const std::string& _dbName);

                    /**
                     * 判断参数 DbName 是否已赋值
                     * @return DbName 是否已赋值
                     * 
                     */
                    bool DbNameHasBeenSet() const;

                    /**
                     * 获取<p>schema name.</p>
                     * @return SchemaName <p>schema name.</p>
                     * 
                     */
                    std::string GetSchemaName() const;

                    /**
                     * 设置<p>schema name.</p>
                     * @param _schemaName <p>schema name.</p>
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
                     * 获取<p>Table name</p>
                     * @return TableName <p>Table name</p>
                     * 
                     */
                    std::string GetTableName() const;

                    /**
                     * 设置<p>Table name</p>
                     * @param _tableName <p>Table name</p>
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
                     * 获取<p>number of fields</p>
                     * @return FieldCount <p>number of fields</p>
                     * 
                     */
                    uint64_t GetFieldCount() const;

                    /**
                     * 设置<p>number of fields</p>
                     * @param _fieldCount <p>number of fields</p>
                     * 
                     */
                    void SetFieldCount(const uint64_t& _fieldCount);

                    /**
                     * 判断参数 FieldCount 是否已赋值
                     * @return FieldCount 是否已赋值
                     * 
                     */
                    bool FieldCountHasBeenSet() const;

                    /**
                     * 获取<p>Number of sensitive fields</p>
                     * @return SensitiveFieldCount <p>Number of sensitive fields</p>
                     * 
                     */
                    uint64_t GetSensitiveFieldCount() const;

                    /**
                     * 设置<p>Number of sensitive fields</p>
                     * @param _sensitiveFieldCount <p>Number of sensitive fields</p>
                     * 
                     */
                    void SetSensitiveFieldCount(const uint64_t& _sensitiveFieldCount);

                    /**
                     * 判断参数 SensitiveFieldCount 是否已赋值
                     * @return SensitiveFieldCount 是否已赋值
                     * 
                     */
                    bool SensitiveFieldCountHasBeenSet() const;

                    /**
                     * 获取<p>Data item id set</p>
                     * @return RuleIds <p>Data item id set</p>
                     * 
                     */
                    std::vector<uint64_t> GetRuleIds() const;

                    /**
                     * 设置<p>Data item id set</p>
                     * @param _ruleIds <p>Data item id set</p>
                     * 
                     */
                    void SetRuleIds(const std::vector<uint64_t>& _ruleIds);

                    /**
                     * 判断参数 RuleIds 是否已赋值
                     * @return RuleIds 是否已赋值
                     * 
                     */
                    bool RuleIdsHasBeenSet() const;

                    /**
                     * 获取<p>Set of data item names</p>
                     * @return RuleNames <p>Set of data item names</p>
                     * 
                     */
                    std::vector<std::string> GetRuleNames() const;

                    /**
                     * 设置<p>Set of data item names</p>
                     * @param _ruleNames <p>Set of data item names</p>
                     * 
                     */
                    void SetRuleNames(const std::vector<std::string>& _ruleNames);

                    /**
                     * 判断参数 RuleNames 是否已赋值
                     * @return RuleNames 是否已赋值
                     * 
                     */
                    bool RuleNamesHasBeenSet() const;

                    /**
                     * 获取<p>Categorization id set</p>
                     * @return CategoryIds <p>Categorization id set</p>
                     * 
                     */
                    std::vector<uint64_t> GetCategoryIds() const;

                    /**
                     * 设置<p>Categorization id set</p>
                     * @param _categoryIds <p>Categorization id set</p>
                     * 
                     */
                    void SetCategoryIds(const std::vector<uint64_t>& _categoryIds);

                    /**
                     * 判断参数 CategoryIds 是否已赋值
                     * @return CategoryIds 是否已赋值
                     * 
                     */
                    bool CategoryIdsHasBeenSet() const;

                    /**
                     * 获取<p>Category name collection</p>
                     * @return CategoryNames <p>Category name collection</p>
                     * 
                     */
                    std::vector<std::string> GetCategoryNames() const;

                    /**
                     * 设置<p>Category name collection</p>
                     * @param _categoryNames <p>Category name collection</p>
                     * 
                     */
                    void SetCategoryNames(const std::vector<std::string>& _categoryNames);

                    /**
                     * 判断参数 CategoryNames 是否已赋值
                     * @return CategoryNames 是否已赋值
                     * 
                     */
                    bool CategoryNamesHasBeenSet() const;

                    /**
                     * 获取<p>Category details</p>
                     * @return CategoryDetails <p>Category details</p>
                     * 
                     */
                    std::vector<DspmIdentifyCategoryDetail> GetCategoryDetails() const;

                    /**
                     * 设置<p>Category details</p>
                     * @param _categoryDetails <p>Category details</p>
                     * 
                     */
                    void SetCategoryDetails(const std::vector<DspmIdentifyCategoryDetail>& _categoryDetails);

                    /**
                     * 判断参数 CategoryDetails 是否已赋值
                     * @return CategoryDetails 是否已赋值
                     * 
                     */
                    bool CategoryDetailsHasBeenSet() const;

                    /**
                     * 获取<p>Data table id</p>
                     * @return TableId <p>Data table id</p>
                     * 
                     */
                    uint64_t GetTableId() const;

                    /**
                     * 设置<p>Data table id</p>
                     * @param _tableId <p>Data table id</p>
                     * 
                     */
                    void SetTableId(const uint64_t& _tableId);

                    /**
                     * 判断参数 TableId 是否已赋值
                     * @return TableId 是否已赋值
                     * 
                     */
                    bool TableIdHasBeenSet() const;

                    /**
                     * 获取<p>Table annotation</p>
                     * @return TableComment <p>Table annotation</p>
                     * 
                     */
                    std::string GetTableComment() const;

                    /**
                     * 设置<p>Table annotation</p>
                     * @param _tableComment <p>Table annotation</p>
                     * 
                     */
                    void SetTableComment(const std::string& _tableComment);

                    /**
                     * 判断参数 TableComment 是否已赋值
                     * @return TableComment 是否已赋值
                     * 
                     */
                    bool TableCommentHasBeenSet() const;

                private:

                    /**
                     * <p>Asset instance id</p>
                     */
                    std::string m_assetId;
                    bool m_assetIdHasBeenSet;

                    /**
                     * <p>Database name</p>
                     */
                    std::string m_dbName;
                    bool m_dbNameHasBeenSet;

                    /**
                     * <p>schema name.</p>
                     */
                    std::string m_schemaName;
                    bool m_schemaNameHasBeenSet;

                    /**
                     * <p>Table name</p>
                     */
                    std::string m_tableName;
                    bool m_tableNameHasBeenSet;

                    /**
                     * <p>number of fields</p>
                     */
                    uint64_t m_fieldCount;
                    bool m_fieldCountHasBeenSet;

                    /**
                     * <p>Number of sensitive fields</p>
                     */
                    uint64_t m_sensitiveFieldCount;
                    bool m_sensitiveFieldCountHasBeenSet;

                    /**
                     * <p>Data item id set</p>
                     */
                    std::vector<uint64_t> m_ruleIds;
                    bool m_ruleIdsHasBeenSet;

                    /**
                     * <p>Set of data item names</p>
                     */
                    std::vector<std::string> m_ruleNames;
                    bool m_ruleNamesHasBeenSet;

                    /**
                     * <p>Categorization id set</p>
                     */
                    std::vector<uint64_t> m_categoryIds;
                    bool m_categoryIdsHasBeenSet;

                    /**
                     * <p>Category name collection</p>
                     */
                    std::vector<std::string> m_categoryNames;
                    bool m_categoryNamesHasBeenSet;

                    /**
                     * <p>Category details</p>
                     */
                    std::vector<DspmIdentifyCategoryDetail> m_categoryDetails;
                    bool m_categoryDetailsHasBeenSet;

                    /**
                     * <p>Data table id</p>
                     */
                    uint64_t m_tableId;
                    bool m_tableIdHasBeenSet;

                    /**
                     * <p>Table annotation</p>
                     */
                    std::string m_tableComment;
                    bool m_tableCommentHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_DSPMASSETTABLEINFO_H_
