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
                     * 获取Specifies the KeyId for KMS instance encryption.
                     * @return KeyId Specifies the KeyId for KMS instance encryption.
                     * 
                     */
                    std::string GetKeyId() const;

                    /**
                     * 设置Specifies the KeyId for KMS instance encryption.
                     * @param _keyId Specifies the KeyId for KMS instance encryption.
                     * 
                     */
                    void SetKeyId(const std::string& _keyId);

                    /**
                     * 判断参数 KeyId 是否已赋值
                     * @return KeyId 是否已赋值
                     * 
                     */
                    bool KeyIdHasBeenSet() const;

                    /**
                     * 获取Alias name of the KMS instance encryption Key.
                     * @return KeyAlias Alias name of the KMS instance encryption Key.
                     * 
                     */
                    std::string GetKeyAlias() const;

                    /**
                     * 设置Alias name of the KMS instance encryption Key.
                     * @param _keyAlias Alias name of the KMS instance encryption Key.
                     * 
                     */
                    void SetKeyAlias(const std::string& _keyAlias);

                    /**
                     * 判断参数 KeyAlias 是否已赋值
                     * @return KeyAlias 是否已赋值
                     * 
                     */
                    bool KeyAliasHasBeenSet() const;

                    /**
                     * 获取Specifies the ciphertext of the instance encryption key DEK.
                     * @return DEKCipherTextBlob Specifies the ciphertext of the instance encryption key DEK.
                     * 
                     */
                    std::string GetDEKCipherTextBlob() const;

                    /**
                     * 设置Specifies the ciphertext of the instance encryption key DEK.
                     * @param _dEKCipherTextBlob Specifies the ciphertext of the instance encryption key DEK.
                     * 
                     */
                    void SetDEKCipherTextBlob(const std::string& _dEKCipherTextBlob);

                    /**
                     * 判断参数 DEKCipherTextBlob 是否已赋值
                     * @return DEKCipherTextBlob 是否已赋值
                     * 
                     */
                    bool DEKCipherTextBlobHasBeenSet() const;

                    /**
                     * 获取Whether the key is enabled. valid values: 1 (enabled), 0 (disabled).
                     * @return IsEnabled Whether the key is enabled. valid values: 1 (enabled), 0 (disabled).
                     * 
                     */
                    int64_t GetIsEnabled() const;

                    /**
                     * 设置Whether the key is enabled. valid values: 1 (enabled), 0 (disabled).
                     * @param _isEnabled Whether the key is enabled. valid values: 1 (enabled), 0 (disabled).
                     * 
                     */
                    void SetIsEnabled(const int64_t& _isEnabled);

                    /**
                     * 判断参数 IsEnabled 是否已赋值
                     * @return IsEnabled 是否已赋值
                     * 
                     */
                    bool IsEnabledHasBeenSet() const;

                    /**
                     * 获取Specifies the region of the KMS key.
                     * @return KeyRegion Specifies the region of the KMS key.
                     * 
                     */
                    std::string GetKeyRegion() const;

                    /**
                     * 设置Specifies the region of the KMS key.
                     * @param _keyRegion Specifies the region of the KMS key.
                     * 
                     */
                    void SetKeyRegion(const std::string& _keyRegion);

                    /**
                     * 判断参数 KeyRegion 是否已赋值
                     * @return KeyRegion 是否已赋值
                     * 
                     */
                    bool KeyRegionHasBeenSet() const;

                    /**
                     * 获取Creation time of the DEK key.
                     * @return CreateTime Creation time of the DEK key.
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置Creation time of the DEK key.
                     * @param _createTime Creation time of the DEK key.
                     * 
                     */
                    void SetCreateTime(const std::string& _createTime);

                    /**
                     * 判断参数 CreateTime 是否已赋值
                     * @return CreateTime 是否已赋值
                     * 
                     */
                    bool CreateTimeHasBeenSet() const;

                    /**
                     * 获取Specifies the Id of the KMS service cluster where the key resides. being empty indicates the key is in the default KMS cluster. a non-empty value indicates the key is in the specified KMS service cluster.
                     * @return KMSClusterId Specifies the Id of the KMS service cluster where the key resides. being empty indicates the key is in the default KMS cluster. a non-empty value indicates the key is in the specified KMS service cluster.
                     * 
                     */
                    std::string GetKMSClusterId() const;

                    /**
                     * 设置Specifies the Id of the KMS service cluster where the key resides. being empty indicates the key is in the default KMS cluster. a non-empty value indicates the key is in the specified KMS service cluster.
                     * @param _kMSClusterId Specifies the Id of the KMS service cluster where the key resides. being empty indicates the key is in the default KMS cluster. a non-empty value indicates the key is in the specified KMS service cluster.
                     * 
                     */
                    void SetKMSClusterId(const std::string& _kMSClusterId);

                    /**
                     * 判断参数 KMSClusterId 是否已赋值
                     * @return KMSClusterId 是否已赋值
                     * 
                     */
                    bool KMSClusterIdHasBeenSet() const;

                private:

                    /**
                     * Specifies the KeyId for KMS instance encryption.
                     */
                    std::string m_keyId;
                    bool m_keyIdHasBeenSet;

                    /**
                     * Alias name of the KMS instance encryption Key.
                     */
                    std::string m_keyAlias;
                    bool m_keyAliasHasBeenSet;

                    /**
                     * Specifies the ciphertext of the instance encryption key DEK.
                     */
                    std::string m_dEKCipherTextBlob;
                    bool m_dEKCipherTextBlobHasBeenSet;

                    /**
                     * Whether the key is enabled. valid values: 1 (enabled), 0 (disabled).
                     */
                    int64_t m_isEnabled;
                    bool m_isEnabledHasBeenSet;

                    /**
                     * Specifies the region of the KMS key.
                     */
                    std::string m_keyRegion;
                    bool m_keyRegionHasBeenSet;

                    /**
                     * Creation time of the DEK key.
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * Specifies the Id of the KMS service cluster where the key resides. being empty indicates the key is in the default KMS cluster. a non-empty value indicates the key is in the specified KMS service cluster.
                     */
                    std::string m_kMSClusterId;
                    bool m_kMSClusterIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_POSTGRES_V20170312_MODEL_ENCRYPTIONKEY_H_
