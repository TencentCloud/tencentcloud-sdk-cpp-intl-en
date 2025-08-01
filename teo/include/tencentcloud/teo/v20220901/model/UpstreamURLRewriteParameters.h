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

#ifndef TENCENTCLOUD_TEO_V20220901_MODEL_UPSTREAMURLREWRITEPARAMETERS_H_
#define TENCENTCLOUD_TEO_V20220901_MODEL_UPSTREAMURLREWRITEPARAMETERS_H_

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
                * Origin URL rewrite configuration parameters.
                */
                class UpstreamURLRewriteParameters : public AbstractModel
                {
                public:
                    UpstreamURLRewriteParameters();
                    ~UpstreamURLRewriteParameters() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Origin-Pull url rewriting type, only path is supported.
                     * @return Type Origin-Pull url rewriting type, only path is supported.
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置Origin-Pull url rewriting type, only path is supported.
                     * @param _type Origin-Pull url rewriting type, only path is supported.
                     * 
                     */
                    void SetType(const std::string& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     * 
                     */
                    bool TypeHasBeenSet() const;

                    /**
                     * 获取Origin-Pull url rewrite action. valid values are:.
<Li>`Replace`: replace the path prefix.</li>.
<Li>`AddPrefix`: add the path prefix.</li>.
<Li>`RmvPrefix`: remove the path prefix.</li>.
                     * @return Action Origin-Pull url rewrite action. valid values are:.
<Li>`Replace`: replace the path prefix.</li>.
<Li>`AddPrefix`: add the path prefix.</li>.
<Li>`RmvPrefix`: remove the path prefix.</li>.
                     * 
                     */
                    std::string GetAction() const;

                    /**
                     * 设置Origin-Pull url rewrite action. valid values are:.
<Li>`Replace`: replace the path prefix.</li>.
<Li>`AddPrefix`: add the path prefix.</li>.
<Li>`RmvPrefix`: remove the path prefix.</li>.
                     * @param _action Origin-Pull url rewrite action. valid values are:.
<Li>`Replace`: replace the path prefix.</li>.
<Li>`AddPrefix`: add the path prefix.</li>.
<Li>`RmvPrefix`: remove the path prefix.</li>.
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
                     * 获取Origin-Pull url rewrite value, maximum length 1024, must start with /.<br>note: when action is addprefix, it cannot end with /; when action is rmvprefix, * cannot be present.
                     * @return Value Origin-Pull url rewrite value, maximum length 1024, must start with /.<br>note: when action is addprefix, it cannot end with /; when action is rmvprefix, * cannot be present.
                     * 
                     */
                    std::string GetValue() const;

                    /**
                     * 设置Origin-Pull url rewrite value, maximum length 1024, must start with /.<br>note: when action is addprefix, it cannot end with /; when action is rmvprefix, * cannot be present.
                     * @param _value Origin-Pull url rewrite value, maximum length 1024, must start with /.<br>note: when action is addprefix, it cannot end with /; when action is rmvprefix, * cannot be present.
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
                     * Origin-Pull url rewriting type, only path is supported.
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * Origin-Pull url rewrite action. valid values are:.
<Li>`Replace`: replace the path prefix.</li>.
<Li>`AddPrefix`: add the path prefix.</li>.
<Li>`RmvPrefix`: remove the path prefix.</li>.
                     */
                    std::string m_action;
                    bool m_actionHasBeenSet;

                    /**
                     * Origin-Pull url rewrite value, maximum length 1024, must start with /.<br>note: when action is addprefix, it cannot end with /; when action is rmvprefix, * cannot be present.
                     */
                    std::string m_value;
                    bool m_valueHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220901_MODEL_UPSTREAMURLREWRITEPARAMETERS_H_
