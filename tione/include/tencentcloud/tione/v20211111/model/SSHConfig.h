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

#ifndef TENCENTCLOUD_TIONE_V20211111_MODEL_SSHCONFIG_H_
#define TENCENTCLOUD_TIONE_V20211111_MODEL_SSHCONFIG_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tione/v20211111/model/PodSSHInfo.h>


namespace TencentCloud
{
    namespace Tione
    {
        namespace V20211111
        {
            namespace Model
            {
                /**
                * Notebook SSH port configuration.
                */
                class SSHConfig : public AbstractModel
                {
                public:
                    SSHConfig();
                    ~SSHConfig() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Whether to enable SSH.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Enable Whether to enable SSH.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    bool GetEnable() const;

                    /**
                     * 设置Whether to enable SSH.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _enable Whether to enable SSH.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetEnable(const bool& _enable);

                    /**
                     * 判断参数 Enable 是否已赋值
                     * @return Enable 是否已赋值
                     * 
                     */
                    bool EnableHasBeenSet() const;

                    /**
                     * 获取Public key information.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return PublicKey Public key information.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetPublicKey() const;

                    /**
                     * 设置Public key information.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _publicKey Public key information.
Note: This field may return null, indicating that no valid values can be obtained.
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
                     * 获取Port number.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Port Port number.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    int64_t GetPort() const;

                    /**
                     * 设置Port number.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _port Port number.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetPort(const int64_t& _port);

                    /**
                     * 判断参数 Port 是否已赋值
                     * @return Port 是否已赋值
                     * 
                     */
                    bool PortHasBeenSet() const;

                    /**
                     * 获取Login command.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return LoginCommand Login command.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetLoginCommand() const;

                    /**
                     * 设置Login command.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _loginCommand Login command.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetLoginCommand(const std::string& _loginCommand);

                    /**
                     * 判断参数 LoginCommand 是否已赋值
                     * @return LoginCommand 是否已赋值
                     * 
                     */
                    bool LoginCommandHasBeenSet() const;

                    /**
                     * 获取Whether to change the login address.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return IsAddressChanged Whether to change the login address.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    bool GetIsAddressChanged() const;

                    /**
                     * 设置Whether to change the login address.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _isAddressChanged Whether to change the login address.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetIsAddressChanged(const bool& _isAddressChanged);

                    /**
                     * 判断参数 IsAddressChanged 是否已赋值
                     * @return IsAddressChanged 是否已赋值
                     * 
                     */
                    bool IsAddressChangedHasBeenSet() const;

                    /**
                     * 获取Pod access information.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return PodSSHInfo Pod access information.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    PodSSHInfo GetPodSSHInfo() const;

                    /**
                     * 设置Pod access information.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _podSSHInfo Pod access information.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetPodSSHInfo(const PodSSHInfo& _podSSHInfo);

                    /**
                     * 判断参数 PodSSHInfo 是否已赋值
                     * @return PodSSHInfo 是否已赋值
                     * 
                     */
                    bool PodSSHInfoHasBeenSet() const;

                private:

                    /**
                     * Whether to enable SSH.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    bool m_enable;
                    bool m_enableHasBeenSet;

                    /**
                     * Public key information.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_publicKey;
                    bool m_publicKeyHasBeenSet;

                    /**
                     * Port number.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t m_port;
                    bool m_portHasBeenSet;

                    /**
                     * Login command.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_loginCommand;
                    bool m_loginCommandHasBeenSet;

                    /**
                     * Whether to change the login address.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    bool m_isAddressChanged;
                    bool m_isAddressChangedHasBeenSet;

                    /**
                     * Pod access information.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    PodSSHInfo m_podSSHInfo;
                    bool m_podSSHInfoHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TIONE_V20211111_MODEL_SSHCONFIG_H_
