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

#ifndef TENCENTCLOUD_FACEID_V20180301_MODEL_ENCRYPTION_H_
#define TENCENTCLOUD_FACEID_V20180301_MODEL_ENCRYPTION_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
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
                * 
                */
                class Encryption : public AbstractModel
                {
                public:
                    Encryption();
                    ~Encryption() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取When using the encryption service, fill in the fields to be encrypted. One or more encrypted fields can be entered in this interface.
                     * @return EncryptList When using the encryption service, fill in the fields to be encrypted. One or more encrypted fields can be entered in this interface.
                     * 
                     */
                    std::vector<std::string> GetEncryptList() const;

                    /**
                     * 设置When using the encryption service, fill in the fields to be encrypted. One or more encrypted fields can be entered in this interface.
                     * @param _encryptList When using the encryption service, fill in the fields to be encrypted. One or more encrypted fields can be entered in this interface.
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
                     * 获取Symmetric key after encryption. For the generation and usage of the key, please refer to the <a href="https://cloud.tencent.com/document/product/1007/47180">Data Encryption</a> document.
                     * @return CiphertextBlob Symmetric key after encryption. For the generation and usage of the key, please refer to the <a href="https://cloud.tencent.com/document/product/1007/47180">Data Encryption</a> document.
                     * 
                     */
                    std::string GetCiphertextBlob() const;

                    /**
                     * 设置Symmetric key after encryption. For the generation and usage of the key, please refer to the <a href="https://cloud.tencent.com/document/product/1007/47180">Data Encryption</a> document.
                     * @param _ciphertextBlob Symmetric key after encryption. For the generation and usage of the key, please refer to the <a href="https://cloud.tencent.com/document/product/1007/47180">Data Encryption</a> document.
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
                     * 获取initialization vector for CBC encryption (a customer-defined string with a length of 16 characters).
                     * @return Iv initialization vector for CBC encryption (a customer-defined string with a length of 16 characters).
                     * 
                     */
                    std::string GetIv() const;

                    /**
                     * 设置initialization vector for CBC encryption (a customer-defined string with a length of 16 characters).
                     * @param _iv initialization vector for CBC encryption (a customer-defined string with a length of 16 characters).
                     * 
                     */
                    void SetIv(const std::string& _iv);

                    /**
                     * 判断参数 Iv 是否已赋值
                     * @return Iv 是否已赋值
                     * 
                     */
                    bool IvHasBeenSet() const;

                    /**
                     * 获取Encryption algorithm (supports 'AES-256-CBC'/'SM4-GCM'); default: 'AES-256-CBC' if not specified.
                     * @return Algorithm Encryption algorithm (supports 'AES-256-CBC'/'SM4-GCM'); default: 'AES-256-CBC' if not specified.
                     * 
                     */
                    std::string GetAlgorithm() const;

                    /**
                     * 设置Encryption algorithm (supports 'AES-256-CBC'/'SM4-GCM'); default: 'AES-256-CBC' if not specified.
                     * @param _algorithm Encryption algorithm (supports 'AES-256-CBC'/'SM4-GCM'); default: 'AES-256-CBC' if not specified.
                     * 
                     */
                    void SetAlgorithm(const std::string& _algorithm);

                    /**
                     * 判断参数 Algorithm 是否已赋值
                     * @return Algorithm 是否已赋值
                     * 
                     */
                    bool AlgorithmHasBeenSet() const;

                    /**
                     * 获取Message digest generated by the SM4-GCM algorithm (used for verifying message integrity).
                     * @return TagList Message digest generated by the SM4-GCM algorithm (used for verifying message integrity).
                     * 
                     */
                    std::vector<std::string> GetTagList() const;

                    /**
                     * 设置Message digest generated by the SM4-GCM algorithm (used for verifying message integrity).
                     * @param _tagList Message digest generated by the SM4-GCM algorithm (used for verifying message integrity).
                     * 
                     */
                    void SetTagList(const std::vector<std::string>& _tagList);

                    /**
                     * 判断参数 TagList 是否已赋值
                     * @return TagList 是否已赋值
                     * 
                     */
                    bool TagListHasBeenSet() const;

                private:

                    /**
                     * When using the encryption service, fill in the fields to be encrypted. One or more encrypted fields can be entered in this interface.
                     */
                    std::vector<std::string> m_encryptList;
                    bool m_encryptListHasBeenSet;

                    /**
                     * Symmetric key after encryption. For the generation and usage of the key, please refer to the <a href="https://cloud.tencent.com/document/product/1007/47180">Data Encryption</a> document.
                     */
                    std::string m_ciphertextBlob;
                    bool m_ciphertextBlobHasBeenSet;

                    /**
                     * initialization vector for CBC encryption (a customer-defined string with a length of 16 characters).
                     */
                    std::string m_iv;
                    bool m_ivHasBeenSet;

                    /**
                     * Encryption algorithm (supports 'AES-256-CBC'/'SM4-GCM'); default: 'AES-256-CBC' if not specified.
                     */
                    std::string m_algorithm;
                    bool m_algorithmHasBeenSet;

                    /**
                     * Message digest generated by the SM4-GCM algorithm (used for verifying message integrity).
                     */
                    std::vector<std::string> m_tagList;
                    bool m_tagListHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_FACEID_V20180301_MODEL_ENCRYPTION_H_
