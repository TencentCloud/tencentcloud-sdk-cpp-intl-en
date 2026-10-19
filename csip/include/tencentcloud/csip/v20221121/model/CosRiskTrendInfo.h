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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_COSRISKTRENDINFO_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_COSRISKTRENDINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/csip/v20221121/model/CosRiskInfo.h>


namespace TencentCloud
{
    namespace Csip
    {
        namespace V20221121
        {
            namespace Model
            {
                /**
                * Object Storage risk trend chart
                */
                class CosRiskTrendInfo : public AbstractModel
                {
                public:
                    CosRiskTrendInfo();
                    ~CosRiskTrendInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Current date.
                     * @return CurrentDateStr Current date.
                     * 
                     */
                    std::string GetCurrentDateStr() const;

                    /**
                     * 设置Current date.
                     * @param _currentDateStr Current date.
                     * 
                     */
                    void SetCurrentDateStr(const std::string& _currentDateStr);

                    /**
                     * 判断参数 CurrentDateStr 是否已赋值
                     * @return CurrentDateStr 是否已赋值
                     * 
                     */
                    bool CurrentDateStrHasBeenSet() const;

                    /**
                     * 获取Risk data information
                     * @return RiskDataSet Risk data information
                     * 
                     */
                    std::vector<CosRiskInfo> GetRiskDataSet() const;

                    /**
                     * 设置Risk data information
                     * @param _riskDataSet Risk data information
                     * 
                     */
                    void SetRiskDataSet(const std::vector<CosRiskInfo>& _riskDataSet);

                    /**
                     * 判断参数 RiskDataSet 是否已赋值
                     * @return RiskDataSet 是否已赋值
                     * 
                     */
                    bool RiskDataSetHasBeenSet() const;

                private:

                    /**
                     * Current date.
                     */
                    std::string m_currentDateStr;
                    bool m_currentDateStrHasBeenSet;

                    /**
                     * Risk data information
                     */
                    std::vector<CosRiskInfo> m_riskDataSet;
                    bool m_riskDataSetHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_COSRISKTRENDINFO_H_
