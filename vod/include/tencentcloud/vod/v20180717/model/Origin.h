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

#ifndef TENCENTCLOUD_VOD_V20180717_MODEL_ORIGIN_H_
#define TENCENTCLOUD_VOD_V20180717_MODEL_ORIGIN_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Vod
    {
        namespace V20180717
        {
            namespace Model
            {
                /**
                * Origin server configuration
                */
                class Origin : public AbstractModel
                {
                public:
                    Origin();
                    ~Origin() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Primary origin server list.
When modifying the primary origin server, fill in the corresponding OriginType at the same time.
                     * @return Origins Primary origin server list.
When modifying the primary origin server, fill in the corresponding OriginType at the same time.
                     * 
                     */
                    std::vector<std::string> GetOrigins() const;

                    /**
                     * 设置Primary origin server list.
When modifying the primary origin server, fill in the corresponding OriginType at the same time.
                     * @param _origins Primary origin server list.
When modifying the primary origin server, fill in the corresponding OriginType at the same time.
                     * 
                     */
                    void SetOrigins(const std::vector<std::string>& _origins);

                    /**
                     * 判断参数 Origins 是否已赋值
                     * @return Origins 是否已赋值
                     * 
                     */
                    bool OriginsHasBeenSet() const;

                    /**
                     * 获取Primary origin server type. Input supports the following types:
<li>domain: Domain type;</li>
<li>ip: IP list as the origin server;</li>
<li>third_party: third-party object storage origin.</li>
                     * @return OriginType Primary origin server type. Input supports the following types:
<li>domain: Domain type;</li>
<li>ip: IP list as the origin server;</li>
<li>third_party: third-party object storage origin.</li>
                     * 
                     */
                    std::string GetOriginType() const;

                    /**
                     * 设置Primary origin server type. Input supports the following types:
<li>domain: Domain type;</li>
<li>ip: IP list as the origin server;</li>
<li>third_party: third-party object storage origin.</li>
                     * @param _originType Primary origin server type. Input supports the following types:
<li>domain: Domain type;</li>
<li>ip: IP list as the origin server;</li>
<li>third_party: third-party object storage origin.</li>
                     * 
                     */
                    void SetOriginType(const std::string& _originType);

                    /**
                     * 判断参数 OriginType 是否已赋值
                     * @return OriginType 是否已赋值
                     * 
                     */
                    bool OriginTypeHasBeenSet() const;

                    /**
                     * 获取Host header when pulling from the primary origin server. If not filled, the acceleration domain name is used by default.
When the origin server type is COS, the ServerName field is required.
                     * @return ServerName Host header when pulling from the primary origin server. If not filled, the acceleration domain name is used by default.
When the origin server type is COS, the ServerName field is required.
                     * 
                     */
                    std::string GetServerName() const;

                    /**
                     * 设置Host header when pulling from the primary origin server. If not filled, the acceleration domain name is used by default.
When the origin server type is COS, the ServerName field is required.
                     * @param _serverName Host header when pulling from the primary origin server. If not filled, the acceleration domain name is used by default.
When the origin server type is COS, the ServerName field is required.
                     * 
                     */
                    void SetServerName(const std::string& _serverName);

                    /**
                     * 判断参数 ServerName 是否已赋值
                     * @return ServerName 是否已赋值
                     * 
                     */
                    bool ServerNameHasBeenSet() const;

                    /**
                     * 获取Origin-pull protocol configuration.
<li>http: Force HTTP origin-pull.</li>
<li>follow: follow protocol for origin-pull;</li>
<li>`https`: Switch HTTP requests to HTTPS. This only supports port 443 on the origin server.</li>
                     * @return OriginPullProtocol Origin-pull protocol configuration.
<li>http: Force HTTP origin-pull.</li>
<li>follow: follow protocol for origin-pull;</li>
<li>`https`: Switch HTTP requests to HTTPS. This only supports port 443 on the origin server.</li>
                     * 
                     */
                    std::string GetOriginPullProtocol() const;

                    /**
                     * 设置Origin-pull protocol configuration.
<li>http: Force HTTP origin-pull.</li>
<li>follow: follow protocol for origin-pull;</li>
<li>`https`: Switch HTTP requests to HTTPS. This only supports port 443 on the origin server.</li>
                     * @param _originPullProtocol Origin-pull protocol configuration.
<li>http: Force HTTP origin-pull.</li>
<li>follow: follow protocol for origin-pull;</li>
<li>`https`: Switch HTTP requests to HTTPS. This only supports port 443 on the origin server.</li>
                     * 
                     */
                    void SetOriginPullProtocol(const std::string& _originPullProtocol);

                    /**
                     * 判断参数 OriginPullProtocol 是否已赋值
                     * @return OriginPullProtocol 是否已赋值
                     * 
                     */
                    bool OriginPullProtocolHasBeenSet() const;

                    /**
                     * 获取Backup origin list.
When modifying the backup origin server, fill in the corresponding OriginType at the same time.
                     * @return BackupOrigins Backup origin list.
When modifying the backup origin server, fill in the corresponding OriginType at the same time.
                     * 
                     */
                    std::vector<std::string> GetBackupOrigins() const;

                    /**
                     * 设置Backup origin list.
When modifying the backup origin server, fill in the corresponding OriginType at the same time.
                     * @param _backupOrigins Backup origin list.
When modifying the backup origin server, fill in the corresponding OriginType at the same time.
                     * 
                     */
                    void SetBackupOrigins(const std::vector<std::string>& _backupOrigins);

                    /**
                     * 判断参数 BackupOrigins 是否已赋值
                     * @return BackupOrigins 是否已赋值
                     * 
                     */
                    bool BackupOriginsHasBeenSet() const;

                    /**
                     * 获取Secondary origin type. Input supports the following types:
<li>domain: Domain type;</li>
<li>ip: IP list as the origin server;</li>
<li>third_party: third-party object storage origin.</li>
                     * @return BackupOriginType Secondary origin type. Input supports the following types:
<li>domain: Domain type;</li>
<li>ip: IP list as the origin server;</li>
<li>third_party: third-party object storage origin.</li>
                     * 
                     */
                    std::string GetBackupOriginType() const;

                    /**
                     * 设置Secondary origin type. Input supports the following types:
<li>domain: Domain type;</li>
<li>ip: IP list as the origin server;</li>
<li>third_party: third-party object storage origin.</li>
                     * @param _backupOriginType Secondary origin type. Input supports the following types:
<li>domain: Domain type;</li>
<li>ip: IP list as the origin server;</li>
<li>third_party: third-party object storage origin.</li>
                     * 
                     */
                    void SetBackupOriginType(const std::string& _backupOriginType);

                    /**
                     * 判断参数 BackupOriginType 是否已赋值
                     * @return BackupOriginType 是否已赋值
                     * 
                     */
                    bool BackupOriginTypeHasBeenSet() const;

                    /**
                     * 获取Host header when pulling from the backup origin server. If not filled, the ServerName of the primary origin server is used by default.
                     * @return BackupServerName Host header when pulling from the backup origin server. If not filled, the ServerName of the primary origin server is used by default.
                     * 
                     */
                    std::string GetBackupServerName() const;

                    /**
                     * 设置Host header when pulling from the backup origin server. If not filled, the ServerName of the primary origin server is used by default.
                     * @param _backupServerName Host header when pulling from the backup origin server. If not filled, the ServerName of the primary origin server is used by default.
                     * 
                     */
                    void SetBackupServerName(const std::string& _backupServerName);

                    /**
                     * 判断参数 BackupServerName 是否已赋值
                     * @return BackupServerName 是否已赋值
                     * 
                     */
                    bool BackupServerNameHasBeenSet() const;

                    /**
                     * 获取Object storage origin service vendor. Required when the origin server type is third-party object storage origin (third_party). Optional values include the following:
<li>aws_s3:AWS S3;</li>
<li>ali_oss: Alibaba Cloud OSS;</li>
<li>hw_obs: Huawei OBS;</li>
<li>others: other vendor's object storage. Only object storage compatible with the AWS signature algorithm is supported, such as Tencent Cloud COS.</li>
                     * @return OriginCompany Object storage origin service vendor. Required when the origin server type is third-party object storage origin (third_party). Optional values include the following:
<li>aws_s3:AWS S3;</li>
<li>ali_oss: Alibaba Cloud OSS;</li>
<li>hw_obs: Huawei OBS;</li>
<li>others: other vendor's object storage. Only object storage compatible with the AWS signature algorithm is supported, such as Tencent Cloud COS.</li>
                     * 
                     */
                    std::string GetOriginCompany() const;

                    /**
                     * 设置Object storage origin service vendor. Required when the origin server type is third-party object storage origin (third_party). Optional values include the following:
<li>aws_s3:AWS S3;</li>
<li>ali_oss: Alibaba Cloud OSS;</li>
<li>hw_obs: Huawei OBS;</li>
<li>others: other vendor's object storage. Only object storage compatible with the AWS signature algorithm is supported, such as Tencent Cloud COS.</li>
                     * @param _originCompany Object storage origin service vendor. Required when the origin server type is third-party object storage origin (third_party). Optional values include the following:
<li>aws_s3:AWS S3;</li>
<li>ali_oss: Alibaba Cloud OSS;</li>
<li>hw_obs: Huawei OBS;</li>
<li>others: other vendor's object storage. Only object storage compatible with the AWS signature algorithm is supported, such as Tencent Cloud COS.</li>
                     * 
                     */
                    void SetOriginCompany(const std::string& _originCompany);

                    /**
                     * 判断参数 OriginCompany 是否已赋值
                     * @return OriginCompany 是否已赋值
                     * 
                     */
                    bool OriginCompanyHasBeenSet() const;

                private:

                    /**
                     * Primary origin server list.
When modifying the primary origin server, fill in the corresponding OriginType at the same time.
                     */
                    std::vector<std::string> m_origins;
                    bool m_originsHasBeenSet;

                    /**
                     * Primary origin server type. Input supports the following types:
<li>domain: Domain type;</li>
<li>ip: IP list as the origin server;</li>
<li>third_party: third-party object storage origin.</li>
                     */
                    std::string m_originType;
                    bool m_originTypeHasBeenSet;

                    /**
                     * Host header when pulling from the primary origin server. If not filled, the acceleration domain name is used by default.
When the origin server type is COS, the ServerName field is required.
                     */
                    std::string m_serverName;
                    bool m_serverNameHasBeenSet;

                    /**
                     * Origin-pull protocol configuration.
<li>http: Force HTTP origin-pull.</li>
<li>follow: follow protocol for origin-pull;</li>
<li>`https`: Switch HTTP requests to HTTPS. This only supports port 443 on the origin server.</li>
                     */
                    std::string m_originPullProtocol;
                    bool m_originPullProtocolHasBeenSet;

                    /**
                     * Backup origin list.
When modifying the backup origin server, fill in the corresponding OriginType at the same time.
                     */
                    std::vector<std::string> m_backupOrigins;
                    bool m_backupOriginsHasBeenSet;

                    /**
                     * Secondary origin type. Input supports the following types:
<li>domain: Domain type;</li>
<li>ip: IP list as the origin server;</li>
<li>third_party: third-party object storage origin.</li>
                     */
                    std::string m_backupOriginType;
                    bool m_backupOriginTypeHasBeenSet;

                    /**
                     * Host header when pulling from the backup origin server. If not filled, the ServerName of the primary origin server is used by default.
                     */
                    std::string m_backupServerName;
                    bool m_backupServerNameHasBeenSet;

                    /**
                     * Object storage origin service vendor. Required when the origin server type is third-party object storage origin (third_party). Optional values include the following:
<li>aws_s3:AWS S3;</li>
<li>ali_oss: Alibaba Cloud OSS;</li>
<li>hw_obs: Huawei OBS;</li>
<li>others: other vendor's object storage. Only object storage compatible with the AWS signature algorithm is supported, such as Tencent Cloud COS.</li>
                     */
                    std::string m_originCompany;
                    bool m_originCompanyHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20180717_MODEL_ORIGIN_H_
