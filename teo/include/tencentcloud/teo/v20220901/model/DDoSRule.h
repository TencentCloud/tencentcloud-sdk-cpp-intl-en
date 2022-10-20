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

#ifndef TENCENTCLOUD_TEO_V20220901_MODEL_DDOSRULE_H_
#define TENCENTCLOUD_TEO_V20220901_MODEL_DDOSRULE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/teo/v20220901/model/DDoSStatusInfo.h>
#include <tencentcloud/teo/v20220901/model/DDoSGeoIp.h>
#include <tencentcloud/teo/v20220901/model/DDoSAllowBlock.h>
#include <tencentcloud/teo/v20220901/model/DDoSAntiPly.h>
#include <tencentcloud/teo/v20220901/model/DDoSPacketFilter.h>
#include <tencentcloud/teo/v20220901/model/DDoSAcl.h>
#include <tencentcloud/teo/v20220901/model/DDoSSpeedLimit.h>


namespace TencentCloud
{
    namespace Teo
    {
        namespace V20220901
        {
            namespace Model
            {
                /**
                * DDoS mitigation configuration
                */
                class DDoSRule : public AbstractModel
                {
                public:
                    DDoSRule();
                    ~DDoSRule() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取The DDoS mitigation level. If it is null, the setting that was last configured will be used.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return DDoSStatusInfo The DDoS mitigation level. If it is null, the setting that was last configured will be used.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    DDoSStatusInfo GetDDoSStatusInfo() const;

                    /**
                     * 设置The DDoS mitigation level. If it is null, the setting that was last configured will be used.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param DDoSStatusInfo The DDoS mitigation level. If it is null, the setting that was last configured will be used.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    void SetDDoSStatusInfo(const DDoSStatusInfo& _dDoSStatusInfo);

                    /**
                     * 判断参数 DDoSStatusInfo 是否已赋值
                     * @return DDoSStatusInfo 是否已赋值
                     */
                    bool DDoSStatusInfoHasBeenSet() const;

                    /**
                     * 获取The regional blocking settings. If it is null, the settings that were last configured will be used.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return DDoSGeoIp The regional blocking settings. If it is null, the settings that were last configured will be used.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    DDoSGeoIp GetDDoSGeoIp() const;

                    /**
                     * 设置The regional blocking settings. If it is null, the settings that were last configured will be used.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param DDoSGeoIp The regional blocking settings. If it is null, the settings that were last configured will be used.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    void SetDDoSGeoIp(const DDoSGeoIp& _dDoSGeoIp);

                    /**
                     * 判断参数 DDoSGeoIp 是否已赋值
                     * @return DDoSGeoIp 是否已赋值
                     */
                    bool DDoSGeoIpHasBeenSet() const;

                    /**
                     * 获取The IP blocklist/allowlist. If it is null, the settings that were last configured will be used.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return DDoSAllowBlock The IP blocklist/allowlist. If it is null, the settings that were last configured will be used.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    DDoSAllowBlock GetDDoSAllowBlock() const;

                    /**
                     * 设置The IP blocklist/allowlist. If it is null, the settings that were last configured will be used.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param DDoSAllowBlock The IP blocklist/allowlist. If it is null, the settings that were last configured will be used.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    void SetDDoSAllowBlock(const DDoSAllowBlock& _dDoSAllowBlock);

                    /**
                     * 判断参数 DDoSAllowBlock 是否已赋值
                     * @return DDoSAllowBlock 是否已赋值
                     */
                    bool DDoSAllowBlockHasBeenSet() const;

                    /**
                     * 获取The protocol and connection protection settings. If it is null, the settings that were last configured will be used.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return DDoSAntiPly The protocol and connection protection settings. If it is null, the settings that were last configured will be used.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    DDoSAntiPly GetDDoSAntiPly() const;

                    /**
                     * 设置The protocol and connection protection settings. If it is null, the settings that were last configured will be used.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param DDoSAntiPly The protocol and connection protection settings. If it is null, the settings that were last configured will be used.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    void SetDDoSAntiPly(const DDoSAntiPly& _dDoSAntiPly);

                    /**
                     * 判断参数 DDoSAntiPly 是否已赋值
                     * @return DDoSAntiPly 是否已赋值
                     */
                    bool DDoSAntiPlyHasBeenSet() const;

                    /**
                     * 获取The feature filtering settings. If it is null, the settings that were last configured will be used.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return DDoSPacketFilter The feature filtering settings. If it is null, the settings that were last configured will be used.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    DDoSPacketFilter GetDDoSPacketFilter() const;

                    /**
                     * 设置The feature filtering settings. If it is null, the settings that were last configured will be used.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param DDoSPacketFilter The feature filtering settings. If it is null, the settings that were last configured will be used.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    void SetDDoSPacketFilter(const DDoSPacketFilter& _dDoSPacketFilter);

                    /**
                     * 判断参数 DDoSPacketFilter 是否已赋值
                     * @return DDoSPacketFilter 是否已赋值
                     */
                    bool DDoSPacketFilterHasBeenSet() const;

                    /**
                     * 获取The port filtering settings. If it is null, the settings that were last configured will be used.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return DDoSAcl The port filtering settings. If it is null, the settings that were last configured will be used.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    DDoSAcl GetDDoSAcl() const;

                    /**
                     * 设置The port filtering settings. If it is null, the settings that were last configured will be used.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param DDoSAcl The port filtering settings. If it is null, the settings that were last configured will be used.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    void SetDDoSAcl(const DDoSAcl& _dDoSAcl);

                    /**
                     * 判断参数 DDoSAcl 是否已赋值
                     * @return DDoSAcl 是否已赋值
                     */
                    bool DDoSAclHasBeenSet() const;

                    /**
                     * 获取Whether to enable DDoS mitigation. Values:
<li>`on`: Enable</li>
<li>`off`: Disable</li>If it is null, the setting that was last configured will be used.
                     * @return Switch Whether to enable DDoS mitigation. Values:
<li>`on`: Enable</li>
<li>`off`: Disable</li>If it is null, the setting that was last configured will be used.
                     */
                    std::string GetSwitch() const;

                    /**
                     * 设置Whether to enable DDoS mitigation. Values:
<li>`on`: Enable</li>
<li>`off`: Disable</li>If it is null, the setting that was last configured will be used.
                     * @param Switch Whether to enable DDoS mitigation. Values:
<li>`on`: Enable</li>
<li>`off`: Disable</li>If it is null, the setting that was last configured will be used.
                     */
                    void SetSwitch(const std::string& _switch);

                    /**
                     * 判断参数 Switch 是否已赋值
                     * @return Switch 是否已赋值
                     */
                    bool SwitchHasBeenSet() const;

                    /**
                     * 获取Whether to enable UDP fragmentation. Values:
<li>`on`: Enable</li>
<li>`off`: Disable</li>It is required only when used as an output parameter.
                     * @return UdpShardOpen Whether to enable UDP fragmentation. Values:
<li>`on`: Enable</li>
<li>`off`: Disable</li>It is required only when used as an output parameter.
                     */
                    std::string GetUdpShardOpen() const;

                    /**
                     * 设置Whether to enable UDP fragmentation. Values:
<li>`on`: Enable</li>
<li>`off`: Disable</li>It is required only when used as an output parameter.
                     * @param UdpShardOpen Whether to enable UDP fragmentation. Values:
<li>`on`: Enable</li>
<li>`off`: Disable</li>It is required only when used as an output parameter.
                     */
                    void SetUdpShardOpen(const std::string& _udpShardOpen);

                    /**
                     * 判断参数 UdpShardOpen 是否已赋值
                     * @return UdpShardOpen 是否已赋值
                     */
                    bool UdpShardOpenHasBeenSet() const;

                    /**
                     * 获取The settings of the rate limiting rule. If it is null, the settings that were last configured will be used.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return DDoSSpeedLimit The settings of the rate limiting rule. If it is null, the settings that were last configured will be used.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    DDoSSpeedLimit GetDDoSSpeedLimit() const;

                    /**
                     * 设置The settings of the rate limiting rule. If it is null, the settings that were last configured will be used.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param DDoSSpeedLimit The settings of the rate limiting rule. If it is null, the settings that were last configured will be used.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    void SetDDoSSpeedLimit(const DDoSSpeedLimit& _dDoSSpeedLimit);

                    /**
                     * 判断参数 DDoSSpeedLimit 是否已赋值
                     * @return DDoSSpeedLimit 是否已赋值
                     */
                    bool DDoSSpeedLimitHasBeenSet() const;

                private:

                    /**
                     * The DDoS mitigation level. If it is null, the setting that was last configured will be used.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    DDoSStatusInfo m_dDoSStatusInfo;
                    bool m_dDoSStatusInfoHasBeenSet;

                    /**
                     * The regional blocking settings. If it is null, the settings that were last configured will be used.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    DDoSGeoIp m_dDoSGeoIp;
                    bool m_dDoSGeoIpHasBeenSet;

                    /**
                     * The IP blocklist/allowlist. If it is null, the settings that were last configured will be used.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    DDoSAllowBlock m_dDoSAllowBlock;
                    bool m_dDoSAllowBlockHasBeenSet;

                    /**
                     * The protocol and connection protection settings. If it is null, the settings that were last configured will be used.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    DDoSAntiPly m_dDoSAntiPly;
                    bool m_dDoSAntiPlyHasBeenSet;

                    /**
                     * The feature filtering settings. If it is null, the settings that were last configured will be used.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    DDoSPacketFilter m_dDoSPacketFilter;
                    bool m_dDoSPacketFilterHasBeenSet;

                    /**
                     * The port filtering settings. If it is null, the settings that were last configured will be used.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    DDoSAcl m_dDoSAcl;
                    bool m_dDoSAclHasBeenSet;

                    /**
                     * Whether to enable DDoS mitigation. Values:
<li>`on`: Enable</li>
<li>`off`: Disable</li>If it is null, the setting that was last configured will be used.
                     */
                    std::string m_switch;
                    bool m_switchHasBeenSet;

                    /**
                     * Whether to enable UDP fragmentation. Values:
<li>`on`: Enable</li>
<li>`off`: Disable</li>It is required only when used as an output parameter.
                     */
                    std::string m_udpShardOpen;
                    bool m_udpShardOpenHasBeenSet;

                    /**
                     * The settings of the rate limiting rule. If it is null, the settings that were last configured will be used.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    DDoSSpeedLimit m_dDoSSpeedLimit;
                    bool m_dDoSSpeedLimitHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220901_MODEL_DDOSRULE_H_
