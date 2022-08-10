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

#ifndef TENCENTCLOUD_TEO_V20220106_MODEL_DDOSRULE_H_
#define TENCENTCLOUD_TEO_V20220106_MODEL_DDOSRULE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/teo/v20220106/model/DDoSStatusInfo.h>
#include <tencentcloud/teo/v20220106/model/DDoSGeoIp.h>
#include <tencentcloud/teo/v20220106/model/DdosAllowBlock.h>
#include <tencentcloud/teo/v20220106/model/DDoSAntiPly.h>
#include <tencentcloud/teo/v20220106/model/DdosPacketFilter.h>
#include <tencentcloud/teo/v20220106/model/DdosAcls.h>


namespace TencentCloud
{
    namespace Teo
    {
        namespace V20220106
        {
            namespace Model
            {
                /**
                * DDoS mitigation configuration
                */
                class DdosRule : public AbstractModel
                {
                public:
                    DdosRule();
                    ~DdosRule() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取DDoS mitigation level
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * @return DdosStatusInfo DDoS mitigation level
Note: This field may return `null`, indicating that no valid value can be obtained.
                     */
                    DDoSStatusInfo GetDdosStatusInfo() const;

                    /**
                     * 设置DDoS mitigation level
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * @param DdosStatusInfo DDoS mitigation level
Note: This field may return `null`, indicating that no valid value can be obtained.
                     */
                    void SetDdosStatusInfo(const DDoSStatusInfo& _ddosStatusInfo);

                    /**
                     * 判断参数 DdosStatusInfo 是否已赋值
                     * @return DdosStatusInfo 是否已赋值
                     */
                    bool DdosStatusInfoHasBeenSet() const;

                    /**
                     * 获取DDoS regional blocking
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * @return DdosGeoIp DDoS regional blocking
Note: This field may return `null`, indicating that no valid value can be obtained.
                     */
                    DDoSGeoIp GetDdosGeoIp() const;

                    /**
                     * 设置DDoS regional blocking
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * @param DdosGeoIp DDoS regional blocking
Note: This field may return `null`, indicating that no valid value can be obtained.
                     */
                    void SetDdosGeoIp(const DDoSGeoIp& _ddosGeoIp);

                    /**
                     * 判断参数 DdosGeoIp 是否已赋值
                     * @return DdosGeoIp 是否已赋值
                     */
                    bool DdosGeoIpHasBeenSet() const;

                    /**
                     * 获取DDoS blocklist/allowlist
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * @return DdosAllowBlock DDoS blocklist/allowlist
Note: This field may return `null`, indicating that no valid value can be obtained.
                     */
                    DdosAllowBlock GetDdosAllowBlock() const;

                    /**
                     * 设置DDoS blocklist/allowlist
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * @param DdosAllowBlock DDoS blocklist/allowlist
Note: This field may return `null`, indicating that no valid value can be obtained.
                     */
                    void SetDdosAllowBlock(const DdosAllowBlock& _ddosAllowBlock);

                    /**
                     * 判断参数 DdosAllowBlock 是否已赋值
                     * @return DdosAllowBlock 是否已赋值
                     */
                    bool DdosAllowBlockHasBeenSet() const;

                    /**
                     * 获取Protocol blocking and null session protection
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * @return DdosAntiPly Protocol blocking and null session protection
Note: This field may return `null`, indicating that no valid value can be obtained.
                     */
                    DDoSAntiPly GetDdosAntiPly() const;

                    /**
                     * 设置Protocol blocking and null session protection
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * @param DdosAntiPly Protocol blocking and null session protection
Note: This field may return `null`, indicating that no valid value can be obtained.
                     */
                    void SetDdosAntiPly(const DDoSAntiPly& _ddosAntiPly);

                    /**
                     * 判断参数 DdosAntiPly 是否已赋值
                     * @return DdosAntiPly 是否已赋值
                     */
                    bool DdosAntiPlyHasBeenSet() const;

                    /**
                     * 获取DDoS feature filtering
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * @return DdosPacketFilter DDoS feature filtering
Note: This field may return `null`, indicating that no valid value can be obtained.
                     */
                    DdosPacketFilter GetDdosPacketFilter() const;

                    /**
                     * 设置DDoS feature filtering
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * @param DdosPacketFilter DDoS feature filtering
Note: This field may return `null`, indicating that no valid value can be obtained.
                     */
                    void SetDdosPacketFilter(const DdosPacketFilter& _ddosPacketFilter);

                    /**
                     * 判断参数 DdosPacketFilter 是否已赋值
                     * @return DdosPacketFilter 是否已赋值
                     */
                    bool DdosPacketFilterHasBeenSet() const;

                    /**
                     * 获取DDoS port filtering
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * @return DdosAcl DDoS port filtering
Note: This field may return `null`, indicating that no valid value can be obtained.
                     */
                    DdosAcls GetDdosAcl() const;

                    /**
                     * 设置DDoS port filtering
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * @param DdosAcl DDoS port filtering
Note: This field may return `null`, indicating that no valid value can be obtained.
                     */
                    void SetDdosAcl(const DdosAcls& _ddosAcl);

                    /**
                     * 判断参数 DdosAcl 是否已赋值
                     * @return DdosAcl 是否已赋值
                     */
                    bool DdosAclHasBeenSet() const;

                    /**
                     * 获取DDoS mitigation switch. `on`: Enable; `off`: Disable.
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * @return Switch DDoS mitigation switch. `on`: Enable; `off`: Disable.
Note: This field may return `null`, indicating that no valid value can be obtained.
                     */
                    std::string GetSwitch() const;

                    /**
                     * 设置DDoS mitigation switch. `on`: Enable; `off`: Disable.
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * @param Switch DDoS mitigation switch. `on`: Enable; `off`: Disable.
Note: This field may return `null`, indicating that no valid value can be obtained.
                     */
                    void SetSwitch(const std::string& _switch);

                    /**
                     * 判断参数 Switch 是否已赋值
                     * @return Switch 是否已赋值
                     */
                    bool SwitchHasBeenSet() const;

                    /**
                     * 获取Whether to enable UDP fragmentation. `on`: Enable; `off`: Disable.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return UdpShardOpen Whether to enable UDP fragmentation. `on`: Enable; `off`: Disable.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string GetUdpShardOpen() const;

                    /**
                     * 设置Whether to enable UDP fragmentation. `on`: Enable; `off`: Disable.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param UdpShardOpen Whether to enable UDP fragmentation. `on`: Enable; `off`: Disable.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    void SetUdpShardOpen(const std::string& _udpShardOpen);

                    /**
                     * 判断参数 UdpShardOpen 是否已赋值
                     * @return UdpShardOpen 是否已赋值
                     */
                    bool UdpShardOpenHasBeenSet() const;

                private:

                    /**
                     * DDoS mitigation level
Note: This field may return `null`, indicating that no valid value can be obtained.
                     */
                    DDoSStatusInfo m_ddosStatusInfo;
                    bool m_ddosStatusInfoHasBeenSet;

                    /**
                     * DDoS regional blocking
Note: This field may return `null`, indicating that no valid value can be obtained.
                     */
                    DDoSGeoIp m_ddosGeoIp;
                    bool m_ddosGeoIpHasBeenSet;

                    /**
                     * DDoS blocklist/allowlist
Note: This field may return `null`, indicating that no valid value can be obtained.
                     */
                    DdosAllowBlock m_ddosAllowBlock;
                    bool m_ddosAllowBlockHasBeenSet;

                    /**
                     * Protocol blocking and null session protection
Note: This field may return `null`, indicating that no valid value can be obtained.
                     */
                    DDoSAntiPly m_ddosAntiPly;
                    bool m_ddosAntiPlyHasBeenSet;

                    /**
                     * DDoS feature filtering
Note: This field may return `null`, indicating that no valid value can be obtained.
                     */
                    DdosPacketFilter m_ddosPacketFilter;
                    bool m_ddosPacketFilterHasBeenSet;

                    /**
                     * DDoS port filtering
Note: This field may return `null`, indicating that no valid value can be obtained.
                     */
                    DdosAcls m_ddosAcl;
                    bool m_ddosAclHasBeenSet;

                    /**
                     * DDoS mitigation switch. `on`: Enable; `off`: Disable.
Note: This field may return `null`, indicating that no valid value can be obtained.
                     */
                    std::string m_switch;
                    bool m_switchHasBeenSet;

                    /**
                     * Whether to enable UDP fragmentation. `on`: Enable; `off`: Disable.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_udpShardOpen;
                    bool m_udpShardOpenHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220106_MODEL_DDOSRULE_H_
