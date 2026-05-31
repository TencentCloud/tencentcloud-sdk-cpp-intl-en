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

#ifndef TENCENTCLOUD_CYNOSDB_V20190107_MODEL_TRANSFERCLUSTERZONEREQUEST_H_
#define TENCENTCLOUD_CYNOSDB_V20190107_MODEL_TRANSFERCLUSTERZONEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cynosdb/v20190107/model/ProxyZone.h>


namespace TencentCloud
{
    namespace Cynosdb
    {
        namespace V20190107
        {
            namespace Model
            {
                /**
                * TransferClusterZone request structure.
                */
                class TransferClusterZoneRequest : public AbstractModel
                {
                public:
                    TransferClusterZoneRequest();
                    ~TransferClusterZoneRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Source Cluster Id
                     * @return ClusterId Source Cluster Id
                     * 
                     */
                    std::string GetClusterId() const;

                    /**
                     * 设置Source Cluster Id
                     * @param _clusterId Source Cluster Id
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
                     * 获取Target availability zone
                     * @return DstZone Target availability zone
                     * 
                     */
                    std::string GetDstZone() const;

                    /**
                     * 设置Target availability zone
                     * @param _dstZone Target availability zone
                     * 
                     */
                    void SetDstZone(const std::string& _dstZone);

                    /**
                     * 判断参数 DstZone 是否已赋值
                     * @return DstZone 是否已赋值
                     * 
                     */
                    bool DstZoneHasBeenSet() const;

                    /**
                     * 获取Cross-AZ migration master-slave data delay verification threshold, milliseconds (ms)
                     * @return MaxLag Cross-AZ migration master-slave data delay verification threshold, milliseconds (ms)
                     * 
                     */
                    int64_t GetMaxLag() const;

                    /**
                     * 设置Cross-AZ migration master-slave data delay verification threshold, milliseconds (ms)
                     * @param _maxLag Cross-AZ migration master-slave data delay verification threshold, milliseconds (ms)
                     * 
                     */
                    void SetMaxLag(const int64_t& _maxLag);

                    /**
                     * 判断参数 MaxLag 是否已赋值
                     * @return MaxLag 是否已赋值
                     * 
                     */
                    bool MaxLagHasBeenSet() const;

                    /**
                     * 获取Immediate: Immediate execution, InMaintain: Time window execution
                     * @return TransferType Immediate: Immediate execution, InMaintain: Time window execution
                     * 
                     */
                    std::string GetTransferType() const;

                    /**
                     * 设置Immediate: Immediate execution, InMaintain: Time window execution
                     * @param _transferType Immediate: Immediate execution, InMaintain: Time window execution
                     * 
                     */
                    void SetTransferType(const std::string& _transferType);

                    /**
                     * 判断参数 TransferType 是否已赋值
                     * @return TransferType 是否已赋值
                     * 
                     */
                    bool TransferTypeHasBeenSet() const;

                    /**
                     * 获取Multi-availability zone backup zone
                     * @return DstSlaveZone Multi-availability zone backup zone
                     * 
                     */
                    std::string GetDstSlaveZone() const;

                    /**
                     * 设置Multi-availability zone backup zone
                     * @param _dstSlaveZone Multi-availability zone backup zone
                     * 
                     */
                    void SetDstSlaveZone(const std::string& _dstSlaveZone);

                    /**
                     * 判断参数 DstSlaveZone 是否已赋值
                     * @return DstSlaveZone 是否已赋值
                     * 
                     */
                    bool DstSlaveZoneHasBeenSet() const;

                    /**
                     * 获取Target zone info for proxy migration
                     * @return ProxyZones Target zone info for proxy migration
                     * 
                     */
                    std::vector<ProxyZone> GetProxyZones() const;

                    /**
                     * 设置Target zone info for proxy migration
                     * @param _proxyZones Target zone info for proxy migration
                     * 
                     */
                    void SetProxyZones(const std::vector<ProxyZone>& _proxyZones);

                    /**
                     * 判断参数 ProxyZones 是否已赋值
                     * @return ProxyZones 是否已赋值
                     * 
                     */
                    bool ProxyZonesHasBeenSet() const;

                private:

                    /**
                     * Source Cluster Id
                     */
                    std::string m_clusterId;
                    bool m_clusterIdHasBeenSet;

                    /**
                     * Target availability zone
                     */
                    std::string m_dstZone;
                    bool m_dstZoneHasBeenSet;

                    /**
                     * Cross-AZ migration master-slave data delay verification threshold, milliseconds (ms)
                     */
                    int64_t m_maxLag;
                    bool m_maxLagHasBeenSet;

                    /**
                     * Immediate: Immediate execution, InMaintain: Time window execution
                     */
                    std::string m_transferType;
                    bool m_transferTypeHasBeenSet;

                    /**
                     * Multi-availability zone backup zone
                     */
                    std::string m_dstSlaveZone;
                    bool m_dstSlaveZoneHasBeenSet;

                    /**
                     * Target zone info for proxy migration
                     */
                    std::vector<ProxyZone> m_proxyZones;
                    bool m_proxyZonesHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CYNOSDB_V20190107_MODEL_TRANSFERCLUSTERZONEREQUEST_H_
