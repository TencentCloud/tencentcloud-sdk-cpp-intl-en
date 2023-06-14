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

#ifndef TENCENTCLOUD_STS_V20180813_MODEL_ASSUMEROLEWITHWEBIDENTITYREQUEST_H_
#define TENCENTCLOUD_STS_V20180813_MODEL_ASSUMEROLEWITHWEBIDENTITYREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Sts
    {
        namespace V20180813
        {
            namespace Model
            {
                /**
                * AssumeRoleWithWebIdentity request structure.
                */
                class AssumeRoleWithWebIdentityRequest : public AbstractModel
                {
                public:
                    AssumeRoleWithWebIdentityRequest();
                    ~AssumeRoleWithWebIdentityRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Identity provider name
                     * @return ProviderId Identity provider name
                     * 
                     */
                    std::string GetProviderId() const;

                    /**
                     * 设置Identity provider name
                     * @param _providerId Identity provider name
                     * 
                     */
                    void SetProviderId(const std::string& _providerId);

                    /**
                     * 判断参数 ProviderId 是否已赋值
                     * @return ProviderId 是否已赋值
                     * 
                     */
                    bool ProviderIdHasBeenSet() const;

                    /**
                     * 获取OIDC token issued by the IdP
                     * @return WebIdentityToken OIDC token issued by the IdP
                     * 
                     */
                    std::string GetWebIdentityToken() const;

                    /**
                     * 设置OIDC token issued by the IdP
                     * @param _webIdentityToken OIDC token issued by the IdP
                     * 
                     */
                    void SetWebIdentityToken(const std::string& _webIdentityToken);

                    /**
                     * 判断参数 WebIdentityToken 是否已赋值
                     * @return WebIdentityToken 是否已赋值
                     * 
                     */
                    bool WebIdentityTokenHasBeenSet() const;

                    /**
                     * 获取Role access description name
                     * @return RoleArn Role access description name
                     * 
                     */
                    std::string GetRoleArn() const;

                    /**
                     * 设置Role access description name
                     * @param _roleArn Role access description name
                     * 
                     */
                    void SetRoleArn(const std::string& _roleArn);

                    /**
                     * 判断参数 RoleArn 是否已赋值
                     * @return RoleArn 是否已赋值
                     * 
                     */
                    bool RoleArnHasBeenSet() const;

                    /**
                     * 获取Session name
                     * @return RoleSessionName Session name
                     * 
                     */
                    std::string GetRoleSessionName() const;

                    /**
                     * 设置Session name
                     * @param _roleSessionName Session name
                     * 
                     */
                    void SetRoleSessionName(const std::string& _roleSessionName);

                    /**
                     * 判断参数 RoleSessionName 是否已赋值
                     * @return RoleSessionName 是否已赋值
                     * 
                     */
                    bool RoleSessionNameHasBeenSet() const;

                    /**
                     * 获取The validity period of the temporary credential in seconds. Default value: 7,200s. Maximum value: 43,200s.
                     * @return DurationSeconds The validity period of the temporary credential in seconds. Default value: 7,200s. Maximum value: 43,200s.
                     * 
                     */
                    int64_t GetDurationSeconds() const;

                    /**
                     * 设置The validity period of the temporary credential in seconds. Default value: 7,200s. Maximum value: 43,200s.
                     * @param _durationSeconds The validity period of the temporary credential in seconds. Default value: 7,200s. Maximum value: 43,200s.
                     * 
                     */
                    void SetDurationSeconds(const int64_t& _durationSeconds);

                    /**
                     * 判断参数 DurationSeconds 是否已赋值
                     * @return DurationSeconds 是否已赋值
                     * 
                     */
                    bool DurationSecondsHasBeenSet() const;

                private:

                    /**
                     * Identity provider name
                     */
                    std::string m_providerId;
                    bool m_providerIdHasBeenSet;

                    /**
                     * OIDC token issued by the IdP
                     */
                    std::string m_webIdentityToken;
                    bool m_webIdentityTokenHasBeenSet;

                    /**
                     * Role access description name
                     */
                    std::string m_roleArn;
                    bool m_roleArnHasBeenSet;

                    /**
                     * Session name
                     */
                    std::string m_roleSessionName;
                    bool m_roleSessionNameHasBeenSet;

                    /**
                     * The validity period of the temporary credential in seconds. Default value: 7,200s. Maximum value: 43,200s.
                     */
                    int64_t m_durationSeconds;
                    bool m_durationSecondsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_STS_V20180813_MODEL_ASSUMEROLEWITHWEBIDENTITYREQUEST_H_
