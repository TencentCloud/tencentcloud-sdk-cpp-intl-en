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

#ifndef TENCENTCLOUD_TCSS_V20201101_MODEL_MODIFYASSETREQUEST_H_
#define TENCENTCLOUD_TCSS_V20201101_MODEL_MODIFYASSETREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tcss
    {
        namespace V20201101
        {
            namespace Model
            {
                /**
                * ModifyAsset request structure.
                */
                class ModifyAssetRequest : public AbstractModel
                {
                public:
                    ModifyAssetRequest();
                    ~ModifyAssetRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Synchronizes all regular nodes.
                     * @return All Synchronizes all regular nodes.
                     * 
                     */
                    bool GetAll() const;

                    /**
                     * 设置Synchronizes all regular nodes.
                     * @param _all Synchronizes all regular nodes.
                     * 
                     */
                    void SetAll(const bool& _all);

                    /**
                     * 判断参数 All 是否已赋值
                     * @return All 是否已赋值
                     * 
                     */
                    bool AllHasBeenSet() const;

                    /**
                     * 获取List of UUIDs of hosts to be synchronized. 
                     * @return Hosts List of UUIDs of hosts to be synchronized. 
                     * 
                     */
                    std::vector<std::string> GetHosts() const;

                    /**
                     * 设置List of UUIDs of hosts to be synchronized. 
                     * @param _hosts List of UUIDs of hosts to be synchronized. 
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
                     * 获取Synchronizes all super nodes.
                     * @return AllSuperHost Synchronizes all super nodes.
                     * 
                     */
                    bool GetAllSuperHost() const;

                    /**
                     * 设置Synchronizes all super nodes.
                     * @param _allSuperHost Synchronizes all super nodes.
                     * 
                     */
                    void SetAllSuperHost(const bool& _allSuperHost);

                    /**
                     * 判断参数 AllSuperHost 是否已赋值
                     * @return AllSuperHost 是否已赋值
                     * 
                     */
                    bool AllSuperHostHasBeenSet() const;

                    /**
                     * 获取Unique IDs of super nodes to be synchronized.
                     * @return NodeUniqueIds Unique IDs of super nodes to be synchronized.
                     * 
                     */
                    std::vector<std::string> GetNodeUniqueIds() const;

                    /**
                     * 设置Unique IDs of super nodes to be synchronized.
                     * @param _nodeUniqueIds Unique IDs of super nodes to be synchronized.
                     * 
                     */
                    void SetNodeUniqueIds(const std::vector<std::string>& _nodeUniqueIds);

                    /**
                     * 判断参数 NodeUniqueIds 是否已赋值
                     * @return NodeUniqueIds 是否已赋值
                     * 
                     */
                    bool NodeUniqueIdsHasBeenSet() const;

                    /**
                     * 获取Timeout (in seconds). Minimum value: 3600.
                     * @return TimeoutSec Timeout (in seconds). Minimum value: 3600.
                     * 
                     */
                    uint64_t GetTimeoutSec() const;

                    /**
                     * 设置Timeout (in seconds). Minimum value: 3600.
                     * @param _timeoutSec Timeout (in seconds). Minimum value: 3600.
                     * 
                     */
                    void SetTimeoutSec(const uint64_t& _timeoutSec);

                    /**
                     * 判断参数 TimeoutSec 是否已赋值
                     * @return TimeoutSec 是否已赋值
                     * 
                     */
                    bool TimeoutSecHasBeenSet() const;

                private:

                    /**
                     * Synchronizes all regular nodes.
                     */
                    bool m_all;
                    bool m_allHasBeenSet;

                    /**
                     * List of UUIDs of hosts to be synchronized. 
                     */
                    std::vector<std::string> m_hosts;
                    bool m_hostsHasBeenSet;

                    /**
                     * Synchronizes all super nodes.
                     */
                    bool m_allSuperHost;
                    bool m_allSuperHostHasBeenSet;

                    /**
                     * Unique IDs of super nodes to be synchronized.
                     */
                    std::vector<std::string> m_nodeUniqueIds;
                    bool m_nodeUniqueIdsHasBeenSet;

                    /**
                     * Timeout (in seconds). Minimum value: 3600.
                     */
                    uint64_t m_timeoutSec;
                    bool m_timeoutSecHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCSS_V20201101_MODEL_MODIFYASSETREQUEST_H_
