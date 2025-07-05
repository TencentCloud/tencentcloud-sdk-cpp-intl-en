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

#ifndef TENCENTCLOUD_CYNOSDB_V20190107_MODEL_UPGRADEPROXYVERSIONREQUEST_H_
#define TENCENTCLOUD_CYNOSDB_V20190107_MODEL_UPGRADEPROXYVERSIONREQUEST_H_

#include <string>
#include <vector>
#include <map>
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
                * UpgradeProxyVersion request structure.
                */
                class UpgradeProxyVersionRequest : public AbstractModel
                {
                public:
                    UpgradeProxyVersionRequest();
                    ~UpgradeProxyVersionRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Cluster ID
                     * @return ClusterId Cluster ID
                     * 
                     */
                    std::string GetClusterId() const;

                    /**
                     * 设置Cluster ID
                     * @param _clusterId Cluster ID
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
                     * 获取Current version of database proxy
                     * @return SrcProxyVersion Current version of database proxy
                     * 
                     */
                    std::string GetSrcProxyVersion() const;

                    /**
                     * 设置Current version of database proxy
                     * @param _srcProxyVersion Current version of database proxy
                     * 
                     */
                    void SetSrcProxyVersion(const std::string& _srcProxyVersion);

                    /**
                     * 判断参数 SrcProxyVersion 是否已赋值
                     * @return SrcProxyVersion 是否已赋值
                     * 
                     */
                    bool SrcProxyVersionHasBeenSet() const;

                    /**
                     * 获取Target version of database proxy
                     * @return DstProxyVersion Target version of database proxy
                     * 
                     */
                    std::string GetDstProxyVersion() const;

                    /**
                     * 设置Target version of database proxy
                     * @param _dstProxyVersion Target version of database proxy
                     * 
                     */
                    void SetDstProxyVersion(const std::string& _dstProxyVersion);

                    /**
                     * 判断参数 DstProxyVersion 是否已赋值
                     * @return DstProxyVersion 是否已赋值
                     * 
                     */
                    bool DstProxyVersionHasBeenSet() const;

                    /**
                     * 获取Database proxy group ID
                     * @return ProxyGroupId Database proxy group ID
                     * 
                     */
                    std::string GetProxyGroupId() const;

                    /**
                     * 设置Database proxy group ID
                     * @param _proxyGroupId Database proxy group ID
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
                     * 获取Upgrade time. Valid values: `no` (upon upgrade completion), `yes` (upgrade during instance maintenance time)
                     * @return IsInMaintainPeriod Upgrade time. Valid values: `no` (upon upgrade completion), `yes` (upgrade during instance maintenance time)
                     * 
                     */
                    std::string GetIsInMaintainPeriod() const;

                    /**
                     * 设置Upgrade time. Valid values: `no` (upon upgrade completion), `yes` (upgrade during instance maintenance time)
                     * @param _isInMaintainPeriod Upgrade time. Valid values: `no` (upon upgrade completion), `yes` (upgrade during instance maintenance time)
                     * 
                     */
                    void SetIsInMaintainPeriod(const std::string& _isInMaintainPeriod);

                    /**
                     * 判断参数 IsInMaintainPeriod 是否已赋值
                     * @return IsInMaintainPeriod 是否已赋值
                     * 
                     */
                    bool IsInMaintainPeriodHasBeenSet() const;

                private:

                    /**
                     * Cluster ID
                     */
                    std::string m_clusterId;
                    bool m_clusterIdHasBeenSet;

                    /**
                     * Current version of database proxy
                     */
                    std::string m_srcProxyVersion;
                    bool m_srcProxyVersionHasBeenSet;

                    /**
                     * Target version of database proxy
                     */
                    std::string m_dstProxyVersion;
                    bool m_dstProxyVersionHasBeenSet;

                    /**
                     * Database proxy group ID
                     */
                    std::string m_proxyGroupId;
                    bool m_proxyGroupIdHasBeenSet;

                    /**
                     * Upgrade time. Valid values: `no` (upon upgrade completion), `yes` (upgrade during instance maintenance time)
                     */
                    std::string m_isInMaintainPeriod;
                    bool m_isInMaintainPeriodHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CYNOSDB_V20190107_MODEL_UPGRADEPROXYVERSIONREQUEST_H_
