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

#ifndef TENCENTCLOUD_BI_V20220105_MODEL_TABLEFIELD_H_
#define TENCENTCLOUD_BI_V20220105_MODEL_TABLEFIELD_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/bi/v20220105/model/EmptyValueConfig.h>


namespace TencentCloud
{
    namespace Bi
    {
        namespace V20220105
        {
            namespace Model
            {
                /**
                * Table field description
                */
                class TableField : public AbstractModel
                {
                public:
                    TableField();
                    ~TableField() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Field name in the db
                     * @return DbName Field name in the db
                     * 
                     */
                    std::string GetDbName() const;

                    /**
                     * 设置Field name in the db
                     * @param _dbName Field name in the db
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
                     * 获取bi display name
                     * @return AliasName bi display name
                     * 
                     */
                    std::string GetAliasName() const;

                    /**
                     * 设置bi display name
                     * @param _aliasName bi display name
                     * 
                     */
                    void SetAliasName(const std::string& _aliasName);

                    /**
                     * 判断参数 AliasName 是否已赋值
                     * @return AliasName 是否已赋值
                     * 
                     */
                    bool AliasNameHasBeenSet() const;

                    /**
                     * 获取Field type in the db
                     * @return DbType Field type in the db
                     * 
                     */
                    std::string GetDbType() const;

                    /**
                     * 设置Field type in the db
                     * @param _dbType Field type in the db
                     * 
                     */
                    void SetDbType(const std::string& _dbType);

                    /**
                     * 判断参数 DbType 是否已赋值
                     * @return DbType 是否已赋值
                     * 
                     */
                    bool DbTypeHasBeenSet() const;

                    /**
                     * 获取Abstract field types after BI categorization, such as string, number, time
                     * @return FieldType Abstract field types after BI categorization, such as string, number, time
                     * 
                     */
                    std::string GetFieldType() const;

                    /**
                     * 设置Abstract field types after BI categorization, such as string, number, time
                     * @param _fieldType Abstract field types after BI categorization, such as string, number, time
                     * 
                     */
                    void SetFieldType(const std::string& _fieldType);

                    /**
                     * 判断参数 FieldType 是否已赋值
                     * @return FieldType 是否已赋值
                     * 
                     */
                    bool FieldTypeHasBeenSet() const;

                    /**
                     * 获取Complex detail type generated after calculation formula of combination of fields
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return FieldComplexType Complex detail type generated after calculation formula of combination of fields
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetFieldComplexType() const;

                    /**
                     * 设置Complex detail type generated after calculation formula of combination of fields
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _fieldComplexType Complex detail type generated after calculation formula of combination of fields
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetFieldComplexType(const std::string& _fieldComplexType);

                    /**
                     * 判断参数 FieldComplexType 是否已赋值
                     * @return FieldComplexType 是否已赋值
                     * 
                     */
                    bool FieldComplexTypeHasBeenSet() const;

                    /**
                     * 获取Field description
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Mark Field description
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetMark() const;

                    /**
                     * 设置Field description
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _mark Field description
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetMark(const std::string& _mark);

                    /**
                     * 判断参数 Mark 是否已赋值
                     * @return Mark 是否已赋值
                     * 
                     */
                    bool MarkHasBeenSet() const;

                    /**
                     * 获取Field calculation formula
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return FormatRule Field calculation formula
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetFormatRule() const;

                    /**
                     * 设置Field calculation formula
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _formatRule Field calculation formula
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetFormatRule(const std::string& _formatRule);

                    /**
                     * 判断参数 FormatRule 是否已赋值
                     * @return FormatRule 是否已赋值
                     * 
                     */
                    bool FormatRuleHasBeenSet() const;

                    /**
                     * 获取Whether to filter empty data fields
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return IsFilter Whether to filter empty data fields
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    bool GetIsFilter() const;

                    /**
                     * 设置Whether to filter empty data fields
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _isFilter Whether to filter empty data fields
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetIsFilter(const bool& _isFilter);

                    /**
                     * 判断参数 IsFilter 是否已赋值
                     * @return IsFilter 是否已赋值
                     * 
                     */
                    bool IsFilterHasBeenSet() const;

                    /**
                     * 获取Compute field type
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return CalcType Compute field type
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetCalcType() const;

                    /**
                     * 设置Compute field type
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _calcType Compute field type
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetCalcType(const std::string& _calcType);

                    /**
                     * 判断参数 CalcType 是否已赋值
                     * @return CalcType 是否已赋值
                     * 
                     */
                    bool CalcTypeHasBeenSet() const;

                    /**
                     * 获取Formula content of the calculated field
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return CalcFormula Formula content of the calculated field
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetCalcFormula() const;

                    /**
                     * 设置Formula content of the calculated field
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _calcFormula Formula content of the calculated field
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetCalcFormula(const std::string& _calcFormula);

                    /**
                     * 判断参数 CalcFormula 是否已赋值
                     * @return CalcFormula 是否已赋值
                     * 
                     */
                    bool CalcFormulaHasBeenSet() const;

                    /**
                     * 获取Chinese formula content of the calculated field, displayed on the front-end
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return CalcDesc Chinese formula content of the calculated field, displayed on the front-end
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetCalcDesc() const;

                    /**
                     * 设置Chinese formula content of the calculated field, displayed on the front-end
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _calcDesc Chinese formula content of the calculated field, displayed on the front-end
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetCalcDesc(const std::string& _calcDesc);

                    /**
                     * 判断参数 CalcDesc 是否已赋值
                     * @return CalcDesc 是否已赋值
                     * 
                     */
                    bool CalcDescHasBeenSet() const;

                    /**
                     * 获取Associate dictionary table id
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return DictId Associate dictionary table id
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    uint64_t GetDictId() const;

                    /**
                     * 设置Associate dictionary table id
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _dictId Associate dictionary table id
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetDictId(const uint64_t& _dictId);

                    /**
                     * 判断参数 DictId 是否已赋值
                     * @return DictId 是否已赋值
                     * 
                     */
                    bool DictIdHasBeenSet() const;

                    /**
                     * 获取Associate dictionary table name
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return DictName Associate dictionary table name
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetDictName() const;

                    /**
                     * 设置Associate dictionary table name
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _dictName Associate dictionary table name
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetDictName(const std::string& _dictName);

                    /**
                     * 判断参数 DictName 是否已赋值
                     * @return DictName 是否已赋值
                     * 
                     */
                    bool DictNameHasBeenSet() const;

                    /**
                     * 获取Optional, join tables to add field
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return TableNodeId Optional, join tables to add field
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetTableNodeId() const;

                    /**
                     * 设置Optional, join tables to add field
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _tableNodeId Optional, join tables to add field
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetTableNodeId(const std::string& _tableNodeId);

                    /**
                     * 判断参数 TableNodeId 是否已赋值
                     * @return TableNodeId 是否已赋值
                     * 
                     */
                    bool TableNodeIdHasBeenSet() const;

                    /**
                     * 获取excel
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return ExcelName excel
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetExcelName() const;

                    /**
                     * 设置excel
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _excelName excel
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetExcelName(const std::string& _excelName);

                    /**
                     * 判断参数 ExcelName 是否已赋值
                     * @return ExcelName 是否已赋值
                     * 
                     */
                    bool ExcelNameHasBeenSet() const;

                    /**
                     * 获取Optional, join tables to add field, name of the table the field belongs to
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return TableName Optional, join tables to add field, name of the table the field belongs to
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetTableName() const;

                    /**
                     * 设置Optional, join tables to add field, name of the table the field belongs to
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _tableName Optional, join tables to add field, name of the table the field belongs to
Note: This field may return null, indicating that no valid values can be obtained.
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
                     * 获取api data source path name
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return JsonPathName api data source path name
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetJsonPathName() const;

                    /**
                     * 设置api data source path name
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _jsonPathName api data source path name
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetJsonPathName(const std::string& _jsonPathName);

                    /**
                     * 判断参数 JsonPathName 是否已赋值
                     * @return JsonPathName 是否已赋值
                     * 
                     */
                    bool JsonPathNameHasBeenSet() const;

                    /**
                     * 获取Geographic field identifier
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Granularity Geographic field identifier
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetGranularity() const;

                    /**
                     * 设置Geographic field identifier
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _granularity Geographic field identifier
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetGranularity(const std::string& _granularity);

                    /**
                     * 判断参数 Granularity 是否已赋值
                     * @return Granularity 是否已赋值
                     * 
                     */
                    bool GranularityHasBeenSet() const;

                    /**
                     * 获取Map id
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return GeoJsonId Map id
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    uint64_t GetGeoJsonId() const;

                    /**
                     * 设置Map id
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _geoJsonId Map id
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetGeoJsonId(const uint64_t& _geoJsonId);

                    /**
                     * 判断参数 GeoJsonId 是否已赋值
                     * @return GeoJsonId 是否已赋值
                     * 
                     */
                    bool GeoJsonIdHasBeenSet() const;

                    /**
                     * 获取Style configuration for null value display
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return EmptyValueConfig Style configuration for null value display
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    EmptyValueConfig GetEmptyValueConfig() const;

                    /**
                     * 设置Style configuration for null value display
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _emptyValueConfig Style configuration for null value display
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetEmptyValueConfig(const EmptyValueConfig& _emptyValueConfig);

                    /**
                     * 判断参数 EmptyValueConfig 是否已赋值
                     * @return EmptyValueConfig 是否已赋值
                     * 
                     */
                    bool EmptyValueConfigHasBeenSet() const;

                    /**
                     * 获取Original column name
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return DbFieldName Original column name
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetDbFieldName() const;

                    /**
                     * 设置Original column name
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _dbFieldName Original column name
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetDbFieldName(const std::string& _dbFieldName);

                    /**
                     * 判断参数 DbFieldName 是否已赋值
                     * @return DbFieldName 是否已赋值
                     * 
                     */
                    bool DbFieldNameHasBeenSet() const;

                    /**
                     * 获取Whether to copy field operation
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return IsCopyOperation Whether to copy field operation
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    bool GetIsCopyOperation() const;

                    /**
                     * 设置Whether to copy field operation
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _isCopyOperation Whether to copy field operation
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetIsCopyOperation(const bool& _isCopyOperation);

                    /**
                     * 判断参数 IsCopyOperation 是否已赋值
                     * @return IsCopyOperation 是否已赋值
                     * 
                     */
                    bool IsCopyOperationHasBeenSet() const;

                    /**
                     * 获取Whether to copy from common fields
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return IsCopyFromNormal Whether to copy from common fields
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    bool GetIsCopyFromNormal() const;

                    /**
                     * 设置Whether to copy from common fields
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _isCopyFromNormal Whether to copy from common fields
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetIsCopyFromNormal(const bool& _isCopyFromNormal);

                    /**
                     * 判断参数 IsCopyFromNormal 是否已赋值
                     * @return IsCopyFromNormal 是否已赋值
                     * 
                     */
                    bool IsCopyFromNormalHasBeenSet() const;

                private:

                    /**
                     * Field name in the db
                     */
                    std::string m_dbName;
                    bool m_dbNameHasBeenSet;

                    /**
                     * bi display name
                     */
                    std::string m_aliasName;
                    bool m_aliasNameHasBeenSet;

                    /**
                     * Field type in the db
                     */
                    std::string m_dbType;
                    bool m_dbTypeHasBeenSet;

                    /**
                     * Abstract field types after BI categorization, such as string, number, time
                     */
                    std::string m_fieldType;
                    bool m_fieldTypeHasBeenSet;

                    /**
                     * Complex detail type generated after calculation formula of combination of fields
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_fieldComplexType;
                    bool m_fieldComplexTypeHasBeenSet;

                    /**
                     * Field description
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_mark;
                    bool m_markHasBeenSet;

                    /**
                     * Field calculation formula
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_formatRule;
                    bool m_formatRuleHasBeenSet;

                    /**
                     * Whether to filter empty data fields
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    bool m_isFilter;
                    bool m_isFilterHasBeenSet;

                    /**
                     * Compute field type
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_calcType;
                    bool m_calcTypeHasBeenSet;

                    /**
                     * Formula content of the calculated field
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_calcFormula;
                    bool m_calcFormulaHasBeenSet;

                    /**
                     * Chinese formula content of the calculated field, displayed on the front-end
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_calcDesc;
                    bool m_calcDescHasBeenSet;

                    /**
                     * Associate dictionary table id
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    uint64_t m_dictId;
                    bool m_dictIdHasBeenSet;

                    /**
                     * Associate dictionary table name
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_dictName;
                    bool m_dictNameHasBeenSet;

                    /**
                     * Optional, join tables to add field
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_tableNodeId;
                    bool m_tableNodeIdHasBeenSet;

                    /**
                     * excel
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_excelName;
                    bool m_excelNameHasBeenSet;

                    /**
                     * Optional, join tables to add field, name of the table the field belongs to
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_tableName;
                    bool m_tableNameHasBeenSet;

                    /**
                     * api data source path name
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_jsonPathName;
                    bool m_jsonPathNameHasBeenSet;

                    /**
                     * Geographic field identifier
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_granularity;
                    bool m_granularityHasBeenSet;

                    /**
                     * Map id
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    uint64_t m_geoJsonId;
                    bool m_geoJsonIdHasBeenSet;

                    /**
                     * Style configuration for null value display
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    EmptyValueConfig m_emptyValueConfig;
                    bool m_emptyValueConfigHasBeenSet;

                    /**
                     * Original column name
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_dbFieldName;
                    bool m_dbFieldNameHasBeenSet;

                    /**
                     * Whether to copy field operation
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    bool m_isCopyOperation;
                    bool m_isCopyOperationHasBeenSet;

                    /**
                     * Whether to copy from common fields
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    bool m_isCopyFromNormal;
                    bool m_isCopyFromNormalHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_BI_V20220105_MODEL_TABLEFIELD_H_
