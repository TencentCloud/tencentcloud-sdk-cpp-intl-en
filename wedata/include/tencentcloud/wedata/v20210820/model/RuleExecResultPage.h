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

#ifndef TENCENTCLOUD_WEDATA_V20210820_MODEL_RULEEXECRESULTPAGE_H_
#define TENCENTCLOUD_WEDATA_V20210820_MODEL_RULEEXECRESULTPAGE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/wedata/v20210820/model/RuleExecResult.h>


namespace TencentCloud
{
    namespace Wedata
    {
        namespace V20210820
        {
            namespace Model
            {
                /**
                * Rule Execution Result Pagination
                */
                class RuleExecResultPage : public AbstractModel
                {
                public:
                    RuleExecResultPage();
                    ~RuleExecResultPage() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Record Count
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return TotalCount Record Count
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    uint64_t GetTotalCount() const;

                    /**
                     * 设置Record Count
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _totalCount Record Count
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

                    /**
                     * 获取Rule Execution Result
                     * @return Items Rule Execution Result
                     * 
                     */
                    std::vector<RuleExecResult> GetItems() const;

                    /**
                     * 设置Rule Execution Result
                     * @param _items Rule Execution Result
                     * 
                     */
                    void SetItems(const std::vector<RuleExecResult>& _items);

                    /**
                     * 判断参数 Items 是否已赋值
                     * @return Items 是否已赋值
                     * 
                     */
                    bool ItemsHasBeenSet() const;

                private:

                    /**
                     * Record Count
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    uint64_t m_totalCount;
                    bool m_totalCountHasBeenSet;

                    /**
                     * Rule Execution Result
                     */
                    std::vector<RuleExecResult> m_items;
                    bool m_itemsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20210820_MODEL_RULEEXECRESULTPAGE_H_
