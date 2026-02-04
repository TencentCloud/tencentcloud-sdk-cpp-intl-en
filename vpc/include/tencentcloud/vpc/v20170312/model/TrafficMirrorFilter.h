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

#ifndef TENCENTCLOUD_VPC_V20170312_MODEL_TRAFFICMIRRORFILTER_H_
#define TENCENTCLOUD_VPC_V20170312_MODEL_TRAFFICMIRRORFILTER_H_

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
                * Five tuple filter rule object for traffic mirroring.
                */
                class TrafficMirrorFilter : public AbstractModel
                {
                public:
                    TrafficMirrorFilter();
                    ~TrafficMirrorFilter() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Source network segment of the filter rule.
                     * @return SrcNet Source network segment of the filter rule.
                     * 
                     */
                    std::string GetSrcNet() const;

                    /**
                     * 设置Source network segment of the filter rule.
                     * @param _srcNet Source network segment of the filter rule.
                     * 
                     */
                    void SetSrcNet(const std::string& _srcNet);

                    /**
                     * 判断参数 SrcNet 是否已赋值
                     * @return SrcNet 是否已赋值
                     * 
                     */
                    bool SrcNetHasBeenSet() const;

                    /**
                     * 获取Destination network segment of the filter rule.
                     * @return DstNet Destination network segment of the filter rule.
                     * 
                     */
                    std::string GetDstNet() const;

                    /**
                     * 设置Destination network segment of the filter rule.
                     * @param _dstNet Destination network segment of the filter rule.
                     * 
                     */
                    void SetDstNet(const std::string& _dstNet);

                    /**
                     * 判断参数 DstNet 是否已赋值
                     * @return DstNet 是否已赋值
                     * 
                     */
                    bool DstNetHasBeenSet() const;

                    /**
                     * 获取Protocol of the filter rule.
                     * @return Protocol Protocol of the filter rule.
                     * 
                     */
                    std::string GetProtocol() const;

                    /**
                     * 设置Protocol of the filter rule.
                     * @param _protocol Protocol of the filter rule.
                     * 
                     */
                    void SetProtocol(const std::string& _protocol);

                    /**
                     * 判断参数 Protocol 是否已赋值
                     * @return Protocol 是否已赋值
                     * 
                     */
                    bool ProtocolHasBeenSet() const;

                    /**
                     * 获取Source port of the filter rule. Default value: 1–65535.
                     * @return SrcPort Source port of the filter rule. Default value: 1–65535.
                     * 
                     */
                    std::string GetSrcPort() const;

                    /**
                     * 设置Source port of the filter rule. Default value: 1–65535.
                     * @param _srcPort Source port of the filter rule. Default value: 1–65535.
                     * 
                     */
                    void SetSrcPort(const std::string& _srcPort);

                    /**
                     * 判断参数 SrcPort 是否已赋值
                     * @return SrcPort 是否已赋值
                     * 
                     */
                    bool SrcPortHasBeenSet() const;

                    /**
                     * 获取Destination port of the filter rule. Default value: 1–65535.
                     * @return DstPort Destination port of the filter rule. Default value: 1–65535.
                     * 
                     */
                    std::string GetDstPort() const;

                    /**
                     * 设置Destination port of the filter rule. Default value: 1–65535.
                     * @param _dstPort Destination port of the filter rule. Default value: 1–65535.
                     * 
                     */
                    void SetDstPort(const std::string& _dstPort);

                    /**
                     * 判断参数 DstPort 是否已赋值
                     * @return DstPort 是否已赋值
                     * 
                     */
                    bool DstPortHasBeenSet() const;

                private:

                    /**
                     * Source network segment of the filter rule.
                     */
                    std::string m_srcNet;
                    bool m_srcNetHasBeenSet;

                    /**
                     * Destination network segment of the filter rule.
                     */
                    std::string m_dstNet;
                    bool m_dstNetHasBeenSet;

                    /**
                     * Protocol of the filter rule.
                     */
                    std::string m_protocol;
                    bool m_protocolHasBeenSet;

                    /**
                     * Source port of the filter rule. Default value: 1–65535.
                     */
                    std::string m_srcPort;
                    bool m_srcPortHasBeenSet;

                    /**
                     * Destination port of the filter rule. Default value: 1–65535.
                     */
                    std::string m_dstPort;
                    bool m_dstPortHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VPC_V20170312_MODEL_TRAFFICMIRRORFILTER_H_
