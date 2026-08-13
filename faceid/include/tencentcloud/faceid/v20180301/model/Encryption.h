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
                * Sensitive Data Encryption
                */
                class Encryption : public AbstractModel
                {
                public:
                    Encryption();
                    ~Encryption() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>When using the encryption service, fill in the field to be encrypted. This API can auto-fill one or more encrypted fields.</p>
                     * @return EncryptList <p>When using the encryption service, fill in the field to be encrypted. This API can auto-fill one or more encrypted fields.</p>
                     * 
                     */
                    std::vector<std::string> GetEncryptList() const;

                    /**
                     * 设置<p>When using the encryption service, fill in the field to be encrypted. This API can auto-fill one or more encrypted fields.</p>
                     * @param _encryptList <p>When using the encryption service, fill in the field to be encrypted. This API can auto-fill one or more encrypted fields.</p>
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
                     * 获取<p>Encrypted symmetric key. For key generation and use, see the <a href="https://www.tencentcloud.com/document/product/1007/47180?from_cn_redirect=1">data encryption</a> document.</p>
                     * @return CiphertextBlob <p>Encrypted symmetric key. For key generation and use, see the <a href="https://www.tencentcloud.com/document/product/1007/47180?from_cn_redirect=1">data encryption</a> document.</p>
                     * 
                     */
                    std::string GetCiphertextBlob() const;

                    /**
                     * 设置<p>Encrypted symmetric key. For key generation and use, see the <a href="https://www.tencentcloud.com/document/product/1007/47180?from_cn_redirect=1">data encryption</a> document.</p>
                     * @param _ciphertextBlob <p>Encrypted symmetric key. For key generation and use, see the <a href="https://www.tencentcloud.com/document/product/1007/47180?from_cn_redirect=1">data encryption</a> document.</p>
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
                     * 获取<p>Users with encryption requirements import the initial vector for CBC encryption (custom string, length 16 characters).</p>
                     * @return Iv <p>Users with encryption requirements import the initial vector for CBC encryption (custom string, length 16 characters).</p>
                     * 
                     */
                    std::string GetIv() const;

                    /**
                     * 设置<p>Users with encryption requirements import the initial vector for CBC encryption (custom string, length 16 characters).</p>
                     * @param _iv <p>Users with encryption requirements import the initial vector for CBC encryption (custom string, length 16 characters).</p>
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
                     * 获取<p>Encryption algorithm (supports 'AES-256-CBC', 'SM4-GCM'), defaults to 'AES-256-CBC' if not passed.</p>
                     * @return Algorithm <p>Encryption algorithm (supports 'AES-256-CBC', 'SM4-GCM'), defaults to 'AES-256-CBC' if not passed.</p>
                     * 
                     */
                    std::string GetAlgorithm() const;

                    /**
                     * 设置<p>Encryption algorithm (supports 'AES-256-CBC', 'SM4-GCM'), defaults to 'AES-256-CBC' if not passed.</p>
                     * @param _algorithm <p>Encryption algorithm (supports 'AES-256-CBC', 'SM4-GCM'), defaults to 'AES-256-CBC' if not passed.</p>
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
                     * 获取<p>Message digest generated by the SM4-GCM algorithm (used when verifying message integrity)</p>
                     * @return TagList <p>Message digest generated by the SM4-GCM algorithm (used when verifying message integrity)</p>
                     * 
                     */
                    std::vector<std::string> GetTagList() const;

                    /**
                     * 设置<p>Message digest generated by the SM4-GCM algorithm (used when verifying message integrity)</p>
                     * @param _tagList <p>Message digest generated by the SM4-GCM algorithm (used when verifying message integrity)</p>
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
                     * <p>When using the encryption service, fill in the field to be encrypted. This API can auto-fill one or more encrypted fields.</p>
                     */
                    std::vector<std::string> m_encryptList;
                    bool m_encryptListHasBeenSet;

                    /**
                     * <p>Encrypted symmetric key. For key generation and use, see the <a href="https://www.tencentcloud.com/document/product/1007/47180?from_cn_redirect=1">data encryption</a> document.</p>
                     */
                    std::string m_ciphertextBlob;
                    bool m_ciphertextBlobHasBeenSet;

                    /**
                     * <p>Users with encryption requirements import the initial vector for CBC encryption (custom string, length 16 characters).</p>
                     */
                    std::string m_iv;
                    bool m_ivHasBeenSet;

                    /**
                     * <p>Encryption algorithm (supports 'AES-256-CBC', 'SM4-GCM'), defaults to 'AES-256-CBC' if not passed.</p>
                     */
                    std::string m_algorithm;
                    bool m_algorithmHasBeenSet;

                    /**
                     * <p>Message digest generated by the SM4-GCM algorithm (used when verifying message integrity)</p>
                     */
                    std::vector<std::string> m_tagList;
                    bool m_tagListHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_FACEID_V20180301_MODEL_ENCRYPTION_H_
