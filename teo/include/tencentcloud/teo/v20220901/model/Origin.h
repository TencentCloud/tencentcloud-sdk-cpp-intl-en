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

#ifndef TENCENTCLOUD_TEO_V20220901_MODEL_ORIGIN_H_
#define TENCENTCLOUD_TEO_V20220901_MODEL_ORIGIN_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
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
                     * 获取Primary origin server list.
                     * @return Origins Primary origin server list.
                     * 
                     */
                    std::vector<std::string> GetOrigins() const;

                    /**
                     * 设置Primary origin server list.
                     * @param _origins Primary origin server list.
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
                     * 获取Backup origin list.
                     * @return BackupOrigins Backup origin list.
                     * 
                     */
                    std::vector<std::string> GetBackupOrigins() const;

                    /**
                     * 设置Backup origin list.
                     * @param _backupOrigins Backup origin list.
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
                     * 获取Origin-pull protocol configuration, with values:
<li>http: Force HTTP origin-pull.</li>
<li>follow: follow protocol for origin-pull;</li>
<li>https: Force HTTPS origin-pull.</li>
                     * @return OriginPullProtocol Origin-pull protocol configuration, with values:
<li>http: Force HTTP origin-pull.</li>
<li>follow: follow protocol for origin-pull;</li>
<li>https: Force HTTPS origin-pull.</li>
                     * 
                     */
                    std::string GetOriginPullProtocol() const;

                    /**
                     * 设置Origin-pull protocol configuration, with values:
<li>http: Force HTTP origin-pull.</li>
<li>follow: follow protocol for origin-pull;</li>
<li>https: Force HTTPS origin-pull.</li>
                     * @param _originPullProtocol Origin-pull protocol configuration, with values:
<li>http: Force HTTP origin-pull.</li>
<li>follow: follow protocol for origin-pull;</li>
<li>https: Force HTTPS origin-pull.</li>
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
                     * 获取Whether the origin server is a private access bucket when it is Tencent Cloud COS. Valid values:
<li>on: Private access;</li>
<li>off: Public Access.</li>
                     * @return CosPrivateAccess Whether the origin server is a private access bucket when it is Tencent Cloud COS. Valid values:
<li>on: Private access;</li>
<li>off: Public Access.</li>
                     * 
                     */
                    std::string GetCosPrivateAccess() const;

                    /**
                     * 设置Whether the origin server is a private access bucket when it is Tencent Cloud COS. Valid values:
<li>on: Private access;</li>
<li>off: Public Access.</li>
                     * @param _cosPrivateAccess Whether the origin server is a private access bucket when it is Tencent Cloud COS. Valid values:
<li>on: Private access;</li>
<li>off: Public Access.</li>
                     * 
                     */
                    void SetCosPrivateAccess(const std::string& _cosPrivateAccess);

                    /**
                     * 判断参数 CosPrivateAccess 是否已赋值
                     * @return CosPrivateAccess 是否已赋值
                     * 
                     */
                    bool CosPrivateAccessHasBeenSet() const;

                private:

                    /**
                     * Primary origin server list.
                     */
                    std::vector<std::string> m_origins;
                    bool m_originsHasBeenSet;

                    /**
                     * Backup origin list.
                     */
                    std::vector<std::string> m_backupOrigins;
                    bool m_backupOriginsHasBeenSet;

                    /**
                     * Origin-pull protocol configuration, with values:
<li>http: Force HTTP origin-pull.</li>
<li>follow: follow protocol for origin-pull;</li>
<li>https: Force HTTPS origin-pull.</li>
                     */
                    std::string m_originPullProtocol;
                    bool m_originPullProtocolHasBeenSet;

                    /**
                     * Whether the origin server is a private access bucket when it is Tencent Cloud COS. Valid values:
<li>on: Private access;</li>
<li>off: Public Access.</li>
                     */
                    std::string m_cosPrivateAccess;
                    bool m_cosPrivateAccessHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220901_MODEL_ORIGIN_H_
