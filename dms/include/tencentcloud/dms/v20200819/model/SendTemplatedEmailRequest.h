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

#ifndef TENCENTCLOUD_DMS_V20200819_MODEL_SENDTEMPLATEDEMAILREQUEST_H_
#define TENCENTCLOUD_DMS_V20200819_MODEL_SENDTEMPLATEDEMAILREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Dms
    {
        namespace V20200819
        {
            namespace Model
            {
                /**
                * SendTemplatedEmail request structure.
                */
                class SendTemplatedEmailRequest : public AbstractModel
                {
                public:
                    SendTemplatedEmailRequest();
                    ~SendTemplatedEmailRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Sender address.
                     * @return FromAddress Sender address.
                     * 
                     */
                    std::string GetFromAddress() const;

                    /**
                     * 设置Sender address.
                     * @param _fromAddress Sender address.
                     * 
                     */
                    void SetFromAddress(const std::string& _fromAddress);

                    /**
                     * 判断参数 FromAddress 是否已赋值
                     * @return FromAddress 是否已赋值
                     * 
                     */
                    bool FromAddressHasBeenSet() const;

                    /**
                     * 获取Recipient address. Up to 100 recipient addresses are supported. Multiple addresses should be separated by semicolons (;).
                     * @return ToAddress Recipient address. Up to 100 recipient addresses are supported. Multiple addresses should be separated by semicolons (;).
                     * 
                     */
                    std::string GetToAddress() const;

                    /**
                     * 设置Recipient address. Up to 100 recipient addresses are supported. Multiple addresses should be separated by semicolons (;).
                     * @param _toAddress Recipient address. Up to 100 recipient addresses are supported. Multiple addresses should be separated by semicolons (;).
                     * 
                     */
                    void SetToAddress(const std::string& _toAddress);

                    /**
                     * 判断参数 ToAddress 是否已赋值
                     * @return ToAddress 是否已赋值
                     * 
                     */
                    bool ToAddressHasBeenSet() const;

                    /**
                     * 获取The name of the template created in advance.
                     * @return TemplateName The name of the template created in advance.
                     * 
                     */
                    std::string GetTemplateName() const;

                    /**
                     * 设置The name of the template created in advance.
                     * @param _templateName The name of the template created in advance.
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
                     * 获取Template variable value, which is a JSON string.
                     * @return TemplateValue Template variable value, which is a JSON string.
                     * 
                     */
                    std::string GetTemplateValue() const;

                    /**
                     * 设置Template variable value, which is a JSON string.
                     * @param _templateValue Template variable value, which is a JSON string.
                     * 
                     */
                    void SetTemplateValue(const std::string& _templateValue);

                    /**
                     * 判断参数 TemplateValue 是否已赋值
                     * @return TemplateValue 是否已赋值
                     * 
                     */
                    bool TemplateValueHasBeenSet() const;

                    /**
                     * 获取Sender name.
                     * @return FromName Sender name.
                     * 
                     */
                    std::string GetFromName() const;

                    /**
                     * 设置Sender name.
                     * @param _fromName Sender name.
                     * 
                     */
                    void SetFromName(const std::string& _fromName);

                    /**
                     * 判断参数 FromName 是否已赋值
                     * @return FromName 是否已赋值
                     * 
                     */
                    bool FromNameHasBeenSet() const;

                    /**
                     * 获取Reply-to address.
                     * @return ReplyAddress Reply-to address.
                     * 
                     */
                    std::string GetReplyAddress() const;

                    /**
                     * 设置Reply-to address.
                     * @param _replyAddress Reply-to address.
                     * 
                     */
                    void SetReplyAddress(const std::string& _replyAddress);

                    /**
                     * 判断参数 ReplyAddress 是否已赋值
                     * @return ReplyAddress 是否已赋值
                     * 
                     */
                    bool ReplyAddressHasBeenSet() const;

                private:

                    /**
                     * Sender address.
                     */
                    std::string m_fromAddress;
                    bool m_fromAddressHasBeenSet;

                    /**
                     * Recipient address. Up to 100 recipient addresses are supported. Multiple addresses should be separated by semicolons (;).
                     */
                    std::string m_toAddress;
                    bool m_toAddressHasBeenSet;

                    /**
                     * The name of the template created in advance.
                     */
                    std::string m_templateName;
                    bool m_templateNameHasBeenSet;

                    /**
                     * Template variable value, which is a JSON string.
                     */
                    std::string m_templateValue;
                    bool m_templateValueHasBeenSet;

                    /**
                     * Sender name.
                     */
                    std::string m_fromName;
                    bool m_fromNameHasBeenSet;

                    /**
                     * Reply-to address.
                     */
                    std::string m_replyAddress;
                    bool m_replyAddressHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DMS_V20200819_MODEL_SENDTEMPLATEDEMAILREQUEST_H_
