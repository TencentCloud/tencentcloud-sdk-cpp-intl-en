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

#ifndef TENCENTCLOUD_MONITOR_V20180724_MODEL_MANAGEMENTCOMMAND_H_
#define TENCENTCLOUD_MONITOR_V20180724_MODEL_MANAGEMENTCOMMAND_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Monitor
    {
        namespace V20180724
        {
            namespace Model
            {
                /**
                * Prometheus agent management command line
                */
                class ManagementCommand : public AbstractModel
                {
                public:
                    ManagementCommand();
                    ~ManagementCommand() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Agent installation command
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Install Agent installation command
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetInstall() const;

                    /**
                     * 设置Agent installation command
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _install Agent installation command
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetInstall(const std::string& _install);

                    /**
                     * 判断参数 Install 是否已赋值
                     * @return Install 是否已赋值
                     * 
                     */
                    bool InstallHasBeenSet() const;

                    /**
                     * 获取Agent restart command
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Restart Agent restart command
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetRestart() const;

                    /**
                     * 设置Agent restart command
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _restart Agent restart command
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetRestart(const std::string& _restart);

                    /**
                     * 判断参数 Restart 是否已赋值
                     * @return Restart 是否已赋值
                     * 
                     */
                    bool RestartHasBeenSet() const;

                    /**
                     * 获取Agent stop command
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Stop Agent stop command
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetStop() const;

                    /**
                     * 设置Agent stop command
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _stop Agent stop command
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetStop(const std::string& _stop);

                    /**
                     * 判断参数 Stop 是否已赋值
                     * @return Stop 是否已赋值
                     * 
                     */
                    bool StopHasBeenSet() const;

                    /**
                     * 获取Agent status detection command
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return StatusCheck Agent status detection command
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetStatusCheck() const;

                    /**
                     * 设置Agent status detection command
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _statusCheck Agent status detection command
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetStatusCheck(const std::string& _statusCheck);

                    /**
                     * 判断参数 StatusCheck 是否已赋值
                     * @return StatusCheck 是否已赋值
                     * 
                     */
                    bool StatusCheckHasBeenSet() const;

                    /**
                     * 获取Agent log detection command
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return LogCheck Agent log detection command
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetLogCheck() const;

                    /**
                     * 设置Agent log detection command
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _logCheck Agent log detection command
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetLogCheck(const std::string& _logCheck);

                    /**
                     * 判断参数 LogCheck 是否已赋值
                     * @return LogCheck 是否已赋值
                     * 
                     */
                    bool LogCheckHasBeenSet() const;

                private:

                    /**
                     * Agent installation command
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_install;
                    bool m_installHasBeenSet;

                    /**
                     * Agent restart command
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_restart;
                    bool m_restartHasBeenSet;

                    /**
                     * Agent stop command
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_stop;
                    bool m_stopHasBeenSet;

                    /**
                     * Agent status detection command
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_statusCheck;
                    bool m_statusCheckHasBeenSet;

                    /**
                     * Agent log detection command
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_logCheck;
                    bool m_logCheckHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MONITOR_V20180724_MODEL_MANAGEMENTCOMMAND_H_
