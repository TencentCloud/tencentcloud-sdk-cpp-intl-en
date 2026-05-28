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

#ifndef TENCENTCLOUD_TDMYSQL_V20211122_MODEL_EXPANDINSTANCEREQUEST_H_
#define TENCENTCLOUD_TDMYSQL_V20211122_MODEL_EXPANDINSTANCEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tdmysql
    {
        namespace V20211122
        {
            namespace Model
            {
                /**
                * ExpandInstance request structure.
                */
                class ExpandInstanceRequest : public AbstractModel
                {
                public:
                    ExpandInstanceRequest();
                    ~ExpandInstanceRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>Instance ID.</p>
                     * @return InstanceId <p>Instance ID.</p>
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置<p>Instance ID.</p>
                     * @param _instanceId <p>Instance ID.</p>
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
                     * 获取<p>Expand storage nodes to how many nodes. If no change, pass the current number of nodes</p>
                     * @return StorageNodeNum <p>Expand storage nodes to how many nodes. If no change, pass the current number of nodes</p>
                     * 
                     */
                    int64_t GetStorageNodeNum() const;

                    /**
                     * 设置<p>Expand storage nodes to how many nodes. If no change, pass the current number of nodes</p>
                     * @param _storageNodeNum <p>Expand storage nodes to how many nodes. If no change, pass the current number of nodes</p>
                     * 
                     */
                    void SetStorageNodeNum(const int64_t& _storageNodeNum);

                    /**
                     * 判断参数 StorageNodeNum 是否已赋值
                     * @return StorageNodeNum 是否已赋值
                     * 
                     */
                    bool StorageNodeNumHasBeenSet() const;

                    /**
                     * 获取<p>Availability zone list</p>
                     * @return Zones <p>Availability zone list</p>
                     * 
                     */
                    std::vector<std::string> GetZones() const;

                    /**
                     * 设置<p>Availability zone list</p>
                     * @param _zones <p>Availability zone list</p>
                     * 
                     */
                    void SetZones(const std::vector<std::string>& _zones);

                    /**
                     * 判断参数 Zones 是否已赋值
                     * @return Zones 是否已赋值
                     * 
                     */
                    bool ZonesHasBeenSet() const;

                    /**
                     * 获取<p>az mode. 1: Single az 2: Multi-az non-primary az mode 3: Multi-az primary az mode</p>
                     * @return AZMode <p>az mode. 1: Single az 2: Multi-az non-primary az mode 3: Multi-az primary az mode</p>
                     * 
                     */
                    int64_t GetAZMode() const;

                    /**
                     * 设置<p>az mode. 1: Single az 2: Multi-az non-primary az mode 3: Multi-az primary az mode</p>
                     * @param _aZMode <p>az mode. 1: Single az 2: Multi-az non-primary az mode 3: Multi-az primary az mode</p>
                     * 
                     */
                    void SetAZMode(const int64_t& _aZMode);

                    /**
                     * 判断参数 AZMode 是否已赋值
                     * @return AZMode 是否已赋值
                     * 
                     */
                    bool AZModeHasBeenSet() const;

                    /**
                     * 获取<p>AZMode 3 means the primary AZ</p>
                     * @return PrimaryAZ <p>AZMode 3 means the primary AZ</p>
                     * 
                     */
                    std::string GetPrimaryAZ() const;

                    /**
                     * 设置<p>AZMode 3 means the primary AZ</p>
                     * @param _primaryAZ <p>AZMode 3 means the primary AZ</p>
                     * 
                     */
                    void SetPrimaryAZ(const std::string& _primaryAZ);

                    /**
                     * 判断参数 PrimaryAZ 是否已赋值
                     * @return PrimaryAZ 是否已赋值
                     * 
                     */
                    bool PrimaryAZHasBeenSet() const;

                    /**
                     * 获取<p>Number of replicas, value ranges from 1 to 3</p>
                     * @return FullReplications <p>Number of replicas, value ranges from 1 to 3</p>
                     * 
                     */
                    int64_t GetFullReplications() const;

                    /**
                     * 设置<p>Number of replicas, value ranges from 1 to 3</p>
                     * @param _fullReplications <p>Number of replicas, value ranges from 1 to 3</p>
                     * 
                     */
                    void SetFullReplications(const int64_t& _fullReplications);

                    /**
                     * 判断参数 FullReplications 是否已赋值
                     * @return FullReplications 是否已赋值
                     * 
                     */
                    bool FullReplicationsHasBeenSet() const;

                private:

                    /**
                     * <p>Instance ID.</p>
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * <p>Expand storage nodes to how many nodes. If no change, pass the current number of nodes</p>
                     */
                    int64_t m_storageNodeNum;
                    bool m_storageNodeNumHasBeenSet;

                    /**
                     * <p>Availability zone list</p>
                     */
                    std::vector<std::string> m_zones;
                    bool m_zonesHasBeenSet;

                    /**
                     * <p>az mode. 1: Single az 2: Multi-az non-primary az mode 3: Multi-az primary az mode</p>
                     */
                    int64_t m_aZMode;
                    bool m_aZModeHasBeenSet;

                    /**
                     * <p>AZMode 3 means the primary AZ</p>
                     */
                    std::string m_primaryAZ;
                    bool m_primaryAZHasBeenSet;

                    /**
                     * <p>Number of replicas, value ranges from 1 to 3</p>
                     */
                    int64_t m_fullReplications;
                    bool m_fullReplicationsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TDMYSQL_V20211122_MODEL_EXPANDINSTANCEREQUEST_H_
