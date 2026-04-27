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

#ifndef TENCENTCLOUD_EDGEZONE_V20260401_MODEL_PUBLICNETWORKSEGMENT_H_
#define TENCENTCLOUD_EDGEZONE_V20260401_MODEL_PUBLICNETWORKSEGMENT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Edgezone
    {
        namespace V20260401
        {
            namespace Model
            {
                /**
                * Public network ip range info, including cidr and gateway ip
                */
                class PublicNetworkSegment : public AbstractModel
                {
                public:
                    PublicNetworkSegment();
                    ~PublicNetworkSegment() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Cidr of the subnet
                     * @return Cidr Cidr of the subnet
                     * 
                     */
                    std::string GetCidr() const;

                    /**
                     * 设置Cidr of the subnet
                     * @param _cidr Cidr of the subnet
                     * 
                     */
                    void SetCidr(const std::string& _cidr);

                    /**
                     * 判断参数 Cidr 是否已赋值
                     * @return Cidr 是否已赋值
                     * 
                     */
                    bool CidrHasBeenSet() const;

                    /**
                     * 获取Gateway Ip
                     * @return Gateway Gateway Ip
                     * 
                     */
                    std::string GetGateway() const;

                    /**
                     * 设置Gateway Ip
                     * @param _gateway Gateway Ip
                     * 
                     */
                    void SetGateway(const std::string& _gateway);

                    /**
                     * 判断参数 Gateway 是否已赋值
                     * @return Gateway 是否已赋值
                     * 
                     */
                    bool GatewayHasBeenSet() const;

                private:

                    /**
                     * Cidr of the subnet
                     */
                    std::string m_cidr;
                    bool m_cidrHasBeenSet;

                    /**
                     * Gateway Ip
                     */
                    std::string m_gateway;
                    bool m_gatewayHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_EDGEZONE_V20260401_MODEL_PUBLICNETWORKSEGMENT_H_
