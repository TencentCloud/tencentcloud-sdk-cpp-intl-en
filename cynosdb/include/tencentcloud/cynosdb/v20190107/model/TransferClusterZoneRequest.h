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
                     * 获取Source cluster Id
                     * @return ClusterId Source cluster Id
                     * 
                     */
                    std::string GetClusterId() const;

                    /**
                     * 设置Source cluster Id
                     * @param _clusterId Source cluster Id
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
                     * 获取Target zone
                     * @return DstZone Target zone
                     * 
                     */
                    std::string GetDstZone() const;

                    /**
                     * 设置Target zone
                     * @param _dstZone Target zone
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
                     * 获取Threshold for primary-secondary data latency verification during cross-AZ migration, in milliseconds (ms).
                     * @return MaxLag Threshold for primary-secondary data latency verification during cross-AZ migration, in milliseconds (ms).
                     * 
                     */
                    int64_t GetMaxLag() const;

                    /**
                     * 设置Threshold for primary-secondary data latency verification during cross-AZ migration, in milliseconds (ms).
                     * @param _maxLag Threshold for primary-secondary data latency verification during cross-AZ migration, in milliseconds (ms).
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
                     * 获取Immediate: immediate execution. InMaintain: execute within the time window.
                     * @return TransferType Immediate: immediate execution. InMaintain: execute within the time window.
                     * 
                     */
                    std::string GetTransferType() const;

                    /**
                     * 设置Immediate: immediate execution. InMaintain: execute within the time window.
                     * @param _transferType Immediate: immediate execution. InMaintain: execute within the time window.
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
                     * 获取Secondary AZ in a multi-availability zone
                     * @return DstSlaveZone Secondary AZ in a multi-availability zone
                     * 
                     */
                    std::string GetDstSlaveZone() const;

                    /**
                     * 设置Secondary AZ in a multi-availability zone
                     * @param _dstSlaveZone Secondary AZ in a multi-availability zone
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
                     * Source cluster Id
                     */
                    std::string m_clusterId;
                    bool m_clusterIdHasBeenSet;

                    /**
                     * Target zone
                     */
                    std::string m_dstZone;
                    bool m_dstZoneHasBeenSet;

                    /**
                     * Threshold for primary-secondary data latency verification during cross-AZ migration, in milliseconds (ms).
                     */
                    int64_t m_maxLag;
                    bool m_maxLagHasBeenSet;

                    /**
                     * Immediate: immediate execution. InMaintain: execute within the time window.
                     */
                    std::string m_transferType;
                    bool m_transferTypeHasBeenSet;

                    /**
                     * Secondary AZ in a multi-availability zone
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
