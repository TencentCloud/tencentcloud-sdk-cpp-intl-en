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

#ifndef TENCENTCLOUD_TCSS_V20201101_MODEL_PROCESSDETAILINFO_H_
#define TENCENTCLOUD_TCSS_V20201101_MODEL_PROCESSDETAILINFO_H_

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
                * Runtime security details - Process information
                */
                class ProcessDetailInfo : public AbstractModel
                {
                public:
                    ProcessDetailInfo();
                    ~ProcessDetailInfo() = default;
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
                     * 获取Process permission
                     * @return ProcessAuthority Process permission
                     * 
                     */
                    std::string GetProcessAuthority() const;

                    /**
                     * 设置Process permission
                     * @param _processAuthority Process permission
                     * 
                     */
                    void SetProcessAuthority(const std::string& _processAuthority);

                    /**
                     * 判断参数 ProcessAuthority 是否已赋值
                     * @return ProcessAuthority 是否已赋值
                     * 
                     */
                    bool ProcessAuthorityHasBeenSet() const;

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
                     * 获取Process tree
                     * @return ProcessTree Process tree
                     * 
                     */
                    std::string GetProcessTree() const;

                    /**
                     * 设置Process tree
                     * @param _processTree Process tree
                     * 
                     */
                    void SetProcessTree(const std::string& _processTree);

                    /**
                     * 判断参数 ProcessTree 是否已赋值
                     * @return ProcessTree 是否已赋值
                     * 
                     */
                    bool ProcessTreeHasBeenSet() const;

                    /**
                     * 获取Process MD5
                     * @return ProcessMd5 Process MD5
                     * 
                     */
                    std::string GetProcessMd5() const;

                    /**
                     * 设置Process MD5
                     * @param _processMd5 Process MD5
                     * 
                     */
                    void SetProcessMd5(const std::string& _processMd5);

                    /**
                     * 判断参数 ProcessMd5 是否已赋值
                     * @return ProcessMd5 是否已赋值
                     * 
                     */
                    bool ProcessMd5HasBeenSet() const;

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
                     * Process permission
                     */
                    std::string m_processAuthority;
                    bool m_processAuthorityHasBeenSet;

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
                     * Process tree
                     */
                    std::string m_processTree;
                    bool m_processTreeHasBeenSet;

                    /**
                     * Process MD5
                     */
                    std::string m_processMd5;
                    bool m_processMd5HasBeenSet;

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

#endif // !TENCENTCLOUD_TCSS_V20201101_MODEL_PROCESSDETAILINFO_H_
