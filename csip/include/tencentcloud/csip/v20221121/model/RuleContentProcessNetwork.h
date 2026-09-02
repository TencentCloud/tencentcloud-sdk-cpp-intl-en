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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_RULECONTENTPROCESSNETWORK_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_RULECONTENTPROCESSNETWORK_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/csip/v20221121/model/RuleContentProcessInfo.h>


namespace TencentCloud
{
    namespace Csip
    {
        namespace V20221121
        {
            namespace Model
            {
                /**
                * Content structure of process network rules for reverse shell allowlist scenarios. Filtering is supported by process matching combined with IP address or port.
                */
                class RuleContentProcessNetwork : public AbstractModel
                {
                public:
                    RuleContentProcessNetwork();
                    ~RuleContentProcessNetwork() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>Current process</p>
                     * @return Process <p>Current process</p>
                     * 
                     */
                    RuleContentProcessInfo GetProcess() const;

                    /**
                     * 设置<p>Current process</p>
                     * @param _process <p>Current process</p>
                     * 
                     */
                    void SetProcess(const RuleContentProcessInfo& _process);

                    /**
                     * 判断参数 Process 是否已赋值
                     * @return Process 是否已赋值
                     * 
                     */
                    bool ProcessHasBeenSet() const;

                    /**
                     * 获取<p>Destination IP (required): enable individually IP/IP range/CIDR. Both IPv4 and IPv6 are supported.</p>
                     * @return DstIP <p>Destination IP (required): enable individually IP/IP range/CIDR. Both IPv4 and IPv6 are supported.</p>
                     * 
                     */
                    std::string GetDstIP() const;

                    /**
                     * 设置<p>Destination IP (required): enable individually IP/IP range/CIDR. Both IPv4 and IPv6 are supported.</p>
                     * @param _dstIP <p>Destination IP (required): enable individually IP/IP range/CIDR. Both IPv4 and IPv6 are supported.</p>
                     * 
                     */
                    void SetDstIP(const std::string& _dstIP);

                    /**
                     * 判断参数 DstIP 是否已赋值
                     * @return DstIP 是否已赋值
                     * 
                     */
                    bool DstIPHasBeenSet() const;

                    /**
                     * 获取<p>Parent process</p>
                     * @return ParentProcess <p>Parent process</p>
                     * 
                     */
                    RuleContentProcessInfo GetParentProcess() const;

                    /**
                     * 设置<p>Parent process</p>
                     * @param _parentProcess <p>Parent process</p>
                     * 
                     */
                    void SetParentProcess(const RuleContentProcessInfo& _parentProcess);

                    /**
                     * 判断参数 ParentProcess 是否已赋值
                     * @return ParentProcess 是否已赋值
                     * 
                     */
                    bool ParentProcessHasBeenSet() const;

                    /**
                     * 获取<p>Destination port list (optional): supports 1-65535, being empty indicates no port limit</p>
                     * @return DstPorts <p>Destination port list (optional): supports 1-65535, being empty indicates no port limit</p>
                     * 
                     */
                    std::vector<uint64_t> GetDstPorts() const;

                    /**
                     * 设置<p>Destination port list (optional): supports 1-65535, being empty indicates no port limit</p>
                     * @param _dstPorts <p>Destination port list (optional): supports 1-65535, being empty indicates no port limit</p>
                     * 
                     */
                    void SetDstPorts(const std::vector<uint64_t>& _dstPorts);

                    /**
                     * 判断参数 DstPorts 是否已赋值
                     * @return DstPorts 是否已赋值
                     * 
                     */
                    bool DstPortsHasBeenSet() const;

                private:

                    /**
                     * <p>Current process</p>
                     */
                    RuleContentProcessInfo m_process;
                    bool m_processHasBeenSet;

                    /**
                     * <p>Destination IP (required): enable individually IP/IP range/CIDR. Both IPv4 and IPv6 are supported.</p>
                     */
                    std::string m_dstIP;
                    bool m_dstIPHasBeenSet;

                    /**
                     * <p>Parent process</p>
                     */
                    RuleContentProcessInfo m_parentProcess;
                    bool m_parentProcessHasBeenSet;

                    /**
                     * <p>Destination port list (optional): supports 1-65535, being empty indicates no port limit</p>
                     */
                    std::vector<uint64_t> m_dstPorts;
                    bool m_dstPortsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_RULECONTENTPROCESSNETWORK_H_
