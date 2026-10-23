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

#ifndef TENCENTCLOUD_CYNOSDB_V20190107_MODEL_SWITCHCLUSTERVPCREQUEST_H_
#define TENCENTCLOUD_CYNOSDB_V20190107_MODEL_SWITCHCLUSTERVPCREQUEST_H_

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
                * SwitchClusterVpc request structure.
                */
                class SwitchClusterVpcRequest : public AbstractModel
                {
                public:
                    SwitchClusterVpcRequest();
                    ~SwitchClusterVpcRequest() = default;
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
                     * 获取vpc id in string format
                     * @return UniqVpcId vpc id in string format
                     * 
                     */
                    std::string GetUniqVpcId() const;

                    /**
                     * 设置vpc id in string format
                     * @param _uniqVpcId vpc id in string format
                     * 
                     */
                    void SetUniqVpcId(const std::string& _uniqVpcId);

                    /**
                     * 判断参数 UniqVpcId 是否已赋值
                     * @return UniqVpcId 是否已赋值
                     * 
                     */
                    bool UniqVpcIdHasBeenSet() const;

                    /**
                     * 获取String subnet id.
                     * @return UniqSubnetId String subnet id.
                     * 
                     */
                    std::string GetUniqSubnetId() const;

                    /**
                     * 设置String subnet id.
                     * @param _uniqSubnetId String subnet id.
                     * 
                     */
                    void SetUniqSubnetId(const std::string& _uniqSubnetId);

                    /**
                     * 判断参数 UniqSubnetId 是否已赋值
                     * @return UniqSubnetId 是否已赋值
                     * 
                     */
                    bool UniqSubnetIdHasBeenSet() const;

                    /**
                     * 获取Old address reclamation time
                     * @return OldIpReserveHours Old address reclamation time
                     * 
                     */
                    int64_t GetOldIpReserveHours() const;

                    /**
                     * 设置Old address reclamation time
                     * @param _oldIpReserveHours Old address reclamation time
                     * 
                     */
                    void SetOldIpReserveHours(const int64_t& _oldIpReserveHours);

                    /**
                     * 判断参数 OldIpReserveHours 是否已赋值
                     * @return OldIpReserveHours 是否已赋值
                     * 
                     */
                    bool OldIpReserveHoursHasBeenSet() const;

                private:

                    /**
                     * Cluster ID
                     */
                    std::string m_clusterId;
                    bool m_clusterIdHasBeenSet;

                    /**
                     * vpc id in string format
                     */
                    std::string m_uniqVpcId;
                    bool m_uniqVpcIdHasBeenSet;

                    /**
                     * String subnet id.
                     */
                    std::string m_uniqSubnetId;
                    bool m_uniqSubnetIdHasBeenSet;

                    /**
                     * Old address reclamation time
                     */
                    int64_t m_oldIpReserveHours;
                    bool m_oldIpReserveHoursHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CYNOSDB_V20190107_MODEL_SWITCHCLUSTERVPCREQUEST_H_
