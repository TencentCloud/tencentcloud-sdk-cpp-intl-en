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

#ifndef TENCENTCLOUD_TSE_V20201207_MODEL_DESCRIBECLOUDNATIVEAPIGATEWAYCONFIGREQUEST_H_
#define TENCENTCLOUD_TSE_V20201207_MODEL_DESCRIBECLOUDNATIVEAPIGATEWAYCONFIGREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tse
    {
        namespace V20201207
        {
            namespace Model
            {
                /**
                * DescribeCloudNativeAPIGatewayConfig request structure.
                */
                class DescribeCloudNativeAPIGatewayConfigRequest : public AbstractModel
                {
                public:
                    DescribeCloudNativeAPIGatewayConfigRequest();
                    ~DescribeCloudNativeAPIGatewayConfigRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Cloud Native API gateway instance ID.
                     * @return GatewayId Cloud Native API gateway instance ID.
                     * 
                     */
                    std::string GetGatewayId() const;

                    /**
                     * 设置Cloud Native API gateway instance ID.
                     * @param _gatewayId Cloud Native API gateway instance ID.
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
                     * 获取group id. Default group if left blank.
                     * @return GroupId group id. Default group if left blank.
                     * 
                     */
                    std::string GetGroupId() const;

                    /**
                     * 设置group id. Default group if left blank.
                     * @param _groupId group id. Default group if left blank.
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
                     * Cloud Native API gateway instance ID.
                     */
                    std::string m_gatewayId;
                    bool m_gatewayIdHasBeenSet;

                    /**
                     * group id. Default group if left blank.
                     */
                    std::string m_groupId;
                    bool m_groupIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TSE_V20201207_MODEL_DESCRIBECLOUDNATIVEAPIGATEWAYCONFIGREQUEST_H_
