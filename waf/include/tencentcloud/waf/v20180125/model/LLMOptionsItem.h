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

#ifndef TENCENTCLOUD_WAF_V20180125_MODEL_LLMOPTIONSITEM_H_
#define TENCENTCLOUD_WAF_V20180125_MODEL_LLMOPTIONSITEM_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/waf/v20180125/model/Area.h>


namespace TencentCloud
{
    namespace Waf
    {
        namespace V20180125
        {
            namespace Model
            {
                /**
                * Effective condition of the LLM rule.
                */
                class LLMOptionsItem : public AbstractModel
                {
                public:
                    LLMOptionsItem();
                    ~LLMOptionsItem() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Key.
                     * @return Key Key.
                     * 
                     */
                    std::string GetKey() const;

                    /**
                     * 设置Key.
                     * @param _key Key.
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
                     * 获取Operator.
                     * @return Op Operator.
                     * 
                     */
                    std::string GetOp() const;

                    /**
                     * 设置Operator.
                     * @param _op Operator.
                     * 
                     */
                    void SetOp(const std::string& _op);

                    /**
                     * 判断参数 Op 是否已赋值
                     * @return Op 是否已赋值
                     * 
                     */
                    bool OpHasBeenSet() const;

                    /**
                     * 获取Value.
                     * @return Value Value.
                     * 
                     */
                    std::vector<std::string> GetValue() const;

                    /**
                     * 设置Value.
                     * @param _value Value.
                     * 
                     */
                    void SetValue(const std::vector<std::string>& _value);

                    /**
                     * 判断参数 Value 是否已赋值
                     * @return Value 是否已赋值
                     * 
                     */
                    bool ValueHasBeenSet() const;

                    /**
                     * 获取Use with Header Parameter Value
                     * @return Name Use with Header Parameter Value
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置Use with Header Parameter Value
                     * @param _name Use with Header Parameter Value
                     * 
                     */
                    void SetName(const std::string& _name);

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     * 
                     */
                    bool NameHasBeenSet() const;

                    /**
                     * 获取Region selection
                     * @return Areas Region selection
                     * 
                     */
                    std::vector<Area> GetAreas() const;

                    /**
                     * 设置Region selection
                     * @param _areas Region selection
                     * 
                     */
                    void SetAreas(const std::vector<Area>& _areas);

                    /**
                     * 判断参数 Areas 是否已赋值
                     * @return Areas 是否已赋值
                     * 
                     */
                    bool AreasHasBeenSet() const;

                private:

                    /**
                     * Key.
                     */
                    std::string m_key;
                    bool m_keyHasBeenSet;

                    /**
                     * Operator.
                     */
                    std::string m_op;
                    bool m_opHasBeenSet;

                    /**
                     * Value.
                     */
                    std::vector<std::string> m_value;
                    bool m_valueHasBeenSet;

                    /**
                     * Use with Header Parameter Value
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * Region selection
                     */
                    std::vector<Area> m_areas;
                    bool m_areasHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WAF_V20180125_MODEL_LLMOPTIONSITEM_H_
