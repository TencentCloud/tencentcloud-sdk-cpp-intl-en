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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_DESCRIBEASSETFILTERVIEWSRESPONSE_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_DESCRIBEASSETFILTERVIEWSRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/csip/v20221121/model/AssetViewFilter.h>


namespace TencentCloud
{
    namespace Csip
    {
        namespace V20221121
        {
            namespace Model
            {
                /**
                * DescribeAssetFilterViews response structure.
                */
                class DescribeAssetFilterViewsResponse : public AbstractModel
                {
                public:
                    DescribeAssetFilterViewsResponse();
                    ~DescribeAssetFilterViewsResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取Asset search view
                     * @return FilterViews Asset search view
                     * 
                     */
                    std::vector<AssetViewFilter> GetFilterViews() const;

                    /**
                     * 判断参数 FilterViews 是否已赋值
                     * @return FilterViews 是否已赋值
                     * 
                     */
                    bool FilterViewsHasBeenSet() const;

                private:

                    /**
                     * Asset search view
                     */
                    std::vector<AssetViewFilter> m_filterViews;
                    bool m_filterViewsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_DESCRIBEASSETFILTERVIEWSRESPONSE_H_
