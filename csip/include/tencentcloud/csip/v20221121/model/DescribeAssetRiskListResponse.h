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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_DESCRIBEASSETRISKLISTRESPONSE_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_DESCRIBEASSETRISKLISTRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/csip/v20221121/model/AssetRiskItem.h>
#include <tencentcloud/csip/v20221121/model/StandardItem.h>
#include <tencentcloud/csip/v20221121/model/AttributeOptionSet.h>


namespace TencentCloud
{
    namespace Csip
    {
        namespace V20221121
        {
            namespace Model
            {
                /**
                * DescribeAssetRiskList response structure.
                */
                class DescribeAssetRiskListResponse : public AbstractModel
                {
                public:
                    DescribeAssetRiskListResponse();
                    ~DescribeAssetRiskListResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取Number of risks from asset perspective
                     * @return TotalCount Number of risks from asset perspective
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
                     * 获取Risk list from asset perspective
                     * @return AssetRiskList Risk list from asset perspective
                     * 
                     */
                    std::vector<AssetRiskItem> GetAssetRiskList() const;

                    /**
                     * 判断参数 AssetRiskList 是否已赋值
                     * @return AssetRiskList 是否已赋值
                     * 
                     */
                    bool AssetRiskListHasBeenSet() const;

                    /**
                     * 获取Standard name collection
                     * @return StandardNameList Standard name collection
                     * 
                     */
                    std::vector<StandardItem> GetStandardNameList() const;

                    /**
                     * 判断参数 StandardNameList 是否已赋值
                     * @return StandardNameList 是否已赋值
                     * 
                     */
                    bool StandardNameListHasBeenSet() const;

                    /**
                     * 获取Asset type collection
                     * @return AssetTypeList Asset type collection
                     * 
                     */
                    std::vector<AttributeOptionSet> GetAssetTypeList() const;

                    /**
                     * 判断参数 AssetTypeList 是否已赋值
                     * @return AssetTypeList 是否已赋值
                     * 
                     */
                    bool AssetTypeListHasBeenSet() const;

                private:

                    /**
                     * Number of risks from asset perspective
                     */
                    int64_t m_totalCount;
                    bool m_totalCountHasBeenSet;

                    /**
                     * Risk list from asset perspective
                     */
                    std::vector<AssetRiskItem> m_assetRiskList;
                    bool m_assetRiskListHasBeenSet;

                    /**
                     * Standard name collection
                     */
                    std::vector<StandardItem> m_standardNameList;
                    bool m_standardNameListHasBeenSet;

                    /**
                     * Asset type collection
                     */
                    std::vector<AttributeOptionSet> m_assetTypeList;
                    bool m_assetTypeListHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_DESCRIBEASSETRISKLISTRESPONSE_H_
