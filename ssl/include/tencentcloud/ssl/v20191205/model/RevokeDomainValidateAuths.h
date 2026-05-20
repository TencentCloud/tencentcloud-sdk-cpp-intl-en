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

#ifndef TENCENTCLOUD_SSL_V20191205_MODEL_REVOKEDOMAINVALIDATEAUTHS_H_
#define TENCENTCLOUD_SSL_V20191205_MODEL_REVOKEDOMAINVALIDATEAUTHS_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Ssl
    {
        namespace V20191205
        {
            namespace Model
            {
                /**
                * Revoke certificate domain name verification info.
                */
                class RevokeDomainValidateAuths : public AbstractModel
                {
                public:
                    RevokeDomainValidateAuths();
                    ~RevokeDomainValidateAuths() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取DV authentication value path.
                     * @return DomainValidateAuthPath DV authentication value path.
                     * 
                     */
                    std::string GetDomainValidateAuthPath() const;

                    /**
                     * 设置DV authentication value path.
                     * @param _domainValidateAuthPath DV authentication value path.
                     * 
                     */
                    void SetDomainValidateAuthPath(const std::string& _domainValidateAuthPath);

                    /**
                     * 判断参数 DomainValidateAuthPath 是否已赋值
                     * @return DomainValidateAuthPath 是否已赋值
                     * 
                     */
                    bool DomainValidateAuthPathHasBeenSet() const;

                    /**
                     * 获取DV authentication KEY.
                     * @return DomainValidateAuthKey DV authentication KEY.
                     * 
                     */
                    std::string GetDomainValidateAuthKey() const;

                    /**
                     * 设置DV authentication KEY.
                     * @param _domainValidateAuthKey DV authentication KEY.
                     * 
                     */
                    void SetDomainValidateAuthKey(const std::string& _domainValidateAuthKey);

                    /**
                     * 判断参数 DomainValidateAuthKey 是否已赋值
                     * @return DomainValidateAuthKey 是否已赋值
                     * 
                     */
                    bool DomainValidateAuthKeyHasBeenSet() const;

                    /**
                     * 获取DV authentication value.
                     * @return DomainValidateAuthValue DV authentication value.
                     * 
                     */
                    std::string GetDomainValidateAuthValue() const;

                    /**
                     * 设置DV authentication value.
                     * @param _domainValidateAuthValue DV authentication value.
                     * 
                     */
                    void SetDomainValidateAuthValue(const std::string& _domainValidateAuthValue);

                    /**
                     * 判断参数 DomainValidateAuthValue 是否已赋值
                     * @return DomainValidateAuthValue 是否已赋值
                     * 
                     */
                    bool DomainValidateAuthValueHasBeenSet() const;

                    /**
                     * 获取DV authentication domain name.
                     * @return DomainValidateAuthDomain DV authentication domain name.
                     * 
                     */
                    std::string GetDomainValidateAuthDomain() const;

                    /**
                     * 设置DV authentication domain name.
                     * @param _domainValidateAuthDomain DV authentication domain name.
                     * 
                     */
                    void SetDomainValidateAuthDomain(const std::string& _domainValidateAuthDomain);

                    /**
                     * 判断参数 DomainValidateAuthDomain 是否已赋值
                     * @return DomainValidateAuthDomain 是否已赋值
                     * 
                     */
                    bool DomainValidateAuthDomainHasBeenSet() const;

                private:

                    /**
                     * DV authentication value path.
                     */
                    std::string m_domainValidateAuthPath;
                    bool m_domainValidateAuthPathHasBeenSet;

                    /**
                     * DV authentication KEY.
                     */
                    std::string m_domainValidateAuthKey;
                    bool m_domainValidateAuthKeyHasBeenSet;

                    /**
                     * DV authentication value.
                     */
                    std::string m_domainValidateAuthValue;
                    bool m_domainValidateAuthValueHasBeenSet;

                    /**
                     * DV authentication domain name.
                     */
                    std::string m_domainValidateAuthDomain;
                    bool m_domainValidateAuthDomainHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_SSL_V20191205_MODEL_REVOKEDOMAINVALIDATEAUTHS_H_
