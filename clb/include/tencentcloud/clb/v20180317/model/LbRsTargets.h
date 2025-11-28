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

#ifndef TENCENTCLOUD_CLB_V20180317_MODEL_LBRSTARGETS_H_
#define TENCENTCLOUD_CLB_V20180317_MODEL_LBRSTARGETS_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Clb
    {
        namespace V20180317
        {
            namespace Model
            {
                /**
                * Querying the output data types
                */
                class LbRsTargets : public AbstractModel
                {
                public:
                    LbRsTargets();
                    ~LbRsTargets() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Private network IP type, which can be `cvm` or `eni`.
                     * @return Type Private network IP type, which can be `cvm` or `eni`.
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置Private network IP type, which can be `cvm` or `eni`.
                     * @param _type Private network IP type, which can be `cvm` or `eni`.
                     * 
                     */
                    void SetType(const std::string& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     * 
                     */
                    bool TypeHasBeenSet() const;

                    /**
                     * 获取Private network IP of the real server.
                     * @return PrivateIp Private network IP of the real server.
                     * 
                     */
                    std::string GetPrivateIp() const;

                    /**
                     * 设置Private network IP of the real server.
                     * @param _privateIp Private network IP of the real server.
                     * 
                     */
                    void SetPrivateIp(const std::string& _privateIp);

                    /**
                     * 判断参数 PrivateIp 是否已赋值
                     * @return PrivateIp 是否已赋值
                     * 
                     */
                    bool PrivateIpHasBeenSet() const;

                    /**
                     * 获取Port bound to the real server.
                     * @return Port Port bound to the real server.
                     * 
                     */
                    int64_t GetPort() const;

                    /**
                     * 设置Port bound to the real server.
                     * @param _port Port bound to the real server.
                     * 
                     */
                    void SetPort(const int64_t& _port);

                    /**
                     * 判断参数 Port 是否已赋值
                     * @return Port 是否已赋值
                     * 
                     */
                    bool PortHasBeenSet() const;

                    /**
                     * 获取vpcId of RS
                     * @return VpcId vpcId of RS
                     * 
                     */
                    int64_t GetVpcId() const;

                    /**
                     * 设置vpcId of RS
                     * @param _vpcId vpcId of RS
                     * 
                     */
                    void SetVpcId(const int64_t& _vpcId);

                    /**
                     * 判断参数 VpcId 是否已赋值
                     * @return VpcId 是否已赋值
                     * 
                     */
                    bool VpcIdHasBeenSet() const;

                    /**
                     * 获取RS weight
                     * @return Weight RS weight
                     * 
                     */
                    int64_t GetWeight() const;

                    /**
                     * 设置RS weight
                     * @param _weight RS weight
                     * 
                     */
                    void SetWeight(const int64_t& _weight);

                    /**
                     * 判断参数 Weight 是否已赋值
                     * @return Weight 是否已赋值
                     * 
                     */
                    bool WeightHasBeenSet() const;

                private:

                    /**
                     * Private network IP type, which can be `cvm` or `eni`.
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * Private network IP of the real server.
                     */
                    std::string m_privateIp;
                    bool m_privateIpHasBeenSet;

                    /**
                     * Port bound to the real server.
                     */
                    int64_t m_port;
                    bool m_portHasBeenSet;

                    /**
                     * vpcId of RS
                     */
                    int64_t m_vpcId;
                    bool m_vpcIdHasBeenSet;

                    /**
                     * RS weight
                     */
                    int64_t m_weight;
                    bool m_weightHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CLB_V20180317_MODEL_LBRSTARGETS_H_
