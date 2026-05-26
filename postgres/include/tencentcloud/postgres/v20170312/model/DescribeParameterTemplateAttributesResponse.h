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

#ifndef TENCENTCLOUD_POSTGRES_V20170312_MODEL_DESCRIBEPARAMETERTEMPLATEATTRIBUTESRESPONSE_H_
#define TENCENTCLOUD_POSTGRES_V20170312_MODEL_DESCRIBEPARAMETERTEMPLATEATTRIBUTESRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/postgres/v20170312/model/ParamInfo.h>


namespace TencentCloud
{
    namespace Postgres
    {
        namespace V20170312
        {
            namespace Model
            {
                /**
                * DescribeParameterTemplateAttributes response structure.
                */
                class DescribeParameterTemplateAttributesResponse : public AbstractModel
                {
                public:
                    DescribeParameterTemplateAttributesResponse();
                    ~DescribeParameterTemplateAttributesResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取Specifies the parameter template ID.
                     * @return TemplateId Specifies the parameter template ID.
                     * 
                     */
                    std::string GetTemplateId() const;

                    /**
                     * 判断参数 TemplateId 是否已赋值
                     * @return TemplateId 是否已赋值
                     * 
                     */
                    bool TemplateIdHasBeenSet() const;

                    /**
                     * 获取Specifies the number of parameters in the parameter template.
                     * @return TotalCount Specifies the number of parameters in the parameter template.
                     * 
                     */
                    int64_t GetTotalCount() const;

                    /**
                     * 判断参数 TotalCount 是否已赋值
                     * @return TotalCount 是否已赋值
                     * 
                     */
                    bool TotalCountHasBeenSet() const;

                    /**
                     * 获取Parameter information contained in the parameter template
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return ParamInfoSet Parameter information contained in the parameter template
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::vector<ParamInfo> GetParamInfoSet() const;

                    /**
                     * 判断参数 ParamInfoSet 是否已赋值
                     * @return ParamInfoSet 是否已赋值
                     * 
                     */
                    bool ParamInfoSetHasBeenSet() const;

                    /**
                     * 获取Parameter template name
                     * @return TemplateName Parameter template name
                     * 
                     */
                    std::string GetTemplateName() const;

                    /**
                     * 判断参数 TemplateName 是否已赋值
                     * @return TemplateName 是否已赋值
                     * 
                     */
                    bool TemplateNameHasBeenSet() const;

                    /**
                     * 获取Specifies the database version the parameter template applies to.
                     * @return DBMajorVersion Specifies the database version the parameter template applies to.
                     * 
                     */
                    std::string GetDBMajorVersion() const;

                    /**
                     * 判断参数 DBMajorVersion 是否已赋值
                     * @return DBMajorVersion 是否已赋值
                     * 
                     */
                    bool DBMajorVersionHasBeenSet() const;

                    /**
                     * 获取Specifies the database engine the parameter template applies to.
                     * @return DBEngine Specifies the database engine the parameter template applies to.
                     * 
                     */
                    std::string GetDBEngine() const;

                    /**
                     * 判断参数 DBEngine 是否已赋值
                     * @return DBEngine 是否已赋值
                     * 
                     */
                    bool DBEngineHasBeenSet() const;

                    /**
                     * 获取Parameter template description
                     * @return TemplateDescription Parameter template description
                     * 
                     */
                    std::string GetTemplateDescription() const;

                    /**
                     * 判断参数 TemplateDescription 是否已赋值
                     * @return TemplateDescription 是否已赋值
                     * 
                     */
                    bool TemplateDescriptionHasBeenSet() const;

                private:

                    /**
                     * Specifies the parameter template ID.
                     */
                    std::string m_templateId;
                    bool m_templateIdHasBeenSet;

                    /**
                     * Specifies the number of parameters in the parameter template.
                     */
                    int64_t m_totalCount;
                    bool m_totalCountHasBeenSet;

                    /**
                     * Parameter information contained in the parameter template
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<ParamInfo> m_paramInfoSet;
                    bool m_paramInfoSetHasBeenSet;

                    /**
                     * Parameter template name
                     */
                    std::string m_templateName;
                    bool m_templateNameHasBeenSet;

                    /**
                     * Specifies the database version the parameter template applies to.
                     */
                    std::string m_dBMajorVersion;
                    bool m_dBMajorVersionHasBeenSet;

                    /**
                     * Specifies the database engine the parameter template applies to.
                     */
                    std::string m_dBEngine;
                    bool m_dBEngineHasBeenSet;

                    /**
                     * Parameter template description
                     */
                    std::string m_templateDescription;
                    bool m_templateDescriptionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_POSTGRES_V20170312_MODEL_DESCRIBEPARAMETERTEMPLATEATTRIBUTESRESPONSE_H_
