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

#ifndef TENCENTCLOUD_ECDN_V20191012_MODEL_ORIGIN_H_
#define TENCENTCLOUD_ECDN_V20191012_MODEL_ORIGIN_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Ecdn
    {
        namespace V20191012
        {
            namespace Model
            {
                /**
                * Origin server configuration.
                */
                class Origin : public AbstractModel
                {
                public:
                    Origin();
                    ~Origin() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Primary origin server list. The default format is ["ip1:port1", "ip2:port2"].
Weights can be configured in the origin server list. The weight format of IP origin servers is ["ip1:port1:weight1", "ip2:port2:weight2"].
                     * @return Origins Primary origin server list. The default format is ["ip1:port1", "ip2:port2"].
Weights can be configured in the origin server list. The weight format of IP origin servers is ["ip1:port1:weight1", "ip2:port2:weight2"].
                     */
                    std::vector<std::string> GetOrigins() const;

                    /**
                     * 设置Primary origin server list. The default format is ["ip1:port1", "ip2:port2"].
Weights can be configured in the origin server list. The weight format of IP origin servers is ["ip1:port1:weight1", "ip2:port2:weight2"].
                     * @param Origins Primary origin server list. The default format is ["ip1:port1", "ip2:port2"].
Weights can be configured in the origin server list. The weight format of IP origin servers is ["ip1:port1:weight1", "ip2:port2:weight2"].
                     */
                    void SetOrigins(const std::vector<std::string>& _origins);

                    /**
                     * 判断参数 Origins 是否已赋值
                     * @return Origins 是否已赋值
                     */
                    bool OriginsHasBeenSet() const;

                    /**
                     * 获取Primary origin server type. Valid values: domain (domain name origin server), ip (IP origin server).
This is required when setting `Origins`.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return OriginType Primary origin server type. Valid values: domain (domain name origin server), ip (IP origin server).
This is required when setting `Origins`.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string GetOriginType() const;

                    /**
                     * 设置Primary origin server type. Valid values: domain (domain name origin server), ip (IP origin server).
This is required when setting `Origins`.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param OriginType Primary origin server type. Valid values: domain (domain name origin server), ip (IP origin server).
This is required when setting `Origins`.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    void SetOriginType(const std::string& _originType);

                    /**
                     * 判断参数 OriginType 是否已赋值
                     * @return OriginType 是否已赋值
                     */
                    bool OriginTypeHasBeenSet() const;

                    /**
                     * 获取Host header value during origin-pull.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return ServerName Host header value during origin-pull.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string GetServerName() const;

                    /**
                     * 设置Host header value during origin-pull.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param ServerName Host header value during origin-pull.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    void SetServerName(const std::string& _serverName);

                    /**
                     * 判断参数 ServerName 是否已赋值
                     * @return ServerName 是否已赋值
                     */
                    bool ServerNameHasBeenSet() const;

                    /**
                     * 获取Origin-pull protocol type. Valid values: http (forced HTTP origin-pull), follow (protocol follow), https (HTTPS origin-pull).
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return OriginPullProtocol Origin-pull protocol type. Valid values: http (forced HTTP origin-pull), follow (protocol follow), https (HTTPS origin-pull).
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string GetOriginPullProtocol() const;

                    /**
                     * 设置Origin-pull protocol type. Valid values: http (forced HTTP origin-pull), follow (protocol follow), https (HTTPS origin-pull).
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param OriginPullProtocol Origin-pull protocol type. Valid values: http (forced HTTP origin-pull), follow (protocol follow), https (HTTPS origin-pull).
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    void SetOriginPullProtocol(const std::string& _originPullProtocol);

                    /**
                     * 判断参数 OriginPullProtocol 是否已赋值
                     * @return OriginPullProtocol 是否已赋值
                     */
                    bool OriginPullProtocolHasBeenSet() const;

                    /**
                     * 获取Secondary origin server list.
                     * @return BackupOrigins Secondary origin server list.
                     */
                    std::vector<std::string> GetBackupOrigins() const;

                    /**
                     * 设置Secondary origin server list.
                     * @param BackupOrigins Secondary origin server list.
                     */
                    void SetBackupOrigins(const std::vector<std::string>& _backupOrigins);

                    /**
                     * 判断参数 BackupOrigins 是否已赋值
                     * @return BackupOrigins 是否已赋值
                     */
                    bool BackupOriginsHasBeenSet() const;

                    /**
                     * 获取Secondary origin server type, which is the same as `OriginType`.
This is required when setting `BackupOrigins`.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return BackupOriginType Secondary origin server type, which is the same as `OriginType`.
This is required when setting `BackupOrigins`.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string GetBackupOriginType() const;

                    /**
                     * 设置Secondary origin server type, which is the same as `OriginType`.
This is required when setting `BackupOrigins`.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param BackupOriginType Secondary origin server type, which is the same as `OriginType`.
This is required when setting `BackupOrigins`.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    void SetBackupOriginType(const std::string& _backupOriginType);

                    /**
                     * 判断参数 BackupOriginType 是否已赋值
                     * @return BackupOriginType 是否已赋值
                     */
                    bool BackupOriginTypeHasBeenSet() const;

                private:

                    /**
                     * Primary origin server list. The default format is ["ip1:port1", "ip2:port2"].
Weights can be configured in the origin server list. The weight format of IP origin servers is ["ip1:port1:weight1", "ip2:port2:weight2"].
                     */
                    std::vector<std::string> m_origins;
                    bool m_originsHasBeenSet;

                    /**
                     * Primary origin server type. Valid values: domain (domain name origin server), ip (IP origin server).
This is required when setting `Origins`.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_originType;
                    bool m_originTypeHasBeenSet;

                    /**
                     * Host header value during origin-pull.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_serverName;
                    bool m_serverNameHasBeenSet;

                    /**
                     * Origin-pull protocol type. Valid values: http (forced HTTP origin-pull), follow (protocol follow), https (HTTPS origin-pull).
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_originPullProtocol;
                    bool m_originPullProtocolHasBeenSet;

                    /**
                     * Secondary origin server list.
                     */
                    std::vector<std::string> m_backupOrigins;
                    bool m_backupOriginsHasBeenSet;

                    /**
                     * Secondary origin server type, which is the same as `OriginType`.
This is required when setting `BackupOrigins`.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_backupOriginType;
                    bool m_backupOriginTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ECDN_V20191012_MODEL_ORIGIN_H_
