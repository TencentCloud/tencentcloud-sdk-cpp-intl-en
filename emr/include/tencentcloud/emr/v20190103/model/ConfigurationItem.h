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

#ifndef TENCENTCLOUD_EMR_V20190103_MODEL_CONFIGURATIONITEM_H_
#define TENCENTCLOUD_EMR_V20190103_MODEL_CONFIGURATIONITEM_H_

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
                * Configuration item (configuration management page).
                */
                class ConfigurationItem : public AbstractModel
                {
                public:
                    ConfigurationItem();
                    ~ConfigurationItem() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Configuration item name.
                     * @return Name Configuration item name.
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置Configuration item name.
                     * @param _name Configuration item name.
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
                     * 获取Configuration item value.
                     * @return Value Configuration item value.
                     * 
                     */
                    std::string GetValue() const;

                    /**
                     * 设置Configuration item value.
                     * @param _value Configuration item value.
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
                     * 获取Name of the configuration file where the configuration item is located.
                     * @return InFile Name of the configuration file where the configuration item is located.
                     * 
                     */
                    std::string GetInFile() const;

                    /**
                     * 设置Name of the configuration file where the configuration item is located.
                     * @param _inFile Name of the configuration file where the configuration item is located.
                     * 
                     */
                    void SetInFile(const std::string& _inFile);

                    /**
                     * 判断参数 InFile 是否已赋值
                     * @return InFile 是否已赋值
                     * 
                     */
                    bool InFileHasBeenSet() const;

                private:

                    /**
                     * Configuration item name.
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * Configuration item value.
                     */
                    std::string m_value;
                    bool m_valueHasBeenSet;

                    /**
                     * Name of the configuration file where the configuration item is located.
                     */
                    std::string m_inFile;
                    bool m_inFileHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_EMR_V20190103_MODEL_CONFIGURATIONITEM_H_
