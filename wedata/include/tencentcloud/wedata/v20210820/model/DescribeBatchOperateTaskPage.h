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

#ifndef TENCENTCLOUD_WEDATA_V20210820_MODEL_DESCRIBEBATCHOPERATETASKPAGE_H_
#define TENCENTCLOUD_WEDATA_V20210820_MODEL_DESCRIBEBATCHOPERATETASKPAGE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/wedata/v20210820/model/DescribeBatchOperateTaskDTO.h>


namespace TencentCloud
{
    namespace Wedata
    {
        namespace V20210820
        {
            namespace Model
            {
                /**
                * Batch Operation Task List Pagination
                */
                class DescribeBatchOperateTaskPage : public AbstractModel
                {
                public:
                    DescribeBatchOperateTaskPage();
                    ~DescribeBatchOperateTaskPage() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Total Number of Pages
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return PageCount Total Number of Pages
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    uint64_t GetPageCount() const;

                    /**
                     * 设置Total Number of Pages
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _pageCount Total Number of Pages
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetPageCount(const uint64_t& _pageCount);

                    /**
                     * 判断参数 PageCount 是否已赋值
                     * @return PageCount 是否已赋值
                     * 
                     */
                    bool PageCountHasBeenSet() const;

                    /**
                     * 获取ContentNote: This field may return null, indicating that no valid value can be obtained.
                     * @return Items ContentNote: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    std::vector<DescribeBatchOperateTaskDTO> GetItems() const;

                    /**
                     * 设置ContentNote: This field may return null, indicating that no valid value can be obtained.
                     * @param _items ContentNote: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetItems(const std::vector<DescribeBatchOperateTaskDTO>& _items);

                    /**
                     * 判断参数 Items 是否已赋值
                     * @return Items 是否已赋值
                     * 
                     */
                    bool ItemsHasBeenSet() const;

                    /**
                     * 获取Total count
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return TotalCount Total count
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    uint64_t GetTotalCount() const;

                    /**
                     * 设置Total count
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _totalCount Total count
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetTotalCount(const uint64_t& _totalCount);

                    /**
                     * 判断参数 TotalCount 是否已赋值
                     * @return TotalCount 是否已赋值
                     * 
                     */
                    bool TotalCountHasBeenSet() const;

                private:

                    /**
                     * Total Number of Pages
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    uint64_t m_pageCount;
                    bool m_pageCountHasBeenSet;

                    /**
                     * ContentNote: This field may return null, indicating that no valid value can be obtained.
                     */
                    std::vector<DescribeBatchOperateTaskDTO> m_items;
                    bool m_itemsHasBeenSet;

                    /**
                     * Total count
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    uint64_t m_totalCount;
                    bool m_totalCountHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20210820_MODEL_DESCRIBEBATCHOPERATETASKPAGE_H_
