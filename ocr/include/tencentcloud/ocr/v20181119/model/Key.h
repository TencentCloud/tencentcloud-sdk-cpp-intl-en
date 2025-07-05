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

#ifndef TENCENTCLOUD_OCR_V20181119_MODEL_KEY_H_
#define TENCENTCLOUD_OCR_V20181119_MODEL_KEY_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Ocr
    {
        namespace V20181119
        {
            namespace Model
            {
                /**
                * Key information
                */
                class Key : public AbstractModel
                {
                public:
                    Key();
                    ~Key() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取The name of the recognized field.
                     * @return AutoName The name of the recognized field.
                     * 
                     */
                    std::string GetAutoName() const;

                    /**
                     * 设置The name of the recognized field.
                     * @param _autoName The name of the recognized field.
                     * 
                     */
                    void SetAutoName(const std::string& _autoName);

                    /**
                     * 判断参数 AutoName 是否已赋值
                     * @return AutoName 是否已赋值
                     * 
                     */
                    bool AutoNameHasBeenSet() const;

                    /**
                     * 获取The name of a defined field (the key passed in).
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return ConfigName The name of a defined field (the key passed in).
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetConfigName() const;

                    /**
                     * 设置The name of a defined field (the key passed in).
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _configName The name of a defined field (the key passed in).
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetConfigName(const std::string& _configName);

                    /**
                     * 判断参数 ConfigName 是否已赋值
                     * @return ConfigName 是否已赋值
                     * 
                     */
                    bool ConfigNameHasBeenSet() const;

                private:

                    /**
                     * The name of the recognized field.
                     */
                    std::string m_autoName;
                    bool m_autoNameHasBeenSet;

                    /**
                     * The name of a defined field (the key passed in).
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_configName;
                    bool m_configNameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_OCR_V20181119_MODEL_KEY_H_
