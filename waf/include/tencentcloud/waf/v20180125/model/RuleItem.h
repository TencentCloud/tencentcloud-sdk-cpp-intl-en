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

#ifndef TENCENTCLOUD_WAF_V20180125_MODEL_RULEITEM_H_
#define TENCENTCLOUD_WAF_V20180125_MODEL_RULEITEM_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/waf/v20180125/model/ValueLevel.h>


namespace TencentCloud
{
    namespace Waf
    {
        namespace V20180125
        {
            namespace Model
            {
                /**
                * LLM detection content matching.
                */
                class RuleItem : public AbstractModel
                {
                public:
                    RuleItem();
                    ~RuleItem() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取 Information Type
                     * @return Key  Information Type
                     * 
                     */
                    std::string GetKey() const;

                    /**
                     * 设置 Information Type
                     * @param _key  Information Type
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
                     * 获取 Operator. Default value: Contains.

                     * @return Op  Operator. Default value: Contains.

                     * 
                     */
                    std::string GetOp() const;

                    /**
                     * 设置 Operator. Default value: Contains.

                     * @param _op  Operator. Default value: Contains.

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
                     * 获取Information Type
                     * @return Value Information Type
                     * 
                     */
                    std::vector<std::string> GetValue() const;

                    /**
                     * 设置Information Type
                     * @param _value Information Type
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
                     * 获取Information type.
                     * @return Levels Information type.
                     * 
                     */
                    std::vector<ValueLevel> GetLevels() const;

                    /**
                     * 设置Information type.
                     * @param _levels Information type.
                     * 
                     */
                    void SetLevels(const std::vector<ValueLevel>& _levels);

                    /**
                     * 判断参数 Levels 是否已赋值
                     * @return Levels 是否已赋值
                     * 
                     */
                    bool LevelsHasBeenSet() const;

                    /**
                     * 获取Toolcall tool parameter name. Supports multi-level paths (such as apiData.operate_op). Only used for the tool_args information type.
                     * @return Name Toolcall tool parameter name. Supports multi-level paths (such as apiData.operate_op). Only used for the tool_args information type.
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置Toolcall tool parameter name. Supports multi-level paths (such as apiData.operate_op). Only used for the tool_args information type.
                     * @param _name Toolcall tool parameter name. Supports multi-level paths (such as apiData.operate_op). Only used for the tool_args information type.
                     * 
                     */
                    void SetName(const std::string& _name);

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     * 
                     */
                    bool NameHasBeenSet() const;

                private:

                    /**
                     *  Information Type
                     */
                    std::string m_key;
                    bool m_keyHasBeenSet;

                    /**
                     *  Operator. Default value: Contains.

                     */
                    std::string m_op;
                    bool m_opHasBeenSet;

                    /**
                     * Information Type
                     */
                    std::vector<std::string> m_value;
                    bool m_valueHasBeenSet;

                    /**
                     * Information type.
                     */
                    std::vector<ValueLevel> m_levels;
                    bool m_levelsHasBeenSet;

                    /**
                     * Toolcall tool parameter name. Supports multi-level paths (such as apiData.operate_op). Only used for the tool_args information type.
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WAF_V20180125_MODEL_RULEITEM_H_
