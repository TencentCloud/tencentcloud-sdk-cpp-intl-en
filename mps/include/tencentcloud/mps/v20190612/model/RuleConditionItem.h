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

#ifndef TENCENTCLOUD_MPS_V20190612_MODEL_RULECONDITIONITEM_H_
#define TENCENTCLOUD_MPS_V20190612_MODEL_RULECONDITIONITEM_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Mps
    {
        namespace V20190612
        {
            namespace Model
            {
                /**
                * Rule condition configuration.
                */
                class RuleConditionItem : public AbstractModel
                {
                public:
                    RuleConditionItem();
                    ~RuleConditionItem() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Key of the quality inspection item condition.
                     * @return Key Key of the quality inspection item condition.
                     * 
                     */
                    std::string GetKey() const;

                    /**
                     * 设置Key of the quality inspection item condition.
                     * @param _key Key of the quality inspection item condition.
                     * 
                     */
                    void SetKey(const std::string& _key);

                    /**
                     * 判断参数 Key 是否已赋值
                     * @return Key 是否已赋值
                     * 
                     */
                    bool KeyHasBeenSet() const;

                    /**
                     * 获取Value corresponding to the condition.
                     * @return Value Value corresponding to the condition.
                     * 
                     */
                    std::string GetValue() const;

                    /**
                     * 设置Value corresponding to the condition.
                     * @param _value Value corresponding to the condition.
                     * 
                     */
                    void SetValue(const std::string& _value);

                    /**
                     * 判断参数 Value 是否已赋值
                     * @return Value 是否已赋值
                     * 
                     */
                    bool ValueHasBeenSet() const;

                private:

                    /**
                     * Key of the quality inspection item condition.
                     */
                    std::string m_key;
                    bool m_keyHasBeenSet;

                    /**
                     * Value corresponding to the condition.
                     */
                    std::string m_value;
                    bool m_valueHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MPS_V20190612_MODEL_RULECONDITIONITEM_H_
