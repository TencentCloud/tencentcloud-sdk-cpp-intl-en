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
                     * 获取Zone ID.
                     * @return ZoneId Zone ID.
                     * 
                     */
                    std::string GetZoneId() const;

                    /**
                     * 设置Zone ID.
                     * @param _zoneId Zone ID.
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
                     * 获取Alias domain name.
                     * @return AliasName Alias domain name.
                     * 
                     */
                    std::string GetAliasName() const;

                    /**
                     * 设置Alias domain name.
                     * @param _aliasName Alias domain name.
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
                     * 获取Target domain name.
                     * @return TargetName Target domain name.
                     * 
                     */
                    std::string GetTargetName() const;

                    /**
                     * 设置Target domain name.
                     * @param _targetName Target domain name.
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
                     * 获取Certificate configuration. Valid values:
<li> none: without configuring;</li>
<li> hosting: managed SSL certificate.</li>Default value: none.
                     * @return CertType Certificate configuration. Valid values:
<li> none: without configuring;</li>
<li> hosting: managed SSL certificate.</li>Default value: none.
                     * 
                     */
                    std::string GetCertType() const;

                    /**
                     * 设置Certificate configuration. Valid values:
<li> none: without configuring;</li>
<li> hosting: managed SSL certificate.</li>Default value: none.
                     * @param _certType Certificate configuration. Valid values:
<li> none: without configuring;</li>
<li> hosting: managed SSL certificate.</li>Default value: none.
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
                     * 获取When the value of CertType is hosting, you must enter the certificate ID accordingly.
                     * @return CertId When the value of CertType is hosting, you must enter the certificate ID accordingly.
                     * 
                     */
                    std::vector<std::string> GetCertId() const;

                    /**
                     * 设置When the value of CertType is hosting, you must enter the certificate ID accordingly.
                     * @param _certId When the value of CertType is hosting, you must enter the certificate ID accordingly.
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
                     * Zone ID.
                     */
                    std::string m_zoneId;
                    bool m_zoneIdHasBeenSet;

                    /**
                     * Alias domain name.
                     */
                    std::string m_aliasName;
                    bool m_aliasNameHasBeenSet;

                    /**
                     * Target domain name.
                     */
                    std::string m_targetName;
                    bool m_targetNameHasBeenSet;

                    /**
                     * Certificate configuration. Valid values:
<li> none: without configuring;</li>
<li> hosting: managed SSL certificate.</li>Default value: none.
                     */
                    std::string m_certType;
                    bool m_certTypeHasBeenSet;

                    /**
                     * When the value of CertType is hosting, you must enter the certificate ID accordingly.
                     */
                    std::vector<std::string> m_certId;
                    bool m_certIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220901_MODEL_CREATEALIASDOMAINREQUEST_H_
