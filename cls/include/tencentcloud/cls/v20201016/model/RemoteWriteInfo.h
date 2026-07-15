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

#ifndef TENCENTCLOUD_CLS_V20201016_MODEL_REMOTEWRITEINFO_H_
#define TENCENTCLOUD_CLS_V20201016_MODEL_REMOTEWRITEINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
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
                * RemoteWrite configuration information.
                */
                class RemoteWriteInfo : public AbstractModel
                {
                public:
                    RemoteWriteInfo();
                    ~RemoteWriteInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Task ID
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return TaskId Task ID
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetTaskId() const;

                    /**
                     * 设置Task ID
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _taskId Task ID
Note: This field may return null, indicating that no valid values can be obtained.
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
                     * 获取Log topic ID
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return TopicId Log topic ID
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetTopicId() const;

                    /**
                     * 设置Log topic ID
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _topicId Log topic ID
Note: This field may return null, indicating that no valid values can be obtained.
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
                     * 获取RemoteWrite task name.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Name RemoteWrite task name.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置RemoteWrite task name.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _name RemoteWrite task name.
Note: This field may return null, indicating that no valid values can be obtained.
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
                     * 获取Network type.
Valid values: 1: private network
2: Public network
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return NetType Network type.
Valid values: 1: private network
2: Public network
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    uint64_t GetNetType() const;

                    /**
                     * 设置Network type.
Valid values: 1: private network
2: Public network
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _netType Network type.
Valid values: 1: private network
2: Public network
Note: This field may return null, indicating that no valid values can be obtained.
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
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return VpcId VPC id
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetVpcId() const;

                    /**
                     * 设置VPC id
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _vpcId VPC id
Note: This field may return null, indicating that no valid values can be obtained.
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
                     * 获取Task running status
1: Running
2: Suspend
3: Failure
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Status Task running status
1: Running
2: Suspend
3: Failure
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    int64_t GetStatus() const;

                    /**
                     * 设置Task running status
1: Running
2: Suspend
3: Failure
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _status Task running status
1: Running
2: Suspend
3: Failure
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetStatus(const int64_t& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取Creation time.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return CreateTime Creation time.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置Creation time.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _createTime Creation time.
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
                     * 获取Update time
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return UpdateTime Update time
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetUpdateTime() const;

                    /**
                     * 设置Update time
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _updateTime Update time
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetUpdateTime(const std::string& _updateTime);

                    /**
                     * 判断参数 UpdateTime 是否已赋值
                     * @return UpdateTime 是否已赋值
                     * 
                     */
                    bool UpdateTimeHasBeenSet() const;

                    /**
                     * 获取Target service name.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Target Target service name.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetTarget() const;

                    /**
                     * 设置Target service name.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _target Target service name.
Note: This field may return null, indicating that no valid values can be obtained.
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
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return RemoteWriteURL Destination address
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetRemoteWriteURL() const;

                    /**
                     * 设置Destination address
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _remoteWriteURL Destination address
Note: This field may return null, indicating that no valid values can be obtained.
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
Valid values: 0: no authentication; 1: basic_auth; 2: token.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return AuthType Authentication type
Valid values: 0: no authentication; 1: basic_auth; 2: token.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    uint64_t GetAuthType() const;

                    /**
                     * 设置Authentication type
Valid values: 0: no authentication; 1: basic_auth; 2: token.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _authType Authentication type
Valid values: 0: no authentication; 1: basic_auth; 2: token.
Note: This field may return null, indicating that no valid values can be obtained.
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
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return AuthInfo Authentication information
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    RemoteWriteAuthInfo GetAuthInfo() const;

                    /**
                     * 设置Authentication information
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _authInfo Authentication information
Note: This field may return null, indicating that no valid values can be obtained.
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
                     * 获取Logset
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return LogsetId Logset
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetLogsetId() const;

                    /**
                     * 设置Logset
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _logsetId Logset
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetLogsetId(const std::string& _logsetId);

                    /**
                     * 判断参数 LogsetId 是否已赋值
                     * @return LogsetId 是否已赋值
                     * 
                     */
                    bool LogsetIdHasBeenSet() const;

                    /**
                     * 获取Task status.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Enable Task status.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    uint64_t GetEnable() const;

                    /**
                     * 设置Task status.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _enable Task status.
Note: This field may return null, indicating that no valid values can be obtained.
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
                     * 获取Backend service type
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return VirtualGatewayType Backend service type
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    int64_t GetVirtualGatewayType() const;

                    /**
                     * 设置Backend service type
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _virtualGatewayType Backend service type
Note: This field may return null, indicating that no valid values can be obtained.
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
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_taskId;
                    bool m_taskIdHasBeenSet;

                    /**
                     * Log topic ID
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_topicId;
                    bool m_topicIdHasBeenSet;

                    /**
                     * RemoteWrite task name.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * Network type.
Valid values: 1: private network
2: Public network
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    uint64_t m_netType;
                    bool m_netTypeHasBeenSet;

                    /**
                     * VPC id
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_vpcId;
                    bool m_vpcIdHasBeenSet;

                    /**
                     * Task running status
1: Running
2: Suspend
3: Failure
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * Creation time.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * Update time
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_updateTime;
                    bool m_updateTimeHasBeenSet;

                    /**
                     * Target service name.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_target;
                    bool m_targetHasBeenSet;

                    /**
                     * Destination address
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_remoteWriteURL;
                    bool m_remoteWriteURLHasBeenSet;

                    /**
                     * Authentication type
Valid values: 0: no authentication; 1: basic_auth; 2: token.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    uint64_t m_authType;
                    bool m_authTypeHasBeenSet;

                    /**
                     * Authentication information
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    RemoteWriteAuthInfo m_authInfo;
                    bool m_authInfoHasBeenSet;

                    /**
                     * Logset
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_logsetId;
                    bool m_logsetIdHasBeenSet;

                    /**
                     * Task status.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    uint64_t m_enable;
                    bool m_enableHasBeenSet;

                    /**
                     * Backend service type
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t m_virtualGatewayType;
                    bool m_virtualGatewayTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CLS_V20201016_MODEL_REMOTEWRITEINFO_H_
