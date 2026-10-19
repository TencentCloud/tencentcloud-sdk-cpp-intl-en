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

#ifndef TENCENTCLOUD_CFW_V20190904_MODEL_FWGROUPIPFLOWSTAT_H_
#define TENCENTCLOUD_CFW_V20190904_MODEL_FWGROUPIPFLOWSTAT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cfw
    {
        namespace V20190904
        {
            namespace Model
            {
                /**
                * VPC firewall status monitoring diagram
                */
                class FwGroupIpFlowStat : public AbstractModel
                {
                public:
                    FwGroupIpFlowStat();
                    ~FwGroupIpFlowStat() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取IP
                     * @return Ip IP
                     * 
                     */
                    std::string GetIp() const;

                    /**
                     * 设置IP
                     * @param _ip IP
                     * 
                     */
                    void SetIp(const std::string& _ip);

                    /**
                     * 判断参数 Ip 是否已赋值
                     * @return Ip 是否已赋值
                     * 
                     */
                    bool IpHasBeenSet() const;

                    /**
                     * 获取Instance ID
                     * @return InstanceId Instance ID
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置Instance ID
                     * @param _instanceId Instance ID
                     * 
                     */
                    void SetInstanceId(const std::string& _instanceId);

                    /**
                     * 判断参数 InstanceId 是否已赋值
                     * @return InstanceId 是否已赋值
                     * 
                     */
                    bool InstanceIdHasBeenSet() const;

                    /**
                     * 获取Instance name.
                     * @return InstanceName Instance name.
                     * 
                     */
                    std::string GetInstanceName() const;

                    /**
                     * 设置Instance name.
                     * @param _instanceName Instance name.
                     * 
                     */
                    void SetInstanceName(const std::string& _instanceName);

                    /**
                     * 判断参数 InstanceName 是否已赋值
                     * @return InstanceName 是否已赋值
                     * 
                     */
                    bool InstanceNameHasBeenSet() const;

                    /**
                     * 获取VPCID
                     * @return VpcId VPCID
                     * 
                     */
                    std::string GetVpcId() const;

                    /**
                     * 设置VPCID
                     * @param _vpcId VPCID
                     * 
                     */
                    void SetVpcId(const std::string& _vpcId);

                    /**
                     * 判断参数 VpcId 是否已赋值
                     * @return VpcId 是否已赋值
                     * 
                     */
                    bool VpcIdHasBeenSet() const;

                    /**
                     * 获取VPC name
                     * @return VpcName VPC name
                     * 
                     */
                    std::string GetVpcName() const;

                    /**
                     * 设置VPC name
                     * @param _vpcName VPC name
                     * 
                     */
                    void SetVpcName(const std::string& _vpcName);

                    /**
                     * 判断参数 VpcName 是否已赋值
                     * @return VpcName 是否已赋值
                     * 
                     */
                    bool VpcNameHasBeenSet() const;

                    /**
                     * 获取Peak traffic
                     * @return FlowMax Peak traffic
                     * 
                     */
                    int64_t GetFlowMax() const;

                    /**
                     * 设置Peak traffic
                     * @param _flowMax Peak traffic
                     * 
                     */
                    void SetFlowMax(const int64_t& _flowMax);

                    /**
                     * 判断参数 FlowMax 是否已赋值
                     * @return FlowMax 是否已赋值
                     * 
                     */
                    bool FlowMaxHasBeenSet() const;

                    /**
                     * 获取Average bandwidth
                     * @return FlowAvg Average bandwidth
                     * 
                     */
                    double GetFlowAvg() const;

                    /**
                     * 设置Average bandwidth
                     * @param _flowAvg Average bandwidth
                     * 
                     */
                    void SetFlowAvg(const double& _flowAvg);

                    /**
                     * 判断参数 FlowAvg 是否已赋值
                     * @return FlowAvg 是否已赋值
                     * 
                     */
                    bool FlowAvgHasBeenSet() const;

                    /**
                     * 获取Rate limiting status
                     * @return TcRuleStatus Rate limiting status
                     * 
                     */
                    int64_t GetTcRuleStatus() const;

                    /**
                     * 设置Rate limiting status
                     * @param _tcRuleStatus Rate limiting status
                     * 
                     */
                    void SetTcRuleStatus(const int64_t& _tcRuleStatus);

                    /**
                     * 判断参数 TcRuleStatus 是否已赋值
                     * @return TcRuleStatus 是否已赋值
                     * 
                     */
                    bool TcRuleStatusHasBeenSet() const;

                    /**
                     * 获取Firewall ID.
                     * @return FwInsId Firewall ID.
                     * 
                     */
                    std::string GetFwInsId() const;

                    /**
                     * 设置Firewall ID.
                     * @param _fwInsId Firewall ID.
                     * 
                     */
                    void SetFwInsId(const std::string& _fwInsId);

                    /**
                     * 判断参数 FwInsId 是否已赋值
                     * @return FwInsId 是否已赋值
                     * 
                     */
                    bool FwInsIdHasBeenSet() const;

                    /**
                     * 获取0 IPV4 , 1 IPV6
                     * @return IpVersion 0 IPV4 , 1 IPV6
                     * 
                     */
                    int64_t GetIpVersion() const;

                    /**
                     * 设置0 IPV4 , 1 IPV6
                     * @param _ipVersion 0 IPV4 , 1 IPV6
                     * 
                     */
                    void SetIpVersion(const int64_t& _ipVersion);

                    /**
                     * 判断参数 IpVersion 是否已赋值
                     * @return IpVersion 是否已赋值
                     * 
                     */
                    bool IpVersionHasBeenSet() const;

                private:

                    /**
                     * IP
                     */
                    std::string m_ip;
                    bool m_ipHasBeenSet;

                    /**
                     * Instance ID
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * Instance name.
                     */
                    std::string m_instanceName;
                    bool m_instanceNameHasBeenSet;

                    /**
                     * VPCID
                     */
                    std::string m_vpcId;
                    bool m_vpcIdHasBeenSet;

                    /**
                     * VPC name
                     */
                    std::string m_vpcName;
                    bool m_vpcNameHasBeenSet;

                    /**
                     * Peak traffic
                     */
                    int64_t m_flowMax;
                    bool m_flowMaxHasBeenSet;

                    /**
                     * Average bandwidth
                     */
                    double m_flowAvg;
                    bool m_flowAvgHasBeenSet;

                    /**
                     * Rate limiting status
                     */
                    int64_t m_tcRuleStatus;
                    bool m_tcRuleStatusHasBeenSet;

                    /**
                     * Firewall ID.
                     */
                    std::string m_fwInsId;
                    bool m_fwInsIdHasBeenSet;

                    /**
                     * 0 IPV4 , 1 IPV6
                     */
                    int64_t m_ipVersion;
                    bool m_ipVersionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CFW_V20190904_MODEL_FWGROUPIPFLOWSTAT_H_
