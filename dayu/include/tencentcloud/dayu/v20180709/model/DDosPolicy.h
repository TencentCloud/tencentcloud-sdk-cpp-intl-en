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

#ifndef TENCENTCLOUD_DAYU_V20180709_MODEL_DDOSPOLICY_H_
#define TENCENTCLOUD_DAYU_V20180709_MODEL_DDOSPOLICY_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/dayu/v20180709/model/ResourceIp.h>
#include <tencentcloud/dayu/v20180709/model/DDoSPolicyDropOption.h>
#include <tencentcloud/dayu/v20180709/model/DDoSPolicyPortLimit.h>
#include <tencentcloud/dayu/v20180709/model/DDoSPolicyPacketFilter.h>
#include <tencentcloud/dayu/v20180709/model/IpBlackWhite.h>
#include <tencentcloud/dayu/v20180709/model/WaterPrintPolicy.h>
#include <tencentcloud/dayu/v20180709/model/WaterPrintKey.h>


namespace TencentCloud
{
    namespace Dayu
    {
        namespace V20180709
        {
            namespace Model
            {
                /**
                * Advanced DDoS policy
                */
                class DDosPolicy : public AbstractModel
                {
                public:
                    DDosPolicy();
                    ~DDosPolicy() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Resource bound to policy
                     * @return Resources Resource bound to policy
                     * 
                     */
                    std::vector<ResourceIp> GetResources() const;

                    /**
                     * 设置Resource bound to policy
                     * @param _resources Resource bound to policy
                     * 
                     */
                    void SetResources(const std::vector<ResourceIp>& _resources);

                    /**
                     * 判断参数 Resources 是否已赋值
                     * @return Resources 是否已赋值
                     * 
                     */
                    bool ResourcesHasBeenSet() const;

                    /**
                     * 获取Disabled protocol
                     * @return DropOptions Disabled protocol
                     * 
                     */
                    DDoSPolicyDropOption GetDropOptions() const;

                    /**
                     * 设置Disabled protocol
                     * @param _dropOptions Disabled protocol
                     * 
                     */
                    void SetDropOptions(const DDoSPolicyDropOption& _dropOptions);

                    /**
                     * 判断参数 DropOptions 是否已赋值
                     * @return DropOptions 是否已赋值
                     * 
                     */
                    bool DropOptionsHasBeenSet() const;

                    /**
                     * 获取Disabled port
                     * @return PortLimits Disabled port
                     * 
                     */
                    std::vector<DDoSPolicyPortLimit> GetPortLimits() const;

                    /**
                     * 设置Disabled port
                     * @param _portLimits Disabled port
                     * 
                     */
                    void SetPortLimits(const std::vector<DDoSPolicyPortLimit>& _portLimits);

                    /**
                     * 判断参数 PortLimits 是否已赋值
                     * @return PortLimits 是否已赋值
                     * 
                     */
                    bool PortLimitsHasBeenSet() const;

                    /**
                     * 获取Packet filter
                     * @return PacketFilters Packet filter
                     * 
                     */
                    std::vector<DDoSPolicyPacketFilter> GetPacketFilters() const;

                    /**
                     * 设置Packet filter
                     * @param _packetFilters Packet filter
                     * 
                     */
                    void SetPacketFilters(const std::vector<DDoSPolicyPacketFilter>& _packetFilters);

                    /**
                     * 判断参数 PacketFilters 是否已赋值
                     * @return PacketFilters 是否已赋值
                     * 
                     */
                    bool PacketFiltersHasBeenSet() const;

                    /**
                     * 获取IP blocklist/allowlist
                     * @return IpBlackWhiteLists IP blocklist/allowlist
                     * 
                     */
                    std::vector<IpBlackWhite> GetIpBlackWhiteLists() const;

                    /**
                     * 设置IP blocklist/allowlist
                     * @param _ipBlackWhiteLists IP blocklist/allowlist
                     * 
                     */
                    void SetIpBlackWhiteLists(const std::vector<IpBlackWhite>& _ipBlackWhiteLists);

                    /**
                     * 判断参数 IpBlackWhiteLists 是否已赋值
                     * @return IpBlackWhiteLists 是否已赋值
                     * 
                     */
                    bool IpBlackWhiteListsHasBeenSet() const;

                    /**
                     * 获取Policy ID
                     * @return PolicyId Policy ID
                     * 
                     */
                    std::string GetPolicyId() const;

                    /**
                     * 设置Policy ID
                     * @param _policyId Policy ID
                     * 
                     */
                    void SetPolicyId(const std::string& _policyId);

                    /**
                     * 判断参数 PolicyId 是否已赋值
                     * @return PolicyId 是否已赋值
                     * 
                     */
                    bool PolicyIdHasBeenSet() const;

                    /**
                     * 获取Policy name
                     * @return PolicyName Policy name
                     * 
                     */
                    std::string GetPolicyName() const;

                    /**
                     * 设置Policy name
                     * @param _policyName Policy name
                     * 
                     */
                    void SetPolicyName(const std::string& _policyName);

                    /**
                     * 判断参数 PolicyName 是否已赋值
                     * @return PolicyName 是否已赋值
                     * 
                     */
                    bool PolicyNameHasBeenSet() const;

                    /**
                     * 获取Policy creation time
                     * @return CreateTime Policy creation time
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置Policy creation time
                     * @param _createTime Policy creation time
                     * 
                     */
                    void SetCreateTime(const std::string& _createTime);

                    /**
                     * 判断参数 CreateTime 是否已赋值
                     * @return CreateTime 是否已赋值
                     * 
                     */
                    bool CreateTimeHasBeenSet() const;

                    /**
                     * 获取Watermarking policy parameter. There can be only one policy. If there are no policies, the array is empty
                     * @return WaterPrint Watermarking policy parameter. There can be only one policy. If there are no policies, the array is empty
                     * 
                     */
                    std::vector<WaterPrintPolicy> GetWaterPrint() const;

                    /**
                     * 设置Watermarking policy parameter. There can be only one policy. If there are no policies, the array is empty
                     * @param _waterPrint Watermarking policy parameter. There can be only one policy. If there are no policies, the array is empty
                     * 
                     */
                    void SetWaterPrint(const std::vector<WaterPrintPolicy>& _waterPrint);

                    /**
                     * 判断参数 WaterPrint 是否已赋值
                     * @return WaterPrint 是否已赋值
                     * 
                     */
                    bool WaterPrintHasBeenSet() const;

                    /**
                     * 获取Watermark key. There can be up to two keys. If there are no policies, the array is empty
                     * @return WaterKey Watermark key. There can be up to two keys. If there are no policies, the array is empty
                     * 
                     */
                    std::vector<WaterPrintKey> GetWaterKey() const;

                    /**
                     * 设置Watermark key. There can be up to two keys. If there are no policies, the array is empty
                     * @param _waterKey Watermark key. There can be up to two keys. If there are no policies, the array is empty
                     * 
                     */
                    void SetWaterKey(const std::vector<WaterPrintKey>& _waterKey);

                    /**
                     * 判断参数 WaterKey 是否已赋值
                     * @return WaterKey 是否已赋值
                     * 
                     */
                    bool WaterKeyHasBeenSet() const;

                    /**
                     * 获取Resource instance bound to policy
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return BoundResources Resource instance bound to policy
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::vector<std::string> GetBoundResources() const;

                    /**
                     * 设置Resource instance bound to policy
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param _boundResources Resource instance bound to policy
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetBoundResources(const std::vector<std::string>& _boundResources);

                    /**
                     * 判断参数 BoundResources 是否已赋值
                     * @return BoundResources 是否已赋值
                     * 
                     */
                    bool BoundResourcesHasBeenSet() const;

                    /**
                     * 获取Policy scenario
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return SceneId Policy scenario
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetSceneId() const;

                    /**
                     * 设置Policy scenario
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param _sceneId Policy scenario
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetSceneId(const std::string& _sceneId);

                    /**
                     * 判断参数 SceneId 是否已赋值
                     * @return SceneId 是否已赋值
                     * 
                     */
                    bool SceneIdHasBeenSet() const;

                private:

                    /**
                     * Resource bound to policy
                     */
                    std::vector<ResourceIp> m_resources;
                    bool m_resourcesHasBeenSet;

                    /**
                     * Disabled protocol
                     */
                    DDoSPolicyDropOption m_dropOptions;
                    bool m_dropOptionsHasBeenSet;

                    /**
                     * Disabled port
                     */
                    std::vector<DDoSPolicyPortLimit> m_portLimits;
                    bool m_portLimitsHasBeenSet;

                    /**
                     * Packet filter
                     */
                    std::vector<DDoSPolicyPacketFilter> m_packetFilters;
                    bool m_packetFiltersHasBeenSet;

                    /**
                     * IP blocklist/allowlist
                     */
                    std::vector<IpBlackWhite> m_ipBlackWhiteLists;
                    bool m_ipBlackWhiteListsHasBeenSet;

                    /**
                     * Policy ID
                     */
                    std::string m_policyId;
                    bool m_policyIdHasBeenSet;

                    /**
                     * Policy name
                     */
                    std::string m_policyName;
                    bool m_policyNameHasBeenSet;

                    /**
                     * Policy creation time
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * Watermarking policy parameter. There can be only one policy. If there are no policies, the array is empty
                     */
                    std::vector<WaterPrintPolicy> m_waterPrint;
                    bool m_waterPrintHasBeenSet;

                    /**
                     * Watermark key. There can be up to two keys. If there are no policies, the array is empty
                     */
                    std::vector<WaterPrintKey> m_waterKey;
                    bool m_waterKeyHasBeenSet;

                    /**
                     * Resource instance bound to policy
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<std::string> m_boundResources;
                    bool m_boundResourcesHasBeenSet;

                    /**
                     * Policy scenario
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_sceneId;
                    bool m_sceneIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DAYU_V20180709_MODEL_DDOSPOLICY_H_
