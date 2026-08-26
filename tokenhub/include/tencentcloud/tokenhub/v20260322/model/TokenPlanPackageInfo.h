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

#ifndef TENCENTCLOUD_TOKENHUB_V20260322_MODEL_TOKENPLANPACKAGEINFO_H_
#define TENCENTCLOUD_TOKENHUB_V20260322_MODEL_TOKENPLANPACKAGEINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tokenhub
    {
        namespace V20260322
        {
            namespace Model
            {
                /**
                * Main limit package info
                */
                class TokenPlanPackageInfo : public AbstractModel
                {
                public:
                    TokenPlanPackageInfo();
                    ~TokenPlanPackageInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Total quota. The unit is determined by the package type: credits for the Enterprise Professional package and tokens for the Enterprise auto package.
                     * @return TotalQuota Total quota. The unit is determined by the package type: credits for the Enterprise Professional package and tokens for the Enterprise auto package.
                     * 
                     */
                    std::string GetTotalQuota() const;

                    /**
                     * 设置Total quota. The unit is determined by the package type: credits for the Enterprise Professional package and tokens for the Enterprise auto package.
                     * @param _totalQuota Total quota. The unit is determined by the package type: credits for the Enterprise Professional package and tokens for the Enterprise auto package.
                     * 
                     */
                    void SetTotalQuota(const std::string& _totalQuota);

                    /**
                     * 判断参数 TotalQuota 是否已赋值
                     * @return TotalQuota 是否已赋值
                     * 
                     */
                    bool TotalQuotaHasBeenSet() const;

                    /**
                     * 获取Total used quota. The unit varies by package type: credits (enterprise edition professional package), tokens (enterprise edition auto package)
                     * @return TotalUsed Total used quota. The unit varies by package type: credits (enterprise edition professional package), tokens (enterprise edition auto package)
                     * 
                     */
                    std::string GetTotalUsed() const;

                    /**
                     * 设置Total used quota. The unit varies by package type: credits (enterprise edition professional package), tokens (enterprise edition auto package)
                     * @param _totalUsed Total used quota. The unit varies by package type: credits (enterprise edition professional package), tokens (enterprise edition auto package)
                     * 
                     */
                    void SetTotalUsed(const std::string& _totalUsed);

                    /**
                     * 判断参数 TotalUsed 是否已赋值
                     * @return TotalUsed 是否已赋值
                     * 
                     */
                    bool TotalUsedHasBeenSet() const;

                    /**
                     * 获取Total number of periods.
                     * @return TotalCycles Total number of periods.
                     * 
                     */
                    int64_t GetTotalCycles() const;

                    /**
                     * 设置Total number of periods.
                     * @param _totalCycles Total number of periods.
                     * 
                     */
                    void SetTotalCycles(const int64_t& _totalCycles);

                    /**
                     * 判断参数 TotalCycles 是否已赋值
                     * @return TotalCycles 是否已赋值
                     * 
                     */
                    bool TotalCyclesHasBeenSet() const;

                    /**
                     * 获取Period unit. Value: month
                     * @return CycleUnit Period unit. Value: month
                     * 
                     */
                    std::string GetCycleUnit() const;

                    /**
                     * 设置Period unit. Value: month
                     * @param _cycleUnit Period unit. Value: month
                     * 
                     */
                    void SetCycleUnit(const std::string& _cycleUnit);

                    /**
                     * 判断参数 CycleUnit 是否已赋值
                     * @return CycleUnit 是否已赋值
                     * 
                     */
                    bool CycleUnitHasBeenSet() const;

                    /**
                     * 获取Package effective time.
                     * @return StartTime Package effective time.
                     * 
                     */
                    std::string GetStartTime() const;

                    /**
                     * 设置Package effective time.
                     * @param _startTime Package effective time.
                     * 
                     */
                    void SetStartTime(const std::string& _startTime);

                    /**
                     * 判断参数 StartTime 是否已赋值
                     * @return StartTime 是否已赋值
                     * 
                     */
                    bool StartTimeHasBeenSet() const;

                    /**
                     * 获取Package expiration time.
                     * @return ExpireTime Package expiration time.
                     * 
                     */
                    std::string GetExpireTime() const;

                    /**
                     * 设置Package expiration time.
                     * @param _expireTime Package expiration time.
                     * 
                     */
                    void SetExpireTime(const std::string& _expireTime);

                    /**
                     * 判断参数 ExpireTime 是否已赋值
                     * @return ExpireTime 是否已赋值
                     * 
                     */
                    bool ExpireTimeHasBeenSet() const;

                    /**
                     * 获取Allocated quota for dedicated pool. The unit varies by package type: credits (enterprise edition professional package), tokens (enterprise edition auto package)
                     * @return ExclusiveAllocated Allocated quota for dedicated pool. The unit varies by package type: credits (enterprise edition professional package), tokens (enterprise edition auto package)
                     * 
                     */
                    std::string GetExclusiveAllocated() const;

                    /**
                     * 设置Allocated quota for dedicated pool. The unit varies by package type: credits (enterprise edition professional package), tokens (enterprise edition auto package)
                     * @param _exclusiveAllocated Allocated quota for dedicated pool. The unit varies by package type: credits (enterprise edition professional package), tokens (enterprise edition auto package)
                     * 
                     */
                    void SetExclusiveAllocated(const std::string& _exclusiveAllocated);

                    /**
                     * 判断参数 ExclusiveAllocated 是否已赋值
                     * @return ExclusiveAllocated 是否已赋值
                     * 
                     */
                    bool ExclusiveAllocatedHasBeenSet() const;

                    /**
                     * 获取Used credit of the dedicated pool. The unit varies based on the package type: credits for the enterprise professional package, and tokens for the enterprise auto package.
                     * @return ExclusiveUsed Used credit of the dedicated pool. The unit varies based on the package type: credits for the enterprise professional package, and tokens for the enterprise auto package.
                     * 
                     */
                    std::string GetExclusiveUsed() const;

                    /**
                     * 设置Used credit of the dedicated pool. The unit varies based on the package type: credits for the enterprise professional package, and tokens for the enterprise auto package.
                     * @param _exclusiveUsed Used credit of the dedicated pool. The unit varies based on the package type: credits for the enterprise professional package, and tokens for the enterprise auto package.
                     * 
                     */
                    void SetExclusiveUsed(const std::string& _exclusiveUsed);

                    /**
                     * 判断参数 ExclusiveUsed 是否已赋值
                     * @return ExclusiveUsed 是否已赋值
                     * 
                     */
                    bool ExclusiveUsedHasBeenSet() const;

                    /**
                     * 获取Total shared pool quota. The measurement unit varies based on the package type: credits (enterprise edition professional package), tokens (enterprise edition auto package).
                     * @return SharedPool Total shared pool quota. The measurement unit varies based on the package type: credits (enterprise edition professional package), tokens (enterprise edition auto package).
                     * 
                     */
                    std::string GetSharedPool() const;

                    /**
                     * 设置Total shared pool quota. The measurement unit varies based on the package type: credits (enterprise edition professional package), tokens (enterprise edition auto package).
                     * @param _sharedPool Total shared pool quota. The measurement unit varies based on the package type: credits (enterprise edition professional package), tokens (enterprise edition auto package).
                     * 
                     */
                    void SetSharedPool(const std::string& _sharedPool);

                    /**
                     * 判断参数 SharedPool 是否已赋值
                     * @return SharedPool 是否已赋值
                     * 
                     */
                    bool SharedPoolHasBeenSet() const;

                    /**
                     * 获取Shared used credit. The unit varies by package type: credits (enterprise edition professional package), tokens (enterprise edition auto package)
                     * @return SharedUsed Shared used credit. The unit varies by package type: credits (enterprise edition professional package), tokens (enterprise edition auto package)
                     * 
                     */
                    std::string GetSharedUsed() const;

                    /**
                     * 设置Shared used credit. The unit varies by package type: credits (enterprise edition professional package), tokens (enterprise edition auto package)
                     * @param _sharedUsed Shared used credit. The unit varies by package type: credits (enterprise edition professional package), tokens (enterprise edition auto package)
                     * 
                     */
                    void SetSharedUsed(const std::string& _sharedUsed);

                    /**
                     * 判断参数 SharedUsed 是否已赋值
                     * @return SharedUsed 是否已赋值
                     * 
                     */
                    bool SharedUsedHasBeenSet() const;

                    /**
                     * 获取Current period limit. The unit varies by package type: credits (Enterprise Edition Professional), tokens (Enterprise Edition auto).
                     * @return CycleQuota Current period limit. The unit varies by package type: credits (Enterprise Edition Professional), tokens (Enterprise Edition auto).
                     * 
                     */
                    std::string GetCycleQuota() const;

                    /**
                     * 设置Current period limit. The unit varies by package type: credits (Enterprise Edition Professional), tokens (Enterprise Edition auto).
                     * @param _cycleQuota Current period limit. The unit varies by package type: credits (Enterprise Edition Professional), tokens (Enterprise Edition auto).
                     * 
                     */
                    void SetCycleQuota(const std::string& _cycleQuota);

                    /**
                     * 判断参数 CycleQuota 是否已赋值
                     * @return CycleQuota 是否已赋值
                     * 
                     */
                    bool CycleQuotaHasBeenSet() const;

                    /**
                     * 获取Current cycle.
                     * @return CurrentCycle Current cycle.
                     * 
                     */
                    int64_t GetCurrentCycle() const;

                    /**
                     * 设置Current cycle.
                     * @param _currentCycle Current cycle.
                     * 
                     */
                    void SetCurrentCycle(const int64_t& _currentCycle);

                    /**
                     * 判断参数 CurrentCycle 是否已赋值
                     * @return CurrentCycle 是否已赋值
                     * 
                     */
                    bool CurrentCycleHasBeenSet() const;

                    /**
                     * 获取Remaining cycle.
                     * @return RemainCycles Remaining cycle.
                     * 
                     */
                    int64_t GetRemainCycles() const;

                    /**
                     * 设置Remaining cycle.
                     * @param _remainCycles Remaining cycle.
                     * 
                     */
                    void SetRemainCycles(const int64_t& _remainCycles);

                    /**
                     * 判断参数 RemainCycles 是否已赋值
                     * @return RemainCycles 是否已赋值
                     * 
                     */
                    bool RemainCyclesHasBeenSet() const;

                private:

                    /**
                     * Total quota. The unit is determined by the package type: credits for the Enterprise Professional package and tokens for the Enterprise auto package.
                     */
                    std::string m_totalQuota;
                    bool m_totalQuotaHasBeenSet;

                    /**
                     * Total used quota. The unit varies by package type: credits (enterprise edition professional package), tokens (enterprise edition auto package)
                     */
                    std::string m_totalUsed;
                    bool m_totalUsedHasBeenSet;

                    /**
                     * Total number of periods.
                     */
                    int64_t m_totalCycles;
                    bool m_totalCyclesHasBeenSet;

                    /**
                     * Period unit. Value: month
                     */
                    std::string m_cycleUnit;
                    bool m_cycleUnitHasBeenSet;

                    /**
                     * Package effective time.
                     */
                    std::string m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * Package expiration time.
                     */
                    std::string m_expireTime;
                    bool m_expireTimeHasBeenSet;

                    /**
                     * Allocated quota for dedicated pool. The unit varies by package type: credits (enterprise edition professional package), tokens (enterprise edition auto package)
                     */
                    std::string m_exclusiveAllocated;
                    bool m_exclusiveAllocatedHasBeenSet;

                    /**
                     * Used credit of the dedicated pool. The unit varies based on the package type: credits for the enterprise professional package, and tokens for the enterprise auto package.
                     */
                    std::string m_exclusiveUsed;
                    bool m_exclusiveUsedHasBeenSet;

                    /**
                     * Total shared pool quota. The measurement unit varies based on the package type: credits (enterprise edition professional package), tokens (enterprise edition auto package).
                     */
                    std::string m_sharedPool;
                    bool m_sharedPoolHasBeenSet;

                    /**
                     * Shared used credit. The unit varies by package type: credits (enterprise edition professional package), tokens (enterprise edition auto package)
                     */
                    std::string m_sharedUsed;
                    bool m_sharedUsedHasBeenSet;

                    /**
                     * Current period limit. The unit varies by package type: credits (Enterprise Edition Professional), tokens (Enterprise Edition auto).
                     */
                    std::string m_cycleQuota;
                    bool m_cycleQuotaHasBeenSet;

                    /**
                     * Current cycle.
                     */
                    int64_t m_currentCycle;
                    bool m_currentCycleHasBeenSet;

                    /**
                     * Remaining cycle.
                     */
                    int64_t m_remainCycles;
                    bool m_remainCyclesHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TOKENHUB_V20260322_MODEL_TOKENPLANPACKAGEINFO_H_
