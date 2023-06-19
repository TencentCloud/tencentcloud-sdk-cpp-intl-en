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
                     * 获取Primary origin server list When modifying the origin server, you need to enter the corresponding OriginType. Note: This field may return null, indicating that no valid value was found.
                     * @return Origins Primary origin server list When modifying the origin server, you need to enter the corresponding OriginType. Note: This field may return null, indicating that no valid value was found.
                     * 
                     */
                    std::vector<std::string> GetOrigins() const;

                    /**
                     * 设置Primary origin server list When modifying the origin server, you need to enter the corresponding OriginType. Note: This field may return null, indicating that no valid value was found.
                     * @param _origins Primary origin server list When modifying the origin server, you need to enter the corresponding OriginType. Note: This field may return null, indicating that no valid value was found.
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
                     * 获取Primary origin server type The following types are supported for input parameters: <li> domain:domain；</li> <li>ip：IP address；</li> <li>third_party：third-party object storage origin.</li>
                     * @return OriginType Primary origin server type The following types are supported for input parameters: <li> domain:domain；</li> <li>ip：IP address；</li> <li>third_party：third-party object storage origin.</li>
                     * 
                     */
                    std::string GetOriginType() const;

                    /**
                     * 设置Primary origin server type The following types are supported for input parameters: <li> domain:domain；</li> <li>ip：IP address；</li> <li>third_party：third-party object storage origin.</li>
                     * @param _originType Primary origin server type The following types are supported for input parameters: <li> domain:domain；</li> <li>ip：IP address；</li> <li>third_party：third-party object storage origin.</li>
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
                     * 获取Host header used when accessing the primary origin server. If it is left empty, the acceleration domain name will be used by default.When the origin server type is object storage, the ServerName field is required.
                     * @return ServerName Host header used when accessing the primary origin server. If it is left empty, the acceleration domain name will be used by default.When the origin server type is object storage, the ServerName field is required.
                     * 
                     */
                    std::string GetServerName() const;

                    /**
                     * 设置Host header used when accessing the primary origin server. If it is left empty, the acceleration domain name will be used by default.When the origin server type is object storage, the ServerName field is required.
                     * @param _serverName Host header used when accessing the primary origin server. If it is left empty, the acceleration domain name will be used by default.When the origin server type is object storage, the ServerName field is required.
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
                     * 获取Origin-pull protocol configuration http: forced HTTP origin-pull follow: protocol follow origin-pull https: forced HTTPS origin-pull. This only supports origin server port 443 for origin-pull. Note: This field may return null, indicating that no valid value can be obtained.
                     * @return OriginPullProtocol Origin-pull protocol configuration http: forced HTTP origin-pull follow: protocol follow origin-pull https: forced HTTPS origin-pull. This only supports origin server port 443 for origin-pull. Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    std::string GetOriginPullProtocol() const;

                    /**
                     * 设置Origin-pull protocol configuration http: forced HTTP origin-pull follow: protocol follow origin-pull https: forced HTTPS origin-pull. This only supports origin server port 443 for origin-pull. Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _originPullProtocol Origin-pull protocol configuration http: forced HTTP origin-pull follow: protocol follow origin-pull https: forced HTTPS origin-pull. This only supports origin server port 443 for origin-pull. Note: This field may return null, indicating that no valid value can be obtained.
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
                     * 获取Backup origin server list When modifying the backup origin server, you need to enter the corresponding BackupOriginType. Note: This field may return null, indicating that no valid value can be obtained.
                     * @return BackupOrigins Backup origin server list When modifying the backup origin server, you need to enter the corresponding BackupOriginType. Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    std::vector<std::string> GetBackupOrigins() const;

                    /**
                     * 设置Backup origin server list When modifying the backup origin server, you need to enter the corresponding BackupOriginType. Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _backupOrigins Backup origin server list When modifying the backup origin server, you need to enter the corresponding BackupOriginType. Note: This field may return null, indicating that no valid value can be obtained.
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
                     * 获取 Backup origin server type, which supports the following types: <li>domain：Domain；</li> <li>ip：IP address；</li> <li>third_party：third-party object storage origin.</li>
                     * @return BackupOriginType  Backup origin server type, which supports the following types: <li>domain：Domain；</li> <li>ip：IP address；</li> <li>third_party：third-party object storage origin.</li>
                     * 
                     */
                    std::string GetBackupOriginType() const;

                    /**
                     * 设置 Backup origin server type, which supports the following types: <li>domain：Domain；</li> <li>ip：IP address；</li> <li>third_party：third-party object storage origin.</li>
                     * @param _backupOriginType  Backup origin server type, which supports the following types: <li>domain：Domain；</li> <li>ip：IP address；</li> <li>third_party：third-party object storage origin.</li>
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
                     * 获取The object storage returns to the source vendor. It is required when the source site type is a third-party storage source site (third_party). The optional values include the following:<li>aws_s3：AWS S3;</li> <li>ali_oss：Alibaba Cloud OSS;</li> <li>hw_obs：Huawei OBS;</li> <li>others：Object storage from other vendors only supports object storage compatible with the AWS signature algorithm, such as Tencent Cloud COS.</li>
                     * @return OriginCompany The object storage returns to the source vendor. It is required when the source site type is a third-party storage source site (third_party). The optional values include the following:<li>aws_s3：AWS S3;</li> <li>ali_oss：Alibaba Cloud OSS;</li> <li>hw_obs：Huawei OBS;</li> <li>others：Object storage from other vendors only supports object storage compatible with the AWS signature algorithm, such as Tencent Cloud COS.</li>
                     * 
                     */
                    std::string GetOriginCompany() const;

                    /**
                     * 设置The object storage returns to the source vendor. It is required when the source site type is a third-party storage source site (third_party). The optional values include the following:<li>aws_s3：AWS S3;</li> <li>ali_oss：Alibaba Cloud OSS;</li> <li>hw_obs：Huawei OBS;</li> <li>others：Object storage from other vendors only supports object storage compatible with the AWS signature algorithm, such as Tencent Cloud COS.</li>
                     * @param _originCompany The object storage returns to the source vendor. It is required when the source site type is a third-party storage source site (third_party). The optional values include the following:<li>aws_s3：AWS S3;</li> <li>ali_oss：Alibaba Cloud OSS;</li> <li>hw_obs：Huawei OBS;</li> <li>others：Object storage from other vendors only supports object storage compatible with the AWS signature algorithm, such as Tencent Cloud COS.</li>
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
                     * Primary origin server list When modifying the origin server, you need to enter the corresponding OriginType. Note: This field may return null, indicating that no valid value was found.
                     */
                    std::vector<std::string> m_origins;
                    bool m_originsHasBeenSet;

                    /**
                     * Primary origin server type The following types are supported for input parameters: <li> domain:domain；</li> <li>ip：IP address；</li> <li>third_party：third-party object storage origin.</li>
                     */
                    std::string m_originType;
                    bool m_originTypeHasBeenSet;

                    /**
                     * Host header used when accessing the primary origin server. If it is left empty, the acceleration domain name will be used by default.When the origin server type is object storage, the ServerName field is required.
                     */
                    std::string m_serverName;
                    bool m_serverNameHasBeenSet;

                    /**
                     * Origin-pull protocol configuration http: forced HTTP origin-pull follow: protocol follow origin-pull https: forced HTTPS origin-pull. This only supports origin server port 443 for origin-pull. Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    std::string m_originPullProtocol;
                    bool m_originPullProtocolHasBeenSet;

                    /**
                     * Backup origin server list When modifying the backup origin server, you need to enter the corresponding BackupOriginType. Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    std::vector<std::string> m_backupOrigins;
                    bool m_backupOriginsHasBeenSet;

                    /**
                     *  Backup origin server type, which supports the following types: <li>domain：Domain；</li> <li>ip：IP address；</li> <li>third_party：third-party object storage origin.</li>
                     */
                    std::string m_backupOriginType;
                    bool m_backupOriginTypeHasBeenSet;

                    /**
                     * Host header used when accessing the backup origin server. If it is left empty, the ServerName of primary origin server will be used by default. Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    std::string m_backupServerName;
                    bool m_backupServerNameHasBeenSet;

                    /**
                     * The object storage returns to the source vendor. It is required when the source site type is a third-party storage source site (third_party). The optional values include the following:<li>aws_s3：AWS S3;</li> <li>ali_oss：Alibaba Cloud OSS;</li> <li>hw_obs：Huawei OBS;</li> <li>others：Object storage from other vendors only supports object storage compatible with the AWS signature algorithm, such as Tencent Cloud COS.</li>
                     */
                    std::string m_originCompany;
                    bool m_originCompanyHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20180717_MODEL_ORIGIN_H_
