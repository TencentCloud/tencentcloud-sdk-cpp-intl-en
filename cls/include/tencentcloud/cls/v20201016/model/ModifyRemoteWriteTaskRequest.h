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

#ifndef TENCENTCLOUD_CLS_V20201016_MODEL_MODIFYREMOTEWRITETASKREQUEST_H_
#define TENCENTCLOUD_CLS_V20201016_MODEL_MODIFYREMOTEWRITETASKREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cls/v20201016/model/RemoteWriteAuthInfo.h>


namespace TencentCloud
{
    namespace Cls
    {
        namespace V20201016
        {
            namespace Model
            {
                /**
                * ModifyRemoteWriteTask request structure.
                */
                class ModifyRemoteWriteTaskRequest : public AbstractModel
                {
                public:
                    ModifyRemoteWriteTaskRequest();
                    ~ModifyRemoteWriteTaskRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Task ID
                     * @return TaskId Task ID
                     * 
                     */
                    std::string GetTaskId() const;

                    /**
                     * 设置Task ID
                     * @param _taskId Task ID
                     * 
                     */
                    void SetTaskId(const std::string& _taskId);

                    /**
                     * 判断参数 TaskId 是否已赋值
                     * @return TaskId 是否已赋值
                     * 
                     */
                    bool TaskIdHasBeenSet() const;

                    /**
                     * 获取Log topic id
                     * @return TopicId Log topic id
                     * 
                     */
                    std::string GetTopicId() const;

                    /**
                     * 设置Log topic id
                     * @param _topicId Log topic id
                     * 
                     */
                    void SetTopicId(const std::string& _topicId);

                    /**
                     * 判断参数 TopicId 是否已赋值
                     * @return TopicId 是否已赋值
                     * 
                     */
                    bool TopicIdHasBeenSet() const;

                    /**
                     * 获取Task status.
0: disabled, 1: enabled.
                     * @return Enable Task status.
0: disabled, 1: enabled.
                     * 
                     */
                    uint64_t GetEnable() const;

                    /**
                     * 设置Task status.
0: disabled, 1: enabled.
                     * @param _enable Task status.
0: disabled, 1: enabled.
                     * 
                     */
                    void SetEnable(const uint64_t& _enable);

                    /**
                     * 判断参数 Enable 是否已赋值
                     * @return Enable 是否已赋值
                     * 
                     */
                    bool EnableHasBeenSet() const;

                    /**
                     * 获取RemoteWrite task name.
                     * @return Name RemoteWrite task name.
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置RemoteWrite task name.
                     * @param _name RemoteWrite task name.
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
                     * 获取Valid values: 1: private network; 2: public network.
                     * @return NetType Valid values: 1: private network; 2: public network.
                     * 
                     */
                    uint64_t GetNetType() const;

                    /**
                     * 设置Valid values: 1: private network; 2: public network.
                     * @param _netType Valid values: 1: private network; 2: public network.
                     * 
                     */
                    void SetNetType(const uint64_t& _netType);

                    /**
                     * 判断参数 NetType 是否已赋值
                     * @return NetType 是否已赋值
                     * 
                     */
                    bool NetTypeHasBeenSet() const;

                    /**
                     * 获取VPC id
                     * @return VpcId VPC id
                     * 
                     */
                    std::string GetVpcId() const;

                    /**
                     * 设置VPC id
                     * @param _vpcId VPC id
                     * 
                     */
                    void SetVpcId(const std::string& _vpcId);

                    /**
                     * 判断参数 VpcId 是否已赋值
                     * @return VpcId 是否已赋值
                     * 
                     */
                    bool VpcIdHasBeenSet() const;

                    /**
                     * 获取Target service name.
                     * @return Target Target service name.
                     * 
                     */
                    std::string GetTarget() const;

                    /**
                     * 设置Target service name.
                     * @param _target Target service name.
                     * 
                     */
                    void SetTarget(const std::string& _target);

                    /**
                     * 判断参数 Target 是否已赋值
                     * @return Target 是否已赋值
                     * 
                     */
                    bool TargetHasBeenSet() const;

                    /**
                     * 获取Destination address
                     * @return RemoteWriteURL Destination address
                     * 
                     */
                    std::string GetRemoteWriteURL() const;

                    /**
                     * 设置Destination address
                     * @param _remoteWriteURL Destination address
                     * 
                     */
                    void SetRemoteWriteURL(const std::string& _remoteWriteURL);

                    /**
                     * 判断参数 RemoteWriteURL 是否已赋值
                     * @return RemoteWriteURL 是否已赋值
                     * 
                     */
                    bool RemoteWriteURLHasBeenSet() const;

                    /**
                     * 获取Valid values: 0: no authentication; 1: basic_auth; 2: token.	
                     * @return AuthType Valid values: 0: no authentication; 1: basic_auth; 2: token.	
                     * 
                     */
                    uint64_t GetAuthType() const;

                    /**
                     * 设置Valid values: 0: no authentication; 1: basic_auth; 2: token.	
                     * @param _authType Valid values: 0: no authentication; 1: basic_auth; 2: token.	
                     * 
                     */
                    void SetAuthType(const uint64_t& _authType);

                    /**
                     * 判断参数 AuthType 是否已赋值
                     * @return AuthType 是否已赋值
                     * 
                     */
                    bool AuthTypeHasBeenSet() const;

                    /**
                     * 获取Authentication information
                     * @return AuthInfo Authentication information
                     * 
                     */
                    RemoteWriteAuthInfo GetAuthInfo() const;

                    /**
                     * 设置Authentication information
                     * @param _authInfo Authentication information
                     * 
                     */
                    void SetAuthInfo(const RemoteWriteAuthInfo& _authInfo);

                    /**
                     * 判断参数 AuthInfo 是否已赋值
                     * @return AuthInfo 是否已赋值
                     * 
                     */
                    bool AuthInfoHasBeenSet() const;

                    /**
                     * 获取Backend service type
-1 No
0 CVM
1025 CLB
                     * @return VirtualGatewayType Backend service type
-1 No
0 CVM
1025 CLB
                     * 
                     */
                    int64_t GetVirtualGatewayType() const;

                    /**
                     * 设置Backend service type
-1 No
0 CVM
1025 CLB
                     * @param _virtualGatewayType Backend service type
-1 No
0 CVM
1025 CLB
                     * 
                     */
                    void SetVirtualGatewayType(const int64_t& _virtualGatewayType);

                    /**
                     * 判断参数 VirtualGatewayType 是否已赋值
                     * @return VirtualGatewayType 是否已赋值
                     * 
                     */
                    bool VirtualGatewayTypeHasBeenSet() const;

                private:

                    /**
                     * Task ID
                     */
                    std::string m_taskId;
                    bool m_taskIdHasBeenSet;

                    /**
                     * Log topic id
                     */
                    std::string m_topicId;
                    bool m_topicIdHasBeenSet;

                    /**
                     * Task status.
0: disabled, 1: enabled.
                     */
                    uint64_t m_enable;
                    bool m_enableHasBeenSet;

                    /**
                     * RemoteWrite task name.
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * Valid values: 1: private network; 2: public network.
                     */
                    uint64_t m_netType;
                    bool m_netTypeHasBeenSet;

                    /**
                     * VPC id
                     */
                    std::string m_vpcId;
                    bool m_vpcIdHasBeenSet;

                    /**
                     * Target service name.
                     */
                    std::string m_target;
                    bool m_targetHasBeenSet;

                    /**
                     * Destination address
                     */
                    std::string m_remoteWriteURL;
                    bool m_remoteWriteURLHasBeenSet;

                    /**
                     * Valid values: 0: no authentication; 1: basic_auth; 2: token.	
                     */
                    uint64_t m_authType;
                    bool m_authTypeHasBeenSet;

                    /**
                     * Authentication information
                     */
                    RemoteWriteAuthInfo m_authInfo;
                    bool m_authInfoHasBeenSet;

                    /**
                     * Backend service type
-1 No
0 CVM
1025 CLB
                     */
                    int64_t m_virtualGatewayType;
                    bool m_virtualGatewayTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CLS_V20201016_MODEL_MODIFYREMOTEWRITETASKREQUEST_H_
