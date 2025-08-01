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

#ifndef TENCENTCLOUD_CWP_V20180228_MODEL_ASSETLOADSUMMARY_H_
#define TENCENTCLOUD_CWP_V20180228_MODEL_ASSETLOADSUMMARY_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cwp/v20180228/model/AssetLoadDetail.h>


namespace TencentCloud
{
    namespace Cwp
    {
        namespace V20180228
        {
            namespace Model
            {
                /**
                * Resource load overview
                */
                class AssetLoadSummary : public AbstractModel
                {
                public:
                    AssetLoadSummary();
                    ~AssetLoadSummary() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Load amount array, in ascending order:
[
0% or unknown quantity
0%～20%
20%～50%
50%～80%
80%～100%
]
                     * @return Counts Load amount array, in ascending order:
[
0% or unknown quantity
0%～20%
20%～50%
50%～80%
80%～100%
]
                     * 
                     */
                    std::vector<uint64_t> GetCounts() const;

                    /**
                     * 设置Load amount array, in ascending order:
[
0% or unknown quantity
0%～20%
20%～50%
50%～80%
80%～100%
]
                     * @param _counts Load amount array, in ascending order:
[
0% or unknown quantity
0%～20%
20%～50%
50%～80%
80%～100%
]
                     * 
                     */
                    void SetCounts(const std::vector<uint64_t>& _counts);

                    /**
                     * 判断参数 Counts 是否已赋值
                     * @return Counts 是否已赋值
                     * 
                     */
                    bool CountsHasBeenSet() const;

                    /**
                     * 获取Top 5 Load
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Top5 Top 5 Load
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::vector<AssetLoadDetail> GetTop5() const;

                    /**
                     * 设置Top 5 Load
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _top5 Top 5 Load
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetTop5(const std::vector<AssetLoadDetail>& _top5);

                    /**
                     * 判断参数 Top5 是否已赋值
                     * @return Top5 是否已赋值
                     * 
                     */
                    bool Top5HasBeenSet() const;

                private:

                    /**
                     * Load amount array, in ascending order:
[
0% or unknown quantity
0%～20%
20%～50%
50%～80%
80%～100%
]
                     */
                    std::vector<uint64_t> m_counts;
                    bool m_countsHasBeenSet;

                    /**
                     * Top 5 Load
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<AssetLoadDetail> m_top5;
                    bool m_top5HasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CWP_V20180228_MODEL_ASSETLOADSUMMARY_H_
