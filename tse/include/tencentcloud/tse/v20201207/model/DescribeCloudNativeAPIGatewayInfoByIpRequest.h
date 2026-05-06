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

#ifndef TENCENTCLOUD_TSE_V20201207_MODEL_DESCRIBECLOUDNATIVEAPIGATEWAYINFOBYIPREQUEST_H_
#define TENCENTCLOUD_TSE_V20201207_MODEL_DESCRIBECLOUDNATIVEAPIGATEWAYINFOBYIPREQUEST_H_

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
                * DescribeCloudNativeAPIGatewayInfoByIp request structure.
                */
                class DescribeCloudNativeAPIGatewayInfoByIpRequest : public AbstractModel
                {
                public:
                    DescribeCloudNativeAPIGatewayInfoByIpRequest();
                    ~DescribeCloudNativeAPIGatewayInfoByIpRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Public ip address of the cloud-native gateway
                     * @return PublicNetworkIP Public ip address of the cloud-native gateway
                     * 
                     */
                    std::string GetPublicNetworkIP() const;

                    /**
                     * 设置Public ip address of the cloud-native gateway
                     * @param _publicNetworkIP Public ip address of the cloud-native gateway
                     * 
                     */
                    void SetPublicNetworkIP(const std::string& _publicNetworkIP);

                    /**
                     * 判断参数 PublicNetworkIP 是否已赋值
                     * @return PublicNetworkIP 是否已赋值
                     * 
                     */
                    bool PublicNetworkIPHasBeenSet() const;

                private:

                    /**
                     * Public ip address of the cloud-native gateway
                     */
                    std::string m_publicNetworkIP;
                    bool m_publicNetworkIPHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TSE_V20201207_MODEL_DESCRIBECLOUDNATIVEAPIGATEWAYINFOBYIPREQUEST_H_
