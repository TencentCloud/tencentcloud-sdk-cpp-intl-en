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

#ifndef TENCENTCLOUD_WAF_V20180125_MODEL_CLBWAFREGIONITEM_H_
#define TENCENTCLOUD_WAF_V20180125_MODEL_CLBWAFREGIONITEM_H_

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
                * CLB-WAF Regional Information
                */
                class ClbWafRegionItem : public AbstractModel
                {
                public:
                    ClbWafRegionItem();
                    ~ClbWafRegionItem() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Region ID

Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Id Region ID

Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetId() const;

                    /**
                     * 设置Region ID

Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _id Region ID

Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetId(const std::string& _id);

                    /**
                     * 判断参数 Id 是否已赋值
                     * @return Id 是否已赋值
                     * 
                     */
                    bool IdHasBeenSet() const;

                    /**
                     * 获取Regional Chinese Description

Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Text Regional Chinese Description

Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetText() const;

                    /**
                     * 设置Regional Chinese Description

Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _text Regional Chinese Description

Note: This field may return null, indicating that no valid values can be obtained.
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
                     * 获取Full English Name of the Region

Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Value Full English Name of the Region

Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetValue() const;

                    /**
                     * 设置Full English Name of the Region

Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _value Full English Name of the Region

Note: This field may return null, indicating that no valid values can be obtained.
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
                     * 获取Region encoding

Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Code Region encoding

Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetCode() const;

                    /**
                     * 设置Region encoding

Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _code Region encoding

Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetCode(const std::string& _code);

                    /**
                     * 判断参数 Code 是否已赋值
                     * @return Code 是否已赋值
                     * 
                     */
                    bool CodeHasBeenSet() const;

                private:

                    /**
                     * Region ID

Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_id;
                    bool m_idHasBeenSet;

                    /**
                     * Regional Chinese Description

Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_text;
                    bool m_textHasBeenSet;

                    /**
                     * Full English Name of the Region

Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_value;
                    bool m_valueHasBeenSet;

                    /**
                     * Region encoding

Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_code;
                    bool m_codeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WAF_V20180125_MODEL_CLBWAFREGIONITEM_H_
