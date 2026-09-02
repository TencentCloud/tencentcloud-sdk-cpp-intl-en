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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_DESCRIBECLUSTERSUMMARYRESPONSE_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_DESCRIBECLUSTERSUMMARYRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Csip
    {
        namespace V20221121
        {
            namespace Model
            {
                /**
                * DescribeClusterSummary response structure.
                */
                class DescribeClusterSummaryResponse : public AbstractModel
                {
                public:
                    DescribeClusterSummaryResponse();
                    ~DescribeClusterSummaryResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>Total number of clusters</p>
                     * @return TotalClusterCount <p>Total number of clusters</p>
                     * 
                     */
                    uint64_t GetTotalClusterCount() const;

                    /**
                     * 判断参数 TotalClusterCount 是否已赋值
                     * @return TotalClusterCount 是否已赋值
                     * 
                     */
                    bool TotalClusterCountHasBeenSet() const;

                    /**
                     * 获取<p>Total number of clusters with alarms</p>
                     * @return AlarmClusterCount <p>Total number of clusters with alarms</p>
                     * @deprecated
                     */
                    uint64_t GetAlarmClusterCount() const;

                    /**
                     * 判断参数 AlarmClusterCount 是否已赋值
                     * @return AlarmClusterCount 是否已赋值
                     * @deprecated
                     */
                    bool AlarmClusterCountHasBeenSet() const;

                    /**
                     * 获取<p>Total number of clusters at risk</p>
                     * @return RiskClusterCount <p>Total number of clusters at risk</p>
                     * @deprecated
                     */
                    uint64_t GetRiskClusterCount() const;

                    /**
                     * 判断参数 RiskClusterCount 是否已赋值
                     * @return RiskClusterCount 是否已赋值
                     * @deprecated
                     */
                    bool RiskClusterCountHasBeenSet() const;

                    /**
                     * 获取<p>Total nodes</p>
                     * @return TotalNodeCount <p>Total nodes</p>
                     * 
                     */
                    uint64_t GetTotalNodeCount() const;

                    /**
                     * 判断参数 TotalNodeCount 是否已赋值
                     * @return TotalNodeCount 是否已赋值
                     * 
                     */
                    bool TotalNodeCountHasBeenSet() const;

                    /**
                     * 获取<p>Total cores.</p>
                     * @return TotalCoreCount <p>Total cores.</p>
                     * 
                     */
                    uint64_t GetTotalCoreCount() const;

                    /**
                     * 判断参数 TotalCoreCount 是否已赋值
                     * @return TotalCoreCount 是否已赋值
                     * 
                     */
                    bool TotalCoreCountHasBeenSet() const;

                    /**
                     * 获取<p>Total number of alarm events</p>
                     * @return AlarmEventCount <p>Total number of alarm events</p>
                     * @deprecated
                     */
                    uint64_t GetAlarmEventCount() const;

                    /**
                     * 判断参数 AlarmEventCount 是否已赋值
                     * @return AlarmEventCount 是否已赋值
                     * @deprecated
                     */
                    bool AlarmEventCountHasBeenSet() const;

                    /**
                     * 获取<p>Number of critical alarm events</p>
                     * @return CriticalAlarmEventCount <p>Number of critical alarm events</p>
                     * @deprecated
                     */
                    uint64_t GetCriticalAlarmEventCount() const;

                    /**
                     * 判断参数 CriticalAlarmEventCount 是否已赋值
                     * @return CriticalAlarmEventCount 是否已赋值
                     * @deprecated
                     */
                    bool CriticalAlarmEventCountHasBeenSet() const;

                    /**
                     * 获取<p>Number of high-risk alarm events</p>
                     * @return HighAlarmEventCount <p>Number of high-risk alarm events</p>
                     * @deprecated
                     */
                    uint64_t GetHighAlarmEventCount() const;

                    /**
                     * 判断参数 HighAlarmEventCount 是否已赋值
                     * @return HighAlarmEventCount 是否已赋值
                     * @deprecated
                     */
                    bool HighAlarmEventCountHasBeenSet() const;

                    /**
                     * 获取<p>Number of medium-risk alarm events</p>
                     * @return MiddleAlarmEventCount <p>Number of medium-risk alarm events</p>
                     * @deprecated
                     */
                    uint64_t GetMiddleAlarmEventCount() const;

                    /**
                     * 判断参数 MiddleAlarmEventCount 是否已赋值
                     * @return MiddleAlarmEventCount 是否已赋值
                     * @deprecated
                     */
                    bool MiddleAlarmEventCountHasBeenSet() const;

                    /**
                     * 获取<p>Number of low-risk alarm events</p>
                     * @return LowAlarmEventCount <p>Number of low-risk alarm events</p>
                     * @deprecated
                     */
                    uint64_t GetLowAlarmEventCount() const;

                    /**
                     * 判断参数 LowAlarmEventCount 是否已赋值
                     * @return LowAlarmEventCount 是否已赋值
                     * @deprecated
                     */
                    bool LowAlarmEventCountHasBeenSet() const;

                    /**
                     * 获取<p>Total number of risk events</p>
                     * @return RiskEventCount <p>Total number of risk events</p>
                     * @deprecated
                     */
                    uint64_t GetRiskEventCount() const;

                    /**
                     * 判断参数 RiskEventCount 是否已赋值
                     * @return RiskEventCount 是否已赋值
                     * @deprecated
                     */
                    bool RiskEventCountHasBeenSet() const;

                    /**
                     * 获取<p>Number of critical risk events</p>
                     * @return CriticalRiskEventCount <p>Number of critical risk events</p>
                     * @deprecated
                     */
                    uint64_t GetCriticalRiskEventCount() const;

                    /**
                     * 判断参数 CriticalRiskEventCount 是否已赋值
                     * @return CriticalRiskEventCount 是否已赋值
                     * @deprecated
                     */
                    bool CriticalRiskEventCountHasBeenSet() const;

                    /**
                     * 获取<p>Number of high-severity risk events</p>
                     * @return HighRiskEventCount <p>Number of high-severity risk events</p>
                     * @deprecated
                     */
                    uint64_t GetHighRiskEventCount() const;

                    /**
                     * 判断参数 HighRiskEventCount 是否已赋值
                     * @return HighRiskEventCount 是否已赋值
                     * @deprecated
                     */
                    bool HighRiskEventCountHasBeenSet() const;

                    /**
                     * 获取<p>Number of medium-risk risk events</p>
                     * @return MiddleRiskEventCount <p>Number of medium-risk risk events</p>
                     * @deprecated
                     */
                    uint64_t GetMiddleRiskEventCount() const;

                    /**
                     * 判断参数 MiddleRiskEventCount 是否已赋值
                     * @return MiddleRiskEventCount 是否已赋值
                     * @deprecated
                     */
                    bool MiddleRiskEventCountHasBeenSet() const;

                    /**
                     * 获取<p>Number of low-risk events</p>
                     * @return LowRiskEventCount <p>Number of low-risk events</p>
                     * @deprecated
                     */
                    uint64_t GetLowRiskEventCount() const;

                    /**
                     * 判断参数 LowRiskEventCount 是否已赋值
                     * @return LowRiskEventCount 是否已赋值
                     * @deprecated
                     */
                    bool LowRiskEventCountHasBeenSet() const;

                    /**
                     * 获取<p>Used core amount limit</p>
                     * @return UsedCoreQuota <p>Used core amount limit</p>
                     * 
                     */
                    uint64_t GetUsedCoreQuota() const;

                    /**
                     * 判断参数 UsedCoreQuota 是否已赋值
                     * @return UsedCoreQuota 是否已赋值
                     * 
                     */
                    bool UsedCoreQuotaHasBeenSet() const;

                    /**
                     * 获取<p>Number of purchased cores limit</p>
                     * @return PurchasedCoreQuota <p>Number of purchased cores limit</p>
                     * 
                     */
                    uint64_t GetPurchasedCoreQuota() const;

                    /**
                     * 判断参数 PurchasedCoreQuota 是否已赋值
                     * @return PurchasedCoreQuota 是否已赋值
                     * 
                     */
                    bool PurchasedCoreQuotaHasBeenSet() const;

                    /**
                     * 获取<p>Elastic Billing Cores</p>
                     * @return ElasticCoreQuota <p>Elastic Billing Cores</p>
                     * 
                     */
                    uint64_t GetElasticCoreQuota() const;

                    /**
                     * 判断参数 ElasticCoreQuota 是否已赋值
                     * @return ElasticCoreQuota 是否已赋值
                     * 
                     */
                    bool ElasticCoreQuotaHasBeenSet() const;

                    /**
                     * 获取<p>Unprotected cores in the cluster</p>
                     * @return UnprotectedCoreCount <p>Unprotected cores in the cluster</p>
                     * 
                     */
                    uint64_t GetUnprotectedCoreCount() const;

                    /**
                     * 判断参数 UnprotectedCoreCount 是否已赋值
                     * @return UnprotectedCoreCount 是否已赋值
                     * 
                     */
                    bool UnprotectedCoreCountHasBeenSet() const;

                    /**
                     * 获取<p>Number of protected cores in the cluster</p>
                     * @return ProtectedCoreCount <p>Number of protected cores in the cluster</p>
                     * 
                     */
                    uint64_t GetProtectedCoreCount() const;

                    /**
                     * 判断参数 ProtectedCoreCount 是否已赋值
                     * @return ProtectedCoreCount 是否已赋值
                     * 
                     */
                    bool ProtectedCoreCountHasBeenSet() const;

                    /**
                     * 获取<p>Number of unprotected clusters</p>
                     * @return UnprotectedClusterCount <p>Number of unprotected clusters</p>
                     * 
                     */
                    uint64_t GetUnprotectedClusterCount() const;

                    /**
                     * 判断参数 UnprotectedClusterCount 是否已赋值
                     * @return UnprotectedClusterCount 是否已赋值
                     * 
                     */
                    bool UnprotectedClusterCountHasBeenSet() const;

                    /**
                     * 获取<p>Number of protected clusters</p>
                     * @return ProtectedClusterCount <p>Number of protected clusters</p>
                     * 
                     */
                    uint64_t GetProtectedClusterCount() const;

                    /**
                     * 判断参数 ProtectedClusterCount 是否已赋值
                     * @return ProtectedClusterCount 是否已赋值
                     * 
                     */
                    bool ProtectedClusterCountHasBeenSet() const;

                    /**
                     * 获取<p>Number of Tencent Cloud TKE clusters</p>
                     * @return TkeClusterCount <p>Number of Tencent Cloud TKE clusters</p>
                     * 
                     */
                    uint64_t GetTkeClusterCount() const;

                    /**
                     * 判断参数 TkeClusterCount 是否已赋值
                     * @return TkeClusterCount 是否已赋值
                     * 
                     */
                    bool TkeClusterCountHasBeenSet() const;

                    /**
                     * 获取<p>Number of self-built clusters</p>
                     * @return SelfBuiltClusterCount <p>Number of self-built clusters</p>
                     * 
                     */
                    uint64_t GetSelfBuiltClusterCount() const;

                    /**
                     * 判断参数 SelfBuiltClusterCount 是否已赋值
                     * @return SelfBuiltClusterCount 是否已赋值
                     * 
                     */
                    bool SelfBuiltClusterCountHasBeenSet() const;

                    /**
                     * 获取<p>Number of clusters with critical alerts</p>
                     * @return CriticalAlarmClusterCount <p>Number of clusters with critical alerts</p>
                     * @deprecated
                     */
                    uint64_t GetCriticalAlarmClusterCount() const;

                    /**
                     * 判断参数 CriticalAlarmClusterCount 是否已赋值
                     * @return CriticalAlarmClusterCount 是否已赋值
                     * @deprecated
                     */
                    bool CriticalAlarmClusterCountHasBeenSet() const;

                    /**
                     * 获取<p>Number of high-risk alert clusters</p>
                     * @return HighAlarmClusterCount <p>Number of high-risk alert clusters</p>
                     * @deprecated
                     */
                    uint64_t GetHighAlarmClusterCount() const;

                    /**
                     * 判断参数 HighAlarmClusterCount 是否已赋值
                     * @return HighAlarmClusterCount 是否已赋值
                     * @deprecated
                     */
                    bool HighAlarmClusterCountHasBeenSet() const;

                    /**
                     * 获取<p>Number of clusters at critical risk</p>
                     * @return CriticalRiskClusterCount <p>Number of clusters at critical risk</p>
                     * @deprecated
                     */
                    uint64_t GetCriticalRiskClusterCount() const;

                    /**
                     * 判断参数 CriticalRiskClusterCount 是否已赋值
                     * @return CriticalRiskClusterCount 是否已赋值
                     * @deprecated
                     */
                    bool CriticalRiskClusterCountHasBeenSet() const;

                    /**
                     * 获取<p>Number of high-risk clusters</p>
                     * @return HighRiskClusterCount <p>Number of high-risk clusters</p>
                     * @deprecated
                     */
                    uint64_t GetHighRiskClusterCount() const;

                    /**
                     * 判断参数 HighRiskClusterCount 是否已赋值
                     * @return HighRiskClusterCount 是否已赋值
                     * @deprecated
                     */
                    bool HighRiskClusterCountHasBeenSet() const;

                    /**
                     * 获取<p>Number of nodes not bound to the Ultimate Edition</p>
                     * @return UnboundUltimateNodeCount <p>Number of nodes not bound to the Ultimate Edition</p>
                     * 
                     */
                    uint64_t GetUnboundUltimateNodeCount() const;

                    /**
                     * 判断参数 UnboundUltimateNodeCount 是否已赋值
                     * @return UnboundUltimateNodeCount 是否已赋值
                     * 
                     */
                    bool UnboundUltimateNodeCountHasBeenSet() const;

                private:

                    /**
                     * <p>Total number of clusters</p>
                     */
                    uint64_t m_totalClusterCount;
                    bool m_totalClusterCountHasBeenSet;

                    /**
                     * <p>Total number of clusters with alarms</p>
                     */
                    uint64_t m_alarmClusterCount;
                    bool m_alarmClusterCountHasBeenSet;

                    /**
                     * <p>Total number of clusters at risk</p>
                     */
                    uint64_t m_riskClusterCount;
                    bool m_riskClusterCountHasBeenSet;

                    /**
                     * <p>Total nodes</p>
                     */
                    uint64_t m_totalNodeCount;
                    bool m_totalNodeCountHasBeenSet;

                    /**
                     * <p>Total cores.</p>
                     */
                    uint64_t m_totalCoreCount;
                    bool m_totalCoreCountHasBeenSet;

                    /**
                     * <p>Total number of alarm events</p>
                     */
                    uint64_t m_alarmEventCount;
                    bool m_alarmEventCountHasBeenSet;

                    /**
                     * <p>Number of critical alarm events</p>
                     */
                    uint64_t m_criticalAlarmEventCount;
                    bool m_criticalAlarmEventCountHasBeenSet;

                    /**
                     * <p>Number of high-risk alarm events</p>
                     */
                    uint64_t m_highAlarmEventCount;
                    bool m_highAlarmEventCountHasBeenSet;

                    /**
                     * <p>Number of medium-risk alarm events</p>
                     */
                    uint64_t m_middleAlarmEventCount;
                    bool m_middleAlarmEventCountHasBeenSet;

                    /**
                     * <p>Number of low-risk alarm events</p>
                     */
                    uint64_t m_lowAlarmEventCount;
                    bool m_lowAlarmEventCountHasBeenSet;

                    /**
                     * <p>Total number of risk events</p>
                     */
                    uint64_t m_riskEventCount;
                    bool m_riskEventCountHasBeenSet;

                    /**
                     * <p>Number of critical risk events</p>
                     */
                    uint64_t m_criticalRiskEventCount;
                    bool m_criticalRiskEventCountHasBeenSet;

                    /**
                     * <p>Number of high-severity risk events</p>
                     */
                    uint64_t m_highRiskEventCount;
                    bool m_highRiskEventCountHasBeenSet;

                    /**
                     * <p>Number of medium-risk risk events</p>
                     */
                    uint64_t m_middleRiskEventCount;
                    bool m_middleRiskEventCountHasBeenSet;

                    /**
                     * <p>Number of low-risk events</p>
                     */
                    uint64_t m_lowRiskEventCount;
                    bool m_lowRiskEventCountHasBeenSet;

                    /**
                     * <p>Used core amount limit</p>
                     */
                    uint64_t m_usedCoreQuota;
                    bool m_usedCoreQuotaHasBeenSet;

                    /**
                     * <p>Number of purchased cores limit</p>
                     */
                    uint64_t m_purchasedCoreQuota;
                    bool m_purchasedCoreQuotaHasBeenSet;

                    /**
                     * <p>Elastic Billing Cores</p>
                     */
                    uint64_t m_elasticCoreQuota;
                    bool m_elasticCoreQuotaHasBeenSet;

                    /**
                     * <p>Unprotected cores in the cluster</p>
                     */
                    uint64_t m_unprotectedCoreCount;
                    bool m_unprotectedCoreCountHasBeenSet;

                    /**
                     * <p>Number of protected cores in the cluster</p>
                     */
                    uint64_t m_protectedCoreCount;
                    bool m_protectedCoreCountHasBeenSet;

                    /**
                     * <p>Number of unprotected clusters</p>
                     */
                    uint64_t m_unprotectedClusterCount;
                    bool m_unprotectedClusterCountHasBeenSet;

                    /**
                     * <p>Number of protected clusters</p>
                     */
                    uint64_t m_protectedClusterCount;
                    bool m_protectedClusterCountHasBeenSet;

                    /**
                     * <p>Number of Tencent Cloud TKE clusters</p>
                     */
                    uint64_t m_tkeClusterCount;
                    bool m_tkeClusterCountHasBeenSet;

                    /**
                     * <p>Number of self-built clusters</p>
                     */
                    uint64_t m_selfBuiltClusterCount;
                    bool m_selfBuiltClusterCountHasBeenSet;

                    /**
                     * <p>Number of clusters with critical alerts</p>
                     */
                    uint64_t m_criticalAlarmClusterCount;
                    bool m_criticalAlarmClusterCountHasBeenSet;

                    /**
                     * <p>Number of high-risk alert clusters</p>
                     */
                    uint64_t m_highAlarmClusterCount;
                    bool m_highAlarmClusterCountHasBeenSet;

                    /**
                     * <p>Number of clusters at critical risk</p>
                     */
                    uint64_t m_criticalRiskClusterCount;
                    bool m_criticalRiskClusterCountHasBeenSet;

                    /**
                     * <p>Number of high-risk clusters</p>
                     */
                    uint64_t m_highRiskClusterCount;
                    bool m_highRiskClusterCountHasBeenSet;

                    /**
                     * <p>Number of nodes not bound to the Ultimate Edition</p>
                     */
                    uint64_t m_unboundUltimateNodeCount;
                    bool m_unboundUltimateNodeCountHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_DESCRIBECLUSTERSUMMARYRESPONSE_H_
