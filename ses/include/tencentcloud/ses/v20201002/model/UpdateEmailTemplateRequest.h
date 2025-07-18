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

#ifndef TENCENTCLOUD_SES_V20201002_MODEL_UPDATEEMAILTEMPLATEREQUEST_H_
#define TENCENTCLOUD_SES_V20201002_MODEL_UPDATEEMAILTEMPLATEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/ses/v20201002/model/TemplateContent.h>


namespace TencentCloud
{
    namespace Ses
    {
        namespace V20201002
        {
            namespace Model
            {
                /**
                * UpdateEmailTemplate request structure.
                */
                class UpdateEmailTemplateRequest : public AbstractModel
                {
                public:
                    UpdateEmailTemplateRequest();
                    ~UpdateEmailTemplateRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Template content.
                     * @return TemplateContent Template content.
                     * 
                     */
                    TemplateContent GetTemplateContent() const;

                    /**
                     * 设置Template content.
                     * @param _templateContent Template content.
                     * 
                     */
                    void SetTemplateContent(const TemplateContent& _templateContent);

                    /**
                     * 判断参数 TemplateContent 是否已赋值
                     * @return TemplateContent 是否已赋值
                     * 
                     */
                    bool TemplateContentHasBeenSet() const;

                    /**
                     * 获取Template ID.
                     * @return TemplateID Template ID.
                     * 
                     */
                    uint64_t GetTemplateID() const;

                    /**
                     * 设置Template ID.
                     * @param _templateID Template ID.
                     * 
                     */
                    void SetTemplateID(const uint64_t& _templateID);

                    /**
                     * 判断参数 TemplateID 是否已赋值
                     * @return TemplateID 是否已赋值
                     * 
                     */
                    bool TemplateIDHasBeenSet() const;

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

                private:

                    /**
                     * Template content.
                     */
                    TemplateContent m_templateContent;
                    bool m_templateContentHasBeenSet;

                    /**
                     * Template ID.
                     */
                    uint64_t m_templateID;
                    bool m_templateIDHasBeenSet;

                    /**
                     * Template name
                     */
                    std::string m_templateName;
                    bool m_templateNameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_SES_V20201002_MODEL_UPDATEEMAILTEMPLATEREQUEST_H_
