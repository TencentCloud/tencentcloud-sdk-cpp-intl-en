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

#ifndef TENCENTCLOUD_TEO_V20220901_MODEL_HEADERACTION_H_
#define TENCENTCLOUD_TEO_V20220901_MODEL_HEADERACTION_H_

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
                * HTTP header setting rules.
                */
                class HeaderAction : public AbstractModel
                {
                public:
                    HeaderAction();
                    ~HeaderAction() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取HTTP header setting methods. valid values are:.
<Li>`Set`: sets a value for an existing header parameter;</li>.
<Li>`Del`: deletes a header parameter;</li>.
<Li>`Add`: adds a header parameter.</li>.
                     * @return Action HTTP header setting methods. valid values are:.
<Li>`Set`: sets a value for an existing header parameter;</li>.
<Li>`Del`: deletes a header parameter;</li>.
<Li>`Add`: adds a header parameter.</li>.
                     * 
                     */
                    std::string GetAction() const;

                    /**
                     * 设置HTTP header setting methods. valid values are:.
<Li>`Set`: sets a value for an existing header parameter;</li>.
<Li>`Del`: deletes a header parameter;</li>.
<Li>`Add`: adds a header parameter.</li>.
                     * @param _action HTTP header setting methods. valid values are:.
<Li>`Set`: sets a value for an existing header parameter;</li>.
<Li>`Del`: deletes a header parameter;</li>.
<Li>`Add`: adds a header parameter.</li>.
                     * 
                     */
                    void SetAction(const std::string& _action);

                    /**
                     * 判断参数 Action 是否已赋值
                     * @return Action 是否已赋值
                     * 
                     */
                    bool ActionHasBeenSet() const;

                    /**
                     * 获取HTTP header name.
                     * @return Name HTTP header name.
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置HTTP header name.
                     * @param _name HTTP header name.
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
                     * 获取HTTP header value. this parameter is required when the action is set to `set` or `add`; it is optional when the action is set to `del`.
                     * @return Value HTTP header value. this parameter is required when the action is set to `set` or `add`; it is optional when the action is set to `del`.
                     * 
                     */
                    std::string GetValue() const;

                    /**
                     * 设置HTTP header value. this parameter is required when the action is set to `set` or `add`; it is optional when the action is set to `del`.
                     * @param _value HTTP header value. this parameter is required when the action is set to `set` or `add`; it is optional when the action is set to `del`.
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
                     * HTTP header setting methods. valid values are:.
<Li>`Set`: sets a value for an existing header parameter;</li>.
<Li>`Del`: deletes a header parameter;</li>.
<Li>`Add`: adds a header parameter.</li>.
                     */
                    std::string m_action;
                    bool m_actionHasBeenSet;

                    /**
                     * HTTP header name.
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * HTTP header value. this parameter is required when the action is set to `set` or `add`; it is optional when the action is set to `del`.
                     */
                    std::string m_value;
                    bool m_valueHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220901_MODEL_HEADERACTION_H_
