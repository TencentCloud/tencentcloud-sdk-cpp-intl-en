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

#ifndef TENCENTCLOUD_CVM_V20170312_MODEL_IMPORTKEYPAIRREQUEST_H_
#define TENCENTCLOUD_CVM_V20170312_MODEL_IMPORTKEYPAIRREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cvm/v20170312/model/TagSpecification.h>


namespace TencentCloud
{
    namespace Cvm
    {
        namespace V20170312
        {
            namespace Model
            {
                /**
                * ImportKeyPair request structure.
                */
                class ImportKeyPairRequest : public AbstractModel
                {
                public:
                    ImportKeyPairRequest();
                    ~ImportKeyPairRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Key pair name, which can contain numbers, letters, and underscores, with a maximum length of 25 characters.
                     * @return KeyName Key pair name, which can contain numbers, letters, and underscores, with a maximum length of 25 characters.
                     * 
                     */
                    std::string GetKeyName() const;

                    /**
                     * 设置Key pair name, which can contain numbers, letters, and underscores, with a maximum length of 25 characters.
                     * @param _keyName Key pair name, which can contain numbers, letters, and underscores, with a maximum length of 25 characters.
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
                     * 获取The project ID to which the key pair belongs after it is created. <br><br>You can obtain the project ID in the following ways: <br><li>Check the project list in the [Project management](https://console.cloud.tencent.com/project) page.<br><li>Call the `DescribeProject` API and view the `projectId` in the response.

If you want to use the default project, specify 0 for the parameter.
                     * @return ProjectId The project ID to which the key pair belongs after it is created. <br><br>You can obtain the project ID in the following ways: <br><li>Check the project list in the [Project management](https://console.cloud.tencent.com/project) page.<br><li>Call the `DescribeProject` API and view the `projectId` in the response.

If you want to use the default project, specify 0 for the parameter.
                     * 
                     */
                    int64_t GetProjectId() const;

                    /**
                     * 设置The project ID to which the key pair belongs after it is created. <br><br>You can obtain the project ID in the following ways: <br><li>Check the project list in the [Project management](https://console.cloud.tencent.com/project) page.<br><li>Call the `DescribeProject` API and view the `projectId` in the response.

If you want to use the default project, specify 0 for the parameter.
                     * @param _projectId The project ID to which the key pair belongs after it is created. <br><br>You can obtain the project ID in the following ways: <br><li>Check the project list in the [Project management](https://console.cloud.tencent.com/project) page.<br><li>Call the `DescribeProject` API and view the `projectId` in the response.

If you want to use the default project, specify 0 for the parameter.
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
                     * 获取Content of the public key in the key pair in the `OpenSSH RSA` format.
                     * @return PublicKey Content of the public key in the key pair in the `OpenSSH RSA` format.
                     * 
                     */
                    std::string GetPublicKey() const;

                    /**
                     * 设置Content of the public key in the key pair in the `OpenSSH RSA` format.
                     * @param _publicKey Content of the public key in the key pair in the `OpenSSH RSA` format.
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
                     * 获取Tag description list. This parameter is used to bind a tag to a key pair.
                     * @return TagSpecification Tag description list. This parameter is used to bind a tag to a key pair.
                     * 
                     */
                    std::vector<TagSpecification> GetTagSpecification() const;

                    /**
                     * 设置Tag description list. This parameter is used to bind a tag to a key pair.
                     * @param _tagSpecification Tag description list. This parameter is used to bind a tag to a key pair.
                     * 
                     */
                    void SetTagSpecification(const std::vector<TagSpecification>& _tagSpecification);

                    /**
                     * 判断参数 TagSpecification 是否已赋值
                     * @return TagSpecification 是否已赋值
                     * 
                     */
                    bool TagSpecificationHasBeenSet() const;

                private:

                    /**
                     * Key pair name, which can contain numbers, letters, and underscores, with a maximum length of 25 characters.
                     */
                    std::string m_keyName;
                    bool m_keyNameHasBeenSet;

                    /**
                     * The project ID to which the key pair belongs after it is created. <br><br>You can obtain the project ID in the following ways: <br><li>Check the project list in the [Project management](https://console.cloud.tencent.com/project) page.<br><li>Call the `DescribeProject` API and view the `projectId` in the response.

If you want to use the default project, specify 0 for the parameter.
                     */
                    int64_t m_projectId;
                    bool m_projectIdHasBeenSet;

                    /**
                     * Content of the public key in the key pair in the `OpenSSH RSA` format.
                     */
                    std::string m_publicKey;
                    bool m_publicKeyHasBeenSet;

                    /**
                     * Tag description list. This parameter is used to bind a tag to a key pair.
                     */
                    std::vector<TagSpecification> m_tagSpecification;
                    bool m_tagSpecificationHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CVM_V20170312_MODEL_IMPORTKEYPAIRREQUEST_H_
