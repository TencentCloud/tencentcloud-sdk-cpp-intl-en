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

#ifndef TENCENTCLOUD_EMR_V20190103_MODEL_INSPECTIONTASKSETTINGS_H_
#define TENCENTCLOUD_EMR_V20190103_MODEL_INSPECTIONTASKSETTINGS_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/emr/v20190103/model/TaskSettings.h>


namespace TencentCloud
{
    namespace Emr
    {
        namespace V20190103
        {
            namespace Model
            {
                /**
                * Setting inspection task configurations.
                */
                class InspectionTaskSettings : public AbstractModel
                {
                public:
                    InspectionTaskSettings();
                    ~InspectionTaskSettings() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Unique identifier for inspection tasks.
                     * @return TaskType Unique identifier for inspection tasks.
                     * 
                     */
                    std::string GetTaskType() const;

                    /**
                     * 设置Unique identifier for inspection tasks.
                     * @param _taskType Unique identifier for inspection tasks.
                     * 
                     */
                    void SetTaskType(const std::string& _taskType);

                    /**
                     * 判断参数 TaskType 是否已赋值
                     * @return TaskType 是否已赋值
                     * 
                     */
                    bool TaskTypeHasBeenSet() const;

                    /**
                     * 获取Inspection task group name.
                     * @return Group Inspection task group name.
                     * 
                     */
                    std::string GetGroup() const;

                    /**
                     * 设置Inspection task group name.
                     * @param _group Inspection task group name.
                     * 
                     */
                    void SetGroup(const std::string& _group);

                    /**
                     * 判断参数 Group 是否已赋值
                     * @return Group 是否已赋值
                     * 
                     */
                    bool GroupHasBeenSet() const;

                    /**
                     * 获取Inspection task name.
                     * @return Name Inspection task name.
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置Inspection task name.
                     * @param _name Inspection task name.
                     * 
                     */
                    void SetName(const std::string& _name);

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     * 
                     */
                    bool NameHasBeenSet() const;

                    /**
                     * 获取Inspection task parameter settings.
                     * @return TaskSettings Inspection task parameter settings.
                     * 
                     */
                    std::vector<TaskSettings> GetTaskSettings() const;

                    /**
                     * 设置Inspection task parameter settings.
                     * @param _taskSettings Inspection task parameter settings.
                     * 
                     */
                    void SetTaskSettings(const std::vector<TaskSettings>& _taskSettings);

                    /**
                     * 判断参数 TaskSettings 是否已赋值
                     * @return TaskSettings 是否已赋值
                     * 
                     */
                    bool TaskSettingsHasBeenSet() const;

                    /**
                     * 获取Whether it is selected, with the valid values of "true" and "false".
                     * @return Selected Whether it is selected, with the valid values of "true" and "false".
                     * 
                     */
                    std::string GetSelected() const;

                    /**
                     * 设置Whether it is selected, with the valid values of "true" and "false".
                     * @param _selected Whether it is selected, with the valid values of "true" and "false".
                     * 
                     */
                    void SetSelected(const std::string& _selected);

                    /**
                     * 判断参数 Selected 是否已赋值
                     * @return Selected 是否已赋值
                     * 
                     */
                    bool SelectedHasBeenSet() const;

                    /**
                     * 获取Whether monitoring is enabled.
                     * @return Enable Whether monitoring is enabled.
                     * 
                     */
                    std::string GetEnable() const;

                    /**
                     * 设置Whether monitoring is enabled.
                     * @param _enable Whether monitoring is enabled.
                     * 
                     */
                    void SetEnable(const std::string& _enable);

                    /**
                     * 判断参数 Enable 是否已赋值
                     * @return Enable 是否已赋值
                     * 
                     */
                    bool EnableHasBeenSet() const;

                    /**
                     * 获取Event JSON template.
                     * @return SettingsJson Event JSON template.
                     * 
                     */
                    std::string GetSettingsJson() const;

                    /**
                     * 设置Event JSON template.
                     * @param _settingsJson Event JSON template.
                     * 
                     */
                    void SetSettingsJson(const std::string& _settingsJson);

                    /**
                     * 判断参数 SettingsJson 是否已赋值
                     * @return SettingsJson 是否已赋值
                     * 
                     */
                    bool SettingsJsonHasBeenSet() const;

                private:

                    /**
                     * Unique identifier for inspection tasks.
                     */
                    std::string m_taskType;
                    bool m_taskTypeHasBeenSet;

                    /**
                     * Inspection task group name.
                     */
                    std::string m_group;
                    bool m_groupHasBeenSet;

                    /**
                     * Inspection task name.
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * Inspection task parameter settings.
                     */
                    std::vector<TaskSettings> m_taskSettings;
                    bool m_taskSettingsHasBeenSet;

                    /**
                     * Whether it is selected, with the valid values of "true" and "false".
                     */
                    std::string m_selected;
                    bool m_selectedHasBeenSet;

                    /**
                     * Whether monitoring is enabled.
                     */
                    std::string m_enable;
                    bool m_enableHasBeenSet;

                    /**
                     * Event JSON template.
                     */
                    std::string m_settingsJson;
                    bool m_settingsJsonHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_EMR_V20190103_MODEL_INSPECTIONTASKSETTINGS_H_
