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

#ifndef TENCENTCLOUD_TRABBIT_V20230418_MODEL_RABBITMQSERVERLESSENDPOINT_H_
#define TENCENTCLOUD_TRABBIT_V20230418_MODEL_RABBITMQSERVERLESSENDPOINT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Trabbit
    {
        namespace V20230418
        {
            namespace Model
            {
                /**
                * Access point.
                */
                class RabbitMQServerlessEndpoint : public AbstractModel
                {
                public:
                    RabbitMQServerlessEndpoint();
                    ~RabbitMQServerlessEndpoint() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取vpc id
                     * @return VpcId vpc id
                     * 
                     */
                    std::string GetVpcId() const;

                    /**
                     * 设置vpc id
                     * @param _vpcId vpc id
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
                     * 获取subnet id
                     * @return SubnetId subnet id
                     * 
                     */
                    std::string GetSubnetId() const;

                    /**
                     * 设置subnet id
                     * @param _subnetId subnet id
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
                     * 获取Access address
                     * @return VpcEndpoint Access address
                     * 
                     */
                    std::string GetVpcEndpoint() const;

                    /**
                     * 设置Access address
                     * @param _vpcEndpoint Access address
                     * 
                     */
                    void SetVpcEndpoint(const std::string& _vpcEndpoint);

                    /**
                     * 判断参数 VpcEndpoint 是否已赋值
                     * @return VpcEndpoint 是否已赋值
                     * 
                     */
                    bool VpcEndpointHasBeenSet() const;

                    /**
                     * 获取Access address status.
                     * @return VpcDataStreamEndpointStatus Access address status.
                     * 
                     */
                    std::string GetVpcDataStreamEndpointStatus() const;

                    /**
                     * 设置Access address status.
                     * @param _vpcDataStreamEndpointStatus Access address status.
                     * 
                     */
                    void SetVpcDataStreamEndpointStatus(const std::string& _vpcDataStreamEndpointStatus);

                    /**
                     * 判断参数 VpcDataStreamEndpointStatus 是否已赋值
                     * @return VpcDataStreamEndpointStatus 是否已赋值
                     * 
                     */
                    bool VpcDataStreamEndpointStatusHasBeenSet() const;

                    /**
                     * 获取Whether it is a public network.
                     * @return PublicNetwork Whether it is a public network.
                     * 
                     */
                    bool GetPublicNetwork() const;

                    /**
                     * 设置Whether it is a public network.
                     * @param _publicNetwork Whether it is a public network.
                     * 
                     */
                    void SetPublicNetwork(const bool& _publicNetwork);

                    /**
                     * 判断参数 PublicNetwork 是否已赋值
                     * @return PublicNetwork 是否已赋值
                     * 
                     */
                    bool PublicNetworkHasBeenSet() const;

                    /**
                     * 获取Specifies the access policy.
                     * @return AccessStrategy Specifies the access policy.
                     * 
                     */
                    std::string GetAccessStrategy() const;

                    /**
                     * 设置Specifies the access policy.
                     * @param _accessStrategy Specifies the access policy.
                     * 
                     */
                    void SetAccessStrategy(const std::string& _accessStrategy);

                    /**
                     * 判断参数 AccessStrategy 是否已赋值
                     * @return AccessStrategy 是否已赋值
                     * 
                     */
                    bool AccessStrategyHasBeenSet() const;

                    /**
                     * 获取Bandwidth
                     * @return Bandwidth Bandwidth
                     * 
                     */
                    int64_t GetBandwidth() const;

                    /**
                     * 设置Bandwidth
                     * @param _bandwidth Bandwidth
                     * 
                     */
                    void SetBandwidth(const int64_t& _bandwidth);

                    /**
                     * 判断参数 Bandwidth 是否已赋值
                     * @return Bandwidth 是否已赋值
                     * 
                     */
                    bool BandwidthHasBeenSet() const;

                private:

                    /**
                     * vpc id
                     */
                    std::string m_vpcId;
                    bool m_vpcIdHasBeenSet;

                    /**
                     * subnet id
                     */
                    std::string m_subnetId;
                    bool m_subnetIdHasBeenSet;

                    /**
                     * Access address
                     */
                    std::string m_vpcEndpoint;
                    bool m_vpcEndpointHasBeenSet;

                    /**
                     * Access address status.
                     */
                    std::string m_vpcDataStreamEndpointStatus;
                    bool m_vpcDataStreamEndpointStatusHasBeenSet;

                    /**
                     * Whether it is a public network.
                     */
                    bool m_publicNetwork;
                    bool m_publicNetworkHasBeenSet;

                    /**
                     * Specifies the access policy.
                     */
                    std::string m_accessStrategy;
                    bool m_accessStrategyHasBeenSet;

                    /**
                     * Bandwidth
                     */
                    int64_t m_bandwidth;
                    bool m_bandwidthHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TRABBIT_V20230418_MODEL_RABBITMQSERVERLESSENDPOINT_H_
