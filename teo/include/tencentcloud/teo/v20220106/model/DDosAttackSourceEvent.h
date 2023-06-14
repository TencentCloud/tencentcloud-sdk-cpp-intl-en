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

#ifndef TENCENTCLOUD_TEO_V20220106_MODEL_DDOSATTACKSOURCEEVENT_H_
#define TENCENTCLOUD_TEO_V20220106_MODEL_DDOSATTACKSOURCEEVENT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Teo
    {
        namespace V20220106
        {
            namespace Model
            {
                /**
                * DDoS attack event object
                */
                class DDosAttackSourceEvent : public AbstractModel
                {
                public:
                    DDosAttackSourceEvent();
                    ~DDosAttackSourceEvent() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Attack source IP
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return AttackSourceIp Attack source IP
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetAttackSourceIp() const;

                    /**
                     * 设置Attack source IP
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _attackSourceIp Attack source IP
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetAttackSourceIp(const std::string& _attackSourceIp);

                    /**
                     * 判断参数 AttackSourceIp 是否已赋值
                     * @return AttackSourceIp 是否已赋值
                     * 
                     */
                    bool AttackSourceIpHasBeenSet() const;

                    /**
                     * 获取Country/Region
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return AttackRegion Country/Region
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetAttackRegion() const;

                    /**
                     * 设置Country/Region
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _attackRegion Country/Region
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetAttackRegion(const std::string& _attackRegion);

                    /**
                     * 判断参数 AttackRegion 是否已赋值
                     * @return AttackRegion 是否已赋值
                     * 
                     */
                    bool AttackRegionHasBeenSet() const;

                    /**
                     * 获取Accumulative attack traffic
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return AttackFlow Accumulative attack traffic
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    uint64_t GetAttackFlow() const;

                    /**
                     * 设置Accumulative attack traffic
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _attackFlow Accumulative attack traffic
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetAttackFlow(const uint64_t& _attackFlow);

                    /**
                     * 判断参数 AttackFlow 是否已赋值
                     * @return AttackFlow 是否已赋值
                     * 
                     */
                    bool AttackFlowHasBeenSet() const;

                    /**
                     * 获取Accumulative number of attack packets
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return AttackPacketNum Accumulative number of attack packets
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    uint64_t GetAttackPacketNum() const;

                    /**
                     * 设置Accumulative number of attack packets
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _attackPacketNum Accumulative number of attack packets
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetAttackPacketNum(const uint64_t& _attackPacketNum);

                    /**
                     * 判断参数 AttackPacketNum 是否已赋值
                     * @return AttackPacketNum 是否已赋值
                     * 
                     */
                    bool AttackPacketNumHasBeenSet() const;

                private:

                    /**
                     * Attack source IP
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_attackSourceIp;
                    bool m_attackSourceIpHasBeenSet;

                    /**
                     * Country/Region
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_attackRegion;
                    bool m_attackRegionHasBeenSet;

                    /**
                     * Accumulative attack traffic
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    uint64_t m_attackFlow;
                    bool m_attackFlowHasBeenSet;

                    /**
                     * Accumulative number of attack packets
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    uint64_t m_attackPacketNum;
                    bool m_attackPacketNumHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220106_MODEL_DDOSATTACKSOURCEEVENT_H_
