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
                * Origin Server Configuration
                */
                class Origin : public AbstractModel
                {
                public:
                    Origin();
                    ~Origin() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取List of main origin sites. When modifying the main origin site, the corresponding OriginType needs to be filled in at the same time.
                     * @return Origins List of main origin sites. When modifying the main origin site, the corresponding OriginType needs to be filled in at the same time.
                     * 
                     */
                    std::vector<std::string> GetOrigins() const;

                    /**
                     * 设置List of main origin sites. When modifying the main origin site, the corresponding OriginType needs to be filled in at the same time.
                     * @param _origins List of main origin sites. When modifying the main origin site, the corresponding OriginType needs to be filled in at the same time.
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
                     * 获取Main origin site type, input parameters support the following types: <li>domain: domain name type;</li> <li>ip: IP list as the origin site;</li> <li>third_party: third-party storage origin site . </li>
                     * @return OriginType Main origin site type, input parameters support the following types: <li>domain: domain name type;</li> <li>ip: IP list as the origin site;</li> <li>third_party: third-party storage origin site . </li>
                     * 
                     */
                    std::string GetOriginType() const;

                    /**
                     * 设置Main origin site type, input parameters support the following types: <li>domain: domain name type;</li> <li>ip: IP list as the origin site;</li> <li>third_party: third-party storage origin site . </li>
                     * @param _originType Main origin site type, input parameters support the following types: <li>domain: domain name type;</li> <li>ip: IP list as the origin site;</li> <li>third_party: third-party storage origin site . </li>
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
                     * 获取When returning to the main origin server, the Host header will default to the accelerated domain name if it is not filled in. When the origin server type is object storage, the ServerName field is required.
                     * @return ServerName When returning to the main origin server, the Host header will default to the accelerated domain name if it is not filled in. When the origin server type is object storage, the ServerName field is required.
                     * 
                     */
                    std::string GetServerName() const;

                    /**
                     * 设置When returning to the main origin server, the Host header will default to the accelerated domain name if it is not filled in. When the origin server type is object storage, the ServerName field is required.
                     * @param _serverName When returning to the main origin server, the Host header will default to the accelerated domain name if it is not filled in. When the origin server type is object storage, the ServerName field is required.
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
                     * 获取Back-to-origin protocol configuration: <li>http: Forces HTTP back-to-origin;</li> <li>follow: The protocol follows back-to-origin;</li> <li>https: Forces https back-to-origin, and https back-to-origin only supports origin. Station port 443. </li>
                     * @return OriginPullProtocol Back-to-origin protocol configuration: <li>http: Forces HTTP back-to-origin;</li> <li>follow: The protocol follows back-to-origin;</li> <li>https: Forces https back-to-origin, and https back-to-origin only supports origin. Station port 443. </li>
                     * 
                     */
                    std::string GetOriginPullProtocol() const;

                    /**
                     * 设置Back-to-origin protocol configuration: <li>http: Forces HTTP back-to-origin;</li> <li>follow: The protocol follows back-to-origin;</li> <li>https: Forces https back-to-origin, and https back-to-origin only supports origin. Station port 443. </li>
                     * @param _originPullProtocol Back-to-origin protocol configuration: <li>http: Forces HTTP back-to-origin;</li> <li>follow: The protocol follows back-to-origin;</li> <li>https: Forces https back-to-origin, and https back-to-origin only supports origin. Station port 443. </li>
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
                     * 获取Backup source site list. When modifying the backup origin site, the corresponding OriginType needs to be filled in at the same time.
                     * @return BackupOrigins Backup source site list. When modifying the backup origin site, the corresponding OriginType needs to be filled in at the same time.
                     * 
                     */
                    std::vector<std::string> GetBackupOrigins() const;

                    /**
                     * 设置Backup source site list. When modifying the backup origin site, the corresponding OriginType needs to be filled in at the same time.
                     * @param _backupOrigins Backup source site list. When modifying the backup origin site, the corresponding OriginType needs to be filled in at the same time.
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
                     * 获取Backup origin site type, input parameters support the following types: <li>domain: domain name type;</li> <li>ip: IP list as the origin site;</li> <li>third_party: third-party storage origin site . </li>
                     * @return BackupOriginType Backup origin site type, input parameters support the following types: <li>domain: domain name type;</li> <li>ip: IP list as the origin site;</li> <li>third_party: third-party storage origin site . </li>
                     * 
                     */
                    std::string GetBackupOriginType() const;

                    /**
                     * 设置Backup origin site type, input parameters support the following types: <li>domain: domain name type;</li> <li>ip: IP list as the origin site;</li> <li>third_party: third-party storage origin site . </li>
                     * @param _backupOriginType Backup origin site type, input parameters support the following types: <li>domain: domain name type;</li> <li>ip: IP list as the origin site;</li> <li>third_party: third-party storage origin site . </li>
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
                     * 获取Host header used when accessing the backup origin server. If it is left empty, the ServerName of primary origin server will be used by default. Note: This field may return null, indicating that no valid value can be obtained.
                     * @return BackupServerName Host header used when accessing the backup origin server. If it is left empty, the ServerName of primary origin server will be used by default. Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    std::string GetBackupServerName() const;

                    /**
                     * 设置Host header used when accessing the backup origin server. If it is left empty, the ServerName of primary origin server will be used by default. Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _backupServerName Host header used when accessing the backup origin server. If it is left empty, the ServerName of primary origin server will be used by default. Note: This field may return null, indicating that no valid value can be obtained.
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
                     * 获取Object storage back to the origin vendor. Required when the origin site type is a third-party storage origin site (third_party). Optional values u200bu200binclude the following: <li>aws_s3: AWS S3;</li> <li>ali_oss: Alibaba Cloud OSS; </li> <li>hw_obs: Huawei OBS;</li> <li>others: object storage from other manufacturers, only supports object storage compatible with AWS signature algorithm, such as Tencent Cloud COS. </li>
                     * @return OriginCompany Object storage back to the origin vendor. Required when the origin site type is a third-party storage origin site (third_party). Optional values u200bu200binclude the following: <li>aws_s3: AWS S3;</li> <li>ali_oss: Alibaba Cloud OSS; </li> <li>hw_obs: Huawei OBS;</li> <li>others: object storage from other manufacturers, only supports object storage compatible with AWS signature algorithm, such as Tencent Cloud COS. </li>
                     * 
                     */
                    std::string GetOriginCompany() const;

                    /**
                     * 设置Object storage back to the origin vendor. Required when the origin site type is a third-party storage origin site (third_party). Optional values u200bu200binclude the following: <li>aws_s3: AWS S3;</li> <li>ali_oss: Alibaba Cloud OSS; </li> <li>hw_obs: Huawei OBS;</li> <li>others: object storage from other manufacturers, only supports object storage compatible with AWS signature algorithm, such as Tencent Cloud COS. </li>
                     * @param _originCompany Object storage back to the origin vendor. Required when the origin site type is a third-party storage origin site (third_party). Optional values u200bu200binclude the following: <li>aws_s3: AWS S3;</li> <li>ali_oss: Alibaba Cloud OSS; </li> <li>hw_obs: Huawei OBS;</li> <li>others: object storage from other manufacturers, only supports object storage compatible with AWS signature algorithm, such as Tencent Cloud COS. </li>
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
                     * List of main origin sites. When modifying the main origin site, the corresponding OriginType needs to be filled in at the same time.
                     */
                    std::vector<std::string> m_origins;
                    bool m_originsHasBeenSet;

                    /**
                     * Main origin site type, input parameters support the following types: <li>domain: domain name type;</li> <li>ip: IP list as the origin site;</li> <li>third_party: third-party storage origin site . </li>
                     */
                    std::string m_originType;
                    bool m_originTypeHasBeenSet;

                    /**
                     * When returning to the main origin server, the Host header will default to the accelerated domain name if it is not filled in. When the origin server type is object storage, the ServerName field is required.
                     */
                    std::string m_serverName;
                    bool m_serverNameHasBeenSet;

                    /**
                     * Back-to-origin protocol configuration: <li>http: Forces HTTP back-to-origin;</li> <li>follow: The protocol follows back-to-origin;</li> <li>https: Forces https back-to-origin, and https back-to-origin only supports origin. Station port 443. </li>
                     */
                    std::string m_originPullProtocol;
                    bool m_originPullProtocolHasBeenSet;

                    /**
                     * Backup source site list. When modifying the backup origin site, the corresponding OriginType needs to be filled in at the same time.
                     */
                    std::vector<std::string> m_backupOrigins;
                    bool m_backupOriginsHasBeenSet;

                    /**
                     * Backup origin site type, input parameters support the following types: <li>domain: domain name type;</li> <li>ip: IP list as the origin site;</li> <li>third_party: third-party storage origin site . </li>
                     */
                    std::string m_backupOriginType;
                    bool m_backupOriginTypeHasBeenSet;

                    /**
                     * Host header used when accessing the backup origin server. If it is left empty, the ServerName of primary origin server will be used by default. Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    std::string m_backupServerName;
                    bool m_backupServerNameHasBeenSet;

                    /**
                     * Object storage back to the origin vendor. Required when the origin site type is a third-party storage origin site (third_party). Optional values u200bu200binclude the following: <li>aws_s3: AWS S3;</li> <li>ali_oss: Alibaba Cloud OSS; </li> <li>hw_obs: Huawei OBS;</li> <li>others: object storage from other manufacturers, only supports object storage compatible with AWS signature algorithm, such as Tencent Cloud COS. </li>
                     */
                    std::string m_originCompany;
                    bool m_originCompanyHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20180717_MODEL_ORIGIN_H_
