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

#ifndef TENCENTCLOUD_SES_V20201002_MODEL_GETEMAILTEMPLATERESPONSE_H_
#define TENCENTCLOUD_SES_V20201002_MODEL_GETEMAILTEMPLATERESPONSE_H_

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
                * GetEmailTemplate response structure.
                */
                class GetEmailTemplateResponse : public AbstractModel
                {
                public:
                    GetEmailTemplateResponse();
                    ~GetEmailTemplateResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取Template content.
                     * @return TemplateContent Template content.
                     * 
                     */
                    TemplateContent GetTemplateContent() const;

                    /**
                     * 判断参数 TemplateContent 是否已赋值
                     * @return TemplateContent 是否已赋值
                     * 
                     */
                    bool TemplateContentHasBeenSet() const;

                    /**
                     * 获取Template status. Valid values: `0` (approved); `1` (pending approval); `2` (rejected).
                     * @return TemplateStatus Template status. Valid values: `0` (approved); `1` (pending approval); `2` (rejected).
                     * 
                     */
                    uint64_t GetTemplateStatus() const;

                    /**
                     * 判断参数 TemplateStatus 是否已赋值
                     * @return TemplateStatus 是否已赋值
                     * 
                     */
                    bool TemplateStatusHasBeenSet() const;

                    /**
                     * 获取Template name
                     * @return TemplateName Template name
                     * 
                     */
                    std::string GetTemplateName() const;

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
                     * Template status. Valid values: `0` (approved); `1` (pending approval); `2` (rejected).
                     */
                    uint64_t m_templateStatus;
                    bool m_templateStatusHasBeenSet;

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

#endif // !TENCENTCLOUD_SES_V20201002_MODEL_GETEMAILTEMPLATERESPONSE_H_
