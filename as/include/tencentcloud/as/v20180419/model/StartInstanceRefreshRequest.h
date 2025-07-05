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

#ifndef TENCENTCLOUD_AS_V20180419_MODEL_STARTINSTANCEREFRESHREQUEST_H_
#define TENCENTCLOUD_AS_V20180419_MODEL_STARTINSTANCEREFRESHREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/as/v20180419/model/RefreshSettings.h>


namespace TencentCloud
{
    namespace As
    {
        namespace V20180419
        {
            namespace Model
            {
                /**
                * StartInstanceRefresh request structure.
                */
                class StartInstanceRefreshRequest : public AbstractModel
                {
                public:
                    StartInstanceRefreshRequest();
                    ~StartInstanceRefreshRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Scaling group ID.
                     * @return AutoScalingGroupId Scaling group ID.
                     * 
                     */
                    std::string GetAutoScalingGroupId() const;

                    /**
                     * 设置Scaling group ID.
                     * @param _autoScalingGroupId Scaling group ID.
                     * 
                     */
                    void SetAutoScalingGroupId(const std::string& _autoScalingGroupId);

                    /**
                     * 判断参数 AutoScalingGroupId 是否已赋值
                     * @return AutoScalingGroupId 是否已赋值
                     * 
                     */
                    bool AutoScalingGroupIdHasBeenSet() const;

                    /**
                     * 获取Refresh settings.
                     * @return RefreshSettings Refresh settings.
                     * 
                     */
                    RefreshSettings GetRefreshSettings() const;

                    /**
                     * 设置Refresh settings.
                     * @param _refreshSettings Refresh settings.
                     * 
                     */
                    void SetRefreshSettings(const RefreshSettings& _refreshSettings);

                    /**
                     * 判断参数 RefreshSettings 是否已赋值
                     * @return RefreshSettings 是否已赋值
                     * 
                     */
                    bool RefreshSettingsHasBeenSet() const;

                    /**
                     * 获取Refresh mode. Valid values:
<li>ROLLING_UPDATE_RESET: Reinstall the system for rolling updates.</li>
<li>ROLLING_UPDATE_REPLACE: Create an instance and replace the old instance with it for rolling updates. This mode does not support the rollback API currently.</li>
                     * @return RefreshMode Refresh mode. Valid values:
<li>ROLLING_UPDATE_RESET: Reinstall the system for rolling updates.</li>
<li>ROLLING_UPDATE_REPLACE: Create an instance and replace the old instance with it for rolling updates. This mode does not support the rollback API currently.</li>
                     * 
                     */
                    std::string GetRefreshMode() const;

                    /**
                     * 设置Refresh mode. Valid values:
<li>ROLLING_UPDATE_RESET: Reinstall the system for rolling updates.</li>
<li>ROLLING_UPDATE_REPLACE: Create an instance and replace the old instance with it for rolling updates. This mode does not support the rollback API currently.</li>
                     * @param _refreshMode Refresh mode. Valid values:
<li>ROLLING_UPDATE_RESET: Reinstall the system for rolling updates.</li>
<li>ROLLING_UPDATE_REPLACE: Create an instance and replace the old instance with it for rolling updates. This mode does not support the rollback API currently.</li>
                     * 
                     */
                    void SetRefreshMode(const std::string& _refreshMode);

                    /**
                     * 判断参数 RefreshMode 是否已赋值
                     * @return RefreshMode 是否已赋值
                     * 
                     */
                    bool RefreshModeHasBeenSet() const;

                private:

                    /**
                     * Scaling group ID.
                     */
                    std::string m_autoScalingGroupId;
                    bool m_autoScalingGroupIdHasBeenSet;

                    /**
                     * Refresh settings.
                     */
                    RefreshSettings m_refreshSettings;
                    bool m_refreshSettingsHasBeenSet;

                    /**
                     * Refresh mode. Valid values:
<li>ROLLING_UPDATE_RESET: Reinstall the system for rolling updates.</li>
<li>ROLLING_UPDATE_REPLACE: Create an instance and replace the old instance with it for rolling updates. This mode does not support the rollback API currently.</li>
                     */
                    std::string m_refreshMode;
                    bool m_refreshModeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_AS_V20180419_MODEL_STARTINSTANCEREFRESHREQUEST_H_
