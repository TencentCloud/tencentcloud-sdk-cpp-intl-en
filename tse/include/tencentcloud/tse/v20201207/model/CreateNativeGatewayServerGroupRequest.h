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

#ifndef TENCENTCLOUD_TSE_V20201207_MODEL_CREATENATIVEGATEWAYSERVERGROUPREQUEST_H_
#define TENCENTCLOUD_TSE_V20201207_MODEL_CREATENATIVEGATEWAYSERVERGROUPREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tse/v20201207/model/CloudNativeAPIGatewayNodeConfig.h>
#include <tencentcloud/tse/v20201207/model/InternetConfig.h>


namespace TencentCloud
{
    namespace Tse
    {
        namespace V20201207
        {
            namespace Model
            {
                /**
                * CreateNativeGatewayServerGroup request structure.
                */
                class CreateNativeGatewayServerGroupRequest : public AbstractModel
                {
                public:
                    CreateNativeGatewayServerGroupRequest();
                    ~CreateNativeGatewayServerGroupRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Gateway instance id.
Only supports postpaid instances
                     * @return GatewayId Gateway instance id.
Only supports postpaid instances
                     * 
                     */
                    std::string GetGatewayId() const;

                    /**
                     * 设置Gateway instance id.
Only supports postpaid instances
                     * @param _gatewayId Gateway instance id.
Only supports postpaid instances
                     * 
                     */
                    void SetGatewayId(const std::string& _gatewayId);

                    /**
                     * 判断参数 GatewayId 是否已赋值
                     * @return GatewayId 是否已赋值
                     * 
                     */
                    bool GatewayIdHasBeenSet() const;

                    /**
                     * 获取gateway group name
                     * @return Name gateway group name
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置gateway group name
                     * @param _name gateway group name
                     * 
                     */
                    void SetName(const std::string& _name);

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     * 
                     */
                    bool NameHasBeenSet() const;

                    /**
                     * 获取Node configuration
                     * @return NodeConfig Node configuration
                     * 
                     */
                    CloudNativeAPIGatewayNodeConfig GetNodeConfig() const;

                    /**
                     * 设置Node configuration
                     * @param _nodeConfig Node configuration
                     * 
                     */
                    void SetNodeConfig(const CloudNativeAPIGatewayNodeConfig& _nodeConfig);

                    /**
                     * 判断参数 NodeConfig 是否已赋值
                     * @return NodeConfig 是否已赋值
                     * 
                     */
                    bool NodeConfigHasBeenSet() const;

                    /**
                     * 获取Subnet ID
                     * @return SubnetId Subnet ID
                     * 
                     */
                    std::string GetSubnetId() const;

                    /**
                     * 设置Subnet ID
                     * @param _subnetId Subnet ID
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
                     * 获取Description information
                     * @return Description Description information
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置Description information
                     * @param _description Description information
                     * 
                     */
                    void SetDescription(const std::string& _description);

                    /**
                     * 判断参数 Description 是否已赋值
                     * @return Description 是否已赋值
                     * 
                     */
                    bool DescriptionHasBeenSet() const;

                    /**
                     * 获取Public network bandwidth information
                     * @return InternetMaxBandwidthOut Public network bandwidth information
                     * 
                     */
                    uint64_t GetInternetMaxBandwidthOut() const;

                    /**
                     * 设置Public network bandwidth information
                     * @param _internetMaxBandwidthOut Public network bandwidth information
                     * 
                     */
                    void SetInternetMaxBandwidthOut(const uint64_t& _internetMaxBandwidthOut);

                    /**
                     * 判断参数 InternetMaxBandwidthOut 是否已赋值
                     * @return InternetMaxBandwidthOut 是否已赋值
                     * 
                     */
                    bool InternetMaxBandwidthOutHasBeenSet() const;

                    /**
                     * 获取Public Network Configuration.
                     * @return InternetConfig Public Network Configuration.
                     * 
                     */
                    InternetConfig GetInternetConfig() const;

                    /**
                     * 设置Public Network Configuration.
                     * @param _internetConfig Public Network Configuration.
                     * 
                     */
                    void SetInternetConfig(const InternetConfig& _internetConfig);

                    /**
                     * 判断参数 InternetConfig 是否已赋值
                     * @return InternetConfig 是否已赋值
                     * 
                     */
                    bool InternetConfigHasBeenSet() const;

                private:

                    /**
                     * Gateway instance id.
Only supports postpaid instances
                     */
                    std::string m_gatewayId;
                    bool m_gatewayIdHasBeenSet;

                    /**
                     * gateway group name
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * Node configuration
                     */
                    CloudNativeAPIGatewayNodeConfig m_nodeConfig;
                    bool m_nodeConfigHasBeenSet;

                    /**
                     * Subnet ID
                     */
                    std::string m_subnetId;
                    bool m_subnetIdHasBeenSet;

                    /**
                     * Description information
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * Public network bandwidth information
                     */
                    uint64_t m_internetMaxBandwidthOut;
                    bool m_internetMaxBandwidthOutHasBeenSet;

                    /**
                     * Public Network Configuration.
                     */
                    InternetConfig m_internetConfig;
                    bool m_internetConfigHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TSE_V20201207_MODEL_CREATENATIVEGATEWAYSERVERGROUPREQUEST_H_
