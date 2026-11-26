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

#ifndef TENCENTCLOUD_TEO_V20220901_MODEL_RULECODEACTIONPARAMS_H_
#define TENCENTCLOUD_TEO_V20220901_MODEL_RULECODEACTIONPARAMS_H_

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
                * Rule engine condition uses the StatusCode field action parameter
                */
                class RuleCodeActionParams : public AbstractModel
                {
                public:
                    RuleCodeActionParams();
                    ~RuleCodeActionParams() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Status Code.
                     * @return StatusCode Status Code.
                     * 
                     */
                    int64_t GetStatusCode() const;

                    /**
                     * 设置Status Code.
                     * @param _statusCode Status Code.
                     * 
                     */
                    void SetStatusCode(const int64_t& _statusCode);

                    /**
                     * 判断参数 StatusCode 是否已赋值
                     * @return StatusCode 是否已赋值
                     * 
                     */
                    bool StatusCodeHasBeenSet() const;

                    /**
                     * 获取Parameter name. For parameter completion specifications, call the api [Query parameter settings of the rule engine](https://www.tencentcloud.com/document/product/1552/80618?from_cn_redirect=1) to view.
                     * @return Name Parameter name. For parameter completion specifications, call the api [Query parameter settings of the rule engine](https://www.tencentcloud.com/document/product/1552/80618?from_cn_redirect=1) to view.
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置Parameter name. For parameter completion specifications, call the api [Query parameter settings of the rule engine](https://www.tencentcloud.com/document/product/1552/80618?from_cn_redirect=1) to view.
                     * @param _name Parameter name. For parameter completion specifications, call the api [Query parameter settings of the rule engine](https://www.tencentcloud.com/document/product/1552/80618?from_cn_redirect=1) to view.
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
                     * 获取Parameter value.
                     * @return Values Parameter value.
                     * 
                     */
                    std::vector<std::string> GetValues() const;

                    /**
                     * 设置Parameter value.
                     * @param _values Parameter value.
                     * 
                     */
                    void SetValues(const std::vector<std::string>& _values);

                    /**
                     * 判断参数 Values 是否已赋值
                     * @return Values 是否已赋值
                     * 
                     */
                    bool ValuesHasBeenSet() const;

                private:

                    /**
                     * Status Code.
                     */
                    int64_t m_statusCode;
                    bool m_statusCodeHasBeenSet;

                    /**
                     * Parameter name. For parameter completion specifications, call the api [Query parameter settings of the rule engine](https://www.tencentcloud.com/document/product/1552/80618?from_cn_redirect=1) to view.
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * Parameter value.
                     */
                    std::vector<std::string> m_values;
                    bool m_valuesHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220901_MODEL_RULECODEACTIONPARAMS_H_
