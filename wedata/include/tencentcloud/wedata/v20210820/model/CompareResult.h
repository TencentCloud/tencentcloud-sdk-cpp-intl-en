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

#ifndef TENCENTCLOUD_WEDATA_V20210820_MODEL_COMPARERESULT_H_
#define TENCENTCLOUD_WEDATA_V20210820_MODEL_COMPARERESULT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/wedata/v20210820/model/CompareResultItem.h>


namespace TencentCloud
{
    namespace Wedata
    {
        namespace V20210820
        {
            namespace Model
            {
                /**
                * Quality Check Comparison Results
                */
                class CompareResult : public AbstractModel
                {
                public:
                    CompareResult();
                    ~CompareResult() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Comparison Result Item List
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return Items Comparison Result Item List
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    std::vector<CompareResultItem> GetItems() const;

                    /**
                     * 设置Comparison Result Item List
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _items Comparison Result Item List
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetItems(const std::vector<CompareResultItem>& _items);

                    /**
                     * 判断参数 Items 是否已赋值
                     * @return Items 是否已赋值
                     * 
                     */
                    bool ItemsHasBeenSet() const;

                    /**
                     * 获取Total Number of Rows Detected
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return TotalRows Total Number of Rows Detected
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    uint64_t GetTotalRows() const;

                    /**
                     * 设置Total Number of Rows Detected
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _totalRows Total Number of Rows Detected
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetTotalRows(const uint64_t& _totalRows);

                    /**
                     * 判断参数 TotalRows 是否已赋值
                     * @return TotalRows 是否已赋值
                     * 
                     */
                    bool TotalRowsHasBeenSet() const;

                    /**
                     * 获取Number of Rows Passed
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return PassRows Number of Rows Passed
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    uint64_t GetPassRows() const;

                    /**
                     * 设置Number of Rows Passed
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _passRows Number of Rows Passed
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetPassRows(const uint64_t& _passRows);

                    /**
                     * 判断参数 PassRows 是否已赋值
                     * @return PassRows 是否已赋值
                     * 
                     */
                    bool PassRowsHasBeenSet() const;

                    /**
                     * 获取Number of Rows Failed
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return TriggerRows Number of Rows Failed
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    uint64_t GetTriggerRows() const;

                    /**
                     * 设置Number of Rows Failed
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _triggerRows Number of Rows Failed
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetTriggerRows(const uint64_t& _triggerRows);

                    /**
                     * 判断参数 TriggerRows 是否已赋值
                     * @return TriggerRows 是否已赋值
                     * 
                     */
                    bool TriggerRowsHasBeenSet() const;

                private:

                    /**
                     * Comparison Result Item List
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    std::vector<CompareResultItem> m_items;
                    bool m_itemsHasBeenSet;

                    /**
                     * Total Number of Rows Detected
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    uint64_t m_totalRows;
                    bool m_totalRowsHasBeenSet;

                    /**
                     * Number of Rows Passed
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    uint64_t m_passRows;
                    bool m_passRowsHasBeenSet;

                    /**
                     * Number of Rows Failed
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    uint64_t m_triggerRows;
                    bool m_triggerRowsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20210820_MODEL_COMPARERESULT_H_
