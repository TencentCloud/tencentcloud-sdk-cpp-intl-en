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

#ifndef TENCENTCLOUD_SCF_V20180416_MODEL_TRIGGER_H_
#define TENCENTCLOUD_SCF_V20180416_MODEL_TRIGGER_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Scf
    {
        namespace V20180416
        {
            namespace Model
            {
                /**
                * Trigger type
                */
                class Trigger : public AbstractModel
                {
                public:
                    Trigger();
                    ~Trigger() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Latest modification time of the trigger
                     * @return ModTime Latest modification time of the trigger
                     */
                    std::string GetModTime() const;

                    /**
                     * 设置Latest modification time of the trigger
                     * @param ModTime Latest modification time of the trigger
                     */
                    void SetModTime(const std::string& _modTime);

                    /**
                     * 判断参数 ModTime 是否已赋值
                     * @return ModTime 是否已赋值
                     */
                    bool ModTimeHasBeenSet() const;

                    /**
                     * 获取Trigger type
                     * @return Type Trigger type
                     */
                    std::string GetType() const;

                    /**
                     * 设置Trigger type
                     * @param Type Trigger type
                     */
                    void SetType(const std::string& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     */
                    bool TypeHasBeenSet() const;

                    /**
                     * 获取Detailed trigger configuration
                     * @return TriggerDesc Detailed trigger configuration
                     */
                    std::string GetTriggerDesc() const;

                    /**
                     * 设置Detailed trigger configuration
                     * @param TriggerDesc Detailed trigger configuration
                     */
                    void SetTriggerDesc(const std::string& _triggerDesc);

                    /**
                     * 判断参数 TriggerDesc 是否已赋值
                     * @return TriggerDesc 是否已赋值
                     */
                    bool TriggerDescHasBeenSet() const;

                    /**
                     * 获取Trigger name
                     * @return TriggerName Trigger name
                     */
                    std::string GetTriggerName() const;

                    /**
                     * 设置Trigger name
                     * @param TriggerName Trigger name
                     */
                    void SetTriggerName(const std::string& _triggerName);

                    /**
                     * 判断参数 TriggerName 是否已赋值
                     * @return TriggerName 是否已赋值
                     */
                    bool TriggerNameHasBeenSet() const;

                    /**
                     * 获取Creation time of the trigger
                     * @return AddTime Creation time of the trigger
                     */
                    std::string GetAddTime() const;

                    /**
                     * 设置Creation time of the trigger
                     * @param AddTime Creation time of the trigger
                     */
                    void SetAddTime(const std::string& _addTime);

                    /**
                     * 判断参数 AddTime 是否已赋值
                     * @return AddTime 是否已赋值
                     */
                    bool AddTimeHasBeenSet() const;

                    /**
                     * 获取Enabling switch
                     * @return Enable Enabling switch
                     */
                    int64_t GetEnable() const;

                    /**
                     * 设置Enabling switch
                     * @param Enable Enabling switch
                     */
                    void SetEnable(const int64_t& _enable);

                    /**
                     * 判断参数 Enable 是否已赋值
                     * @return Enable 是否已赋值
                     */
                    bool EnableHasBeenSet() const;

                    /**
                     * 获取Custom parameter
                     * @return CustomArgument Custom parameter
                     */
                    std::string GetCustomArgument() const;

                    /**
                     * 设置Custom parameter
                     * @param CustomArgument Custom parameter
                     */
                    void SetCustomArgument(const std::string& _customArgument);

                    /**
                     * 判断参数 CustomArgument 是否已赋值
                     * @return CustomArgument 是否已赋值
                     */
                    bool CustomArgumentHasBeenSet() const;

                    /**
                     * 获取Trigger status
                     * @return AvailableStatus Trigger status
                     */
                    std::string GetAvailableStatus() const;

                    /**
                     * 设置Trigger status
                     * @param AvailableStatus Trigger status
                     */
                    void SetAvailableStatus(const std::string& _availableStatus);

                    /**
                     * 判断参数 AvailableStatus 是否已赋值
                     * @return AvailableStatus 是否已赋值
                     */
                    bool AvailableStatusHasBeenSet() const;

                private:

                    /**
                     * Latest modification time of the trigger
                     */
                    std::string m_modTime;
                    bool m_modTimeHasBeenSet;

                    /**
                     * Trigger type
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * Detailed trigger configuration
                     */
                    std::string m_triggerDesc;
                    bool m_triggerDescHasBeenSet;

                    /**
                     * Trigger name
                     */
                    std::string m_triggerName;
                    bool m_triggerNameHasBeenSet;

                    /**
                     * Creation time of the trigger
                     */
                    std::string m_addTime;
                    bool m_addTimeHasBeenSet;

                    /**
                     * Enabling switch
                     */
                    int64_t m_enable;
                    bool m_enableHasBeenSet;

                    /**
                     * Custom parameter
                     */
                    std::string m_customArgument;
                    bool m_customArgumentHasBeenSet;

                    /**
                     * Trigger status
                     */
                    std::string m_availableStatus;
                    bool m_availableStatusHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_SCF_V20180416_MODEL_TRIGGER_H_
