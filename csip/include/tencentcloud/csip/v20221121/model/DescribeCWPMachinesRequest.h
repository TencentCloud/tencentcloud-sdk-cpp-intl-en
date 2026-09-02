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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_DESCRIBECWPMACHINESREQUEST_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_DESCRIBECWPMACHINESREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/csip/v20221121/model/Filter.h>


namespace TencentCloud
{
    namespace Csip
    {
        namespace V20221121
        {
            namespace Model
            {
                /**
                * DescribeCWPMachines request structure.
                */
                class DescribeCWPMachinesRequest : public AbstractModel
                {
                public:
                    DescribeCWPMachinesRequest();
                    ~DescribeCWPMachinesRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>Group account member id</p>
                     * @return MemberId <p>Group account member id</p>
                     * 
                     */
                    std::vector<std::string> GetMemberId() const;

                    /**
                     * 设置<p>Group account member id</p>
                     * @param _memberId <p>Group account member id</p>
                     * 
                     */
                    void SetMemberId(const std::vector<std::string>& _memberId);

                    /**
                     * 判断参数 MemberId 是否已赋值
                     * @return MemberId 是否已赋值
                     * 
                     */
                    bool MemberIdHasBeenSet() const;

                    /**
                     * 获取<p>1. Primary table field filtering (requires specifying OperatorType)<br>MachineName: host name, supports OperatorType 9 (fuzzy), 7 (IN), Values example: ["test-server"]<br>MachineIp: private IP address, supports OperatorType 9 (fuzzy), 7 (IN), Values example: ["10.0.0.1"]<br>MachineWanIp: public network IP, supports OperatorType 9 (fuzzy), 7 (IN), Values example: ["1.2.3.4"]<br>InstanceID: instance ID, supports OperatorType 9 (fuzzy), 7 (IN), Values example: ["ins-xxxxx"]<br>MachineStatus / InstanceStatus: instance status, supports OperatorType 7 (IN), 1 (equal), Values example: ["RUNNING"], available Values: RUNNING/STOPPED/EXPIRED<br>MachineOs: operating system type, supports OperatorType 7 (IN), Values example: ["1"], the value is a numeric code, see OsType description below<br>VpcId: VPC ID, supports OperatorType 7 (IN), 1 (equal), Values example: ["VPC-xxxxx"]<br>CloudFromEnum: cloud service provider, supports OperatorType 7 (IN), 1 (equal), Values example: ["0"], the value is a numeric code, see CloudFrom description below<br>Region: Region, supports OperatorType 7 (IN), 1 (equal), Values example: ["ap-guangzhou"]<br>AppId: account AppId, supports OperatorType 7 (IN), 1 (equal), Values example: ["1234567890"]<br>ProjectId: project ID, supports OperatorType 7 (IN), 1 (equal), Values example: ["0"]</p><p>2. Pre-filter fields (no OperatorType required)<br>AgentStatus: Agent status, single selection, Values example: ["ONLINE"], available Values: ONLINE/OFFLINE/UNINSTALL<br>ProtectType: protection type (comprehensive), Values example: ["ULTIMATE"], available Values: BASIC/PRO/ULTIMATE/NONE<br>CsipProtectType: CSIP protection type, Values example: ["ULTIMATE"], available Values: BASIC/PRO/ULTIMATE/NONE<br>CloudTags: cloud tag, Values example: ["tagKey$tagValue"], format: tagKey$tagValue or tagKey (matches key only), up to 5 Values<br>Tags: asset tag, Values example: ["123"], the value is a tag ID<br>ExposedStatus: exposure status, single selection, Values example: ["EXPOSED"], available Values: NOT_APPLICABLE/EXPOSED/UNEXPOSED</p><p>3. Special filter fields (no OperatorType required)<br>NetworkType: network type, single selection, Values example: ["1"], 1=VPC network, 2=BASIC network, 3=Non-Tencent Cloud Network<br>MachineType: machine type, multiple selections allowed, Values example: ["CVM"], available Values: CVM/BM/ECM/LH/EKS-NATIVE/ECS/EC2/VMS<br>Common: general search, single selection, Values example: ["keyword"], performs fuzzy matching on private IP address, public network IP, host name, and instance ID at the same time</p>
                     * @return Filter <p>1. Primary table field filtering (requires specifying OperatorType)<br>MachineName: host name, supports OperatorType 9 (fuzzy), 7 (IN), Values example: ["test-server"]<br>MachineIp: private IP address, supports OperatorType 9 (fuzzy), 7 (IN), Values example: ["10.0.0.1"]<br>MachineWanIp: public network IP, supports OperatorType 9 (fuzzy), 7 (IN), Values example: ["1.2.3.4"]<br>InstanceID: instance ID, supports OperatorType 9 (fuzzy), 7 (IN), Values example: ["ins-xxxxx"]<br>MachineStatus / InstanceStatus: instance status, supports OperatorType 7 (IN), 1 (equal), Values example: ["RUNNING"], available Values: RUNNING/STOPPED/EXPIRED<br>MachineOs: operating system type, supports OperatorType 7 (IN), Values example: ["1"], the value is a numeric code, see OsType description below<br>VpcId: VPC ID, supports OperatorType 7 (IN), 1 (equal), Values example: ["VPC-xxxxx"]<br>CloudFromEnum: cloud service provider, supports OperatorType 7 (IN), 1 (equal), Values example: ["0"], the value is a numeric code, see CloudFrom description below<br>Region: Region, supports OperatorType 7 (IN), 1 (equal), Values example: ["ap-guangzhou"]<br>AppId: account AppId, supports OperatorType 7 (IN), 1 (equal), Values example: ["1234567890"]<br>ProjectId: project ID, supports OperatorType 7 (IN), 1 (equal), Values example: ["0"]</p><p>2. Pre-filter fields (no OperatorType required)<br>AgentStatus: Agent status, single selection, Values example: ["ONLINE"], available Values: ONLINE/OFFLINE/UNINSTALL<br>ProtectType: protection type (comprehensive), Values example: ["ULTIMATE"], available Values: BASIC/PRO/ULTIMATE/NONE<br>CsipProtectType: CSIP protection type, Values example: ["ULTIMATE"], available Values: BASIC/PRO/ULTIMATE/NONE<br>CloudTags: cloud tag, Values example: ["tagKey$tagValue"], format: tagKey$tagValue or tagKey (matches key only), up to 5 Values<br>Tags: asset tag, Values example: ["123"], the value is a tag ID<br>ExposedStatus: exposure status, single selection, Values example: ["EXPOSED"], available Values: NOT_APPLICABLE/EXPOSED/UNEXPOSED</p><p>3. Special filter fields (no OperatorType required)<br>NetworkType: network type, single selection, Values example: ["1"], 1=VPC network, 2=BASIC network, 3=Non-Tencent Cloud Network<br>MachineType: machine type, multiple selections allowed, Values example: ["CVM"], available Values: CVM/BM/ECM/LH/EKS-NATIVE/ECS/EC2/VMS<br>Common: general search, single selection, Values example: ["keyword"], performs fuzzy matching on private IP address, public network IP, host name, and instance ID at the same time</p>
                     * 
                     */
                    Filter GetFilter() const;

                    /**
                     * 设置<p>1. Primary table field filtering (requires specifying OperatorType)<br>MachineName: host name, supports OperatorType 9 (fuzzy), 7 (IN), Values example: ["test-server"]<br>MachineIp: private IP address, supports OperatorType 9 (fuzzy), 7 (IN), Values example: ["10.0.0.1"]<br>MachineWanIp: public network IP, supports OperatorType 9 (fuzzy), 7 (IN), Values example: ["1.2.3.4"]<br>InstanceID: instance ID, supports OperatorType 9 (fuzzy), 7 (IN), Values example: ["ins-xxxxx"]<br>MachineStatus / InstanceStatus: instance status, supports OperatorType 7 (IN), 1 (equal), Values example: ["RUNNING"], available Values: RUNNING/STOPPED/EXPIRED<br>MachineOs: operating system type, supports OperatorType 7 (IN), Values example: ["1"], the value is a numeric code, see OsType description below<br>VpcId: VPC ID, supports OperatorType 7 (IN), 1 (equal), Values example: ["VPC-xxxxx"]<br>CloudFromEnum: cloud service provider, supports OperatorType 7 (IN), 1 (equal), Values example: ["0"], the value is a numeric code, see CloudFrom description below<br>Region: Region, supports OperatorType 7 (IN), 1 (equal), Values example: ["ap-guangzhou"]<br>AppId: account AppId, supports OperatorType 7 (IN), 1 (equal), Values example: ["1234567890"]<br>ProjectId: project ID, supports OperatorType 7 (IN), 1 (equal), Values example: ["0"]</p><p>2. Pre-filter fields (no OperatorType required)<br>AgentStatus: Agent status, single selection, Values example: ["ONLINE"], available Values: ONLINE/OFFLINE/UNINSTALL<br>ProtectType: protection type (comprehensive), Values example: ["ULTIMATE"], available Values: BASIC/PRO/ULTIMATE/NONE<br>CsipProtectType: CSIP protection type, Values example: ["ULTIMATE"], available Values: BASIC/PRO/ULTIMATE/NONE<br>CloudTags: cloud tag, Values example: ["tagKey$tagValue"], format: tagKey$tagValue or tagKey (matches key only), up to 5 Values<br>Tags: asset tag, Values example: ["123"], the value is a tag ID<br>ExposedStatus: exposure status, single selection, Values example: ["EXPOSED"], available Values: NOT_APPLICABLE/EXPOSED/UNEXPOSED</p><p>3. Special filter fields (no OperatorType required)<br>NetworkType: network type, single selection, Values example: ["1"], 1=VPC network, 2=BASIC network, 3=Non-Tencent Cloud Network<br>MachineType: machine type, multiple selections allowed, Values example: ["CVM"], available Values: CVM/BM/ECM/LH/EKS-NATIVE/ECS/EC2/VMS<br>Common: general search, single selection, Values example: ["keyword"], performs fuzzy matching on private IP address, public network IP, host name, and instance ID at the same time</p>
                     * @param _filter <p>1. Primary table field filtering (requires specifying OperatorType)<br>MachineName: host name, supports OperatorType 9 (fuzzy), 7 (IN), Values example: ["test-server"]<br>MachineIp: private IP address, supports OperatorType 9 (fuzzy), 7 (IN), Values example: ["10.0.0.1"]<br>MachineWanIp: public network IP, supports OperatorType 9 (fuzzy), 7 (IN), Values example: ["1.2.3.4"]<br>InstanceID: instance ID, supports OperatorType 9 (fuzzy), 7 (IN), Values example: ["ins-xxxxx"]<br>MachineStatus / InstanceStatus: instance status, supports OperatorType 7 (IN), 1 (equal), Values example: ["RUNNING"], available Values: RUNNING/STOPPED/EXPIRED<br>MachineOs: operating system type, supports OperatorType 7 (IN), Values example: ["1"], the value is a numeric code, see OsType description below<br>VpcId: VPC ID, supports OperatorType 7 (IN), 1 (equal), Values example: ["VPC-xxxxx"]<br>CloudFromEnum: cloud service provider, supports OperatorType 7 (IN), 1 (equal), Values example: ["0"], the value is a numeric code, see CloudFrom description below<br>Region: Region, supports OperatorType 7 (IN), 1 (equal), Values example: ["ap-guangzhou"]<br>AppId: account AppId, supports OperatorType 7 (IN), 1 (equal), Values example: ["1234567890"]<br>ProjectId: project ID, supports OperatorType 7 (IN), 1 (equal), Values example: ["0"]</p><p>2. Pre-filter fields (no OperatorType required)<br>AgentStatus: Agent status, single selection, Values example: ["ONLINE"], available Values: ONLINE/OFFLINE/UNINSTALL<br>ProtectType: protection type (comprehensive), Values example: ["ULTIMATE"], available Values: BASIC/PRO/ULTIMATE/NONE<br>CsipProtectType: CSIP protection type, Values example: ["ULTIMATE"], available Values: BASIC/PRO/ULTIMATE/NONE<br>CloudTags: cloud tag, Values example: ["tagKey$tagValue"], format: tagKey$tagValue or tagKey (matches key only), up to 5 Values<br>Tags: asset tag, Values example: ["123"], the value is a tag ID<br>ExposedStatus: exposure status, single selection, Values example: ["EXPOSED"], available Values: NOT_APPLICABLE/EXPOSED/UNEXPOSED</p><p>3. Special filter fields (no OperatorType required)<br>NetworkType: network type, single selection, Values example: ["1"], 1=VPC network, 2=BASIC network, 3=Non-Tencent Cloud Network<br>MachineType: machine type, multiple selections allowed, Values example: ["CVM"], available Values: CVM/BM/ECM/LH/EKS-NATIVE/ECS/EC2/VMS<br>Common: general search, single selection, Values example: ["keyword"], performs fuzzy matching on private IP address, public network IP, host name, and instance ID at the same time</p>
                     * 
                     */
                    void SetFilter(const Filter& _filter);

                    /**
                     * 判断参数 Filter 是否已赋值
                     * @return Filter 是否已赋值
                     * 
                     */
                    bool FilterHasBeenSet() const;

                    /**
                     * 获取<p>Whether TAT status information is required</p>
                     * @return NeedTatStatus <p>Whether TAT status information is required</p>
                     * 
                     */
                    bool GetNeedTatStatus() const;

                    /**
                     * 设置<p>Whether TAT status information is required</p>
                     * @param _needTatStatus <p>Whether TAT status information is required</p>
                     * 
                     */
                    void SetNeedTatStatus(const bool& _needTatStatus);

                    /**
                     * 判断参数 NeedTatStatus 是否已赋值
                     * @return NeedTatStatus 是否已赋值
                     * 
                     */
                    bool NeedTatStatusHasBeenSet() const;

                    /**
                     * 获取<p>Whether additional information is required, such as security center tags and Tencent Cloud tags</p>
                     * @return MoreInformation <p>Whether additional information is required, such as security center tags and Tencent Cloud tags</p>
                     * 
                     */
                    bool GetMoreInformation() const;

                    /**
                     * 设置<p>Whether additional information is required, such as security center tags and Tencent Cloud tags</p>
                     * @param _moreInformation <p>Whether additional information is required, such as security center tags and Tencent Cloud tags</p>
                     * 
                     */
                    void SetMoreInformation(const bool& _moreInformation);

                    /**
                     * 判断参数 MoreInformation 是否已赋值
                     * @return MoreInformation 是否已赋值
                     * 
                     */
                    bool MoreInformationHasBeenSet() const;

                    /**
                     * 获取<p>Whether container information is required, such as number of containers, cores, and container protection status</p>
                     * @return NeedContainerInfo <p>Whether container information is required, such as number of containers, cores, and container protection status</p>
                     * 
                     */
                    bool GetNeedContainerInfo() const;

                    /**
                     * 设置<p>Whether container information is required, such as number of containers, cores, and container protection status</p>
                     * @param _needContainerInfo <p>Whether container information is required, such as number of containers, cores, and container protection status</p>
                     * 
                     */
                    void SetNeedContainerInfo(const bool& _needContainerInfo);

                    /**
                     * 判断参数 NeedContainerInfo 是否已赋值
                     * @return NeedContainerInfo 是否已赋值
                     * 
                     */
                    bool NeedContainerInfoHasBeenSet() const;

                private:

                    /**
                     * <p>Group account member id</p>
                     */
                    std::vector<std::string> m_memberId;
                    bool m_memberIdHasBeenSet;

                    /**
                     * <p>1. Primary table field filtering (requires specifying OperatorType)<br>MachineName: host name, supports OperatorType 9 (fuzzy), 7 (IN), Values example: ["test-server"]<br>MachineIp: private IP address, supports OperatorType 9 (fuzzy), 7 (IN), Values example: ["10.0.0.1"]<br>MachineWanIp: public network IP, supports OperatorType 9 (fuzzy), 7 (IN), Values example: ["1.2.3.4"]<br>InstanceID: instance ID, supports OperatorType 9 (fuzzy), 7 (IN), Values example: ["ins-xxxxx"]<br>MachineStatus / InstanceStatus: instance status, supports OperatorType 7 (IN), 1 (equal), Values example: ["RUNNING"], available Values: RUNNING/STOPPED/EXPIRED<br>MachineOs: operating system type, supports OperatorType 7 (IN), Values example: ["1"], the value is a numeric code, see OsType description below<br>VpcId: VPC ID, supports OperatorType 7 (IN), 1 (equal), Values example: ["VPC-xxxxx"]<br>CloudFromEnum: cloud service provider, supports OperatorType 7 (IN), 1 (equal), Values example: ["0"], the value is a numeric code, see CloudFrom description below<br>Region: Region, supports OperatorType 7 (IN), 1 (equal), Values example: ["ap-guangzhou"]<br>AppId: account AppId, supports OperatorType 7 (IN), 1 (equal), Values example: ["1234567890"]<br>ProjectId: project ID, supports OperatorType 7 (IN), 1 (equal), Values example: ["0"]</p><p>2. Pre-filter fields (no OperatorType required)<br>AgentStatus: Agent status, single selection, Values example: ["ONLINE"], available Values: ONLINE/OFFLINE/UNINSTALL<br>ProtectType: protection type (comprehensive), Values example: ["ULTIMATE"], available Values: BASIC/PRO/ULTIMATE/NONE<br>CsipProtectType: CSIP protection type, Values example: ["ULTIMATE"], available Values: BASIC/PRO/ULTIMATE/NONE<br>CloudTags: cloud tag, Values example: ["tagKey$tagValue"], format: tagKey$tagValue or tagKey (matches key only), up to 5 Values<br>Tags: asset tag, Values example: ["123"], the value is a tag ID<br>ExposedStatus: exposure status, single selection, Values example: ["EXPOSED"], available Values: NOT_APPLICABLE/EXPOSED/UNEXPOSED</p><p>3. Special filter fields (no OperatorType required)<br>NetworkType: network type, single selection, Values example: ["1"], 1=VPC network, 2=BASIC network, 3=Non-Tencent Cloud Network<br>MachineType: machine type, multiple selections allowed, Values example: ["CVM"], available Values: CVM/BM/ECM/LH/EKS-NATIVE/ECS/EC2/VMS<br>Common: general search, single selection, Values example: ["keyword"], performs fuzzy matching on private IP address, public network IP, host name, and instance ID at the same time</p>
                     */
                    Filter m_filter;
                    bool m_filterHasBeenSet;

                    /**
                     * <p>Whether TAT status information is required</p>
                     */
                    bool m_needTatStatus;
                    bool m_needTatStatusHasBeenSet;

                    /**
                     * <p>Whether additional information is required, such as security center tags and Tencent Cloud tags</p>
                     */
                    bool m_moreInformation;
                    bool m_moreInformationHasBeenSet;

                    /**
                     * <p>Whether container information is required, such as number of containers, cores, and container protection status</p>
                     */
                    bool m_needContainerInfo;
                    bool m_needContainerInfoHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_DESCRIBECWPMACHINESREQUEST_H_
