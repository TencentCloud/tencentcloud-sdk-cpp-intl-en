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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_DESCRIBECHECKVIEWRISKSRESPONSE_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_DESCRIBECHECKVIEWRISKSRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/csip/v20221121/model/CheckViewRiskItem.h>
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
                * DescribeCheckViewRisks response structure.
                */
                class DescribeCheckViewRisksResponse : public AbstractModel
                {
                public:
                    DescribeCheckViewRisksResponse();
                    ~DescribeCheckViewRisksResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>Number of risks from check perspective</p>
                     * @return TotalCount <p>Number of risks from check perspective</p>
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
                     * 获取<p>Risk list in check perspective</p>
                     * @return CheckViewRiskList <p>Risk list in check perspective</p>
                     * 
                     */
                    std::vector<CheckViewRiskItem> GetCheckViewRiskList() const;

                    /**
                     * 判断参数 CheckViewRiskList 是否已赋值
                     * @return CheckViewRiskList 是否已赋值
                     * 
                     */
                    bool CheckViewRiskListHasBeenSet() const;

                    /**
                     * 获取<p>Tag list of cspm standard from a checking perspective</p>
                     * @return StandardNameList <p>Tag list of cspm standard from a checking perspective</p>
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
                     * 获取<p>Asset type collection</p>
                     * @return AssetTypeList <p>Asset type collection</p>
                     * 
                     */
                    std::vector<AttributeOptionSet> GetAssetTypeList() const;

                    /**
                     * 判断参数 AssetTypeList 是否已赋值
                     * @return AssetTypeList 是否已赋值
                     * 
                     */
                    bool AssetTypeListHasBeenSet() const;

                    /**
                     * 获取<p>Cloud vendor type collection</p>
                     * @return ProviderList <p>Cloud vendor type collection</p>
                     * 
                     */
                    std::vector<AttributeOptionSet> GetProviderList() const;

                    /**
                     * 判断参数 ProviderList 是否已赋值
                     * @return ProviderList 是否已赋值
                     * 
                     */
                    bool ProviderListHasBeenSet() const;

                private:

                    /**
                     * <p>Number of risks from check perspective</p>
                     */
                    int64_t m_totalCount;
                    bool m_totalCountHasBeenSet;

                    /**
                     * <p>Risk list in check perspective</p>
                     */
                    std::vector<CheckViewRiskItem> m_checkViewRiskList;
                    bool m_checkViewRiskListHasBeenSet;

                    /**
                     * <p>Tag list of cspm standard from a checking perspective</p>
                     */
                    std::vector<StandardItem> m_standardNameList;
                    bool m_standardNameListHasBeenSet;

                    /**
                     * <p>Asset type collection</p>
                     */
                    std::vector<AttributeOptionSet> m_assetTypeList;
                    bool m_assetTypeListHasBeenSet;

                    /**
                     * <p>Cloud vendor type collection</p>
                     */
                    std::vector<AttributeOptionSet> m_providerList;
                    bool m_providerListHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_DESCRIBECHECKVIEWRISKSRESPONSE_H_
