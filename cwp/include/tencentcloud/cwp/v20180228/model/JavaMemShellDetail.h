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

#ifndef TENCENTCLOUD_CWP_V20180228_MODEL_JAVAMEMSHELLDETAIL_H_
#define TENCENTCLOUD_CWP_V20180228_MODEL_JAVAMEMSHELLDETAIL_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cwp/v20180228/model/MachineExtraInfo.h>


namespace TencentCloud
{
    namespace Cwp
    {
        namespace V20180228
        {
            namespace Model
            {
                /**
                * Java webshell event details
                */
                class JavaMemShellDetail : public AbstractModel
                {
                public:
                    JavaMemShellDetail();
                    ~JavaMemShellDetail() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Container name
                     * @return InstanceName Container name
                     * 
                     */
                    std::string GetInstanceName() const;

                    /**
                     * 设置Container name
                     * @param _instanceName Container name
                     * 
                     */
                    void SetInstanceName(const std::string& _instanceName);

                    /**
                     * 判断参数 InstanceName 是否已赋值
                     * @return InstanceName 是否已赋值
                     * 
                     */
                    bool InstanceNameHasBeenSet() const;

                    /**
                     * 获取Instance Status: RUNNING, STOPPED, SHUTDOWN...
                     * @return InstanceState Instance Status: RUNNING, STOPPED, SHUTDOWN...
                     * 
                     */
                    std::string GetInstanceState() const;

                    /**
                     * 设置Instance Status: RUNNING, STOPPED, SHUTDOWN...
                     * @param _instanceState Instance Status: RUNNING, STOPPED, SHUTDOWN...
                     * 
                     */
                    void SetInstanceState(const std::string& _instanceState);

                    /**
                     * 判断参数 InstanceState 是否已赋值
                     * @return InstanceState 是否已赋值
                     * 
                     */
                    bool InstanceStateHasBeenSet() const;

                    /**
                     * 获取Private IP address
                     * @return PrivateIp Private IP address
                     * 
                     */
                    std::string GetPrivateIp() const;

                    /**
                     * 设置Private IP address
                     * @param _privateIp Private IP address
                     * 
                     */
                    void SetPrivateIp(const std::string& _privateIp);

                    /**
                     * 判断参数 PrivateIp 是否已赋值
                     * @return PrivateIp 是否已赋值
                     * 
                     */
                    bool PrivateIpHasBeenSet() const;

                    /**
                     * 获取Public IP
                     * @return PublicIp Public IP
                     * 
                     */
                    std::string GetPublicIp() const;

                    /**
                     * 设置Public IP
                     * @param _publicIp Public IP
                     * 
                     */
                    void SetPublicIp(const std::string& _publicIp);

                    /**
                     * 判断参数 PublicIp 是否已赋值
                     * @return PublicIp 是否已赋值
                     * 
                     */
                    bool PublicIpHasBeenSet() const;

                    /**
                     * 获取Memory Trojan Type. 0: Filter Type; 1: Listener Type; 2: Servlet Type; 3: Interceptors Type; 4: Agent Type; 5: Other
                     * @return Type Memory Trojan Type. 0: Filter Type; 1: Listener Type; 2: Servlet Type; 3: Interceptors Type; 4: Agent Type; 5: Other
                     * 
                     */
                    uint64_t GetType() const;

                    /**
                     * 设置Memory Trojan Type. 0: Filter Type; 1: Listener Type; 2: Servlet Type; 3: Interceptors Type; 4: Agent Type; 5: Other
                     * @param _type Memory Trojan Type. 0: Filter Type; 1: Listener Type; 2: Servlet Type; 3: Interceptors Type; 4: Agent Type; 5: Other
                     * 
                     */
                    void SetType(const uint64_t& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     * 
                     */
                    bool TypeHasBeenSet() const;

                    /**
                     * 获取Description
                     * @return Description Description
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置Description
                     * @param _description Description
                     * 
                     */
                    void SetDescription(const std::string& _description);

                    /**
                     * 判断参数 Description 是否已赋值
                     * @return Description 是否已赋值
                     * 
                     */
                    bool DescriptionHasBeenSet() const;

                    /**
                     * 获取First detection time
                     * @return CreateTime First detection time
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置First detection time
                     * @param _createTime First detection time
                     * 
                     */
                    void SetCreateTime(const std::string& _createTime);

                    /**
                     * 判断参数 CreateTime 是否已赋值
                     * @return CreateTime 是否已赋值
                     * 
                     */
                    bool CreateTimeHasBeenSet() const;

                    /**
                     * 获取Last detection time
                     * @return RecentFoundTime Last detection time
                     * 
                     */
                    std::string GetRecentFoundTime() const;

                    /**
                     * 设置Last detection time
                     * @param _recentFoundTime Last detection time
                     * 
                     */
                    void SetRecentFoundTime(const std::string& _recentFoundTime);

                    /**
                     * 判断参数 RecentFoundTime 是否已赋值
                     * @return RecentFoundTime 是否已赋值
                     * 
                     */
                    bool RecentFoundTimeHasBeenSet() const;

                    /**
                     * 获取Processing Status. 0 - Pending; 1 - Allowlisted; 2 - Deleted; 3 - Ignored; 4 - Manually Processed
                     * @return Status Processing Status. 0 - Pending; 1 - Allowlisted; 2 - Deleted; 3 - Ignored; 4 - Manually Processed
                     * 
                     */
                    uint64_t GetStatus() const;

                    /**
                     * 设置Processing Status. 0 - Pending; 1 - Allowlisted; 2 - Deleted; 3 - Ignored; 4 - Manually Processed
                     * @param _status Processing Status. 0 - Pending; 1 - Allowlisted; 2 - Deleted; 3 - Ignored; 4 - Manually Processed
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
                     * 获取Java Loader Class Name
                     * @return ClassLoaderName Java Loader Class Name
                     * 
                     */
                    std::string GetClassLoaderName() const;

                    /**
                     * 设置Java Loader Class Name
                     * @param _classLoaderName Java Loader Class Name
                     * 
                     */
                    void SetClassLoaderName(const std::string& _classLoaderName);

                    /**
                     * 判断参数 ClassLoaderName 是否已赋值
                     * @return ClassLoaderName 是否已赋值
                     * 
                     */
                    bool ClassLoaderNameHasBeenSet() const;

                    /**
                     * 获取Parent class name
                     * @return SuperClassName Parent class name
                     * 
                     */
                    std::string GetSuperClassName() const;

                    /**
                     * 设置Parent class name
                     * @param _superClassName Parent class name
                     * 
                     */
                    void SetSuperClassName(const std::string& _superClassName);

                    /**
                     * 判断参数 SuperClassName 是否已赋值
                     * @return SuperClassName 是否已赋值
                     * 
                     */
                    bool SuperClassNameHasBeenSet() const;

                    /**
                     * 获取Class file MD5
                     * @return Md5 Class file MD5
                     * 
                     */
                    std::string GetMd5() const;

                    /**
                     * 设置Class file MD5
                     * @param _md5 Class file MD5
                     * 
                     */
                    void SetMd5(const std::string& _md5);

                    /**
                     * 判断参数 Md5 是否已赋值
                     * @return Md5 是否已赋值
                     * 
                     */
                    bool Md5HasBeenSet() const;

                    /**
                     * 获取Inherited API
                     * @return Interfaces Inherited API
                     * 
                     */
                    std::string GetInterfaces() const;

                    /**
                     * 设置Inherited API
                     * @param _interfaces Inherited API
                     * 
                     */
                    void SetInterfaces(const std::string& _interfaces);

                    /**
                     * 判断参数 Interfaces 是否已赋值
                     * @return Interfaces 是否已赋值
                     * 
                     */
                    bool InterfacesHasBeenSet() const;

                    /**
                     * 获取Annotation
                     * @return Annotations Annotation
                     * 
                     */
                    std::string GetAnnotations() const;

                    /**
                     * 设置Annotation
                     * @param _annotations Annotation
                     * 
                     */
                    void SetAnnotations(const std::string& _annotations);

                    /**
                     * 判断参数 Annotations 是否已赋值
                     * @return Annotations 是否已赋值
                     * 
                     */
                    bool AnnotationsHasBeenSet() const;

                    /**
                     * 获取Process ID
                     * @return Pid Process ID
                     * 
                     */
                    uint64_t GetPid() const;

                    /**
                     * 设置Process ID
                     * @param _pid Process ID
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
                     * 获取Java Process Path
                     * @return Exe Java Process Path
                     * 
                     */
                    std::string GetExe() const;

                    /**
                     * 设置Java Process Path
                     * @param _exe Java Process Path
                     * 
                     */
                    void SetExe(const std::string& _exe);

                    /**
                     * 判断参数 Exe 是否已赋值
                     * @return Exe 是否已赋值
                     * 
                     */
                    bool ExeHasBeenSet() const;

                    /**
                     * 获取Java process command line parameters
                     * @return Args Java process command line parameters
                     * 
                     */
                    std::string GetArgs() const;

                    /**
                     * 设置Java process command line parameters
                     * @param _args Java process command line parameters
                     * 
                     */
                    void SetArgs(const std::string& _args);

                    /**
                     * 判断参数 Args 是否已赋值
                     * @return Args 是否已赋值
                     * 
                     */
                    bool ArgsHasBeenSet() const;

                    /**
                     * 获取Class name
                     * @return ClassName Class name
                     * 
                     */
                    std::string GetClassName() const;

                    /**
                     * 设置Class name
                     * @param _className Class name
                     * 
                     */
                    void SetClassName(const std::string& _className);

                    /**
                     * 判断参数 ClassName 是否已赋值
                     * @return ClassName 是否已赋值
                     * 
                     */
                    bool ClassNameHasBeenSet() const;

                    /**
                     * 获取Java Memory Horse Binary Code (base64)
                     * @return ClassContent Java Memory Horse Binary Code (base64)
                     * 
                     */
                    std::string GetClassContent() const;

                    /**
                     * 设置Java Memory Horse Binary Code (base64)
                     * @param _classContent Java Memory Horse Binary Code (base64)
                     * 
                     */
                    void SetClassContent(const std::string& _classContent);

                    /**
                     * 判断参数 ClassContent 是否已赋值
                     * @return ClassContent 是否已赋值
                     * 
                     */
                    bool ClassContentHasBeenSet() const;

                    /**
                     * 获取Java Memory Trojan Decompilation Code
                     * @return ClassContentPretty Java Memory Trojan Decompilation Code
                     * 
                     */
                    std::string GetClassContentPretty() const;

                    /**
                     * 设置Java Memory Trojan Decompilation Code
                     * @param _classContentPretty Java Memory Trojan Decompilation Code
                     * 
                     */
                    void SetClassContentPretty(const std::string& _classContentPretty);

                    /**
                     * 判断参数 ClassContentPretty 是否已赋值
                     * @return ClassContentPretty 是否已赋值
                     * 
                     */
                    bool ClassContentPrettyHasBeenSet() const;

                    /**
                     * 获取Event description
                     * @return EventDescription Event description
                     * 
                     */
                    std::string GetEventDescription() const;

                    /**
                     * 设置Event description
                     * @param _eventDescription Event description
                     * 
                     */
                    void SetEventDescription(const std::string& _eventDescription);

                    /**
                     * 判断参数 EventDescription 是否已赋值
                     * @return EventDescription 是否已赋值
                     * 
                     */
                    bool EventDescriptionHasBeenSet() const;

                    /**
                     * 获取Security advice
                     * @return SecurityAdvice Security advice
                     * 
                     */
                    std::string GetSecurityAdvice() const;

                    /**
                     * 设置Security advice
                     * @param _securityAdvice Security advice
                     * 
                     */
                    void SetSecurityAdvice(const std::string& _securityAdvice);

                    /**
                     * 判断参数 SecurityAdvice 是否已赋值
                     * @return SecurityAdvice 是否已赋值
                     * 
                     */
                    bool SecurityAdviceHasBeenSet() const;

                    /**
                     * 获取Additional host information
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return MachineExtraInfo Additional host information
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    MachineExtraInfo GetMachineExtraInfo() const;

                    /**
                     * 设置Additional host information
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _machineExtraInfo Additional host information
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetMachineExtraInfo(const MachineExtraInfo& _machineExtraInfo);

                    /**
                     * 判断参数 MachineExtraInfo 是否已赋值
                     * @return MachineExtraInfo 是否已赋值
                     * 
                     */
                    bool MachineExtraInfoHasBeenSet() const;

                    /**
                     * 获取Instance status: RUNNING, STOPPED, SHUTDOWN...
                     * @return MachineState Instance status: RUNNING, STOPPED, SHUTDOWN...
                     * 
                     */
                    std::string GetMachineState() const;

                    /**
                     * 设置Instance status: RUNNING, STOPPED, SHUTDOWN...
                     * @param _machineState Instance status: RUNNING, STOPPED, SHUTDOWN...
                     * 
                     */
                    void SetMachineState(const std::string& _machineState);

                    /**
                     * 判断参数 MachineState 是否已赋值
                     * @return MachineState 是否已赋值
                     * 
                     */
                    bool MachineStateHasBeenSet() const;

                private:

                    /**
                     * Container name
                     */
                    std::string m_instanceName;
                    bool m_instanceNameHasBeenSet;

                    /**
                     * Instance Status: RUNNING, STOPPED, SHUTDOWN...
                     */
                    std::string m_instanceState;
                    bool m_instanceStateHasBeenSet;

                    /**
                     * Private IP address
                     */
                    std::string m_privateIp;
                    bool m_privateIpHasBeenSet;

                    /**
                     * Public IP
                     */
                    std::string m_publicIp;
                    bool m_publicIpHasBeenSet;

                    /**
                     * Memory Trojan Type. 0: Filter Type; 1: Listener Type; 2: Servlet Type; 3: Interceptors Type; 4: Agent Type; 5: Other
                     */
                    uint64_t m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * Description
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * First detection time
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * Last detection time
                     */
                    std::string m_recentFoundTime;
                    bool m_recentFoundTimeHasBeenSet;

                    /**
                     * Processing Status. 0 - Pending; 1 - Allowlisted; 2 - Deleted; 3 - Ignored; 4 - Manually Processed
                     */
                    uint64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * Java Loader Class Name
                     */
                    std::string m_classLoaderName;
                    bool m_classLoaderNameHasBeenSet;

                    /**
                     * Parent class name
                     */
                    std::string m_superClassName;
                    bool m_superClassNameHasBeenSet;

                    /**
                     * Class file MD5
                     */
                    std::string m_md5;
                    bool m_md5HasBeenSet;

                    /**
                     * Inherited API
                     */
                    std::string m_interfaces;
                    bool m_interfacesHasBeenSet;

                    /**
                     * Annotation
                     */
                    std::string m_annotations;
                    bool m_annotationsHasBeenSet;

                    /**
                     * Process ID
                     */
                    uint64_t m_pid;
                    bool m_pidHasBeenSet;

                    /**
                     * Java Process Path
                     */
                    std::string m_exe;
                    bool m_exeHasBeenSet;

                    /**
                     * Java process command line parameters
                     */
                    std::string m_args;
                    bool m_argsHasBeenSet;

                    /**
                     * Class name
                     */
                    std::string m_className;
                    bool m_classNameHasBeenSet;

                    /**
                     * Java Memory Horse Binary Code (base64)
                     */
                    std::string m_classContent;
                    bool m_classContentHasBeenSet;

                    /**
                     * Java Memory Trojan Decompilation Code
                     */
                    std::string m_classContentPretty;
                    bool m_classContentPrettyHasBeenSet;

                    /**
                     * Event description
                     */
                    std::string m_eventDescription;
                    bool m_eventDescriptionHasBeenSet;

                    /**
                     * Security advice
                     */
                    std::string m_securityAdvice;
                    bool m_securityAdviceHasBeenSet;

                    /**
                     * Additional host information
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    MachineExtraInfo m_machineExtraInfo;
                    bool m_machineExtraInfoHasBeenSet;

                    /**
                     * Instance status: RUNNING, STOPPED, SHUTDOWN...
                     */
                    std::string m_machineState;
                    bool m_machineStateHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CWP_V20180228_MODEL_JAVAMEMSHELLDETAIL_H_
