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

#ifndef TENCENTCLOUD_WEDATA_V20210820_MODEL_COMPARERULE_H_
#define TENCENTCLOUD_WEDATA_V20210820_MODEL_COMPARERULE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/wedata/v20210820/model/CompareRuleItem.h>


namespace TencentCloud
{
    namespace Wedata
    {
        namespace V20210820
        {
            namespace Model
            {
                /**
                * Comparison Rules
                */
                class CompareRule : public AbstractModel
                {
                public:
                    CompareRule();
                    ~CompareRule() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Comparison Criteria List
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return Items Comparison Criteria List
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    std::vector<CompareRuleItem> GetItems() const;

                    /**
                     * 设置Comparison Criteria List
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _items Comparison Criteria List
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetItems(const std::vector<CompareRuleItem>& _items);

                    /**
                     * 判断参数 Items 是否已赋值
                     * @return Items 是否已赋值
                     * 
                     */
                    bool ItemsHasBeenSet() const;

                    /**
                     * 获取Default cycle of the periodic template, Unit: seconds
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return CycleStep Default cycle of the periodic template, Unit: seconds
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    uint64_t GetCycleStep() const;

                    /**
                     * 设置Default cycle of the periodic template, Unit: seconds
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _cycleStep Default cycle of the periodic template, Unit: seconds
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetCycleStep(const uint64_t& _cycleStep);

                    /**
                     * 判断参数 CycleStep 是否已赋值
                     * @return CycleStep 是否已赋值
                     * 
                     */
                    bool CycleStepHasBeenSet() const;

                    /**
                     * 获取o represents OR, a represents AND, numbers represent items' indices
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return ComputeExpression o represents OR, a represents AND, numbers represent items' indices
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    std::string GetComputeExpression() const;

                    /**
                     * 设置o represents OR, a represents AND, numbers represent items' indices
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _computeExpression o represents OR, a represents AND, numbers represent items' indices
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetComputeExpression(const std::string& _computeExpression);

                    /**
                     * 判断参数 ComputeExpression 是否已赋值
                     * @return ComputeExpression 是否已赋值
                     * 
                     */
                    bool ComputeExpressionHasBeenSet() const;

                private:

                    /**
                     * Comparison Criteria List
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    std::vector<CompareRuleItem> m_items;
                    bool m_itemsHasBeenSet;

                    /**
                     * Default cycle of the periodic template, Unit: seconds
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    uint64_t m_cycleStep;
                    bool m_cycleStepHasBeenSet;

                    /**
                     * o represents OR, a represents AND, numbers represent items' indices
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    std::string m_computeExpression;
                    bool m_computeExpressionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20210820_MODEL_COMPARERULE_H_
