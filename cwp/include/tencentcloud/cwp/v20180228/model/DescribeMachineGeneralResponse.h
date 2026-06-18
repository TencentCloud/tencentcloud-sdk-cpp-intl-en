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

#ifndef TENCENTCLOUD_CWP_V20180228_MODEL_DESCRIBEMACHINEGENERALRESPONSE_H_
#define TENCENTCLOUD_CWP_V20180228_MODEL_DESCRIBEMACHINEGENERALRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cwp/v20180228/model/CloudFromCnt.h>


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
                     * 获取<p>Total number of assets</p>
                     * @return MachineCnt <p>Total number of assets</p>
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
                     * 获取<p>Number of Tencent Cloud machines</p>
                     * @return TencentCloudMachineCnt <p>Number of Tencent Cloud machines</p>
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
                     * 获取<p>Number of Alibaba Cloud machines</p>
                     * @return AliCloudMachineCnt <p>Number of Alibaba Cloud machines</p>
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
                     * 获取<p>Number of Baidu Cloud machines</p>
                     * @return BaiduCloudMachineCnt <p>Number of Baidu Cloud machines</p>
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
                     * 获取<p>Number of IDC machines</p>
                     * @return IDCMachineCnt <p>Number of IDC machines</p>
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
                     * 获取<p>Number of machines from other cloud service vendors</p>
                     * @return OtherCloudMachineCnt <p>Number of machines from other cloud service vendors</p>
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
                     * 获取<p>Number of protected machines</p>
                     * @return ProtectMachineCnt <p>Number of protected machines</p>
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
                     * 获取<p>Number of protected Basic Edition machines</p>
                     * @return BaseMachineCnt <p>Number of protected Basic Edition machines</p>
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
                     * 获取<p>Number of protected Pro Edition machines</p>
                     * @return SpecialtyMachineCnt <p>Number of protected Pro Edition machines</p>
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
                     * 获取<p>Number of protected Ultimate Edition machines</p>
                     * @return FlagshipMachineCnt <p>Number of protected Ultimate Edition machines</p>
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
                     * 获取<p>Number of risky machines</p>
                     * @return RiskMachineCnt <p>Number of risky machines</p>
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
                     * 获取<p>Change in the number of risky machines compared with yesterday</p>
                     * @return CompareYesterdayRiskMachineCnt <p>Change in the number of risky machines compared with yesterday</p>
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
                     * 获取<p>Change in the number of unprotected machines compared with yesterday</p>
                     * @return CompareYesterdayNotProtectMachineCnt <p>Change in the number of unprotected machines compared with yesterday</p>
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
                     * 获取<p>Change in the number of machines expiring soon compared with yesterday</p>
                     * @return CompareYesterdayDeadlineMachineCnt <p>Change in the number of machines expiring soon compared with yesterday</p>
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
                     * 获取<p>Number of machines about to expire</p>
                     * @return DeadlineMachineCnt <p>Number of machines about to expire</p>
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
                     * 获取<p>Number of unprotected machines</p>
                     * @return NotProtectMachineCnt <p>Number of unprotected machines</p>
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
                     * 获取<p>Number of protected Lighthouse machines</p>
                     * @return LHGeneralDiscountCnt <p>Number of protected Lighthouse machines</p>
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
                     * 获取<p>Change in the number of newly added hosts compared with yesterday</p>
                     * @return CompareYesterdayMachineCnt <p>Change in the number of newly added hosts compared with yesterday</p>
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
                     * 获取<p>Automatic cleanup time, maximum 720 hours, minimum 0, default 0, 0=disabled</p>
                     * @return MachineDestroyAfterOfflineHours <p>Automatic cleanup time, maximum 720 hours, minimum 0, default 0, 0=disabled</p>
                     * 
                     */
                    uint64_t GetMachineDestroyAfterOfflineHours() const;

                    /**
                     * 判断参数 MachineDestroyAfterOfflineHours 是否已赋值
                     * @return MachineDestroyAfterOfflineHours 是否已赋值
                     * 
                     */
                    bool MachineDestroyAfterOfflineHoursHasBeenSet() const;

                    /**
                     * 获取<p>Cloud server type array</p>
                     * @return CloudFrom <p>Cloud server type array</p>
                     * 
                     */
                    std::vector<CloudFromCnt> GetCloudFrom() const;

                    /**
                     * 判断参数 CloudFrom 是否已赋值
                     * @return CloudFrom 是否已赋值
                     * 
                     */
                    bool CloudFromHasBeenSet() const;

                private:

                    /**
                     * <p>Total number of assets</p>
                     */
                    uint64_t m_machineCnt;
                    bool m_machineCntHasBeenSet;

                    /**
                     * <p>Number of Tencent Cloud machines</p>
                     */
                    uint64_t m_tencentCloudMachineCnt;
                    bool m_tencentCloudMachineCntHasBeenSet;

                    /**
                     * <p>Number of Alibaba Cloud machines</p>
                     */
                    uint64_t m_aliCloudMachineCnt;
                    bool m_aliCloudMachineCntHasBeenSet;

                    /**
                     * <p>Number of Baidu Cloud machines</p>
                     */
                    uint64_t m_baiduCloudMachineCnt;
                    bool m_baiduCloudMachineCntHasBeenSet;

                    /**
                     * <p>Number of IDC machines</p>
                     */
                    uint64_t m_iDCMachineCnt;
                    bool m_iDCMachineCntHasBeenSet;

                    /**
                     * <p>Number of machines from other cloud service vendors</p>
                     */
                    uint64_t m_otherCloudMachineCnt;
                    bool m_otherCloudMachineCntHasBeenSet;

                    /**
                     * <p>Number of protected machines</p>
                     */
                    uint64_t m_protectMachineCnt;
                    bool m_protectMachineCntHasBeenSet;

                    /**
                     * <p>Number of protected Basic Edition machines</p>
                     */
                    uint64_t m_baseMachineCnt;
                    bool m_baseMachineCntHasBeenSet;

                    /**
                     * <p>Number of protected Pro Edition machines</p>
                     */
                    uint64_t m_specialtyMachineCnt;
                    bool m_specialtyMachineCntHasBeenSet;

                    /**
                     * <p>Number of protected Ultimate Edition machines</p>
                     */
                    uint64_t m_flagshipMachineCnt;
                    bool m_flagshipMachineCntHasBeenSet;

                    /**
                     * <p>Number of risky machines</p>
                     */
                    uint64_t m_riskMachineCnt;
                    bool m_riskMachineCntHasBeenSet;

                    /**
                     * <p>Change in the number of risky machines compared with yesterday</p>
                     */
                    int64_t m_compareYesterdayRiskMachineCnt;
                    bool m_compareYesterdayRiskMachineCntHasBeenSet;

                    /**
                     * <p>Change in the number of unprotected machines compared with yesterday</p>
                     */
                    int64_t m_compareYesterdayNotProtectMachineCnt;
                    bool m_compareYesterdayNotProtectMachineCntHasBeenSet;

                    /**
                     * <p>Change in the number of machines expiring soon compared with yesterday</p>
                     */
                    int64_t m_compareYesterdayDeadlineMachineCnt;
                    bool m_compareYesterdayDeadlineMachineCntHasBeenSet;

                    /**
                     * <p>Number of machines about to expire</p>
                     */
                    uint64_t m_deadlineMachineCnt;
                    bool m_deadlineMachineCntHasBeenSet;

                    /**
                     * <p>Number of unprotected machines</p>
                     */
                    uint64_t m_notProtectMachineCnt;
                    bool m_notProtectMachineCntHasBeenSet;

                    /**
                     * <p>Number of protected Lighthouse machines</p>
                     */
                    uint64_t m_lHGeneralDiscountCnt;
                    bool m_lHGeneralDiscountCntHasBeenSet;

                    /**
                     * <p>Change in the number of newly added hosts compared with yesterday</p>
                     */
                    int64_t m_compareYesterdayMachineCnt;
                    bool m_compareYesterdayMachineCntHasBeenSet;

                    /**
                     * <p>Automatic cleanup time, maximum 720 hours, minimum 0, default 0, 0=disabled</p>
                     */
                    uint64_t m_machineDestroyAfterOfflineHours;
                    bool m_machineDestroyAfterOfflineHoursHasBeenSet;

                    /**
                     * <p>Cloud server type array</p>
                     */
                    std::vector<CloudFromCnt> m_cloudFrom;
                    bool m_cloudFromHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CWP_V20180228_MODEL_DESCRIBEMACHINEGENERALRESPONSE_H_
