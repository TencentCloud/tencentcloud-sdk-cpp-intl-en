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

#ifndef TENCENTCLOUD_RCE_V20260130_MODEL_BILLING_H_
#define TENCENTCLOUD_RCE_V20260130_MODEL_BILLING_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/rce/v20260130/model/Address.h>


namespace TencentCloud
{
    namespace Rce
    {
        namespace V20260130
        {
            namespace Model
            {
                /**
                * Bill information
                */
                class Billing : public AbstractModel
                {
                public:
                    Billing();
                    ~Billing() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>The billing address associated with this user</p>
                     * @return Address <p>The billing address associated with this user</p>
                     * 
                     */
                    Address GetAddress() const;

                    /**
                     * 设置<p>The billing address associated with this user</p>
                     * @param _address <p>The billing address associated with this user</p>
                     * 
                     */
                    void SetAddress(const Address& _address);

                    /**
                     * 判断参数 Address 是否已赋值
                     * @return Address 是否已赋值
                     * 
                     */
                    bool AddressHasBeenSet() const;

                    /**
                     * 获取<p>The phone number associated with the bill</p><p>Parameter format: Complies with the E.164 standard, using the format with "+", region code, and number</p>
                     * @return Phone <p>The phone number associated with the bill</p><p>Parameter format: Complies with the E.164 standard, using the format with "+", region code, and number</p>
                     * 
                     */
                    std::string GetPhone() const;

                    /**
                     * 设置<p>The phone number associated with the bill</p><p>Parameter format: Complies with the E.164 standard, using the format with "+", region code, and number</p>
                     * @param _phone <p>The phone number associated with the bill</p><p>Parameter format: Complies with the E.164 standard, using the format with "+", region code, and number</p>
                     * 
                     */
                    void SetPhone(const std::string& _phone);

                    /**
                     * 判断参数 Phone 是否已赋值
                     * @return Phone 是否已赋值
                     * 
                     */
                    bool PhoneHasBeenSet() const;

                    /**
                     * 获取<p>The email associated with the bill</p>
                     * @return Email <p>The email associated with the bill</p>
                     * 
                     */
                    std::string GetEmail() const;

                    /**
                     * 设置<p>The email associated with the bill</p>
                     * @param _email <p>The email associated with the bill</p>
                     * 
                     */
                    void SetEmail(const std::string& _email);

                    /**
                     * 判断参数 Email 是否已赋值
                     * @return Email 是否已赋值
                     * 
                     */
                    bool EmailHasBeenSet() const;

                    /**
                     * 获取<p>The name of the receiver associated with the bill</p>
                     * @return Recipient <p>The name of the receiver associated with the bill</p>
                     * 
                     */
                    std::string GetRecipient() const;

                    /**
                     * 设置<p>The name of the receiver associated with the bill</p>
                     * @param _recipient <p>The name of the receiver associated with the bill</p>
                     * 
                     */
                    void SetRecipient(const std::string& _recipient);

                    /**
                     * 判断参数 Recipient 是否已赋值
                     * @return Recipient 是否已赋值
                     * 
                     */
                    bool RecipientHasBeenSet() const;

                private:

                    /**
                     * <p>The billing address associated with this user</p>
                     */
                    Address m_address;
                    bool m_addressHasBeenSet;

                    /**
                     * <p>The phone number associated with the bill</p><p>Parameter format: Complies with the E.164 standard, using the format with "+", region code, and number</p>
                     */
                    std::string m_phone;
                    bool m_phoneHasBeenSet;

                    /**
                     * <p>The email associated with the bill</p>
                     */
                    std::string m_email;
                    bool m_emailHasBeenSet;

                    /**
                     * <p>The name of the receiver associated with the bill</p>
                     */
                    std::string m_recipient;
                    bool m_recipientHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_RCE_V20260130_MODEL_BILLING_H_
