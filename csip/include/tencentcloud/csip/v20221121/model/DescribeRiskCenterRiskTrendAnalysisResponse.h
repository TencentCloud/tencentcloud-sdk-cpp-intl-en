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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_DESCRIBERISKCENTERRISKTRENDANALYSISRESPONSE_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_DESCRIBERISKCENTERRISKTRENDANALYSISRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/csip/v20221121/model/RiskCenterOverviewTrendAnalysis.h>
#include <tencentcloud/csip/v20221121/model/FilterDataObject.h>


namespace TencentCloud
{
    namespace Csip
    {
        namespace V20221121
        {
            namespace Model
            {
                /**
                * DescribeRiskCenterRiskTrendAnalysis response structure.
                */
                class DescribeRiskCenterRiskTrendAnalysisResponse : public AbstractModel
                {
                public:
                    DescribeRiskCenterRiskTrendAnalysisResponse();
                    ~DescribeRiskCenterRiskTrendAnalysisResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取Trend List
                     * @return Data Trend List
                     * 
                     */
                    std::vector<RiskCenterOverviewTrendAnalysis> GetData() const;

                    /**
                     * 判断参数 Data 是否已赋值
                     * @return Data 是否已赋值
                     * 
                     */
                    bool DataHasBeenSet() const;

                    /**
                     * 获取Date Type List
                     * @return DateTypeLists Date Type List
                     * 
                     */
                    std::vector<FilterDataObject> GetDateTypeLists() const;

                    /**
                     * 判断参数 DateTypeLists 是否已赋值
                     * @return DateTypeLists 是否已赋值
                     * 
                     */
                    bool DateTypeListsHasBeenSet() const;

                private:

                    /**
                     * Trend List
                     */
                    std::vector<RiskCenterOverviewTrendAnalysis> m_data;
                    bool m_dataHasBeenSet;

                    /**
                     * Date Type List
                     */
                    std::vector<FilterDataObject> m_dateTypeLists;
                    bool m_dateTypeListsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_DESCRIBERISKCENTERRISKTRENDANALYSISRESPONSE_H_
