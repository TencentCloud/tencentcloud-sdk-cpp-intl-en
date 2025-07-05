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

#ifndef TENCENTCLOUD_SSM_V20190923_MODEL_GETSSHKEYPAIRVALUERESPONSE_H_
#define TENCENTCLOUD_SSM_V20190923_MODEL_GETSSHKEYPAIRVALUERESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Ssm
    {
        namespace V20190923
        {
            namespace Model
            {
                /**
                * GetSSHKeyPairValue response structure.
                */
                class GetSSHKeyPairValueResponse : public AbstractModel
                {
                public:
                    GetSSHKeyPairValueResponse();
                    ~GetSSHKeyPairValueResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取ID of the SSH key.
                     * @return SSHKeyID ID of the SSH key.
                     * 
                     */
                    std::string GetSSHKeyID() const;

                    /**
                     * 判断参数 SSHKeyID 是否已赋值
                     * @return SSHKeyID 是否已赋值
                     * 
                     */
                    bool SSHKeyIDHasBeenSet() const;

                    /**
                     * 获取Plaintext value of the Base64-encoded public key.
                     * @return PublicKey Plaintext value of the Base64-encoded public key.
                     * 
                     */
                    std::string GetPublicKey() const;

                    /**
                     * 判断参数 PublicKey 是否已赋值
                     * @return PublicKey 是否已赋值
                     * 
                     */
                    bool PublicKeyHasBeenSet() const;

                    /**
                     * 获取Plaintext value of the Base64-encoded private key.
                     * @return PrivateKey Plaintext value of the Base64-encoded private key.
                     * 
                     */
                    std::string GetPrivateKey() const;

                    /**
                     * 判断参数 PrivateKey 是否已赋值
                     * @return PrivateKey 是否已赋值
                     * 
                     */
                    bool PrivateKeyHasBeenSet() const;

                    /**
                     * 获取ID of the project to which the SSH key belongs.
                     * @return ProjectID ID of the project to which the SSH key belongs.
                     * 
                     */
                    int64_t GetProjectID() const;

                    /**
                     * 判断参数 ProjectID 是否已赋值
                     * @return ProjectID 是否已赋值
                     * 
                     */
                    bool ProjectIDHasBeenSet() const;

                    /**
                     * 获取Description of the SSH key.
The description can be modified in the CVM console.
                     * @return SSHKeyDescription Description of the SSH key.
The description can be modified in the CVM console.
                     * 
                     */
                    std::string GetSSHKeyDescription() const;

                    /**
                     * 判断参数 SSHKeyDescription 是否已赋值
                     * @return SSHKeyDescription 是否已赋值
                     * 
                     */
                    bool SSHKeyDescriptionHasBeenSet() const;

                    /**
                     * 获取Name of the SSH key.
The name can be modified in the CVM console.
                     * @return SSHKeyName Name of the SSH key.
The name can be modified in the CVM console.
                     * 
                     */
                    std::string GetSSHKeyName() const;

                    /**
                     * 判断参数 SSHKeyName 是否已赋值
                     * @return SSHKeyName 是否已赋值
                     * 
                     */
                    bool SSHKeyNameHasBeenSet() const;

                private:

                    /**
                     * ID of the SSH key.
                     */
                    std::string m_sSHKeyID;
                    bool m_sSHKeyIDHasBeenSet;

                    /**
                     * Plaintext value of the Base64-encoded public key.
                     */
                    std::string m_publicKey;
                    bool m_publicKeyHasBeenSet;

                    /**
                     * Plaintext value of the Base64-encoded private key.
                     */
                    std::string m_privateKey;
                    bool m_privateKeyHasBeenSet;

                    /**
                     * ID of the project to which the SSH key belongs.
                     */
                    int64_t m_projectID;
                    bool m_projectIDHasBeenSet;

                    /**
                     * Description of the SSH key.
The description can be modified in the CVM console.
                     */
                    std::string m_sSHKeyDescription;
                    bool m_sSHKeyDescriptionHasBeenSet;

                    /**
                     * Name of the SSH key.
The name can be modified in the CVM console.
                     */
                    std::string m_sSHKeyName;
                    bool m_sSHKeyNameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_SSM_V20190923_MODEL_GETSSHKEYPAIRVALUERESPONSE_H_
