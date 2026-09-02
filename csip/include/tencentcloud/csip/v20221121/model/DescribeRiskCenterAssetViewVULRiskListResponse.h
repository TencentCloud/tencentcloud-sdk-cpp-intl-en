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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_DESCRIBERISKCENTERASSETVIEWVULRISKLISTRESPONSE_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_DESCRIBERISKCENTERASSETVIEWVULRISKLISTRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/csip/v20221121/model/AssetViewVULRisk.h>
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
                * DescribeRiskCenterAssetViewVULRiskList response structure.
                */
                class DescribeRiskCenterAssetViewVULRiskListResponse : public AbstractModel
                {
                public:
                    DescribeRiskCenterAssetViewVULRiskListResponse();
                    ~DescribeRiskCenterAssetViewVULRiskListResponse() = default;
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
                     * 获取Vulnerability Risk List from Asset's Perspective
                     * @return Data Vulnerability Risk List from Asset's Perspective
                     * 
                     */
                    std::vector<AssetViewVULRisk> GetData() const;

                    /**
                     * 判断参数 Data 是否已赋值
                     * @return Data 是否已赋值
                     * 
                     */
                    bool DataHasBeenSet() const;

                    /**
                     * 获取Status list
                     * @return StatusLists Status list
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

                    /**
                     * 获取Vulnerability Type List
                     * @return VULTypeLists Vulnerability Type List
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
                     * 获取Asset Type List
                     * @return InstanceTypeLists Asset Type List
                     * 
                     */
                    std::vector<FilterDataObject> GetInstanceTypeLists() const;

                    /**
                     * 判断参数 InstanceTypeLists 是否已赋值
                     * @return InstanceTypeLists 是否已赋值
                     * 
                     */
                    bool InstanceTypeListsHasBeenSet() const;

                private:

                    /**
                     * Total quantity.
                     */
                    int64_t m_totalCount;
                    bool m_totalCountHasBeenSet;

                    /**
                     * Vulnerability Risk List from Asset's Perspective
                     */
                    std::vector<AssetViewVULRisk> m_data;
                    bool m_dataHasBeenSet;

                    /**
                     * Status list
                     */
                    std::vector<FilterDataObject> m_statusLists;
                    bool m_statusListsHasBeenSet;

                    /**
                     * Danger Level List
                     */
                    std::vector<FilterDataObject> m_levelLists;
                    bool m_levelListsHasBeenSet;

                    /**
                     * Source List
                     */
                    std::vector<FilterDataObject> m_fromLists;
                    bool m_fromListsHasBeenSet;

                    /**
                     * Vulnerability Type List
                     */
                    std::vector<FilterDataObject> m_vULTypeLists;
                    bool m_vULTypeListsHasBeenSet;

                    /**
                     * Asset Type List
                     */
                    std::vector<FilterDataObject> m_instanceTypeLists;
                    bool m_instanceTypeListsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_DESCRIBERISKCENTERASSETVIEWVULRISKLISTRESPONSE_H_
