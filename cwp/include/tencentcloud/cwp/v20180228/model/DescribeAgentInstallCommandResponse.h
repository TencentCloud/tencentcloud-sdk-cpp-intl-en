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

#ifndef TENCENTCLOUD_CWP_V20180228_MODEL_DESCRIBEAGENTINSTALLCOMMANDRESPONSE_H_
#define TENCENTCLOUD_CWP_V20180228_MODEL_DESCRIBEAGENTINSTALLCOMMANDRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cwp
    {
        namespace V20180228
        {
            namespace Model
            {
                /**
                * DescribeAgentInstallCommand response structure.
                */
                class DescribeAgentInstallCommandResponse : public AbstractModel
                {
                public:
                    DescribeAgentInstallCommandResponse();
                    ~DescribeAgentInstallCommandResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取Linux installation command
                     * @return LinuxCommand Linux installation command
                     * 
                     */
                    std::string GetLinuxCommand() const;

                    /**
                     * 判断参数 LinuxCommand 是否已赋值
                     * @return LinuxCommand 是否已赋值
                     * 
                     */
                    bool LinuxCommandHasBeenSet() const;

                    /**
                     * 获取Windows installation command (Windows 2008 or later)
                     * @return WindowsCommand Windows installation command (Windows 2008 or later)
                     * 
                     */
                    std::string GetWindowsCommand() const;

                    /**
                     * 判断参数 WindowsCommand 是否已赋值
                     * @return WindowsCommand 是否已赋值
                     * 
                     */
                    bool WindowsCommandHasBeenSet() const;

                    /**
                     * 获取Step 1 of Window installation command (Windows 2003)
                     * @return WindowsStepOne Step 1 of Window installation command (Windows 2003)
                     * 
                     */
                    std::string GetWindowsStepOne() const;

                    /**
                     * 判断参数 WindowsStepOne 是否已赋值
                     * @return WindowsStepOne 是否已赋值
                     * 
                     */
                    bool WindowsStepOneHasBeenSet() const;

                    /**
                     * 获取Step 2 of Window installation command (Windows 2003)
                     * @return WindowsStepTwo Step 2 of Window installation command (Windows 2003)
                     * 
                     */
                    std::string GetWindowsStepTwo() const;

                    /**
                     * 判断参数 WindowsStepTwo 是否已赋值
                     * @return WindowsStepTwo 是否已赋值
                     * 
                     */
                    bool WindowsStepTwoHasBeenSet() const;

                    /**
                     * 获取Download URL of the agent for Windows
                     * @return WindowsDownloadUrl Download URL of the agent for Windows
                     * 
                     */
                    std::string GetWindowsDownloadUrl() const;

                    /**
                     * 判断参数 WindowsDownloadUrl 是否已赋值
                     * @return WindowsDownloadUrl 是否已赋值
                     * 
                     */
                    bool WindowsDownloadUrlHasBeenSet() const;

                    /**
                     * 获取Arm installation command
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return ARMCommand Arm installation command
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetARMCommand() const;

                    /**
                     * 判断参数 ARMCommand 是否已赋值
                     * @return ARMCommand 是否已赋值
                     * 
                     */
                    bool ARMCommandHasBeenSet() const;

                private:

                    /**
                     * Linux installation command
                     */
                    std::string m_linuxCommand;
                    bool m_linuxCommandHasBeenSet;

                    /**
                     * Windows installation command (Windows 2008 or later)
                     */
                    std::string m_windowsCommand;
                    bool m_windowsCommandHasBeenSet;

                    /**
                     * Step 1 of Window installation command (Windows 2003)
                     */
                    std::string m_windowsStepOne;
                    bool m_windowsStepOneHasBeenSet;

                    /**
                     * Step 2 of Window installation command (Windows 2003)
                     */
                    std::string m_windowsStepTwo;
                    bool m_windowsStepTwoHasBeenSet;

                    /**
                     * Download URL of the agent for Windows
                     */
                    std::string m_windowsDownloadUrl;
                    bool m_windowsDownloadUrlHasBeenSet;

                    /**
                     * Arm installation command
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_aRMCommand;
                    bool m_aRMCommandHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CWP_V20180228_MODEL_DESCRIBEAGENTINSTALLCOMMANDRESPONSE_H_
