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

#ifndef TENCENTCLOUD_WEDATA_V20250806_MODEL_QUALITYRULETEMPLATE_H_
#define TENCENTCLOUD_WEDATA_V20250806_MODEL_QUALITYRULETEMPLATE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/wedata/v20250806/model/QualitySqlExpression.h>


namespace TencentCloud
{
    namespace Wedata
    {
        namespace V20250806
        {
            namespace Model
            {
                /**
                * Rule template.
                */
                class QualityRuleTemplate : public AbstractModel
                {
                public:
                    QualityRuleTemplate();
                    ~QualityRuleTemplate() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Rule template ID.
                     * @return RuleTemplateId Rule template ID.
                     * 
                     */
                    uint64_t GetRuleTemplateId() const;

                    /**
                     * 设置Rule template ID.
                     * @param _ruleTemplateId Rule template ID.
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
                     * 获取Rule template name.
                     * @return Name Rule template name.
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置Rule template name.
                     * @param _name Rule template name.
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
                     * 获取Rule template description.
                     * @return Description Rule template description.
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置Rule template description.
                     * @param _description Rule template description.
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
                     * 获取Template type (1: system template, 2: custom).
                     * @return Type Template type (1: system template, 2: custom).
                     * 
                     */
                    uint64_t GetType() const;

                    /**
                     * 设置Template type (1: system template, 2: custom).
                     * @param _type Template type (1: system template, 2: custom).
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
                     * 获取Applicable source data object type for rule (1: constant, 2: offline table level, 3: offline field level).
                     * @return SourceObjectType Applicable source data object type for rule (1: constant, 2: offline table level, 3: offline field level).
                     * 
                     */
                    uint64_t GetSourceObjectType() const;

                    /**
                     * 设置Applicable source data object type for rule (1: constant, 2: offline table level, 3: offline field level).
                     * @param _sourceObjectType Applicable source data object type for rule (1: constant, 2: offline table level, 3: offline field level).
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
                     * 获取Applicable source data object type for rule (1: numeric value, 2: string).
                     * @return SourceObjectDataType Applicable source data object type for rule (1: numeric value, 2: string).
                     * 
                     */
                    uint64_t GetSourceObjectDataType() const;

                    /**
                     * 设置Applicable source data object type for rule (1: numeric value, 2: string).
                     * @param _sourceObjectDataType Applicable source data object type for rule (1: numeric value, 2: string).
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
                     * 获取Rule template source side content, case-sensitive, JSON structure.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return SourceContent Rule template source side content, case-sensitive, JSON structure.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetSourceContent() const;

                    /**
                     * 设置Rule template source side content, case-sensitive, JSON structure.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _sourceContent Rule template source side content, case-sensitive, JSON structure.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetSourceContent(const std::string& _sourceContent);

                    /**
                     * 判断参数 SourceContent 是否已赋值
                     * @return SourceContent 是否已赋值
                     * 
                     */
                    bool SourceContentHasBeenSet() const;

                    /**
                     * 获取Applicable source data type.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return SourceEngineTypes Applicable source data type.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::vector<uint64_t> GetSourceEngineTypes() const;

                    /**
                     * 设置Applicable source data type.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _sourceEngineTypes Applicable source data type.
Note: This field may return null, indicating that no valid values can be obtained.
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
                     * 获取Quality dimension of rule (1: accuracy, 2: uniqueness, 3: integrity, 4: consistency, 5: timeliness, 6: validity).
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return QualityDim Quality dimension of rule (1: accuracy, 2: uniqueness, 3: integrity, 4: consistency, 5: timeliness, 6: validity).
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    uint64_t GetQualityDim() const;

                    /**
                     * 设置Quality dimension of rule (1: accuracy, 2: uniqueness, 3: integrity, 4: consistency, 5: timeliness, 6: validity).
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _qualityDim Quality dimension of rule (1: accuracy, 2: uniqueness, 3: integrity, 4: consistency, 5: timeliness, 6: validity).
Note: This field may return null, indicating that no valid values can be obtained.
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
                     * 获取Supported comparison types for rule (1: fixed value comparison, more than, less than, equal to or greater than; 2: fluctuation value comparison, absolute value, rise, drop).
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return CompareType Supported comparison types for rule (1: fixed value comparison, more than, less than, equal to or greater than; 2: fluctuation value comparison, absolute value, rise, drop).
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    uint64_t GetCompareType() const;

                    /**
                     * 设置Supported comparison types for rule (1: fixed value comparison, more than, less than, equal to or greater than; 2: fluctuation value comparison, absolute value, rise, drop).
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _compareType Supported comparison types for rule (1: fixed value comparison, more than, less than, equal to or greater than; 2: fluctuation value comparison, absolute value, rise, drop).
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetCompareType(const uint64_t& _compareType);

                    /**
                     * 判断参数 CompareType 是否已赋值
                     * @return CompareType 是否已赋值
                     * 
                     */
                    bool CompareTypeHasBeenSet() const;

                    /**
                     * 获取Referenced times.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return CitationCount Referenced times.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    uint64_t GetCitationCount() const;

                    /**
                     * 设置Referenced times.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _citationCount Referenced times.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetCitationCount(const uint64_t& _citationCount);

                    /**
                     * 判断参数 CitationCount 是否已赋值
                     * @return CitationCount 是否已赋值
                     * 
                     */
                    bool CitationCountHasBeenSet() const;

                    /**
                     * 获取Creator ID
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return UserId Creator ID
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    uint64_t GetUserId() const;

                    /**
                     * 设置Creator ID
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _userId Creator ID
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetUserId(const uint64_t& _userId);

                    /**
                     * 判断参数 UserId 是否已赋值
                     * @return UserId 是否已赋值
                     * 
                     */
                    bool UserIdHasBeenSet() const;

                    /**
                     * 获取Creator nickname.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return UserName Creator nickname.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetUserName() const;

                    /**
                     * 设置Creator nickname.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _userName Creator nickname.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetUserName(const std::string& _userName);

                    /**
                     * 判断参数 UserName 是否已赋值
                     * @return UserName 是否已赋值
                     * 
                     */
                    bool UserNameHasBeenSet() const;

                    /**
                     * 获取Last update time yyyy-MM-dd HH:MM:ss.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return UpdateTime Last update time yyyy-MM-dd HH:MM:ss.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetUpdateTime() const;

                    /**
                     * 设置Last update time yyyy-MM-dd HH:MM:ss.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _updateTime Last update time yyyy-MM-dd HH:MM:ss.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetUpdateTime(const std::string& _updateTime);

                    /**
                     * 判断参数 UpdateTime 是否已赋值
                     * @return UpdateTime 是否已赋值
                     * 
                     */
                    bool UpdateTimeHasBeenSet() const;

                    /**
                     * 获取Whether to add where parameter.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return WhereFlag Whether to add where parameter.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    bool GetWhereFlag() const;

                    /**
                     * 设置Whether to add where parameter.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _whereFlag Whether to add where parameter.
Note: This field may return null, indicating that no valid values can be obtained.
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
                     * 获取Whether multiple database tables are associated.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return MultiSourceFlag Whether multiple database tables are associated.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    bool GetMultiSourceFlag() const;

                    /**
                     * 设置Whether multiple database tables are associated.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _multiSourceFlag Whether multiple database tables are associated.
Note: This field may return null, indicating that no valid values can be obtained.
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
                     * 获取Custom template SQL expression.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return SqlExpression Custom template SQL expression.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetSqlExpression() const;

                    /**
                     * 设置Custom template SQL expression.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _sqlExpression Custom template SQL expression.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetSqlExpression(const std::string& _sqlExpression);

                    /**
                     * 判断参数 SqlExpression 是否已赋值
                     * @return SqlExpression 是否已赋值
                     * 
                     */
                    bool SqlExpressionHasBeenSet() const;

                    /**
                     * 获取Template sub-dimension, 0. parent dimension type, 1. consistency: enumeration range consistency, 2. consistency: numeric range consistency, 3. consistency: field data correlation.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return SubQualityDim Template sub-dimension, 0. parent dimension type, 1. consistency: enumeration range consistency, 2. consistency: numeric range consistency, 3. consistency: field data correlation.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    uint64_t GetSubQualityDim() const;

                    /**
                     * 设置Template sub-dimension, 0. parent dimension type, 1. consistency: enumeration range consistency, 2. consistency: numeric range consistency, 3. consistency: field data correlation.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _subQualityDim Template sub-dimension, 0. parent dimension type, 1. consistency: enumeration range consistency, 2. consistency: numeric range consistency, 3. consistency: field data correlation.
Note: This field may return null, indicating that no valid values can be obtained.
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
                     * 获取sql expression parsing object.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return ResolvedSqlExpression sql expression parsing object.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    QualitySqlExpression GetResolvedSqlExpression() const;

                    /**
                     * 设置sql expression parsing object.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _resolvedSqlExpression sql expression parsing object.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetResolvedSqlExpression(const QualitySqlExpression& _resolvedSqlExpression);

                    /**
                     * 判断参数 ResolvedSqlExpression 是否已赋值
                     * @return ResolvedSqlExpression 是否已赋值
                     * 
                     */
                    bool ResolvedSqlExpressionHasBeenSet() const;

                    /**
                     * 获取Supported data source types.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return DatasourceTypes Supported data source types.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::vector<int64_t> GetDatasourceTypes() const;

                    /**
                     * 设置Supported data source types.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _datasourceTypes Supported data source types.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetDatasourceTypes(const std::vector<int64_t>& _datasourceTypes);

                    /**
                     * 判断参数 DatasourceTypes 是否已赋值
                     * @return DatasourceTypes 是否已赋值
                     * 
                     */
                    bool DatasourceTypesHasBeenSet() const;

                    /**
                     * 获取Created by user id str.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return UserIdStr Created by user id str.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetUserIdStr() const;

                    /**
                     * 设置Created by user id str.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _userIdStr Created by user id str.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetUserIdStr(const std::string& _userIdStr);

                    /**
                     * 判断参数 UserIdStr 是否已赋值
                     * @return UserIdStr 是否已赋值
                     * 
                     */
                    bool UserIdStrHasBeenSet() const;

                private:

                    /**
                     * Rule template ID.
                     */
                    uint64_t m_ruleTemplateId;
                    bool m_ruleTemplateIdHasBeenSet;

                    /**
                     * Rule template name.
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * Rule template description.
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * Template type (1: system template, 2: custom).
                     */
                    uint64_t m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * Applicable source data object type for rule (1: constant, 2: offline table level, 3: offline field level).
                     */
                    uint64_t m_sourceObjectType;
                    bool m_sourceObjectTypeHasBeenSet;

                    /**
                     * Applicable source data object type for rule (1: numeric value, 2: string).
                     */
                    uint64_t m_sourceObjectDataType;
                    bool m_sourceObjectDataTypeHasBeenSet;

                    /**
                     * Rule template source side content, case-sensitive, JSON structure.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_sourceContent;
                    bool m_sourceContentHasBeenSet;

                    /**
                     * Applicable source data type.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<uint64_t> m_sourceEngineTypes;
                    bool m_sourceEngineTypesHasBeenSet;

                    /**
                     * Quality dimension of rule (1: accuracy, 2: uniqueness, 3: integrity, 4: consistency, 5: timeliness, 6: validity).
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    uint64_t m_qualityDim;
                    bool m_qualityDimHasBeenSet;

                    /**
                     * Supported comparison types for rule (1: fixed value comparison, more than, less than, equal to or greater than; 2: fluctuation value comparison, absolute value, rise, drop).
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    uint64_t m_compareType;
                    bool m_compareTypeHasBeenSet;

                    /**
                     * Referenced times.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    uint64_t m_citationCount;
                    bool m_citationCountHasBeenSet;

                    /**
                     * Creator ID
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    uint64_t m_userId;
                    bool m_userIdHasBeenSet;

                    /**
                     * Creator nickname.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_userName;
                    bool m_userNameHasBeenSet;

                    /**
                     * Last update time yyyy-MM-dd HH:MM:ss.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_updateTime;
                    bool m_updateTimeHasBeenSet;

                    /**
                     * Whether to add where parameter.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    bool m_whereFlag;
                    bool m_whereFlagHasBeenSet;

                    /**
                     * Whether multiple database tables are associated.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    bool m_multiSourceFlag;
                    bool m_multiSourceFlagHasBeenSet;

                    /**
                     * Custom template SQL expression.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_sqlExpression;
                    bool m_sqlExpressionHasBeenSet;

                    /**
                     * Template sub-dimension, 0. parent dimension type, 1. consistency: enumeration range consistency, 2. consistency: numeric range consistency, 3. consistency: field data correlation.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    uint64_t m_subQualityDim;
                    bool m_subQualityDimHasBeenSet;

                    /**
                     * sql expression parsing object.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    QualitySqlExpression m_resolvedSqlExpression;
                    bool m_resolvedSqlExpressionHasBeenSet;

                    /**
                     * Supported data source types.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<int64_t> m_datasourceTypes;
                    bool m_datasourceTypesHasBeenSet;

                    /**
                     * Created by user id str.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_userIdStr;
                    bool m_userIdStrHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20250806_MODEL_QUALITYRULETEMPLATE_H_
