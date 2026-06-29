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

#ifndef TENCENTCLOUD_TOKENHUB_V20260322_MODEL_DESCRIBEGLOSSARIESRESPONSE_H_
#define TENCENTCLOUD_TOKENHUB_V20260322_MODEL_DESCRIBEGLOSSARIESRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tokenhub/v20260322/model/GlossaryItem.h>


namespace TencentCloud
{
    namespace Tokenhub
    {
        namespace V20260322
        {
            namespace Model
            {
                /**
                * DescribeGlossaries response structure.
                */
                class DescribeGlossariesResponse : public AbstractModel
                {
                public:
                    DescribeGlossariesResponse();
                    ~DescribeGlossariesResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取Terminology repository list.
                     * @return Items Terminology repository list.
                     * 
                     */
                    std::vector<GlossaryItem> GetItems() const;

                    /**
                     * 判断参数 Items 是否已赋值
                     * @return Items 是否已赋值
                     * 
                     */
                    bool ItemsHasBeenSet() const;

                    /**
                     * 获取Total number of eligible terminology repositories.
                     * @return TotalCount Total number of eligible terminology repositories.
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
                     * 获取Current page.
                     * @return Current Current page.
                     * 
                     */
                    int64_t GetCurrent() const;

                    /**
                     * 判断参数 Current 是否已赋值
                     * @return Current 是否已赋值
                     * 
                     */
                    bool CurrentHasBeenSet() const;

                    /**
                     * 获取Size per page
                     * @return PageSize Size per page
                     * 
                     */
                    int64_t GetPageSize() const;

                    /**
                     * 判断参数 PageSize 是否已赋值
                     * @return PageSize 是否已赋值
                     * 
                     */
                    bool PageSizeHasBeenSet() const;

                private:

                    /**
                     * Terminology repository list.
                     */
                    std::vector<GlossaryItem> m_items;
                    bool m_itemsHasBeenSet;

                    /**
                     * Total number of eligible terminology repositories.
                     */
                    int64_t m_totalCount;
                    bool m_totalCountHasBeenSet;

                    /**
                     * Current page.
                     */
                    int64_t m_current;
                    bool m_currentHasBeenSet;

                    /**
                     * Size per page
                     */
                    int64_t m_pageSize;
                    bool m_pageSizeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TOKENHUB_V20260322_MODEL_DESCRIBEGLOSSARIESRESPONSE_H_
