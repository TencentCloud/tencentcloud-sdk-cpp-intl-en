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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_DESCRIBEASSETDETAILRESPONSE_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_DESCRIBEASSETDETAILRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/csip/v20221121/model/DynamicTab.h>
#include <tencentcloud/csip/v20221121/model/AssetDetailItem.h>


namespace TencentCloud
{
    namespace Csip
    {
        namespace V20221121
        {
            namespace Model
            {
                /**
                * DescribeAssetDetail response structure.
                */
                class DescribeAssetDetailResponse : public AbstractModel
                {
                public:
                    DescribeAssetDetailResponse();
                    ~DescribeAssetDetailResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>Dynamic tab configuration</p>
                     * @return DynamicTabs <p>Dynamic tab configuration</p>
                     * 
                     */
                    std::vector<DynamicTab> GetDynamicTabs() const;

                    /**
                     * 判断参数 DynamicTabs 是否已赋值
                     * @return DynamicTabs 是否已赋值
                     * 
                     */
                    bool DynamicTabsHasBeenSet() const;

                    /**
                     * 获取<p>Basic tab</p>
                     * @return DetailTabs <p>Basic tab</p>
                     * 
                     */
                    std::vector<std::string> GetDetailTabs() const;

                    /**
                     * 判断参数 DetailTabs 是否已赋值
                     * @return DetailTabs 是否已赋值
                     * 
                     */
                    bool DetailTabsHasBeenSet() const;

                    /**
                     * 获取<p>Asset detail info</p>
                     * @return AssetDetail <p>Asset detail info</p>
                     * 
                     */
                    AssetDetailItem GetAssetDetail() const;

                    /**
                     * 判断参数 AssetDetail 是否已赋值
                     * @return AssetDetail 是否已赋值
                     * 
                     */
                    bool AssetDetailHasBeenSet() const;

                private:

                    /**
                     * <p>Dynamic tab configuration</p>
                     */
                    std::vector<DynamicTab> m_dynamicTabs;
                    bool m_dynamicTabsHasBeenSet;

                    /**
                     * <p>Basic tab</p>
                     */
                    std::vector<std::string> m_detailTabs;
                    bool m_detailTabsHasBeenSet;

                    /**
                     * <p>Asset detail info</p>
                     */
                    AssetDetailItem m_assetDetail;
                    bool m_assetDetailHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_DESCRIBEASSETDETAILRESPONSE_H_
