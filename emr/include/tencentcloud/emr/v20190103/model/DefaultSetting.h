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

#ifndef TENCENTCLOUD_EMR_V20190103_MODEL_DEFAULTSETTING_H_
#define TENCENTCLOUD_EMR_V20190103_MODEL_DEFAULTSETTING_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Emr
    {
        namespace V20190103
        {
            namespace Model
            {
                /**
                * Default configurations of resource scheduling.
                */
                class DefaultSetting : public AbstractModel
                {
                public:
                    DefaultSetting();
                    ~DefaultSetting() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Name: the key for input parameters.
                     * @return Name Name: the key for input parameters.
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置Name: the key for input parameters.
                     * @param _name Name: the key for input parameters.
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
                     * 获取Description.
                     * @return Desc Description.
                     * 
                     */
                    std::string GetDesc() const;

                    /**
                     * 设置Description.
                     * @param _desc Description.
                     * 
                     */
                    void SetDesc(const std::string& _desc);

                    /**
                     * 判断参数 Desc 是否已赋值
                     * @return Desc 是否已赋值
                     * 
                     */
                    bool DescHasBeenSet() const;

                    /**
                     * 获取Prompt.
                     * @return Prompt Prompt.
                     * 
                     */
                    std::string GetPrompt() const;

                    /**
                     * 设置Prompt.
                     * @param _prompt Prompt.
                     * 
                     */
                    void SetPrompt(const std::string& _prompt);

                    /**
                     * 判断参数 Prompt 是否已赋值
                     * @return Prompt 是否已赋值
                     * 
                     */
                    bool PromptHasBeenSet() const;

                    /**
                     * 获取Key: display the configuration item in the configuration file.
                     * @return Key Key: display the configuration item in the configuration file.
                     * 
                     */
                    std::string GetKey() const;

                    /**
                     * 设置Key: display the configuration item in the configuration file.
                     * @param _key Key: display the configuration item in the configuration file.
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
                     * 获取Name value.
                     * @return Value Name value.
                     * 
                     */
                    std::string GetValue() const;

                    /**
                     * 设置Name value.
                     * @param _value Name value.
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
                     * Name: the key for input parameters.
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * Description.
                     */
                    std::string m_desc;
                    bool m_descHasBeenSet;

                    /**
                     * Prompt.
                     */
                    std::string m_prompt;
                    bool m_promptHasBeenSet;

                    /**
                     * Key: display the configuration item in the configuration file.
                     */
                    std::string m_key;
                    bool m_keyHasBeenSet;

                    /**
                     * Name value.
                     */
                    std::string m_value;
                    bool m_valueHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_EMR_V20190103_MODEL_DEFAULTSETTING_H_
