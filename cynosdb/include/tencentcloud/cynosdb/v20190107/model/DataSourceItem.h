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

#ifndef TENCENTCLOUD_CYNOSDB_V20190107_MODEL_DATASOURCEITEM_H_
#define TENCENTCLOUD_CYNOSDB_V20190107_MODEL_DATASOURCEITEM_H_

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
                * Data source item
                */
                class DataSourceItem : public AbstractModel
                {
                public:
                    DataSourceItem();
                    ~DataSourceItem() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Source instance ID
                     * @return InstanceId Source instance ID
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置Source instance ID
                     * @param _instanceId Source instance ID
                     * 
                     */
                    void SetInstanceId(const std::string& _instanceId);

                    /**
                     * 判断参数 InstanceId 是否已赋值
                     * @return InstanceId 是否已赋值
                     * 
                     */
                    bool InstanceIdHasBeenSet() const;

                    /**
                     * 获取Source cluster ID
                     * @return ClusterId Source cluster ID
                     * 
                     */
                    std::string GetClusterId() const;

                    /**
                     * 设置Source cluster ID
                     * @param _clusterId Source cluster ID
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
                     * 获取Source database type
                     * @return DBType Source database type
                     * 
                     */
                    std::string GetDBType() const;

                    /**
                     * 设置Source database type
                     * @param _dBType Source database type
                     * 
                     */
                    void SetDBType(const std::string& _dBType);

                    /**
                     * 判断参数 DBType 是否已赋值
                     * @return DBType 是否已赋值
                     * 
                     */
                    bool DBTypeHasBeenSet() const;

                    /**
                     * 获取Source database IP
                     * @return IP Source database IP
                     * 
                     */
                    std::string GetIP() const;

                    /**
                     * 设置Source database IP
                     * @param _iP Source database IP
                     * 
                     */
                    void SetIP(const std::string& _iP);

                    /**
                     * 判断参数 IP 是否已赋值
                     * @return IP 是否已赋值
                     * 
                     */
                    bool IPHasBeenSet() const;

                    /**
                     * 获取Source database port
                     * @return Port Source database port
                     * 
                     */
                    int64_t GetPort() const;

                    /**
                     * 设置Source database port
                     * @param _port Source database port
                     * 
                     */
                    void SetPort(const int64_t& _port);

                    /**
                     * 判断参数 Port 是否已赋值
                     * @return Port 是否已赋值
                     * 
                     */
                    bool PortHasBeenSet() const;

                    /**
                     * 获取Source instance region
                     * @return Region Source instance region
                     * 
                     */
                    std::string GetRegion() const;

                    /**
                     * 设置Source instance region
                     * @param _region Source instance region
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
                     * 获取Source instance availability zone
                     * @return Zone Source instance availability zone
                     * 
                     */
                    std::string GetZone() const;

                    /**
                     * 设置Source instance availability zone
                     * @param _zone Source instance availability zone
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
                     * 获取Source main account uin
                     * @return SrcUin Source main account uin
                     * 
                     */
                    std::string GetSrcUin() const;

                    /**
                     * 设置Source main account uin
                     * @param _srcUin Source main account uin
                     * 
                     */
                    void SetSrcUin(const std::string& _srcUin);

                    /**
                     * 判断参数 SrcUin 是否已赋值
                     * @return SrcUin 是否已赋值
                     * 
                     */
                    bool SrcUinHasBeenSet() const;

                    /**
                     * 获取Account type
                     * @return AccountMode Account type
                     * 
                     */
                    std::string GetAccountMode() const;

                    /**
                     * 设置Account type
                     * @param _accountMode Account type
                     * 
                     */
                    void SetAccountMode(const std::string& _accountMode);

                    /**
                     * 判断参数 AccountMode 是否已赋值
                     * @return AccountMode 是否已赋值
                     * 
                     */
                    bool AccountModeHasBeenSet() const;

                    /**
                     * 获取sync task status
                     * @return ReplicationJobStatus sync task status
                     * 
                     */
                    std::string GetReplicationJobStatus() const;

                    /**
                     * 设置sync task status
                     * @param _replicationJobStatus sync task status
                     * 
                     */
                    void SetReplicationJobStatus(const std::string& _replicationJobStatus);

                    /**
                     * 判断参数 ReplicationJobStatus 是否已赋值
                     * @return ReplicationJobStatus 是否已赋值
                     * 
                     */
                    bool ReplicationJobStatusHasBeenSet() const;

                private:

                    /**
                     * Source instance ID
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * Source cluster ID
                     */
                    std::string m_clusterId;
                    bool m_clusterIdHasBeenSet;

                    /**
                     * Source database type
                     */
                    std::string m_dBType;
                    bool m_dBTypeHasBeenSet;

                    /**
                     * Source database IP
                     */
                    std::string m_iP;
                    bool m_iPHasBeenSet;

                    /**
                     * Source database port
                     */
                    int64_t m_port;
                    bool m_portHasBeenSet;

                    /**
                     * Source instance region
                     */
                    std::string m_region;
                    bool m_regionHasBeenSet;

                    /**
                     * Source instance availability zone
                     */
                    std::string m_zone;
                    bool m_zoneHasBeenSet;

                    /**
                     * Source main account uin
                     */
                    std::string m_srcUin;
                    bool m_srcUinHasBeenSet;

                    /**
                     * Account type
                     */
                    std::string m_accountMode;
                    bool m_accountModeHasBeenSet;

                    /**
                     * sync task status
                     */
                    std::string m_replicationJobStatus;
                    bool m_replicationJobStatusHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CYNOSDB_V20190107_MODEL_DATASOURCEITEM_H_
