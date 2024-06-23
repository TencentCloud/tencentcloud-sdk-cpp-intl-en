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

#ifndef TENCENTCLOUD_WEDATA_V20210820_MODEL_RULE_H_
#define TENCENTCLOUD_WEDATA_V20210820_MODEL_RULE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/wedata/v20210820/model/CompareRule.h>
#include <tencentcloud/wedata/v20210820/model/RuleFieldConfig.h>
#include <tencentcloud/wedata/v20210820/model/RuleGroupExecStrategy.h>
#include <tencentcloud/wedata/v20210820/model/RuleGroupSubscribe.h>


namespace TencentCloud
{
    namespace Wedata
    {
        namespace V20210820
        {
            namespace Model
            {
                /**
                * Data Quality Rules
                */
                class Rule : public AbstractModel
                {
                public:
                    Rule();
                    ~Rule() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Rule ID
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return RuleId Rule ID
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    uint64_t GetRuleId() const;

                    /**
                     * 设置Rule ID
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _ruleId Rule ID
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetRuleId(const uint64_t& _ruleId);

                    /**
                     * 判断参数 RuleId 是否已赋值
                     * @return RuleId 是否已赋值
                     * 
                     */
                    bool RuleIdHasBeenSet() const;

                    /**
                     * 获取Rule Group ID
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return RuleGroupId Rule Group ID
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    uint64_t GetRuleGroupId() const;

                    /**
                     * 设置Rule Group ID
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _ruleGroupId Rule Group ID
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetRuleGroupId(const uint64_t& _ruleGroupId);

                    /**
                     * 判断参数 RuleGroupId 是否已赋值
                     * @return RuleGroupId 是否已赋值
                     * 
                     */
                    bool RuleGroupIdHasBeenSet() const;

                    /**
                     * 获取Data Table ID
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return TableId Data Table ID
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    std::string GetTableId() const;

                    /**
                     * 设置Data Table ID
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _tableId Data Table ID
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
                     * 获取Rule nameNote: This field may return null, indicating that no valid value can be obtained.
                     * @return Name Rule nameNote: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置Rule nameNote: This field may return null, indicating that no valid value can be obtained.
                     * @param _name Rule nameNote: This field may return null, indicating that no valid value can be obtained.
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
                     * 获取Rule Type 1. System Template, 2. Custom Definition Template, 3. Custom Definition SQL
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return Type Rule Type 1. System Template, 2. Custom Definition Template, 3. Custom Definition SQL
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    uint64_t GetType() const;

                    /**
                     * 设置Rule Type 1. System Template, 2. Custom Definition Template, 3. Custom Definition SQL
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _type Rule Type 1. System Template, 2. Custom Definition Template, 3. Custom Definition SQL
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetType(const uint64_t& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     * 
                     */
                    bool TypeHasBeenSet() const;

                    /**
                     * 获取Rule Template ID
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return RuleTemplateId Rule Template ID
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    uint64_t GetRuleTemplateId() const;

                    /**
                     * 设置Rule Template ID
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _ruleTemplateId Rule Template ID
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetRuleTemplateId(const uint64_t& _ruleTemplateId);

                    /**
                     * 判断参数 RuleTemplateId 是否已赋值
                     * @return RuleTemplateId 是否已赋值
                     * 
                     */
                    bool RuleTemplateIdHasBeenSet() const;

                    /**
                     * 获取Rule Template Overview
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return RuleTemplateContent Rule Template Overview
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    std::string GetRuleTemplateContent() const;

                    /**
                     * 设置Rule Template Overview
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _ruleTemplateContent Rule Template Overview
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetRuleTemplateContent(const std::string& _ruleTemplateContent);

                    /**
                     * 判断参数 RuleTemplateContent 是否已赋值
                     * @return RuleTemplateContent 是否已赋值
                     * 
                     */
                    bool RuleTemplateContentHasBeenSet() const;

                    /**
                     * 获取Quality Dimension of Rule 1: Accuracy, 2: Uniqueness, 3: Completeness, 4: Consistency, 5: Timeliness, 6: Validity
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return QualityDim Quality Dimension of Rule 1: Accuracy, 2: Uniqueness, 3: Completeness, 4: Consistency, 5: Timeliness, 6: Validity
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    uint64_t GetQualityDim() const;

                    /**
                     * 设置Quality Dimension of Rule 1: Accuracy, 2: Uniqueness, 3: Completeness, 4: Consistency, 5: Timeliness, 6: Validity
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _qualityDim Quality Dimension of Rule 1: Accuracy, 2: Uniqueness, 3: Completeness, 4: Consistency, 5: Timeliness, 6: Validity
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetQualityDim(const uint64_t& _qualityDim);

                    /**
                     * 判断参数 QualityDim 是否已赋值
                     * @return QualityDim 是否已赋值
                     * 
                     */
                    bool QualityDimHasBeenSet() const;

                    /**
                     * 获取Applicable Source Data Object Type (1: Constant, 2: Offline Table Level, 3: Offline Field Level)
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return SourceObjectType Applicable Source Data Object Type (1: Constant, 2: Offline Table Level, 3: Offline Field Level)
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    uint64_t GetSourceObjectType() const;

                    /**
                     * 设置Applicable Source Data Object Type (1: Constant, 2: Offline Table Level, 3: Offline Field Level)
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _sourceObjectType Applicable Source Data Object Type (1: Constant, 2: Offline Table Level, 3: Offline Field Level)
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetSourceObjectType(const uint64_t& _sourceObjectType);

                    /**
                     * 判断参数 SourceObjectType 是否已赋值
                     * @return SourceObjectType 是否已赋值
                     * 
                     */
                    bool SourceObjectTypeHasBeenSet() const;

                    /**
                     * 获取Applicable Source Data Object Type (1: Numeric, 2: String)
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return SourceObjectDataType Applicable Source Data Object Type (1: Numeric, 2: String)
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    uint64_t GetSourceObjectDataType() const;

                    /**
                     * 设置Applicable Source Data Object Type (1: Numeric, 2: String)
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _sourceObjectDataType Applicable Source Data Object Type (1: Numeric, 2: String)
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetSourceObjectDataType(const uint64_t& _sourceObjectDataType);

                    /**
                     * 判断参数 SourceObjectDataType 是否已赋值
                     * @return SourceObjectDataType 是否已赋值
                     * 
                     */
                    bool SourceObjectDataTypeHasBeenSet() const;

                    /**
                     * 获取Source Field Detailed Type, INT, STRING
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return SourceObjectDataTypeName Source Field Detailed Type, INT, STRING
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    std::string GetSourceObjectDataTypeName() const;

                    /**
                     * 设置Source Field Detailed Type, INT, STRING
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _sourceObjectDataTypeName Source Field Detailed Type, INT, STRING
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetSourceObjectDataTypeName(const std::string& _sourceObjectDataTypeName);

                    /**
                     * 判断参数 SourceObjectDataTypeName 是否已赋值
                     * @return SourceObjectDataTypeName 是否已赋值
                     * 
                     */
                    bool SourceObjectDataTypeNameHasBeenSet() const;

                    /**
                     * 获取Source Field Name
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return SourceObjectValue Source Field Name
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    std::string GetSourceObjectValue() const;

                    /**
                     * 设置Source Field Name
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _sourceObjectValue Source Field Name
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetSourceObjectValue(const std::string& _sourceObjectValue);

                    /**
                     * 判断参数 SourceObjectValue 是否已赋值
                     * @return SourceObjectValue 是否已赋值
                     * 
                     */
                    bool SourceObjectValueHasBeenSet() const;

                    /**
                     * 获取Detection Range 1. Whole Table, 2. Conditional Scan
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return ConditionType Detection Range 1. Whole Table, 2. Conditional Scan
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    uint64_t GetConditionType() const;

                    /**
                     * 设置Detection Range 1. Whole Table, 2. Conditional Scan
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _conditionType Detection Range 1. Whole Table, 2. Conditional Scan
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetConditionType(const uint64_t& _conditionType);

                    /**
                     * 判断参数 ConditionType 是否已赋值
                     * @return ConditionType 是否已赋值
                     * 
                     */
                    bool ConditionTypeHasBeenSet() const;

                    /**
                     * 获取Conditional Scan WHERE Condition Expression
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return ConditionExpression Conditional Scan WHERE Condition Expression
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    std::string GetConditionExpression() const;

                    /**
                     * 设置Conditional Scan WHERE Condition Expression
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _conditionExpression Conditional Scan WHERE Condition Expression
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetConditionExpression(const std::string& _conditionExpression);

                    /**
                     * 判断参数 ConditionExpression 是否已赋值
                     * @return ConditionExpression 是否已赋值
                     * 
                     */
                    bool ConditionExpressionHasBeenSet() const;

                    /**
                     * 获取Custom Template SQL Expression from Definition
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return CustomSql Custom Template SQL Expression from Definition
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    std::string GetCustomSql() const;

                    /**
                     * 设置Custom Template SQL Expression from Definition
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _customSql Custom Template SQL Expression from Definition
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetCustomSql(const std::string& _customSql);

                    /**
                     * 判断参数 CustomSql 是否已赋值
                     * @return CustomSql 是否已赋值
                     * 
                     */
                    bool CustomSqlHasBeenSet() const;

                    /**
                     * 获取Alert Trigger Condition
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return CompareRule Alert Trigger Condition
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    CompareRule GetCompareRule() const;

                    /**
                     * 设置Alert Trigger Condition
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _compareRule Alert Trigger Condition
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetCompareRule(const CompareRule& _compareRule);

                    /**
                     * 判断参数 CompareRule 是否已赋值
                     * @return CompareRule 是否已赋值
                     * 
                     */
                    bool CompareRuleHasBeenSet() const;

                    /**
                     * 获取Alert Trigger Level 1. Low, 2. Medium, 3. High
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return AlarmLevel Alert Trigger Level 1. Low, 2. Medium, 3. High
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    uint64_t GetAlarmLevel() const;

                    /**
                     * 设置Alert Trigger Level 1. Low, 2. Medium, 3. High
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _alarmLevel Alert Trigger Level 1. Low, 2. Medium, 3. High
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetAlarmLevel(const uint64_t& _alarmLevel);

                    /**
                     * 判断参数 AlarmLevel 是否已赋值
                     * @return AlarmLevel 是否已赋值
                     * 
                     */
                    bool AlarmLevelHasBeenSet() const;

                    /**
                     * 获取Rule DescriptionNote: This field may return null, indicating that no valid value can be obtained.
                     * @return Description Rule DescriptionNote: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置Rule DescriptionNote: This field may return null, indicating that no valid value can be obtained.
                     * @param _description Rule DescriptionNote: This field may return null, indicating that no valid value can be obtained.
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
                     * 获取Rule Configurator
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return Operator Rule Configurator
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    std::string GetOperator() const;

                    /**
                     * 设置Rule Configurator
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _operator Rule Configurator
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetOperator(const std::string& _operator);

                    /**
                     * 判断参数 Operator 是否已赋值
                     * @return Operator 是否已赋值
                     * 
                     */
                    bool OperatorHasBeenSet() const;

                    /**
                     * 获取Target Database Id
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return TargetDatabaseId Target Database Id
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    std::string GetTargetDatabaseId() const;

                    /**
                     * 设置Target Database Id
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _targetDatabaseId Target Database Id
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetTargetDatabaseId(const std::string& _targetDatabaseId);

                    /**
                     * 判断参数 TargetDatabaseId 是否已赋值
                     * @return TargetDatabaseId 是否已赋值
                     * 
                     */
                    bool TargetDatabaseIdHasBeenSet() const;

                    /**
                     * 获取Target Database Name
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return TargetDatabaseName Target Database Name
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    std::string GetTargetDatabaseName() const;

                    /**
                     * 设置Target Database Name
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _targetDatabaseName Target Database Name
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetTargetDatabaseName(const std::string& _targetDatabaseName);

                    /**
                     * 判断参数 TargetDatabaseName 是否已赋值
                     * @return TargetDatabaseName 是否已赋值
                     * 
                     */
                    bool TargetDatabaseNameHasBeenSet() const;

                    /**
                     * 获取Target Table Id
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return TargetTableId Target Table Id
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    std::string GetTargetTableId() const;

                    /**
                     * 设置Target Table Id
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _targetTableId Target Table Id
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetTargetTableId(const std::string& _targetTableId);

                    /**
                     * 判断参数 TargetTableId 是否已赋值
                     * @return TargetTableId 是否已赋值
                     * 
                     */
                    bool TargetTableIdHasBeenSet() const;

                    /**
                     * 获取Target Table Name
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return TargetTableName Target Table Name
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    std::string GetTargetTableName() const;

                    /**
                     * 设置Target Table Name
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _targetTableName Target Table Name
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetTargetTableName(const std::string& _targetTableName);

                    /**
                     * 判断参数 TargetTableName 是否已赋值
                     * @return TargetTableName 是否已赋值
                     * 
                     */
                    bool TargetTableNameHasBeenSet() const;

                    /**
                     * 获取Target Field Filter Condition Expression
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return TargetConditionExpr Target Field Filter Condition Expression
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    std::string GetTargetConditionExpr() const;

                    /**
                     * 设置Target Field Filter Condition Expression
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _targetConditionExpr Target Field Filter Condition Expression
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetTargetConditionExpr(const std::string& _targetConditionExpr);

                    /**
                     * 判断参数 TargetConditionExpr 是否已赋值
                     * @return TargetConditionExpr 是否已赋值
                     * 
                     */
                    bool TargetConditionExprHasBeenSet() const;

                    /**
                     * 获取Source and target field association conditions in ON expression
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return RelConditionExpr Source and target field association conditions in ON expression
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    std::string GetRelConditionExpr() const;

                    /**
                     * 设置Source and target field association conditions in ON expression
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _relConditionExpr Source and target field association conditions in ON expression
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetRelConditionExpr(const std::string& _relConditionExpr);

                    /**
                     * 判断参数 RelConditionExpr 是否已赋值
                     * @return RelConditionExpr 是否已赋值
                     * 
                     */
                    bool RelConditionExprHasBeenSet() const;

                    /**
                     * 获取From Definition template SQL expression parameters
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return FieldConfig From Definition template SQL expression parameters
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    RuleFieldConfig GetFieldConfig() const;

                    /**
                     * 设置From Definition template SQL expression parameters
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _fieldConfig From Definition template SQL expression parameters
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetFieldConfig(const RuleFieldConfig& _fieldConfig);

                    /**
                     * 判断参数 FieldConfig 是否已赋值
                     * @return FieldConfig 是否已赋值
                     * 
                     */
                    bool FieldConfigHasBeenSet() const;

                    /**
                     * 获取Whether to join multiple tables
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return MultiSourceFlag Whether to join multiple tables
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    bool GetMultiSourceFlag() const;

                    /**
                     * 设置Whether to join multiple tables
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _multiSourceFlag Whether to join multiple tables
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetMultiSourceFlag(const bool& _multiSourceFlag);

                    /**
                     * 判断参数 MultiSourceFlag 是否已赋值
                     * @return MultiSourceFlag 是否已赋值
                     * 
                     */
                    bool MultiSourceFlagHasBeenSet() const;

                    /**
                     * 获取Whether WHERE parameters exist
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return WhereFlag Whether WHERE parameters exist
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    bool GetWhereFlag() const;

                    /**
                     * 设置Whether WHERE parameters exist
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _whereFlag Whether WHERE parameters exist
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetWhereFlag(const bool& _whereFlag);

                    /**
                     * 判断参数 WhereFlag 是否已赋值
                     * @return WhereFlag 是否已赋值
                     * 
                     */
                    bool WhereFlagHasBeenSet() const;

                    /**
                     * 获取Template original SQL
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return TemplateSql Template original SQL
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    std::string GetTemplateSql() const;

                    /**
                     * 设置Template original SQL
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _templateSql Template original SQL
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetTemplateSql(const std::string& _templateSql);

                    /**
                     * 判断参数 TemplateSql 是否已赋值
                     * @return TemplateSql 是否已赋值
                     * 
                     */
                    bool TemplateSqlHasBeenSet() const;

                    /**
                     * 获取Template sub-dimensions: 0.Parent dimension type, 1.Consistency: Enum range consistency, 2.Consistency: Numeric range consistency, 3.Consistency: Field data correlation
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return SubQualityDim Template sub-dimensions: 0.Parent dimension type, 1.Consistency: Enum range consistency, 2.Consistency: Numeric range consistency, 3.Consistency: Field data correlation
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    uint64_t GetSubQualityDim() const;

                    /**
                     * 设置Template sub-dimensions: 0.Parent dimension type, 1.Consistency: Enum range consistency, 2.Consistency: Numeric range consistency, 3.Consistency: Field data correlation
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _subQualityDim Template sub-dimensions: 0.Parent dimension type, 1.Consistency: Enum range consistency, 2.Consistency: Numeric range consistency, 3.Consistency: Field data correlation
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetSubQualityDim(const uint64_t& _subQualityDim);

                    /**
                     * 判断参数 SubQualityDim 是否已赋值
                     * @return SubQualityDim 是否已赋值
                     * 
                     */
                    bool SubQualityDimHasBeenSet() const;

                    /**
                     * 获取Rule applicable target data object types (1: Constant, 2: Offline table level, 3: Offline field level)
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return TargetObjectType Rule applicable target data object types (1: Constant, 2: Offline table level, 3: Offline field level)
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    uint64_t GetTargetObjectType() const;

                    /**
                     * 设置Rule applicable target data object types (1: Constant, 2: Offline table level, 3: Offline field level)
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _targetObjectType Rule applicable target data object types (1: Constant, 2: Offline table level, 3: Offline field level)
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetTargetObjectType(const uint64_t& _targetObjectType);

                    /**
                     * 判断参数 TargetObjectType 是否已赋值
                     * @return TargetObjectType 是否已赋值
                     * 
                     */
                    bool TargetObjectTypeHasBeenSet() const;

                    /**
                     * 获取Rule applicable target data object types (1: Numeric, 2: String)
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return TargetObjectDataType Rule applicable target data object types (1: Numeric, 2: String)
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    uint64_t GetTargetObjectDataType() const;

                    /**
                     * 设置Rule applicable target data object types (1: Numeric, 2: String)
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _targetObjectDataType Rule applicable target data object types (1: Numeric, 2: String)
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetTargetObjectDataType(const uint64_t& _targetObjectDataType);

                    /**
                     * 判断参数 TargetObjectDataType 是否已赋值
                     * @return TargetObjectDataType 是否已赋值
                     * 
                     */
                    bool TargetObjectDataTypeHasBeenSet() const;

                    /**
                     * 获取Target field detailed types, INT, STRING
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return TargetObjectDataTypeName Target field detailed types, INT, STRING
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    std::string GetTargetObjectDataTypeName() const;

                    /**
                     * 设置Target field detailed types, INT, STRING
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _targetObjectDataTypeName Target field detailed types, INT, STRING
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetTargetObjectDataTypeName(const std::string& _targetObjectDataTypeName);

                    /**
                     * 判断参数 TargetObjectDataTypeName 是否已赋值
                     * @return TargetObjectDataTypeName 是否已赋值
                     * 
                     */
                    bool TargetObjectDataTypeNameHasBeenSet() const;

                    /**
                     * 获取Target field name
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return TargetObjectValue Target field name
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    std::string GetTargetObjectValue() const;

                    /**
                     * 设置Target field name
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _targetObjectValue Target field name
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetTargetObjectValue(const std::string& _targetObjectValue);

                    /**
                     * 判断参数 TargetObjectValue 是否已赋值
                     * @return TargetObjectValue 是否已赋值
                     * 
                     */
                    bool TargetObjectValueHasBeenSet() const;

                    /**
                     * 获取Source engine type
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return SourceEngineTypes Source engine type
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    std::vector<uint64_t> GetSourceEngineTypes() const;

                    /**
                     * 设置Source engine type
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _sourceEngineTypes Source engine type
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetSourceEngineTypes(const std::vector<uint64_t>& _sourceEngineTypes);

                    /**
                     * 判断参数 SourceEngineTypes 是否已赋值
                     * @return SourceEngineTypes 是否已赋值
                     * 
                     */
                    bool SourceEngineTypesHasBeenSet() const;

                    /**
                     * 获取Table name
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return TableName Table name
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    std::string GetTableName() const;

                    /**
                     * 设置Table name
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _tableName Table name
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
                     * 获取Table manager name
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return TableOwnerName Table manager name
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    std::string GetTableOwnerName() const;

                    /**
                     * 设置Table manager name
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _tableOwnerName Table manager name
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
                     * 获取Execution strategy information
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return ExecStrategy Execution strategy information
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    RuleGroupExecStrategy GetExecStrategy() const;

                    /**
                     * 设置Execution strategy information
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _execStrategy Execution strategy information
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetExecStrategy(const RuleGroupExecStrategy& _execStrategy);

                    /**
                     * 判断参数 ExecStrategy 是否已赋值
                     * @return ExecStrategy 是否已赋值
                     * 
                     */
                    bool ExecStrategyHasBeenSet() const;

                    /**
                     * 获取Subscription information
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return Subscription Subscription information
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    RuleGroupSubscribe GetSubscription() const;

                    /**
                     * 设置Subscription information
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _subscription Subscription information
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetSubscription(const RuleGroupSubscribe& _subscription);

                    /**
                     * 判断参数 Subscription 是否已赋值
                     * @return Subscription 是否已赋值
                     * 
                     */
                    bool SubscriptionHasBeenSet() const;

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
                     * 获取Data Source ID
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return DatasourceId Data Source ID
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    uint64_t GetDatasourceId() const;

                    /**
                     * 设置Data Source ID
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _datasourceId Data Source ID
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetDatasourceId(const uint64_t& _datasourceId);

                    /**
                     * 判断参数 DatasourceId 是否已赋值
                     * @return DatasourceId 是否已赋值
                     * 
                     */
                    bool DatasourceIdHasBeenSet() const;

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
                     * 获取Monitoring enabled. 0 false, 1 true
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return MonitorStatus Monitoring enabled. 0 false, 1 true
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    int64_t GetMonitorStatus() const;

                    /**
                     * 设置Monitoring enabled. 0 false, 1 true
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _monitorStatus Monitoring enabled. 0 false, 1 true
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetMonitorStatus(const int64_t& _monitorStatus);

                    /**
                     * 判断参数 MonitorStatus 是否已赋值
                     * @return MonitorStatus 是否已赋值
                     * 
                     */
                    bool MonitorStatusHasBeenSet() const;

                    /**
                     * 获取Trigger conditionNote: This field may return null, indicating that no valid value can be obtained.
                     * @return TriggerCondition Trigger conditionNote: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    std::string GetTriggerCondition() const;

                    /**
                     * 设置Trigger conditionNote: This field may return null, indicating that no valid value can be obtained.
                     * @param _triggerCondition Trigger conditionNote: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetTriggerCondition(const std::string& _triggerCondition);

                    /**
                     * 判断参数 TriggerCondition 是否已赋值
                     * @return TriggerCondition 是否已赋值
                     * 
                     */
                    bool TriggerConditionHasBeenSet() const;

                    /**
                     * 获取0, or not returned, or null: Undefined, 1: Production, 2: Development
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return DsEnvType 0, or not returned, or null: Undefined, 1: Production, 2: Development
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    int64_t GetDsEnvType() const;

                    /**
                     * 设置0, or not returned, or null: Undefined, 1: Production, 2: Development
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _dsEnvType 0, or not returned, or null: Undefined, 1: Production, 2: Development
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetDsEnvType(const int64_t& _dsEnvType);

                    /**
                     * 判断参数 DsEnvType 是否已赋值
                     * @return DsEnvType 是否已赋值
                     * 
                     */
                    bool DsEnvTypeHasBeenSet() const;

                private:

                    /**
                     * Rule ID
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    uint64_t m_ruleId;
                    bool m_ruleIdHasBeenSet;

                    /**
                     * Rule Group ID
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    uint64_t m_ruleGroupId;
                    bool m_ruleGroupIdHasBeenSet;

                    /**
                     * Data Table ID
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    std::string m_tableId;
                    bool m_tableIdHasBeenSet;

                    /**
                     * Rule nameNote: This field may return null, indicating that no valid value can be obtained.
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * Rule Type 1. System Template, 2. Custom Definition Template, 3. Custom Definition SQL
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    uint64_t m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * Rule Template ID
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    uint64_t m_ruleTemplateId;
                    bool m_ruleTemplateIdHasBeenSet;

                    /**
                     * Rule Template Overview
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    std::string m_ruleTemplateContent;
                    bool m_ruleTemplateContentHasBeenSet;

                    /**
                     * Quality Dimension of Rule 1: Accuracy, 2: Uniqueness, 3: Completeness, 4: Consistency, 5: Timeliness, 6: Validity
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    uint64_t m_qualityDim;
                    bool m_qualityDimHasBeenSet;

                    /**
                     * Applicable Source Data Object Type (1: Constant, 2: Offline Table Level, 3: Offline Field Level)
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    uint64_t m_sourceObjectType;
                    bool m_sourceObjectTypeHasBeenSet;

                    /**
                     * Applicable Source Data Object Type (1: Numeric, 2: String)
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    uint64_t m_sourceObjectDataType;
                    bool m_sourceObjectDataTypeHasBeenSet;

                    /**
                     * Source Field Detailed Type, INT, STRING
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    std::string m_sourceObjectDataTypeName;
                    bool m_sourceObjectDataTypeNameHasBeenSet;

                    /**
                     * Source Field Name
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    std::string m_sourceObjectValue;
                    bool m_sourceObjectValueHasBeenSet;

                    /**
                     * Detection Range 1. Whole Table, 2. Conditional Scan
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    uint64_t m_conditionType;
                    bool m_conditionTypeHasBeenSet;

                    /**
                     * Conditional Scan WHERE Condition Expression
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    std::string m_conditionExpression;
                    bool m_conditionExpressionHasBeenSet;

                    /**
                     * Custom Template SQL Expression from Definition
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    std::string m_customSql;
                    bool m_customSqlHasBeenSet;

                    /**
                     * Alert Trigger Condition
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    CompareRule m_compareRule;
                    bool m_compareRuleHasBeenSet;

                    /**
                     * Alert Trigger Level 1. Low, 2. Medium, 3. High
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    uint64_t m_alarmLevel;
                    bool m_alarmLevelHasBeenSet;

                    /**
                     * Rule DescriptionNote: This field may return null, indicating that no valid value can be obtained.
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * Rule Configurator
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    std::string m_operator;
                    bool m_operatorHasBeenSet;

                    /**
                     * Target Database Id
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    std::string m_targetDatabaseId;
                    bool m_targetDatabaseIdHasBeenSet;

                    /**
                     * Target Database Name
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    std::string m_targetDatabaseName;
                    bool m_targetDatabaseNameHasBeenSet;

                    /**
                     * Target Table Id
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    std::string m_targetTableId;
                    bool m_targetTableIdHasBeenSet;

                    /**
                     * Target Table Name
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    std::string m_targetTableName;
                    bool m_targetTableNameHasBeenSet;

                    /**
                     * Target Field Filter Condition Expression
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    std::string m_targetConditionExpr;
                    bool m_targetConditionExprHasBeenSet;

                    /**
                     * Source and target field association conditions in ON expression
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    std::string m_relConditionExpr;
                    bool m_relConditionExprHasBeenSet;

                    /**
                     * From Definition template SQL expression parameters
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    RuleFieldConfig m_fieldConfig;
                    bool m_fieldConfigHasBeenSet;

                    /**
                     * Whether to join multiple tables
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    bool m_multiSourceFlag;
                    bool m_multiSourceFlagHasBeenSet;

                    /**
                     * Whether WHERE parameters exist
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    bool m_whereFlag;
                    bool m_whereFlagHasBeenSet;

                    /**
                     * Template original SQL
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    std::string m_templateSql;
                    bool m_templateSqlHasBeenSet;

                    /**
                     * Template sub-dimensions: 0.Parent dimension type, 1.Consistency: Enum range consistency, 2.Consistency: Numeric range consistency, 3.Consistency: Field data correlation
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    uint64_t m_subQualityDim;
                    bool m_subQualityDimHasBeenSet;

                    /**
                     * Rule applicable target data object types (1: Constant, 2: Offline table level, 3: Offline field level)
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    uint64_t m_targetObjectType;
                    bool m_targetObjectTypeHasBeenSet;

                    /**
                     * Rule applicable target data object types (1: Numeric, 2: String)
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    uint64_t m_targetObjectDataType;
                    bool m_targetObjectDataTypeHasBeenSet;

                    /**
                     * Target field detailed types, INT, STRING
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    std::string m_targetObjectDataTypeName;
                    bool m_targetObjectDataTypeNameHasBeenSet;

                    /**
                     * Target field name
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    std::string m_targetObjectValue;
                    bool m_targetObjectValueHasBeenSet;

                    /**
                     * Source engine type
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    std::vector<uint64_t> m_sourceEngineTypes;
                    bool m_sourceEngineTypesHasBeenSet;

                    /**
                     * Table name
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    std::string m_tableName;
                    bool m_tableNameHasBeenSet;

                    /**
                     * Table manager name
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    std::string m_tableOwnerName;
                    bool m_tableOwnerNameHasBeenSet;

                    /**
                     * Execution strategy information
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    RuleGroupExecStrategy m_execStrategy;
                    bool m_execStrategyHasBeenSet;

                    /**
                     * Subscription information
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    RuleGroupSubscribe m_subscription;
                    bool m_subscriptionHasBeenSet;

                    /**
                     * Creation TimeNote: This field may return null, indicating that no valid value can be obtained.
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * Data Source ID
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    uint64_t m_datasourceId;
                    bool m_datasourceIdHasBeenSet;

                    /**
                     * Database ID
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    std::string m_databaseId;
                    bool m_databaseIdHasBeenSet;

                    /**
                     * Monitoring enabled. 0 false, 1 true
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    int64_t m_monitorStatus;
                    bool m_monitorStatusHasBeenSet;

                    /**
                     * Trigger conditionNote: This field may return null, indicating that no valid value can be obtained.
                     */
                    std::string m_triggerCondition;
                    bool m_triggerConditionHasBeenSet;

                    /**
                     * 0, or not returned, or null: Undefined, 1: Production, 2: Development
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    int64_t m_dsEnvType;
                    bool m_dsEnvTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20210820_MODEL_RULE_H_
