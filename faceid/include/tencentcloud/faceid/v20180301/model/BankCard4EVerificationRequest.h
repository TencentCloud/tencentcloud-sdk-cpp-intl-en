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

#ifndef TENCENTCLOUD_FACEID_V20180301_MODEL_BANKCARD4EVERIFICATIONREQUEST_H_
#define TENCENTCLOUD_FACEID_V20180301_MODEL_BANKCARD4EVERIFICATIONREQUEST_H_

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
                * BankCard4EVerification request structure.
                */
                class BankCard4EVerificationRequest : public AbstractModel
                {
                public:
                    BankCard4EVerificationRequest();
                    ~BankCard4EVerificationRequest() = default;
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
                     * 获取Mobile number.
                     * @return Phone Mobile number.
                     * 
                     */
                    std::string GetPhone() const;

                    /**
                     * 设置Mobile number.
                     * @param _phone Mobile number.
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
                     * 获取ID number for account opening.
-The document type must match the Type parameter, for example: input the ID card number for an identity card.
                     * @return IdCard ID number for account opening.
-The document type must match the Type parameter, for example: input the ID card number for an identity card.
                     * 
                     */
                    std::string GetIdCard() const;

                    /**
                     * 设置ID number for account opening.
-The document type must match the Type parameter, for example: input the ID card number for an identity card.
                     * @param _idCard ID number for account opening.
-The document type must match the Type parameter, for example: input the ID card number for an identity card.
                     * 
                     */
                    void SetIdCard(const std::string& _idCard);

                    /**
                     * 判断参数 IdCard 是否已赋值
                     * @return IdCard 是否已赋值
                     * 
                     */
                    bool IdCardHasBeenSet() const;

                    /**
                     * 获取Document type.
-Please confirm this document is the document type used when opening an account. Document information not used for account opening is not supported for verification.
-Currently defaults to 0: ID card. Other document types are not currently supported.
                     * @return CertType Document type.
-Please confirm this document is the document type used when opening an account. Document information not used for account opening is not supported for verification.
-Currently defaults to 0: ID card. Other document types are not currently supported.
                     * 
                     */
                    int64_t GetCertType() const;

                    /**
                     * 设置Document type.
-Please confirm this document is the document type used when opening an account. Document information not used for account opening is not supported for verification.
-Currently defaults to 0: ID card. Other document types are not currently supported.
                     * @param _certType Document type.
-Please confirm this document is the document type used when opening an account. Document information not used for account opening is not supported for verification.
-Currently defaults to 0: ID card. Other document types are not currently supported.
                     * 
                     */
                    void SetCertType(const int64_t& _certType);

                    /**
                     * 判断参数 CertType 是否已赋值
                     * @return CertType 是否已赋值
                     * 
                     */
                    bool CertTypeHasBeenSet() const;

                    /**
                     * 获取Sensitive data encryption info.
-Users with encryption requirements for incoming information (name, identity card number, mobile number, bank card number) can use this parameter. For details, please click the left-side link.
                     * @return Encryption Sensitive data encryption info.
-Users with encryption requirements for incoming information (name, identity card number, mobile number, bank card number) can use this parameter. For details, please click the left-side link.
                     * 
                     */
                    Encryption GetEncryption() const;

                    /**
                     * 设置Sensitive data encryption info.
-Users with encryption requirements for incoming information (name, identity card number, mobile number, bank card number) can use this parameter. For details, please click the left-side link.
                     * @param _encryption Sensitive data encryption info.
-Users with encryption requirements for incoming information (name, identity card number, mobile number, bank card number) can use this parameter. For details, please click the left-side link.
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
                     * Mobile number.
                     */
                    std::string m_phone;
                    bool m_phoneHasBeenSet;

                    /**
                     * ID number for account opening.
-The document type must match the Type parameter, for example: input the ID card number for an identity card.
                     */
                    std::string m_idCard;
                    bool m_idCardHasBeenSet;

                    /**
                     * Document type.
-Please confirm this document is the document type used when opening an account. Document information not used for account opening is not supported for verification.
-Currently defaults to 0: ID card. Other document types are not currently supported.
                     */
                    int64_t m_certType;
                    bool m_certTypeHasBeenSet;

                    /**
                     * Sensitive data encryption info.
-Users with encryption requirements for incoming information (name, identity card number, mobile number, bank card number) can use this parameter. For details, please click the left-side link.
                     */
                    Encryption m_encryption;
                    bool m_encryptionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_FACEID_V20180301_MODEL_BANKCARD4EVERIFICATIONREQUEST_H_
