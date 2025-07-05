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

#ifndef TENCENTCLOUD_SSM_V20190923_MODEL_GETSSHKEYPAIRVALUEREQUEST_H_
#define TENCENTCLOUD_SSM_V20190923_MODEL_GETSSHKEYPAIRVALUEREQUEST_H_

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
                * GetSSHKeyPairValue request structure.
                */
                class GetSSHKeyPairValueRequest : public AbstractModel
                {
                public:
                    GetSSHKeyPairValueRequest();
                    ~GetSSHKeyPairValueRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Secret name. This field is only valid for SSH key secrets.
                     * @return SecretName Secret name. This field is only valid for SSH key secrets.
                     * 
                     */
                    std::string GetSecretName() const;

                    /**
                     * 设置Secret name. This field is only valid for SSH key secrets.
                     * @param _secretName Secret name. This field is only valid for SSH key secrets.
                     * 
                     */
                    void SetSecretName(const std::string& _secretName);

                    /**
                     * 判断参数 SecretName 是否已赋值
                     * @return SecretName 是否已赋值
                     * 
                     */
                    bool SecretNameHasBeenSet() const;

                    /**
                     * 获取ID of the key pair, which is the unique identifier of the key pair in the CVM.
                     * @return SSHKeyId ID of the key pair, which is the unique identifier of the key pair in the CVM.
                     * 
                     */
                    std::string GetSSHKeyId() const;

                    /**
                     * 设置ID of the key pair, which is the unique identifier of the key pair in the CVM.
                     * @param _sSHKeyId ID of the key pair, which is the unique identifier of the key pair in the CVM.
                     * 
                     */
                    void SetSSHKeyId(const std::string& _sSHKeyId);

                    /**
                     * 判断参数 SSHKeyId 是否已赋值
                     * @return SSHKeyId 是否已赋值
                     * 
                     */
                    bool SSHKeyIdHasBeenSet() const;

                private:

                    /**
                     * Secret name. This field is only valid for SSH key secrets.
                     */
                    std::string m_secretName;
                    bool m_secretNameHasBeenSet;

                    /**
                     * ID of the key pair, which is the unique identifier of the key pair in the CVM.
                     */
                    std::string m_sSHKeyId;
                    bool m_sSHKeyIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_SSM_V20190923_MODEL_GETSSHKEYPAIRVALUEREQUEST_H_
