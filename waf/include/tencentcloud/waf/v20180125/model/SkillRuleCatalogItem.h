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

#ifndef TENCENTCLOUD_WAF_V20180125_MODEL_SKILLRULECATALOGITEM_H_
#define TENCENTCLOUD_WAF_V20180125_MODEL_SKILLRULECATALOGITEM_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Waf
    {
        namespace V20180125
        {
            namespace Model
            {
                /**
                * List of hit rules for skill detection
                */
                class SkillRuleCatalogItem : public AbstractModel
                {
                public:
                    SkillRuleCatalogItem();
                    ~SkillRuleCatalogItem() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>Rule category identifier (such as static_analysis and ai_analysis)</p>
                     * @return Key <p>Rule category identifier (such as static_analysis and ai_analysis)</p>
                     * 
                     */
                    std::string GetKey() const;

                    /**
                     * 设置<p>Rule category identifier (such as static_analysis and ai_analysis)</p>
                     * @param _key <p>Rule category identifier (such as static_analysis and ai_analysis)</p>
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
                     * 获取<p>Chinese name of the rule category</p>
                     * @return Value <p>Chinese name of the rule category</p>
                     * 
                     */
                    std::string GetValue() const;

                    /**
                     * 设置<p>Chinese name of the rule category</p>
                     * @param _value <p>Chinese name of the rule category</p>
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
                     * <p>Rule category identifier (such as static_analysis and ai_analysis)</p>
                     */
                    std::string m_key;
                    bool m_keyHasBeenSet;

                    /**
                     * <p>Chinese name of the rule category</p>
                     */
                    std::string m_value;
                    bool m_valueHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WAF_V20180125_MODEL_SKILLRULECATALOGITEM_H_
