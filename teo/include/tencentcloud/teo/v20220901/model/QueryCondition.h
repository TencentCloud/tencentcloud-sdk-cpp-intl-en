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

#ifndef TENCENTCLOUD_TEO_V20220901_MODEL_QUERYCONDITION_H_
#define TENCENTCLOUD_TEO_V20220901_MODEL_QUERYCONDITION_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Teo
    {
        namespace V20220901
        {
            namespace Model
            {
                /**
                * The query condition
                */
                class QueryCondition : public AbstractModel
                {
                public:
                    QueryCondition();
                    ~QueryCondition() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取The key of QueryCondition.
                     * @return Key The key of QueryCondition.
                     */
                    std::string GetKey() const;

                    /**
                     * 设置The key of QueryCondition.
                     * @param Key The key of QueryCondition.
                     */
                    void SetKey(const std::string& _key);

                    /**
                     * 判断参数 Key 是否已赋值
                     * @return Key 是否已赋值
                     */
                    bool KeyHasBeenSet() const;

                    /**
                     * 获取The conditional operator. Values:
<li>`equals`: Equal to;</li>
<li>`notEquals`: Not equal to;</li>
<li>`include`: Contain;</li>
<li>`notInclude`: Not contain;</li>
<li>`startWith`: Start with;</li>
<li>`notStartWith`: Not start with;</li>
<li>`endWith`: End with;</li>
<li>`notEndWith`: Not end with.</li>
                     * @return Operator The conditional operator. Values:
<li>`equals`: Equal to;</li>
<li>`notEquals`: Not equal to;</li>
<li>`include`: Contain;</li>
<li>`notInclude`: Not contain;</li>
<li>`startWith`: Start with;</li>
<li>`notStartWith`: Not start with;</li>
<li>`endWith`: End with;</li>
<li>`notEndWith`: Not end with.</li>
                     */
                    std::string GetOperator() const;

                    /**
                     * 设置The conditional operator. Values:
<li>`equals`: Equal to;</li>
<li>`notEquals`: Not equal to;</li>
<li>`include`: Contain;</li>
<li>`notInclude`: Not contain;</li>
<li>`startWith`: Start with;</li>
<li>`notStartWith`: Not start with;</li>
<li>`endWith`: End with;</li>
<li>`notEndWith`: Not end with.</li>
                     * @param Operator The conditional operator. Values:
<li>`equals`: Equal to;</li>
<li>`notEquals`: Not equal to;</li>
<li>`include`: Contain;</li>
<li>`notInclude`: Not contain;</li>
<li>`startWith`: Start with;</li>
<li>`notStartWith`: Not start with;</li>
<li>`endWith`: End with;</li>
<li>`notEndWith`: Not end with.</li>
                     */
                    void SetOperator(const std::string& _operator);

                    /**
                     * 判断参数 Operator 是否已赋值
                     * @return Operator 是否已赋值
                     */
                    bool OperatorHasBeenSet() const;

                    /**
                     * 获取The value of QueryCondition.
                     * @return Value The value of QueryCondition.
                     */
                    std::vector<std::string> GetValue() const;

                    /**
                     * 设置The value of QueryCondition.
                     * @param Value The value of QueryCondition.
                     */
                    void SetValue(const std::vector<std::string>& _value);

                    /**
                     * 判断参数 Value 是否已赋值
                     * @return Value 是否已赋值
                     */
                    bool ValueHasBeenSet() const;

                private:

                    /**
                     * The key of QueryCondition.
                     */
                    std::string m_key;
                    bool m_keyHasBeenSet;

                    /**
                     * The conditional operator. Values:
<li>`equals`: Equal to;</li>
<li>`notEquals`: Not equal to;</li>
<li>`include`: Contain;</li>
<li>`notInclude`: Not contain;</li>
<li>`startWith`: Start with;</li>
<li>`notStartWith`: Not start with;</li>
<li>`endWith`: End with;</li>
<li>`notEndWith`: Not end with.</li>
                     */
                    std::string m_operator;
                    bool m_operatorHasBeenSet;

                    /**
                     * The value of QueryCondition.
                     */
                    std::vector<std::string> m_value;
                    bool m_valueHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220901_MODEL_QUERYCONDITION_H_
