/*
 * Copyright (c) 2017-2019 THL A29 Limited, a Tencent company. All Rights Reserved.
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

#ifndef TENCENTCLOUD_MONGODB_V20190725_MODEL_INSTANCETEXTPARAM_H_
#define TENCENTCLOUD_MONGODB_V20190725_MODEL_INSTANCETEXTPARAM_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Mongodb
    {
        namespace V20190725
        {
            namespace Model
            {
                /**
                * The collection of modifiable text parameters of an instance.
                */
                class InstanceTextParam : public AbstractModel
                {
                public:
                    InstanceTextParam();
                    ~InstanceTextParam() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Current value (not in use)
                     * @return CurrentValue Current value (not in use)
                     */
                    std::string GetCurrentValue() const;

                    /**
                     * 设置Current value (not in use)
                     * @param CurrentValue Current value (not in use)
                     */
                    void SetCurrentValue(const std::string& _currentValue);

                    /**
                     * 判断参数 CurrentValue 是否已赋值
                     * @return CurrentValue 是否已赋值
                     */
                    bool CurrentValueHasBeenSet() const;

                    /**
                     * 获取Default value (not in use)
                     * @return DefaultValue Default value (not in use)
                     */
                    std::string GetDefaultValue() const;

                    /**
                     * 设置Default value (not in use)
                     * @param DefaultValue Default value (not in use)
                     */
                    void SetDefaultValue(const std::string& _defaultValue);

                    /**
                     * 判断参数 DefaultValue 是否已赋值
                     * @return DefaultValue 是否已赋值
                     */
                    bool DefaultValueHasBeenSet() const;

                    /**
                     * 获取Whether to restart the instance for the parameter to take effect (not in use)
                     * @return NeedRestart Whether to restart the instance for the parameter to take effect (not in use)
                     */
                    std::string GetNeedRestart() const;

                    /**
                     * 设置Whether to restart the instance for the parameter to take effect (not in use)
                     * @param NeedRestart Whether to restart the instance for the parameter to take effect (not in use)
                     */
                    void SetNeedRestart(const std::string& _needRestart);

                    /**
                     * 判断参数 NeedRestart 是否已赋值
                     * @return NeedRestart 是否已赋值
                     */
                    bool NeedRestartHasBeenSet() const;

                    /**
                     * 获取Parameter name (not in use)
                     * @return ParamName Parameter name (not in use)
                     */
                    std::string GetParamName() const;

                    /**
                     * 设置Parameter name (not in use)
                     * @param ParamName Parameter name (not in use)
                     */
                    void SetParamName(const std::string& _paramName);

                    /**
                     * 判断参数 ParamName 是否已赋值
                     * @return ParamName 是否已赋值
                     */
                    bool ParamNameHasBeenSet() const;

                    /**
                     * 获取Acceptable values (not in use)
                     * @return TextValue Acceptable values (not in use)
                     */
                    std::string GetTextValue() const;

                    /**
                     * 设置Acceptable values (not in use)
                     * @param TextValue Acceptable values (not in use)
                     */
                    void SetTextValue(const std::string& _textValue);

                    /**
                     * 判断参数 TextValue 是否已赋值
                     * @return TextValue 是否已赋值
                     */
                    bool TextValueHasBeenSet() const;

                    /**
                     * 获取Parameter description (not in use)
                     * @return Tips Parameter description (not in use)
                     */
                    std::vector<std::string> GetTips() const;

                    /**
                     * 设置Parameter description (not in use)
                     * @param Tips Parameter description (not in use)
                     */
                    void SetTips(const std::vector<std::string>& _tips);

                    /**
                     * 判断参数 Tips 是否已赋值
                     * @return Tips 是否已赋值
                     */
                    bool TipsHasBeenSet() const;

                    /**
                     * 获取Data type of the parameter (not in use)
                     * @return ValueType Data type of the parameter (not in use)
                     */
                    std::string GetValueType() const;

                    /**
                     * 设置Data type of the parameter (not in use)
                     * @param ValueType Data type of the parameter (not in use)
                     */
                    void SetValueType(const std::string& _valueType);

                    /**
                     * 判断参数 ValueType 是否已赋值
                     * @return ValueType 是否已赋值
                     */
                    bool ValueTypeHasBeenSet() const;

                    /**
                     * 获取Whether the TencentDB for MongoDB console has pulled parameter information successfully (not in use)
                     * @return Status Whether the TencentDB for MongoDB console has pulled parameter information successfully (not in use)
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置Whether the TencentDB for MongoDB console has pulled parameter information successfully (not in use)
                     * @param Status Whether the TencentDB for MongoDB console has pulled parameter information successfully (not in use)
                     */
                    void SetStatus(const std::string& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     */
                    bool StatusHasBeenSet() const;

                private:

                    /**
                     * Current value (not in use)
                     */
                    std::string m_currentValue;
                    bool m_currentValueHasBeenSet;

                    /**
                     * Default value (not in use)
                     */
                    std::string m_defaultValue;
                    bool m_defaultValueHasBeenSet;

                    /**
                     * Whether to restart the instance for the parameter to take effect (not in use)
                     */
                    std::string m_needRestart;
                    bool m_needRestartHasBeenSet;

                    /**
                     * Parameter name (not in use)
                     */
                    std::string m_paramName;
                    bool m_paramNameHasBeenSet;

                    /**
                     * Acceptable values (not in use)
                     */
                    std::string m_textValue;
                    bool m_textValueHasBeenSet;

                    /**
                     * Parameter description (not in use)
                     */
                    std::vector<std::string> m_tips;
                    bool m_tipsHasBeenSet;

                    /**
                     * Data type of the parameter (not in use)
                     */
                    std::string m_valueType;
                    bool m_valueTypeHasBeenSet;

                    /**
                     * Whether the TencentDB for MongoDB console has pulled parameter information successfully (not in use)
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MONGODB_V20190725_MODEL_INSTANCETEXTPARAM_H_
