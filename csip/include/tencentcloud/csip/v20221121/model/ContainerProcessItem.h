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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_CONTAINERPROCESSITEM_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_CONTAINERPROCESSITEM_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Csip
    {
        namespace V20221121
        {
            namespace Model
            {
                /**
                * Container process information.
                */
                class ContainerProcessItem : public AbstractModel
                {
                public:
                    ContainerProcessItem();
                    ~ContainerProcessItem() = default;
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
                     * 获取Host process ID
                     * @return PID Host process ID
                     * 
                     */
                    int64_t GetPID() const;

                    /**
                     * 设置Host process ID
                     * @param _pID Host process ID
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
                     * 获取Containerized process ID
                     * @return ContainerPID Containerized process ID
                     * 
                     */
                    int64_t GetContainerPID() const;

                    /**
                     * 设置Containerized process ID
                     * @param _containerPID Containerized process ID
                     * 
                     */
                    void SetContainerPID(const int64_t& _containerPID);

                    /**
                     * 判断参数 ContainerPID 是否已赋值
                     * @return ContainerPID 是否已赋值
                     * 
                     */
                    bool ContainerPIDHasBeenSet() const;

                    /**
                     * 获取Executable file path of the process
                     * @return ProcessPath Executable file path of the process
                     * 
                     */
                    std::string GetProcessPath() const;

                    /**
                     * 设置Executable file path of the process
                     * @param _processPath Executable file path of the process
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
                     * 获取Process running user
                     * @return RunAs Process running user
                     * 
                     */
                    std::string GetRunAs() const;

                    /**
                     * 设置Process running user
                     * @param _runAs Process running user
                     * 
                     */
                    void SetRunAs(const std::string& _runAs);

                    /**
                     * 判断参数 RunAs 是否已赋值
                     * @return RunAs 是否已赋值
                     * 
                     */
                    bool RunAsHasBeenSet() const;

                    /**
                     * 获取Process startup time
                     * @return StartTime Process startup time
                     * 
                     */
                    std::string GetStartTime() const;

                    /**
                     * 设置Process startup time
                     * @param _startTime Process startup time
                     * 
                     */
                    void SetStartTime(const std::string& _startTime);

                    /**
                     * 判断参数 StartTime 是否已赋值
                     * @return StartTime 是否已赋值
                     * 
                     */
                    bool StartTimeHasBeenSet() const;

                private:

                    /**
                     * Process name
                     */
                    std::string m_processName;
                    bool m_processNameHasBeenSet;

                    /**
                     * Host process ID
                     */
                    int64_t m_pID;
                    bool m_pIDHasBeenSet;

                    /**
                     * Containerized process ID
                     */
                    int64_t m_containerPID;
                    bool m_containerPIDHasBeenSet;

                    /**
                     * Executable file path of the process
                     */
                    std::string m_processPath;
                    bool m_processPathHasBeenSet;

                    /**
                     * Process running user
                     */
                    std::string m_runAs;
                    bool m_runAsHasBeenSet;

                    /**
                     * Process startup time
                     */
                    std::string m_startTime;
                    bool m_startTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_CONTAINERPROCESSITEM_H_
