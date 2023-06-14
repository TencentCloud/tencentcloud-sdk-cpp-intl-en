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

#ifndef TENCENTCLOUD_TEO_V20220901_MODEL_MODIFYHOSTSCERTIFICATEREQUEST_H_
#define TENCENTCLOUD_TEO_V20220901_MODEL_MODIFYHOSTSCERTIFICATEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/teo/v20220901/model/ServerCertInfo.h>


namespace TencentCloud
{
    namespace Teo
    {
        namespace V20220901
        {
            namespace Model
            {
                /**
                * ModifyHostsCertificate request structure.
                */
                class ModifyHostsCertificateRequest : public AbstractModel
                {
                public:
                    ModifyHostsCertificateRequest();
                    ~ModifyHostsCertificateRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取ID of the site.
                     * @return ZoneId ID of the site.
                     * 
                     */
                    std::string GetZoneId() const;

                    /**
                     * 设置ID of the site.
                     * @param _zoneId ID of the site.
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
                     * 获取List of domain names that the certificate will be attached to.
                     * @return Hosts List of domain names that the certificate will be attached to.
                     * 
                     */
                    std::vector<std::string> GetHosts() const;

                    /**
                     * 设置List of domain names that the certificate will be attached to.
                     * @param _hosts List of domain names that the certificate will be attached to.
                     * 
                     */
                    void SetHosts(const std::vector<std::string>& _hosts);

                    /**
                     * 判断参数 Hosts 是否已赋值
                     * @return Hosts 是否已赋值
                     * 
                     */
                    bool HostsHasBeenSet() const;

                    /**
                     * 获取Certificate information. Note that only `CertId` is required. If it is not specified, the default certificate will be used.
                     * @return ServerCertInfo Certificate information. Note that only `CertId` is required. If it is not specified, the default certificate will be used.
                     * 
                     */
                    std::vector<ServerCertInfo> GetServerCertInfo() const;

                    /**
                     * 设置Certificate information. Note that only `CertId` is required. If it is not specified, the default certificate will be used.
                     * @param _serverCertInfo Certificate information. Note that only `CertId` is required. If it is not specified, the default certificate will be used.
                     * 
                     */
                    void SetServerCertInfo(const std::vector<ServerCertInfo>& _serverCertInfo);

                    /**
                     * 判断参数 ServerCertInfo 是否已赋值
                     * @return ServerCertInfo 是否已赋值
                     * 
                     */
                    bool ServerCertInfoHasBeenSet() const;

                    /**
                     * 获取Whether the certificate is managed by EdgeOne. Values:
<li>`apply`: Managed by EdgeOne</li>
<li>`none`: Not managed by EdgeOne</li>If it is left empty, the default value `apply` is used.
                     * @return ApplyType Whether the certificate is managed by EdgeOne. Values:
<li>`apply`: Managed by EdgeOne</li>
<li>`none`: Not managed by EdgeOne</li>If it is left empty, the default value `apply` is used.
                     * 
                     */
                    std::string GetApplyType() const;

                    /**
                     * 设置Whether the certificate is managed by EdgeOne. Values:
<li>`apply`: Managed by EdgeOne</li>
<li>`none`: Not managed by EdgeOne</li>If it is left empty, the default value `apply` is used.
                     * @param _applyType Whether the certificate is managed by EdgeOne. Values:
<li>`apply`: Managed by EdgeOne</li>
<li>`none`: Not managed by EdgeOne</li>If it is left empty, the default value `apply` is used.
                     * 
                     */
                    void SetApplyType(const std::string& _applyType);

                    /**
                     * 判断参数 ApplyType 是否已赋值
                     * @return ApplyType 是否已赋值
                     * 
                     */
                    bool ApplyTypeHasBeenSet() const;

                private:

                    /**
                     * ID of the site.
                     */
                    std::string m_zoneId;
                    bool m_zoneIdHasBeenSet;

                    /**
                     * List of domain names that the certificate will be attached to.
                     */
                    std::vector<std::string> m_hosts;
                    bool m_hostsHasBeenSet;

                    /**
                     * Certificate information. Note that only `CertId` is required. If it is not specified, the default certificate will be used.
                     */
                    std::vector<ServerCertInfo> m_serverCertInfo;
                    bool m_serverCertInfoHasBeenSet;

                    /**
                     * Whether the certificate is managed by EdgeOne. Values:
<li>`apply`: Managed by EdgeOne</li>
<li>`none`: Not managed by EdgeOne</li>If it is left empty, the default value `apply` is used.
                     */
                    std::string m_applyType;
                    bool m_applyTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220901_MODEL_MODIFYHOSTSCERTIFICATEREQUEST_H_
