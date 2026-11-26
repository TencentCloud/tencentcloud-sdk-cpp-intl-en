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

#ifndef TENCENTCLOUD_TEO_V20220901_MODEL_HOSTNAME_H_
#define TENCENTCLOUD_TEO_V20220901_MODEL_HOSTNAME_H_

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
                * HostName configuration parameter for access URL redirection.
                */
                class HostName : public AbstractModel
                {
                public:
                    HostName();
                    ~HostName() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Target HostName configuration. Valid values:
<li>follow: follow request;</li>
<li>custom: Custom.</li>
                     * @return Action Target HostName configuration. Valid values:
<li>follow: follow request;</li>
<li>custom: Custom.</li>
                     * 
                     */
                    std::string GetAction() const;

                    /**
                     * 设置Target HostName configuration. Valid values:
<li>follow: follow request;</li>
<li>custom: Custom.</li>
                     * @param _action Target HostName configuration. Valid values:
<li>follow: follow request;</li>
<li>custom: Custom.</li>
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
                     * 获取custom value of the target HostName. Maximum length: 1024.<br>Note: This field is required when Action is custom, and it is ineffective when Action is follow.
                     * @return Value custom value of the target HostName. Maximum length: 1024.<br>Note: This field is required when Action is custom, and it is ineffective when Action is follow.
                     * 
                     */
                    std::string GetValue() const;

                    /**
                     * 设置custom value of the target HostName. Maximum length: 1024.<br>Note: This field is required when Action is custom, and it is ineffective when Action is follow.
                     * @param _value custom value of the target HostName. Maximum length: 1024.<br>Note: This field is required when Action is custom, and it is ineffective when Action is follow.
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
                     * Target HostName configuration. Valid values:
<li>follow: follow request;</li>
<li>custom: Custom.</li>
                     */
                    std::string m_action;
                    bool m_actionHasBeenSet;

                    /**
                     * custom value of the target HostName. Maximum length: 1024.<br>Note: This field is required when Action is custom, and it is ineffective when Action is follow.
                     */
                    std::string m_value;
                    bool m_valueHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220901_MODEL_HOSTNAME_H_
