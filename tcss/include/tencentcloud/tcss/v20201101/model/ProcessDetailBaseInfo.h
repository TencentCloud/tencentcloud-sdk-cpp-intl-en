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

#ifndef TENCENTCLOUD_TCSS_V20201101_MODEL_PROCESSDETAILBASEINFO_H_
#define TENCENTCLOUD_TCSS_V20201101_MODEL_PROCESSDETAILBASEINFO_H_

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
                * Runtime security details - Basic process information
                */
                class ProcessDetailBaseInfo : public AbstractModel
                {
                public:
                    ProcessDetailBaseInfo();
                    ~ProcessDetailBaseInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Process name
                     * @return ProcessName Process name
                     * 
                     */
                    std::string GetProcessName() const;

                    /**
                     * 设置Process name
                     * @param _processName Process name
                     * 
                     */
                    void SetProcessName(const std::string& _processName);

                    /**
                     * 判断参数 ProcessName 是否已赋值
                     * @return ProcessName 是否已赋值
                     * 
                     */
                    bool ProcessNameHasBeenSet() const;

                    /**
                     * 获取Process PID
                     * @return ProcessId Process PID
                     * 
                     */
                    uint64_t GetProcessId() const;

                    /**
                     * 设置Process PID
                     * @param _processId Process PID
                     * 
                     */
                    void SetProcessId(const uint64_t& _processId);

                    /**
                     * 判断参数 ProcessId 是否已赋值
                     * @return ProcessId 是否已赋值
                     * 
                     */
                    bool ProcessIdHasBeenSet() const;

                    /**
                     * 获取Process initiator
                     * @return ProcessStartUser Process initiator
                     * 
                     */
                    std::string GetProcessStartUser() const;

                    /**
                     * 设置Process initiator
                     * @param _processStartUser Process initiator
                     * 
                     */
                    void SetProcessStartUser(const std::string& _processStartUser);

                    /**
                     * 判断参数 ProcessStartUser 是否已赋值
                     * @return ProcessStartUser 是否已赋值
                     * 
                     */
                    bool ProcessStartUserHasBeenSet() const;

                    /**
                     * 获取Process user group
                     * @return ProcessUserGroup Process user group
                     * 
                     */
                    std::string GetProcessUserGroup() const;

                    /**
                     * 设置Process user group
                     * @param _processUserGroup Process user group
                     * 
                     */
                    void SetProcessUserGroup(const std::string& _processUserGroup);

                    /**
                     * 判断参数 ProcessUserGroup 是否已赋值
                     * @return ProcessUserGroup 是否已赋值
                     * 
                     */
                    bool ProcessUserGroupHasBeenSet() const;

                    /**
                     * 获取Process path
                     * @return ProcessPath Process path
                     * 
                     */
                    std::string GetProcessPath() const;

                    /**
                     * 设置Process path
                     * @param _processPath Process path
                     * 
                     */
                    void SetProcessPath(const std::string& _processPath);

                    /**
                     * 判断参数 ProcessPath 是否已赋值
                     * @return ProcessPath 是否已赋值
                     * 
                     */
                    bool ProcessPathHasBeenSet() const;

                    /**
                     * 获取Process command line parameter
                     * @return ProcessParam Process command line parameter
                     * 
                     */
                    std::string GetProcessParam() const;

                    /**
                     * 设置Process command line parameter
                     * @param _processParam Process command line parameter
                     * 
                     */
                    void SetProcessParam(const std::string& _processParam);

                    /**
                     * 判断参数 ProcessParam 是否已赋值
                     * @return ProcessParam 是否已赋值
                     * 
                     */
                    bool ProcessParamHasBeenSet() const;

                private:

                    /**
                     * Process name
                     */
                    std::string m_processName;
                    bool m_processNameHasBeenSet;

                    /**
                     * Process PID
                     */
                    uint64_t m_processId;
                    bool m_processIdHasBeenSet;

                    /**
                     * Process initiator
                     */
                    std::string m_processStartUser;
                    bool m_processStartUserHasBeenSet;

                    /**
                     * Process user group
                     */
                    std::string m_processUserGroup;
                    bool m_processUserGroupHasBeenSet;

                    /**
                     * Process path
                     */
                    std::string m_processPath;
                    bool m_processPathHasBeenSet;

                    /**
                     * Process command line parameter
                     */
                    std::string m_processParam;
                    bool m_processParamHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCSS_V20201101_MODEL_PROCESSDETAILBASEINFO_H_
