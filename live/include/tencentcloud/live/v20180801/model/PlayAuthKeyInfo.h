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

#ifndef TENCENTCLOUD_LIVE_V20180801_MODEL_PLAYAUTHKEYINFO_H_
#define TENCENTCLOUD_LIVE_V20180801_MODEL_PLAYAUTHKEYINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
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
                * Playback authentication key information.
                */
                class PlayAuthKeyInfo : public AbstractModel
                {
                public:
                    PlayAuthKeyInfo();
                    ~PlayAuthKeyInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Domain name.
                     * @return DomainName Domain name.
                     */
                    std::string GetDomainName() const;

                    /**
                     * 设置Domain name.
                     * @param DomainName Domain name.
                     */
                    void SetDomainName(const std::string& _domainName);

                    /**
                     * 判断参数 DomainName 是否已赋值
                     * @return DomainName 是否已赋值
                     */
                    bool DomainNameHasBeenSet() const;

                    /**
                     * 获取Whether to enable:
0: disable.
1: enable.
                     * @return Enable Whether to enable:
0: disable.
1: enable.
                     */
                    int64_t GetEnable() const;

                    /**
                     * 设置Whether to enable:
0: disable.
1: enable.
                     * @param Enable Whether to enable:
0: disable.
1: enable.
                     */
                    void SetEnable(const int64_t& _enable);

                    /**
                     * 判断参数 Enable 是否已赋值
                     * @return Enable 是否已赋值
                     */
                    bool EnableHasBeenSet() const;

                    /**
                     * 获取Authentication key.
                     * @return AuthKey Authentication key.
                     */
                    std::string GetAuthKey() const;

                    /**
                     * 设置Authentication key.
                     * @param AuthKey Authentication key.
                     */
                    void SetAuthKey(const std::string& _authKey);

                    /**
                     * 判断参数 AuthKey 是否已赋值
                     * @return AuthKey 是否已赋值
                     */
                    bool AuthKeyHasBeenSet() const;

                    /**
                     * 获取Validity period in seconds.
                     * @return AuthDelta Validity period in seconds.
                     */
                    uint64_t GetAuthDelta() const;

                    /**
                     * 设置Validity period in seconds.
                     * @param AuthDelta Validity period in seconds.
                     */
                    void SetAuthDelta(const uint64_t& _authDelta);

                    /**
                     * 判断参数 AuthDelta 是否已赋值
                     * @return AuthDelta 是否已赋值
                     */
                    bool AuthDeltaHasBeenSet() const;

                    /**
                     * 获取Authentication `BackKey`.
                     * @return AuthBackKey Authentication `BackKey`.
                     */
                    std::string GetAuthBackKey() const;

                    /**
                     * 设置Authentication `BackKey`.
                     * @param AuthBackKey Authentication `BackKey`.
                     */
                    void SetAuthBackKey(const std::string& _authBackKey);

                    /**
                     * 判断参数 AuthBackKey 是否已赋值
                     * @return AuthBackKey 是否已赋值
                     */
                    bool AuthBackKeyHasBeenSet() const;

                private:

                    /**
                     * Domain name.
                     */
                    std::string m_domainName;
                    bool m_domainNameHasBeenSet;

                    /**
                     * Whether to enable:
0: disable.
1: enable.
                     */
                    int64_t m_enable;
                    bool m_enableHasBeenSet;

                    /**
                     * Authentication key.
                     */
                    std::string m_authKey;
                    bool m_authKeyHasBeenSet;

                    /**
                     * Validity period in seconds.
                     */
                    uint64_t m_authDelta;
                    bool m_authDeltaHasBeenSet;

                    /**
                     * Authentication `BackKey`.
                     */
                    std::string m_authBackKey;
                    bool m_authBackKeyHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_LIVE_V20180801_MODEL_PLAYAUTHKEYINFO_H_
