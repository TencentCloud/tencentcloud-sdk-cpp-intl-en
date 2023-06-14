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

#ifndef TENCENTCLOUD_ES_V20180416_MODEL_RESTARTINSTANCEREQUEST_H_
#define TENCENTCLOUD_ES_V20180416_MODEL_RESTARTINSTANCEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Es
    {
        namespace V20180416
        {
            namespace Model
            {
                /**
                * RestartInstance request structure.
                */
                class RestartInstanceRequest : public AbstractModel
                {
                public:
                    RestartInstanceRequest();
                    ~RestartInstanceRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Instance ID
                     * @return InstanceId Instance ID
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置Instance ID
                     * @param _instanceId Instance ID
                     * 
                     */
                    void SetInstanceId(const std::string& _instanceId);

                    /**
                     * 判断参数 InstanceId 是否已赋值
                     * @return InstanceId 是否已赋值
                     * 
                     */
                    bool InstanceIdHasBeenSet() const;

                    /**
                     * 获取Whether to force restart <li>true: Yes </li><li>false: No </li>Default value: false
                     * @return ForceRestart Whether to force restart <li>true: Yes </li><li>false: No </li>Default value: false
                     * 
                     */
                    bool GetForceRestart() const;

                    /**
                     * 设置Whether to force restart <li>true: Yes </li><li>false: No </li>Default value: false
                     * @param _forceRestart Whether to force restart <li>true: Yes </li><li>false: No </li>Default value: false
                     * 
                     */
                    void SetForceRestart(const bool& _forceRestart);

                    /**
                     * 判断参数 ForceRestart 是否已赋值
                     * @return ForceRestart 是否已赋值
                     * 
                     */
                    bool ForceRestartHasBeenSet() const;

                    /**
                     * 获取Restart mode. `0`: rolling restart; `1`: full restart
                     * @return RestartMode Restart mode. `0`: rolling restart; `1`: full restart
                     * 
                     */
                    int64_t GetRestartMode() const;

                    /**
                     * 设置Restart mode. `0`: rolling restart; `1`: full restart
                     * @param _restartMode Restart mode. `0`: rolling restart; `1`: full restart
                     * 
                     */
                    void SetRestartMode(const int64_t& _restartMode);

                    /**
                     * 判断参数 RestartMode 是否已赋值
                     * @return RestartMode 是否已赋值
                     * 
                     */
                    bool RestartModeHasBeenSet() const;

                private:

                    /**
                     * Instance ID
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * Whether to force restart <li>true: Yes </li><li>false: No </li>Default value: false
                     */
                    bool m_forceRestart;
                    bool m_forceRestartHasBeenSet;

                    /**
                     * Restart mode. `0`: rolling restart; `1`: full restart
                     */
                    int64_t m_restartMode;
                    bool m_restartModeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ES_V20180416_MODEL_RESTARTINSTANCEREQUEST_H_
