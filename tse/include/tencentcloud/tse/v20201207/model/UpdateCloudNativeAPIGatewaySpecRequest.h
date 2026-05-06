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

#ifndef TENCENTCLOUD_TSE_V20201207_MODEL_UPDATECLOUDNATIVEAPIGATEWAYSPECREQUEST_H_
#define TENCENTCLOUD_TSE_V20201207_MODEL_UPDATECLOUDNATIVEAPIGATEWAYSPECREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tse/v20201207/model/CloudNativeAPIGatewayNodeConfig.h>


namespace TencentCloud
{
    namespace Tse
    {
        namespace V20201207
        {
            namespace Model
            {
                /**
                * UpdateCloudNativeAPIGatewaySpec request structure.
                */
                class UpdateCloudNativeAPIGatewaySpecRequest : public AbstractModel
                {
                public:
                    UpdateCloudNativeAPIGatewaySpecRequest();
                    ~UpdateCloudNativeAPIGatewaySpecRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Cloud Native API gateway instance ID.
Only supports postpaid instances
                     * @return GatewayId Cloud Native API gateway instance ID.
Only supports postpaid instances
                     * 
                     */
                    std::string GetGatewayId() const;

                    /**
                     * 设置Cloud Native API gateway instance ID.
Only supports postpaid instances
                     * @param _gatewayId Cloud Native API gateway instance ID.
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
                     * 获取Gateway group id
                     * @return GroupId Gateway group id
                     * 
                     */
                    std::string GetGroupId() const;

                    /**
                     * 设置Gateway group id
                     * @param _groupId Gateway group id
                     * 
                     */
                    void SetGroupId(const std::string& _groupId);

                    /**
                     * 判断参数 GroupId 是否已赋值
                     * @return GroupId 是否已赋值
                     * 
                     */
                    bool GroupIdHasBeenSet() const;

                    /**
                     * 获取Gateway grouping node specification configuration.
                     * @return NodeConfig Gateway grouping node specification configuration.
                     * 
                     */
                    CloudNativeAPIGatewayNodeConfig GetNodeConfig() const;

                    /**
                     * 设置Gateway grouping node specification configuration.
                     * @param _nodeConfig Gateway grouping node specification configuration.
                     * 
                     */
                    void SetNodeConfig(const CloudNativeAPIGatewayNodeConfig& _nodeConfig);

                    /**
                     * 判断参数 NodeConfig 是否已赋值
                     * @return NodeConfig 是否已赋值
                     * 
                     */
                    bool NodeConfigHasBeenSet() const;

                private:

                    /**
                     * Cloud Native API gateway instance ID.
Only supports postpaid instances
                     */
                    std::string m_gatewayId;
                    bool m_gatewayIdHasBeenSet;

                    /**
                     * Gateway group id
                     */
                    std::string m_groupId;
                    bool m_groupIdHasBeenSet;

                    /**
                     * Gateway grouping node specification configuration.
                     */
                    CloudNativeAPIGatewayNodeConfig m_nodeConfig;
                    bool m_nodeConfigHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TSE_V20201207_MODEL_UPDATECLOUDNATIVEAPIGATEWAYSPECREQUEST_H_
