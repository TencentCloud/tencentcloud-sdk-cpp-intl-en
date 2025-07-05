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

#ifndef TENCENTCLOUD_WEDATA_V20210820_MODEL_RULETEMPLATE_H_
#define TENCENTCLOUD_WEDATA_V20210820_MODEL_RULETEMPLATE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/wedata/v20210820/model/SqlExpression.h>


namespace TencentCloud
{
    namespace Wedata
    {
        namespace V20210820
        {
            namespace Model
            {
                /**
                * Rule Template
                */
                class RuleTemplate : public AbstractModel
                {
                public:
                    RuleTemplate();
                    ~RuleTemplate() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Rule Template ID
                     * @return RuleTemplateId Rule Template ID
                     * 
                     */
                    uint64_t GetRuleTemplateId() const;

                    /**
                     * 设置Rule Template ID
                     * @param _ruleTemplateId Rule Template ID
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
                     * 获取Rule Template Name
                     * @return Name Rule Template Name
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置Rule Template Name
                     * @param _name Rule Template Name
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
                     * 获取Rule Template Description
                     * @return Description Rule Template Description
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置Rule Template Description
                     * @param _description Rule Template Description
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
                     * 获取Template Type (1: System Template, 2: Self Definition)
                     * @return Type Template Type (1: System Template, 2: Self Definition)
                     * 
                     */
                    uint64_t GetType() const;

                    /**
                     * 设置Template Type (1: System Template, 2: Self Definition)
                     * @param _type Template Type (1: System Template, 2: Self Definition)
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
                     * 获取Applicable Source Data Object Type (1: Constant, 2: Offline Table Level, 3: Offline Field Level)
                     * @return SourceObjectType Applicable Source Data Object Type (1: Constant, 2: Offline Table Level, 3: Offline Field Level)
                     * 
                     */
                    uint64_t GetSourceObjectType() const;

                    /**
                     * 设置Applicable Source Data Object Type (1: Constant, 2: Offline Table Level, 3: Offline Field Level)
                     * @param _sourceObjectType Applicable Source Data Object Type (1: Constant, 2: Offline Table Level, 3: Offline Field Level)
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
                     * @return SourceObjectDataType Applicable Source Data Object Type (1: Numeric, 2: String)
                     * 
                     */
                    uint64_t GetSourceObjectDataType() const;

                    /**
                     * 设置Applicable Source Data Object Type (1: Numeric, 2: String)
                     * @param _sourceObjectDataType Applicable Source Data Object Type (1: Numeric, 2: String)
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
                     * 获取Rule Template Source Side Content, distinguish engine, JSON Structure
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return SourceContent Rule Template Source Side Content, distinguish engine, JSON Structure
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    std::string GetSourceContent() const;

                    /**
                     * 设置Rule Template Source Side Content, distinguish engine, JSON Structure
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _sourceContent Rule Template Source Side Content, distinguish engine, JSON Structure
Note: This field may return null, indicating that no valid value can be obtained.
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
                     * 获取Applicable Source Data Type
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return SourceEngineTypes Applicable Source Data Type
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    std::vector<uint64_t> GetSourceEngineTypes() const;

                    /**
                     * 设置Applicable Source Data Type
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _sourceEngineTypes Applicable Source Data Type
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
                     * 获取Quality Dimension of Rule (1: Accuracy, 2: Uniqueness, 3: Completeness, 4: Consistency, 5: Timeliness, 6: Validity)
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return QualityDim Quality Dimension of Rule (1: Accuracy, 2: Uniqueness, 3: Completeness, 4: Consistency, 5: Timeliness, 6: Validity)
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    uint64_t GetQualityDim() const;

                    /**
                     * 设置Quality Dimension of Rule (1: Accuracy, 2: Uniqueness, 3: Completeness, 4: Consistency, 5: Timeliness, 6: Validity)
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _qualityDim Quality Dimension of Rule (1: Accuracy, 2: Uniqueness, 3: Completeness, 4: Consistency, 5: Timeliness, 6: Validity)
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
                     * 获取Supported Comparison Types for Rule (1: Fixed Value Comparison, greater than, less than, greater than or equal, etc. 2: Fluctuation Value Comparison, absolute value, increase, decrease)
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return CompareType Supported Comparison Types for Rule (1: Fixed Value Comparison, greater than, less than, greater than or equal, etc. 2: Fluctuation Value Comparison, absolute value, increase, decrease)
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    uint64_t GetCompareType() const;

                    /**
                     * 设置Supported Comparison Types for Rule (1: Fixed Value Comparison, greater than, less than, greater than or equal, etc. 2: Fluctuation Value Comparison, absolute value, increase, decrease)
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _compareType Supported Comparison Types for Rule (1: Fixed Value Comparison, greater than, less than, greater than or equal, etc. 2: Fluctuation Value Comparison, absolute value, increase, decrease)
Note: This field may return null, indicating that no valid value can be obtained.
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
                     * 获取Number of References
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return CitationCount Number of References
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    uint64_t GetCitationCount() const;

                    /**
                     * 设置Number of References
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _citationCount Number of References
Note: This field may return null, indicating that no valid value can be obtained.
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
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return UserId Creator ID
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    uint64_t GetUserId() const;

                    /**
                     * 设置Creator ID
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _userId Creator ID
Note: This field may return null, indicating that no valid value can be obtained.
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
                     * 获取Creator Nickname
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return UserName Creator Nickname
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    std::string GetUserName() const;

                    /**
                     * 设置Creator Nickname
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _userName Creator Nickname
Note: This field may return null, indicating that no valid value can be obtained.
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
                     * 获取Update Time yyyy-MM-dd HH:mm:ss
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return UpdateTime Update Time yyyy-MM-dd HH:mm:ss
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    std::string GetUpdateTime() const;

                    /**
                     * 设置Update Time yyyy-MM-dd HH:mm:ss
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _updateTime Update Time yyyy-MM-dd HH:mm:ss
Note: This field may return null, indicating that no valid value can be obtained.
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
                     * 获取Whether to add where parameter
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return WhereFlag Whether to add where parameter
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    bool GetWhereFlag() const;

                    /**
                     * 设置Whether to add where parameter
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _whereFlag Whether to add where parameter
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
                     * 获取Whether to Associate Multiple Tables
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return MultiSourceFlag Whether to Associate Multiple Tables
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    bool GetMultiSourceFlag() const;

                    /**
                     * 设置Whether to Associate Multiple Tables
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _multiSourceFlag Whether to Associate Multiple Tables
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
                     * 获取Custom Template SQL Expression from Definition
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return SqlExpression Custom Template SQL Expression from Definition
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    std::string GetSqlExpression() const;

                    /**
                     * 设置Custom Template SQL Expression from Definition
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _sqlExpression Custom Template SQL Expression from Definition
Note: This field may return null, indicating that no valid value can be obtained.
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
                     * 获取Template Sub-dimension,0. Parent Dimension Type,1. Consistency: Enumeration Range Consistency,2. Consistency: Numeric Range Consistency,3. Consistency: Field Data Correlation
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return SubQualityDim Template Sub-dimension,0. Parent Dimension Type,1. Consistency: Enumeration Range Consistency,2. Consistency: Numeric Range Consistency,3. Consistency: Field Data Correlation
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    uint64_t GetSubQualityDim() const;

                    /**
                     * 设置Template Sub-dimension,0. Parent Dimension Type,1. Consistency: Enumeration Range Consistency,2. Consistency: Numeric Range Consistency,3. Consistency: Field Data Correlation
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _subQualityDim Template Sub-dimension,0. Parent Dimension Type,1. Consistency: Enumeration Range Consistency,2. Consistency: Numeric Range Consistency,3. Consistency: Field Data Correlation
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
                     * 获取SQL Expression Parsing Object
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return ResolvedSqlExpression SQL Expression Parsing Object
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    SqlExpression GetResolvedSqlExpression() const;

                    /**
                     * 设置SQL Expression Parsing Object
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _resolvedSqlExpression SQL Expression Parsing Object
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetResolvedSqlExpression(const SqlExpression& _resolvedSqlExpression);

                    /**
                     * 判断参数 ResolvedSqlExpression 是否已赋值
                     * @return ResolvedSqlExpression 是否已赋值
                     * 
                     */
                    bool ResolvedSqlExpressionHasBeenSet() const;

                    /**
                     * 获取Supported Data Source Types
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return DatasourceTypes Supported Data Source Types
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    std::vector<int64_t> GetDatasourceTypes() const;

                    /**
                     * 设置Supported Data Source Types
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _datasourceTypes Supported Data Source Types
Note: This field may return null, indicating that no valid value can be obtained.
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
                     * 获取Created by User ID Str
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return UserIdStr Created by User ID Str
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    std::string GetUserIdStr() const;

                    /**
                     * 设置Created by User ID Str
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _userIdStr Created by User ID Str
Note: This field may return null, indicating that no valid value can be obtained.
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
                     * Rule Template ID
                     */
                    uint64_t m_ruleTemplateId;
                    bool m_ruleTemplateIdHasBeenSet;

                    /**
                     * Rule Template Name
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * Rule Template Description
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * Template Type (1: System Template, 2: Self Definition)
                     */
                    uint64_t m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * Applicable Source Data Object Type (1: Constant, 2: Offline Table Level, 3: Offline Field Level)
                     */
                    uint64_t m_sourceObjectType;
                    bool m_sourceObjectTypeHasBeenSet;

                    /**
                     * Applicable Source Data Object Type (1: Numeric, 2: String)
                     */
                    uint64_t m_sourceObjectDataType;
                    bool m_sourceObjectDataTypeHasBeenSet;

                    /**
                     * Rule Template Source Side Content, distinguish engine, JSON Structure
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    std::string m_sourceContent;
                    bool m_sourceContentHasBeenSet;

                    /**
                     * Applicable Source Data Type
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    std::vector<uint64_t> m_sourceEngineTypes;
                    bool m_sourceEngineTypesHasBeenSet;

                    /**
                     * Quality Dimension of Rule (1: Accuracy, 2: Uniqueness, 3: Completeness, 4: Consistency, 5: Timeliness, 6: Validity)
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    uint64_t m_qualityDim;
                    bool m_qualityDimHasBeenSet;

                    /**
                     * Supported Comparison Types for Rule (1: Fixed Value Comparison, greater than, less than, greater than or equal, etc. 2: Fluctuation Value Comparison, absolute value, increase, decrease)
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    uint64_t m_compareType;
                    bool m_compareTypeHasBeenSet;

                    /**
                     * Number of References
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    uint64_t m_citationCount;
                    bool m_citationCountHasBeenSet;

                    /**
                     * Creator ID
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    uint64_t m_userId;
                    bool m_userIdHasBeenSet;

                    /**
                     * Creator Nickname
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    std::string m_userName;
                    bool m_userNameHasBeenSet;

                    /**
                     * Update Time yyyy-MM-dd HH:mm:ss
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    std::string m_updateTime;
                    bool m_updateTimeHasBeenSet;

                    /**
                     * Whether to add where parameter
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    bool m_whereFlag;
                    bool m_whereFlagHasBeenSet;

                    /**
                     * Whether to Associate Multiple Tables
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    bool m_multiSourceFlag;
                    bool m_multiSourceFlagHasBeenSet;

                    /**
                     * Custom Template SQL Expression from Definition
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    std::string m_sqlExpression;
                    bool m_sqlExpressionHasBeenSet;

                    /**
                     * Template Sub-dimension,0. Parent Dimension Type,1. Consistency: Enumeration Range Consistency,2. Consistency: Numeric Range Consistency,3. Consistency: Field Data Correlation
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    uint64_t m_subQualityDim;
                    bool m_subQualityDimHasBeenSet;

                    /**
                     * SQL Expression Parsing Object
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    SqlExpression m_resolvedSqlExpression;
                    bool m_resolvedSqlExpressionHasBeenSet;

                    /**
                     * Supported Data Source Types
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    std::vector<int64_t> m_datasourceTypes;
                    bool m_datasourceTypesHasBeenSet;

                    /**
                     * Created by User ID Str
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    std::string m_userIdStr;
                    bool m_userIdStrHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20210820_MODEL_RULETEMPLATE_H_
