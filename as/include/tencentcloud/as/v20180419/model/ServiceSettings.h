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

#ifndef TENCENTCLOUD_AS_V20180419_MODEL_SERVICESETTINGS_H_
#define TENCENTCLOUD_AS_V20180419_MODEL_SERVICESETTINGS_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace As
    {
        namespace V20180419
        {
            namespace Model
            {
                /**
                * Service settings
                */
                class ServiceSettings : public AbstractModel
                {
                public:
                    ServiceSettings();
                    ~ServiceSettings() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Enables unhealthy instance replacement. If this feature is enabled, AS will replace instances that are flagged as unhealthy by Cloud Monitor. If this parameter is not specified, the value will be False by default.
                     * @return ReplaceMonitorUnhealthy Enables unhealthy instance replacement. If this feature is enabled, AS will replace instances that are flagged as unhealthy by Cloud Monitor. If this parameter is not specified, the value will be False by default.
                     */
                    bool GetReplaceMonitorUnhealthy() const;

                    /**
                     * 设置Enables unhealthy instance replacement. If this feature is enabled, AS will replace instances that are flagged as unhealthy by Cloud Monitor. If this parameter is not specified, the value will be False by default.
                     * @param ReplaceMonitorUnhealthy Enables unhealthy instance replacement. If this feature is enabled, AS will replace instances that are flagged as unhealthy by Cloud Monitor. If this parameter is not specified, the value will be False by default.
                     */
                    void SetReplaceMonitorUnhealthy(const bool& _replaceMonitorUnhealthy);

                    /**
                     * 判断参数 ReplaceMonitorUnhealthy 是否已赋值
                     * @return ReplaceMonitorUnhealthy 是否已赋值
                     */
                    bool ReplaceMonitorUnhealthyHasBeenSet() const;

                    /**
                     * 获取
                     * @return ScalingMode 
                     */
                    std::string GetScalingMode() const;

                    /**
                     * 设置
                     * @param ScalingMode 
                     */
                    void SetScalingMode(const std::string& _scalingMode);

                    /**
                     * 判断参数 ScalingMode 是否已赋值
                     * @return ScalingMode 是否已赋值
                     */
                    bool ScalingModeHasBeenSet() const;

                private:

                    /**
                     * Enables unhealthy instance replacement. If this feature is enabled, AS will replace instances that are flagged as unhealthy by Cloud Monitor. If this parameter is not specified, the value will be False by default.
                     */
                    bool m_replaceMonitorUnhealthy;
                    bool m_replaceMonitorUnhealthyHasBeenSet;

                    /**
                     * 
                     */
                    std::string m_scalingMode;
                    bool m_scalingModeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_AS_V20180419_MODEL_SERVICESETTINGS_H_
