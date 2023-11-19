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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_DESCRIBERISKCENTERASSETVIEWWEAKPASSWORDRISKLISTRESPONSE_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_DESCRIBERISKCENTERASSETVIEWWEAKPASSWORDRISKLISTRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/csip/v20221121/model/AssetViewWeakPassRisk.h>
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
                * DescribeRiskCenterAssetViewWeakPasswordRiskList response structure.
                */
                class DescribeRiskCenterAssetViewWeakPasswordRiskListResponse : public AbstractModel
                {
                public:
                    DescribeRiskCenterAssetViewWeakPasswordRiskListResponse();
                    ~DescribeRiskCenterAssetViewWeakPasswordRiskListResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取Total number of entries
                     * @return TotalCount Total number of entries
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
                     * 获取List of risks
                     * @return Data List of risks
                     * 
                     */
                    std::vector<AssetViewWeakPassRisk> GetData() const;

                    /**
                     * 判断参数 Data 是否已赋值
                     * @return Data 是否已赋值
                     * 
                     */
                    bool DataHasBeenSet() const;

                    /**
                     * 获取List of risk handling status
                     * @return StatusLists List of risk handling status
                     * 
                     */
                    std::vector<FilterDataObject> GetStatusLists() const;

                    /**
                     * 判断参数 StatusLists 是否已赋值
                     * @return StatusLists 是否已赋值
                     * 
                     */
                    bool StatusListsHasBeenSet() const;

                    /**
                     * 获取List of risk levels
                     * @return LevelLists List of risk levels
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
                     * 获取List of check source
                     * @return FromLists List of check source
                     * 
                     */
                    std::vector<FilterDataObject> GetFromLists() const;

                    /**
                     * 判断参数 FromLists 是否已赋值
                     * @return FromLists 是否已赋值
                     * 
                     */
                    bool FromListsHasBeenSet() const;

                    /**
                     * 获取List of asset types
                     * @return InstanceTypeLists List of asset types
                     * 
                     */
                    std::vector<FilterDataObject> GetInstanceTypeLists() const;

                    /**
                     * 判断参数 InstanceTypeLists 是否已赋值
                     * @return InstanceTypeLists 是否已赋值
                     * 
                     */
                    bool InstanceTypeListsHasBeenSet() const;

                    /**
                     * 获取List of weak password types
                     * @return PasswordTypeLists List of weak password types
                     * 
                     */
                    std::vector<FilterDataObject> GetPasswordTypeLists() const;

                    /**
                     * 判断参数 PasswordTypeLists 是否已赋值
                     * @return PasswordTypeLists 是否已赋值
                     * 
                     */
                    bool PasswordTypeListsHasBeenSet() const;

                private:

                    /**
                     * Total number of entries
                     */
                    int64_t m_totalCount;
                    bool m_totalCountHasBeenSet;

                    /**
                     * List of risks
                     */
                    std::vector<AssetViewWeakPassRisk> m_data;
                    bool m_dataHasBeenSet;

                    /**
                     * List of risk handling status
                     */
                    std::vector<FilterDataObject> m_statusLists;
                    bool m_statusListsHasBeenSet;

                    /**
                     * List of risk levels
                     */
                    std::vector<FilterDataObject> m_levelLists;
                    bool m_levelListsHasBeenSet;

                    /**
                     * List of check source
                     */
                    std::vector<FilterDataObject> m_fromLists;
                    bool m_fromListsHasBeenSet;

                    /**
                     * List of asset types
                     */
                    std::vector<FilterDataObject> m_instanceTypeLists;
                    bool m_instanceTypeListsHasBeenSet;

                    /**
                     * List of weak password types
                     */
                    std::vector<FilterDataObject> m_passwordTypeLists;
                    bool m_passwordTypeListsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_DESCRIBERISKCENTERASSETVIEWWEAKPASSWORDRISKLISTRESPONSE_H_
