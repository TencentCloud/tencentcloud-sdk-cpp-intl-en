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

#ifndef TENCENTCLOUD_DLC_V20210125_MODEL_DATAENGINECONFIGPAIR_H_
#define TENCENTCLOUD_DLC_V20210125_MODEL_DATAENGINECONFIGPAIR_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Dlc
    {
        namespace V20210125
        {
            namespace Model
            {
                /**
                * Engine configurations
                */
                class DataEngineConfigPair : public AbstractModel
                {
                public:
                    DataEngineConfigPair();
                    ~DataEngineConfigPair() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Configuration items
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return ConfigItem Configuration items
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetConfigItem() const;

                    /**
                     * 设置Configuration items
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _configItem Configuration items
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetConfigItem(const std::string& _configItem);

                    /**
                     * 判断参数 ConfigItem 是否已赋值
                     * @return ConfigItem 是否已赋值
                     * 
                     */
                    bool ConfigItemHasBeenSet() const;

                    /**
                     * 获取Configuration values
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return ConfigValue Configuration values
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetConfigValue() const;

                    /**
                     * 设置Configuration values
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _configValue Configuration values
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetConfigValue(const std::string& _configValue);

                    /**
                     * 判断参数 ConfigValue 是否已赋值
                     * @return ConfigValue 是否已赋值
                     * 
                     */
                    bool ConfigValueHasBeenSet() const;

                private:

                    /**
                     * Configuration items
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_configItem;
                    bool m_configItemHasBeenSet;

                    /**
                     * Configuration values
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_configValue;
                    bool m_configValueHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DLC_V20210125_MODEL_DATAENGINECONFIGPAIR_H_
