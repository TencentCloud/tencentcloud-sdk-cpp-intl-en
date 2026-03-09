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

#ifndef TENCENTCLOUD_WEDATA_V20250806_MODEL_TRIGGERTASK_H_
#define TENCENTCLOUD_WEDATA_V20250806_MODEL_TRIGGERTASK_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/wedata/v20250806/model/TriggerTaskBaseAttribute.h>
#include <tencentcloud/wedata/v20250806/model/TriggerTaskConfiguration.h>
#include <tencentcloud/wedata/v20250806/model/TriggerTaskSchedulerConfiguration.h>


namespace TencentCloud
{
    namespace Wedata
    {
        namespace V20250806
        {
            namespace Model
            {
                /**
                * Task object.
                */
                class TriggerTask : public AbstractModel
                {
                public:
                    TriggerTask();
                    ~TriggerTask() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Task basic attributes.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return TriggerTaskBaseAttribute Task basic attributes.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    TriggerTaskBaseAttribute GetTriggerTaskBaseAttribute() const;

                    /**
                     * 设置Task basic attributes.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _triggerTaskBaseAttribute Task basic attributes.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetTriggerTaskBaseAttribute(const TriggerTaskBaseAttribute& _triggerTaskBaseAttribute);

                    /**
                     * 判断参数 TriggerTaskBaseAttribute 是否已赋值
                     * @return TriggerTaskBaseAttribute 是否已赋值
                     * 
                     */
                    bool TriggerTaskBaseAttributeHasBeenSet() const;

                    /**
                     * 获取Task configurations.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return TriggerTaskConfiguration Task configurations.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    TriggerTaskConfiguration GetTriggerTaskConfiguration() const;

                    /**
                     * 设置Task configurations.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _triggerTaskConfiguration Task configurations.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetTriggerTaskConfiguration(const TriggerTaskConfiguration& _triggerTaskConfiguration);

                    /**
                     * 判断参数 TriggerTaskConfiguration 是否已赋值
                     * @return TriggerTaskConfiguration 是否已赋值
                     * 
                     */
                    bool TriggerTaskConfigurationHasBeenSet() const;

                    /**
                     * 获取Task scheduling configuration.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return TriggerTaskSchedulerConfiguration Task scheduling configuration.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    TriggerTaskSchedulerConfiguration GetTriggerTaskSchedulerConfiguration() const;

                    /**
                     * 设置Task scheduling configuration.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _triggerTaskSchedulerConfiguration Task scheduling configuration.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetTriggerTaskSchedulerConfiguration(const TriggerTaskSchedulerConfiguration& _triggerTaskSchedulerConfiguration);

                    /**
                     * 判断参数 TriggerTaskSchedulerConfiguration 是否已赋值
                     * @return TriggerTaskSchedulerConfiguration 是否已赋值
                     * 
                     */
                    bool TriggerTaskSchedulerConfigurationHasBeenSet() const;

                private:

                    /**
                     * Task basic attributes.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    TriggerTaskBaseAttribute m_triggerTaskBaseAttribute;
                    bool m_triggerTaskBaseAttributeHasBeenSet;

                    /**
                     * Task configurations.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    TriggerTaskConfiguration m_triggerTaskConfiguration;
                    bool m_triggerTaskConfigurationHasBeenSet;

                    /**
                     * Task scheduling configuration.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    TriggerTaskSchedulerConfiguration m_triggerTaskSchedulerConfiguration;
                    bool m_triggerTaskSchedulerConfigurationHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20250806_MODEL_TRIGGERTASK_H_
