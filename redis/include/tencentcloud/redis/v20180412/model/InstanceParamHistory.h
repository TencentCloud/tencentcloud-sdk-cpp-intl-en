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

#ifndef TENCENTCLOUD_REDIS_V20180412_MODEL_INSTANCEPARAMHISTORY_H_
#define TENCENTCLOUD_REDIS_V20180412_MODEL_INSTANCEPARAMHISTORY_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Redis
    {
        namespace V20180412
        {
            namespace Model
            {
                /**
                * History of instance parameter modifications
                */
                class InstanceParamHistory : public AbstractModel
                {
                public:
                    InstanceParamHistory();
                    ~InstanceParamHistory() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Parameter name
                     * @return ParamName Parameter name
                     * 
                     */
                    std::string GetParamName() const;

                    /**
                     * 设置Parameter name
                     * @param _paramName Parameter name
                     * 
                     */
                    void SetParamName(const std::string& _paramName);

                    /**
                     * 判断参数 ParamName 是否已赋值
                     * @return ParamName 是否已赋值
                     * 
                     */
                    bool ParamNameHasBeenSet() const;

                    /**
                     * 获取The value of the parameter before modification
                     * @return PreValue The value of the parameter before modification
                     * 
                     */
                    std::string GetPreValue() const;

                    /**
                     * 设置The value of the parameter before modification
                     * @param _preValue The value of the parameter before modification
                     * 
                     */
                    void SetPreValue(const std::string& _preValue);

                    /**
                     * 判断参数 PreValue 是否已赋值
                     * @return PreValue 是否已赋值
                     * 
                     */
                    bool PreValueHasBeenSet() const;

                    /**
                     * 获取The value of the parameter after modification
                     * @return NewValue The value of the parameter after modification
                     * 
                     */
                    std::string GetNewValue() const;

                    /**
                     * 设置The value of the parameter after modification
                     * @param _newValue The value of the parameter after modification
                     * 
                     */
                    void SetNewValue(const std::string& _newValue);

                    /**
                     * 判断参数 NewValue 是否已赋值
                     * @return NewValue 是否已赋值
                     * 
                     */
                    bool NewValueHasBeenSet() const;

                    /**
                     * 获取Parameter configuration status
- `1`: The parameter configuration is being modified.
- `2`: The parameter configuration has been modified successfully.
- `3`: Failed to modify the parameter configuration.
                     * @return Status Parameter configuration status
- `1`: The parameter configuration is being modified.
- `2`: The parameter configuration has been modified successfully.
- `3`: Failed to modify the parameter configuration.
                     * 
                     */
                    int64_t GetStatus() const;

                    /**
                     * 设置Parameter configuration status
- `1`: The parameter configuration is being modified.
- `2`: The parameter configuration has been modified successfully.
- `3`: Failed to modify the parameter configuration.
                     * @param _status Parameter configuration status
- `1`: The parameter configuration is being modified.
- `2`: The parameter configuration has been modified successfully.
- `3`: Failed to modify the parameter configuration.
                     * 
                     */
                    void SetStatus(const int64_t& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取Modification time
                     * @return ModifyTime Modification time
                     * 
                     */
                    std::string GetModifyTime() const;

                    /**
                     * 设置Modification time
                     * @param _modifyTime Modification time
                     * 
                     */
                    void SetModifyTime(const std::string& _modifyTime);

                    /**
                     * 判断参数 ModifyTime 是否已赋值
                     * @return ModifyTime 是否已赋值
                     * 
                     */
                    bool ModifyTimeHasBeenSet() const;

                private:

                    /**
                     * Parameter name
                     */
                    std::string m_paramName;
                    bool m_paramNameHasBeenSet;

                    /**
                     * The value of the parameter before modification
                     */
                    std::string m_preValue;
                    bool m_preValueHasBeenSet;

                    /**
                     * The value of the parameter after modification
                     */
                    std::string m_newValue;
                    bool m_newValueHasBeenSet;

                    /**
                     * Parameter configuration status
- `1`: The parameter configuration is being modified.
- `2`: The parameter configuration has been modified successfully.
- `3`: Failed to modify the parameter configuration.
                     */
                    int64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * Modification time
                     */
                    std::string m_modifyTime;
                    bool m_modifyTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_REDIS_V20180412_MODEL_INSTANCEPARAMHISTORY_H_
