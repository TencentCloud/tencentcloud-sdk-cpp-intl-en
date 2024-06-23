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

#ifndef TENCENTCLOUD_WEDATA_V20210820_MODEL_CREATERULETEMPLATEREQUEST_H_
#define TENCENTCLOUD_WEDATA_V20210820_MODEL_CREATERULETEMPLATEREQUEST_H_

#include <string>
#include <vector>
#include <map>
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
                * CreateRuleTemplate request structure.
                */
                class CreateRuleTemplateRequest : public AbstractModel
                {
                public:
                    CreateRuleTemplateRequest();
                    ~CreateRuleTemplateRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Template Type 1. System Template 2. Custom Definition Template
                     * @return Type Template Type 1. System Template 2. Custom Definition Template
                     * 
                     */
                    uint64_t GetType() const;

                    /**
                     * 设置Template Type 1. System Template 2. Custom Definition Template
                     * @param _type Template Type 1. System Template 2. Custom Definition Template
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
                     * 获取Template Name
                     * @return Name Template Name
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置Template Name
                     * @param _name Template Name
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
                     * 获取Quality Inspection Dimension 1. Accuracy 2. Uniqueness 3. Integrity 4. Consistency 5. Timeliness 6. Validity
                     * @return QualityDim Quality Inspection Dimension 1. Accuracy 2. Uniqueness 3. Integrity 4. Consistency 5. Timeliness 6. Validity
                     * 
                     */
                    uint64_t GetQualityDim() const;

                    /**
                     * 设置Quality Inspection Dimension 1. Accuracy 2. Uniqueness 3. Integrity 4. Consistency 5. Timeliness 6. Validity
                     * @param _qualityDim Quality Inspection Dimension 1. Accuracy 2. Uniqueness 3. Integrity 4. Consistency 5. Timeliness 6. Validity
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
                     * 获取Source Data Object Type 1. Constant 2. Offline Table Level 2. Offline Field Level
                     * @return SourceObjectType Source Data Object Type 1. Constant 2. Offline Table Level 2. Offline Field Level
                     * 
                     */
                    uint64_t GetSourceObjectType() const;

                    /**
                     * 设置Source Data Object Type 1. Constant 2. Offline Table Level 2. Offline Field Level
                     * @param _sourceObjectType Source Data Object Type 1. Constant 2. Offline Table Level 2. Offline Field Level
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
                     * 获取Template Description
                     * @return Description Template Description
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置Template Description
                     * @param _description Template Description
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
                     * 获取Corresponding Engine Type of the Source
                     * @return SourceEngineTypes Corresponding Engine Type of the Source
                     * 
                     */
                    std::vector<uint64_t> GetSourceEngineTypes() const;

                    /**
                     * 设置Corresponding Engine Type of the Source
                     * @param _sourceEngineTypes Corresponding Engine Type of the Source
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
                     * 获取Whether to Associate with Other Databases and Tables
                     * @return MultiSourceFlag Whether to Associate with Other Databases and Tables
                     * 
                     */
                    bool GetMultiSourceFlag() const;

                    /**
                     * 设置Whether to Associate with Other Databases and Tables
                     * @param _multiSourceFlag Whether to Associate with Other Databases and Tables
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
                     * 获取SQL Expression
                     * @return SqlExpression SQL Expression
                     * 
                     */
                    std::string GetSqlExpression() const;

                    /**
                     * 设置SQL Expression
                     * @param _sqlExpression SQL Expression
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
                     * 获取Whether to add where parameter
                     * @return WhereFlag Whether to add where parameter
                     * 
                     */
                    bool GetWhereFlag() const;

                    /**
                     * 设置Whether to add where parameter
                     * @param _whereFlag Whether to add where parameter
                     * 
                     */
                    void SetWhereFlag(const bool& _whereFlag);

                    /**
                     * 判断参数 WhereFlag 是否已赋值
                     * @return WhereFlag 是否已赋值
                     * 
                     */
                    bool WhereFlagHasBeenSet() const;

                private:

                    /**
                     * Template Type 1. System Template 2. Custom Definition Template
                     */
                    uint64_t m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * Template Name
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * Quality Inspection Dimension 1. Accuracy 2. Uniqueness 3. Integrity 4. Consistency 5. Timeliness 6. Validity
                     */
                    uint64_t m_qualityDim;
                    bool m_qualityDimHasBeenSet;

                    /**
                     * Source Data Object Type 1. Constant 2. Offline Table Level 2. Offline Field Level
                     */
                    uint64_t m_sourceObjectType;
                    bool m_sourceObjectTypeHasBeenSet;

                    /**
                     * Template Description
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * Corresponding Engine Type of the Source
                     */
                    std::vector<uint64_t> m_sourceEngineTypes;
                    bool m_sourceEngineTypesHasBeenSet;

                    /**
                     * Whether to Associate with Other Databases and Tables
                     */
                    bool m_multiSourceFlag;
                    bool m_multiSourceFlagHasBeenSet;

                    /**
                     * SQL Expression
                     */
                    std::string m_sqlExpression;
                    bool m_sqlExpressionHasBeenSet;

                    /**
                     * Project ID
                     */
                    std::string m_projectId;
                    bool m_projectIdHasBeenSet;

                    /**
                     * Whether to add where parameter
                     */
                    bool m_whereFlag;
                    bool m_whereFlagHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20210820_MODEL_CREATERULETEMPLATEREQUEST_H_
