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

#ifndef TENCENTCLOUD_CWP_V20180228_MODEL_NETATTACKTOPINFO_H_
#define TENCENTCLOUD_CWP_V20180228_MODEL_NETATTACKTOPINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cwp/v20180228/model/TopInfo.h>


namespace TencentCloud
{
    namespace Cwp
    {
        namespace V20180228
        {
            namespace Model
            {
                /**
                * Statistics on top network attacks
                */
                class NetAttackTopInfo : public AbstractModel
                {
                public:
                    NetAttackTopInfo();
                    ~NetAttackTopInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Top Statistical Data on Network Attack Host Dimension
                     * @return Agent Top Statistical Data on Network Attack Host Dimension
                     * 
                     */
                    std::vector<TopInfo> GetAgent() const;

                    /**
                     * 设置Top Statistical Data on Network Attack Host Dimension
                     * @param _agent Top Statistical Data on Network Attack Host Dimension
                     * 
                     */
                    void SetAgent(const std::vector<TopInfo>& _agent);

                    /**
                     * 判断参数 Agent 是否已赋值
                     * @return Agent 是否已赋值
                     * 
                     */
                    bool AgentHasBeenSet() const;

                    /**
                     * 获取Top Statistical Data on Network Attack IP Source Dimension
                     * @return SrcIp Top Statistical Data on Network Attack IP Source Dimension
                     * 
                     */
                    std::vector<TopInfo> GetSrcIp() const;

                    /**
                     * 设置Top Statistical Data on Network Attack IP Source Dimension
                     * @param _srcIp Top Statistical Data on Network Attack IP Source Dimension
                     * 
                     */
                    void SetSrcIp(const std::vector<TopInfo>& _srcIp);

                    /**
                     * 判断参数 SrcIp 是否已赋值
                     * @return SrcIp 是否已赋值
                     * 
                     */
                    bool SrcIpHasBeenSet() const;

                    /**
                     * 获取Top Statistical Data on Network Attack Target Port Dimension
                     * @return DstPort Top Statistical Data on Network Attack Target Port Dimension
                     * 
                     */
                    std::vector<TopInfo> GetDstPort() const;

                    /**
                     * 设置Top Statistical Data on Network Attack Target Port Dimension
                     * @param _dstPort Top Statistical Data on Network Attack Target Port Dimension
                     * 
                     */
                    void SetDstPort(const std::vector<TopInfo>& _dstPort);

                    /**
                     * 判断参数 DstPort 是否已赋值
                     * @return DstPort 是否已赋值
                     * 
                     */
                    bool DstPortHasBeenSet() const;

                    /**
                     * 获取Top Statistical Data on Network Attack Vulnerability Dimension
                     * @return Vul Top Statistical Data on Network Attack Vulnerability Dimension
                     * 
                     */
                    std::vector<TopInfo> GetVul() const;

                    /**
                     * 设置Top Statistical Data on Network Attack Vulnerability Dimension
                     * @param _vul Top Statistical Data on Network Attack Vulnerability Dimension
                     * 
                     */
                    void SetVul(const std::vector<TopInfo>& _vul);

                    /**
                     * 判断参数 Vul 是否已赋值
                     * @return Vul 是否已赋值
                     * 
                     */
                    bool VulHasBeenSet() const;

                private:

                    /**
                     * Top Statistical Data on Network Attack Host Dimension
                     */
                    std::vector<TopInfo> m_agent;
                    bool m_agentHasBeenSet;

                    /**
                     * Top Statistical Data on Network Attack IP Source Dimension
                     */
                    std::vector<TopInfo> m_srcIp;
                    bool m_srcIpHasBeenSet;

                    /**
                     * Top Statistical Data on Network Attack Target Port Dimension
                     */
                    std::vector<TopInfo> m_dstPort;
                    bool m_dstPortHasBeenSet;

                    /**
                     * Top Statistical Data on Network Attack Vulnerability Dimension
                     */
                    std::vector<TopInfo> m_vul;
                    bool m_vulHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CWP_V20180228_MODEL_NETATTACKTOPINFO_H_
