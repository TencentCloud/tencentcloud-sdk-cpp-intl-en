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

#ifndef TENCENTCLOUD_CYNOSDB_V20190107_MODEL_CHECKTRANSFERCLUSTERZONEREQUEST_H_
#define TENCENTCLOUD_CYNOSDB_V20190107_MODEL_CHECKTRANSFERCLUSTERZONEREQUEST_H_

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
                * CheckTransferClusterZone request structure.
                */
                class CheckTransferClusterZoneRequest : public AbstractModel
                {
                public:
                    CheckTransferClusterZoneRequest();
                    ~CheckTransferClusterZoneRequest() = default;
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
                     * Target zone info for proxy migration
                     */
                    std::vector<ProxyZone> m_proxyZones;
                    bool m_proxyZonesHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CYNOSDB_V20190107_MODEL_CHECKTRANSFERCLUSTERZONEREQUEST_H_
