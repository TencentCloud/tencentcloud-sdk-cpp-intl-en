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

#ifndef TENCENTCLOUD_WEDATA_V20210820_MODEL_RULEEXECRESULT_H_
#define TENCENTCLOUD_WEDATA_V20210820_MODEL_RULEEXECRESULT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/wedata/v20210820/model/CompareResult.h>
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
                * Rule Execution Result
                */
                class RuleExecResult : public AbstractModel
                {
                public:
                    RuleExecResult();
                    ~RuleExecResult() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Rule Execution ID
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return RuleExecId Rule Execution ID
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    uint64_t GetRuleExecId() const;

                    /**
                     * 设置Rule Execution ID
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _ruleExecId Rule Execution ID
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetRuleExecId(const uint64_t& _ruleExecId);

                    /**
                     * 判断参数 RuleExecId 是否已赋值
                     * @return RuleExecId 是否已赋值
                     * 
                     */
                    bool RuleExecIdHasBeenSet() const;

                    /**
                     * 获取Rule Group Execution ID
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return RuleGroupExecId Rule Group Execution ID
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    uint64_t GetRuleGroupExecId() const;

                    /**
                     * 设置Rule Group Execution ID
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _ruleGroupExecId Rule Group Execution ID
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetRuleGroupExecId(const uint64_t& _ruleGroupExecId);

                    /**
                     * 判断参数 RuleGroupExecId 是否已赋值
                     * @return RuleGroupExecId 是否已赋值
                     * 
                     */
                    bool RuleGroupExecIdHasBeenSet() const;

                    /**
                     * 获取Rule Group IDNote: This field may return null, indicating that no valid value can be obtained.
                     * @return RuleGroupId Rule Group IDNote: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    uint64_t GetRuleGroupId() const;

                    /**
                     * 设置Rule Group IDNote: This field may return null, indicating that no valid value can be obtained.
                     * @param _ruleGroupId Rule Group IDNote: This field may return null, indicating that no valid value can be obtained.
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
                     * 获取Rule IDNote: This field may return null, indicating that no valid value can be obtained.
                     * @return RuleId Rule IDNote: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    uint64_t GetRuleId() const;

                    /**
                     * 设置Rule IDNote: This field may return null, indicating that no valid value can be obtained.
                     * @param _ruleId Rule IDNote: This field may return null, indicating that no valid value can be obtained.
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
                     * 获取Rule nameNote: This field may return null, indicating that no valid value can be obtained.
                     * @return RuleName Rule nameNote: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    std::string GetRuleName() const;

                    /**
                     * 设置Rule nameNote: This field may return null, indicating that no valid value can be obtained.
                     * @param _ruleName Rule nameNote: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetRuleName(const std::string& _ruleName);

                    /**
                     * 判断参数 RuleName 是否已赋值
                     * @return RuleName 是否已赋值
                     * 
                     */
                    bool RuleNameHasBeenSet() const;

                    /**
                     * 获取Rule type 1.System Template, 2.Custom Definition Template, 3.Custom Definition SQLNote: This field may return null, indicating that no valid value can be obtained.
                     * @return RuleType Rule type 1.System Template, 2.Custom Definition Template, 3.Custom Definition SQLNote: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    uint64_t GetRuleType() const;

                    /**
                     * 设置Rule type 1.System Template, 2.Custom Definition Template, 3.Custom Definition SQLNote: This field may return null, indicating that no valid value can be obtained.
                     * @param _ruleType Rule type 1.System Template, 2.Custom Definition Template, 3.Custom Definition SQLNote: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetRuleType(const uint64_t& _ruleType);

                    /**
                     * 判断参数 RuleType 是否已赋值
                     * @return RuleType 是否已赋值
                     * 
                     */
                    bool RuleTypeHasBeenSet() const;

                    /**
                     * 获取Source Field Detailed Type, int string
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return SourceObjectDataTypeName Source Field Detailed Type, int string
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    std::string GetSourceObjectDataTypeName() const;

                    /**
                     * 设置Source Field Detailed Type, int string
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _sourceObjectDataTypeName Source Field Detailed Type, int string
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
                     * 获取Source Field NameNote: This field may return null, indicating that no valid value can be obtained.
                     * @return SourceObjectValue Source Field NameNote: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    std::string GetSourceObjectValue() const;

                    /**
                     * 设置Source Field NameNote: This field may return null, indicating that no valid value can be obtained.
                     * @param _sourceObjectValue Source Field NameNote: This field may return null, indicating that no valid value can be obtained.
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
                     * 获取Conditional Scan WHERE Condition ExpressionNote: This field may return null, indicating that no valid value can be obtained.
                     * @return ConditionExpression Conditional Scan WHERE Condition ExpressionNote: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    std::string GetConditionExpression() const;

                    /**
                     * 设置Conditional Scan WHERE Condition ExpressionNote: This field may return null, indicating that no valid value can be obtained.
                     * @param _conditionExpression Conditional Scan WHERE Condition ExpressionNote: This field may return null, indicating that no valid value can be obtained.
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
                     * 获取Test Results (1: Detection passed, 2: Trigger Rules, 3: Detection failed)
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return ExecResultStatus Test Results (1: Detection passed, 2: Trigger Rules, 3: Detection failed)
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    uint64_t GetExecResultStatus() const;

                    /**
                     * 设置Test Results (1: Detection passed, 2: Trigger Rules, 3: Detection failed)
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _execResultStatus Test Results (1: Detection passed, 2: Trigger Rules, 3: Detection failed)
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetExecResultStatus(const uint64_t& _execResultStatus);

                    /**
                     * 判断参数 ExecResultStatus 是否已赋值
                     * @return ExecResultStatus 是否已赋值
                     * 
                     */
                    bool ExecResultStatusHasBeenSet() const;

                    /**
                     * 获取Trigger Result, Alert Sent Successfully, Block Task Successful
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return TriggerResult Trigger Result, Alert Sent Successfully, Block Task Successful
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    std::string GetTriggerResult() const;

                    /**
                     * 设置Trigger Result, Alert Sent Successfully, Block Task Successful
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _triggerResult Trigger Result, Alert Sent Successfully, Block Task Successful
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetTriggerResult(const std::string& _triggerResult);

                    /**
                     * 判断参数 TriggerResult 是否已赋值
                     * @return TriggerResult 是否已赋值
                     * 
                     */
                    bool TriggerResultHasBeenSet() const;

                    /**
                     * 获取Comparison Result
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return CompareResult Comparison Result
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    CompareResult GetCompareResult() const;

                    /**
                     * 设置Comparison Result
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _compareResult Comparison Result
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetCompareResult(const CompareResult& _compareResult);

                    /**
                     * 判断参数 CompareResult 是否已赋值
                     * @return CompareResult 是否已赋值
                     * 
                     */
                    bool CompareResultHasBeenSet() const;

                    /**
                     * 获取Template name
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return TemplateName Template name
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    std::string GetTemplateName() const;

                    /**
                     * 设置Template name
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _templateName Template name
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetTemplateName(const std::string& _templateName);

                    /**
                     * 判断参数 TemplateName 是否已赋值
                     * @return TemplateName 是否已赋值
                     * 
                     */
                    bool TemplateNameHasBeenSet() const;

                    /**
                     * 获取Quality Dimension
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return QualityDim Quality Dimension
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    uint64_t GetQualityDim() const;

                    /**
                     * 设置Quality Dimension
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _qualityDim Quality Dimension
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
                     * 获取Target Table - Database Table Name
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return TargetDBTableName Target Table - Database Table Name
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    std::string GetTargetDBTableName() const;

                    /**
                     * 设置Target Table - Database Table Name
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _targetDBTableName Target Table - Database Table Name
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetTargetDBTableName(const std::string& _targetDBTableName);

                    /**
                     * 判断参数 TargetDBTableName 是否已赋值
                     * @return TargetDBTableName 是否已赋值
                     * 
                     */
                    bool TargetDBTableNameHasBeenSet() const;

                    /**
                     * 获取Target Table - Field Name
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return TargetObjectValue Target Table - Field Name
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    std::string GetTargetObjectValue() const;

                    /**
                     * 设置Target Table - Field Name
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _targetObjectValue Target Table - Field Name
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
                     * 获取Target Table - Field Type
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return TargetObjectDataType Target Table - Field Type
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    std::string GetTargetObjectDataType() const;

                    /**
                     * 设置Target Table - Field Type
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _targetObjectDataType Target Table - Field Type
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetTargetObjectDataType(const std::string& _targetObjectDataType);

                    /**
                     * 判断参数 TargetObjectDataType 是否已赋值
                     * @return TargetObjectDataType 是否已赋值
                     * 
                     */
                    bool TargetObjectDataTypeHasBeenSet() const;

                    /**
                     * 获取Custom Definition Template SQL Expression Parameters
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return FieldConfig Custom Definition Template SQL Expression Parameters
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    RuleFieldConfig GetFieldConfig() const;

                    /**
                     * 设置Custom Definition Template SQL Expression Parameters
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _fieldConfig Custom Definition Template SQL Expression Parameters
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
                     * 获取Source Field and Target Field Association Condition ON ExpressionNote: This field may return null, indicating that no valid value can be obtained.
                     * @return RelConditionExpr Source Field and Target Field Association Condition ON ExpressionNote: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    std::string GetRelConditionExpr() const;

                    /**
                     * 设置Source Field and Target Field Association Condition ON ExpressionNote: This field may return null, indicating that no valid value can be obtained.
                     * @param _relConditionExpr Source Field and Target Field Association Condition ON ExpressionNote: This field may return null, indicating that no valid value can be obtained.
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
                     * 获取Execution timeNote: This field may return null, indicating that no valid value can be obtained.
                     * @return StartTime Execution timeNote: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    std::string GetStartTime() const;

                    /**
                     * 设置Execution timeNote: This field may return null, indicating that no valid value can be obtained.
                     * @param _startTime Execution timeNote: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetStartTime(const std::string& _startTime);

                    /**
                     * 判断参数 StartTime 是否已赋值
                     * @return StartTime 是否已赋值
                     * 
                     */
                    bool StartTimeHasBeenSet() const;

                    /**
                     * 获取1/2/3: Low/Medium/High
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return AlarmLevel 1/2/3: Low/Medium/High
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    uint64_t GetAlarmLevel() const;

                    /**
                     * 设置1/2/3: Low/Medium/High
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _alarmLevel 1/2/3: Low/Medium/High
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

                private:

                    /**
                     * Rule Execution ID
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    uint64_t m_ruleExecId;
                    bool m_ruleExecIdHasBeenSet;

                    /**
                     * Rule Group Execution ID
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    uint64_t m_ruleGroupExecId;
                    bool m_ruleGroupExecIdHasBeenSet;

                    /**
                     * Rule Group IDNote: This field may return null, indicating that no valid value can be obtained.
                     */
                    uint64_t m_ruleGroupId;
                    bool m_ruleGroupIdHasBeenSet;

                    /**
                     * Rule IDNote: This field may return null, indicating that no valid value can be obtained.
                     */
                    uint64_t m_ruleId;
                    bool m_ruleIdHasBeenSet;

                    /**
                     * Rule nameNote: This field may return null, indicating that no valid value can be obtained.
                     */
                    std::string m_ruleName;
                    bool m_ruleNameHasBeenSet;

                    /**
                     * Rule type 1.System Template, 2.Custom Definition Template, 3.Custom Definition SQLNote: This field may return null, indicating that no valid value can be obtained.
                     */
                    uint64_t m_ruleType;
                    bool m_ruleTypeHasBeenSet;

                    /**
                     * Source Field Detailed Type, int string
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    std::string m_sourceObjectDataTypeName;
                    bool m_sourceObjectDataTypeNameHasBeenSet;

                    /**
                     * Source Field NameNote: This field may return null, indicating that no valid value can be obtained.
                     */
                    std::string m_sourceObjectValue;
                    bool m_sourceObjectValueHasBeenSet;

                    /**
                     * Conditional Scan WHERE Condition ExpressionNote: This field may return null, indicating that no valid value can be obtained.
                     */
                    std::string m_conditionExpression;
                    bool m_conditionExpressionHasBeenSet;

                    /**
                     * Test Results (1: Detection passed, 2: Trigger Rules, 3: Detection failed)
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    uint64_t m_execResultStatus;
                    bool m_execResultStatusHasBeenSet;

                    /**
                     * Trigger Result, Alert Sent Successfully, Block Task Successful
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    std::string m_triggerResult;
                    bool m_triggerResultHasBeenSet;

                    /**
                     * Comparison Result
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    CompareResult m_compareResult;
                    bool m_compareResultHasBeenSet;

                    /**
                     * Template name
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    std::string m_templateName;
                    bool m_templateNameHasBeenSet;

                    /**
                     * Quality Dimension
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    uint64_t m_qualityDim;
                    bool m_qualityDimHasBeenSet;

                    /**
                     * Target Table - Database Table Name
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    std::string m_targetDBTableName;
                    bool m_targetDBTableNameHasBeenSet;

                    /**
                     * Target Table - Field Name
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    std::string m_targetObjectValue;
                    bool m_targetObjectValueHasBeenSet;

                    /**
                     * Target Table - Field Type
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    std::string m_targetObjectDataType;
                    bool m_targetObjectDataTypeHasBeenSet;

                    /**
                     * Custom Definition Template SQL Expression Parameters
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    RuleFieldConfig m_fieldConfig;
                    bool m_fieldConfigHasBeenSet;

                    /**
                     * Source Field and Target Field Association Condition ON ExpressionNote: This field may return null, indicating that no valid value can be obtained.
                     */
                    std::string m_relConditionExpr;
                    bool m_relConditionExprHasBeenSet;

                    /**
                     * Execution timeNote: This field may return null, indicating that no valid value can be obtained.
                     */
                    std::string m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * 1/2/3: Low/Medium/High
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    uint64_t m_alarmLevel;
                    bool m_alarmLevelHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20210820_MODEL_RULEEXECRESULT_H_
