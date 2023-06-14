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

#ifndef TENCENTCLOUD_GAAP_V20180529_MODEL_REALSERVER_H_
#define TENCENTCLOUD_GAAP_V20180529_MODEL_REALSERVER_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Gaap
    {
        namespace V20180529
        {
            namespace Model
            {
                /**
                * Query listeners or rules-related origin server information, excluding `tag` information.
                */
                class RealServer : public AbstractModel
                {
                public:
                    RealServer();
                    ~RealServer() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Origin server IP or domain name
                     * @return RealServerIP Origin server IP or domain name
                     * 
                     */
                    std::string GetRealServerIP() const;

                    /**
                     * 设置Origin server IP or domain name
                     * @param _realServerIP Origin server IP or domain name
                     * 
                     */
                    void SetRealServerIP(const std::string& _realServerIP);

                    /**
                     * 判断参数 RealServerIP 是否已赋值
                     * @return RealServerIP 是否已赋值
                     * 
                     */
                    bool RealServerIPHasBeenSet() const;

                    /**
                     * 获取Origin server ID
                     * @return RealServerId Origin server ID
                     * 
                     */
                    std::string GetRealServerId() const;

                    /**
                     * 设置Origin server ID
                     * @param _realServerId Origin server ID
                     * 
                     */
                    void SetRealServerId(const std::string& _realServerId);

                    /**
                     * 判断参数 RealServerId 是否已赋值
                     * @return RealServerId 是否已赋值
                     * 
                     */
                    bool RealServerIdHasBeenSet() const;

                    /**
                     * 获取Origin server name
                     * @return RealServerName Origin server name
                     * 
                     */
                    std::string GetRealServerName() const;

                    /**
                     * 设置Origin server name
                     * @param _realServerName Origin server name
                     * 
                     */
                    void SetRealServerName(const std::string& _realServerName);

                    /**
                     * 判断参数 RealServerName 是否已赋值
                     * @return RealServerName 是否已赋值
                     * 
                     */
                    bool RealServerNameHasBeenSet() const;

                    /**
                     * 获取Project ID
                     * @return ProjectId Project ID
                     * 
                     */
                    uint64_t GetProjectId() const;

                    /**
                     * 设置Project ID
                     * @param _projectId Project ID
                     * 
                     */
                    void SetProjectId(const uint64_t& _projectId);

                    /**
                     * 判断参数 ProjectId 是否已赋值
                     * @return ProjectId 是否已赋值
                     * 
                     */
                    bool ProjectIdHasBeenSet() const;

                    /**
                     * 获取Indicates whether the origin server IP or domain name is in the blocklist. Valid values: `0` (no) and `1` (yes).
                     * @return InBanBlacklist Indicates whether the origin server IP or domain name is in the blocklist. Valid values: `0` (no) and `1` (yes).
                     * 
                     */
                    int64_t GetInBanBlacklist() const;

                    /**
                     * 设置Indicates whether the origin server IP or domain name is in the blocklist. Valid values: `0` (no) and `1` (yes).
                     * @param _inBanBlacklist Indicates whether the origin server IP or domain name is in the blocklist. Valid values: `0` (no) and `1` (yes).
                     * 
                     */
                    void SetInBanBlacklist(const int64_t& _inBanBlacklist);

                    /**
                     * 判断参数 InBanBlacklist 是否已赋值
                     * @return InBanBlacklist 是否已赋值
                     * 
                     */
                    bool InBanBlacklistHasBeenSet() const;

                private:

                    /**
                     * Origin server IP or domain name
                     */
                    std::string m_realServerIP;
                    bool m_realServerIPHasBeenSet;

                    /**
                     * Origin server ID
                     */
                    std::string m_realServerId;
                    bool m_realServerIdHasBeenSet;

                    /**
                     * Origin server name
                     */
                    std::string m_realServerName;
                    bool m_realServerNameHasBeenSet;

                    /**
                     * Project ID
                     */
                    uint64_t m_projectId;
                    bool m_projectIdHasBeenSet;

                    /**
                     * Indicates whether the origin server IP or domain name is in the blocklist. Valid values: `0` (no) and `1` (yes).
                     */
                    int64_t m_inBanBlacklist;
                    bool m_inBanBlacklistHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_GAAP_V20180529_MODEL_REALSERVER_H_
