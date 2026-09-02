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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_RULESTATISTICSITEM_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_RULESTATISTICSITEM_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Csip
    {
        namespace V20221121
        {
            namespace Model
            {
                /**
                * Statistical information of rules
                */
                class RuleStatisticsItem : public AbstractModel
                {
                public:
                    RuleStatisticsItem();
                    ~RuleStatisticsItem() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>Name.</p>
                     * @return Text <p>Name.</p>
                     * 
                     */
                    std::string GetText() const;

                    /**
                     * 设置<p>Name.</p>
                     * @param _text <p>Name.</p>
                     * 
                     */
                    void SetText(const std::string& _text);

                    /**
                     * 判断参数 Text 是否已赋值
                     * @return Text 是否已赋值
                     * 
                     */
                    bool TextHasBeenSet() const;

                    /**
                     * 获取<p>Value.</p>
                     * @return Value <p>Value.</p>
                     * 
                     */
                    std::string GetValue() const;

                    /**
                     * 设置<p>Value.</p>
                     * @param _value <p>Value.</p>
                     * 
                     */
                    void SetValue(const std::string& _value);

                    /**
                     * 判断参数 Value 是否已赋值
                     * @return Value 是否已赋值
                     * 
                     */
                    bool ValueHasBeenSet() const;

                    /**
                     * 获取<p>Statistical information</p>
                     * @return Count <p>Statistical information</p>
                     * 
                     */
                    std::string GetCount() const;

                    /**
                     * 设置<p>Statistical information</p>
                     * @param _count <p>Statistical information</p>
                     * 
                     */
                    void SetCount(const std::string& _count);

                    /**
                     * 判断参数 Count 是否已赋值
                     * @return Count 是否已赋值
                     * 
                     */
                    bool CountHasBeenSet() const;

                private:

                    /**
                     * <p>Name.</p>
                     */
                    std::string m_text;
                    bool m_textHasBeenSet;

                    /**
                     * <p>Value.</p>
                     */
                    std::string m_value;
                    bool m_valueHasBeenSet;

                    /**
                     * <p>Statistical information</p>
                     */
                    std::string m_count;
                    bool m_countHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_RULESTATISTICSITEM_H_
