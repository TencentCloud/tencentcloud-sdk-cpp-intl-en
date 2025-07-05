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

#ifndef TENCENTCLOUD_ECM_V20190719_MODEL_KEYPAIR_H_
#define TENCENTCLOUD_ECM_V20190719_MODEL_KEYPAIR_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Ecm
    {
        namespace V20190719
        {
            namespace Model
            {
                /**
                * Key pair information
                */
                class KeyPair : public AbstractModel
                {
                public:
                    KeyPair();
                    ~KeyPair() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Key pair ID, which is the unique identifier of a key pair.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return KeyId Key pair ID, which is the unique identifier of a key pair.
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetKeyId() const;

                    /**
                     * 设置Key pair ID, which is the unique identifier of a key pair.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param _keyId Key pair ID, which is the unique identifier of a key pair.
Note: this field may return null, indicating that no valid values can be obtained.
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
                     * 获取Key pair name.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return KeyName Key pair name.
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetKeyName() const;

                    /**
                     * 设置Key pair name.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param _keyName Key pair name.
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetKeyName(const std::string& _keyName);

                    /**
                     * 判断参数 KeyName 是否已赋值
                     * @return KeyName 是否已赋值
                     * 
                     */
                    bool KeyNameHasBeenSet() const;

                    /**
                     * 获取Project ID of the key pair.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return ProjectId Project ID of the key pair.
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    int64_t GetProjectId() const;

                    /**
                     * 设置Project ID of the key pair.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param _projectId Project ID of the key pair.
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetProjectId(const int64_t& _projectId);

                    /**
                     * 判断参数 ProjectId 是否已赋值
                     * @return ProjectId 是否已赋值
                     * 
                     */
                    bool ProjectIdHasBeenSet() const;

                    /**
                     * 获取Key pair description.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return Description Key pair description.
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置Key pair description.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param _description Key pair description.
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetDescription(const std::string& _description);

                    /**
                     * 判断参数 Description 是否已赋值
                     * @return Description 是否已赋值
                     * 
                     */
                    bool DescriptionHasBeenSet() const;

                    /**
                     * 获取Public key (in plain text) of key pair.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return PublicKey Public key (in plain text) of key pair.
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetPublicKey() const;

                    /**
                     * 设置Public key (in plain text) of key pair.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param _publicKey Public key (in plain text) of key pair.
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetPublicKey(const std::string& _publicKey);

                    /**
                     * 判断参数 PublicKey 是否已赋值
                     * @return PublicKey 是否已赋值
                     * 
                     */
                    bool PublicKeyHasBeenSet() const;

                    /**
                     * 获取Private key (in plaintext) of a key pair. Tencent Cloud do not store private keys. Therefore, keep them secure.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return PrivateKey Private key (in plaintext) of a key pair. Tencent Cloud do not store private keys. Therefore, keep them secure.
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetPrivateKey() const;

                    /**
                     * 设置Private key (in plaintext) of a key pair. Tencent Cloud do not store private keys. Therefore, keep them secure.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param _privateKey Private key (in plaintext) of a key pair. Tencent Cloud do not store private keys. Therefore, keep them secure.
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetPrivateKey(const std::string& _privateKey);

                    /**
                     * 判断参数 PrivateKey 是否已赋值
                     * @return PrivateKey 是否已赋值
                     * 
                     */
                    bool PrivateKeyHasBeenSet() const;

                    /**
                     * 获取List of IDs of the instances associated with the key.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return AssociatedInstanceIds List of IDs of the instances associated with the key.
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::vector<std::string> GetAssociatedInstanceIds() const;

                    /**
                     * 设置List of IDs of the instances associated with the key.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param _associatedInstanceIds List of IDs of the instances associated with the key.
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetAssociatedInstanceIds(const std::vector<std::string>& _associatedInstanceIds);

                    /**
                     * 判断参数 AssociatedInstanceIds 是否已赋值
                     * @return AssociatedInstanceIds 是否已赋值
                     * 
                     */
                    bool AssociatedInstanceIdsHasBeenSet() const;

                    /**
                     * 获取Creation time in the format of YYYY-MM-DDThh:mm:ssZ according to ISO 8601 standard. UTC time is used.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return CreatedTime Creation time in the format of YYYY-MM-DDThh:mm:ssZ according to ISO 8601 standard. UTC time is used.
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetCreatedTime() const;

                    /**
                     * 设置Creation time in the format of YYYY-MM-DDThh:mm:ssZ according to ISO 8601 standard. UTC time is used.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param _createdTime Creation time in the format of YYYY-MM-DDThh:mm:ssZ according to ISO 8601 standard. UTC time is used.
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetCreatedTime(const std::string& _createdTime);

                    /**
                     * 判断参数 CreatedTime 是否已赋值
                     * @return CreatedTime 是否已赋值
                     * 
                     */
                    bool CreatedTimeHasBeenSet() const;

                private:

                    /**
                     * Key pair ID, which is the unique identifier of a key pair.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_keyId;
                    bool m_keyIdHasBeenSet;

                    /**
                     * Key pair name.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_keyName;
                    bool m_keyNameHasBeenSet;

                    /**
                     * Project ID of the key pair.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t m_projectId;
                    bool m_projectIdHasBeenSet;

                    /**
                     * Key pair description.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * Public key (in plain text) of key pair.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_publicKey;
                    bool m_publicKeyHasBeenSet;

                    /**
                     * Private key (in plaintext) of a key pair. Tencent Cloud do not store private keys. Therefore, keep them secure.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_privateKey;
                    bool m_privateKeyHasBeenSet;

                    /**
                     * List of IDs of the instances associated with the key.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<std::string> m_associatedInstanceIds;
                    bool m_associatedInstanceIdsHasBeenSet;

                    /**
                     * Creation time in the format of YYYY-MM-DDThh:mm:ssZ according to ISO 8601 standard. UTC time is used.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_createdTime;
                    bool m_createdTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ECM_V20190719_MODEL_KEYPAIR_H_
