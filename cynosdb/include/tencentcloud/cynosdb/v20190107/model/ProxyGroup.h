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

#ifndef TENCENTCLOUD_CYNOSDB_V20190107_MODEL_PROXYGROUP_H_
#define TENCENTCLOUD_CYNOSDB_V20190107_MODEL_PROXYGROUP_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cynosdb
    {
        namespace V20190107
        {
            namespace Model
            {
                /**
                * Proxy group
                */
                class ProxyGroup : public AbstractModel
                {
                public:
                    ProxyGroup();
                    ~ProxyGroup() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Database proxy u200dgroup ID
                     * @return ProxyGroupId Database proxy u200dgroup ID
                     * 
                     */
                    std::string GetProxyGroupId() const;

                    /**
                     * 设置Database proxy u200dgroup ID
                     * @param _proxyGroupId Database proxy u200dgroup ID
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
                     * 获取Number of nodes in the proxy group
                     * @return ProxyNodeCount Number of nodes in the proxy group
                     * 
                     */
                    int64_t GetProxyNodeCount() const;

                    /**
                     * 设置Number of nodes in the proxy group
                     * @param _proxyNodeCount Number of nodes in the proxy group
                     * 
                     */
                    void SetProxyNodeCount(const int64_t& _proxyNodeCount);

                    /**
                     * 判断参数 ProxyNodeCount 是否已赋值
                     * @return ProxyNodeCount 是否已赋值
                     * 
                     */
                    bool ProxyNodeCountHasBeenSet() const;

                    /**
                     * 获取Database proxy u200dgroup status
                     * @return Status Database proxy u200dgroup status
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置Database proxy u200dgroup status
                     * @param _status Database proxy u200dgroup status
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
                     * @return Region Region
                     * 
                     */
                    std::string GetRegion() const;

                    /**
                     * 设置Region
                     * @param _region Region
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
                     * 获取AZ
                     * @return Zone AZ
                     * 
                     */
                    std::string GetZone() const;

                    /**
                     * 设置AZ
                     * @param _zone AZ
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
                     * 获取Current proxy version
                     * @return CurrentProxyVersion Current proxy version
                     * 
                     */
                    std::string GetCurrentProxyVersion() const;

                    /**
                     * 设置Current proxy version
                     * @param _currentProxyVersion Current proxy version
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
                     * 获取Cluster ID
Note: u200dThis field may returnu200d·nullu200d·, indicating that no valid values can be obtained.
                     * @return ClusterId Cluster ID
Note: u200dThis field may returnu200d·nullu200d·, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetClusterId() const;

                    /**
                     * 设置Cluster ID
Note: u200dThis field may returnu200d·nullu200d·, indicating that no valid values can be obtained.
                     * @param _clusterId Cluster ID
Note: u200dThis field may returnu200d·nullu200d·, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetClusterId(const std::string& _clusterId);

                    /**
                     * 判断参数 ClusterId 是否已赋值
                     * @return ClusterId 是否已赋值
                     * 
                     */
                    bool ClusterIdHasBeenSet() const;

                    /**
                     * 获取User `AppId`
Note: u200dThis field may returnu200d·nullu200d·, indicating that no valid values can be obtained.
                     * @return AppId User `AppId`
Note: u200dThis field may returnu200d·nullu200d·, indicating that no valid values can be obtained.
                     * 
                     */
                    int64_t GetAppId() const;

                    /**
                     * 设置User `AppId`
Note: u200dThis field may returnu200d·nullu200d·, indicating that no valid values can be obtained.
                     * @param _appId User `AppId`
Note: u200dThis field may returnu200d·nullu200d·, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetAppId(const int64_t& _appId);

                    /**
                     * 判断参数 AppId 是否已赋值
                     * @return AppId 是否已赋值
                     * 
                     */
                    bool AppIdHasBeenSet() const;

                    /**
                     * 获取Enabling read/write separation for database proxy
Note: u200dThis field may returnu200d·nullu200d·, indicating that no valid values can be obtained.
                     * @return OpenRw Enabling read/write separation for database proxy
Note: u200dThis field may returnu200d·nullu200d·, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetOpenRw() const;

                    /**
                     * 设置Enabling read/write separation for database proxy
Note: u200dThis field may returnu200d·nullu200d·, indicating that no valid values can be obtained.
                     * @param _openRw Enabling read/write separation for database proxy
Note: u200dThis field may returnu200d·nullu200d·, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetOpenRw(const std::string& _openRw);

                    /**
                     * 判断参数 OpenRw 是否已赋值
                     * @return OpenRw 是否已赋值
                     * 
                     */
                    bool OpenRwHasBeenSet() const;

                private:

                    /**
                     * Database proxy u200dgroup ID
                     */
                    std::string m_proxyGroupId;
                    bool m_proxyGroupIdHasBeenSet;

                    /**
                     * Number of nodes in the proxy group
                     */
                    int64_t m_proxyNodeCount;
                    bool m_proxyNodeCountHasBeenSet;

                    /**
                     * Database proxy u200dgroup status
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * Region
                     */
                    std::string m_region;
                    bool m_regionHasBeenSet;

                    /**
                     * AZ
                     */
                    std::string m_zone;
                    bool m_zoneHasBeenSet;

                    /**
                     * Current proxy version
                     */
                    std::string m_currentProxyVersion;
                    bool m_currentProxyVersionHasBeenSet;

                    /**
                     * Cluster ID
Note: u200dThis field may returnu200d·nullu200d·, indicating that no valid values can be obtained.
                     */
                    std::string m_clusterId;
                    bool m_clusterIdHasBeenSet;

                    /**
                     * User `AppId`
Note: u200dThis field may returnu200d·nullu200d·, indicating that no valid values can be obtained.
                     */
                    int64_t m_appId;
                    bool m_appIdHasBeenSet;

                    /**
                     * Enabling read/write separation for database proxy
Note: u200dThis field may returnu200d·nullu200d·, indicating that no valid values can be obtained.
                     */
                    std::string m_openRw;
                    bool m_openRwHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CYNOSDB_V20190107_MODEL_PROXYGROUP_H_
