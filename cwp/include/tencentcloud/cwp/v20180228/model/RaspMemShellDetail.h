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

#ifndef TENCENTCLOUD_CWP_V20180228_MODEL_RASPMEMSHELLDETAIL_H_
#define TENCENTCLOUD_CWP_V20180228_MODEL_RASPMEMSHELLDETAIL_H_

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
                * Java webshell event information
                */
                class RaspMemShellDetail : public AbstractModel
                {
                public:
                    RaspMemShellDetail();
                    ~RaspMemShellDetail() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Event ID
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Id Event ID
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    uint64_t GetId() const;

                    /**
                     * 设置Event ID
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _id Event ID
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetId(const uint64_t& _id);

                    /**
                     * 判断参数 Id 是否已赋值
                     * @return Id 是否已赋值
                     * 
                     */
                    bool IdHasBeenSet() const;

                    /**
                     * 获取Server QUUID
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Quuid Server QUUID
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetQuuid() const;

                    /**
                     * 设置Server QUUID
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _quuid Server QUUID
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetQuuid(const std::string& _quuid);

                    /**
                     * 判断参数 Quuid 是否已赋值
                     * @return Quuid 是否已赋值
                     * 
                     */
                    bool QuuidHasBeenSet() const;

                    /**
                     * 获取Server name
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Alias Server name
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetAlias() const;

                    /**
                     * 设置Server name
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _alias Server name
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetAlias(const std::string& _alias);

                    /**
                     * 判断参数 Alias 是否已赋值
                     * @return Alias 是否已赋值
                     * 
                     */
                    bool AliasHasBeenSet() const;

                    /**
                     * 获取Instance ID
                     * @return InstanceID Instance ID
                     * 
                     */
                    std::string GetInstanceID() const;

                    /**
                     * 设置Instance ID
                     * @param _instanceID Instance ID
                     * 
                     */
                    void SetInstanceID(const std::string& _instanceID);

                    /**
                     * 判断参数 InstanceID 是否已赋值
                     * @return InstanceID 是否已赋值
                     * 
                     */
                    bool InstanceIDHasBeenSet() const;

                    /**
                     * 获取Private IP address
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return PrivateIp Private IP address
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetPrivateIp() const;

                    /**
                     * 设置Private IP address
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _privateIp Private IP address
Note: This field may return null, indicating that no valid values can be obtained.
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
                     * 获取Public IP address
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return PublicIp Public IP address
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetPublicIp() const;

                    /**
                     * 设置Public IP address
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _publicIp Public IP address
Note: This field may return null, indicating that no valid values can be obtained.
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
                     * 获取Host tag
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return HostTags Host tag
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::vector<std::string> GetHostTags() const;

                    /**
                     * 设置Host tag
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _hostTags Host tag
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetHostTags(const std::vector<std::string>& _hostTags);

                    /**
                     * 判断参数 HostTags 是否已赋值
                     * @return HostTags 是否已赋值
                     * 
                     */
                    bool HostTagsHasBeenSet() const;

                    /**
                     * 获取Memory Trojan Type. 0: Filter Type; 1: Listener Type; 2: Servlet Type; 3: Interceptors Type; 4: Agent Type; 5: Other
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Type Memory Trojan Type. 0: Filter Type; 1: Listener Type; 2: Servlet Type; 3: Interceptors Type; 4: Agent Type; 5: Other
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    uint64_t GetType() const;

                    /**
                     * 设置Memory Trojan Type. 0: Filter Type; 1: Listener Type; 2: Servlet Type; 3: Interceptors Type; 4: Agent Type; 5: Other
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _type Memory Trojan Type. 0: Filter Type; 1: Listener Type; 2: Servlet Type; 3: Interceptors Type; 4: Agent Type; 5: Other
Note: This field may return null, indicating that no valid values can be obtained.
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
                     * 获取Processing Status. 0 - Pending; 1 - Allowlisted; 2 - Deleted; 3 - Ignored; 4 - Manually Processed
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Status Processing Status. 0 - Pending; 1 - Allowlisted; 2 - Deleted; 3 - Ignored; 4 - Manually Processed
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    uint64_t GetStatus() const;

                    /**
                     * 设置Processing Status. 0 - Pending; 1 - Allowlisted; 2 - Deleted; 3 - Ignored; 4 - Manually Processed
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _status Processing Status. 0 - Pending; 1 - Allowlisted; 2 - Deleted; 3 - Ignored; 4 - Manually Processed
Note: This field may return null, indicating that no valid values can be obtained.
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
                     * 获取Associated class loader.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return ClassLoaderName Associated class loader.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetClassLoaderName() const;

                    /**
                     * 设置Associated class loader.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _classLoaderName Associated class loader.
Note: This field may return null, indicating that no valid values can be obtained.
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
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return SuperClassName Parent class name
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetSuperClassName() const;

                    /**
                     * 设置Parent class name
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _superClassName Parent class name
Note: This field may return null, indicating that no valid values can be obtained.
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
                     * 获取Inherited API
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Interfaces Inherited API
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetInterfaces() const;

                    /**
                     * 设置Inherited API
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _interfaces Inherited API
Note: This field may return null, indicating that no valid values can be obtained.
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
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Annotations Annotation
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetAnnotations() const;

                    /**
                     * 设置Annotation
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _annotations Annotation
Note: This field may return null, indicating that no valid values can be obtained.
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
                     * 获取Class name
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return ClassName Class name
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetClassName() const;

                    /**
                     * 设置Class name
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _className Class name
Note: This field may return null, indicating that no valid values can be obtained.
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
                     * 获取Class file md5
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Md5 Class file md5
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetMd5() const;

                    /**
                     * 设置Class file md5
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _md5 Class file md5
Note: This field may return null, indicating that no valid values can be obtained.
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
                     * 获取Process ID
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Pid Process ID
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    int64_t GetPid() const;

                    /**
                     * 设置Process ID
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _pid Process ID
Note: This field may return null, indicating that no valid values can be obtained.
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
                     * 获取Java Process Path
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Exe Java Process Path
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetExe() const;

                    /**
                     * 设置Java Process Path
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _exe Java Process Path
Note: This field may return null, indicating that no valid values can be obtained.
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
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Args Java process command line parameters
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetArgs() const;

                    /**
                     * 设置Java process command line parameters
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _args Java process command line parameters
Note: This field may return null, indicating that no valid values can be obtained.
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
                     * 获取Java Memory Horse Binary Code (base64)
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return ClassContent Java Memory Horse Binary Code (base64)
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetClassContent() const;

                    /**
                     * 设置Java Memory Horse Binary Code (base64)
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _classContent Java Memory Horse Binary Code (base64)
Note: This field may return null, indicating that no valid values can be obtained.
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
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return ClassContentPretty Java Memory Trojan Decompilation Code
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetClassContentPretty() const;

                    /**
                     * 设置Java Memory Trojan Decompilation Code
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _classContentPretty Java Memory Trojan Decompilation Code
Note: This field may return null, indicating that no valid values can be obtained.
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
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return EventDescription Event description
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetEventDescription() const;

                    /**
                     * 设置Event description
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _eventDescription Event description
Note: This field may return null, indicating that no valid values can be obtained.
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
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return SecurityAdvice Security advice
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetSecurityAdvice() const;

                    /**
                     * 设置Security advice
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _securityAdvice Security advice
Note: This field may return null, indicating that no valid values can be obtained.
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
                     * 获取First detection time
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return CreateTime First detection time
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置First detection time
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _createTime First detection time
Note: This field may return null, indicating that no valid values can be obtained.
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
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return RecentFoundTime Last detection time
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetRecentFoundTime() const;

                    /**
                     * 设置Last detection time
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _recentFoundTime Last detection time
Note: This field may return null, indicating that no valid values can be obtained.
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
                     * 获取Node name.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return NodeName Node name.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetNodeName() const;

                    /**
                     * 设置Node name.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _nodeName Node name.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetNodeName(const std::string& _nodeName);

                    /**
                     * 判断参数 NodeName 是否已赋值
                     * @return NodeName 是否已赋值
                     * 
                     */
                    bool NodeNameHasBeenSet() const;

                    /**
                     * 获取Node ID.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return NodeId Node ID.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetNodeId() const;

                    /**
                     * 设置Node ID.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _nodeId Node ID.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetNodeId(const std::string& _nodeId);

                    /**
                     * 判断参数 NodeId 是否已赋值
                     * @return NodeId 是否已赋值
                     * 
                     */
                    bool NodeIdHasBeenSet() const;

                    /**
                     * 获取Container name
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return ContainerName Container name
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetContainerName() const;

                    /**
                     * 设置Container name
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _containerName Container name
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetContainerName(const std::string& _containerName);

                    /**
                     * 判断参数 ContainerName 是否已赋值
                     * @return ContainerName 是否已赋值
                     * 
                     */
                    bool ContainerNameHasBeenSet() const;

                    /**
                     * 获取container id
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return ContainerId container id
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetContainerId() const;

                    /**
                     * 设置container id
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _containerId container id
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetContainerId(const std::string& _containerId);

                    /**
                     * 判断参数 ContainerId 是否已赋值
                     * @return ContainerId 是否已赋值
                     * 
                     */
                    bool ContainerIdHasBeenSet() const;

                    /**
                     * 获取Container running status
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return ContainerStatus Container running status
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetContainerStatus() const;

                    /**
                     * 设置Container running status
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _containerStatus Container running status
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetContainerStatus(const std::string& _containerStatus);

                    /**
                     * 判断参数 ContainerStatus 是否已赋值
                     * @return ContainerStatus 是否已赋值
                     * 
                     */
                    bool ContainerStatusHasBeenSet() const;

                    /**
                     * 获取Container isolation status
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return ContainerNetStatus Container isolation status
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetContainerNetStatus() const;

                    /**
                     * 设置Container isolation status
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _containerNetStatus Container isolation status
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetContainerNetStatus(const std::string& _containerNetStatus);

                    /**
                     * 判断参数 ContainerNetStatus 是否已赋值
                     * @return ContainerNetStatus 是否已赋值
                     * 
                     */
                    bool ContainerNetStatusHasBeenSet() const;

                    /**
                     * 获取Image ID
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return ImageId Image ID
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetImageId() const;

                    /**
                     * 设置Image ID
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _imageId Image ID
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetImageId(const std::string& _imageId);

                    /**
                     * 判断参数 ImageId 是否已赋值
                     * @return ImageId 是否已赋值
                     * 
                     */
                    bool ImageIdHasBeenSet() const;

                    /**
                     * 获取Image name
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return ImageName Image name
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetImageName() const;

                    /**
                     * 设置Image name
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _imageName Image name
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetImageName(const std::string& _imageName);

                    /**
                     * 判断参数 ImageName 是否已赋值
                     * @return ImageName 是否已赋值
                     * 
                     */
                    bool ImageNameHasBeenSet() const;

                    /**
                     * 获取Pod name
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return PodName Pod name
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetPodName() const;

                    /**
                     * 设置Pod name
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _podName Pod name
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetPodName(const std::string& _podName);

                    /**
                     * 判断参数 PodName 是否已赋值
                     * @return PodName 是否已赋值
                     * 
                     */
                    bool PodNameHasBeenSet() const;

                    /**
                     * 获取podip
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return PodIp podip
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetPodIp() const;

                    /**
                     * 设置podip
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _podIp podip
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetPodIp(const std::string& _podIp);

                    /**
                     * 判断参数 PodIp 是否已赋值
                     * @return PodIp 是否已赋值
                     * 
                     */
                    bool PodIpHasBeenSet() const;

                    /**
                     * 获取Cluster name.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return ClusterName Cluster name.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetClusterName() const;

                    /**
                     * 设置Cluster name.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _clusterName Cluster name.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetClusterName(const std::string& _clusterName);

                    /**
                     * 判断参数 ClusterName 是否已赋值
                     * @return ClusterName 是否已赋值
                     * 
                     */
                    bool ClusterNameHasBeenSet() const;

                    /**
                     * 获取Cluster ID.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return ClusterId Cluster ID.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetClusterId() const;

                    /**
                     * 设置Cluster ID.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _clusterId Cluster ID.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetClusterId(const std::string& _clusterId);

                    /**
                     * 判断参数 ClusterId 是否已赋值
                     * @return ClusterId 是否已赋值
                     * 
                     */
                    bool ClusterIdHasBeenSet() const;

                private:

                    /**
                     * Event ID
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    uint64_t m_id;
                    bool m_idHasBeenSet;

                    /**
                     * Server QUUID
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_quuid;
                    bool m_quuidHasBeenSet;

                    /**
                     * Server name
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_alias;
                    bool m_aliasHasBeenSet;

                    /**
                     * Instance ID
                     */
                    std::string m_instanceID;
                    bool m_instanceIDHasBeenSet;

                    /**
                     * Private IP address
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_privateIp;
                    bool m_privateIpHasBeenSet;

                    /**
                     * Public IP address
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_publicIp;
                    bool m_publicIpHasBeenSet;

                    /**
                     * Host tag
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<std::string> m_hostTags;
                    bool m_hostTagsHasBeenSet;

                    /**
                     * Memory Trojan Type. 0: Filter Type; 1: Listener Type; 2: Servlet Type; 3: Interceptors Type; 4: Agent Type; 5: Other
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    uint64_t m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * Processing Status. 0 - Pending; 1 - Allowlisted; 2 - Deleted; 3 - Ignored; 4 - Manually Processed
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    uint64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * Associated class loader.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_classLoaderName;
                    bool m_classLoaderNameHasBeenSet;

                    /**
                     * Parent class name
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_superClassName;
                    bool m_superClassNameHasBeenSet;

                    /**
                     * Inherited API
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_interfaces;
                    bool m_interfacesHasBeenSet;

                    /**
                     * Annotation
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_annotations;
                    bool m_annotationsHasBeenSet;

                    /**
                     * Class name
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_className;
                    bool m_classNameHasBeenSet;

                    /**
                     * Class file md5
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_md5;
                    bool m_md5HasBeenSet;

                    /**
                     * Process ID
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t m_pid;
                    bool m_pidHasBeenSet;

                    /**
                     * Java Process Path
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_exe;
                    bool m_exeHasBeenSet;

                    /**
                     * Java process command line parameters
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_args;
                    bool m_argsHasBeenSet;

                    /**
                     * Java Memory Horse Binary Code (base64)
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_classContent;
                    bool m_classContentHasBeenSet;

                    /**
                     * Java Memory Trojan Decompilation Code
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_classContentPretty;
                    bool m_classContentPrettyHasBeenSet;

                    /**
                     * Event description
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_eventDescription;
                    bool m_eventDescriptionHasBeenSet;

                    /**
                     * Security advice
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_securityAdvice;
                    bool m_securityAdviceHasBeenSet;

                    /**
                     * First detection time
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * Last detection time
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_recentFoundTime;
                    bool m_recentFoundTimeHasBeenSet;

                    /**
                     * Node name.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_nodeName;
                    bool m_nodeNameHasBeenSet;

                    /**
                     * Node ID.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_nodeId;
                    bool m_nodeIdHasBeenSet;

                    /**
                     * Container name
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_containerName;
                    bool m_containerNameHasBeenSet;

                    /**
                     * container id
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_containerId;
                    bool m_containerIdHasBeenSet;

                    /**
                     * Container running status
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_containerStatus;
                    bool m_containerStatusHasBeenSet;

                    /**
                     * Container isolation status
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_containerNetStatus;
                    bool m_containerNetStatusHasBeenSet;

                    /**
                     * Image ID
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_imageId;
                    bool m_imageIdHasBeenSet;

                    /**
                     * Image name
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_imageName;
                    bool m_imageNameHasBeenSet;

                    /**
                     * Pod name
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_podName;
                    bool m_podNameHasBeenSet;

                    /**
                     * podip
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_podIp;
                    bool m_podIpHasBeenSet;

                    /**
                     * Cluster name.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_clusterName;
                    bool m_clusterNameHasBeenSet;

                    /**
                     * Cluster ID.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_clusterId;
                    bool m_clusterIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CWP_V20180228_MODEL_RASPMEMSHELLDETAIL_H_
