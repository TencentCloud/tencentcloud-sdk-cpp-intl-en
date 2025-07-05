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

#ifndef TENCENTCLOUD_VPC_V20170312_MODEL_GATEWAYFLOWMONITORDETAIL_H_
#define TENCENTCLOUD_VPC_V20170312_MODEL_GATEWAYFLOWMONITORDETAIL_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Vpc
    {
        namespace V20170312
        {
            namespace Model
            {
                /**
                * The gateway traffic monitoring details
                */
                class GatewayFlowMonitorDetail : public AbstractModel
                {
                public:
                    GatewayFlowMonitorDetail();
                    ~GatewayFlowMonitorDetail() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Origin `IP`.
                     * @return PrivateIpAddress Origin `IP`.
                     * 
                     */
                    std::string GetPrivateIpAddress() const;

                    /**
                     * 设置Origin `IP`.
                     * @param _privateIpAddress Origin `IP`.
                     * 
                     */
                    void SetPrivateIpAddress(const std::string& _privateIpAddress);

                    /**
                     * 判断参数 PrivateIpAddress 是否已赋值
                     * @return PrivateIpAddress 是否已赋值
                     * 
                     */
                    bool PrivateIpAddressHasBeenSet() const;

                    /**
                     * 获取Inbound packets.
                     * @return InPkg Inbound packets.
                     * 
                     */
                    uint64_t GetInPkg() const;

                    /**
                     * 设置Inbound packets.
                     * @param _inPkg Inbound packets.
                     * 
                     */
                    void SetInPkg(const uint64_t& _inPkg);

                    /**
                     * 判断参数 InPkg 是否已赋值
                     * @return InPkg 是否已赋值
                     * 
                     */
                    bool InPkgHasBeenSet() const;

                    /**
                     * 获取Outbound packets.
                     * @return OutPkg Outbound packets.
                     * 
                     */
                    uint64_t GetOutPkg() const;

                    /**
                     * 设置Outbound packets.
                     * @param _outPkg Outbound packets.
                     * 
                     */
                    void SetOutPkg(const uint64_t& _outPkg);

                    /**
                     * 判断参数 OutPkg 是否已赋值
                     * @return OutPkg 是否已赋值
                     * 
                     */
                    bool OutPkgHasBeenSet() const;

                    /**
                     * 获取Inbound traffic, in Byte.
                     * @return InTraffic Inbound traffic, in Byte.
                     * 
                     */
                    uint64_t GetInTraffic() const;

                    /**
                     * 设置Inbound traffic, in Byte.
                     * @param _inTraffic Inbound traffic, in Byte.
                     * 
                     */
                    void SetInTraffic(const uint64_t& _inTraffic);

                    /**
                     * 判断参数 InTraffic 是否已赋值
                     * @return InTraffic 是否已赋值
                     * 
                     */
                    bool InTrafficHasBeenSet() const;

                    /**
                     * 获取Outbound traffic, in Byte.
                     * @return OutTraffic Outbound traffic, in Byte.
                     * 
                     */
                    uint64_t GetOutTraffic() const;

                    /**
                     * 设置Outbound traffic, in Byte.
                     * @param _outTraffic Outbound traffic, in Byte.
                     * 
                     */
                    void SetOutTraffic(const uint64_t& _outTraffic);

                    /**
                     * 判断参数 OutTraffic 是否已赋值
                     * @return OutTraffic 是否已赋值
                     * 
                     */
                    bool OutTrafficHasBeenSet() const;

                private:

                    /**
                     * Origin `IP`.
                     */
                    std::string m_privateIpAddress;
                    bool m_privateIpAddressHasBeenSet;

                    /**
                     * Inbound packets.
                     */
                    uint64_t m_inPkg;
                    bool m_inPkgHasBeenSet;

                    /**
                     * Outbound packets.
                     */
                    uint64_t m_outPkg;
                    bool m_outPkgHasBeenSet;

                    /**
                     * Inbound traffic, in Byte.
                     */
                    uint64_t m_inTraffic;
                    bool m_inTrafficHasBeenSet;

                    /**
                     * Outbound traffic, in Byte.
                     */
                    uint64_t m_outTraffic;
                    bool m_outTrafficHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VPC_V20170312_MODEL_GATEWAYFLOWMONITORDETAIL_H_
