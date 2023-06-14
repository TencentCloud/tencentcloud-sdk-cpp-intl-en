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

#ifndef TENCENTCLOUD_CVM_V20170312_MODEL_KEYPAIR_H_
#define TENCENTCLOUD_CVM_V20170312_MODEL_KEYPAIR_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cvm/v20170312/model/Tag.h>


namespace TencentCloud
{
    namespace Cvm
    {
        namespace V20170312
        {
            namespace Model
            {
                /**
                * Describes key pair information.
                */
                class KeyPair : public AbstractModel
                {
                public:
                    KeyPair();
                    ~KeyPair() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Key pair `ID`, the unique identifier of a key pair.
                     * @return KeyId Key pair `ID`, the unique identifier of a key pair.
                     * 
                     */
                    std::string GetKeyId() const;

                    /**
                     * 设置Key pair `ID`, the unique identifier of a key pair.
                     * @param _keyId Key pair `ID`, the unique identifier of a key pair.
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
                     * @return KeyName Key pair name.
                     * 
                     */
                    std::string GetKeyName() const;

                    /**
                     * 设置Key pair name.
                     * @param _keyName Key pair name.
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
                     * 获取`ID` of the project to which a key pair belongs.
                     * @return ProjectId `ID` of the project to which a key pair belongs.
                     * 
                     */
                    int64_t GetProjectId() const;

                    /**
                     * 设置`ID` of the project to which a key pair belongs.
                     * @param _projectId `ID` of the project to which a key pair belongs.
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
                     * @return Description Key pair description.
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置Key pair description.
                     * @param _description Key pair description.
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
                     * 获取Content of public key in a key pair.
                     * @return PublicKey Content of public key in a key pair.
                     * 
                     */
                    std::string GetPublicKey() const;

                    /**
                     * 设置Content of public key in a key pair.
                     * @param _publicKey Content of public key in a key pair.
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
                     * 获取Content of private key in a key pair. Tencent Cloud do not keep private keys. Please keep it properly.
                     * @return PrivateKey Content of private key in a key pair. Tencent Cloud do not keep private keys. Please keep it properly.
                     * 
                     */
                    std::string GetPrivateKey() const;

                    /**
                     * 设置Content of private key in a key pair. Tencent Cloud do not keep private keys. Please keep it properly.
                     * @param _privateKey Content of private key in a key pair. Tencent Cloud do not keep private keys. Please keep it properly.
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
                     * 获取`ID` list of instances associated with a key.
                     * @return AssociatedInstanceIds `ID` list of instances associated with a key.
                     * 
                     */
                    std::vector<std::string> GetAssociatedInstanceIds() const;

                    /**
                     * 设置`ID` list of instances associated with a key.
                     * @param _associatedInstanceIds `ID` list of instances associated with a key.
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
                     * 获取Creation time, which follows the `ISO8601` standard and uses `UTC` time in the format of `YYYY-MM-DDThh:mm:ssZ`.
                     * @return CreatedTime Creation time, which follows the `ISO8601` standard and uses `UTC` time in the format of `YYYY-MM-DDThh:mm:ssZ`.
                     * 
                     */
                    std::string GetCreatedTime() const;

                    /**
                     * 设置Creation time, which follows the `ISO8601` standard and uses `UTC` time in the format of `YYYY-MM-DDThh:mm:ssZ`.
                     * @param _createdTime Creation time, which follows the `ISO8601` standard and uses `UTC` time in the format of `YYYY-MM-DDThh:mm:ssZ`.
                     * 
                     */
                    void SetCreatedTime(const std::string& _createdTime);

                    /**
                     * 判断参数 CreatedTime 是否已赋值
                     * @return CreatedTime 是否已赋值
                     * 
                     */
                    bool CreatedTimeHasBeenSet() const;

                    /**
                     * 获取The list of tags bound to the key.
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * @return Tags The list of tags bound to the key.
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * 
                     */
                    std::vector<Tag> GetTags() const;

                    /**
                     * 设置The list of tags bound to the key.
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * @param _tags The list of tags bound to the key.
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetTags(const std::vector<Tag>& _tags);

                    /**
                     * 判断参数 Tags 是否已赋值
                     * @return Tags 是否已赋值
                     * 
                     */
                    bool TagsHasBeenSet() const;

                private:

                    /**
                     * Key pair `ID`, the unique identifier of a key pair.
                     */
                    std::string m_keyId;
                    bool m_keyIdHasBeenSet;

                    /**
                     * Key pair name.
                     */
                    std::string m_keyName;
                    bool m_keyNameHasBeenSet;

                    /**
                     * `ID` of the project to which a key pair belongs.
                     */
                    int64_t m_projectId;
                    bool m_projectIdHasBeenSet;

                    /**
                     * Key pair description.
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * Content of public key in a key pair.
                     */
                    std::string m_publicKey;
                    bool m_publicKeyHasBeenSet;

                    /**
                     * Content of private key in a key pair. Tencent Cloud do not keep private keys. Please keep it properly.
                     */
                    std::string m_privateKey;
                    bool m_privateKeyHasBeenSet;

                    /**
                     * `ID` list of instances associated with a key.
                     */
                    std::vector<std::string> m_associatedInstanceIds;
                    bool m_associatedInstanceIdsHasBeenSet;

                    /**
                     * Creation time, which follows the `ISO8601` standard and uses `UTC` time in the format of `YYYY-MM-DDThh:mm:ssZ`.
                     */
                    std::string m_createdTime;
                    bool m_createdTimeHasBeenSet;

                    /**
                     * The list of tags bound to the key.
Note: This field may return `null`, indicating that no valid value can be obtained.
                     */
                    std::vector<Tag> m_tags;
                    bool m_tagsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CVM_V20170312_MODEL_KEYPAIR_H_
