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

#ifndef TENCENTCLOUD_FACEID_V20180301_MODEL_BANKCARD2EVERIFICATIONREQUEST_H_
#define TENCENTCLOUD_FACEID_V20180301_MODEL_BANKCARD2EVERIFICATIONREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/faceid/v20180301/model/Encryption.h>


namespace TencentCloud
{
    namespace Faceid
    {
        namespace V20180301
        {
            namespace Model
            {
                /**
                * BankCard2EVerification request structure.
                */
                class BankCard2EVerificationRequest : public AbstractModel
                {
                public:
                    BankCard2EVerificationRequest();
                    ~BankCard2EVerificationRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Name
                     * @return Name Name
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置Name
                     * @param _name Name
                     * 
                     */
                    void SetName(const std::string& _name);

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     * 
                     */
                    bool NameHasBeenSet() const;

                    /**
                     * 获取Bank card.
                     * @return BankCard Bank card.
                     * 
                     */
                    std::string GetBankCard() const;

                    /**
                     * 设置Bank card.
                     * @param _bankCard Bank card.
                     * 
                     */
                    void SetBankCard(const std::string& _bankCard);

                    /**
                     * 判断参数 BankCard 是否已赋值
                     * @return BankCard 是否已赋值
                     * 
                     */
                    bool BankCardHasBeenSet() const;

                    /**
                     * 获取Sensitive data encryption info.
- Users with encryption requirements for incoming information (name, bank card number) can use this parameter. For details, please click the left-side link.
                     * @return Encryption Sensitive data encryption info.
- Users with encryption requirements for incoming information (name, bank card number) can use this parameter. For details, please click the left-side link.
                     * 
                     */
                    Encryption GetEncryption() const;

                    /**
                     * 设置Sensitive data encryption info.
- Users with encryption requirements for incoming information (name, bank card number) can use this parameter. For details, please click the left-side link.
                     * @param _encryption Sensitive data encryption info.
- Users with encryption requirements for incoming information (name, bank card number) can use this parameter. For details, please click the left-side link.
                     * 
                     */
                    void SetEncryption(const Encryption& _encryption);

                    /**
                     * 判断参数 Encryption 是否已赋值
                     * @return Encryption 是否已赋值
                     * 
                     */
                    bool EncryptionHasBeenSet() const;

                private:

                    /**
                     * Name
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * Bank card.
                     */
                    std::string m_bankCard;
                    bool m_bankCardHasBeenSet;

                    /**
                     * Sensitive data encryption info.
- Users with encryption requirements for incoming information (name, bank card number) can use this parameter. For details, please click the left-side link.
                     */
                    Encryption m_encryption;
                    bool m_encryptionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_FACEID_V20180301_MODEL_BANKCARD2EVERIFICATIONREQUEST_H_
