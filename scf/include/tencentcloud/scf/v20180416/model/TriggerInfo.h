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

#ifndef TENCENTCLOUD_SCF_V20180416_MODEL_TRIGGERINFO_H_
#define TENCENTCLOUD_SCF_V20180416_MODEL_TRIGGERINFO_H_

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
                * Trigger information
                */
                class TriggerInfo : public AbstractModel
                {
                public:
                    TriggerInfo();
                    ~TriggerInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Whether to enable
                     * @return Enable Whether to enable
                     * 
                     */
                    uint64_t GetEnable() const;

                    /**
                     * 设置Whether to enable
                     * @param _enable Whether to enable
                     * 
                     */
                    void SetEnable(const uint64_t& _enable);

                    /**
                     * 判断参数 Enable 是否已赋值
                     * @return Enable 是否已赋值
                     * 
                     */
                    bool EnableHasBeenSet() const;

                    /**
                     * 获取Function version or alias
                     * @return Qualifier Function version or alias
                     * 
                     */
                    std::string GetQualifier() const;

                    /**
                     * 设置Function version or alias
                     * @param _qualifier Function version or alias
                     * 
                     */
                    void SetQualifier(const std::string& _qualifier);

                    /**
                     * 判断参数 Qualifier 是否已赋值
                     * @return Qualifier 是否已赋值
                     * 
                     */
                    bool QualifierHasBeenSet() const;

                    /**
                     * 获取Trigger name
                     * @return TriggerName Trigger name
                     * 
                     */
                    std::string GetTriggerName() const;

                    /**
                     * 设置Trigger name
                     * @param _triggerName Trigger name
                     * 
                     */
                    void SetTriggerName(const std::string& _triggerName);

                    /**
                     * 判断参数 TriggerName 是否已赋值
                     * @return TriggerName 是否已赋值
                     * 
                     */
                    bool TriggerNameHasBeenSet() const;

                    /**
                     * 获取Trigger type
                     * @return Type Trigger type
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置Trigger type
                     * @param _type Trigger type
                     * 
                     */
                    void SetType(const std::string& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     * 
                     */
                    bool TypeHasBeenSet() const;

                    /**
                     * 获取Detailed configuration of trigger
                     * @return TriggerDesc Detailed configuration of trigger
                     * 
                     */
                    std::string GetTriggerDesc() const;

                    /**
                     * 设置Detailed configuration of trigger
                     * @param _triggerDesc Detailed configuration of trigger
                     * 
                     */
                    void SetTriggerDesc(const std::string& _triggerDesc);

                    /**
                     * 判断参数 TriggerDesc 是否已赋值
                     * @return TriggerDesc 是否已赋值
                     * 
                     */
                    bool TriggerDescHasBeenSet() const;

                    /**
                     * 获取Whether the trigger is available
                     * @return AvailableStatus Whether the trigger is available
                     * 
                     */
                    std::string GetAvailableStatus() const;

                    /**
                     * 设置Whether the trigger is available
                     * @param _availableStatus Whether the trigger is available
                     * 
                     */
                    void SetAvailableStatus(const std::string& _availableStatus);

                    /**
                     * 判断参数 AvailableStatus 是否已赋值
                     * @return AvailableStatus 是否已赋值
                     * 
                     */
                    bool AvailableStatusHasBeenSet() const;

                    /**
                     * 获取Custom parameter
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return CustomArgument Custom parameter
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetCustomArgument() const;

                    /**
                     * 设置Custom parameter
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param _customArgument Custom parameter
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetCustomArgument(const std::string& _customArgument);

                    /**
                     * 判断参数 CustomArgument 是否已赋值
                     * @return CustomArgument 是否已赋值
                     * 
                     */
                    bool CustomArgumentHasBeenSet() const;

                    /**
                     * 获取Trigger creation time
                     * @return AddTime Trigger creation time
                     * 
                     */
                    std::string GetAddTime() const;

                    /**
                     * 设置Trigger creation time
                     * @param _addTime Trigger creation time
                     * 
                     */
                    void SetAddTime(const std::string& _addTime);

                    /**
                     * 判断参数 AddTime 是否已赋值
                     * @return AddTime 是否已赋值
                     * 
                     */
                    bool AddTimeHasBeenSet() const;

                    /**
                     * 获取Trigger last modified time
                     * @return ModTime Trigger last modified time
                     * 
                     */
                    std::string GetModTime() const;

                    /**
                     * 设置Trigger last modified time
                     * @param _modTime Trigger last modified time
                     * 
                     */
                    void SetModTime(const std::string& _modTime);

                    /**
                     * 判断参数 ModTime 是否已赋值
                     * @return ModTime 是否已赋值
                     * 
                     */
                    bool ModTimeHasBeenSet() const;

                    /**
                     * 获取Minimum resource ID of trigger
                     * @return ResourceId Minimum resource ID of trigger
                     * 
                     */
                    std::string GetResourceId() const;

                    /**
                     * 设置Minimum resource ID of trigger
                     * @param _resourceId Minimum resource ID of trigger
                     * 
                     */
                    void SetResourceId(const std::string& _resourceId);

                    /**
                     * 判断参数 ResourceId 是否已赋值
                     * @return ResourceId 是否已赋值
                     * 
                     */
                    bool ResourceIdHasBeenSet() const;

                    /**
                     * 获取Trigger-Function binding status
                     * @return BindStatus Trigger-Function binding status
                     * 
                     */
                    std::string GetBindStatus() const;

                    /**
                     * 设置Trigger-Function binding status
                     * @param _bindStatus Trigger-Function binding status
                     * 
                     */
                    void SetBindStatus(const std::string& _bindStatus);

                    /**
                     * 判断参数 BindStatus 是否已赋值
                     * @return BindStatus 是否已赋值
                     * 
                     */
                    bool BindStatusHasBeenSet() const;

                    /**
                     * 获取Trigger type. Two-way means that the trigger can be manipulated in both consoles, while one-way means that the trigger can be created only in the SCF Console
                     * @return TriggerAttribute Trigger type. Two-way means that the trigger can be manipulated in both consoles, while one-way means that the trigger can be created only in the SCF Console
                     * 
                     */
                    std::string GetTriggerAttribute() const;

                    /**
                     * 设置Trigger type. Two-way means that the trigger can be manipulated in both consoles, while one-way means that the trigger can be created only in the SCF Console
                     * @param _triggerAttribute Trigger type. Two-way means that the trigger can be manipulated in both consoles, while one-way means that the trigger can be created only in the SCF Console
                     * 
                     */
                    void SetTriggerAttribute(const std::string& _triggerAttribute);

                    /**
                     * 判断参数 TriggerAttribute 是否已赋值
                     * @return TriggerAttribute 是否已赋值
                     * 
                     */
                    bool TriggerAttributeHasBeenSet() const;

                private:

                    /**
                     * Whether to enable
                     */
                    uint64_t m_enable;
                    bool m_enableHasBeenSet;

                    /**
                     * Function version or alias
                     */
                    std::string m_qualifier;
                    bool m_qualifierHasBeenSet;

                    /**
                     * Trigger name
                     */
                    std::string m_triggerName;
                    bool m_triggerNameHasBeenSet;

                    /**
                     * Trigger type
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * Detailed configuration of trigger
                     */
                    std::string m_triggerDesc;
                    bool m_triggerDescHasBeenSet;

                    /**
                     * Whether the trigger is available
                     */
                    std::string m_availableStatus;
                    bool m_availableStatusHasBeenSet;

                    /**
                     * Custom parameter
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_customArgument;
                    bool m_customArgumentHasBeenSet;

                    /**
                     * Trigger creation time
                     */
                    std::string m_addTime;
                    bool m_addTimeHasBeenSet;

                    /**
                     * Trigger last modified time
                     */
                    std::string m_modTime;
                    bool m_modTimeHasBeenSet;

                    /**
                     * Minimum resource ID of trigger
                     */
                    std::string m_resourceId;
                    bool m_resourceIdHasBeenSet;

                    /**
                     * Trigger-Function binding status
                     */
                    std::string m_bindStatus;
                    bool m_bindStatusHasBeenSet;

                    /**
                     * Trigger type. Two-way means that the trigger can be manipulated in both consoles, while one-way means that the trigger can be created only in the SCF Console
                     */
                    std::string m_triggerAttribute;
                    bool m_triggerAttributeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_SCF_V20180416_MODEL_TRIGGERINFO_H_
