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

#ifndef TENCENTCLOUD_CYNOSDB_V20190107_MODEL_CREATEPARAMTEMPLATEREQUEST_H_
#define TENCENTCLOUD_CYNOSDB_V20190107_MODEL_CREATEPARAMTEMPLATEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cynosdb/v20190107/model/ParamItem.h>


namespace TencentCloud
{
    namespace Cynosdb
    {
        namespace V20190107
        {
            namespace Model
            {
                /**
                * CreateParamTemplate request structure.
                */
                class CreateParamTemplateRequest : public AbstractModel
                {
                public:
                    CreateParamTemplateRequest();
                    ~CreateParamTemplateRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Template name
                     * @return TemplateName Template name
                     * 
                     */
                    std::string GetTemplateName() const;

                    /**
                     * 设置Template name
                     * @param _templateName Template name
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
                     * 获取MySQL version number
                     * @return EngineVersion MySQL version number
                     * 
                     */
                    std::string GetEngineVersion() const;

                    /**
                     * 设置MySQL version number
                     * @param _engineVersion MySQL version number
                     * 
                     */
                    void SetEngineVersion(const std::string& _engineVersion);

                    /**
                     * 判断参数 EngineVersion 是否已赋值
                     * @return EngineVersion 是否已赋值
                     * 
                     */
                    bool EngineVersionHasBeenSet() const;

                    /**
                     * 获取Template description
                     * @return TemplateDescription Template description
                     * 
                     */
                    std::string GetTemplateDescription() const;

                    /**
                     * 设置Template description
                     * @param _templateDescription Template description
                     * 
                     */
                    void SetTemplateDescription(const std::string& _templateDescription);

                    /**
                     * 判断参数 TemplateDescription 是否已赋值
                     * @return TemplateDescription 是否已赋值
                     * 
                     */
                    bool TemplateDescriptionHasBeenSet() const;

                    /**
                     * 获取ID of the template to be copied
                     * @return TemplateId ID of the template to be copied
                     * 
                     */
                    int64_t GetTemplateId() const;

                    /**
                     * 设置ID of the template to be copied
                     * @param _templateId ID of the template to be copied
                     * 
                     */
                    void SetTemplateId(const int64_t& _templateId);

                    /**
                     * 判断参数 TemplateId 是否已赋值
                     * @return TemplateId 是否已赋值
                     * 
                     */
                    bool TemplateIdHasBeenSet() const;

                    /**
                     * 获取Database type. Valid values:  `NORMAL` (default), `SERVERLESS`.
                     * @return DbMode Database type. Valid values:  `NORMAL` (default), `SERVERLESS`.
                     * 
                     */
                    std::string GetDbMode() const;

                    /**
                     * 设置Database type. Valid values:  `NORMAL` (default), `SERVERLESS`.
                     * @param _dbMode Database type. Valid values:  `NORMAL` (default), `SERVERLESS`.
                     * 
                     */
                    void SetDbMode(const std::string& _dbMode);

                    /**
                     * 判断参数 DbMode 是否已赋值
                     * @return DbMode 是否已赋值
                     * 
                     */
                    bool DbModeHasBeenSet() const;

                    /**
                     * 获取List of the parameters
                     * @return ParamList List of the parameters
                     * 
                     */
                    std::vector<ParamItem> GetParamList() const;

                    /**
                     * 设置List of the parameters
                     * @param _paramList List of the parameters
                     * 
                     */
                    void SetParamList(const std::vector<ParamItem>& _paramList);

                    /**
                     * 判断参数 ParamList 是否已赋值
                     * @return ParamList 是否已赋值
                     * 
                     */
                    bool ParamListHasBeenSet() const;

                private:

                    /**
                     * Template name
                     */
                    std::string m_templateName;
                    bool m_templateNameHasBeenSet;

                    /**
                     * MySQL version number
                     */
                    std::string m_engineVersion;
                    bool m_engineVersionHasBeenSet;

                    /**
                     * Template description
                     */
                    std::string m_templateDescription;
                    bool m_templateDescriptionHasBeenSet;

                    /**
                     * ID of the template to be copied
                     */
                    int64_t m_templateId;
                    bool m_templateIdHasBeenSet;

                    /**
                     * Database type. Valid values:  `NORMAL` (default), `SERVERLESS`.
                     */
                    std::string m_dbMode;
                    bool m_dbModeHasBeenSet;

                    /**
                     * List of the parameters
                     */
                    std::vector<ParamItem> m_paramList;
                    bool m_paramListHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CYNOSDB_V20190107_MODEL_CREATEPARAMTEMPLATEREQUEST_H_
