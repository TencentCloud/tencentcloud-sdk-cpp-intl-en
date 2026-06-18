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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_KEYSANDBOXCREDENTIAL_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_KEYSANDBOXCREDENTIAL_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/csip/v20221121/model/CredentialEffectScope.h>


namespace TencentCloud
{
    namespace Csip
    {
        namespace V20221121
        {
            namespace Model
            {
                /**
                * Credential data structure, used for list query and details query response
                */
                class KeySandboxCredential : public AbstractModel
                {
                public:
                    KeySandboxCredential();
                    ~KeySandboxCredential() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Credential ID
                     * @return CredentialId Credential ID
                     * 
                     */
                    std::string GetCredentialId() const;

                    /**
                     * 设置Credential ID
                     * @param _credentialId Credential ID
                     * 
                     */
                    void SetCredentialId(const std::string& _credentialId);

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
                     * 设置Credential name
                     * @param _credentialName Credential name
                     * 
                     */
                    void SetCredentialName(const std::string& _credentialName);

                    /**
                     * 判断参数 CredentialName 是否已赋值
                     * @return CredentialName 是否已赋值
                     * 
                     */
                    bool CredentialNameHasBeenSet() const;

                    /**
                     * 获取Credential Type
Enumeration value:
access: normal Key (Key-Value pair)
sts: STS temporary key credential
                     * @return CredentialType Credential Type
Enumeration value:
access: normal Key (Key-Value pair)
sts: STS temporary key credential
                     * 
                     */
                    std::string GetCredentialType() const;

                    /**
                     * 设置Credential Type
Enumeration value:
access: normal Key (Key-Value pair)
sts: STS temporary key credential
                     * @param _credentialType Credential Type
Enumeration value:
access: normal Key (Key-Value pair)
sts: STS temporary key credential
                     * 
                     */
                    void SetCredentialType(const std::string& _credentialType);

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
                     * 设置Effective machine scope
                     * @param _credentialEffectScope Effective machine scope
                     * 
                     */
                    void SetCredentialEffectScope(const CredentialEffectScope& _credentialEffectScope);

                    /**
                     * 判断参数 CredentialEffectScope 是否已赋值
                     * @return CredentialEffectScope 是否已赋值
                     * 
                     */
                    bool CredentialEffectScopeHasBeenSet() const;

                    /**
                     * 获取Creation time.
Parameter format: YYYY-MM-DDTHH:mm:ssZ (ISO8601 format).
                     * @return CreateTime Creation time.
Parameter format: YYYY-MM-DDTHH:mm:ssZ (ISO8601 format).
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置Creation time.
Parameter format: YYYY-MM-DDTHH:mm:ssZ (ISO8601 format).
                     * @param _createTime Creation time.
Parameter format: YYYY-MM-DDTHH:mm:ssZ (ISO8601 format).
                     * 
                     */
                    void SetCreateTime(const std::string& _createTime);

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
                     * 设置Update time
Parameter format: YYYY-MM-DDTHH:mm:ssZ (ISO8601 format).
                     * @param _updateTime Update time
Parameter format: YYYY-MM-DDTHH:mm:ssZ (ISO8601 format).
                     * 
                     */
                    void SetUpdateTime(const std::string& _updateTime);

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
access: normal Key (Key-Value pair)
sts: STS temporary key credential
                     */
                    std::string m_credentialType;
                    bool m_credentialTypeHasBeenSet;

                    /**
                     * Effective machine scope
                     */
                    CredentialEffectScope m_credentialEffectScope;
                    bool m_credentialEffectScopeHasBeenSet;

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

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_KEYSANDBOXCREDENTIAL_H_
