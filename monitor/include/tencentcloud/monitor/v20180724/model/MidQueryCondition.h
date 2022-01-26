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

#ifndef TENCENTCLOUD_MONITOR_V20180724_MODEL_MIDQUERYCONDITION_H_
#define TENCENTCLOUD_MONITOR_V20180724_MODEL_MIDQUERYCONDITION_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Monitor
    {
        namespace V20180724
        {
            namespace Model
            {
                /**
                * `DescribeMidDimensionValueList` query conditions
                */
                class MidQueryCondition : public AbstractModel
                {
                public:
                    MidQueryCondition();
                    ~MidQueryCondition() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Dimension
                     * @return Key Dimension
                     */
                    std::string GetKey() const;

                    /**
                     * 设置Dimension
                     * @param Key Dimension
                     */
                    void SetKey(const std::string& _key);

                    /**
                     * 判断参数 Key 是否已赋值
                     * @return Key 是否已赋值
                     */
                    bool KeyHasBeenSet() const;

                    /**
                     * 获取Operator. Valid values: eq (equal to), ne (not equal to), in
                     * @return Operator Operator. Valid values: eq (equal to), ne (not equal to), in
                     */
                    std::string GetOperator() const;

                    /**
                     * 设置Operator. Valid values: eq (equal to), ne (not equal to), in
                     * @param Operator Operator. Valid values: eq (equal to), ne (not equal to), in
                     */
                    void SetOperator(const std::string& _operator);

                    /**
                     * 判断参数 Operator 是否已赋值
                     * @return Operator 是否已赋值
                     */
                    bool OperatorHasBeenSet() const;

                    /**
                     * 获取Dimension value. If `Operator` is `eq` or `ne`, only the first element will be used
                     * @return Value Dimension value. If `Operator` is `eq` or `ne`, only the first element will be used
                     */
                    std::vector<std::string> GetValue() const;

                    /**
                     * 设置Dimension value. If `Operator` is `eq` or `ne`, only the first element will be used
                     * @param Value Dimension value. If `Operator` is `eq` or `ne`, only the first element will be used
                     */
                    void SetValue(const std::vector<std::string>& _value);

                    /**
                     * 判断参数 Value 是否已赋值
                     * @return Value 是否已赋值
                     */
                    bool ValueHasBeenSet() const;

                private:

                    /**
                     * Dimension
                     */
                    std::string m_key;
                    bool m_keyHasBeenSet;

                    /**
                     * Operator. Valid values: eq (equal to), ne (not equal to), in
                     */
                    std::string m_operator;
                    bool m_operatorHasBeenSet;

                    /**
                     * Dimension value. If `Operator` is `eq` or `ne`, only the first element will be used
                     */
                    std::vector<std::string> m_value;
                    bool m_valueHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MONITOR_V20180724_MODEL_MIDQUERYCONDITION_H_
