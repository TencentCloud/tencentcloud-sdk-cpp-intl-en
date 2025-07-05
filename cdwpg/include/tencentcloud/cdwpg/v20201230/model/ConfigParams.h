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

#ifndef TENCENTCLOUD_CDWPG_V20201230_MODEL_CONFIGPARAMS_H_
#define TENCENTCLOUD_CDWPG_V20201230_MODEL_CONFIGPARAMS_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cdwpg
    {
        namespace V20201230
        {
            namespace Model
            {
                /**
                * Parameters
                */
                class ConfigParams : public AbstractModel
                {
                public:
                    ConfigParams();
                    ~ConfigParams() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Name.

Note: This field may return null, indicating that no valid values can be obtained.
                     * @return ParameterName Name.

Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetParameterName() const;

                    /**
                     * 设置Name.

Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _parameterName Name.

Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetParameterName(const std::string& _parameterName);

                    /**
                     * 判断参数 ParameterName 是否已赋值
                     * @return ParameterName 是否已赋值
                     * 
                     */
                    bool ParameterNameHasBeenSet() const;

                    /**
                     * 获取Value.

Note: This field may return null, indicating that no valid values can be obtained.
                     * @return ParameterValue Value.

Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetParameterValue() const;

                    /**
                     * 设置Value.

Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _parameterValue Value.

Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetParameterValue(const std::string& _parameterValue);

                    /**
                     * 判断参数 ParameterValue 是否已赋值
                     * @return ParameterValue 是否已赋值
                     * 
                     */
                    bool ParameterValueHasBeenSet() const;

                    /**
                     * 获取Value before modification.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return ParameterOldValue Value before modification.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetParameterOldValue() const;

                    /**
                     * 设置Value before modification.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _parameterOldValue Value before modification.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetParameterOldValue(const std::string& _parameterOldValue);

                    /**
                     * 判断参数 ParameterOldValue 是否已赋值
                     * @return ParameterOldValue 是否已赋值
                     * 
                     */
                    bool ParameterOldValueHasBeenSet() const;

                private:

                    /**
                     * Name.

Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_parameterName;
                    bool m_parameterNameHasBeenSet;

                    /**
                     * Value.

Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_parameterValue;
                    bool m_parameterValueHasBeenSet;

                    /**
                     * Value before modification.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_parameterOldValue;
                    bool m_parameterOldValueHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CDWPG_V20201230_MODEL_CONFIGPARAMS_H_
