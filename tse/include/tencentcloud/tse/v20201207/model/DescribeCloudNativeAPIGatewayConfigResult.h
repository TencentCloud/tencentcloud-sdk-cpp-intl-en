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

#ifndef TENCENTCLOUD_TSE_V20201207_MODEL_DESCRIBECLOUDNATIVEAPIGATEWAYCONFIGRESULT_H_
#define TENCENTCLOUD_TSE_V20201207_MODEL_DESCRIBECLOUDNATIVEAPIGATEWAYCONFIGRESULT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tse/v20201207/model/CloudNativeAPIGatewayConfig.h>


namespace TencentCloud
{
    namespace Tse
    {
        namespace V20201207
        {
            namespace Model
            {
                /**
                * Retrieve the configuration result of the cloud native API gateway instance network.
                */
                class DescribeCloudNativeAPIGatewayConfigResult : public AbstractModel
                {
                public:
                    DescribeCloudNativeAPIGatewayConfigResult();
                    ~DescribeCloudNativeAPIGatewayConfigResult() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Gateway Instance ID
                     * @return GatewayId Gateway Instance ID
                     * 
                     */
                    std::string GetGatewayId() const;

                    /**
                     * 设置Gateway Instance ID
                     * @param _gatewayId Gateway Instance ID
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
                     * 获取Grouped network configuration list.
                     * @return ConfigList Grouped network configuration list.
                     * 
                     */
                    std::vector<CloudNativeAPIGatewayConfig> GetConfigList() const;

                    /**
                     * 设置Grouped network configuration list.
                     * @param _configList Grouped network configuration list.
                     * 
                     */
                    void SetConfigList(const std::vector<CloudNativeAPIGatewayConfig>& _configList);

                    /**
                     * 判断参数 ConfigList 是否已赋值
                     * @return ConfigList 是否已赋值
                     * 
                     */
                    bool ConfigListHasBeenSet() const;

                    /**
                     * 获取Grouped subnet info
                     * @return GroupSubnetId Grouped subnet info
                     * 
                     */
                    std::string GetGroupSubnetId() const;

                    /**
                     * 设置Grouped subnet info
                     * @param _groupSubnetId Grouped subnet info
                     * 
                     */
                    void SetGroupSubnetId(const std::string& _groupSubnetId);

                    /**
                     * 判断参数 GroupSubnetId 是否已赋值
                     * @return GroupSubnetId 是否已赋值
                     * 
                     */
                    bool GroupSubnetIdHasBeenSet() const;

                    /**
                     * 获取Grouped VPC info
                     * @return GroupVpcId Grouped VPC info
                     * 
                     */
                    std::string GetGroupVpcId() const;

                    /**
                     * 设置Grouped VPC info
                     * @param _groupVpcId Grouped VPC info
                     * 
                     */
                    void SetGroupVpcId(const std::string& _groupVpcId);

                    /**
                     * 判断参数 GroupVpcId 是否已赋值
                     * @return GroupVpcId 是否已赋值
                     * 
                     */
                    bool GroupVpcIdHasBeenSet() const;

                    /**
                     * 获取group ID
                     * @return GroupId group ID
                     * 
                     */
                    std::string GetGroupId() const;

                    /**
                     * 设置group ID
                     * @param _groupId group ID
                     * 
                     */
                    void SetGroupId(const std::string& _groupId);

                    /**
                     * 判断参数 GroupId 是否已赋值
                     * @return GroupId 是否已赋值
                     * 
                     */
                    bool GroupIdHasBeenSet() const;

                private:

                    /**
                     * Gateway Instance ID
                     */
                    std::string m_gatewayId;
                    bool m_gatewayIdHasBeenSet;

                    /**
                     * Grouped network configuration list.
                     */
                    std::vector<CloudNativeAPIGatewayConfig> m_configList;
                    bool m_configListHasBeenSet;

                    /**
                     * Grouped subnet info
                     */
                    std::string m_groupSubnetId;
                    bool m_groupSubnetIdHasBeenSet;

                    /**
                     * Grouped VPC info
                     */
                    std::string m_groupVpcId;
                    bool m_groupVpcIdHasBeenSet;

                    /**
                     * group ID
                     */
                    std::string m_groupId;
                    bool m_groupIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TSE_V20201207_MODEL_DESCRIBECLOUDNATIVEAPIGATEWAYCONFIGRESULT_H_
