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

#ifndef TENCENTCLOUD_MAKERS_V20261113_MODEL_ZONEDOMAIN_H_
#define TENCENTCLOUD_MAKERS_V20261113_MODEL_ZONEDOMAIN_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/makers/v20261113/model/SwitchConfig.h>
#include <tencentcloud/makers/v20261113/model/ForceRedirectConfig.h>
#include <tencentcloud/makers/v20261113/model/HstsConfig.h>
#include <tencentcloud/makers/v20261113/model/OwnershipVerification.h>


namespace TencentCloud
{
    namespace Makers
    {
        namespace V20261113
        {
            namespace Model
            {
                /**
                * Custom domain name under the site
                */
                class ZoneDomain : public AbstractModel
                {
                public:
                    ZoneDomain();
                    ~ZoneDomain() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>Custom or Preset</p>
                     * @return Type <p>Custom or Preset</p>
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置<p>Custom or Preset</p>
                     * @param _type <p>Custom or Preset</p>
                     * 
                     */
                    void SetType(const std::string& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     * 
                     */
                    bool TypeHasBeenSet() const;

                    /**
                     * 获取<p>Domain name.</p>
                     * @return Domain <p>Domain name.</p>
                     * 
                     */
                    std::string GetDomain() const;

                    /**
                     * 设置<p>Domain name.</p>
                     * @param _domain <p>Domain name.</p>
                     * 
                     */
                    void SetDomain(const std::string& _domain);

                    /**
                     * 判断参数 Domain 是否已赋值
                     * @return Domain 是否已赋值
                     * 
                     */
                    bool DomainHasBeenSet() const;

                    /**
                     * 获取<p>Domain name status</p>
                     * @return Status <p>Domain name status</p>
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置<p>Domain name status</p>
                     * @param _status <p>Domain name status</p>
                     * 
                     */
                    void SetStatus(const std::string& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取<p>Bound environment slug. Default value: Production</p>
                     * @return Env <p>Bound environment slug. Default value: Production</p>
                     * 
                     */
                    std::string GetEnv() const;

                    /**
                     * 设置<p>Bound environment slug. Default value: Production</p>
                     * @param _env <p>Bound environment slug. Default value: Production</p>
                     * 
                     */
                    void SetEnv(const std::string& _env);

                    /**
                     * 判断参数 Env 是否已赋值
                     * @return Env 是否已赋值
                     * 
                     */
                    bool EnvHasBeenSet() const;

                    /**
                     * 获取<p>Site ID</p>
                     * @return ZoneId <p>Site ID</p>
                     * 
                     */
                    std::string GetZoneId() const;

                    /**
                     * 设置<p>Site ID</p>
                     * @param _zoneId <p>Site ID</p>
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
                     * 获取<p>Acceleration region</p>
                     * @return Area <p>Acceleration region</p>
                     * 
                     */
                    std::string GetArea() const;

                    /**
                     * 设置<p>Acceleration region</p>
                     * @param _area <p>Acceleration region</p>
                     * 
                     */
                    void SetArea(const std::string& _area);

                    /**
                     * 判断参数 Area 是否已赋值
                     * @return Area 是否已赋值
                     * 
                     */
                    bool AreaHasBeenSet() const;

                    /**
                     * 获取<p>CNAME</p>
                     * @return Cname <p>CNAME</p>
                     * 
                     */
                    std::string GetCname() const;

                    /**
                     * 设置<p>CNAME</p>
                     * @param _cname <p>CNAME</p>
                     * 
                     */
                    void SetCname(const std::string& _cname);

                    /**
                     * 判断参数 Cname 是否已赋值
                     * @return Cname 是否已赋值
                     * 
                     */
                    bool CnameHasBeenSet() const;

                    /**
                     * 获取<p>Primary domain name.</p>
                     * @return MainDomain <p>Primary domain name.</p>
                     * 
                     */
                    std::string GetMainDomain() const;

                    /**
                     * 设置<p>Primary domain name.</p>
                     * @param _mainDomain <p>Primary domain name.</p>
                     * 
                     */
                    void SetMainDomain(const std::string& _mainDomain);

                    /**
                     * 判断参数 MainDomain 是否已赋值
                     * @return MainDomain 是否已赋值
                     * 
                     */
                    bool MainDomainHasBeenSet() const;

                    /**
                     * 获取<p>IPv6</p>
                     * @return Ipv6 <p>IPv6</p>
                     * 
                     */
                    SwitchConfig GetIpv6() const;

                    /**
                     * 设置<p>IPv6</p>
                     * @param _ipv6 <p>IPv6</p>
                     * 
                     */
                    void SetIpv6(const SwitchConfig& _ipv6);

                    /**
                     * 判断参数 Ipv6 是否已赋值
                     * @return Ipv6 是否已赋值
                     * 
                     */
                    bool Ipv6HasBeenSet() const;

                    /**
                     * 获取<p>HTTP/2</p>
                     * @return Http2 <p>HTTP/2</p>
                     * 
                     */
                    SwitchConfig GetHttp2() const;

                    /**
                     * 设置<p>HTTP/2</p>
                     * @param _http2 <p>HTTP/2</p>
                     * 
                     */
                    void SetHttp2(const SwitchConfig& _http2);

                    /**
                     * 判断参数 Http2 是否已赋值
                     * @return Http2 是否已赋值
                     * 
                     */
                    bool Http2HasBeenSet() const;

                    /**
                     * 获取<p>OCSP</p>
                     * @return OcspStapling <p>OCSP</p>
                     * 
                     */
                    SwitchConfig GetOcspStapling() const;

                    /**
                     * 设置<p>OCSP</p>
                     * @param _ocspStapling <p>OCSP</p>
                     * 
                     */
                    void SetOcspStapling(const SwitchConfig& _ocspStapling);

                    /**
                     * 判断参数 OcspStapling 是否已赋值
                     * @return OcspStapling 是否已赋值
                     * 
                     */
                    bool OcspStaplingHasBeenSet() const;

                    /**
                     * 获取<p>Force HTTPS</p>
                     * @return ForceRedirect <p>Force HTTPS</p>
                     * 
                     */
                    ForceRedirectConfig GetForceRedirect() const;

                    /**
                     * 设置<p>Force HTTPS</p>
                     * @param _forceRedirect <p>Force HTTPS</p>
                     * 
                     */
                    void SetForceRedirect(const ForceRedirectConfig& _forceRedirect);

                    /**
                     * 判断参数 ForceRedirect 是否已赋值
                     * @return ForceRedirect 是否已赋值
                     * 
                     */
                    bool ForceRedirectHasBeenSet() const;

                    /**
                     * 获取<p>HSTS</p>
                     * @return Hsts <p>HSTS</p>
                     * 
                     */
                    HstsConfig GetHsts() const;

                    /**
                     * 设置<p>HSTS</p>
                     * @param _hsts <p>HSTS</p>
                     * 
                     */
                    void SetHsts(const HstsConfig& _hsts);

                    /**
                     * 判断参数 Hsts 是否已赋值
                     * @return Hsts 是否已赋值
                     * 
                     */
                    bool HstsHasBeenSet() const;

                    /**
                     * 获取<p>Ownership verification</p>
                     * @return OwnershipVerification <p>Ownership verification</p>
                     * 
                     */
                    OwnershipVerification GetOwnershipVerification() const;

                    /**
                     * 设置<p>Ownership verification</p>
                     * @param _ownershipVerification <p>Ownership verification</p>
                     * 
                     */
                    void SetOwnershipVerification(const OwnershipVerification& _ownershipVerification);

                    /**
                     * 判断参数 OwnershipVerification 是否已赋值
                     * @return OwnershipVerification 是否已赋值
                     * 
                     */
                    bool OwnershipVerificationHasBeenSet() const;

                private:

                    /**
                     * <p>Custom or Preset</p>
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * <p>Domain name.</p>
                     */
                    std::string m_domain;
                    bool m_domainHasBeenSet;

                    /**
                     * <p>Domain name status</p>
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * <p>Bound environment slug. Default value: Production</p>
                     */
                    std::string m_env;
                    bool m_envHasBeenSet;

                    /**
                     * <p>Site ID</p>
                     */
                    std::string m_zoneId;
                    bool m_zoneIdHasBeenSet;

                    /**
                     * <p>Acceleration region</p>
                     */
                    std::string m_area;
                    bool m_areaHasBeenSet;

                    /**
                     * <p>CNAME</p>
                     */
                    std::string m_cname;
                    bool m_cnameHasBeenSet;

                    /**
                     * <p>Primary domain name.</p>
                     */
                    std::string m_mainDomain;
                    bool m_mainDomainHasBeenSet;

                    /**
                     * <p>IPv6</p>
                     */
                    SwitchConfig m_ipv6;
                    bool m_ipv6HasBeenSet;

                    /**
                     * <p>HTTP/2</p>
                     */
                    SwitchConfig m_http2;
                    bool m_http2HasBeenSet;

                    /**
                     * <p>OCSP</p>
                     */
                    SwitchConfig m_ocspStapling;
                    bool m_ocspStaplingHasBeenSet;

                    /**
                     * <p>Force HTTPS</p>
                     */
                    ForceRedirectConfig m_forceRedirect;
                    bool m_forceRedirectHasBeenSet;

                    /**
                     * <p>HSTS</p>
                     */
                    HstsConfig m_hsts;
                    bool m_hstsHasBeenSet;

                    /**
                     * <p>Ownership verification</p>
                     */
                    OwnershipVerification m_ownershipVerification;
                    bool m_ownershipVerificationHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MAKERS_V20261113_MODEL_ZONEDOMAIN_H_
