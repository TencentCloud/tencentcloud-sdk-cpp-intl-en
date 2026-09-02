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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_DESCRIBERISKCENTERPORTVIEWPORTRISKLISTRESPONSE_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_DESCRIBERISKCENTERPORTVIEWPORTRISKLISTRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/csip/v20221121/model/PortViewPortRisk.h>
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
                * DescribeRiskCenterPortViewPortRiskList response structure.
                */
                class DescribeRiskCenterPortViewPortRiskListResponse : public AbstractModel
                {
                public:
                    DescribeRiskCenterPortViewPortRiskListResponse();
                    ~DescribeRiskCenterPortViewPortRiskListResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取Total quantity.
                     * @return TotalCount Total quantity.
                     * 
                     */
                    int64_t GetTotalCount() const;

                    /**
                     * 判断参数 TotalCount 是否已赋值
                     * @return TotalCount 是否已赋值
                     * 
                     */
                    bool TotalCountHasBeenSet() const;

                    /**
                     * 获取Port Risk List from Port's Perspective
                     * @return Data Port Risk List from Port's Perspective
                     * 
                     */
                    std::vector<PortViewPortRisk> GetData() const;

                    /**
                     * 判断参数 Data 是否已赋值
                     * @return Data 是否已赋值
                     * 
                     */
                    bool DataHasBeenSet() const;

                    /**
                     * 获取Danger Level List
                     * @return LevelLists Danger Level List
                     * 
                     */
                    std::vector<FilterDataObject> GetLevelLists() const;

                    /**
                     * 判断参数 LevelLists 是否已赋值
                     * @return LevelLists 是否已赋值
                     * 
                     */
                    bool LevelListsHasBeenSet() const;

                    /**
                     * 获取Disposal Suggestion List
                     * @return SuggestionLists Disposal Suggestion List
                     * 
                     */
                    std::vector<FilterDataObject> GetSuggestionLists() const;

                    /**
                     * 判断参数 SuggestionLists 是否已赋值
                     * @return SuggestionLists 是否已赋值
                     * 
                     */
                    bool SuggestionListsHasBeenSet() const;

                    /**
                     * 获取Source List
                     * @return FromLists Source List
                     * 
                     */
                    std::vector<FilterDataObject> GetFromLists() const;

                    /**
                     * 判断参数 FromLists 是否已赋值
                     * @return FromLists 是否已赋值
                     * 
                     */
                    bool FromListsHasBeenSet() const;

                private:

                    /**
                     * Total quantity.
                     */
                    int64_t m_totalCount;
                    bool m_totalCountHasBeenSet;

                    /**
                     * Port Risk List from Port's Perspective
                     */
                    std::vector<PortViewPortRisk> m_data;
                    bool m_dataHasBeenSet;

                    /**
                     * Danger Level List
                     */
                    std::vector<FilterDataObject> m_levelLists;
                    bool m_levelListsHasBeenSet;

                    /**
                     * Disposal Suggestion List
                     */
                    std::vector<FilterDataObject> m_suggestionLists;
                    bool m_suggestionListsHasBeenSet;

                    /**
                     * Source List
                     */
                    std::vector<FilterDataObject> m_fromLists;
                    bool m_fromListsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_DESCRIBERISKCENTERPORTVIEWPORTRISKLISTRESPONSE_H_
