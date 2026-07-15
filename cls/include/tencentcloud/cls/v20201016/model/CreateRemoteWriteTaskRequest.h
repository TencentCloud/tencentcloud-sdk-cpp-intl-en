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

#ifndef TENCENTCLOUD_CLS_V20201016_MODEL_CREATEREMOTEWRITETASKREQUEST_H_
#define TENCENTCLOUD_CLS_V20201016_MODEL_CREATEREMOTEWRITETASKREQUEST_H_

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
                * CreateRemoteWriteTask request structure.
                */
                class CreateRemoteWriteTaskRequest : public AbstractModel
                {
                public:
                    CreateRemoteWriteTaskRequest();
                    ~CreateRemoteWriteTaskRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Log topic ID
                     * @return TopicId Log topic ID
                     * 
                     */
                    std::string GetTopicId() const;

                    /**
                     * 设置Log topic ID
                     * @param _topicId Log topic ID
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
                     * 获取Task Name
                     * @return Name Task Name
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置Task Name
                     * @param _name Task Name
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
                     * 获取Authentication type
- 0: No authentication
1: basic_auth 
2: token
                     * @return AuthType Authentication type
- 0: No authentication
1: basic_auth 
2: token
                     * 
                     */
                    uint64_t GetAuthType() const;

                    /**
                     * 设置Authentication type
- 0: No authentication
1: basic_auth 
2: token
                     * @param _authType Authentication type
- 0: No authentication
1: basic_auth 
2: token
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
                     * 获取Network type. Valid values: 1 private network; 2: public network.
                     * @return NetType Network type. Valid values: 1 private network; 2: public network.
                     * 
                     */
                    uint64_t GetNetType() const;

                    /**
                     * 设置Network type. Valid values: 1 private network; 2: public network.
                     * @param _netType Network type. Valid values: 1 private network; 2: public network.
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
0 CVM
1025 CLB
                     * @return VirtualGatewayType Backend service type
0 CVM
1025 CLB
                     * 
                     */
                    int64_t GetVirtualGatewayType() const;

                    /**
                     * 设置Backend service type
0 CVM
1025 CLB
                     * @param _virtualGatewayType Backend service type
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
                     * Log topic ID
                     */
                    std::string m_topicId;
                    bool m_topicIdHasBeenSet;

                    /**
                     * Task Name
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

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
                     * Authentication type
- 0: No authentication
1: basic_auth 
2: token
                     */
                    uint64_t m_authType;
                    bool m_authTypeHasBeenSet;

                    /**
                     * Network type. Valid values: 1 private network; 2: public network.
                     */
                    uint64_t m_netType;
                    bool m_netTypeHasBeenSet;

                    /**
                     * VPC id
                     */
                    std::string m_vpcId;
                    bool m_vpcIdHasBeenSet;

                    /**
                     * Authentication information
                     */
                    RemoteWriteAuthInfo m_authInfo;
                    bool m_authInfoHasBeenSet;

                    /**
                     * Backend service type
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

#endif // !TENCENTCLOUD_CLS_V20201016_MODEL_CREATEREMOTEWRITETASKREQUEST_H_
