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

#ifndef TENCENTCLOUD_WEDATA_V20210820_MODEL_INSTANCEOPSINFOPAGE_H_
#define TENCENTCLOUD_WEDATA_V20210820_MODEL_INSTANCEOPSINFOPAGE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/wedata/v20210820/model/InstanceOpsDto.h>


namespace TencentCloud
{
    namespace Wedata
    {
        namespace V20210820
        {
            namespace Model
            {
                /**
                * Task Execution History Pagination Record
                */
                class InstanceOpsInfoPage : public AbstractModel
                {
                public:
                    InstanceOpsInfoPage();
                    ~InstanceOpsInfoPage() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Number of recordsNote: This field may return null, indicating that no valid value can be obtained.
                     * @return TotalCount Number of recordsNote: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    uint64_t GetTotalCount() const;

                    /**
                     * 设置Number of recordsNote: This field may return null, indicating that no valid value can be obtained.
                     * @param _totalCount Number of recordsNote: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetTotalCount(const uint64_t& _totalCount);

                    /**
                     * 判断参数 TotalCount 是否已赋值
                     * @return TotalCount 是否已赋值
                     * 
                     */
                    bool TotalCountHasBeenSet() const;

                    /**
                     * 获取Record list
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return Items Record list
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    std::vector<InstanceOpsDto> GetItems() const;

                    /**
                     * 设置Record list
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _items Record list
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetItems(const std::vector<InstanceOpsDto>& _items);

                    /**
                     * 判断参数 Items 是否已赋值
                     * @return Items 是否已赋值
                     * 
                     */
                    bool ItemsHasBeenSet() const;

                private:

                    /**
                     * Number of recordsNote: This field may return null, indicating that no valid value can be obtained.
                     */
                    uint64_t m_totalCount;
                    bool m_totalCountHasBeenSet;

                    /**
                     * Record list
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    std::vector<InstanceOpsDto> m_items;
                    bool m_itemsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20210820_MODEL_INSTANCEOPSINFOPAGE_H_
