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

#ifndef TENCENTCLOUD_YUNJING_V20180228_MODEL_DESCRIBEMACHINEINFORESPONSE_H_
#define TENCENTCLOUD_YUNJING_V20180228_MODEL_DESCRIBEMACHINEINFORESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Yunjing
    {
        namespace V20180228
        {
            namespace Model
            {
                /**
                * DescribeMachineInfo response structure.
                */
                class DescribeMachineInfoResponse : public AbstractModel
                {
                public:
                    DescribeMachineInfoResponse();
                    ~DescribeMachineInfoResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);


                    /**
                     * 获取Server IP.
                     * @return MachineIp Server IP.
                     */
                    std::string GetMachineIp() const;

                    /**
                     * 判断参数 MachineIp 是否已赋值
                     * @return MachineIp 是否已赋值
                     */
                    bool MachineIpHasBeenSet() const;

                    /**
                     * 获取Days under protection by CWP
                     * @return ProtectDays Days under protection by CWP
                     */
                    uint64_t GetProtectDays() const;

                    /**
                     * 判断参数 ProtectDays 是否已赋值
                     * @return ProtectDays 是否已赋值
                     */
                    bool ProtectDaysHasBeenSet() const;

                    /**
                     * 获取OS.
                     * @return MachineOs OS.
                     */
                    std::string GetMachineOs() const;

                    /**
                     * 判断参数 MachineOs 是否已赋值
                     * @return MachineOs 是否已赋值
                     */
                    bool MachineOsHasBeenSet() const;

                    /**
                     * 获取Server name.
                     * @return MachineName Server name.
                     */
                    std::string GetMachineName() const;

                    /**
                     * 判断参数 MachineName 是否已赋值
                     * @return MachineName 是否已赋值
                     */
                    bool MachineNameHasBeenSet() const;

                    /**
                     * 获取Status.
<li>ONLINE: online</li>
<li>OFFLINE: offline</li>
                     * @return MachineStatus Status.
<li>ONLINE: online</li>
<li>OFFLINE: offline</li>
                     */
                    std::string GetMachineStatus() const;

                    /**
                     * 判断参数 MachineStatus 是否已赋值
                     * @return MachineStatus 是否已赋值
                     */
                    bool MachineStatusHasBeenSet() const;

                    /**
                     * 获取Unique ID of CVM or BM instance.
                     * @return InstanceId Unique ID of CVM or BM instance.
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 判断参数 InstanceId 是否已赋值
                     * @return InstanceId 是否已赋值
                     */
                    bool InstanceIdHasBeenSet() const;

                    /**
                     * 获取Public IP of server.
                     * @return MachineWanIp Public IP of server.
                     */
                    std::string GetMachineWanIp() const;

                    /**
                     * 判断参数 MachineWanIp 是否已赋值
                     * @return MachineWanIp 是否已赋值
                     */
                    bool MachineWanIpHasBeenSet() const;

                    /**
                     * 获取CVM or BM instance `Uuid`.
                     * @return Quuid CVM or BM instance `Uuid`.
                     */
                    std::string GetQuuid() const;

                    /**
                     * 判断参数 Quuid 是否已赋值
                     * @return Quuid 是否已赋值
                     */
                    bool QuuidHasBeenSet() const;

                    /**
                     * 获取CWP agent `Uuid`.
                     * @return Uuid CWP agent `Uuid`.
                     */
                    std::string GetUuid() const;

                    /**
                     * 判断参数 Uuid 是否已赋值
                     * @return Uuid 是否已赋值
                     */
                    bool UuidHasBeenSet() const;

                    /**
                     * 获取Whether CWP Pro is activated.
<li>true: yes</li>
<li>false: no</li>
                     * @return IsProVersion Whether CWP Pro is activated.
<li>true: yes</li>
<li>false: no</li>
                     */
                    bool GetIsProVersion() const;

                    /**
                     * 判断参数 IsProVersion 是否已赋值
                     * @return IsProVersion 是否已赋值
                     */
                    bool IsProVersionHasBeenSet() const;

                    /**
                     * 获取CWP Pro activation time.
                     * @return ProVersionOpenDate CWP Pro activation time.
                     */
                    std::string GetProVersionOpenDate() const;

                    /**
                     * 判断参数 ProVersionOpenDate 是否已赋值
                     * @return ProVersionOpenDate 是否已赋值
                     */
                    bool ProVersionOpenDateHasBeenSet() const;

                    /**
                     * 获取Server type.
<li>CVM: CVM</li>
<li>BM: BM</li>
                     * @return MachineType Server type.
<li>CVM: CVM</li>
<li>BM: BM</li>
                     */
                    std::string GetMachineType() const;

                    /**
                     * 判断参数 MachineType 是否已赋值
                     * @return MachineType 是否已赋值
                     */
                    bool MachineTypeHasBeenSet() const;

                    /**
                     * 获取Server region, such as ap-guangzhou or ap-shanghai
                     * @return MachineRegion Server region, such as ap-guangzhou or ap-shanghai
                     */
                    std::string GetMachineRegion() const;

                    /**
                     * 判断参数 MachineRegion 是否已赋值
                     * @return MachineRegion 是否已赋值
                     */
                    bool MachineRegionHasBeenSet() const;

                    /**
                     * 获取Server status.
<li>POSTPAY: post-paid, i.e., pay-as-you-go </li>
                     * @return PayMode Server status.
<li>POSTPAY: post-paid, i.e., pay-as-you-go </li>
                     */
                    std::string GetPayMode() const;

                    /**
                     * 判断参数 PayMode 是否已赋值
                     * @return PayMode 是否已赋值
                     */
                    bool PayModeHasBeenSet() const;

                    /**
                     * 获取Number of trojans left for free scan.
                     * @return FreeMalwaresLeft Number of trojans left for free scan.
                     */
                    uint64_t GetFreeMalwaresLeft() const;

                    /**
                     * 判断参数 FreeMalwaresLeft 是否已赋值
                     * @return FreeMalwaresLeft 是否已赋值
                     */
                    bool FreeMalwaresLeftHasBeenSet() const;

                    /**
                     * 获取Number of vulnerability left for free scan.
                     * @return FreeVulsLeft Number of vulnerability left for free scan.
                     */
                    uint64_t GetFreeVulsLeft() const;

                    /**
                     * 判断参数 FreeVulsLeft 是否已赋值
                     * @return FreeVulsLeft 是否已赋值
                     */
                    bool FreeVulsLeftHasBeenSet() const;

                private:

                    /**
                     * Server IP.
                     */
                    std::string m_machineIp;
                    bool m_machineIpHasBeenSet;

                    /**
                     * Days under protection by CWP
                     */
                    uint64_t m_protectDays;
                    bool m_protectDaysHasBeenSet;

                    /**
                     * OS.
                     */
                    std::string m_machineOs;
                    bool m_machineOsHasBeenSet;

                    /**
                     * Server name.
                     */
                    std::string m_machineName;
                    bool m_machineNameHasBeenSet;

                    /**
                     * Status.
<li>ONLINE: online</li>
<li>OFFLINE: offline</li>
                     */
                    std::string m_machineStatus;
                    bool m_machineStatusHasBeenSet;

                    /**
                     * Unique ID of CVM or BM instance.
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * Public IP of server.
                     */
                    std::string m_machineWanIp;
                    bool m_machineWanIpHasBeenSet;

                    /**
                     * CVM or BM instance `Uuid`.
                     */
                    std::string m_quuid;
                    bool m_quuidHasBeenSet;

                    /**
                     * CWP agent `Uuid`.
                     */
                    std::string m_uuid;
                    bool m_uuidHasBeenSet;

                    /**
                     * Whether CWP Pro is activated.
<li>true: yes</li>
<li>false: no</li>
                     */
                    bool m_isProVersion;
                    bool m_isProVersionHasBeenSet;

                    /**
                     * CWP Pro activation time.
                     */
                    std::string m_proVersionOpenDate;
                    bool m_proVersionOpenDateHasBeenSet;

                    /**
                     * Server type.
<li>CVM: CVM</li>
<li>BM: BM</li>
                     */
                    std::string m_machineType;
                    bool m_machineTypeHasBeenSet;

                    /**
                     * Server region, such as ap-guangzhou or ap-shanghai
                     */
                    std::string m_machineRegion;
                    bool m_machineRegionHasBeenSet;

                    /**
                     * Server status.
<li>POSTPAY: post-paid, i.e., pay-as-you-go </li>
                     */
                    std::string m_payMode;
                    bool m_payModeHasBeenSet;

                    /**
                     * Number of trojans left for free scan.
                     */
                    uint64_t m_freeMalwaresLeft;
                    bool m_freeMalwaresLeftHasBeenSet;

                    /**
                     * Number of vulnerability left for free scan.
                     */
                    uint64_t m_freeVulsLeft;
                    bool m_freeVulsLeftHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_YUNJING_V20180228_MODEL_DESCRIBEMACHINEINFORESPONSE_H_
