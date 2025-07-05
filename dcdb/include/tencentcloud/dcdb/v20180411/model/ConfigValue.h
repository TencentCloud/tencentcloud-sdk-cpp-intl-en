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

#ifndef TENCENTCLOUD_DCDB_V20180411_MODEL_CONFIGVALUE_H_
#define TENCENTCLOUD_DCDB_V20180411_MODEL_CONFIGVALUE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Dcdb
    {
        namespace V20180411
        {
            namespace Model
            {
                /**
                * Configuration information,  which contains `Config` and `Value`.
                */
                class ConfigValue : public AbstractModel
                {
                public:
                    ConfigValue();
                    ~ConfigValue() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Configuration name, which supports `max_user_connections`.
                     * @return Config Configuration name, which supports `max_user_connections`.
                     * 
                     */
                    std::string GetConfig() const;

                    /**
                     * 设置Configuration name, which supports `max_user_connections`.
                     * @param _config Configuration name, which supports `max_user_connections`.
                     * 
                     */
                    void SetConfig(const std::string& _config);

                    /**
                     * 判断参数 Config 是否已赋值
                     * @return Config 是否已赋值
                     * 
                     */
                    bool ConfigHasBeenSet() const;

                    /**
                     * 获取Configuration value
                     * @return Value Configuration value
                     * 
                     */
                    std::string GetValue() const;

                    /**
                     * 设置Configuration value
                     * @param _value Configuration value
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
                     * Configuration name, which supports `max_user_connections`.
                     */
                    std::string m_config;
                    bool m_configHasBeenSet;

                    /**
                     * Configuration value
                     */
                    std::string m_value;
                    bool m_valueHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DCDB_V20180411_MODEL_CONFIGVALUE_H_
