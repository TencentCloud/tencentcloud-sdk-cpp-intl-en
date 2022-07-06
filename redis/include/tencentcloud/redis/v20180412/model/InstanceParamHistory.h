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
                     */
                    std::string GetParamName() const;

                    /**
                     * 设置Parameter name
                     * @param ParamName Parameter name
                     */
                    void SetParamName(const std::string& _paramName);

                    /**
                     * 判断参数 ParamName 是否已赋值
                     * @return ParamName 是否已赋值
                     */
                    bool ParamNameHasBeenSet() const;

                    /**
                     * 获取Value before modification
                     * @return PreValue Value before modification
                     */
                    std::string GetPreValue() const;

                    /**
                     * 设置Value before modification
                     * @param PreValue Value before modification
                     */
                    void SetPreValue(const std::string& _preValue);

                    /**
                     * 判断参数 PreValue 是否已赋值
                     * @return PreValue 是否已赋值
                     */
                    bool PreValueHasBeenSet() const;

                    /**
                     * 获取Value after modification
                     * @return NewValue Value after modification
                     */
                    std::string GetNewValue() const;

                    /**
                     * 设置Value after modification
                     * @param NewValue Value after modification
                     */
                    void SetNewValue(const std::string& _newValue);

                    /**
                     * 判断参数 NewValue 是否已赋值
                     * @return NewValue 是否已赋值
                     */
                    bool NewValueHasBeenSet() const;

                    /**
                     * 获取Status. 1: modifying the parameter configuration; 2: modified the parameter configuration successfully; 3: failed to modify the parameter configuration
                     * @return Status Status. 1: modifying the parameter configuration; 2: modified the parameter configuration successfully; 3: failed to modify the parameter configuration
                     */
                    int64_t GetStatus() const;

                    /**
                     * 设置Status. 1: modifying the parameter configuration; 2: modified the parameter configuration successfully; 3: failed to modify the parameter configuration
                     * @param Status Status. 1: modifying the parameter configuration; 2: modified the parameter configuration successfully; 3: failed to modify the parameter configuration
                     */
                    void SetStatus(const int64_t& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取Modification time
                     * @return ModifyTime Modification time
                     */
                    std::string GetModifyTime() const;

                    /**
                     * 设置Modification time
                     * @param ModifyTime Modification time
                     */
                    void SetModifyTime(const std::string& _modifyTime);

                    /**
                     * 判断参数 ModifyTime 是否已赋值
                     * @return ModifyTime 是否已赋值
                     */
                    bool ModifyTimeHasBeenSet() const;

                private:

                    /**
                     * Parameter name
                     */
                    std::string m_paramName;
                    bool m_paramNameHasBeenSet;

                    /**
                     * Value before modification
                     */
                    std::string m_preValue;
                    bool m_preValueHasBeenSet;

                    /**
                     * Value after modification
                     */
                    std::string m_newValue;
                    bool m_newValueHasBeenSet;

                    /**
                     * Status. 1: modifying the parameter configuration; 2: modified the parameter configuration successfully; 3: failed to modify the parameter configuration
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
