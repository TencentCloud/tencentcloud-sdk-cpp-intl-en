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

#ifndef TENCENTCLOUD_CWP_V20180228_MODEL_DESCRIBEMACHINEGENERALRESPONSE_H_
#define TENCENTCLOUD_CWP_V20180228_MODEL_DESCRIBEMACHINEGENERALRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cwp
    {
        namespace V20180228
        {
            namespace Model
            {
                /**
                * DescribeMachineGeneral response structure.
                */
                class DescribeMachineGeneralResponse : public AbstractModel
                {
                public:
                    DescribeMachineGeneralResponse();
                    ~DescribeMachineGeneralResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取Total number of assets
                     * @return MachineCnt Total number of assets
                     * 
                     */
                    uint64_t GetMachineCnt() const;

                    /**
                     * 判断参数 MachineCnt 是否已赋值
                     * @return MachineCnt 是否已赋值
                     * 
                     */
                    bool MachineCntHasBeenSet() const;

                    /**
                     * 获取Number of Tencent Cloud machines
                     * @return TencentCloudMachineCnt Number of Tencent Cloud machines
                     * @deprecated
                     */
                    uint64_t GetTencentCloudMachineCnt() const;

                    /**
                     * 判断参数 TencentCloudMachineCnt 是否已赋值
                     * @return TencentCloudMachineCnt 是否已赋值
                     * @deprecated
                     */
                    bool TencentCloudMachineCntHasBeenSet() const;

                    /**
                     * 获取Number of Alibaba Cloud machines
                     * @return AliCloudMachineCnt Number of Alibaba Cloud machines
                     * @deprecated
                     */
                    uint64_t GetAliCloudMachineCnt() const;

                    /**
                     * 判断参数 AliCloudMachineCnt 是否已赋值
                     * @return AliCloudMachineCnt 是否已赋值
                     * @deprecated
                     */
                    bool AliCloudMachineCntHasBeenSet() const;

                    /**
                     * 获取Number of Baidu Cloud machines
                     * @return BaiduCloudMachineCnt Number of Baidu Cloud machines
                     * @deprecated
                     */
                    uint64_t GetBaiduCloudMachineCnt() const;

                    /**
                     * 判断参数 BaiduCloudMachineCnt 是否已赋值
                     * @return BaiduCloudMachineCnt 是否已赋值
                     * @deprecated
                     */
                    bool BaiduCloudMachineCntHasBeenSet() const;

                    /**
                     * 获取Number of IDC machines
                     * @return IDCMachineCnt Number of IDC machines
                     * @deprecated
                     */
                    uint64_t GetIDCMachineCnt() const;

                    /**
                     * 判断参数 IDCMachineCnt 是否已赋值
                     * @return IDCMachineCnt 是否已赋值
                     * @deprecated
                     */
                    bool IDCMachineCntHasBeenSet() const;

                    /**
                     * 获取Number of machines from other cloud service vendors
                     * @return OtherCloudMachineCnt Number of machines from other cloud service vendors
                     * @deprecated
                     */
                    uint64_t GetOtherCloudMachineCnt() const;

                    /**
                     * 判断参数 OtherCloudMachineCnt 是否已赋值
                     * @return OtherCloudMachineCnt 是否已赋值
                     * @deprecated
                     */
                    bool OtherCloudMachineCntHasBeenSet() const;

                    /**
                     * 获取Number of protected machines
                     * @return ProtectMachineCnt Number of protected machines
                     * 
                     */
                    uint64_t GetProtectMachineCnt() const;

                    /**
                     * 判断参数 ProtectMachineCnt 是否已赋值
                     * @return ProtectMachineCnt 是否已赋值
                     * 
                     */
                    bool ProtectMachineCntHasBeenSet() const;

                    /**
                     * 获取Number of protected Basic Edition machines
                     * @return BaseMachineCnt Number of protected Basic Edition machines
                     * 
                     */
                    uint64_t GetBaseMachineCnt() const;

                    /**
                     * 判断参数 BaseMachineCnt 是否已赋值
                     * @return BaseMachineCnt 是否已赋值
                     * 
                     */
                    bool BaseMachineCntHasBeenSet() const;

                    /**
                     * 获取Number of protected Pro Edition machines
                     * @return SpecialtyMachineCnt Number of protected Pro Edition machines
                     * 
                     */
                    uint64_t GetSpecialtyMachineCnt() const;

                    /**
                     * 判断参数 SpecialtyMachineCnt 是否已赋值
                     * @return SpecialtyMachineCnt 是否已赋值
                     * 
                     */
                    bool SpecialtyMachineCntHasBeenSet() const;

                    /**
                     * 获取Number of protected Ultimate Edition machines
                     * @return FlagshipMachineCnt Number of protected Ultimate Edition machines
                     * 
                     */
                    uint64_t GetFlagshipMachineCnt() const;

                    /**
                     * 判断参数 FlagshipMachineCnt 是否已赋值
                     * @return FlagshipMachineCnt 是否已赋值
                     * 
                     */
                    bool FlagshipMachineCntHasBeenSet() const;

                    /**
                     * 获取Number of risky machines
                     * @return RiskMachineCnt Number of risky machines
                     * 
                     */
                    uint64_t GetRiskMachineCnt() const;

                    /**
                     * 判断参数 RiskMachineCnt 是否已赋值
                     * @return RiskMachineCnt 是否已赋值
                     * 
                     */
                    bool RiskMachineCntHasBeenSet() const;

                    /**
                     * 获取Number of new risky machines compared with that yesterday
                     * @return CompareYesterdayRiskMachineCnt Number of new risky machines compared with that yesterday
                     * 
                     */
                    int64_t GetCompareYesterdayRiskMachineCnt() const;

                    /**
                     * 判断参数 CompareYesterdayRiskMachineCnt 是否已赋值
                     * @return CompareYesterdayRiskMachineCnt 是否已赋值
                     * 
                     */
                    bool CompareYesterdayRiskMachineCntHasBeenSet() const;

                    /**
                     * 获取Number of new unprotected machines compared with that yesterday
                     * @return CompareYesterdayNotProtectMachineCnt Number of new unprotected machines compared with that yesterday
                     * 
                     */
                    int64_t GetCompareYesterdayNotProtectMachineCnt() const;

                    /**
                     * 判断参数 CompareYesterdayNotProtectMachineCnt 是否已赋值
                     * @return CompareYesterdayNotProtectMachineCnt 是否已赋值
                     * 
                     */
                    bool CompareYesterdayNotProtectMachineCntHasBeenSet() const;

                    /**
                     * 获取Number of new machines about to expire compared with that yesterday
                     * @return CompareYesterdayDeadlineMachineCnt Number of new machines about to expire compared with that yesterday
                     * 
                     */
                    int64_t GetCompareYesterdayDeadlineMachineCnt() const;

                    /**
                     * 判断参数 CompareYesterdayDeadlineMachineCnt 是否已赋值
                     * @return CompareYesterdayDeadlineMachineCnt 是否已赋值
                     * 
                     */
                    bool CompareYesterdayDeadlineMachineCntHasBeenSet() const;

                    /**
                     * 获取Number of machines about to expire
                     * @return DeadlineMachineCnt Number of machines about to expire
                     * 
                     */
                    uint64_t GetDeadlineMachineCnt() const;

                    /**
                     * 判断参数 DeadlineMachineCnt 是否已赋值
                     * @return DeadlineMachineCnt 是否已赋值
                     * 
                     */
                    bool DeadlineMachineCntHasBeenSet() const;

                    /**
                     * 获取Number of unprotected machines
                     * @return NotProtectMachineCnt Number of unprotected machines
                     * 
                     */
                    uint64_t GetNotProtectMachineCnt() const;

                    /**
                     * 判断参数 NotProtectMachineCnt 是否已赋值
                     * @return NotProtectMachineCnt 是否已赋值
                     * 
                     */
                    bool NotProtectMachineCntHasBeenSet() const;

                    /**
                     * 获取Number of protected Inclusive Edition machines (Lighthouse machines)
                     * @return LHGeneralDiscountCnt Number of protected Inclusive Edition machines (Lighthouse machines)
                     * 
                     */
                    uint64_t GetLHGeneralDiscountCnt() const;

                    /**
                     * 判断参数 LHGeneralDiscountCnt 是否已赋值
                     * @return LHGeneralDiscountCnt 是否已赋值
                     * 
                     */
                    bool LHGeneralDiscountCntHasBeenSet() const;

                    /**
                     * 获取Number of new hosts compared with that yesterday
                     * @return CompareYesterdayMachineCnt Number of new hosts compared with that yesterday
                     * 
                     */
                    int64_t GetCompareYesterdayMachineCnt() const;

                    /**
                     * 判断参数 CompareYesterdayMachineCnt 是否已赋值
                     * @return CompareYesterdayMachineCnt 是否已赋值
                     * 
                     */
                    bool CompareYesterdayMachineCntHasBeenSet() const;

                    /**
                     * 获取Auto-cleanup Time, maximum 720 hours, minimum 0, 0 by default, 0=OFF
                     * @return MachineDestroyAfterOfflineHours Auto-cleanup Time, maximum 720 hours, minimum 0, 0 by default, 0=OFF
                     * 
                     */
                    uint64_t GetMachineDestroyAfterOfflineHours() const;

                    /**
                     * 判断参数 MachineDestroyAfterOfflineHours 是否已赋值
                     * @return MachineDestroyAfterOfflineHours 是否已赋值
                     * 
                     */
                    bool MachineDestroyAfterOfflineHoursHasBeenSet() const;

                private:

                    /**
                     * Total number of assets
                     */
                    uint64_t m_machineCnt;
                    bool m_machineCntHasBeenSet;

                    /**
                     * Number of Tencent Cloud machines
                     */
                    uint64_t m_tencentCloudMachineCnt;
                    bool m_tencentCloudMachineCntHasBeenSet;

                    /**
                     * Number of Alibaba Cloud machines
                     */
                    uint64_t m_aliCloudMachineCnt;
                    bool m_aliCloudMachineCntHasBeenSet;

                    /**
                     * Number of Baidu Cloud machines
                     */
                    uint64_t m_baiduCloudMachineCnt;
                    bool m_baiduCloudMachineCntHasBeenSet;

                    /**
                     * Number of IDC machines
                     */
                    uint64_t m_iDCMachineCnt;
                    bool m_iDCMachineCntHasBeenSet;

                    /**
                     * Number of machines from other cloud service vendors
                     */
                    uint64_t m_otherCloudMachineCnt;
                    bool m_otherCloudMachineCntHasBeenSet;

                    /**
                     * Number of protected machines
                     */
                    uint64_t m_protectMachineCnt;
                    bool m_protectMachineCntHasBeenSet;

                    /**
                     * Number of protected Basic Edition machines
                     */
                    uint64_t m_baseMachineCnt;
                    bool m_baseMachineCntHasBeenSet;

                    /**
                     * Number of protected Pro Edition machines
                     */
                    uint64_t m_specialtyMachineCnt;
                    bool m_specialtyMachineCntHasBeenSet;

                    /**
                     * Number of protected Ultimate Edition machines
                     */
                    uint64_t m_flagshipMachineCnt;
                    bool m_flagshipMachineCntHasBeenSet;

                    /**
                     * Number of risky machines
                     */
                    uint64_t m_riskMachineCnt;
                    bool m_riskMachineCntHasBeenSet;

                    /**
                     * Number of new risky machines compared with that yesterday
                     */
                    int64_t m_compareYesterdayRiskMachineCnt;
                    bool m_compareYesterdayRiskMachineCntHasBeenSet;

                    /**
                     * Number of new unprotected machines compared with that yesterday
                     */
                    int64_t m_compareYesterdayNotProtectMachineCnt;
                    bool m_compareYesterdayNotProtectMachineCntHasBeenSet;

                    /**
                     * Number of new machines about to expire compared with that yesterday
                     */
                    int64_t m_compareYesterdayDeadlineMachineCnt;
                    bool m_compareYesterdayDeadlineMachineCntHasBeenSet;

                    /**
                     * Number of machines about to expire
                     */
                    uint64_t m_deadlineMachineCnt;
                    bool m_deadlineMachineCntHasBeenSet;

                    /**
                     * Number of unprotected machines
                     */
                    uint64_t m_notProtectMachineCnt;
                    bool m_notProtectMachineCntHasBeenSet;

                    /**
                     * Number of protected Inclusive Edition machines (Lighthouse machines)
                     */
                    uint64_t m_lHGeneralDiscountCnt;
                    bool m_lHGeneralDiscountCntHasBeenSet;

                    /**
                     * Number of new hosts compared with that yesterday
                     */
                    int64_t m_compareYesterdayMachineCnt;
                    bool m_compareYesterdayMachineCntHasBeenSet;

                    /**
                     * Auto-cleanup Time, maximum 720 hours, minimum 0, 0 by default, 0=OFF
                     */
                    uint64_t m_machineDestroyAfterOfflineHours;
                    bool m_machineDestroyAfterOfflineHoursHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CWP_V20180228_MODEL_DESCRIBEMACHINEGENERALRESPONSE_H_
