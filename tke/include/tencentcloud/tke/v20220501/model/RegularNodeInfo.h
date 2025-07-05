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

#ifndef TENCENTCLOUD_TKE_V20220501_MODEL_REGULARNODEINFO_H_
#define TENCENTCLOUD_TKE_V20220501_MODEL_REGULARNODEINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tke/v20220501/model/InstanceAdvancedSettings.h>


namespace TencentCloud
{
    namespace Tke
    {
        namespace V20220501
        {
            namespace Model
            {
                /**
                * General node information
                */
                class RegularNodeInfo : public AbstractModel
                {
                public:
                    RegularNodeInfo();
                    ~RegularNodeInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Node configuration
Note: This field may return "null", indicating that no valid value can be obtained.
                     * @return InstanceAdvancedSettings Node configuration
Note: This field may return "null", indicating that no valid value can be obtained.
                     * 
                     */
                    InstanceAdvancedSettings GetInstanceAdvancedSettings() const;

                    /**
                     * 设置Node configuration
Note: This field may return "null", indicating that no valid value can be obtained.
                     * @param _instanceAdvancedSettings Node configuration
Note: This field may return "null", indicating that no valid value can be obtained.
                     * 
                     */
                    void SetInstanceAdvancedSettings(const InstanceAdvancedSettings& _instanceAdvancedSettings);

                    /**
                     * 判断参数 InstanceAdvancedSettings 是否已赋值
                     * @return InstanceAdvancedSettings 是否已赋值
                     * 
                     */
                    bool InstanceAdvancedSettingsHasBeenSet() const;

                    /**
                     * 获取Auto scaling group ID
Note: This field may return "null", indicating that no valid value can be obtained.
                     * @return AutoscalingGroupId Auto scaling group ID
Note: This field may return "null", indicating that no valid value can be obtained.
                     * 
                     */
                    std::string GetAutoscalingGroupId() const;

                    /**
                     * 设置Auto scaling group ID
Note: This field may return "null", indicating that no valid value can be obtained.
                     * @param _autoscalingGroupId Auto scaling group ID
Note: This field may return "null", indicating that no valid value can be obtained.
                     * 
                     */
                    void SetAutoscalingGroupId(const std::string& _autoscalingGroupId);

                    /**
                     * 判断参数 AutoscalingGroupId 是否已赋值
                     * @return AutoscalingGroupId 是否已赋值
                     * 
                     */
                    bool AutoscalingGroupIdHasBeenSet() const;

                private:

                    /**
                     * Node configuration
Note: This field may return "null", indicating that no valid value can be obtained.
                     */
                    InstanceAdvancedSettings m_instanceAdvancedSettings;
                    bool m_instanceAdvancedSettingsHasBeenSet;

                    /**
                     * Auto scaling group ID
Note: This field may return "null", indicating that no valid value can be obtained.
                     */
                    std::string m_autoscalingGroupId;
                    bool m_autoscalingGroupIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TKE_V20220501_MODEL_REGULARNODEINFO_H_
