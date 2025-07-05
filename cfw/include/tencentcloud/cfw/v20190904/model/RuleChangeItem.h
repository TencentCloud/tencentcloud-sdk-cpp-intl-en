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

#ifndef TENCENTCLOUD_CFW_V20190904_MODEL_RULECHANGEITEM_H_
#define TENCENTCLOUD_CFW_V20190904_MODEL_RULECHANGEITEM_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cfw
    {
        namespace V20190904
        {
            namespace Model
            {
                /**
                * Changes of the rule sequence number.
                */
                class RuleChangeItem : public AbstractModel
                {
                public:
                    RuleChangeItem();
                    ~RuleChangeItem() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Original sequence number
                     * @return OrderIndex Original sequence number
                     * 
                     */
                    int64_t GetOrderIndex() const;

                    /**
                     * 设置Original sequence number
                     * @param _orderIndex Original sequence number
                     * 
                     */
                    void SetOrderIndex(const int64_t& _orderIndex);

                    /**
                     * 判断参数 OrderIndex 是否已赋值
                     * @return OrderIndex 是否已赋值
                     * 
                     */
                    bool OrderIndexHasBeenSet() const;

                    /**
                     * 获取New sequence number
                     * @return NewOrderIndex New sequence number
                     * 
                     */
                    int64_t GetNewOrderIndex() const;

                    /**
                     * 设置New sequence number
                     * @param _newOrderIndex New sequence number
                     * 
                     */
                    void SetNewOrderIndex(const int64_t& _newOrderIndex);

                    /**
                     * 判断参数 NewOrderIndex 是否已赋值
                     * @return NewOrderIndex 是否已赋值
                     * 
                     */
                    bool NewOrderIndexHasBeenSet() const;

                private:

                    /**
                     * Original sequence number
                     */
                    int64_t m_orderIndex;
                    bool m_orderIndexHasBeenSet;

                    /**
                     * New sequence number
                     */
                    int64_t m_newOrderIndex;
                    bool m_newOrderIndexHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CFW_V20190904_MODEL_RULECHANGEITEM_H_
