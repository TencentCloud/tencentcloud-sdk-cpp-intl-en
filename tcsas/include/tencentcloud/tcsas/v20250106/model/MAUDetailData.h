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

#ifndef TENCENTCLOUD_TCSAS_V20250106_MODEL_MAUDETAILDATA_H_
#define TENCENTCLOUD_TCSAS_V20250106_MODEL_MAUDETAILDATA_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tcsas
    {
        namespace V20250106
        {
            namespace Model
            {
                /**
                * MAU detailed data
                */
                class MAUDetailData : public AbstractModel
                {
                public:
                    MAUDetailData();
                    ~MAUDetailData() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Date
                     * @return DataTime Date
                     * 
                     */
                    std::string GetDataTime() const;

                    /**
                     * 设置Date
                     * @param _dataTime Date
                     * 
                     */
                    void SetDataTime(const std::string& _dataTime);

                    /**
                     * 判断参数 DataTime 是否已赋值
                     * @return DataTime 是否已赋值
                     * 
                     */
                    bool DataTimeHasBeenSet() const;

                    /**
                     * 获取Mini program name
                     * @return MNPName Mini program name
                     * 
                     */
                    std::string GetMNPName() const;

                    /**
                     * 设置Mini program name
                     * @param _mNPName Mini program name
                     * 
                     */
                    void SetMNPName(const std::string& _mNPName);

                    /**
                     * 判断参数 MNPName 是否已赋值
                     * @return MNPName 是否已赋值
                     * 
                     */
                    bool MNPNameHasBeenSet() const;

                    /**
                     * 获取Mini program type
                     * @return MNPType Mini program type
                     * 
                     */
                    std::string GetMNPType() const;

                    /**
                     * 设置Mini program type
                     * @param _mNPType Mini program type
                     * 
                     */
                    void SetMNPType(const std::string& _mNPType);

                    /**
                     * 判断参数 MNPType 是否已赋值
                     * @return MNPType 是否已赋值
                     * 
                     */
                    bool MNPTypeHasBeenSet() const;

                    /**
                     * 获取Estimated revenue
                     * @return EstimatedEarnings Estimated revenue
                     * 
                     */
                    std::string GetEstimatedEarnings() const;

                    /**
                     * 设置Estimated revenue
                     * @param _estimatedEarnings Estimated revenue
                     * 
                     */
                    void SetEstimatedEarnings(const std::string& _estimatedEarnings);

                    /**
                     * 判断参数 EstimatedEarnings 是否已赋值
                     * @return EstimatedEarnings 是否已赋值
                     * 
                     */
                    bool EstimatedEarningsHasBeenSet() const;

                    /**
                     * 获取Requests
                     * @return RequestsNumber Requests
                     * 
                     */
                    int64_t GetRequestsNumber() const;

                    /**
                     * 设置Requests
                     * @param _requestsNumber Requests
                     * 
                     */
                    void SetRequestsNumber(const int64_t& _requestsNumber);

                    /**
                     * 判断参数 RequestsNumber 是否已赋值
                     * @return RequestsNumber 是否已赋值
                     * 
                     */
                    bool RequestsNumberHasBeenSet() const;

                    /**
                     * 获取Impressions
                     * @return Impressions Impressions
                     * 
                     */
                    int64_t GetImpressions() const;

                    /**
                     * 设置Impressions
                     * @param _impressions Impressions
                     * 
                     */
                    void SetImpressions(const int64_t& _impressions);

                    /**
                     * 判断参数 Impressions 是否已赋值
                     * @return Impressions 是否已赋值
                     * 
                     */
                    bool ImpressionsHasBeenSet() const;

                    /**
                     * 获取Effective Cost Per Mille
                     * @return ECPM Effective Cost Per Mille
                     * 
                     */
                    std::string GetECPM() const;

                    /**
                     * 设置Effective Cost Per Mille
                     * @param _eCPM Effective Cost Per Mille
                     * 
                     */
                    void SetECPM(const std::string& _eCPM);

                    /**
                     * 判断参数 ECPM 是否已赋值
                     * @return ECPM 是否已赋值
                     * 
                     */
                    bool ECPMHasBeenSet() const;

                    /**
                     * 获取Taps
                     * @return ClicksNumber Taps
                     * 
                     */
                    int64_t GetClicksNumber() const;

                    /**
                     * 设置Taps
                     * @param _clicksNumber Taps
                     * 
                     */
                    void SetClicksNumber(const int64_t& _clicksNumber);

                    /**
                     * 判断参数 ClicksNumber 是否已赋值
                     * @return ClicksNumber 是否已赋值
                     * 
                     */
                    bool ClicksNumberHasBeenSet() const;

                private:

                    /**
                     * Date
                     */
                    std::string m_dataTime;
                    bool m_dataTimeHasBeenSet;

                    /**
                     * Mini program name
                     */
                    std::string m_mNPName;
                    bool m_mNPNameHasBeenSet;

                    /**
                     * Mini program type
                     */
                    std::string m_mNPType;
                    bool m_mNPTypeHasBeenSet;

                    /**
                     * Estimated revenue
                     */
                    std::string m_estimatedEarnings;
                    bool m_estimatedEarningsHasBeenSet;

                    /**
                     * Requests
                     */
                    int64_t m_requestsNumber;
                    bool m_requestsNumberHasBeenSet;

                    /**
                     * Impressions
                     */
                    int64_t m_impressions;
                    bool m_impressionsHasBeenSet;

                    /**
                     * Effective Cost Per Mille
                     */
                    std::string m_eCPM;
                    bool m_eCPMHasBeenSet;

                    /**
                     * Taps
                     */
                    int64_t m_clicksNumber;
                    bool m_clicksNumberHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCSAS_V20250106_MODEL_MAUDETAILDATA_H_
