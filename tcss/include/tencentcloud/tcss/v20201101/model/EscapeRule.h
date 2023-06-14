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

#ifndef TENCENTCLOUD_TCSS_V20201101_MODEL_ESCAPERULE_H_
#define TENCENTCLOUD_TCSS_V20201101_MODEL_ESCAPERULE_H_

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
                class EscapeRule : public AbstractModel
                {
                public:
                    EscapeRule();
                    ~EscapeRule() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Rule type   
`ESCAPE_HOST_ACESS_FILE`: Host file access escape.
   `ESCAPE_MOUNT_NAMESPACE`: Mount namespace escape.
   `ESCAPE_PRIVILEDGE`: Program privilege escalation escape.
   `ESCAPE_PRIVILEDGE_CONTAINER_START`: Privileged container startup escape.
   `ESCAPE_MOUNT_SENSITIVE_PTAH`: Sensitive path mount.
`ESCAPE_SYSCALL`: Syscall escape.
                     * @return Type Rule type   
`ESCAPE_HOST_ACESS_FILE`: Host file access escape.
   `ESCAPE_MOUNT_NAMESPACE`: Mount namespace escape.
   `ESCAPE_PRIVILEDGE`: Program privilege escalation escape.
   `ESCAPE_PRIVILEDGE_CONTAINER_START`: Privileged container startup escape.
   `ESCAPE_MOUNT_SENSITIVE_PTAH`: Sensitive path mount.
`ESCAPE_SYSCALL`: Syscall escape.
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置Rule type   
`ESCAPE_HOST_ACESS_FILE`: Host file access escape.
   `ESCAPE_MOUNT_NAMESPACE`: Mount namespace escape.
   `ESCAPE_PRIVILEDGE`: Program privilege escalation escape.
   `ESCAPE_PRIVILEDGE_CONTAINER_START`: Privileged container startup escape.
   `ESCAPE_MOUNT_SENSITIVE_PTAH`: Sensitive path mount.
`ESCAPE_SYSCALL`: Syscall escape.
                     * @param _type Rule type   
`ESCAPE_HOST_ACESS_FILE`: Host file access escape.
   `ESCAPE_MOUNT_NAMESPACE`: Mount namespace escape.
   `ESCAPE_PRIVILEDGE`: Program privilege escalation escape.
   `ESCAPE_PRIVILEDGE_CONTAINER_START`: Privileged container startup escape.
   `ESCAPE_MOUNT_SENSITIVE_PTAH`: Sensitive path mount.
`ESCAPE_SYSCALL`: Syscall escape.
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
                     * 获取Rule name
Host file access escape
Syscall escape
Mount namespace escape
Program privilege escalation escape
Privileged container startup escape
Sensitive path mount
                     * @return Name Rule name
Host file access escape
Syscall escape
Mount namespace escape
Program privilege escalation escape
Privileged container startup escape
Sensitive path mount
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置Rule name
Host file access escape
Syscall escape
Mount namespace escape
Program privilege escalation escape
Privileged container startup escape
Sensitive path mount
                     * @param _name Rule name
Host file access escape
Syscall escape
Mount namespace escape
Program privilege escalation escape
Privileged container startup escape
Sensitive path mount
                     * 
                     */
                    void SetName(const std::string& _name);

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     * 
                     */
                    bool NameHasBeenSet() const;

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

                    /**
                     * 获取Rule group. Valid values: `RISK_CONTAINER` (container in risk); `PROCESS_PRIVILEGE` (program privilege escalation); `CONTAINER_ESCAPE` (container escape).
                     * @return Group Rule group. Valid values: `RISK_CONTAINER` (container in risk); `PROCESS_PRIVILEGE` (program privilege escalation); `CONTAINER_ESCAPE` (container escape).
                     * 
                     */
                    std::string GetGroup() const;

                    /**
                     * 设置Rule group. Valid values: `RISK_CONTAINER` (container in risk); `PROCESS_PRIVILEGE` (program privilege escalation); `CONTAINER_ESCAPE` (container escape).
                     * @param _group Rule group. Valid values: `RISK_CONTAINER` (container in risk); `PROCESS_PRIVILEGE` (program privilege escalation); `CONTAINER_ESCAPE` (container escape).
                     * 
                     */
                    void SetGroup(const std::string& _group);

                    /**
                     * 判断参数 Group 是否已赋值
                     * @return Group 是否已赋值
                     * 
                     */
                    bool GroupHasBeenSet() const;

                private:

                    /**
                     * Rule type   
`ESCAPE_HOST_ACESS_FILE`: Host file access escape.
   `ESCAPE_MOUNT_NAMESPACE`: Mount namespace escape.
   `ESCAPE_PRIVILEDGE`: Program privilege escalation escape.
   `ESCAPE_PRIVILEDGE_CONTAINER_START`: Privileged container startup escape.
   `ESCAPE_MOUNT_SENSITIVE_PTAH`: Sensitive path mount.
`ESCAPE_SYSCALL`: Syscall escape.
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * Rule name
Host file access escape
Syscall escape
Mount namespace escape
Program privilege escalation escape
Privileged container startup escape
Sensitive path mount
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * Whether to enable. Valid values: `false` (no); `true` (yes).
                     */
                    bool m_isEnable;
                    bool m_isEnableHasBeenSet;

                    /**
                     * Rule group. Valid values: `RISK_CONTAINER` (container in risk); `PROCESS_PRIVILEGE` (program privilege escalation); `CONTAINER_ESCAPE` (container escape).
                     */
                    std::string m_group;
                    bool m_groupHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCSS_V20201101_MODEL_ESCAPERULE_H_
