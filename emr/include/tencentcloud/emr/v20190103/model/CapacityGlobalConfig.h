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

#ifndef TENCENTCLOUD_EMR_V20190103_MODEL_CAPACITYGLOBALCONFIG_H_
#define TENCENTCLOUD_EMR_V20190103_MODEL_CAPACITYGLOBALCONFIG_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/emr/v20190103/model/DefaultSetting.h>


namespace TencentCloud
{
    namespace Emr
    {
        namespace V20190103
        {
            namespace Model
            {
                /**
                * Global configurations of the capacity scheduler under Resource Scheduling.
                */
                class CapacityGlobalConfig : public AbstractModel
                {
                public:
                    CapacityGlobalConfig();
                    ~CapacityGlobalConfig() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Whether label-based scheduling is enabled.
                     * @return EnableLabel Whether label-based scheduling is enabled.
                     * 
                     */
                    bool GetEnableLabel() const;

                    /**
                     * 设置Whether label-based scheduling is enabled.
                     * @param _enableLabel Whether label-based scheduling is enabled.
                     * 
                     */
                    void SetEnableLabel(const bool& _enableLabel);

                    /**
                     * 判断参数 EnableLabel 是否已赋值
                     * @return EnableLabel 是否已赋值
                     * 
                     */
                    bool EnableLabelHasBeenSet() const;

                    /**
                     * 获取Path for tag information storage if label-based scheduling is enabled.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return LabelDir Path for tag information storage if label-based scheduling is enabled.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetLabelDir() const;

                    /**
                     * 设置Path for tag information storage if label-based scheduling is enabled.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _labelDir Path for tag information storage if label-based scheduling is enabled.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetLabelDir(const std::string& _labelDir);

                    /**
                     * 判断参数 LabelDir 是否已赋值
                     * @return LabelDir 是否已赋值
                     * 
                     */
                    bool LabelDirHasBeenSet() const;

                    /**
                     * 获取Whether to overwrite the user-specified queue, wherein true indicates overwrite.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return QueueMappingOverride Whether to overwrite the user-specified queue, wherein true indicates overwrite.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    bool GetQueueMappingOverride() const;

                    /**
                     * 设置Whether to overwrite the user-specified queue, wherein true indicates overwrite.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _queueMappingOverride Whether to overwrite the user-specified queue, wherein true indicates overwrite.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetQueueMappingOverride(const bool& _queueMappingOverride);

                    /**
                     * 判断参数 QueueMappingOverride 是否已赋值
                     * @return QueueMappingOverride 是否已赋值
                     * 
                     */
                    bool QueueMappingOverrideHasBeenSet() const;

                    /**
                     * 获取Advanced settings.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return DefaultSettings Advanced settings.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::vector<DefaultSetting> GetDefaultSettings() const;

                    /**
                     * 设置Advanced settings.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _defaultSettings Advanced settings.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetDefaultSettings(const std::vector<DefaultSetting>& _defaultSettings);

                    /**
                     * 判断参数 DefaultSettings 是否已赋值
                     * @return DefaultSettings 是否已赋值
                     * 
                     */
                    bool DefaultSettingsHasBeenSet() const;

                private:

                    /**
                     * Whether label-based scheduling is enabled.
                     */
                    bool m_enableLabel;
                    bool m_enableLabelHasBeenSet;

                    /**
                     * Path for tag information storage if label-based scheduling is enabled.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_labelDir;
                    bool m_labelDirHasBeenSet;

                    /**
                     * Whether to overwrite the user-specified queue, wherein true indicates overwrite.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    bool m_queueMappingOverride;
                    bool m_queueMappingOverrideHasBeenSet;

                    /**
                     * Advanced settings.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<DefaultSetting> m_defaultSettings;
                    bool m_defaultSettingsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_EMR_V20190103_MODEL_CAPACITYGLOBALCONFIG_H_
