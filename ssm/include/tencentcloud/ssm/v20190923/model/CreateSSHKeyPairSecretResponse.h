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

#ifndef TENCENTCLOUD_SSM_V20190923_MODEL_CREATESSHKEYPAIRSECRETRESPONSE_H_
#define TENCENTCLOUD_SSM_V20190923_MODEL_CREATESSHKEYPAIRSECRETRESPONSE_H_

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
                * CreateSSHKeyPairSecret response structure.
                */
                class CreateSSHKeyPairSecretResponse : public AbstractModel
                {
                public:
                    CreateSSHKeyPairSecretResponse();
                    ~CreateSSHKeyPairSecretResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取Name of the created secret.
                     * @return SecretName Name of the created secret.
                     */
                    std::string GetSecretName() const;

                    /**
                     * 判断参数 SecretName 是否已赋值
                     * @return SecretName 是否已赋值
                     */
                    bool SecretNameHasBeenSet() const;

                    /**
                     * 获取ID of the created SSH key.
                     * @return SSHKeyID ID of the created SSH key.
                     */
                    std::string GetSSHKeyID() const;

                    /**
                     * 判断参数 SSHKeyID 是否已赋值
                     * @return SSHKeyID 是否已赋值
                     */
                    bool SSHKeyIDHasBeenSet() const;

                    /**
                     * 获取Name of the created SSH key.
                     * @return SSHKeyName Name of the created SSH key.
                     */
                    std::string GetSSHKeyName() const;

                    /**
                     * 判断参数 SSHKeyName 是否已赋值
                     * @return SSHKeyName 是否已赋值
                     */
                    bool SSHKeyNameHasBeenSet() const;

                    /**
                     * 获取Tag return code. `0`: success; `1`: internal error; `2`: business processing error.
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * @return TagCode Tag return code. `0`: success; `1`: internal error; `2`: business processing error.
Note: this field may return `null`, indicating that no valid values can be obtained.
                     */
                    uint64_t GetTagCode() const;

                    /**
                     * 判断参数 TagCode 是否已赋值
                     * @return TagCode 是否已赋值
                     */
                    bool TagCodeHasBeenSet() const;

                    /**
                     * 获取Tag return message.
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * @return TagMsg Tag return message.
Note: this field may return `null`, indicating that no valid values can be obtained.
                     */
                    std::string GetTagMsg() const;

                    /**
                     * 判断参数 TagMsg 是否已赋值
                     * @return TagMsg 是否已赋值
                     */
                    bool TagMsgHasBeenSet() const;

                private:

                    /**
                     * Name of the created secret.
                     */
                    std::string m_secretName;
                    bool m_secretNameHasBeenSet;

                    /**
                     * ID of the created SSH key.
                     */
                    std::string m_sSHKeyID;
                    bool m_sSHKeyIDHasBeenSet;

                    /**
                     * Name of the created SSH key.
                     */
                    std::string m_sSHKeyName;
                    bool m_sSHKeyNameHasBeenSet;

                    /**
                     * Tag return code. `0`: success; `1`: internal error; `2`: business processing error.
Note: this field may return `null`, indicating that no valid values can be obtained.
                     */
                    uint64_t m_tagCode;
                    bool m_tagCodeHasBeenSet;

                    /**
                     * Tag return message.
Note: this field may return `null`, indicating that no valid values can be obtained.
                     */
                    std::string m_tagMsg;
                    bool m_tagMsgHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_SSM_V20190923_MODEL_CREATESSHKEYPAIRSECRETRESPONSE_H_
