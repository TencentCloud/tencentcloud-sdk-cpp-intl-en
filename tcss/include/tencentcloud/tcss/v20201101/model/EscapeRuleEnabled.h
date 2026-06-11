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

#ifndef TENCENTCLOUD_TCSS_V20201101_MODEL_ESCAPERULEENABLED_H_
#define TENCENTCLOUD_TCSS_V20201101_MODEL_ESCAPERULEENABLED_H_

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
                * Enablement/Disablement of the container escape scan policy
                */
                class EscapeRuleEnabled : public AbstractModel
                {
                public:
                    EscapeRuleEnabled();
                    ~EscapeRuleEnabled() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Rule type
ESCAPE_CGROUPS: Escape by using the cgroup mechanism
ESCAPE_TAMPER_SENSITIVE_FILE: Escape by tampering with sensitive files
ESCAPE_DOCKER_API: Escape by accessing the Docker API
ESCAPE_VUL_OCCURRED: Escape vulnerability exploitation.
MOUNT_SENSITIVE_PATH: MOUNT SENSITIVE path
PRIVILEGE_CONTAINER_START: Privilege container
PRIVILEGE: Escape by program privilege escalation
                     * @return Type Rule type
ESCAPE_CGROUPS: Escape by using the cgroup mechanism
ESCAPE_TAMPER_SENSITIVE_FILE: Escape by tampering with sensitive files
ESCAPE_DOCKER_API: Escape by accessing the Docker API
ESCAPE_VUL_OCCURRED: Escape vulnerability exploitation.
MOUNT_SENSITIVE_PATH: MOUNT SENSITIVE path
PRIVILEGE_CONTAINER_START: Privilege container
PRIVILEGE: Escape by program privilege escalation
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置Rule type
ESCAPE_CGROUPS: Escape by using the cgroup mechanism
ESCAPE_TAMPER_SENSITIVE_FILE: Escape by tampering with sensitive files
ESCAPE_DOCKER_API: Escape by accessing the Docker API
ESCAPE_VUL_OCCURRED: Escape vulnerability exploitation.
MOUNT_SENSITIVE_PATH: MOUNT SENSITIVE path
PRIVILEGE_CONTAINER_START: Privilege container
PRIVILEGE: Escape by program privilege escalation
                     * @param _type Rule type
ESCAPE_CGROUPS: Escape by using the cgroup mechanism
ESCAPE_TAMPER_SENSITIVE_FILE: Escape by tampering with sensitive files
ESCAPE_DOCKER_API: Escape by accessing the Docker API
ESCAPE_VUL_OCCURRED: Escape vulnerability exploitation.
MOUNT_SENSITIVE_PATH: MOUNT SENSITIVE path
PRIVILEGE_CONTAINER_START: Privilege container
PRIVILEGE: Escape by program privilege escalation
                     * 
                     */
                    void SetType(const std::string& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     * 
                     */
                    bool TypeHasBeenSet() const;

                    /**
                     * 获取Whether to enable. Valid values: `false` (no); `true` (yes).
                     * @return IsEnable Whether to enable. Valid values: `false` (no); `true` (yes).
                     * 
                     */
                    bool GetIsEnable() const;

                    /**
                     * 设置Whether to enable. Valid values: `false` (no); `true` (yes).
                     * @param _isEnable Whether to enable. Valid values: `false` (no); `true` (yes).
                     * 
                     */
                    void SetIsEnable(const bool& _isEnable);

                    /**
                     * 判断参数 IsEnable 是否已赋值
                     * @return IsEnable 是否已赋值
                     * 
                     */
                    bool IsEnableHasBeenSet() const;

                private:

                    /**
                     * Rule type
ESCAPE_CGROUPS: Escape by using the cgroup mechanism
ESCAPE_TAMPER_SENSITIVE_FILE: Escape by tampering with sensitive files
ESCAPE_DOCKER_API: Escape by accessing the Docker API
ESCAPE_VUL_OCCURRED: Escape vulnerability exploitation.
MOUNT_SENSITIVE_PATH: MOUNT SENSITIVE path
PRIVILEGE_CONTAINER_START: Privilege container
PRIVILEGE: Escape by program privilege escalation
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * Whether to enable. Valid values: `false` (no); `true` (yes).
                     */
                    bool m_isEnable;
                    bool m_isEnableHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCSS_V20201101_MODEL_ESCAPERULEENABLED_H_
