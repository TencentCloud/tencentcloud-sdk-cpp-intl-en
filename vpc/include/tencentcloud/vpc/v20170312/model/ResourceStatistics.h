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

#ifndef TENCENTCLOUD_VPC_V20170312_MODEL_RESOURCESTATISTICS_H_
#define TENCENTCLOUD_VPC_V20170312_MODEL_RESOURCESTATISTICS_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/vpc/v20170312/model/ResourceStatisticsItem.h>


namespace TencentCloud
{
    namespace Vpc
    {
        namespace V20170312
        {
            namespace Model
            {
                /**
                * Information of associated resources
                */
                class ResourceStatistics : public AbstractModel
                {
                public:
                    ResourceStatistics();
                    ~ResourceStatistics() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取VPC instance ID, such as vpc-f1xjkw1b.
                     * @return VpcId VPC instance ID, such as vpc-f1xjkw1b.
                     * 
                     */
                    std::string GetVpcId() const;

                    /**
                     * 设置VPC instance ID, such as vpc-f1xjkw1b.
                     * @param _vpcId VPC instance ID, such as vpc-f1xjkw1b.
                     * 
                     */
                    void SetVpcId(const std::string& _vpcId);

                    /**
                     * 判断参数 VpcId 是否已赋值
                     * @return VpcId 是否已赋值
                     * 
                     */
                    bool VpcIdHasBeenSet() const;

                    /**
                     * 获取Subnet instance ID, such as `subnet-bthucmmy`.
                     * @return SubnetId Subnet instance ID, such as `subnet-bthucmmy`.
                     * 
                     */
                    std::string GetSubnetId() const;

                    /**
                     * 设置Subnet instance ID, such as `subnet-bthucmmy`.
                     * @param _subnetId Subnet instance ID, such as `subnet-bthucmmy`.
                     * 
                     */
                    void SetSubnetId(const std::string& _subnetId);

                    /**
                     * 判断参数 SubnetId 是否已赋值
                     * @return SubnetId 是否已赋值
                     * 
                     */
                    bool SubnetIdHasBeenSet() const;

                    /**
                     * 获取The total number of used IP addresses.
                     * @return Ip The total number of used IP addresses.
                     * 
                     */
                    uint64_t GetIp() const;

                    /**
                     * 设置The total number of used IP addresses.
                     * @param _ip The total number of used IP addresses.
                     * 
                     */
                    void SetIp(const uint64_t& _ip);

                    /**
                     * 判断参数 Ip 是否已赋值
                     * @return Ip 是否已赋值
                     * 
                     */
                    bool IpHasBeenSet() const;

                    /**
                     * 获取Information of associated resources
                     * @return ResourceStatisticsItemSet Information of associated resources
                     * 
                     */
                    std::vector<ResourceStatisticsItem> GetResourceStatisticsItemSet() const;

                    /**
                     * 设置Information of associated resources
                     * @param _resourceStatisticsItemSet Information of associated resources
                     * 
                     */
                    void SetResourceStatisticsItemSet(const std::vector<ResourceStatisticsItem>& _resourceStatisticsItemSet);

                    /**
                     * 判断参数 ResourceStatisticsItemSet 是否已赋值
                     * @return ResourceStatisticsItemSet 是否已赋值
                     * 
                     */
                    bool ResourceStatisticsItemSetHasBeenSet() const;

                private:

                    /**
                     * VPC instance ID, such as vpc-f1xjkw1b.
                     */
                    std::string m_vpcId;
                    bool m_vpcIdHasBeenSet;

                    /**
                     * Subnet instance ID, such as `subnet-bthucmmy`.
                     */
                    std::string m_subnetId;
                    bool m_subnetIdHasBeenSet;

                    /**
                     * The total number of used IP addresses.
                     */
                    uint64_t m_ip;
                    bool m_ipHasBeenSet;

                    /**
                     * Information of associated resources
                     */
                    std::vector<ResourceStatisticsItem> m_resourceStatisticsItemSet;
                    bool m_resourceStatisticsItemSetHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VPC_V20170312_MODEL_RESOURCESTATISTICS_H_
