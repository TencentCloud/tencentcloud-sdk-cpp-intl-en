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

#ifndef TENCENTCLOUD_DTS_V20211206_MODEL_DIFFERENCEDETAIL_H_
#define TENCENTCLOUD_DTS_V20211206_MODEL_DIFFERENCEDETAIL_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/dts/v20211206/model/DifferenceItem.h>


namespace TencentCloud
{
    namespace Dts
    {
        namespace V20211206
        {
            namespace Model
            {
                /**
                * Details of inconsistent tables
                */
                class DifferenceDetail : public AbstractModel
                {
                public:
                    DifferenceDetail();
                    ~DifferenceDetail() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Number of inconsistent tables
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return TotalCount Number of inconsistent tables
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    uint64_t GetTotalCount() const;

                    /**
                     * 设置Number of inconsistent tables
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param TotalCount Number of inconsistent tables
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    void SetTotalCount(const uint64_t& _totalCount);

                    /**
                     * 判断参数 TotalCount 是否已赋值
                     * @return TotalCount 是否已赋值
                     */
                    bool TotalCountHasBeenSet() const;

                    /**
                     * 获取Details of inconsistent tables
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Items Details of inconsistent tables
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<DifferenceItem> GetItems() const;

                    /**
                     * 设置Details of inconsistent tables
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param Items Details of inconsistent tables
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    void SetItems(const std::vector<DifferenceItem>& _items);

                    /**
                     * 判断参数 Items 是否已赋值
                     * @return Items 是否已赋值
                     */
                    bool ItemsHasBeenSet() const;

                private:

                    /**
                     * Number of inconsistent tables
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    uint64_t m_totalCount;
                    bool m_totalCountHasBeenSet;

                    /**
                     * Details of inconsistent tables
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<DifferenceItem> m_items;
                    bool m_itemsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DTS_V20211206_MODEL_DIFFERENCEDETAIL_H_