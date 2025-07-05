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

#ifndef TENCENTCLOUD_TEO_V20220901_MODEL_CREATEALIASDOMAINREQUEST_H_
#define TENCENTCLOUD_TEO_V20220901_MODEL_CREATEALIASDOMAINREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Teo
    {
        namespace V20220901
        {
            namespace Model
            {
                /**
                * CreateAliasDomain request structure.
                */
                class CreateAliasDomainRequest : public AbstractModel
                {
                public:
                    CreateAliasDomainRequest();
                    ~CreateAliasDomainRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取The site ID.
                     * @return ZoneId The site ID.
                     * 
                     */
                    std::string GetZoneId() const;

                    /**
                     * 设置The site ID.
                     * @param _zoneId The site ID.
                     * 
                     */
                    void SetZoneId(const std::string& _zoneId);

                    /**
                     * 判断参数 ZoneId 是否已赋值
                     * @return ZoneId 是否已赋值
                     * 
                     */
                    bool ZoneIdHasBeenSet() const;

                    /**
                     * 获取The alias domain name.
                     * @return AliasName The alias domain name.
                     * 
                     */
                    std::string GetAliasName() const;

                    /**
                     * 设置The alias domain name.
                     * @param _aliasName The alias domain name.
                     * 
                     */
                    void SetAliasName(const std::string& _aliasName);

                    /**
                     * 判断参数 AliasName 是否已赋值
                     * @return AliasName 是否已赋值
                     * 
                     */
                    bool AliasNameHasBeenSet() const;

                    /**
                     * 获取The target domain name.
                     * @return TargetName The target domain name.
                     * 
                     */
                    std::string GetTargetName() const;

                    /**
                     * 设置The target domain name.
                     * @param _targetName The target domain name.
                     * 
                     */
                    void SetTargetName(const std::string& _targetName);

                    /**
                     * 判断参数 TargetName 是否已赋值
                     * @return TargetName 是否已赋值
                     * 
                     */
                    bool TargetNameHasBeenSet() const;

                    /**
                     * 获取Certificate configuration. Values:
<li>`none`: (Default) Do not configure</li>
<li>`hosting`: Managed SSL certificate</li>
                     * @return CertType Certificate configuration. Values:
<li>`none`: (Default) Do not configure</li>
<li>`hosting`: Managed SSL certificate</li>
                     * 
                     */
                    std::string GetCertType() const;

                    /**
                     * 设置Certificate configuration. Values:
<li>`none`: (Default) Do not configure</li>
<li>`hosting`: Managed SSL certificate</li>
                     * @param _certType Certificate configuration. Values:
<li>`none`: (Default) Do not configure</li>
<li>`hosting`: Managed SSL certificate</li>
                     * 
                     */
                    void SetCertType(const std::string& _certType);

                    /**
                     * 判断参数 CertType 是否已赋值
                     * @return CertType 是否已赋值
                     * 
                     */
                    bool CertTypeHasBeenSet() const;

                    /**
                     * 获取The certificate ID. This field is required when `CertType=hosting`.
                     * @return CertId The certificate ID. This field is required when `CertType=hosting`.
                     * 
                     */
                    std::vector<std::string> GetCertId() const;

                    /**
                     * 设置The certificate ID. This field is required when `CertType=hosting`.
                     * @param _certId The certificate ID. This field is required when `CertType=hosting`.
                     * 
                     */
                    void SetCertId(const std::vector<std::string>& _certId);

                    /**
                     * 判断参数 CertId 是否已赋值
                     * @return CertId 是否已赋值
                     * 
                     */
                    bool CertIdHasBeenSet() const;

                private:

                    /**
                     * The site ID.
                     */
                    std::string m_zoneId;
                    bool m_zoneIdHasBeenSet;

                    /**
                     * The alias domain name.
                     */
                    std::string m_aliasName;
                    bool m_aliasNameHasBeenSet;

                    /**
                     * The target domain name.
                     */
                    std::string m_targetName;
                    bool m_targetNameHasBeenSet;

                    /**
                     * Certificate configuration. Values:
<li>`none`: (Default) Do not configure</li>
<li>`hosting`: Managed SSL certificate</li>
                     */
                    std::string m_certType;
                    bool m_certTypeHasBeenSet;

                    /**
                     * The certificate ID. This field is required when `CertType=hosting`.
                     */
                    std::vector<std::string> m_certId;
                    bool m_certIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220901_MODEL_CREATEALIASDOMAINREQUEST_H_
