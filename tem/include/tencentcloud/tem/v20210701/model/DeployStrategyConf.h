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

#ifndef TENCENTCLOUD_TEM_V20210701_MODEL_DEPLOYSTRATEGYCONF_H_
#define TENCENTCLOUD_TEM_V20210701_MODEL_DEPLOYSTRATEGYCONF_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tem
    {
        namespace V20210701
        {
            namespace Model
            {
                /**
                * Configuration of batch release policies
                */
                class DeployStrategyConf : public AbstractModel
                {
                public:
                    DeployStrategyConf();
                    ~DeployStrategyConf() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Total batches
                     * @return TotalBatchCount Total batches
                     */
                    int64_t GetTotalBatchCount() const;

                    /**
                     * 设置Total batches
                     * @param TotalBatchCount Total batches
                     */
                    void SetTotalBatchCount(const int64_t& _totalBatchCount);

                    /**
                     * 判断参数 TotalBatchCount 是否已赋值
                     * @return TotalBatchCount 是否已赋值
                     */
                    bool TotalBatchCountHasBeenSet() const;

                    /**
                     * 获取Number of pods for the beta batch
                     * @return BetaBatchNum Number of pods for the beta batch
                     */
                    int64_t GetBetaBatchNum() const;

                    /**
                     * 设置Number of pods for the beta batch
                     * @param BetaBatchNum Number of pods for the beta batch
                     */
                    void SetBetaBatchNum(const int64_t& _betaBatchNum);

                    /**
                     * 判断参数 BetaBatchNum 是否已赋值
                     * @return BetaBatchNum 是否已赋值
                     */
                    bool BetaBatchNumHasBeenSet() const;

                    /**
                     * 获取Batch deployment policy. `0`: automatically; `1`: manually; `2`: beta batch (manual)
                     * @return DeployStrategyType Batch deployment policy. `0`: automatically; `1`: manually; `2`: beta batch (manual)
                     */
                    int64_t GetDeployStrategyType() const;

                    /**
                     * 设置Batch deployment policy. `0`: automatically; `1`: manually; `2`: beta batch (manual)
                     * @param DeployStrategyType Batch deployment policy. `0`: automatically; `1`: manually; `2`: beta batch (manual)
                     */
                    void SetDeployStrategyType(const int64_t& _deployStrategyType);

                    /**
                     * 判断参数 DeployStrategyType 是否已赋值
                     * @return DeployStrategyType 是否已赋值
                     */
                    bool DeployStrategyTypeHasBeenSet() const;

                    /**
                     * 获取Interval between batches
                     * @return BatchInterval Interval between batches
                     */
                    int64_t GetBatchInterval() const;

                    /**
                     * 设置Interval between batches
                     * @param BatchInterval Interval between batches
                     */
                    void SetBatchInterval(const int64_t& _batchInterval);

                    /**
                     * 判断参数 BatchInterval 是否已赋值
                     * @return BatchInterval 是否已赋值
                     */
                    bool BatchIntervalHasBeenSet() const;

                    /**
                     * 获取The minimum number of available pods
                     * @return MinAvailable The minimum number of available pods
                     */
                    int64_t GetMinAvailable() const;

                    /**
                     * 设置The minimum number of available pods
                     * @param MinAvailable The minimum number of available pods
                     */
                    void SetMinAvailable(const int64_t& _minAvailable);

                    /**
                     * 判断参数 MinAvailable 是否已赋值
                     * @return MinAvailable 是否已赋值
                     */
                    bool MinAvailableHasBeenSet() const;

                private:

                    /**
                     * Total batches
                     */
                    int64_t m_totalBatchCount;
                    bool m_totalBatchCountHasBeenSet;

                    /**
                     * Number of pods for the beta batch
                     */
                    int64_t m_betaBatchNum;
                    bool m_betaBatchNumHasBeenSet;

                    /**
                     * Batch deployment policy. `0`: automatically; `1`: manually; `2`: beta batch (manual)
                     */
                    int64_t m_deployStrategyType;
                    bool m_deployStrategyTypeHasBeenSet;

                    /**
                     * Interval between batches
                     */
                    int64_t m_batchInterval;
                    bool m_batchIntervalHasBeenSet;

                    /**
                     * The minimum number of available pods
                     */
                    int64_t m_minAvailable;
                    bool m_minAvailableHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEM_V20210701_MODEL_DEPLOYSTRATEGYCONF_H_
