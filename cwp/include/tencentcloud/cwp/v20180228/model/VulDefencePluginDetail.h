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

#ifndef TENCENTCLOUD_CWP_V20180228_MODEL_VULDEFENCEPLUGINDETAIL_H_
#define TENCENTCLOUD_CWP_V20180228_MODEL_VULDEFENCEPLUGINDETAIL_H_

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
                * vulnerability defense plugin status of a single process
                */
                class VulDefencePluginDetail : public AbstractModel
                {
                public:
                    VulDefencePluginDetail();
                    ~VulDefencePluginDetail() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取ID of the injected process
                     * @return Pid ID of the injected process
                     * 
                     */
                    int64_t GetPid() const;

                    /**
                     * 设置ID of the injected process
                     * @param _pid ID of the injected process
                     * 
                     */
                    void SetPid(const int64_t& _pid);

                    /**
                     * 判断参数 Pid 是否已赋值
                     * @return Pid 是否已赋值
                     * 
                     */
                    bool PidHasBeenSet() const;

                    /**
                     * 获取Main class name of the injected process
                     * @return MainClass Main class name of the injected process
                     * 
                     */
                    std::string GetMainClass() const;

                    /**
                     * 设置Main class name of the injected process
                     * @param _mainClass Main class name of the injected process
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
                     * 获取Plugin status. 0: injecting; 1: injection successful; 2: plugin timed out, 3: plugin exited; 4: injection failed; 5: logically deleted.
                     * @return Status Plugin status. 0: injecting; 1: injection successful; 2: plugin timed out, 3: plugin exited; 4: injection failed; 5: logically deleted.
                     * 
                     */
                    int64_t GetStatus() const;

                    /**
                     * 设置Plugin status. 0: injecting; 1: injection successful; 2: plugin timed out, 3: plugin exited; 4: injection failed; 5: logically deleted.
                     * @param _status Plugin status. 0: injecting; 1: injection successful; 2: plugin timed out, 3: plugin exited; 4: injection failed; 5: logically deleted.
                     * 
                     */
                    void SetStatus(const int64_t& _status);

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

                    /**
                     * 获取Injection log
                     * @return InjectLog Injection log
                     * 
                     */
                    std::string GetInjectLog() const;

                    /**
                     * 设置Injection log
                     * @param _injectLog Injection log
                     * 
                     */
                    void SetInjectLog(const std::string& _injectLog);

                    /**
                     * 判断参数 InjectLog 是否已赋值
                     * @return InjectLog 是否已赋值
                     * 
                     */
                    bool InjectLogHasBeenSet() const;

                private:

                    /**
                     * ID of the injected process
                     */
                    int64_t m_pid;
                    bool m_pidHasBeenSet;

                    /**
                     * Main class name of the injected process
                     */
                    std::string m_mainClass;
                    bool m_mainClassHasBeenSet;

                    /**
                     * Plugin status. 0: injecting; 1: injection successful; 2: plugin timed out, 3: plugin exited; 4: injection failed; 5: logically deleted.
                     */
                    int64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * Error log
                     */
                    std::string m_errorLog;
                    bool m_errorLogHasBeenSet;

                    /**
                     * Injection log
                     */
                    std::string m_injectLog;
                    bool m_injectLogHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CWP_V20180228_MODEL_VULDEFENCEPLUGINDETAIL_H_
