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

#ifndef TENCENTCLOUD_WEDATA_V20210820_MODEL_WORKFLOWEXECUTEDTOBYPAGE_H_
#define TENCENTCLOUD_WEDATA_V20210820_MODEL_WORKFLOWEXECUTEDTOBYPAGE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/wedata/v20210820/model/WorkFlowExecuteDto.h>


namespace TencentCloud
{
    namespace Wedata
    {
        namespace V20210820
        {
            namespace Model
            {
                /**
                * Paging Query Workflow Canvas Run Start and End Time
                */
                class WorkFlowExecuteDtoByPage : public AbstractModel
                {
                public:
                    WorkFlowExecuteDtoByPage();
                    ~WorkFlowExecuteDtoByPage() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Total numberNote: This field may return null, indicating that no valid value can be obtained.
                     * @return TotalCount Total numberNote: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    uint64_t GetTotalCount() const;

                    /**
                     * 设置Total numberNote: This field may return null, indicating that no valid value can be obtained.
                     * @param _totalCount Total numberNote: This field may return null, indicating that no valid value can be obtained.
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
                     * 获取data
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return Items data
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    std::vector<WorkFlowExecuteDto> GetItems() const;

                    /**
                     * 设置data
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _items data
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetItems(const std::vector<WorkFlowExecuteDto>& _items);

                    /**
                     * 判断参数 Items 是否已赋值
                     * @return Items 是否已赋值
                     * 
                     */
                    bool ItemsHasBeenSet() const;

                    /**
                     * 获取Page sizeNote: This field may return null, indicating that no valid value can be obtained.
                     * @return PageSize Page sizeNote: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    uint64_t GetPageSize() const;

                    /**
                     * 设置Page sizeNote: This field may return null, indicating that no valid value can be obtained.
                     * @param _pageSize Page sizeNote: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetPageSize(const uint64_t& _pageSize);

                    /**
                     * 判断参数 PageSize 是否已赋值
                     * @return PageSize 是否已赋值
                     * 
                     */
                    bool PageSizeHasBeenSet() const;

                private:

                    /**
                     * Total numberNote: This field may return null, indicating that no valid value can be obtained.
                     */
                    uint64_t m_totalCount;
                    bool m_totalCountHasBeenSet;

                    /**
                     * data
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    std::vector<WorkFlowExecuteDto> m_items;
                    bool m_itemsHasBeenSet;

                    /**
                     * Page sizeNote: This field may return null, indicating that no valid value can be obtained.
                     */
                    uint64_t m_pageSize;
                    bool m_pageSizeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20210820_MODEL_WORKFLOWEXECUTEDTOBYPAGE_H_
