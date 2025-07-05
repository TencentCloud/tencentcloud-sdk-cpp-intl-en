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

#ifndef TENCENTCLOUD_TCSS_V20201101_MODEL_VULDEFENCEPLUGIN_H_
#define TENCENTCLOUD_TCSS_V20201101_MODEL_VULDEFENCEPLUGIN_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tcss
    {
        namespace V20201101
        {
            namespace Model
            {
                /**
                * Vulnerability protection plugin information
                */
                class VulDefencePlugin : public AbstractModel
                {
                public:
                    VulDefencePlugin();
                    ~VulDefencePlugin() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取PID of the Java process
                     * @return PID PID of the Java process
                     * 
                     */
                    int64_t GetPID() const;

                    /**
                     * 设置PID of the Java process
                     * @param _pID PID of the Java process
                     * 
                     */
                    void SetPID(const int64_t& _pID);

                    /**
                     * 判断参数 PID 是否已赋值
                     * @return PID 是否已赋值
                     * 
                     */
                    bool PIDHasBeenSet() const;

                    /**
                     * 获取Main class name of the process
                     * @return MainClass Main class name of the process
                     * 
                     */
                    std::string GetMainClass() const;

                    /**
                     * 设置Main class name of the process
                     * @param _mainClass Main class name of the process
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
                     * 获取Plugin status. Valid values: `INJECTING` (injecting); `SUCCESS` (injected successfully); `FAIL` (injection failed); `TIMEOUT` (plugin timed out); `QUIT` (plugin exited).
                     * @return Status Plugin status. Valid values: `INJECTING` (injecting); `SUCCESS` (injected successfully); `FAIL` (injection failed); `TIMEOUT` (plugin timed out); `QUIT` (plugin exited).
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置Plugin status. Valid values: `INJECTING` (injecting); `SUCCESS` (injected successfully); `FAIL` (injection failed); `TIMEOUT` (plugin timed out); `QUIT` (plugin exited).
                     * @param _status Plugin status. Valid values: `INJECTING` (injecting); `SUCCESS` (injected successfully); `FAIL` (injection failed); `TIMEOUT` (plugin timed out); `QUIT` (plugin exited).
                     * 
                     */
                    void SetStatus(const std::string& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取Error log
                     * @return ErrorLog Error log
                     * 
                     */
                    std::string GetErrorLog() const;

                    /**
                     * 设置Error log
                     * @param _errorLog Error log
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
                     * PID of the Java process
                     */
                    int64_t m_pID;
                    bool m_pIDHasBeenSet;

                    /**
                     * Main class name of the process
                     */
                    std::string m_mainClass;
                    bool m_mainClassHasBeenSet;

                    /**
                     * Plugin status. Valid values: `INJECTING` (injecting); `SUCCESS` (injected successfully); `FAIL` (injection failed); `TIMEOUT` (plugin timed out); `QUIT` (plugin exited).
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * Error log
                     */
                    std::string m_errorLog;
                    bool m_errorLogHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCSS_V20201101_MODEL_VULDEFENCEPLUGIN_H_
