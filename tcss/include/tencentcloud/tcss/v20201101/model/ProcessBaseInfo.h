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

#ifndef TENCENTCLOUD_TCSS_V20201101_MODEL_PROCESSBASEINFO_H_
#define TENCENTCLOUD_TCSS_V20201101_MODEL_PROCESSBASEINFO_H_

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
                * Runtime security - Basic process information
                */
                class ProcessBaseInfo : public AbstractModel
                {
                public:
                    ProcessBaseInfo();
                    ~ProcessBaseInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Process initiator
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return ProcessStartUser Process initiator
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string GetProcessStartUser() const;

                    /**
                     * 设置Process initiator
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param ProcessStartUser Process initiator
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    void SetProcessStartUser(const std::string& _processStartUser);

                    /**
                     * 判断参数 ProcessStartUser 是否已赋值
                     * @return ProcessStartUser 是否已赋值
                     */
                    bool ProcessStartUserHasBeenSet() const;

                    /**
                     * 获取Process user group
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return ProcessUserGroup Process user group
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string GetProcessUserGroup() const;

                    /**
                     * 设置Process user group
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param ProcessUserGroup Process user group
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    void SetProcessUserGroup(const std::string& _processUserGroup);

                    /**
                     * 判断参数 ProcessUserGroup 是否已赋值
                     * @return ProcessUserGroup 是否已赋值
                     */
                    bool ProcessUserGroupHasBeenSet() const;

                    /**
                     * 获取Process path
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return ProcessPath Process path
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string GetProcessPath() const;

                    /**
                     * 设置Process path
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param ProcessPath Process path
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    void SetProcessPath(const std::string& _processPath);

                    /**
                     * 判断参数 ProcessPath 是否已赋值
                     * @return ProcessPath 是否已赋值
                     */
                    bool ProcessPathHasBeenSet() const;

                    /**
                     * 获取Process command line parameter
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return ProcessParam Process command line parameter
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string GetProcessParam() const;

                    /**
                     * 设置Process command line parameter
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param ProcessParam Process command line parameter
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    void SetProcessParam(const std::string& _processParam);

                    /**
                     * 判断参数 ProcessParam 是否已赋值
                     * @return ProcessParam 是否已赋值
                     */
                    bool ProcessParamHasBeenSet() const;

                private:

                    /**
                     * Process initiator
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_processStartUser;
                    bool m_processStartUserHasBeenSet;

                    /**
                     * Process user group
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_processUserGroup;
                    bool m_processUserGroupHasBeenSet;

                    /**
                     * Process path
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_processPath;
                    bool m_processPathHasBeenSet;

                    /**
                     * Process command line parameter
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_processParam;
                    bool m_processParamHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCSS_V20201101_MODEL_PROCESSBASEINFO_H_
