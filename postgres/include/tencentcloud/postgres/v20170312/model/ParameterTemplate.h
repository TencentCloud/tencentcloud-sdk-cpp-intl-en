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

#ifndef TENCENTCLOUD_POSTGRES_V20170312_MODEL_PARAMETERTEMPLATE_H_
#define TENCENTCLOUD_POSTGRES_V20170312_MODEL_PARAMETERTEMPLATE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Postgres
    {
        namespace V20170312
        {
            namespace Model
            {
                /**
                * Basic information of a parameter template
                */
                class ParameterTemplate : public AbstractModel
                {
                public:
                    ParameterTemplate();
                    ~ParameterTemplate() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Parameter template ID
                     * @return TemplateId Parameter template ID
                     * 
                     */
                    std::string GetTemplateId() const;

                    /**
                     * 设置Parameter template ID
                     * @param _templateId Parameter template ID
                     * 
                     */
                    void SetTemplateId(const std::string& _templateId);

                    /**
                     * 判断参数 TemplateId 是否已赋值
                     * @return TemplateId 是否已赋值
                     * 
                     */
                    bool TemplateIdHasBeenSet() const;

                    /**
                     * 获取Parameter template name
                     * @return TemplateName Parameter template name
                     * 
                     */
                    std::string GetTemplateName() const;

                    /**
                     * 设置Parameter template name
                     * @param _templateName Parameter template name
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
                     * 获取Database version applicable to a parameter template
                     * @return DBMajorVersion Database version applicable to a parameter template
                     * 
                     */
                    std::string GetDBMajorVersion() const;

                    /**
                     * 设置Database version applicable to a parameter template
                     * @param _dBMajorVersion Database version applicable to a parameter template
                     * 
                     */
                    void SetDBMajorVersion(const std::string& _dBMajorVersion);

                    /**
                     * 判断参数 DBMajorVersion 是否已赋值
                     * @return DBMajorVersion 是否已赋值
                     * 
                     */
                    bool DBMajorVersionHasBeenSet() const;

                    /**
                     * 获取Database engine applicable to a parameter template
                     * @return DBEngine Database engine applicable to a parameter template
                     * 
                     */
                    std::string GetDBEngine() const;

                    /**
                     * 设置Database engine applicable to a parameter template
                     * @param _dBEngine Database engine applicable to a parameter template
                     * 
                     */
                    void SetDBEngine(const std::string& _dBEngine);

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
                     * 设置Parameter template description
                     * @param _templateDescription Parameter template description
                     * 
                     */
                    void SetTemplateDescription(const std::string& _templateDescription);

                    /**
                     * 判断参数 TemplateDescription 是否已赋值
                     * @return TemplateDescription 是否已赋值
                     * 
                     */
                    bool TemplateDescriptionHasBeenSet() const;

                private:

                    /**
                     * Parameter template ID
                     */
                    std::string m_templateId;
                    bool m_templateIdHasBeenSet;

                    /**
                     * Parameter template name
                     */
                    std::string m_templateName;
                    bool m_templateNameHasBeenSet;

                    /**
                     * Database version applicable to a parameter template
                     */
                    std::string m_dBMajorVersion;
                    bool m_dBMajorVersionHasBeenSet;

                    /**
                     * Database engine applicable to a parameter template
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

#endif // !TENCENTCLOUD_POSTGRES_V20170312_MODEL_PARAMETERTEMPLATE_H_
