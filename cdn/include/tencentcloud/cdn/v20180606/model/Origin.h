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

#ifndef TENCENTCLOUD_CDN_V20180606_MODEL_ORIGIN_H_
#define TENCENTCLOUD_CDN_V20180606_MODEL_ORIGIN_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cdn/v20180606/model/PathRule.h>
#include <tencentcloud/cdn/v20180606/model/PathBasedOriginRule.h>
#include <tencentcloud/cdn/v20180606/model/AdvanceHttps.h>


namespace TencentCloud
{
    namespace Cdn
    {
        namespace V20180606
        {
            namespace Model
            {
                /**
                * Complex origin server configurations. The following configurations are supported:
+ Origin server specified as a single domain name
+ Origin server specified as multiple IPs. Supported port range: 1-65535; Supported weight range: 1-100. Format: IP:Port:Weight.
+ Origin-pull domain name configuration
+ Cloud Object Storage (COS) specified as origin server
+ Hot backup origin server specified as a single domain name
+ Hot backup origin server specified as multiple IPs. Supported port range: 1-65535. At present, weight configuration is not supported.
+ Hot backup origin server origin-pull domain name configuration
                */
                class Origin : public AbstractModel
                {
                public:
                    Origin();
                    ~Origin() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Primary origin server list
When modifying the origin server, you need to enter the corresponding OriginType.
Note: This field may return `null`, indicating that no valid value was found.
                     * @return Origins Primary origin server list
When modifying the origin server, you need to enter the corresponding OriginType.
Note: This field may return `null`, indicating that no valid value was found.
                     */
                    std::vector<std::string> GetOrigins() const;

                    /**
                     * 设置Primary origin server list
When modifying the origin server, you need to enter the corresponding OriginType.
Note: This field may return `null`, indicating that no valid value was found.
                     * @param Origins Primary origin server list
When modifying the origin server, you need to enter the corresponding OriginType.
Note: This field may return `null`, indicating that no valid value was found.
                     */
                    void SetOrigins(const std::vector<std::string>& _origins);

                    /**
                     * 判断参数 Origins 是否已赋值
                     * @return Origins 是否已赋值
                     */
                    bool OriginsHasBeenSet() const;

                    /**
                     * 获取Primary origin server type
The following types are supported for input parameters:
`domain`: domain name
`domainv6`: IPv6 domain name
cos: COS origin
`ip`: IP address
ipv6: origin server list is a single IPv6 address
`ip_ipv6`: multiple IPv4 addresses and one IPv6 address
`ip_domain`: IP addresses and domain names (only available to beta users)
`ip_domainv6`: Multiple IPv4 addresses and one IPv6 domain name
`ipv6_domain`: multiple IPv6 addresses and one domain name
`ipv6_domainv6`: Multiple IPv6 addresses and one IPv6 domain name
`domain_domainv6`: Multiple IPv4 domain names and one IPv6 domain name
`ip_ipv6_domain`: multiple IPv4 and IPv6 addresses and one domain name
`ip_ipv6_domainv6`: Multiple IPv4 and IPv6 addresses and one IPv6 domain name
`ip_domain_domainv6`: Multiple IPv4 addresses and IPv4 domain names and one IPv6 domain name
`ipv6_domain_domainv6`: Multiple IPv4 domain names and IPv6 addresses and one IPv6 domain name
`ip_ipv6_domain_domainv6`: Multiple IPv4 and IPv6 addresses and IPv4 domain names and one IPv6 domain name
The following types of output parameters are added:
image: Cloud Infinite origin
ftp: legacy FTP origin, which is no longer maintained.
When modifying `Origins`, you need to enter the corresponding OriginType.
The IPv6 feature is not generally available yet. Please send in a whitelist application to use this feature.
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * @return OriginType Primary origin server type
The following types are supported for input parameters:
`domain`: domain name
`domainv6`: IPv6 domain name
cos: COS origin
`ip`: IP address
ipv6: origin server list is a single IPv6 address
`ip_ipv6`: multiple IPv4 addresses and one IPv6 address
`ip_domain`: IP addresses and domain names (only available to beta users)
`ip_domainv6`: Multiple IPv4 addresses and one IPv6 domain name
`ipv6_domain`: multiple IPv6 addresses and one domain name
`ipv6_domainv6`: Multiple IPv6 addresses and one IPv6 domain name
`domain_domainv6`: Multiple IPv4 domain names and one IPv6 domain name
`ip_ipv6_domain`: multiple IPv4 and IPv6 addresses and one domain name
`ip_ipv6_domainv6`: Multiple IPv4 and IPv6 addresses and one IPv6 domain name
`ip_domain_domainv6`: Multiple IPv4 addresses and IPv4 domain names and one IPv6 domain name
`ipv6_domain_domainv6`: Multiple IPv4 domain names and IPv6 addresses and one IPv6 domain name
`ip_ipv6_domain_domainv6`: Multiple IPv4 and IPv6 addresses and IPv4 domain names and one IPv6 domain name
The following types of output parameters are added:
image: Cloud Infinite origin
ftp: legacy FTP origin, which is no longer maintained.
When modifying `Origins`, you need to enter the corresponding OriginType.
The IPv6 feature is not generally available yet. Please send in a whitelist application to use this feature.
Note: this field may return `null`, indicating that no valid values can be obtained.
                     */
                    std::string GetOriginType() const;

                    /**
                     * 设置Primary origin server type
The following types are supported for input parameters:
`domain`: domain name
`domainv6`: IPv6 domain name
cos: COS origin
`ip`: IP address
ipv6: origin server list is a single IPv6 address
`ip_ipv6`: multiple IPv4 addresses and one IPv6 address
`ip_domain`: IP addresses and domain names (only available to beta users)
`ip_domainv6`: Multiple IPv4 addresses and one IPv6 domain name
`ipv6_domain`: multiple IPv6 addresses and one domain name
`ipv6_domainv6`: Multiple IPv6 addresses and one IPv6 domain name
`domain_domainv6`: Multiple IPv4 domain names and one IPv6 domain name
`ip_ipv6_domain`: multiple IPv4 and IPv6 addresses and one domain name
`ip_ipv6_domainv6`: Multiple IPv4 and IPv6 addresses and one IPv6 domain name
`ip_domain_domainv6`: Multiple IPv4 addresses and IPv4 domain names and one IPv6 domain name
`ipv6_domain_domainv6`: Multiple IPv4 domain names and IPv6 addresses and one IPv6 domain name
`ip_ipv6_domain_domainv6`: Multiple IPv4 and IPv6 addresses and IPv4 domain names and one IPv6 domain name
The following types of output parameters are added:
image: Cloud Infinite origin
ftp: legacy FTP origin, which is no longer maintained.
When modifying `Origins`, you need to enter the corresponding OriginType.
The IPv6 feature is not generally available yet. Please send in a whitelist application to use this feature.
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * @param OriginType Primary origin server type
The following types are supported for input parameters:
`domain`: domain name
`domainv6`: IPv6 domain name
cos: COS origin
`ip`: IP address
ipv6: origin server list is a single IPv6 address
`ip_ipv6`: multiple IPv4 addresses and one IPv6 address
`ip_domain`: IP addresses and domain names (only available to beta users)
`ip_domainv6`: Multiple IPv4 addresses and one IPv6 domain name
`ipv6_domain`: multiple IPv6 addresses and one domain name
`ipv6_domainv6`: Multiple IPv6 addresses and one IPv6 domain name
`domain_domainv6`: Multiple IPv4 domain names and one IPv6 domain name
`ip_ipv6_domain`: multiple IPv4 and IPv6 addresses and one domain name
`ip_ipv6_domainv6`: Multiple IPv4 and IPv6 addresses and one IPv6 domain name
`ip_domain_domainv6`: Multiple IPv4 addresses and IPv4 domain names and one IPv6 domain name
`ipv6_domain_domainv6`: Multiple IPv4 domain names and IPv6 addresses and one IPv6 domain name
`ip_ipv6_domain_domainv6`: Multiple IPv4 and IPv6 addresses and IPv4 domain names and one IPv6 domain name
The following types of output parameters are added:
image: Cloud Infinite origin
ftp: legacy FTP origin, which is no longer maintained.
When modifying `Origins`, you need to enter the corresponding OriginType.
The IPv6 feature is not generally available yet. Please send in a whitelist application to use this feature.
Note: this field may return `null`, indicating that no valid values can be obtained.
                     */
                    void SetOriginType(const std::string& _originType);

                    /**
                     * 判断参数 OriginType 是否已赋值
                     * @return OriginType 是否已赋值
                     */
                    bool OriginTypeHasBeenSet() const;

                    /**
                     * 获取It is required when a COS origin or third-party origin is used for acceleration.
Host header used when accessing the primary origin server. If it is left empty, the acceleration domain name will be used by default.
If a wildcard domain name is accessed, then the sub-domain name during the access will be used by default.
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * @return ServerName It is required when a COS origin or third-party origin is used for acceleration.
Host header used when accessing the primary origin server. If it is left empty, the acceleration domain name will be used by default.
If a wildcard domain name is accessed, then the sub-domain name during the access will be used by default.
Note: This field may return `null`, indicating that no valid value can be obtained.
                     */
                    std::string GetServerName() const;

                    /**
                     * 设置It is required when a COS origin or third-party origin is used for acceleration.
Host header used when accessing the primary origin server. If it is left empty, the acceleration domain name will be used by default.
If a wildcard domain name is accessed, then the sub-domain name during the access will be used by default.
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * @param ServerName It is required when a COS origin or third-party origin is used for acceleration.
Host header used when accessing the primary origin server. If it is left empty, the acceleration domain name will be used by default.
If a wildcard domain name is accessed, then the sub-domain name during the access will be used by default.
Note: This field may return `null`, indicating that no valid value can be obtained.
                     */
                    void SetServerName(const std::string& _serverName);

                    /**
                     * 判断参数 ServerName 是否已赋值
                     * @return ServerName 是否已赋值
                     */
                    bool ServerNameHasBeenSet() const;

                    /**
                     * 获取When OriginType is COS, you can specify if access to private buckets is allowed.
Note: To enable this configuration, you need to first grant CDN access to the private bucket. Values: `on` and `off`.
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * @return CosPrivateAccess When OriginType is COS, you can specify if access to private buckets is allowed.
Note: To enable this configuration, you need to first grant CDN access to the private bucket. Values: `on` and `off`.
Note: This field may return `null`, indicating that no valid value can be obtained.
                     */
                    std::string GetCosPrivateAccess() const;

                    /**
                     * 设置When OriginType is COS, you can specify if access to private buckets is allowed.
Note: To enable this configuration, you need to first grant CDN access to the private bucket. Values: `on` and `off`.
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * @param CosPrivateAccess When OriginType is COS, you can specify if access to private buckets is allowed.
Note: To enable this configuration, you need to first grant CDN access to the private bucket. Values: `on` and `off`.
Note: This field may return `null`, indicating that no valid value can be obtained.
                     */
                    void SetCosPrivateAccess(const std::string& _cosPrivateAccess);

                    /**
                     * 判断参数 CosPrivateAccess 是否已赋值
                     * @return CosPrivateAccess 是否已赋值
                     */
                    bool CosPrivateAccessHasBeenSet() const;

                    /**
                     * 获取Origin-pull protocol configuration
http: forced HTTP origin-pull
follow: protocol follow origin-pull
https: forced HTTPS origin-pull. This only supports origin server port 443 for origin-pull.
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * @return OriginPullProtocol Origin-pull protocol configuration
http: forced HTTP origin-pull
follow: protocol follow origin-pull
https: forced HTTPS origin-pull. This only supports origin server port 443 for origin-pull.
Note: This field may return `null`, indicating that no valid value can be obtained.
                     */
                    std::string GetOriginPullProtocol() const;

                    /**
                     * 设置Origin-pull protocol configuration
http: forced HTTP origin-pull
follow: protocol follow origin-pull
https: forced HTTPS origin-pull. This only supports origin server port 443 for origin-pull.
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * @param OriginPullProtocol Origin-pull protocol configuration
http: forced HTTP origin-pull
follow: protocol follow origin-pull
https: forced HTTPS origin-pull. This only supports origin server port 443 for origin-pull.
Note: This field may return `null`, indicating that no valid value can be obtained.
                     */
                    void SetOriginPullProtocol(const std::string& _originPullProtocol);

                    /**
                     * 判断参数 OriginPullProtocol 是否已赋值
                     * @return OriginPullProtocol 是否已赋值
                     */
                    bool OriginPullProtocolHasBeenSet() const;

                    /**
                     * 获取Backup origin server list
When modifying the backup origin server, you need to enter the corresponding BackupOriginType.
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * @return BackupOrigins Backup origin server list
When modifying the backup origin server, you need to enter the corresponding BackupOriginType.
Note: This field may return `null`, indicating that no valid value can be obtained.
                     */
                    std::vector<std::string> GetBackupOrigins() const;

                    /**
                     * 设置Backup origin server list
When modifying the backup origin server, you need to enter the corresponding BackupOriginType.
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * @param BackupOrigins Backup origin server list
When modifying the backup origin server, you need to enter the corresponding BackupOriginType.
Note: This field may return `null`, indicating that no valid value can be obtained.
                     */
                    void SetBackupOrigins(const std::vector<std::string>& _backupOrigins);

                    /**
                     * 判断参数 BackupOrigins 是否已赋值
                     * @return BackupOrigins 是否已赋值
                     */
                    bool BackupOriginsHasBeenSet() const;

                    /**
                     * 获取Backup origin server type, which supports the following types:
`domain`: Domain name
`ip`: IP address
When modifying BackupOrigins, you need to enter the corresponding BackupOriginType.
The following backup origin servers are only available to beta users. Submit an application if you want to become a beta user.
`ipv6_domain`: Multiple IPv6 addresses and one domain name
`ip_ipv6`: Multiple IPv4 addresses and one IPv6 address
`ipv6_domain`: Multiple IPv6 addresses and one domain name
`ip_ipv6_domain`: Multiple IPv4 and IPv6 addresses and one domain name
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * @return BackupOriginType Backup origin server type, which supports the following types:
`domain`: Domain name
`ip`: IP address
When modifying BackupOrigins, you need to enter the corresponding BackupOriginType.
The following backup origin servers are only available to beta users. Submit an application if you want to become a beta user.
`ipv6_domain`: Multiple IPv6 addresses and one domain name
`ip_ipv6`: Multiple IPv4 addresses and one IPv6 address
`ipv6_domain`: Multiple IPv6 addresses and one domain name
`ip_ipv6_domain`: Multiple IPv4 and IPv6 addresses and one domain name
Note: This field may return `null`, indicating that no valid value can be obtained.
                     */
                    std::string GetBackupOriginType() const;

                    /**
                     * 设置Backup origin server type, which supports the following types:
`domain`: Domain name
`ip`: IP address
When modifying BackupOrigins, you need to enter the corresponding BackupOriginType.
The following backup origin servers are only available to beta users. Submit an application if you want to become a beta user.
`ipv6_domain`: Multiple IPv6 addresses and one domain name
`ip_ipv6`: Multiple IPv4 addresses and one IPv6 address
`ipv6_domain`: Multiple IPv6 addresses and one domain name
`ip_ipv6_domain`: Multiple IPv4 and IPv6 addresses and one domain name
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * @param BackupOriginType Backup origin server type, which supports the following types:
`domain`: Domain name
`ip`: IP address
When modifying BackupOrigins, you need to enter the corresponding BackupOriginType.
The following backup origin servers are only available to beta users. Submit an application if you want to become a beta user.
`ipv6_domain`: Multiple IPv6 addresses and one domain name
`ip_ipv6`: Multiple IPv4 addresses and one IPv6 address
`ipv6_domain`: Multiple IPv6 addresses and one domain name
`ip_ipv6_domain`: Multiple IPv4 and IPv6 addresses and one domain name
Note: This field may return `null`, indicating that no valid value can be obtained.
                     */
                    void SetBackupOriginType(const std::string& _backupOriginType);

                    /**
                     * 判断参数 BackupOriginType 是否已赋值
                     * @return BackupOriginType 是否已赋值
                     */
                    bool BackupOriginTypeHasBeenSet() const;

                    /**
                     * 获取Host header used when accessing the backup origin server. If it is left empty, the `ServerName` of primary origin server will be used by default.
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * @return BackupServerName Host header used when accessing the backup origin server. If it is left empty, the `ServerName` of primary origin server will be used by default.
Note: This field may return `null`, indicating that no valid value can be obtained.
                     */
                    std::string GetBackupServerName() const;

                    /**
                     * 设置Host header used when accessing the backup origin server. If it is left empty, the `ServerName` of primary origin server will be used by default.
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * @param BackupServerName Host header used when accessing the backup origin server. If it is left empty, the `ServerName` of primary origin server will be used by default.
Note: This field may return `null`, indicating that no valid value can be obtained.
                     */
                    void SetBackupServerName(const std::string& _backupServerName);

                    /**
                     * 判断参数 BackupServerName 是否已赋值
                     * @return BackupServerName 是否已赋值
                     */
                    bool BackupServerNameHasBeenSet() const;

                    /**
                     * 获取Origin-pull path
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * @return BasePath Origin-pull path
Note: This field may return `null`, indicating that no valid value can be obtained.
                     */
                    std::string GetBasePath() const;

                    /**
                     * 设置Origin-pull path
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * @param BasePath Origin-pull path
Note: This field may return `null`, indicating that no valid value can be obtained.
                     */
                    void SetBasePath(const std::string& _basePath);

                    /**
                     * 判断参数 BasePath 是否已赋值
                     * @return BasePath 是否已赋值
                     */
                    bool BasePathHasBeenSet() const;

                    /**
                     * 获取Origin-pull path rewriting configuration
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * @return PathRules Origin-pull path rewriting configuration
Note: This field may return `null`, indicating that no valid value can be obtained.
                     */
                    std::vector<PathRule> GetPathRules() const;

                    /**
                     * 设置Origin-pull path rewriting configuration
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * @param PathRules Origin-pull path rewriting configuration
Note: This field may return `null`, indicating that no valid value can be obtained.
                     */
                    void SetPathRules(const std::vector<PathRule>& _pathRules);

                    /**
                     * 判断参数 PathRules 是否已赋值
                     * @return PathRules 是否已赋值
                     */
                    bool PathRulesHasBeenSet() const;

                    /**
                     * 获取Path-based origin-pull configuration
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * @return PathBasedOrigin Path-based origin-pull configuration
Note: This field may return `null`, indicating that no valid value can be obtained.
                     */
                    std::vector<PathBasedOriginRule> GetPathBasedOrigin() const;

                    /**
                     * 设置Path-based origin-pull configuration
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * @param PathBasedOrigin Path-based origin-pull configuration
Note: This field may return `null`, indicating that no valid value can be obtained.
                     */
                    void SetPathBasedOrigin(const std::vector<PathBasedOriginRule>& _pathBasedOrigin);

                    /**
                     * 判断参数 PathBasedOrigin 是否已赋值
                     * @return PathBasedOrigin 是否已赋值
                     */
                    bool PathBasedOriginHasBeenSet() const;

                    /**
                     * 获取HTTPS advanced origin-pull configuration
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * @return AdvanceHttps HTTPS advanced origin-pull configuration
Note: This field may return `null`, indicating that no valid value can be obtained.
                     */
                    AdvanceHttps GetAdvanceHttps() const;

                    /**
                     * 设置HTTPS advanced origin-pull configuration
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * @param AdvanceHttps HTTPS advanced origin-pull configuration
Note: This field may return `null`, indicating that no valid value can be obtained.
                     */
                    void SetAdvanceHttps(const AdvanceHttps& _advanceHttps);

                    /**
                     * 判断参数 AdvanceHttps 是否已赋值
                     * @return AdvanceHttps 是否已赋值
                     */
                    bool AdvanceHttpsHasBeenSet() const;

                    /**
                     * 获取Object storage vendor
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * @return OriginCompany Object storage vendor
Note: This field may return `null`, indicating that no valid value can be obtained.
                     */
                    std::string GetOriginCompany() const;

                    /**
                     * 设置Object storage vendor
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * @param OriginCompany Object storage vendor
Note: This field may return `null`, indicating that no valid value can be obtained.
                     */
                    void SetOriginCompany(const std::string& _originCompany);

                    /**
                     * 判断参数 OriginCompany 是否已赋值
                     * @return OriginCompany 是否已赋值
                     */
                    bool OriginCompanyHasBeenSet() const;

                private:

                    /**
                     * Primary origin server list
When modifying the origin server, you need to enter the corresponding OriginType.
Note: This field may return `null`, indicating that no valid value was found.
                     */
                    std::vector<std::string> m_origins;
                    bool m_originsHasBeenSet;

                    /**
                     * Primary origin server type
The following types are supported for input parameters:
`domain`: domain name
`domainv6`: IPv6 domain name
cos: COS origin
`ip`: IP address
ipv6: origin server list is a single IPv6 address
`ip_ipv6`: multiple IPv4 addresses and one IPv6 address
`ip_domain`: IP addresses and domain names (only available to beta users)
`ip_domainv6`: Multiple IPv4 addresses and one IPv6 domain name
`ipv6_domain`: multiple IPv6 addresses and one domain name
`ipv6_domainv6`: Multiple IPv6 addresses and one IPv6 domain name
`domain_domainv6`: Multiple IPv4 domain names and one IPv6 domain name
`ip_ipv6_domain`: multiple IPv4 and IPv6 addresses and one domain name
`ip_ipv6_domainv6`: Multiple IPv4 and IPv6 addresses and one IPv6 domain name
`ip_domain_domainv6`: Multiple IPv4 addresses and IPv4 domain names and one IPv6 domain name
`ipv6_domain_domainv6`: Multiple IPv4 domain names and IPv6 addresses and one IPv6 domain name
`ip_ipv6_domain_domainv6`: Multiple IPv4 and IPv6 addresses and IPv4 domain names and one IPv6 domain name
The following types of output parameters are added:
image: Cloud Infinite origin
ftp: legacy FTP origin, which is no longer maintained.
When modifying `Origins`, you need to enter the corresponding OriginType.
The IPv6 feature is not generally available yet. Please send in a whitelist application to use this feature.
Note: this field may return `null`, indicating that no valid values can be obtained.
                     */
                    std::string m_originType;
                    bool m_originTypeHasBeenSet;

                    /**
                     * It is required when a COS origin or third-party origin is used for acceleration.
Host header used when accessing the primary origin server. If it is left empty, the acceleration domain name will be used by default.
If a wildcard domain name is accessed, then the sub-domain name during the access will be used by default.
Note: This field may return `null`, indicating that no valid value can be obtained.
                     */
                    std::string m_serverName;
                    bool m_serverNameHasBeenSet;

                    /**
                     * When OriginType is COS, you can specify if access to private buckets is allowed.
Note: To enable this configuration, you need to first grant CDN access to the private bucket. Values: `on` and `off`.
Note: This field may return `null`, indicating that no valid value can be obtained.
                     */
                    std::string m_cosPrivateAccess;
                    bool m_cosPrivateAccessHasBeenSet;

                    /**
                     * Origin-pull protocol configuration
http: forced HTTP origin-pull
follow: protocol follow origin-pull
https: forced HTTPS origin-pull. This only supports origin server port 443 for origin-pull.
Note: This field may return `null`, indicating that no valid value can be obtained.
                     */
                    std::string m_originPullProtocol;
                    bool m_originPullProtocolHasBeenSet;

                    /**
                     * Backup origin server list
When modifying the backup origin server, you need to enter the corresponding BackupOriginType.
Note: This field may return `null`, indicating that no valid value can be obtained.
                     */
                    std::vector<std::string> m_backupOrigins;
                    bool m_backupOriginsHasBeenSet;

                    /**
                     * Backup origin server type, which supports the following types:
`domain`: Domain name
`ip`: IP address
When modifying BackupOrigins, you need to enter the corresponding BackupOriginType.
The following backup origin servers are only available to beta users. Submit an application if you want to become a beta user.
`ipv6_domain`: Multiple IPv6 addresses and one domain name
`ip_ipv6`: Multiple IPv4 addresses and one IPv6 address
`ipv6_domain`: Multiple IPv6 addresses and one domain name
`ip_ipv6_domain`: Multiple IPv4 and IPv6 addresses and one domain name
Note: This field may return `null`, indicating that no valid value can be obtained.
                     */
                    std::string m_backupOriginType;
                    bool m_backupOriginTypeHasBeenSet;

                    /**
                     * Host header used when accessing the backup origin server. If it is left empty, the `ServerName` of primary origin server will be used by default.
Note: This field may return `null`, indicating that no valid value can be obtained.
                     */
                    std::string m_backupServerName;
                    bool m_backupServerNameHasBeenSet;

                    /**
                     * Origin-pull path
Note: This field may return `null`, indicating that no valid value can be obtained.
                     */
                    std::string m_basePath;
                    bool m_basePathHasBeenSet;

                    /**
                     * Origin-pull path rewriting configuration
Note: This field may return `null`, indicating that no valid value can be obtained.
                     */
                    std::vector<PathRule> m_pathRules;
                    bool m_pathRulesHasBeenSet;

                    /**
                     * Path-based origin-pull configuration
Note: This field may return `null`, indicating that no valid value can be obtained.
                     */
                    std::vector<PathBasedOriginRule> m_pathBasedOrigin;
                    bool m_pathBasedOriginHasBeenSet;

                    /**
                     * HTTPS advanced origin-pull configuration
Note: This field may return `null`, indicating that no valid value can be obtained.
                     */
                    AdvanceHttps m_advanceHttps;
                    bool m_advanceHttpsHasBeenSet;

                    /**
                     * Object storage vendor
Note: This field may return `null`, indicating that no valid value can be obtained.
                     */
                    std::string m_originCompany;
                    bool m_originCompanyHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CDN_V20180606_MODEL_ORIGIN_H_
