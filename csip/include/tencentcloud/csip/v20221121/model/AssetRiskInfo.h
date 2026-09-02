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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_ASSETRISKINFO_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_ASSETRISKINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
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
                * Asset correlation risk information
                */
                class AssetRiskInfo : public AbstractModel
                {
                public:
                    AssetRiskInfo();
                    ~AssetRiskInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>Risk type</p>
                     * @return ResultType <p>Risk type</p>
                     * 
                     */
                    std::string GetResultType() const;

                    /**
                     * 设置<p>Risk type</p>
                     * @param _resultType <p>Risk type</p>
                     * 
                     */
                    void SetResultType(const std::string& _resultType);

                    /**
                     * 判断参数 ResultType 是否已赋值
                     * @return ResultType 是否已赋值
                     * 
                     */
                    bool ResultTypeHasBeenSet() const;

                    /**
                     * 获取<p>Total number of risks</p>
                     * @return RiskCount <p>Total number of risks</p>
                     * 
                     */
                    uint64_t GetRiskCount() const;

                    /**
                     * 设置<p>Total number of risks</p>
                     * @param _riskCount <p>Total number of risks</p>
                     * 
                     */
                    void SetRiskCount(const uint64_t& _riskCount);

                    /**
                     * 判断参数 RiskCount 是否已赋值
                     * @return RiskCount 是否已赋值
                     * 
                     */
                    bool RiskCountHasBeenSet() const;

                    /**
                     * 获取<p>Number of severe risks</p>
                     * @return RiskCritical <p>Number of severe risks</p>
                     * 
                     */
                    uint64_t GetRiskCritical() const;

                    /**
                     * 设置<p>Number of severe risks</p>
                     * @param _riskCritical <p>Number of severe risks</p>
                     * 
                     */
                    void SetRiskCritical(const uint64_t& _riskCritical);

                    /**
                     * 判断参数 RiskCritical 是否已赋值
                     * @return RiskCritical 是否已赋值
                     * 
                     */
                    bool RiskCriticalHasBeenSet() const;

                    /**
                     * 获取<p>High risk count</p>
                     * @return RiskHigh <p>High risk count</p>
                     * 
                     */
                    uint64_t GetRiskHigh() const;

                    /**
                     * 设置<p>High risk count</p>
                     * @param _riskHigh <p>High risk count</p>
                     * 
                     */
                    void SetRiskHigh(const uint64_t& _riskHigh);

                    /**
                     * 判断参数 RiskHigh 是否已赋值
                     * @return RiskHigh 是否已赋值
                     * 
                     */
                    bool RiskHighHasBeenSet() const;

                    /**
                     * 获取<p>Number of medium risks</p>
                     * @return RiskMedium <p>Number of medium risks</p>
                     * 
                     */
                    uint64_t GetRiskMedium() const;

                    /**
                     * 设置<p>Number of medium risks</p>
                     * @param _riskMedium <p>Number of medium risks</p>
                     * 
                     */
                    void SetRiskMedium(const uint64_t& _riskMedium);

                    /**
                     * 判断参数 RiskMedium 是否已赋值
                     * @return RiskMedium 是否已赋值
                     * 
                     */
                    bool RiskMediumHasBeenSet() const;

                    /**
                     * 获取<p>Number of low-risk assets</p>
                     * @return RiskLow <p>Number of low-risk assets</p>
                     * 
                     */
                    uint64_t GetRiskLow() const;

                    /**
                     * 设置<p>Number of low-risk assets</p>
                     * @param _riskLow <p>Number of low-risk assets</p>
                     * 
                     */
                    void SetRiskLow(const uint64_t& _riskLow);

                    /**
                     * 判断参数 RiskLow 是否已赋值
                     * @return RiskLow 是否已赋值
                     * 
                     */
                    bool RiskLowHasBeenSet() const;

                private:

                    /**
                     * <p>Risk type</p>
                     */
                    std::string m_resultType;
                    bool m_resultTypeHasBeenSet;

                    /**
                     * <p>Total number of risks</p>
                     */
                    uint64_t m_riskCount;
                    bool m_riskCountHasBeenSet;

                    /**
                     * <p>Number of severe risks</p>
                     */
                    uint64_t m_riskCritical;
                    bool m_riskCriticalHasBeenSet;

                    /**
                     * <p>High risk count</p>
                     */
                    uint64_t m_riskHigh;
                    bool m_riskHighHasBeenSet;

                    /**
                     * <p>Number of medium risks</p>
                     */
                    uint64_t m_riskMedium;
                    bool m_riskMediumHasBeenSet;

                    /**
                     * <p>Number of low-risk assets</p>
                     */
                    uint64_t m_riskLow;
                    bool m_riskLowHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_ASSETRISKINFO_H_
