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

#ifndef TENCENTCLOUD_TEO_V20220901_MODEL_RULECONDITION_H_
#define TENCENTCLOUD_TEO_V20220901_MODEL_RULECONDITION_H_

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
                * Rule engine condition parameters
                */
                class RuleCondition : public AbstractModel
                {
                public:
                    RuleCondition();
                    ~RuleCondition() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Operator. Valid values:
<li>equal: Equal to.</li>
<li>notequal: Not equal to.</li>
                     * @return Operator Operator. Valid values:
<li>equal: Equal to.</li>
<li>notequal: Not equal to.</li>
                     */
                    std::string GetOperator() const;

                    /**
                     * 设置Operator. Valid values:
<li>equal: Equal to.</li>
<li>notequal: Not equal to.</li>
                     * @param Operator Operator. Valid values:
<li>equal: Equal to.</li>
<li>notequal: Not equal to.</li>
                     */
                    void SetOperator(const std::string& _operator);

                    /**
                     * 判断参数 Operator 是否已赋值
                     * @return Operator 是否已赋值
                     */
                    bool OperatorHasBeenSet() const;

                    /**
                     * 获取Match type. Valid values:
<li>`host`: All</li>
<li>`filename`: File name</li>
<li>`extension`: File extension</li>
<li>`host`: HOST: .</li>
<li>`full_url`: The full URL of the current site. It must contain the HTTP protocol, host, and path.</li>
<li>`url`: The URL path of the current site.</li>
                     * @return Target Match type. Valid values:
<li>`host`: All</li>
<li>`filename`: File name</li>
<li>`extension`: File extension</li>
<li>`host`: HOST: .</li>
<li>`full_url`: The full URL of the current site. It must contain the HTTP protocol, host, and path.</li>
<li>`url`: The URL path of the current site.</li>
                     */
                    std::string GetTarget() const;

                    /**
                     * 设置Match type. Valid values:
<li>`host`: All</li>
<li>`filename`: File name</li>
<li>`extension`: File extension</li>
<li>`host`: HOST: .</li>
<li>`full_url`: The full URL of the current site. It must contain the HTTP protocol, host, and path.</li>
<li>`url`: The URL path of the current site.</li>
                     * @param Target Match type. Valid values:
<li>`host`: All</li>
<li>`filename`: File name</li>
<li>`extension`: File extension</li>
<li>`host`: HOST: .</li>
<li>`full_url`: The full URL of the current site. It must contain the HTTP protocol, host, and path.</li>
<li>`url`: The URL path of the current site.</li>
                     */
                    void SetTarget(const std::string& _target);

                    /**
                     * 判断参数 Target 是否已赋值
                     * @return Target 是否已赋值
                     */
                    bool TargetHasBeenSet() const;

                    /**
                     * 获取Parameter values of the match type. Each match type has the following valid values:
<li>`Target=extension`:  The extension of the file, such as `jpg` and `txt`.</li>
<li>`Target=filename`: The file name without the extension.</li>
<li>`Target=host`: Values can be `all` 
or a host, such as `www.maxx55.com`.</li>
<li>`Target=url`: A URL request path under the current site, such as `/example`.</li>
<li>`Target=full_url`: A complete URL request under the current site. It must contain the protocol, host, and path, such as `https://www.maxx55.cn/example`.</li>
                     * @return Values Parameter values of the match type. Each match type has the following valid values:
<li>`Target=extension`:  The extension of the file, such as `jpg` and `txt`.</li>
<li>`Target=filename`: The file name without the extension.</li>
<li>`Target=host`: Values can be `all` 
or a host, such as `www.maxx55.com`.</li>
<li>`Target=url`: A URL request path under the current site, such as `/example`.</li>
<li>`Target=full_url`: A complete URL request under the current site. It must contain the protocol, host, and path, such as `https://www.maxx55.cn/example`.</li>
                     */
                    std::vector<std::string> GetValues() const;

                    /**
                     * 设置Parameter values of the match type. Each match type has the following valid values:
<li>`Target=extension`:  The extension of the file, such as `jpg` and `txt`.</li>
<li>`Target=filename`: The file name without the extension.</li>
<li>`Target=host`: Values can be `all` 
or a host, such as `www.maxx55.com`.</li>
<li>`Target=url`: A URL request path under the current site, such as `/example`.</li>
<li>`Target=full_url`: A complete URL request under the current site. It must contain the protocol, host, and path, such as `https://www.maxx55.cn/example`.</li>
                     * @param Values Parameter values of the match type. Each match type has the following valid values:
<li>`Target=extension`:  The extension of the file, such as `jpg` and `txt`.</li>
<li>`Target=filename`: The file name without the extension.</li>
<li>`Target=host`: Values can be `all` 
or a host, such as `www.maxx55.com`.</li>
<li>`Target=url`: A URL request path under the current site, such as `/example`.</li>
<li>`Target=full_url`: A complete URL request under the current site. It must contain the protocol, host, and path, such as `https://www.maxx55.cn/example`.</li>
                     */
                    void SetValues(const std::vector<std::string>& _values);

                    /**
                     * 判断参数 Values 是否已赋值
                     * @return Values 是否已赋值
                     */
                    bool ValuesHasBeenSet() const;

                private:

                    /**
                     * Operator. Valid values:
<li>equal: Equal to.</li>
<li>notequal: Not equal to.</li>
                     */
                    std::string m_operator;
                    bool m_operatorHasBeenSet;

                    /**
                     * Match type. Valid values:
<li>`host`: All</li>
<li>`filename`: File name</li>
<li>`extension`: File extension</li>
<li>`host`: HOST: .</li>
<li>`full_url`: The full URL of the current site. It must contain the HTTP protocol, host, and path.</li>
<li>`url`: The URL path of the current site.</li>
                     */
                    std::string m_target;
                    bool m_targetHasBeenSet;

                    /**
                     * Parameter values of the match type. Each match type has the following valid values:
<li>`Target=extension`:  The extension of the file, such as `jpg` and `txt`.</li>
<li>`Target=filename`: The file name without the extension.</li>
<li>`Target=host`: Values can be `all` 
or a host, such as `www.maxx55.com`.</li>
<li>`Target=url`: A URL request path under the current site, such as `/example`.</li>
<li>`Target=full_url`: A complete URL request under the current site. It must contain the protocol, host, and path, such as `https://www.maxx55.cn/example`.</li>
                     */
                    std::vector<std::string> m_values;
                    bool m_valuesHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220901_MODEL_RULECONDITION_H_
