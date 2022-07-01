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

#ifndef TENCENTCLOUD_TEO_V20220106_MODEL_DNSSECINFO_H_
#define TENCENTCLOUD_TEO_V20220106_MODEL_DNSSECINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Teo
    {
        namespace V20220106
        {
            namespace Model
            {
                /**
                * DNSSEC information
                */
                class DnssecInfo : public AbstractModel
                {
                public:
                    DnssecInfo();
                    ~DnssecInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Flag
                     * @return Flags Flag
                     */
                    int64_t GetFlags() const;

                    /**
                     * 设置Flag
                     * @param Flags Flag
                     */
                    void SetFlags(const int64_t& _flags);

                    /**
                     * 判断参数 Flags 是否已赋值
                     * @return Flags 是否已赋值
                     */
                    bool FlagsHasBeenSet() const;

                    /**
                     * 获取Encryption algorithm
                     * @return Algorithm Encryption algorithm
                     */
                    std::string GetAlgorithm() const;

                    /**
                     * 设置Encryption algorithm
                     * @param Algorithm Encryption algorithm
                     */
                    void SetAlgorithm(const std::string& _algorithm);

                    /**
                     * 判断参数 Algorithm 是否已赋值
                     * @return Algorithm 是否已赋值
                     */
                    bool AlgorithmHasBeenSet() const;

                    /**
                     * 获取Encryption type
                     * @return KeyType Encryption type
                     */
                    std::string GetKeyType() const;

                    /**
                     * 设置Encryption type
                     * @param KeyType Encryption type
                     */
                    void SetKeyType(const std::string& _keyType);

                    /**
                     * 判断参数 KeyType 是否已赋值
                     * @return KeyType 是否已赋值
                     */
                    bool KeyTypeHasBeenSet() const;

                    /**
                     * 获取Digest type
                     * @return DigestType Digest type
                     */
                    std::string GetDigestType() const;

                    /**
                     * 设置Digest type
                     * @param DigestType Digest type
                     */
                    void SetDigestType(const std::string& _digestType);

                    /**
                     * 判断参数 DigestType 是否已赋值
                     * @return DigestType 是否已赋值
                     */
                    bool DigestTypeHasBeenSet() const;

                    /**
                     * 获取Digest algorithm
                     * @return DigestAlgorithm Digest algorithm
                     */
                    std::string GetDigestAlgorithm() const;

                    /**
                     * 设置Digest algorithm
                     * @param DigestAlgorithm Digest algorithm
                     */
                    void SetDigestAlgorithm(const std::string& _digestAlgorithm);

                    /**
                     * 判断参数 DigestAlgorithm 是否已赋值
                     * @return DigestAlgorithm 是否已赋值
                     */
                    bool DigestAlgorithmHasBeenSet() const;

                    /**
                     * 获取Digest message
                     * @return Digest Digest message
                     */
                    std::string GetDigest() const;

                    /**
                     * 设置Digest message
                     * @param Digest Digest message
                     */
                    void SetDigest(const std::string& _digest);

                    /**
                     * 判断参数 Digest 是否已赋值
                     * @return Digest 是否已赋值
                     */
                    bool DigestHasBeenSet() const;

                    /**
                     * 获取DS record value
                     * @return DS DS record value
                     */
                    std::string GetDS() const;

                    /**
                     * 设置DS record value
                     * @param DS DS record value
                     */
                    void SetDS(const std::string& _dS);

                    /**
                     * 判断参数 DS 是否已赋值
                     * @return DS 是否已赋值
                     */
                    bool DSHasBeenSet() const;

                    /**
                     * 获取Key tag
                     * @return KeyTag Key tag
                     */
                    int64_t GetKeyTag() const;

                    /**
                     * 设置Key tag
                     * @param KeyTag Key tag
                     */
                    void SetKeyTag(const int64_t& _keyTag);

                    /**
                     * 判断参数 KeyTag 是否已赋值
                     * @return KeyTag 是否已赋值
                     */
                    bool KeyTagHasBeenSet() const;

                    /**
                     * 获取Public key
                     * @return PublicKey Public key
                     */
                    std::string GetPublicKey() const;

                    /**
                     * 设置Public key
                     * @param PublicKey Public key
                     */
                    void SetPublicKey(const std::string& _publicKey);

                    /**
                     * 判断参数 PublicKey 是否已赋值
                     * @return PublicKey 是否已赋值
                     */
                    bool PublicKeyHasBeenSet() const;

                private:

                    /**
                     * Flag
                     */
                    int64_t m_flags;
                    bool m_flagsHasBeenSet;

                    /**
                     * Encryption algorithm
                     */
                    std::string m_algorithm;
                    bool m_algorithmHasBeenSet;

                    /**
                     * Encryption type
                     */
                    std::string m_keyType;
                    bool m_keyTypeHasBeenSet;

                    /**
                     * Digest type
                     */
                    std::string m_digestType;
                    bool m_digestTypeHasBeenSet;

                    /**
                     * Digest algorithm
                     */
                    std::string m_digestAlgorithm;
                    bool m_digestAlgorithmHasBeenSet;

                    /**
                     * Digest message
                     */
                    std::string m_digest;
                    bool m_digestHasBeenSet;

                    /**
                     * DS record value
                     */
                    std::string m_dS;
                    bool m_dSHasBeenSet;

                    /**
                     * Key tag
                     */
                    int64_t m_keyTag;
                    bool m_keyTagHasBeenSet;

                    /**
                     * Public key
                     */
                    std::string m_publicKey;
                    bool m_publicKeyHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220106_MODEL_DNSSECINFO_H_
