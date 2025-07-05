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

#ifndef TENCENTCLOUD_SMS_V20210111_MODEL_MODIFYSMSTEMPLATEREQUEST_H_
#define TENCENTCLOUD_SMS_V20210111_MODEL_MODIFYSMSTEMPLATEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Sms
    {
        namespace V20210111
        {
            namespace Model
            {
                /**
                * ModifySmsTemplate request structure.
                */
                class ModifySmsTemplateRequest : public AbstractModel
                {
                public:
                    ModifySmsTemplateRequest();
                    ~ModifySmsTemplateRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取ID of the template to be modified.
                     * @return TemplateId ID of the template to be modified.
                     * 
                     */
                    uint64_t GetTemplateId() const;

                    /**
                     * 设置ID of the template to be modified.
                     * @param _templateId ID of the template to be modified.
                     * 
                     */
                    void SetTemplateId(const uint64_t& _templateId);

                    /**
                     * 判断参数 TemplateId 是否已赋值
                     * @return TemplateId 是否已赋值
                     * 
                     */
                    bool TemplateIdHasBeenSet() const;

                    /**
                     * 获取New template name.
                     * @return TemplateName New template name.
                     * 
                     */
                    std::string GetTemplateName() const;

                    /**
                     * 设置New template name.
                     * @param _templateName New template name.
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
                     * 获取New template content.
                     * @return TemplateContent New template content.
                     * 
                     */
                    std::string GetTemplateContent() const;

                    /**
                     * 设置New template content.
                     * @param _templateContent New template content.
                     * 
                     */
                    void SetTemplateContent(const std::string& _templateContent);

                    /**
                     * 判断参数 TemplateContent 是否已赋值
                     * @return TemplateContent 是否已赋值
                     * 
                     */
                    bool TemplateContentHasBeenSet() const;

                    /**
                     * 获取SMS type. 1: Marketing SMS, 2: Notification SMS, 3: OTP SMS.
Note: To further improve the quality of SMS service and increase the approval rate of SMS templates, Tencent Cloud SMS template types will be optimized to "OTP", "Notification", and "Marketing" from May 16, 2024. You can Refer to [Optimization of Tencent Cloud SMS Template Types](https://www.tencentcloud.com/document/product/382/60410). Customers who newly register for SMS service must strictly refer to the new SMS type to apply for SMS template.
                     * @return SmsType SMS type. 1: Marketing SMS, 2: Notification SMS, 3: OTP SMS.
Note: To further improve the quality of SMS service and increase the approval rate of SMS templates, Tencent Cloud SMS template types will be optimized to "OTP", "Notification", and "Marketing" from May 16, 2024. You can Refer to [Optimization of Tencent Cloud SMS Template Types](https://www.tencentcloud.com/document/product/382/60410). Customers who newly register for SMS service must strictly refer to the new SMS type to apply for SMS template.
                     * 
                     */
                    uint64_t GetSmsType() const;

                    /**
                     * 设置SMS type. 1: Marketing SMS, 2: Notification SMS, 3: OTP SMS.
Note: To further improve the quality of SMS service and increase the approval rate of SMS templates, Tencent Cloud SMS template types will be optimized to "OTP", "Notification", and "Marketing" from May 16, 2024. You can Refer to [Optimization of Tencent Cloud SMS Template Types](https://www.tencentcloud.com/document/product/382/60410). Customers who newly register for SMS service must strictly refer to the new SMS type to apply for SMS template.
                     * @param _smsType SMS type. 1: Marketing SMS, 2: Notification SMS, 3: OTP SMS.
Note: To further improve the quality of SMS service and increase the approval rate of SMS templates, Tencent Cloud SMS template types will be optimized to "OTP", "Notification", and "Marketing" from May 16, 2024. You can Refer to [Optimization of Tencent Cloud SMS Template Types](https://www.tencentcloud.com/document/product/382/60410). Customers who newly register for SMS service must strictly refer to the new SMS type to apply for SMS template.
                     * 
                     */
                    void SetSmsType(const uint64_t& _smsType);

                    /**
                     * 判断参数 SmsType 是否已赋值
                     * @return SmsType 是否已赋值
                     * 
                     */
                    bool SmsTypeHasBeenSet() const;

                    /**
                     * 获取Whether it is Global SMS:
0: Mainland China SMS.
1: Global SMS.
                     * @return International Whether it is Global SMS:
0: Mainland China SMS.
1: Global SMS.
                     * 
                     */
                    uint64_t GetInternational() const;

                    /**
                     * 设置Whether it is Global SMS:
0: Mainland China SMS.
1: Global SMS.
                     * @param _international Whether it is Global SMS:
0: Mainland China SMS.
1: Global SMS.
                     * 
                     */
                    void SetInternational(const uint64_t& _international);

                    /**
                     * 判断参数 International 是否已赋值
                     * @return International 是否已赋值
                     * 
                     */
                    bool InternationalHasBeenSet() const;

                    /**
                     * 获取Template remarks, such as reason for application and use case.
                     * @return Remark Template remarks, such as reason for application and use case.
                     * 
                     */
                    std::string GetRemark() const;

                    /**
                     * 设置Template remarks, such as reason for application and use case.
                     * @param _remark Template remarks, such as reason for application and use case.
                     * 
                     */
                    void SetRemark(const std::string& _remark);

                    /**
                     * 判断参数 Remark 是否已赋值
                     * @return Remark 是否已赋值
                     * 
                     */
                    bool RemarkHasBeenSet() const;

                private:

                    /**
                     * ID of the template to be modified.
                     */
                    uint64_t m_templateId;
                    bool m_templateIdHasBeenSet;

                    /**
                     * New template name.
                     */
                    std::string m_templateName;
                    bool m_templateNameHasBeenSet;

                    /**
                     * New template content.
                     */
                    std::string m_templateContent;
                    bool m_templateContentHasBeenSet;

                    /**
                     * SMS type. 1: Marketing SMS, 2: Notification SMS, 3: OTP SMS.
Note: To further improve the quality of SMS service and increase the approval rate of SMS templates, Tencent Cloud SMS template types will be optimized to "OTP", "Notification", and "Marketing" from May 16, 2024. You can Refer to [Optimization of Tencent Cloud SMS Template Types](https://www.tencentcloud.com/document/product/382/60410). Customers who newly register for SMS service must strictly refer to the new SMS type to apply for SMS template.
                     */
                    uint64_t m_smsType;
                    bool m_smsTypeHasBeenSet;

                    /**
                     * Whether it is Global SMS:
0: Mainland China SMS.
1: Global SMS.
                     */
                    uint64_t m_international;
                    bool m_internationalHasBeenSet;

                    /**
                     * Template remarks, such as reason for application and use case.
                     */
                    std::string m_remark;
                    bool m_remarkHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_SMS_V20210111_MODEL_MODIFYSMSTEMPLATEREQUEST_H_
