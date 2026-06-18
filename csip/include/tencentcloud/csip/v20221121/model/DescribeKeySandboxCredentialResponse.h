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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_DESCRIBEKEYSANDBOXCREDENTIALRESPONSE_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_DESCRIBEKEYSANDBOXCREDENTIALRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/csip/v20221121/model/CredentialEffectScope.h>
#include <tencentcloud/csip/v20221121/model/AccessCredentialOutput.h>
#include <tencentcloud/csip/v20221121/model/STSCredentialOutput.h>


namespace TencentCloud
{
    namespace Csip
    {
        namespace V20221121
        {
            namespace Model
            {
                /**
                * DescribeKeySandboxCredential response structure.
                */
                class DescribeKeySandboxCredentialResponse : public AbstractModel
                {
                public:
                    DescribeKeySandboxCredentialResponse();
                    ~DescribeKeySandboxCredentialResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取Credential ID
                     * @return CredentialId Credential ID
                     * 
                     */
                    std::string GetCredentialId() const;

                    /**
                     * 判断参数 CredentialId 是否已赋值
                     * @return CredentialId 是否已赋值
                     * 
                     */
                    bool CredentialIdHasBeenSet() const;

                    /**
                     * 获取Credential name
                     * @return CredentialName Credential name
                     * 
                     */
                    std::string GetCredentialName() const;

                    /**
                     * 判断参数 CredentialName 是否已赋值
                     * @return CredentialName 是否已赋值
                     * 
                     */
                    bool CredentialNameHasBeenSet() const;

                    /**
                     * 获取Credential Type
Enumeration value:
access: standard key
sts: STS temporary key
                     * @return CredentialType Credential Type
Enumeration value:
access: standard key
sts: STS temporary key
                     * 
                     */
                    std::string GetCredentialType() const;

                    /**
                     * 判断参数 CredentialType 是否已赋值
                     * @return CredentialType 是否已赋值
                     * 
                     */
                    bool CredentialTypeHasBeenSet() const;

                    /**
                     * 获取Effective machine scope
                     * @return CredentialEffectScope Effective machine scope
                     * 
                     */
                    CredentialEffectScope GetCredentialEffectScope() const;

                    /**
                     * 判断参数 CredentialEffectScope 是否已赋值
                     * @return CredentialEffectScope 是否已赋值
                     * 
                     */
                    bool CredentialEffectScopeHasBeenSet() const;

                    /**
                     * 获取Normal key credential data (masked). Returned when CredentialType is access.
Supplementary explanation: Key is the original text, and Value is the masked value (reserve the first 3 and last 4 digits, with *** as substitution in the middle).
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Access Normal key credential data (masked). Returned when CredentialType is access.
Supplementary explanation: Key is the original text, and Value is the masked value (reserve the first 3 and last 4 digits, with *** as substitution in the middle).
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::vector<AccessCredentialOutput> GetAccess() const;

                    /**
                     * 判断参数 Access 是否已赋值
                     * @return Access 是否已赋值
                     * 
                     */
                    bool AccessHasBeenSet() const;

                    /**
                     * 获取STS credential data (masked). Returned when CredentialType is sts.
Supplementary description: System is the original text, SecretID and SecretKey are masked values (reserve the first 3 and last 4 characters, with *** as substitution in the middle).
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return STS STS credential data (masked). Returned when CredentialType is sts.
Supplementary description: System is the original text, SecretID and SecretKey are masked values (reserve the first 3 and last 4 characters, with *** as substitution in the middle).
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    STSCredentialOutput GetSTS() const;

                    /**
                     * 判断参数 STS 是否已赋值
                     * @return STS 是否已赋值
                     * 
                     */
                    bool STSHasBeenSet() const;

                    /**
                     * 获取Creation time.
Parameter format: YYYY-MM-DDTHH:mm:ssZ (ISO8601 format).
                     * @return CreateTime Creation time.
Parameter format: YYYY-MM-DDTHH:mm:ssZ (ISO8601 format).
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 判断参数 CreateTime 是否已赋值
                     * @return CreateTime 是否已赋值
                     * 
                     */
                    bool CreateTimeHasBeenSet() const;

                    /**
                     * 获取Update time
Parameter format: YYYY-MM-DDTHH:mm:ssZ (ISO8601 format).
                     * @return UpdateTime Update time
Parameter format: YYYY-MM-DDTHH:mm:ssZ (ISO8601 format).
                     * 
                     */
                    std::string GetUpdateTime() const;

                    /**
                     * 判断参数 UpdateTime 是否已赋值
                     * @return UpdateTime 是否已赋值
                     * 
                     */
                    bool UpdateTimeHasBeenSet() const;

                private:

                    /**
                     * Credential ID
                     */
                    std::string m_credentialId;
                    bool m_credentialIdHasBeenSet;

                    /**
                     * Credential name
                     */
                    std::string m_credentialName;
                    bool m_credentialNameHasBeenSet;

                    /**
                     * Credential Type
Enumeration value:
access: standard key
sts: STS temporary key
                     */
                    std::string m_credentialType;
                    bool m_credentialTypeHasBeenSet;

                    /**
                     * Effective machine scope
                     */
                    CredentialEffectScope m_credentialEffectScope;
                    bool m_credentialEffectScopeHasBeenSet;

                    /**
                     * Normal key credential data (masked). Returned when CredentialType is access.
Supplementary explanation: Key is the original text, and Value is the masked value (reserve the first 3 and last 4 digits, with *** as substitution in the middle).
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<AccessCredentialOutput> m_access;
                    bool m_accessHasBeenSet;

                    /**
                     * STS credential data (masked). Returned when CredentialType is sts.
Supplementary description: System is the original text, SecretID and SecretKey are masked values (reserve the first 3 and last 4 characters, with *** as substitution in the middle).
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    STSCredentialOutput m_sTS;
                    bool m_sTSHasBeenSet;

                    /**
                     * Creation time.
Parameter format: YYYY-MM-DDTHH:mm:ssZ (ISO8601 format).
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * Update time
Parameter format: YYYY-MM-DDTHH:mm:ssZ (ISO8601 format).
                     */
                    std::string m_updateTime;
                    bool m_updateTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_DESCRIBEKEYSANDBOXCREDENTIALRESPONSE_H_
