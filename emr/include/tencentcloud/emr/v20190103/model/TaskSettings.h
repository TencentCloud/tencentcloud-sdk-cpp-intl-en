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

#ifndef TENCENTCLOUD_EMR_V20190103_MODEL_TASKSETTINGS_H_
#define TENCENTCLOUD_EMR_V20190103_MODEL_TASKSETTINGS_H_

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
                * Inspection task parameter.
                */
                class TaskSettings : public AbstractModel
                {
                public:
                    TaskSettings();
                    ~TaskSettings() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Parameter name.
                     * @return Name Parameter name.
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置Parameter name.
                     * @param _name Parameter name.
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
                     * @return Value Parameter value.
                     * 
                     */
                    std::string GetValue() const;

                    /**
                     * 设置Parameter value.
                     * @param _value Parameter value.
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
                     * 获取Unique parameter identifier.
                     * @return Key Unique parameter identifier.
                     * 
                     */
                    std::string GetKey() const;

                    /**
                     * 设置Unique parameter identifier.
                     * @param _key Unique parameter identifier.
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
                     * 获取Whether it is editable, "true" or "false".
                     * @return Editable Whether it is editable, "true" or "false".
                     * 
                     */
                    std::string GetEditable() const;

                    /**
                     * 设置Whether it is editable, "true" or "false".
                     * @param _editable Whether it is editable, "true" or "false".
                     * 
                     */
                    void SetEditable(const std::string& _editable);

                    /**
                     * 判断参数 Editable 是否已赋值
                     * @return Editable 是否已赋值
                     * 
                     */
                    bool EditableHasBeenSet() const;

                private:

                    /**
                     * Parameter name.
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * Parameter value.
                     */
                    std::string m_value;
                    bool m_valueHasBeenSet;

                    /**
                     * Unique parameter identifier.
                     */
                    std::string m_key;
                    bool m_keyHasBeenSet;

                    /**
                     * Whether it is editable, "true" or "false".
                     */
                    std::string m_editable;
                    bool m_editableHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_EMR_V20190103_MODEL_TASKSETTINGS_H_
