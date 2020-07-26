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

#ifndef TENCENTCLOUD_SMS_V20190711_MODEL_ADDSMSTEMPLATEREQUEST_H_
#define TENCENTCLOUD_SMS_V20190711_MODEL_ADDSMSTEMPLATEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Sms
    {
        namespace V20190711
        {
            namespace Model
            {
                /**
                * AddSmsTemplate request structure.
                */
                class AddSmsTemplateRequest : public AbstractModel
                {
                public:
                    AddSmsTemplateRequest();
                    ~AddSmsTemplateRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Template name.
                     * @return TemplateName Template name.
                     */
                    std::string GetTemplateName() const;

                    /**
                     * 设置Template name.
                     * @param TemplateName Template name.
                     */
                    void SetTemplateName(const std::string& _templateName);

                    /**
                     * 判断参数 TemplateName 是否已赋值
                     * @return TemplateName 是否已赋值
                     */
                    bool TemplateNameHasBeenSet() const;

                    /**
                     * 获取Template content.
                     * @return TemplateContent Template content.
                     */
                    std::string GetTemplateContent() const;

                    /**
                     * 设置Template content.
                     * @param TemplateContent Template content.
                     */
                    void SetTemplateContent(const std::string& _templateContent);

                    /**
                     * 判断参数 TemplateContent 是否已赋值
                     * @return TemplateContent 是否已赋值
                     */
                    bool TemplateContentHasBeenSet() const;

                    /**
                     * 获取SMS type. 0: ordinary SMS, 1: marketing SMS.
                     * @return SmsType SMS type. 0: ordinary SMS, 1: marketing SMS.
                     */
                    uint64_t GetSmsType() const;

                    /**
                     * 设置SMS type. 0: ordinary SMS, 1: marketing SMS.
                     * @param SmsType SMS type. 0: ordinary SMS, 1: marketing SMS.
                     */
                    void SetSmsType(const uint64_t& _smsType);

                    /**
                     * 判断参数 SmsType 是否已赋值
                     * @return SmsType 是否已赋值
                     */
                    bool SmsTypeHasBeenSet() const;

                    /**
                     * 获取Whether it is Global SMS:
0: Mainland China SMS.
1: Global SMS.
                     * @return International Whether it is Global SMS:
0: Mainland China SMS.
1: Global SMS.
                     */
                    uint64_t GetInternational() const;

                    /**
                     * 设置Whether it is Global SMS:
0: Mainland China SMS.
1: Global SMS.
                     * @param International Whether it is Global SMS:
0: Mainland China SMS.
1: Global SMS.
                     */
                    void SetInternational(const uint64_t& _international);

                    /**
                     * 判断参数 International 是否已赋值
                     * @return International 是否已赋值
                     */
                    bool InternationalHasBeenSet() const;

                    /**
                     * 获取Template remarks, such as reason for application and use case.
                     * @return Remark Template remarks, such as reason for application and use case.
                     */
                    std::string GetRemark() const;

                    /**
                     * 设置Template remarks, such as reason for application and use case.
                     * @param Remark Template remarks, such as reason for application and use case.
                     */
                    void SetRemark(const std::string& _remark);

                    /**
                     * 判断参数 Remark 是否已赋值
                     * @return Remark 是否已赋值
                     */
                    bool RemarkHasBeenSet() const;

                private:

                    /**
                     * Template name.
                     */
                    std::string m_templateName;
                    bool m_templateNameHasBeenSet;

                    /**
                     * Template content.
                     */
                    std::string m_templateContent;
                    bool m_templateContentHasBeenSet;

                    /**
                     * SMS type. 0: ordinary SMS, 1: marketing SMS.
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

#endif // !TENCENTCLOUD_SMS_V20190711_MODEL_ADDSMSTEMPLATEREQUEST_H_
