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

#ifndef TENCENTCLOUD_STS_V20180813_MODEL_ASSUMEROLEWITHSAMLREQUEST_H_
#define TENCENTCLOUD_STS_V20180813_MODEL_ASSUMEROLEWITHSAMLREQUEST_H_

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
                * AssumeRoleWithSAML request structure.
                */
                class AssumeRoleWithSAMLRequest : public AbstractModel
                {
                public:
                    AssumeRoleWithSAMLRequest();
                    ~AssumeRoleWithSAMLRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Base64-encoded SAML assertion
                     * @return SAMLAssertion Base64-encoded SAML assertion
                     */
                    std::string GetSAMLAssertion() const;

                    /**
                     * 设置Base64-encoded SAML assertion
                     * @param SAMLAssertion Base64-encoded SAML assertion
                     */
                    void SetSAMLAssertion(const std::string& _sAMLAssertion);

                    /**
                     * 判断参数 SAMLAssertion 是否已赋值
                     * @return SAMLAssertion 是否已赋值
                     */
                    bool SAMLAssertionHasBeenSet() const;

                    /**
                     * 获取Principal access description name
                     * @return PrincipalArn Principal access description name
                     */
                    std::string GetPrincipalArn() const;

                    /**
                     * 设置Principal access description name
                     * @param PrincipalArn Principal access description name
                     */
                    void SetPrincipalArn(const std::string& _principalArn);

                    /**
                     * 判断参数 PrincipalArn 是否已赋值
                     * @return PrincipalArn 是否已赋值
                     */
                    bool PrincipalArnHasBeenSet() const;

                    /**
                     * 获取Role access description name
                     * @return RoleArn Role access description name
                     */
                    std::string GetRoleArn() const;

                    /**
                     * 设置Role access description name
                     * @param RoleArn Role access description name
                     */
                    void SetRoleArn(const std::string& _roleArn);

                    /**
                     * 判断参数 RoleArn 是否已赋值
                     * @return RoleArn 是否已赋值
                     */
                    bool RoleArnHasBeenSet() const;

                    /**
                     * 获取Session name
                     * @return RoleSessionName Session name
                     */
                    std::string GetRoleSessionName() const;

                    /**
                     * 设置Session name
                     * @param RoleSessionName Session name
                     */
                    void SetRoleSessionName(const std::string& _roleSessionName);

                    /**
                     * 判断参数 RoleSessionName 是否已赋值
                     * @return RoleSessionName 是否已赋值
                     */
                    bool RoleSessionNameHasBeenSet() const;

                    /**
                     * 获取The validity period of the temporary credentials in seconds. Default value: 7,200s. Maximum value: 43,200s.
                     * @return DurationSeconds The validity period of the temporary credentials in seconds. Default value: 7,200s. Maximum value: 43,200s.
                     */
                    uint64_t GetDurationSeconds() const;

                    /**
                     * 设置The validity period of the temporary credentials in seconds. Default value: 7,200s. Maximum value: 43,200s.
                     * @param DurationSeconds The validity period of the temporary credentials in seconds. Default value: 7,200s. Maximum value: 43,200s.
                     */
                    void SetDurationSeconds(const uint64_t& _durationSeconds);

                    /**
                     * 判断参数 DurationSeconds 是否已赋值
                     * @return DurationSeconds 是否已赋值
                     */
                    bool DurationSecondsHasBeenSet() const;

                private:

                    /**
                     * Base64-encoded SAML assertion
                     */
                    std::string m_sAMLAssertion;
                    bool m_sAMLAssertionHasBeenSet;

                    /**
                     * Principal access description name
                     */
                    std::string m_principalArn;
                    bool m_principalArnHasBeenSet;

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
                     * The validity period of the temporary credentials in seconds. Default value: 7,200s. Maximum value: 43,200s.
                     */
                    uint64_t m_durationSeconds;
                    bool m_durationSecondsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_STS_V20180813_MODEL_ASSUMEROLEWITHSAMLREQUEST_H_
