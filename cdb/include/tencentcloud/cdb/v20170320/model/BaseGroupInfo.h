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

#ifndef TENCENTCLOUD_CDB_V20170320_MODEL_BASEGROUPINFO_H_
#define TENCENTCLOUD_CDB_V20170320_MODEL_BASEGROUPINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cdb
    {
        namespace V20170320
        {
            namespace Model
            {
                /**
                * Proxy group information
                */
                class BaseGroupInfo : public AbstractModel
                {
                public:
                    BaseGroupInfo();
                    ~BaseGroupInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Proxy group ID
Note: this field may return `null`, indicating that no valid value can be found.
                     * @return ProxyGroupId Proxy group ID
Note: this field may return `null`, indicating that no valid value can be found.
                     * 
                     */
                    std::string GetProxyGroupId() const;

                    /**
                     * 设置Proxy group ID
Note: this field may return `null`, indicating that no valid value can be found.
                     * @param _proxyGroupId Proxy group ID
Note: this field may return `null`, indicating that no valid value can be found.
                     * 
                     */
                    void SetProxyGroupId(const std::string& _proxyGroupId);

                    /**
                     * 判断参数 ProxyGroupId 是否已赋值
                     * @return ProxyGroupId 是否已赋值
                     * 
                     */
                    bool ProxyGroupIdHasBeenSet() const;

                    /**
                     * 获取Number of proxy nodes
Note: this field may return `null`, indicating that no valid value can be found.
                     * @return NodeCount Number of proxy nodes
Note: this field may return `null`, indicating that no valid value can be found.
                     * 
                     */
                    uint64_t GetNodeCount() const;

                    /**
                     * 设置Number of proxy nodes
Note: this field may return `null`, indicating that no valid value can be found.
                     * @param _nodeCount Number of proxy nodes
Note: this field may return `null`, indicating that no valid value can be found.
                     * 
                     */
                    void SetNodeCount(const uint64_t& _nodeCount);

                    /**
                     * 判断参数 NodeCount 是否已赋值
                     * @return NodeCount 是否已赋值
                     * 
                     */
                    bool NodeCountHasBeenSet() const;

                    /**
                     * 获取Proxy group status. Valid values: `init` (delivering), `online` (active), `offline` (inactive), `destroy` (destoryed)
Note: this field may return `null`, indicating that no valid value can be found.
                     * @return Status Proxy group status. Valid values: `init` (delivering), `online` (active), `offline` (inactive), `destroy` (destoryed)
Note: this field may return `null`, indicating that no valid value can be found.
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置Proxy group status. Valid values: `init` (delivering), `online` (active), `offline` (inactive), `destroy` (destoryed)
Note: this field may return `null`, indicating that no valid value can be found.
                     * @param _status Proxy group status. Valid values: `init` (delivering), `online` (active), `offline` (inactive), `destroy` (destoryed)
Note: this field may return `null`, indicating that no valid value can be found.
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
                     * 获取Region
Note: this field may return `null`, indicating that no valid value can be found.
                     * @return Region Region
Note: this field may return `null`, indicating that no valid value can be found.
                     * 
                     */
                    std::string GetRegion() const;

                    /**
                     * 设置Region
Note: this field may return `null`, indicating that no valid value can be found.
                     * @param _region Region
Note: this field may return `null`, indicating that no valid value can be found.
                     * 
                     */
                    void SetRegion(const std::string& _region);

                    /**
                     * 判断参数 Region 是否已赋值
                     * @return Region 是否已赋值
                     * 
                     */
                    bool RegionHasBeenSet() const;

                    /**
                     * 获取Availability zone
Note: this field may return `null`, indicating that no valid value can be found.
                     * @return Zone Availability zone
Note: this field may return `null`, indicating that no valid value can be found.
                     * 
                     */
                    std::string GetZone() const;

                    /**
                     * 设置Availability zone
Note: this field may return `null`, indicating that no valid value can be found.
                     * @param _zone Availability zone
Note: this field may return `null`, indicating that no valid value can be found.
                     * 
                     */
                    void SetZone(const std::string& _zone);

                    /**
                     * 判断参数 Zone 是否已赋值
                     * @return Zone 是否已赋值
                     * 
                     */
                    bool ZoneHasBeenSet() const;

                    /**
                     * 获取Whether read/write separation is enabled
Note: this field may return `null`, indicating that no valid value can be found.
                     * @return OpenRW Whether read/write separation is enabled
Note: this field may return `null`, indicating that no valid value can be found.
                     * 
                     */
                    bool GetOpenRW() const;

                    /**
                     * 设置Whether read/write separation is enabled
Note: this field may return `null`, indicating that no valid value can be found.
                     * @param _openRW Whether read/write separation is enabled
Note: this field may return `null`, indicating that no valid value can be found.
                     * 
                     */
                    void SetOpenRW(const bool& _openRW);

                    /**
                     * 判断参数 OpenRW 是否已赋值
                     * @return OpenRW 是否已赋值
                     * 
                     */
                    bool OpenRWHasBeenSet() const;

                    /**
                     * 获取Current proxy version
Note: this field may return `null`, indicating that no valid value can be found.
                     * @return CurrentProxyVersion Current proxy version
Note: this field may return `null`, indicating that no valid value can be found.
                     * 
                     */
                    std::string GetCurrentProxyVersion() const;

                    /**
                     * 设置Current proxy version
Note: this field may return `null`, indicating that no valid value can be found.
                     * @param _currentProxyVersion Current proxy version
Note: this field may return `null`, indicating that no valid value can be found.
                     * 
                     */
                    void SetCurrentProxyVersion(const std::string& _currentProxyVersion);

                    /**
                     * 判断参数 CurrentProxyVersion 是否已赋值
                     * @return CurrentProxyVersion 是否已赋值
                     * 
                     */
                    bool CurrentProxyVersionHasBeenSet() const;

                    /**
                     * 获取Target version to which the proxy can be upgraded
Note: this field may return `null`, indicating that no valid value can be found.
                     * @return SupportUpgradeProxyVersion Target version to which the proxy can be upgraded
Note: this field may return `null`, indicating that no valid value can be found.
                     * 
                     */
                    std::string GetSupportUpgradeProxyVersion() const;

                    /**
                     * 设置Target version to which the proxy can be upgraded
Note: this field may return `null`, indicating that no valid value can be found.
                     * @param _supportUpgradeProxyVersion Target version to which the proxy can be upgraded
Note: this field may return `null`, indicating that no valid value can be found.
                     * 
                     */
                    void SetSupportUpgradeProxyVersion(const std::string& _supportUpgradeProxyVersion);

                    /**
                     * 判断参数 SupportUpgradeProxyVersion 是否已赋值
                     * @return SupportUpgradeProxyVersion 是否已赋值
                     * 
                     */
                    bool SupportUpgradeProxyVersionHasBeenSet() const;

                private:

                    /**
                     * Proxy group ID
Note: this field may return `null`, indicating that no valid value can be found.
                     */
                    std::string m_proxyGroupId;
                    bool m_proxyGroupIdHasBeenSet;

                    /**
                     * Number of proxy nodes
Note: this field may return `null`, indicating that no valid value can be found.
                     */
                    uint64_t m_nodeCount;
                    bool m_nodeCountHasBeenSet;

                    /**
                     * Proxy group status. Valid values: `init` (delivering), `online` (active), `offline` (inactive), `destroy` (destoryed)
Note: this field may return `null`, indicating that no valid value can be found.
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * Region
Note: this field may return `null`, indicating that no valid value can be found.
                     */
                    std::string m_region;
                    bool m_regionHasBeenSet;

                    /**
                     * Availability zone
Note: this field may return `null`, indicating that no valid value can be found.
                     */
                    std::string m_zone;
                    bool m_zoneHasBeenSet;

                    /**
                     * Whether read/write separation is enabled
Note: this field may return `null`, indicating that no valid value can be found.
                     */
                    bool m_openRW;
                    bool m_openRWHasBeenSet;

                    /**
                     * Current proxy version
Note: this field may return `null`, indicating that no valid value can be found.
                     */
                    std::string m_currentProxyVersion;
                    bool m_currentProxyVersionHasBeenSet;

                    /**
                     * Target version to which the proxy can be upgraded
Note: this field may return `null`, indicating that no valid value can be found.
                     */
                    std::string m_supportUpgradeProxyVersion;
                    bool m_supportUpgradeProxyVersionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CDB_V20170320_MODEL_BASEGROUPINFO_H_
