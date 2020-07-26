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

#ifndef TENCENTCLOUD_AS_V20180419_MODEL_DELETELAUNCHCONFIGURATIONREQUEST_H_
#define TENCENTCLOUD_AS_V20180419_MODEL_DELETELAUNCHCONFIGURATIONREQUEST_H_

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
                * DeleteLaunchConfiguration request structure.
                */
                class DeleteLaunchConfigurationRequest : public AbstractModel
                {
                public:
                    DeleteLaunchConfigurationRequest();
                    ~DeleteLaunchConfigurationRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取ID of the launch configuration to be deleted.
                     * @return LaunchConfigurationId ID of the launch configuration to be deleted.
                     */
                    std::string GetLaunchConfigurationId() const;

                    /**
                     * 设置ID of the launch configuration to be deleted.
                     * @param LaunchConfigurationId ID of the launch configuration to be deleted.
                     */
                    void SetLaunchConfigurationId(const std::string& _launchConfigurationId);

                    /**
                     * 判断参数 LaunchConfigurationId 是否已赋值
                     * @return LaunchConfigurationId 是否已赋值
                     */
                    bool LaunchConfigurationIdHasBeenSet() const;

                private:

                    /**
                     * ID of the launch configuration to be deleted.
                     */
                    std::string m_launchConfigurationId;
                    bool m_launchConfigurationIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_AS_V20180419_MODEL_DELETELAUNCHCONFIGURATIONREQUEST_H_
