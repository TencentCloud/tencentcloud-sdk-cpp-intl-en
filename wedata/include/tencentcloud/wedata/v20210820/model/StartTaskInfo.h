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

#ifndef TENCENTCLOUD_WEDATA_V20210820_MODEL_STARTTASKINFO_H_
#define TENCENTCLOUD_WEDATA_V20210820_MODEL_STARTTASKINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/wedata/v20210820/model/RecordField.h>


namespace TencentCloud
{
    namespace Wedata
    {
        namespace V20210820
        {
            namespace Model
            {
                /**
                * Batch Run Integration Task Configuration
                */
                class StartTaskInfo : public AbstractModel
                {
                public:
                    StartTaskInfo();
                    ~StartTaskInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Batch task type, for example, START, TIMESTAMP, RESTORE, RESUME, etc.\nNote: This field may return null, indicating that no valid value can be obtained.
                     * @return Event Batch task type, for example, START, TIMESTAMP, RESTORE, RESUME, etc.\nNote: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    std::string GetEvent() const;

                    /**
                     * 设置Batch task type, for example, START, TIMESTAMP, RESTORE, RESUME, etc.\nNote: This field may return null, indicating that no valid value can be obtained.
                     * @param _event Batch task type, for example, START, TIMESTAMP, RESTORE, RESUME, etc.\nNote: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetEvent(const std::string& _event);

                    /**
                     * 判断参数 Event 是否已赋值
                     * @return Event 是否已赋值
                     * 
                     */
                    bool EventHasBeenSet() const;

                    /**
                     * 获取Task Id list\nNote: This field may return null, indicating that no valid value can be obtained.
                     * @return TaskIds Task Id list\nNote: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    std::vector<std::string> GetTaskIds() const;

                    /**
                     * 设置Task Id list\nNote: This field may return null, indicating that no valid value can be obtained.
                     * @param _taskIds Task Id list\nNote: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetTaskIds(const std::vector<std::string>& _taskIds);

                    /**
                     * 判断参数 TaskIds 是否已赋值
                     * @return TaskIds 是否已赋值
                     * 
                     */
                    bool TaskIdsHasBeenSet() const;

                    /**
                     * 获取Batch task configuration, currently only used for real-time integration based on time point startup. For time point startup, a RecordField configuration with name=timestamp, value=specific timestamp needs to be set\nNote: This field may return null, indicating that no valid value can be obtained.
                     * @return Config Batch task configuration, currently only used for real-time integration based on time point startup. For time point startup, a RecordField configuration with name=timestamp, value=specific timestamp needs to be set\nNote: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    std::vector<RecordField> GetConfig() const;

                    /**
                     * 设置Batch task configuration, currently only used for real-time integration based on time point startup. For time point startup, a RecordField configuration with name=timestamp, value=specific timestamp needs to be set\nNote: This field may return null, indicating that no valid value can be obtained.
                     * @param _config Batch task configuration, currently only used for real-time integration based on time point startup. For time point startup, a RecordField configuration with name=timestamp, value=specific timestamp needs to be set\nNote: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetConfig(const std::vector<RecordField>& _config);

                    /**
                     * 判断参数 Config 是否已赋值
                     * @return Config 是否已赋值
                     * 
                     */
                    bool ConfigHasBeenSet() const;

                    /**
                     * 获取Operation TypeNote: This field may return null, indicating that no valid value can be obtained.
                     * @return Description Operation TypeNote: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置Operation TypeNote: This field may return null, indicating that no valid value can be obtained.
                     * @param _description Operation TypeNote: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetDescription(const std::string& _description);

                    /**
                     * 判断参数 Description 是否已赋值
                     * @return Description 是否已赋值
                     * 
                     */
                    bool DescriptionHasBeenSet() const;

                private:

                    /**
                     * Batch task type, for example, START, TIMESTAMP, RESTORE, RESUME, etc.\nNote: This field may return null, indicating that no valid value can be obtained.
                     */
                    std::string m_event;
                    bool m_eventHasBeenSet;

                    /**
                     * Task Id list\nNote: This field may return null, indicating that no valid value can be obtained.
                     */
                    std::vector<std::string> m_taskIds;
                    bool m_taskIdsHasBeenSet;

                    /**
                     * Batch task configuration, currently only used for real-time integration based on time point startup. For time point startup, a RecordField configuration with name=timestamp, value=specific timestamp needs to be set\nNote: This field may return null, indicating that no valid value can be obtained.
                     */
                    std::vector<RecordField> m_config;
                    bool m_configHasBeenSet;

                    /**
                     * Operation TypeNote: This field may return null, indicating that no valid value can be obtained.
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20210820_MODEL_STARTTASKINFO_H_
