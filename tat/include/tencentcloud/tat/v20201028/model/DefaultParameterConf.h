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

#ifndef TENCENTCLOUD_TAT_V20201028_MODEL_DEFAULTPARAMETERCONF_H_
#define TENCENTCLOUD_TAT_V20201028_MODEL_DEFAULTPARAMETERCONF_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tat
    {
        namespace V20201028
        {
            namespace Model
            {
                /**
                * Custom parameter.
                */
                class DefaultParameterConf : public AbstractModel
                {
                public:
                    DefaultParameterConf();
                    ~DefaultParameterConf() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Parameter name.
                     * @return ParameterName Parameter name.
                     * 
                     */
                    std::string GetParameterName() const;

                    /**
                     * 设置Parameter name.
                     * @param _parameterName Parameter name.
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
                     * 获取Default parameter value.
                     * @return ParameterValue Default parameter value.
                     * 
                     */
                    std::string GetParameterValue() const;

                    /**
                     * 设置Default parameter value.
                     * @param _parameterValue Default parameter value.
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
                     * 获取Parameter description.
                     * @return ParameterDescription Parameter description.
                     * 
                     */
                    std::string GetParameterDescription() const;

                    /**
                     * 设置Parameter description.
                     * @param _parameterDescription Parameter description.
                     * 
                     */
                    void SetParameterDescription(const std::string& _parameterDescription);

                    /**
                     * 判断参数 ParameterDescription 是否已赋值
                     * @return ParameterDescription 是否已赋值
                     * 
                     */
                    bool ParameterDescriptionHasBeenSet() const;

                private:

                    /**
                     * Parameter name.
                     */
                    std::string m_parameterName;
                    bool m_parameterNameHasBeenSet;

                    /**
                     * Default parameter value.
                     */
                    std::string m_parameterValue;
                    bool m_parameterValueHasBeenSet;

                    /**
                     * Parameter description.
                     */
                    std::string m_parameterDescription;
                    bool m_parameterDescriptionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TAT_V20201028_MODEL_DEFAULTPARAMETERCONF_H_
