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

#ifndef TENCENTCLOUD_DAYU_V20180709_MODEL_DDOSATTACKSOURCERECORD_H_
#define TENCENTCLOUD_DAYU_V20180709_MODEL_DDOSATTACKSOURCERECORD_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Dayu
    {
        namespace V20180709
        {
            namespace Model
            {
                /**
                * Attack source information
                */
                class DDoSAttackSourceRecord : public AbstractModel
                {
                public:
                    DDoSAttackSourceRecord();
                    ~DDoSAttackSourceRecord() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Attack source IP
                     * @return SrcIp Attack source IP
                     */
                    std::string GetSrcIp() const;

                    /**
                     * 设置Attack source IP
                     * @param SrcIp Attack source IP
                     */
                    void SetSrcIp(const std::string& _srcIp);

                    /**
                     * 判断参数 SrcIp 是否已赋值
                     * @return SrcIp 是否已赋值
                     */
                    bool SrcIpHasBeenSet() const;

                    /**
                     * 获取Province (valid for Mainland China)
                     * @return Province Province (valid for Mainland China)
                     */
                    std::string GetProvince() const;

                    /**
                     * 设置Province (valid for Mainland China)
                     * @param Province Province (valid for Mainland China)
                     */
                    void SetProvince(const std::string& _province);

                    /**
                     * 判断参数 Province 是否已赋值
                     * @return Province 是否已赋值
                     */
                    bool ProvinceHasBeenSet() const;

                    /**
                     * 获取Country/region
                     * @return Nation Country/region
                     */
                    std::string GetNation() const;

                    /**
                     * 设置Country/region
                     * @param Nation Country/region
                     */
                    void SetNation(const std::string& _nation);

                    /**
                     * 判断参数 Nation 是否已赋值
                     * @return Nation 是否已赋值
                     */
                    bool NationHasBeenSet() const;

                    /**
                     * 获取Total number of attack packets
                     * @return PacketSum Total number of attack packets
                     */
                    uint64_t GetPacketSum() const;

                    /**
                     * 设置Total number of attack packets
                     * @param PacketSum Total number of attack packets
                     */
                    void SetPacketSum(const uint64_t& _packetSum);

                    /**
                     * 判断参数 PacketSum 是否已赋值
                     * @return PacketSum 是否已赋值
                     */
                    bool PacketSumHasBeenSet() const;

                    /**
                     * 获取Total attack traffic
                     * @return PacketLen Total attack traffic
                     */
                    uint64_t GetPacketLen() const;

                    /**
                     * 设置Total attack traffic
                     * @param PacketLen Total attack traffic
                     */
                    void SetPacketLen(const uint64_t& _packetLen);

                    /**
                     * 判断参数 PacketLen 是否已赋值
                     * @return PacketLen 是否已赋值
                     */
                    bool PacketLenHasBeenSet() const;

                private:

                    /**
                     * Attack source IP
                     */
                    std::string m_srcIp;
                    bool m_srcIpHasBeenSet;

                    /**
                     * Province (valid for Mainland China)
                     */
                    std::string m_province;
                    bool m_provinceHasBeenSet;

                    /**
                     * Country/region
                     */
                    std::string m_nation;
                    bool m_nationHasBeenSet;

                    /**
                     * Total number of attack packets
                     */
                    uint64_t m_packetSum;
                    bool m_packetSumHasBeenSet;

                    /**
                     * Total attack traffic
                     */
                    uint64_t m_packetLen;
                    bool m_packetLenHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DAYU_V20180709_MODEL_DDOSATTACKSOURCERECORD_H_
