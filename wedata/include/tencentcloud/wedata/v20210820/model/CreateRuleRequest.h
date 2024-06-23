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

#ifndef TENCENTCLOUD_WEDATA_V20210820_MODEL_CREATERULEREQUEST_H_
#define TENCENTCLOUD_WEDATA_V20210820_MODEL_CREATERULEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/wedata/v20210820/model/CompareRule.h>
#include <tencentcloud/wedata/v20210820/model/RuleFieldConfig.h>


namespace TencentCloud
{
    namespace Wedata
    {
        namespace V20210820
        {
            namespace Model
            {
                /**
                * CreateRule request structure.
                */
                class CreateRuleRequest : public AbstractModel
                {
                public:
                    CreateRuleRequest();
                    ~CreateRuleRequest() = default;
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
                     * 获取Rule Group ID
                     * @return RuleGroupId Rule Group ID
                     * 
                     */
                    uint64_t GetRuleGroupId() const;

                    /**
                     * 设置Rule Group ID
                     * @param _ruleGroupId Rule Group ID
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
                     * 获取Rule name
                     * @return Name Rule name
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置Rule name
                     * @param _name Rule name
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
                     * 获取Data Table ID
                     * @return TableId Data Table ID
                     * 
                     */
                    std::string GetTableId() const;

                    /**
                     * 设置Data Table ID
                     * @param _tableId Data Table ID
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
                     * 获取Rule Template List
                     * @return RuleTemplateId Rule Template List
                     * 
                     */
                    uint64_t GetRuleTemplateId() const;

                    /**
                     * 设置Rule Template List
                     * @param _ruleTemplateId Rule Template List
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
                     * 获取Rule type 1.System Template, 2.Custom Definition Template, 3.Custom Definition SQL
                     * @return Type Rule type 1.System Template, 2.Custom Definition Template, 3.Custom Definition SQL
                     * 
                     */
                    uint64_t GetType() const;

                    /**
                     * 设置Rule type 1.System Template, 2.Custom Definition Template, 3.Custom Definition SQL
                     * @param _type Rule type 1.System Template, 2.Custom Definition Template, 3.Custom Definition SQL
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
                     * 获取Quality Dimension of Rule (1: Accuracy, 2: Uniqueness, 3: Integrity, 4: Consistency, 5: Timeliness, 6: Validity)
                     * @return QualityDim Quality Dimension of Rule (1: Accuracy, 2: Uniqueness, 3: Integrity, 4: Consistency, 5: Timeliness, 6: Validity)
                     * 
                     */
                    uint64_t GetQualityDim() const;

                    /**
                     * 设置Quality Dimension of Rule (1: Accuracy, 2: Uniqueness, 3: Integrity, 4: Consistency, 5: Timeliness, 6: Validity)
                     * @param _qualityDim Quality Dimension of Rule (1: Accuracy, 2: Uniqueness, 3: Integrity, 4: Consistency, 5: Timeliness, 6: Validity)
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
                     * 获取Source Field Detailed Type, int, string
                     * @return SourceObjectDataTypeName Source Field Detailed Type, int, string
                     * 
                     */
                    std::string GetSourceObjectDataTypeName() const;

                    /**
                     * 设置Source Field Detailed Type, int, string
                     * @param _sourceObjectDataTypeName Source Field Detailed Type, int, string
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
                     * @return SourceObjectValue Source Field Name
                     * 
                     */
                    std::string GetSourceObjectValue() const;

                    /**
                     * 设置Source Field Name
                     * @param _sourceObjectValue Source Field Name
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
                     * 获取Detection Range 1.Whole Table 2.Conditional Scan
                     * @return ConditionType Detection Range 1.Whole Table 2.Conditional Scan
                     * 
                     */
                    uint64_t GetConditionType() const;

                    /**
                     * 设置Detection Range 1.Whole Table 2.Conditional Scan
                     * @param _conditionType Detection Range 1.Whole Table 2.Conditional Scan
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
                     * @return ConditionExpression Conditional Scan WHERE Condition Expression
                     * 
                     */
                    std::string GetConditionExpression() const;

                    /**
                     * 设置Conditional Scan WHERE Condition Expression
                     * @param _conditionExpression Conditional Scan WHERE Condition Expression
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
                     * 获取Custom Definition SQL
                     * @return CustomSql Custom Definition SQL
                     * 
                     */
                    std::string GetCustomSql() const;

                    /**
                     * 设置Custom Definition SQL
                     * @param _customSql Custom Definition SQL
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
                     * @return CompareRule Alert Trigger Condition
                     * 
                     */
                    CompareRule GetCompareRule() const;

                    /**
                     * 设置Alert Trigger Condition
                     * @param _compareRule Alert Trigger Condition
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
                     * 获取Alert Trigger Level 1.Low, 2.Medium, 3.High
                     * @return AlarmLevel Alert Trigger Level 1.Low, 2.Medium, 3.High
                     * 
                     */
                    uint64_t GetAlarmLevel() const;

                    /**
                     * 设置Alert Trigger Level 1.Low, 2.Medium, 3.High
                     * @param _alarmLevel Alert Trigger Level 1.Low, 2.Medium, 3.High
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
                     * 获取Rule Description
                     * @return Description Rule Description
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置Rule Description
                     * @param _description Rule Description
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
                     * 获取Data Source ID
                     * @return DatasourceId Data Source ID
                     * 
                     */
                    std::string GetDatasourceId() const;

                    /**
                     * 设置Data Source ID
                     * @param _datasourceId Data Source ID
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
                     * 获取Database ID
                     * @return DatabaseId Database ID
                     * 
                     */
                    std::string GetDatabaseId() const;

                    /**
                     * 设置Database ID
                     * @param _databaseId Database ID
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
                     * 获取Target Database Id
                     * @return TargetDatabaseId Target Database Id
                     * 
                     */
                    std::string GetTargetDatabaseId() const;

                    /**
                     * 设置Target Database Id
                     * @param _targetDatabaseId Target Database Id
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
                     * 获取Target Table Id
                     * @return TargetTableId Target Table Id
                     * 
                     */
                    std::string GetTargetTableId() const;

                    /**
                     * 设置Target Table Id
                     * @param _targetTableId Target Table Id
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
                     * 获取Target Filter Condition Expression
                     * @return TargetConditionExpr Target Filter Condition Expression
                     * 
                     */
                    std::string GetTargetConditionExpr() const;

                    /**
                     * 设置Target Filter Condition Expression
                     * @param _targetConditionExpr Target Filter Condition Expression
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
                     * 获取Source Field and Target Field Association Condition ON Expression
                     * @return RelConditionExpr Source Field and Target Field Association Condition ON Expression
                     * 
                     */
                    std::string GetRelConditionExpr() const;

                    /**
                     * 设置Source Field and Target Field Association Condition ON Expression
                     * @param _relConditionExpr Source Field and Target Field Association Condition ON Expression
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
                     * 获取Custom Definition Template SQL Expression Field Replacement Parameter
                     * @return FieldConfig Custom Definition Template SQL Expression Field Replacement Parameter
                     * 
                     */
                    RuleFieldConfig GetFieldConfig() const;

                    /**
                     * 设置Custom Definition Template SQL Expression Field Replacement Parameter
                     * @param _fieldConfig Custom Definition Template SQL Expression Field Replacement Parameter
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
                     * 获取Target Field Name CITY
                     * @return TargetObjectValue Target Field Name CITY
                     * 
                     */
                    std::string GetTargetObjectValue() const;

                    /**
                     * 设置Target Field Name CITY
                     * @param _targetObjectValue Target Field Name CITY
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
                     * 获取Supported Execution Engine List for the Rule
                     * @return SourceEngineTypes Supported Execution Engine List for the Rule
                     * 
                     */
                    std::vector<uint64_t> GetSourceEngineTypes() const;

                    /**
                     * 设置Supported Execution Engine List for the Rule
                     * @param _sourceEngineTypes Supported Execution Engine List for the Rule
                     * 
                     */
                    void SetSourceEngineTypes(const std::vector<uint64_t>& _sourceEngineTypes);

                    /**
                     * 判断参数 SourceEngineTypes 是否已赋值
                     * @return SourceEngineTypes 是否已赋值
                     * 
                     */
                    bool SourceEngineTypesHasBeenSet() const;

                private:

                    /**
                     * Project ID
                     */
                    std::string m_projectId;
                    bool m_projectIdHasBeenSet;

                    /**
                     * Rule Group ID
                     */
                    uint64_t m_ruleGroupId;
                    bool m_ruleGroupIdHasBeenSet;

                    /**
                     * Rule name
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * Data Table ID
                     */
                    std::string m_tableId;
                    bool m_tableIdHasBeenSet;

                    /**
                     * Rule Template List
                     */
                    uint64_t m_ruleTemplateId;
                    bool m_ruleTemplateIdHasBeenSet;

                    /**
                     * Rule type 1.System Template, 2.Custom Definition Template, 3.Custom Definition SQL
                     */
                    uint64_t m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * Quality Dimension of Rule (1: Accuracy, 2: Uniqueness, 3: Integrity, 4: Consistency, 5: Timeliness, 6: Validity)
                     */
                    uint64_t m_qualityDim;
                    bool m_qualityDimHasBeenSet;

                    /**
                     * Source Field Detailed Type, int, string
                     */
                    std::string m_sourceObjectDataTypeName;
                    bool m_sourceObjectDataTypeNameHasBeenSet;

                    /**
                     * Source Field Name
                     */
                    std::string m_sourceObjectValue;
                    bool m_sourceObjectValueHasBeenSet;

                    /**
                     * Detection Range 1.Whole Table 2.Conditional Scan
                     */
                    uint64_t m_conditionType;
                    bool m_conditionTypeHasBeenSet;

                    /**
                     * Conditional Scan WHERE Condition Expression
                     */
                    std::string m_conditionExpression;
                    bool m_conditionExpressionHasBeenSet;

                    /**
                     * Custom Definition SQL
                     */
                    std::string m_customSql;
                    bool m_customSqlHasBeenSet;

                    /**
                     * Alert Trigger Condition
                     */
                    CompareRule m_compareRule;
                    bool m_compareRuleHasBeenSet;

                    /**
                     * Alert Trigger Level 1.Low, 2.Medium, 3.High
                     */
                    uint64_t m_alarmLevel;
                    bool m_alarmLevelHasBeenSet;

                    /**
                     * Rule Description
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * Data Source ID
                     */
                    std::string m_datasourceId;
                    bool m_datasourceIdHasBeenSet;

                    /**
                     * Database ID
                     */
                    std::string m_databaseId;
                    bool m_databaseIdHasBeenSet;

                    /**
                     * Target Database Id
                     */
                    std::string m_targetDatabaseId;
                    bool m_targetDatabaseIdHasBeenSet;

                    /**
                     * Target Table Id
                     */
                    std::string m_targetTableId;
                    bool m_targetTableIdHasBeenSet;

                    /**
                     * Target Filter Condition Expression
                     */
                    std::string m_targetConditionExpr;
                    bool m_targetConditionExprHasBeenSet;

                    /**
                     * Source Field and Target Field Association Condition ON Expression
                     */
                    std::string m_relConditionExpr;
                    bool m_relConditionExprHasBeenSet;

                    /**
                     * Custom Definition Template SQL Expression Field Replacement Parameter
                     */
                    RuleFieldConfig m_fieldConfig;
                    bool m_fieldConfigHasBeenSet;

                    /**
                     * Target Field Name CITY
                     */
                    std::string m_targetObjectValue;
                    bool m_targetObjectValueHasBeenSet;

                    /**
                     * Supported Execution Engine List for the Rule
                     */
                    std::vector<uint64_t> m_sourceEngineTypes;
                    bool m_sourceEngineTypesHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20210820_MODEL_CREATERULEREQUEST_H_
