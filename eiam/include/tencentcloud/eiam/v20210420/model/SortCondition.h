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

#ifndef TENCENTCLOUD_EIAM_V20210420_MODEL_SORTCONDITION_H_
#define TENCENTCLOUD_EIAM_V20210420_MODEL_SORTCONDITION_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Eiam
    {
        namespace V20210420
        {
            namespace Model
            {
                /**
                * Sort criterion.
                */
                class SortCondition : public AbstractModel
                {
                public:
                    SortCondition();
                    ~SortCondition() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Sorting attribute.
                     * @return SortKey Sorting attribute.
                     * 
                     */
                    std::string GetSortKey() const;

                    /**
                     * 设置Sorting attribute.
                     * @param _sortKey Sorting attribute.
                     * 
                     */
                    void SetSortKey(const std::string& _sortKey);

                    /**
                     * 判断参数 SortKey 是否已赋值
                     * @return SortKey 是否已赋值
                     * 
                     */
                    bool SortKeyHasBeenSet() const;

                    /**
                     * 获取Sorting order. Valid values: ASC: ascending order; DESC: descending order.
                     * @return SortOrder Sorting order. Valid values: ASC: ascending order; DESC: descending order.
                     * 
                     */
                    std::string GetSortOrder() const;

                    /**
                     * 设置Sorting order. Valid values: ASC: ascending order; DESC: descending order.
                     * @param _sortOrder Sorting order. Valid values: ASC: ascending order; DESC: descending order.
                     * 
                     */
                    void SetSortOrder(const std::string& _sortOrder);

                    /**
                     * 判断参数 SortOrder 是否已赋值
                     * @return SortOrder 是否已赋值
                     * 
                     */
                    bool SortOrderHasBeenSet() const;

                private:

                    /**
                     * Sorting attribute.
                     */
                    std::string m_sortKey;
                    bool m_sortKeyHasBeenSet;

                    /**
                     * Sorting order. Valid values: ASC: ascending order; DESC: descending order.
                     */
                    std::string m_sortOrder;
                    bool m_sortOrderHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_EIAM_V20210420_MODEL_SORTCONDITION_H_
