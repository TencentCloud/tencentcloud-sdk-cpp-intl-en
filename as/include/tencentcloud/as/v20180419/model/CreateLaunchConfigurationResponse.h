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

#ifndef TENCENTCLOUD_AS_V20180419_MODEL_CREATELAUNCHCONFIGURATIONRESPONSE_H_
#define TENCENTCLOUD_AS_V20180419_MODEL_CREATELAUNCHCONFIGURATIONRESPONSE_H_

#include <string>
#include <vector>
#include <map>
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
                * CreateLaunchConfiguration response structure.
                */
                class CreateLaunchConfigurationResponse : public AbstractModel
                {
                public:
                    CreateLaunchConfigurationResponse();
                    ~CreateLaunchConfigurationResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取This parameter is returned when a launch configuration is created through this API, indicating the launch configuration ID.
                     * @return LaunchConfigurationId This parameter is returned when a launch configuration is created through this API, indicating the launch configuration ID.
                     */
                    std::string GetLaunchConfigurationId() const;

                    /**
                     * 判断参数 LaunchConfigurationId 是否已赋值
                     * @return LaunchConfigurationId 是否已赋值
                     */
                    bool LaunchConfigurationIdHasBeenSet() const;

                private:

                    /**
                     * This parameter is returned when a launch configuration is created through this API, indicating the launch configuration ID.
                     */
                    std::string m_launchConfigurationId;
                    bool m_launchConfigurationIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_AS_V20180419_MODEL_CREATELAUNCHCONFIGURATIONRESPONSE_H_
