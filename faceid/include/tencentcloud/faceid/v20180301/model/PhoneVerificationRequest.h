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

#ifndef TENCENTCLOUD_FACEID_V20180301_MODEL_PHONEVERIFICATIONREQUEST_H_
#define TENCENTCLOUD_FACEID_V20180301_MODEL_PHONEVERIFICATIONREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Faceid
    {
        namespace V20180301
        {
            namespace Model
            {
                /**
                * PhoneVerification request structure.
                */
                class PhoneVerificationRequest : public AbstractModel
                {
                public:
                    PhoneVerificationRequest();
                    ~PhoneVerificationRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Identity card number.
                     * @return IdCard Identity card number.
                     * 
                     */
                    std::string GetIdCard() const;

                    /**
                     * 设置Identity card number.
                     * @param _idCard Identity card number.
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
                     * 获取Users with encryption requirements can import the CiphertextBlob of kms. Read the <a href="https://www.tencentcloud.com/document/product/1007/47180?from_cn_redirect=1">data encryption</a> document about encrypting data.
                     * @return CiphertextBlob Users with encryption requirements can import the CiphertextBlob of kms. Read the <a href="https://www.tencentcloud.com/document/product/1007/47180?from_cn_redirect=1">data encryption</a> document about encrypting data.
                     * 
                     */
                    std::string GetCiphertextBlob() const;

                    /**
                     * 设置Users with encryption requirements can import the CiphertextBlob of kms. Read the <a href="https://www.tencentcloud.com/document/product/1007/47180?from_cn_redirect=1">data encryption</a> document about encrypting data.
                     * @param _ciphertextBlob Users with encryption requirements can import the CiphertextBlob of kms. Read the <a href="https://www.tencentcloud.com/document/product/1007/47180?from_cn_redirect=1">data encryption</a> document about encrypting data.
                     * 
                     */
                    void SetCiphertextBlob(const std::string& _ciphertextBlob);

                    /**
                     * 判断参数 CiphertextBlob 是否已赋值
                     * @return CiphertextBlob 是否已赋值
                     * 
                     */
                    bool CiphertextBlobHasBeenSet() const;

                    /**
                     * 获取When using the encryption service, fill in the field to be encrypted.
-This API can fill in one or more of encrypted IdCard, Name, and Phone.
                     * @return EncryptList When using the encryption service, fill in the field to be encrypted.
-This API can fill in one or more of encrypted IdCard, Name, and Phone.
                     * 
                     */
                    std::vector<std::string> GetEncryptList() const;

                    /**
                     * 设置When using the encryption service, fill in the field to be encrypted.
-This API can fill in one or more of encrypted IdCard, Name, and Phone.
                     * @param _encryptList When using the encryption service, fill in the field to be encrypted.
-This API can fill in one or more of encrypted IdCard, Name, and Phone.
                     * 
                     */
                    void SetEncryptList(const std::vector<std::string>& _encryptList);

                    /**
                     * 判断参数 EncryptList 是否已赋值
                     * @return EncryptList 是否已赋值
                     * 
                     */
                    bool EncryptListHasBeenSet() const;

                    /**
                     * 获取Users with encryption requirements import the initial vector for CBC encryption.
                     * @return Iv Users with encryption requirements import the initial vector for CBC encryption.
                     * 
                     */
                    std::string GetIv() const;

                    /**
                     * 设置Users with encryption requirements import the initial vector for CBC encryption.
                     * @param _iv Users with encryption requirements import the initial vector for CBC encryption.
                     * 
                     */
                    void SetIv(const std::string& _iv);

                    /**
                     * 判断参数 Iv 是否已赋值
                     * @return Iv 是否已赋值
                     * 
                     */
                    bool IvHasBeenSet() const;

                private:

                    /**
                     * Identity card number.
                     */
                    std::string m_idCard;
                    bool m_idCardHasBeenSet;

                    /**
                     * Name
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * Mobile number.
                     */
                    std::string m_phone;
                    bool m_phoneHasBeenSet;

                    /**
                     * Users with encryption requirements can import the CiphertextBlob of kms. Read the <a href="https://www.tencentcloud.com/document/product/1007/47180?from_cn_redirect=1">data encryption</a> document about encrypting data.
                     */
                    std::string m_ciphertextBlob;
                    bool m_ciphertextBlobHasBeenSet;

                    /**
                     * When using the encryption service, fill in the field to be encrypted.
-This API can fill in one or more of encrypted IdCard, Name, and Phone.
                     */
                    std::vector<std::string> m_encryptList;
                    bool m_encryptListHasBeenSet;

                    /**
                     * Users with encryption requirements import the initial vector for CBC encryption.
                     */
                    std::string m_iv;
                    bool m_ivHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_FACEID_V20180301_MODEL_PHONEVERIFICATIONREQUEST_H_
