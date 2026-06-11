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

#ifndef TENCENTCLOUD_CWP_V20180228_MODEL_RASPLICENSEPLUGIN_H_
#define TENCENTCLOUD_CWP_V20180228_MODEL_RASPLICENSEPLUGIN_H_

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
                * Important Period Guarantee Protection License Plugin Details
                */
                class RaspLicensePlugin : public AbstractModel
                {
                public:
                    RaspLicensePlugin();
                    ~RaspLicensePlugin() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取java Process pid
                     * @return PID java Process pid
                     * 
                     */
                    uint64_t GetPID() const;

                    /**
                     * 设置java Process pid
                     * @param _pID java Process pid
                     * 
                     */
                    void SetPID(const uint64_t& _pID);

                    /**
                     * 判断参数 PID 是否已赋值
                     * @return PID 是否已赋值
                     * 
                     */
                    bool PIDHasBeenSet() const;

                    /**
                     * 获取Java Main Class
                     * @return MainClass Java Main Class
                     * 
                     */
                    std::string GetMainClass() const;

                    /**
                     * 设置Java Main Class
                     * @param _mainClass Java Main Class
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
                     * 获取0: Injecting, 1: Injection successful, 2: Plugin timed out, 3: Plug-in exit, 4: Injection failure
                     * @return Status 0: Injecting, 1: Injection successful, 2: Plugin timed out, 3: Plug-in exit, 4: Injection failure
                     * 
                     */
                    uint64_t GetStatus() const;

                    /**
                     * 设置0: Injecting, 1: Injection successful, 2: Plugin timed out, 3: Plug-in exit, 4: Injection failure
                     * @param _status 0: Injecting, 1: Injection successful, 2: Plugin timed out, 3: Plug-in exit, 4: Injection failure
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
                     * 获取Error details
                     * @return ErrorLog Error details
                     * 
                     */
                    std::string GetErrorLog() const;

                    /**
                     * 设置Error details
                     * @param _errorLog Error details
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
                     * 获取Failure reason of injection
                     * @return Reason Failure reason of injection
                     * 
                     */
                    std::string GetReason() const;

                    /**
                     * 设置Failure reason of injection
                     * @param _reason Failure reason of injection
                     * 
                     */
                    void SetReason(const std::string& _reason);

                    /**
                     * 判断参数 Reason 是否已赋值
                     * @return Reason 是否已赋值
                     * 
                     */
                    bool ReasonHasBeenSet() const;

                    /**
                     * 获取Injection duration
                     * @return InjectTime Injection duration
                     * 
                     */
                    std::string GetInjectTime() const;

                    /**
                     * 设置Injection duration
                     * @param _injectTime Injection duration
                     * 
                     */
                    void SetInjectTime(const std::string& _injectTime);

                    /**
                     * 判断参数 InjectTime 是否已赋值
                     * @return InjectTime 是否已赋值
                     * 
                     */
                    bool InjectTimeHasBeenSet() const;

                private:

                    /**
                     * java Process pid
                     */
                    uint64_t m_pID;
                    bool m_pIDHasBeenSet;

                    /**
                     * Java Main Class
                     */
                    std::string m_mainClass;
                    bool m_mainClassHasBeenSet;

                    /**
                     * 0: Injecting, 1: Injection successful, 2: Plugin timed out, 3: Plug-in exit, 4: Injection failure
                     */
                    uint64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * Error details
                     */
                    std::string m_errorLog;
                    bool m_errorLogHasBeenSet;

                    /**
                     * Failure reason of injection
                     */
                    std::string m_reason;
                    bool m_reasonHasBeenSet;

                    /**
                     * Injection duration
                     */
                    std::string m_injectTime;
                    bool m_injectTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CWP_V20180228_MODEL_RASPLICENSEPLUGIN_H_
