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

#ifndef TENCENTCLOUD_KMS_V20190118_MODEL_WHITEBOXKEYINFO_H_
#define TENCENTCLOUD_KMS_V20190118_MODEL_WHITEBOXKEYINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Kms
    {
        namespace V20190118
        {
            namespace Model
            {
                /**
                * White-box key information
                */
                class WhiteboxKeyInfo : public AbstractModel
                {
                public:
                    WhiteboxKeyInfo();
                    ~WhiteboxKeyInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Globally unique white-box key ID
                     * @return KeyId Globally unique white-box key ID
                     */
                    std::string GetKeyId() const;

                    /**
                     * 设置Globally unique white-box key ID
                     * @param KeyId Globally unique white-box key ID
                     */
                    void SetKeyId(const std::string& _keyId);

                    /**
                     * 判断参数 KeyId 是否已赋值
                     * @return KeyId 是否已赋值
                     */
                    bool KeyIdHasBeenSet() const;

                    /**
                     * 获取Unique alias that makes a key more recognizable and understandable. This parameter should be 1 to 60 letters, digits, `-`, and `_`; it must begin with a letter or digit and cannot be left empty.
                     * @return Alias Unique alias that makes a key more recognizable and understandable. This parameter should be 1 to 60 letters, digits, `-`, and `_`; it must begin with a letter or digit and cannot be left empty.
                     */
                    std::string GetAlias() const;

                    /**
                     * 设置Unique alias that makes a key more recognizable and understandable. This parameter should be 1 to 60 letters, digits, `-`, and `_`; it must begin with a letter or digit and cannot be left empty.
                     * @param Alias Unique alias that makes a key more recognizable and understandable. This parameter should be 1 to 60 letters, digits, `-`, and `_`; it must begin with a letter or digit and cannot be left empty.
                     */
                    void SetAlias(const std::string& _alias);

                    /**
                     * 判断参数 Alias 是否已赋值
                     * @return Alias 是否已赋值
                     */
                    bool AliasHasBeenSet() const;

                    /**
                     * 获取Creator
                     * @return CreatorUin Creator
                     */
                    uint64_t GetCreatorUin() const;

                    /**
                     * 设置Creator
                     * @param CreatorUin Creator
                     */
                    void SetCreatorUin(const uint64_t& _creatorUin);

                    /**
                     * 判断参数 CreatorUin 是否已赋值
                     * @return CreatorUin 是否已赋值
                     */
                    bool CreatorUinHasBeenSet() const;

                    /**
                     * 获取Key description information
                     * @return Description Key description information
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置Key description information
                     * @param Description Key description information
                     */
                    void SetDescription(const std::string& _description);

                    /**
                     * 判断参数 Description 是否已赋值
                     * @return Description 是否已赋值
                     */
                    bool DescriptionHasBeenSet() const;

                    /**
                     * 获取Key creation time in Unix timestamp
                     * @return CreateTime Key creation time in Unix timestamp
                     */
                    uint64_t GetCreateTime() const;

                    /**
                     * 设置Key creation time in Unix timestamp
                     * @param CreateTime Key creation time in Unix timestamp
                     */
                    void SetCreateTime(const uint64_t& _createTime);

                    /**
                     * 判断参数 CreateTime 是否已赋值
                     * @return CreateTime 是否已赋值
                     */
                    bool CreateTimeHasBeenSet() const;

                    /**
                     * 获取White-box key status. Valid values: Enabled, Disabled
                     * @return Status White-box key status. Valid values: Enabled, Disabled
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置White-box key status. Valid values: Enabled, Disabled
                     * @param Status White-box key status. Valid values: Enabled, Disabled
                     */
                    void SetStatus(const std::string& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取Creator
                     * @return OwnerUin Creator
                     */
                    uint64_t GetOwnerUin() const;

                    /**
                     * 设置Creator
                     * @param OwnerUin Creator
                     */
                    void SetOwnerUin(const uint64_t& _ownerUin);

                    /**
                     * 判断参数 OwnerUin 是否已赋值
                     * @return OwnerUin 是否已赋值
                     */
                    bool OwnerUinHasBeenSet() const;

                    /**
                     * 获取Key algorithm type
                     * @return Algorithm Key algorithm type
                     */
                    std::string GetAlgorithm() const;

                    /**
                     * 设置Key algorithm type
                     * @param Algorithm Key algorithm type
                     */
                    void SetAlgorithm(const std::string& _algorithm);

                    /**
                     * 判断参数 Algorithm 是否已赋值
                     * @return Algorithm 是否已赋值
                     */
                    bool AlgorithmHasBeenSet() const;

                    /**
                     * 获取Base64-encoded white-box encryption key
                     * @return EncryptKey Base64-encoded white-box encryption key
                     */
                    std::string GetEncryptKey() const;

                    /**
                     * 设置Base64-encoded white-box encryption key
                     * @param EncryptKey Base64-encoded white-box encryption key
                     */
                    void SetEncryptKey(const std::string& _encryptKey);

                    /**
                     * 判断参数 EncryptKey 是否已赋值
                     * @return EncryptKey 是否已赋值
                     */
                    bool EncryptKeyHasBeenSet() const;

                    /**
                     * 获取Base64-encoded white-box decryption key
                     * @return DecryptKey Base64-encoded white-box decryption key
                     */
                    std::string GetDecryptKey() const;

                    /**
                     * 设置Base64-encoded white-box decryption key
                     * @param DecryptKey Base64-encoded white-box decryption key
                     */
                    void SetDecryptKey(const std::string& _decryptKey);

                    /**
                     * 判断参数 DecryptKey 是否已赋值
                     * @return DecryptKey 是否已赋值
                     */
                    bool DecryptKeyHasBeenSet() const;

                    /**
                     * 获取Resource ID in the format of `creatorUin/$creatorUin/$keyId`.
                     * @return ResourceId Resource ID in the format of `creatorUin/$creatorUin/$keyId`.
                     */
                    std::string GetResourceId() const;

                    /**
                     * 设置Resource ID in the format of `creatorUin/$creatorUin/$keyId`.
                     * @param ResourceId Resource ID in the format of `creatorUin/$creatorUin/$keyId`.
                     */
                    void SetResourceId(const std::string& _resourceId);

                    /**
                     * 判断参数 ResourceId 是否已赋值
                     * @return ResourceId 是否已赋值
                     */
                    bool ResourceIdHasBeenSet() const;

                private:

                    /**
                     * Globally unique white-box key ID
                     */
                    std::string m_keyId;
                    bool m_keyIdHasBeenSet;

                    /**
                     * Unique alias that makes a key more recognizable and understandable. This parameter should be 1 to 60 letters, digits, `-`, and `_`; it must begin with a letter or digit and cannot be left empty.
                     */
                    std::string m_alias;
                    bool m_aliasHasBeenSet;

                    /**
                     * Creator
                     */
                    uint64_t m_creatorUin;
                    bool m_creatorUinHasBeenSet;

                    /**
                     * Key description information
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * Key creation time in Unix timestamp
                     */
                    uint64_t m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * White-box key status. Valid values: Enabled, Disabled
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * Creator
                     */
                    uint64_t m_ownerUin;
                    bool m_ownerUinHasBeenSet;

                    /**
                     * Key algorithm type
                     */
                    std::string m_algorithm;
                    bool m_algorithmHasBeenSet;

                    /**
                     * Base64-encoded white-box encryption key
                     */
                    std::string m_encryptKey;
                    bool m_encryptKeyHasBeenSet;

                    /**
                     * Base64-encoded white-box decryption key
                     */
                    std::string m_decryptKey;
                    bool m_decryptKeyHasBeenSet;

                    /**
                     * Resource ID in the format of `creatorUin/$creatorUin/$keyId`.
                     */
                    std::string m_resourceId;
                    bool m_resourceIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_KMS_V20190118_MODEL_WHITEBOXKEYINFO_H_
