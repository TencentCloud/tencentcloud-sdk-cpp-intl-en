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

#ifndef TENCENTCLOUD_LIVE_V20180801_MODEL_MODIFYLIVEPLAYAUTHKEYREQUEST_H_
#define TENCENTCLOUD_LIVE_V20180801_MODEL_MODIFYLIVEPLAYAUTHKEYREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Live
    {
        namespace V20180801
        {
            namespace Model
            {
                /**
                * ModifyLivePlayAuthKey request structure.
                */
                class ModifyLivePlayAuthKeyRequest : public AbstractModel
                {
                public:
                    ModifyLivePlayAuthKeyRequest();
                    ~ModifyLivePlayAuthKeyRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Playback domain name.
                     * @return DomainName Playback domain name.
                     * 
                     */
                    std::string GetDomainName() const;

                    /**
                     * 设置Playback domain name.
                     * @param _domainName Playback domain name.
                     * 
                     */
                    void SetDomainName(const std::string& _domainName);

                    /**
                     * 判断参数 DomainName 是否已赋值
                     * @return DomainName 是否已赋值
                     * 
                     */
                    bool DomainNameHasBeenSet() const;

                    /**
                     * 获取Whether to enable. 0: disabled; 1: enabled.
If this parameter is left empty, the current value will not be modified.
                     * @return Enable Whether to enable. 0: disabled; 1: enabled.
If this parameter is left empty, the current value will not be modified.
                     * 
                     */
                    int64_t GetEnable() const;

                    /**
                     * 设置Whether to enable. 0: disabled; 1: enabled.
If this parameter is left empty, the current value will not be modified.
                     * @param _enable Whether to enable. 0: disabled; 1: enabled.
If this parameter is left empty, the current value will not be modified.
                     * 
                     */
                    void SetEnable(const int64_t& _enable);

                    /**
                     * 判断参数 Enable 是否已赋值
                     * @return Enable 是否已赋值
                     * 
                     */
                    bool EnableHasBeenSet() const;

                    /**
                     * 获取Authentication key.
If this parameter is left empty, the current value will not be modified.
                     * @return AuthKey Authentication key.
If this parameter is left empty, the current value will not be modified.
                     * 
                     */
                    std::string GetAuthKey() const;

                    /**
                     * 设置Authentication key.
If this parameter is left empty, the current value will not be modified.
                     * @param _authKey Authentication key.
If this parameter is left empty, the current value will not be modified.
                     * 
                     */
                    void SetAuthKey(const std::string& _authKey);

                    /**
                     * 判断参数 AuthKey 是否已赋值
                     * @return AuthKey 是否已赋值
                     * 
                     */
                    bool AuthKeyHasBeenSet() const;

                    /**
                     * 获取Validity period in seconds.
If this parameter is left empty, the current value will not be modified.
                     * @return AuthDelta Validity period in seconds.
If this parameter is left empty, the current value will not be modified.
                     * 
                     */
                    uint64_t GetAuthDelta() const;

                    /**
                     * 设置Validity period in seconds.
If this parameter is left empty, the current value will not be modified.
                     * @param _authDelta Validity period in seconds.
If this parameter is left empty, the current value will not be modified.
                     * 
                     */
                    void SetAuthDelta(const uint64_t& _authDelta);

                    /**
                     * 判断参数 AuthDelta 是否已赋值
                     * @return AuthDelta 是否已赋值
                     * 
                     */
                    bool AuthDeltaHasBeenSet() const;

                    /**
                     * 获取Backup authentication key.
If this parameter is left empty, the current value will not be modified.
                     * @return AuthBackKey Backup authentication key.
If this parameter is left empty, the current value will not be modified.
                     * 
                     */
                    std::string GetAuthBackKey() const;

                    /**
                     * 设置Backup authentication key.
If this parameter is left empty, the current value will not be modified.
                     * @param _authBackKey Backup authentication key.
If this parameter is left empty, the current value will not be modified.
                     * 
                     */
                    void SetAuthBackKey(const std::string& _authBackKey);

                    /**
                     * 判断参数 AuthBackKey 是否已赋值
                     * @return AuthBackKey 是否已赋值
                     * 
                     */
                    bool AuthBackKeyHasBeenSet() const;

                private:

                    /**
                     * Playback domain name.
                     */
                    std::string m_domainName;
                    bool m_domainNameHasBeenSet;

                    /**
                     * Whether to enable. 0: disabled; 1: enabled.
If this parameter is left empty, the current value will not be modified.
                     */
                    int64_t m_enable;
                    bool m_enableHasBeenSet;

                    /**
                     * Authentication key.
If this parameter is left empty, the current value will not be modified.
                     */
                    std::string m_authKey;
                    bool m_authKeyHasBeenSet;

                    /**
                     * Validity period in seconds.
If this parameter is left empty, the current value will not be modified.
                     */
                    uint64_t m_authDelta;
                    bool m_authDeltaHasBeenSet;

                    /**
                     * Backup authentication key.
If this parameter is left empty, the current value will not be modified.
                     */
                    std::string m_authBackKey;
                    bool m_authBackKeyHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_LIVE_V20180801_MODEL_MODIFYLIVEPLAYAUTHKEYREQUEST_H_
