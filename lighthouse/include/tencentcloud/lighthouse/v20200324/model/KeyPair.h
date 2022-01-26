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

#ifndef TENCENTCLOUD_LIGHTHOUSE_V20200324_MODEL_KEYPAIR_H_
#define TENCENTCLOUD_LIGHTHOUSE_V20200324_MODEL_KEYPAIR_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Lighthouse
    {
        namespace V20200324
        {
            namespace Model
            {
                /**
                * Key pair information.
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
                     * @return KeyId Key pair ID, which is the unique identifier of a key pair.
                     */
                    std::string GetKeyId() const;

                    /**
                     * 设置Key pair ID, which is the unique identifier of a key pair.
                     * @param KeyId Key pair ID, which is the unique identifier of a key pair.
                     */
                    void SetKeyId(const std::string& _keyId);

                    /**
                     * 判断参数 KeyId 是否已赋值
                     * @return KeyId 是否已赋值
                     */
                    bool KeyIdHasBeenSet() const;

                    /**
                     * 获取Key pair name.
                     * @return KeyName Key pair name.
                     */
                    std::string GetKeyName() const;

                    /**
                     * 设置Key pair name.
                     * @param KeyName Key pair name.
                     */
                    void SetKeyName(const std::string& _keyName);

                    /**
                     * 判断参数 KeyName 是否已赋值
                     * @return KeyName 是否已赋值
                     */
                    bool KeyNameHasBeenSet() const;

                    /**
                     * 获取Public key (in plain text) of key pair.
                     * @return PublicKey Public key (in plain text) of key pair.
                     */
                    std::string GetPublicKey() const;

                    /**
                     * 设置Public key (in plain text) of key pair.
                     * @param PublicKey Public key (in plain text) of key pair.
                     */
                    void SetPublicKey(const std::string& _publicKey);

                    /**
                     * 判断参数 PublicKey 是否已赋值
                     * @return PublicKey 是否已赋值
                     */
                    bool PublicKeyHasBeenSet() const;

                    /**
                     * 获取List of IDs of instances associated with the key pair.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return AssociatedInstanceIds List of IDs of instances associated with the key pair.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<std::string> GetAssociatedInstanceIds() const;

                    /**
                     * 设置List of IDs of instances associated with the key pair.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param AssociatedInstanceIds List of IDs of instances associated with the key pair.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    void SetAssociatedInstanceIds(const std::vector<std::string>& _associatedInstanceIds);

                    /**
                     * 判断参数 AssociatedInstanceIds 是否已赋值
                     * @return AssociatedInstanceIds 是否已赋值
                     */
                    bool AssociatedInstanceIdsHasBeenSet() const;

                    /**
                     * 获取Creation time in the format of YYYY-MM-DDThh:mm:ssZ according to ISO 8601 standard. UTC time is used
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return CreatedTime Creation time in the format of YYYY-MM-DDThh:mm:ssZ according to ISO 8601 standard. UTC time is used
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string GetCreatedTime() const;

                    /**
                     * 设置Creation time in the format of YYYY-MM-DDThh:mm:ssZ according to ISO 8601 standard. UTC time is used
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param CreatedTime Creation time in the format of YYYY-MM-DDThh:mm:ssZ according to ISO 8601 standard. UTC time is used
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    void SetCreatedTime(const std::string& _createdTime);

                    /**
                     * 判断参数 CreatedTime 是否已赋值
                     * @return CreatedTime 是否已赋值
                     */
                    bool CreatedTimeHasBeenSet() const;

                    /**
                     * 获取Private key of key pair.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return PrivateKey Private key of key pair.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string GetPrivateKey() const;

                    /**
                     * 设置Private key of key pair.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param PrivateKey Private key of key pair.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    void SetPrivateKey(const std::string& _privateKey);

                    /**
                     * 判断参数 PrivateKey 是否已赋值
                     * @return PrivateKey 是否已赋值
                     */
                    bool PrivateKeyHasBeenSet() const;

                private:

                    /**
                     * Key pair ID, which is the unique identifier of a key pair.
                     */
                    std::string m_keyId;
                    bool m_keyIdHasBeenSet;

                    /**
                     * Key pair name.
                     */
                    std::string m_keyName;
                    bool m_keyNameHasBeenSet;

                    /**
                     * Public key (in plain text) of key pair.
                     */
                    std::string m_publicKey;
                    bool m_publicKeyHasBeenSet;

                    /**
                     * List of IDs of instances associated with the key pair.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<std::string> m_associatedInstanceIds;
                    bool m_associatedInstanceIdsHasBeenSet;

                    /**
                     * Creation time in the format of YYYY-MM-DDThh:mm:ssZ according to ISO 8601 standard. UTC time is used
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_createdTime;
                    bool m_createdTimeHasBeenSet;

                    /**
                     * Private key of key pair.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_privateKey;
                    bool m_privateKeyHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_LIGHTHOUSE_V20200324_MODEL_KEYPAIR_H_
