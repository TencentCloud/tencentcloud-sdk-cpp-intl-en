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

#ifndef TENCENTCLOUD_LKE_V20231130_MODEL_LISTAPPCATEGORYRSPOPTION_H_
#define TENCENTCLOUD_LKE_V20231130_MODEL_LISTAPPCATEGORYRSPOPTION_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Lke
    {
        namespace V20231130
        {
            namespace Model
            {
                /**
                * Application type details.
                */
                class ListAppCategoryRspOption : public AbstractModel
                {
                public:
                    ListAppCategoryRspOption();
                    ~ListAppCategoryRspOption() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Type name.
                     * @return Text Type name.
                     * 
                     */
                    std::string GetText() const;

                    /**
                     * 设置Type name.
                     * @param _text Type name.
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
                     * 获取Type value.
                     * @return Value Type value.
                     * 
                     */
                    std::string GetValue() const;

                    /**
                     * 设置Type value.
                     * @param _value Type value.
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
                     * 获取Type log.
                     * @return Logo Type log.
                     * 
                     */
                    std::string GetLogo() const;

                    /**
                     * 设置Type log.
                     * @param _logo Type log.
                     * 
                     */
                    void SetLogo(const std::string& _logo);

                    /**
                     * 判断参数 Logo 是否已赋值
                     * @return Logo 是否已赋值
                     * 
                     */
                    bool LogoHasBeenSet() const;

                private:

                    /**
                     * Type name.
                     */
                    std::string m_text;
                    bool m_textHasBeenSet;

                    /**
                     * Type value.
                     */
                    std::string m_value;
                    bool m_valueHasBeenSet;

                    /**
                     * Type log.
                     */
                    std::string m_logo;
                    bool m_logoHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_LKE_V20231130_MODEL_LISTAPPCATEGORYRSPOPTION_H_
