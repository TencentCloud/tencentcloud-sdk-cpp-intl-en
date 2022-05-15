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

#ifndef TENCENTCLOUD_POSTGRES_V20170312_MODEL_ENCRYPTIONKEY_H_
#define TENCENTCLOUD_POSTGRES_V20170312_MODEL_ENCRYPTIONKEY_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Postgres
    {
        namespace V20170312
        {
            namespace Model
            {
                /**
                * KMS key information
                */
                class EncryptionKey : public AbstractModel
                {
                public:
                    EncryptionKey();
                    ~EncryptionKey() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Encrypted KeyId of KMS instance
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * @return KeyId Encrypted KeyId of KMS instance
Note: This field may return `null`, indicating that no valid value can be obtained.
                     */
                    std::string GetKeyId() const;

                    /**
                     * 设置Encrypted KeyId of KMS instance
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * @param KeyId Encrypted KeyId of KMS instance
Note: This field may return `null`, indicating that no valid value can be obtained.
                     */
                    void SetKeyId(const std::string& _keyId);

                    /**
                     * 判断参数 KeyId 是否已赋值
                     * @return KeyId 是否已赋值
                     */
                    bool KeyIdHasBeenSet() const;

                    /**
                     * 获取Encryption key alias of KMS instance 
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * @return KeyAlias Encryption key alias of KMS instance 
Note: This field may return `null`, indicating that no valid value can be obtained.
                     */
                    std::string GetKeyAlias() const;

                    /**
                     * 设置Encryption key alias of KMS instance 
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * @param KeyAlias Encryption key alias of KMS instance 
Note: This field may return `null`, indicating that no valid value can be obtained.
                     */
                    void SetKeyAlias(const std::string& _keyAlias);

                    /**
                     * 判断参数 KeyAlias 是否已赋值
                     * @return KeyAlias 是否已赋值
                     */
                    bool KeyAliasHasBeenSet() const;

                    /**
                     * 获取Instance DEK ciphertext
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * @return DEKCipherTextBlob Instance DEK ciphertext
Note: This field may return `null`, indicating that no valid value can be obtained.
                     */
                    std::string GetDEKCipherTextBlob() const;

                    /**
                     * 设置Instance DEK ciphertext
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * @param DEKCipherTextBlob Instance DEK ciphertext
Note: This field may return `null`, indicating that no valid value can be obtained.
                     */
                    void SetDEKCipherTextBlob(const std::string& _dEKCipherTextBlob);

                    /**
                     * 判断参数 DEKCipherTextBlob 是否已赋值
                     * @return DEKCipherTextBlob 是否已赋值
                     */
                    bool DEKCipherTextBlobHasBeenSet() const;

                    /**
                     * 获取Whether the key is enabled. Valid values: `1` (yes), `0` (no)
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * @return IsEnabled Whether the key is enabled. Valid values: `1` (yes), `0` (no)
Note: This field may return `null`, indicating that no valid value can be obtained.
                     */
                    int64_t GetIsEnabled() const;

                    /**
                     * 设置Whether the key is enabled. Valid values: `1` (yes), `0` (no)
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * @param IsEnabled Whether the key is enabled. Valid values: `1` (yes), `0` (no)
Note: This field may return `null`, indicating that no valid value can be obtained.
                     */
                    void SetIsEnabled(const int64_t& _isEnabled);

                    /**
                     * 判断参数 IsEnabled 是否已赋值
                     * @return IsEnabled 是否已赋值
                     */
                    bool IsEnabledHasBeenSet() const;

                    /**
                     * 获取Region where KMS key resides
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * @return KeyRegion Region where KMS key resides
Note: This field may return `null`, indicating that no valid value can be obtained.
                     */
                    std::string GetKeyRegion() const;

                    /**
                     * 设置Region where KMS key resides
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * @param KeyRegion Region where KMS key resides
Note: This field may return `null`, indicating that no valid value can be obtained.
                     */
                    void SetKeyRegion(const std::string& _keyRegion);

                    /**
                     * 判断参数 KeyRegion 是否已赋值
                     * @return KeyRegion 是否已赋值
                     */
                    bool KeyRegionHasBeenSet() const;

                    /**
                     * 获取DEK key creation time
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * @return CreateTime DEK key creation time
Note: This field may return `null`, indicating that no valid value can be obtained.
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置DEK key creation time
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * @param CreateTime DEK key creation time
Note: This field may return `null`, indicating that no valid value can be obtained.
                     */
                    void SetCreateTime(const std::string& _createTime);

                    /**
                     * 判断参数 CreateTime 是否已赋值
                     * @return CreateTime 是否已赋值
                     */
                    bool CreateTimeHasBeenSet() const;

                private:

                    /**
                     * Encrypted KeyId of KMS instance
Note: This field may return `null`, indicating that no valid value can be obtained.
                     */
                    std::string m_keyId;
                    bool m_keyIdHasBeenSet;

                    /**
                     * Encryption key alias of KMS instance 
Note: This field may return `null`, indicating that no valid value can be obtained.
                     */
                    std::string m_keyAlias;
                    bool m_keyAliasHasBeenSet;

                    /**
                     * Instance DEK ciphertext
Note: This field may return `null`, indicating that no valid value can be obtained.
                     */
                    std::string m_dEKCipherTextBlob;
                    bool m_dEKCipherTextBlobHasBeenSet;

                    /**
                     * Whether the key is enabled. Valid values: `1` (yes), `0` (no)
Note: This field may return `null`, indicating that no valid value can be obtained.
                     */
                    int64_t m_isEnabled;
                    bool m_isEnabledHasBeenSet;

                    /**
                     * Region where KMS key resides
Note: This field may return `null`, indicating that no valid value can be obtained.
                     */
                    std::string m_keyRegion;
                    bool m_keyRegionHasBeenSet;

                    /**
                     * DEK key creation time
Note: This field may return `null`, indicating that no valid value can be obtained.
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_POSTGRES_V20170312_MODEL_ENCRYPTIONKEY_H_
