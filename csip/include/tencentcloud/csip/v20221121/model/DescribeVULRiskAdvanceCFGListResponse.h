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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_DESCRIBEVULRISKADVANCECFGLISTRESPONSE_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_DESCRIBEVULRISKADVANCECFGLISTRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/csip/v20221121/model/VULRiskAdvanceCFGList.h>
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
                * DescribeVULRiskAdvanceCFGList response structure.
                */
                class DescribeVULRiskAdvanceCFGListResponse : public AbstractModel
                {
                public:
                    DescribeVULRiskAdvanceCFGListResponse();
                    ~DescribeVULRiskAdvanceCFGListResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取List of configuration items
Note: This field may return·null, indicating that no valid values can be obtained.
                     * @return Data List of configuration items
Note: This field may return·null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::vector<VULRiskAdvanceCFGList> GetData() const;

                    /**
                     * 判断参数 Data 是否已赋值
                     * @return Data 是否已赋值
                     * 
                     */
                    bool DataHasBeenSet() const;

                    /**
                     * 获取Total number of results
                     * @return TotalCount Total number of results
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
                     * 获取List of risk levels
Note: This field may return·null, indicating that no valid values can be obtained.
                     * @return RiskLevelLists List of risk levels
Note: This field may return·null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::vector<FilterDataObject> GetRiskLevelLists() const;

                    /**
                     * 判断参数 RiskLevelLists 是否已赋值
                     * @return RiskLevelLists 是否已赋值
                     * 
                     */
                    bool RiskLevelListsHasBeenSet() const;

                    /**
                     * 获取List of vulnerabilities types
Note: This field may return·null, indicating that no valid values can be obtained.
                     * @return VULTypeLists List of vulnerabilities types
Note: This field may return·null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::vector<FilterDataObject> GetVULTypeLists() const;

                    /**
                     * 判断参数 VULTypeLists 是否已赋值
                     * @return VULTypeLists 是否已赋值
                     * 
                     */
                    bool VULTypeListsHasBeenSet() const;

                    /**
                     * 获取List of check source
Note: This field may return·null, indicating that no valid values can be obtained.
                     * @return CheckFromLists List of check source
Note: This field may return·null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::vector<FilterDataObject> GetCheckFromLists() const;

                    /**
                     * 判断参数 CheckFromLists 是否已赋值
                     * @return CheckFromLists 是否已赋值
                     * 
                     */
                    bool CheckFromListsHasBeenSet() const;

                private:

                    /**
                     * List of configuration items
Note: This field may return·null, indicating that no valid values can be obtained.
                     */
                    std::vector<VULRiskAdvanceCFGList> m_data;
                    bool m_dataHasBeenSet;

                    /**
                     * Total number of results
                     */
                    int64_t m_totalCount;
                    bool m_totalCountHasBeenSet;

                    /**
                     * List of risk levels
Note: This field may return·null, indicating that no valid values can be obtained.
                     */
                    std::vector<FilterDataObject> m_riskLevelLists;
                    bool m_riskLevelListsHasBeenSet;

                    /**
                     * List of vulnerabilities types
Note: This field may return·null, indicating that no valid values can be obtained.
                     */
                    std::vector<FilterDataObject> m_vULTypeLists;
                    bool m_vULTypeListsHasBeenSet;

                    /**
                     * List of check source
Note: This field may return·null, indicating that no valid values can be obtained.
                     */
                    std::vector<FilterDataObject> m_checkFromLists;
                    bool m_checkFromListsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_DESCRIBEVULRISKADVANCECFGLISTRESPONSE_H_
