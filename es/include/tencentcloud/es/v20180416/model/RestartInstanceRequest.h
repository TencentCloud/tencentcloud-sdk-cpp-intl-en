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
                     * 获取<p>Instance ID.</p>
                     * @return InstanceId <p>Instance ID.</p>
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置<p>Instance ID.</p>
                     * @param _instanceId <p>Instance ID.</p>
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
                     * 获取<p>Whether to force restart<li>true: force restart</li><li>false: do not force restart</li>Default value: false</p>
                     * @return ForceRestart <p>Whether to force restart<li>true: force restart</li><li>false: do not force restart</li>Default value: false</p>
                     * 
                     */
                    bool GetForceRestart() const;

                    /**
                     * 设置<p>Whether to force restart<li>true: force restart</li><li>false: do not force restart</li>Default value: false</p>
                     * @param _forceRestart <p>Whether to force restart<li>true: force restart</li><li>false: do not force restart</li>Default value: false</p>
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
                     * 获取<p>Restart mode: 0 rolling restart; 1 full restart</p>
                     * @return RestartMode <p>Restart mode: 0 rolling restart; 1 full restart</p>
                     * 
                     */
                    int64_t GetRestartMode() const;

                    /**
                     * 设置<p>Restart mode: 0 rolling restart; 1 full restart</p>
                     * @param _restartMode <p>Restart mode: 0 rolling restart; 1 full restart</p>
                     * 
                     */
                    void SetRestartMode(const int64_t& _restartMode);

                    /**
                     * 判断参数 RestartMode 是否已赋值
                     * @return RestartMode 是否已赋值
                     * 
                     */
                    bool RestartModeHasBeenSet() const;

                    /**
                     * 获取<p>Select whether to upgrade the kernel patch version upon restart</p>
                     * @return UpgradeKernel <p>Select whether to upgrade the kernel patch version upon restart</p>
                     * 
                     */
                    bool GetUpgradeKernel() const;

                    /**
                     * 设置<p>Select whether to upgrade the kernel patch version upon restart</p>
                     * @param _upgradeKernel <p>Select whether to upgrade the kernel patch version upon restart</p>
                     * 
                     */
                    void SetUpgradeKernel(const bool& _upgradeKernel);

                    /**
                     * 判断参数 UpgradeKernel 是否已赋值
                     * @return UpgradeKernel 是否已赋值
                     * 
                     */
                    bool UpgradeKernelHasBeenSet() const;

                private:

                    /**
                     * <p>Instance ID.</p>
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * <p>Whether to force restart<li>true: force restart</li><li>false: do not force restart</li>Default value: false</p>
                     */
                    bool m_forceRestart;
                    bool m_forceRestartHasBeenSet;

                    /**
                     * <p>Restart mode: 0 rolling restart; 1 full restart</p>
                     */
                    int64_t m_restartMode;
                    bool m_restartModeHasBeenSet;

                    /**
                     * <p>Select whether to upgrade the kernel patch version upon restart</p>
                     */
                    bool m_upgradeKernel;
                    bool m_upgradeKernelHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ES_V20180416_MODEL_RESTARTINSTANCEREQUEST_H_
