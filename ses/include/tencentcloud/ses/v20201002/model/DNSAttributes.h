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

#ifndef TENCENTCLOUD_SES_V20201002_MODEL_DNSATTRIBUTES_H_
#define TENCENTCLOUD_SES_V20201002_MODEL_DNSATTRIBUTES_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Ses
    {
        namespace V20201002
        {
            namespace Model
            {
                /**
                * Describes the domain name, record type, expected value, and currently configured value of DNS records.
                */
                class DNSAttributes : public AbstractModel
                {
                public:
                    DNSAttributes();
                    ~DNSAttributes() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Record types: CNAME, A, TXT, and MX.
                     * @return Type Record types: CNAME, A, TXT, and MX.
                     */
                    std::string GetType() const;

                    /**
                     * 设置Record types: CNAME, A, TXT, and MX.
                     * @param Type Record types: CNAME, A, TXT, and MX.
                     */
                    void SetType(const std::string& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     */
                    bool TypeHasBeenSet() const;

                    /**
                     * 获取Domain name.
                     * @return SendDomain Domain name.
                     */
                    std::string GetSendDomain() const;

                    /**
                     * 设置Domain name.
                     * @param SendDomain Domain name.
                     */
                    void SetSendDomain(const std::string& _sendDomain);

                    /**
                     * 判断参数 SendDomain 是否已赋值
                     * @return SendDomain 是否已赋值
                     */
                    bool SendDomainHasBeenSet() const;

                    /**
                     * 获取Expected value.
                     * @return ExpectedValue Expected value.
                     */
                    std::string GetExpectedValue() const;

                    /**
                     * 设置Expected value.
                     * @param ExpectedValue Expected value.
                     */
                    void SetExpectedValue(const std::string& _expectedValue);

                    /**
                     * 判断参数 ExpectedValue 是否已赋值
                     * @return ExpectedValue 是否已赋值
                     */
                    bool ExpectedValueHasBeenSet() const;

                    /**
                     * 获取Currently configured value.
                     * @return CurrentValue Currently configured value.
                     */
                    std::string GetCurrentValue() const;

                    /**
                     * 设置Currently configured value.
                     * @param CurrentValue Currently configured value.
                     */
                    void SetCurrentValue(const std::string& _currentValue);

                    /**
                     * 判断参数 CurrentValue 是否已赋值
                     * @return CurrentValue 是否已赋值
                     */
                    bool CurrentValueHasBeenSet() const;

                    /**
                     * 获取Approved or not. The default value is `false`.
                     * @return Status Approved or not. The default value is `false`.
                     */
                    bool GetStatus() const;

                    /**
                     * 设置Approved or not. The default value is `false`.
                     * @param Status Approved or not. The default value is `false`.
                     */
                    void SetStatus(const bool& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     */
                    bool StatusHasBeenSet() const;

                private:

                    /**
                     * Record types: CNAME, A, TXT, and MX.
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * Domain name.
                     */
                    std::string m_sendDomain;
                    bool m_sendDomainHasBeenSet;

                    /**
                     * Expected value.
                     */
                    std::string m_expectedValue;
                    bool m_expectedValueHasBeenSet;

                    /**
                     * Currently configured value.
                     */
                    std::string m_currentValue;
                    bool m_currentValueHasBeenSet;

                    /**
                     * Approved or not. The default value is `false`.
                     */
                    bool m_status;
                    bool m_statusHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_SES_V20201002_MODEL_DNSATTRIBUTES_H_
