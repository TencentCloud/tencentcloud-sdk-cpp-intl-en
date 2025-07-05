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

#ifndef TENCENTCLOUD_CWP_V20180228_MODEL_JAVAMEMSHELLPLUGININFO_H_
#define TENCENTCLOUD_CWP_V20180228_MODEL_JAVAMEMSHELLPLUGININFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
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
                * Java Memory Trojan Plugin Information
                */
                class JavaMemShellPluginInfo : public AbstractModel
                {
                public:
                    JavaMemShellPluginInfo();
                    ~JavaMemShellPluginInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Injection Process PID
                     * @return Pid Injection Process PID
                     * 
                     */
                    uint64_t GetPid() const;

                    /**
                     * 设置Injection Process PID
                     * @param _pid Injection Process PID
                     * 
                     */
                    void SetPid(const uint64_t& _pid);

                    /**
                     * 判断参数 Pid 是否已赋值
                     * @return Pid 是否已赋值
                     * 
                     */
                    bool PidHasBeenSet() const;

                    /**
                     * 获取Injection Process Main Class
                     * @return MainClass Injection Process Main Class
                     * 
                     */
                    std::string GetMainClass() const;

                    /**
                     * 设置Injection Process Main Class
                     * @param _mainClass Injection Process Main Class
                     * 
                     */
                    void SetMainClass(const std::string& _mainClass);

                    /**
                     * 判断参数 MainClass 是否已赋值
                     * @return MainClass 是否已赋值
                     * 
                     */
                    bool MainClassHasBeenSet() const;

                    /**
                     * 获取Injection Status. 0: Injecting; 1: Injection Succeeded; 2: Plugin Timeout; 3: Plugin Exits; 4: Injection Failed; 5: Soft-delete
                     * @return Status Injection Status. 0: Injecting; 1: Injection Succeeded; 2: Plugin Timeout; 3: Plugin Exits; 4: Injection Failed; 5: Soft-delete
                     * 
                     */
                    uint64_t GetStatus() const;

                    /**
                     * 设置Injection Status. 0: Injecting; 1: Injection Succeeded; 2: Plugin Timeout; 3: Plugin Exits; 4: Injection Failed; 5: Soft-delete
                     * @param _status Injection Status. 0: Injecting; 1: Injection Succeeded; 2: Plugin Timeout; 3: Plugin Exits; 4: Injection Failed; 5: Soft-delete
                     * 
                     */
                    void SetStatus(const uint64_t& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取Error logs
                     * @return ErrorLog Error logs
                     * 
                     */
                    std::string GetErrorLog() const;

                    /**
                     * 设置Error logs
                     * @param _errorLog Error logs
                     * 
                     */
                    void SetErrorLog(const std::string& _errorLog);

                    /**
                     * 判断参数 ErrorLog 是否已赋值
                     * @return ErrorLog 是否已赋值
                     * 
                     */
                    bool ErrorLogHasBeenSet() const;

                private:

                    /**
                     * Injection Process PID
                     */
                    uint64_t m_pid;
                    bool m_pidHasBeenSet;

                    /**
                     * Injection Process Main Class
                     */
                    std::string m_mainClass;
                    bool m_mainClassHasBeenSet;

                    /**
                     * Injection Status. 0: Injecting; 1: Injection Succeeded; 2: Plugin Timeout; 3: Plugin Exits; 4: Injection Failed; 5: Soft-delete
                     */
                    uint64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * Error logs
                     */
                    std::string m_errorLog;
                    bool m_errorLogHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CWP_V20180228_MODEL_JAVAMEMSHELLPLUGININFO_H_
