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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_MACHINECLEARHISTORY_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_MACHINECLEARHISTORY_H_

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
                * Machine Cleanup Record Object
                */
                class MachineClearHistory : public AbstractModel
                {
                public:
                    MachineClearHistory();
                    ~MachineClearHistory() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>ID value</p>
                     * @return Id <p>ID value</p>
                     * 
                     */
                    uint64_t GetId() const;

                    /**
                     * 设置<p>ID value</p>
                     * @param _id <p>ID value</p>
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
                     * 获取<p>Instance ID.</p>
                     * @return InstanceId <p>Instance ID.</p>
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置<p>Instance ID.</p>
                     * @param _instanceId <p>Instance ID.</p>
                     * 
                     */
                    void SetInstanceId(const std::string& _instanceId);

                    /**
                     * 判断参数 InstanceId 是否已赋值
                     * @return InstanceId 是否已赋值
                     * 
                     */
                    bool InstanceIdHasBeenSet() const;

                    /**
                     * 获取<p>Instance name.</p>
                     * @return InstanceName <p>Instance name.</p>
                     * 
                     */
                    std::string GetInstanceName() const;

                    /**
                     * 设置<p>Instance name.</p>
                     * @param _instanceName <p>Instance name.</p>
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
                     * 获取<p>Public IP address</p>
                     * @return PublicIp <p>Public IP address</p>
                     * 
                     */
                    std::string GetPublicIp() const;

                    /**
                     * 设置<p>Public IP address</p>
                     * @param _publicIp <p>Public IP address</p>
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
                     * 获取<p>Private IP address.</p>
                     * @return PrivateIp <p>Private IP address.</p>
                     * 
                     */
                    std::string GetPrivateIp() const;

                    /**
                     * 设置<p>Private IP address.</p>
                     * @param _privateIp <p>Private IP address.</p>
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
                     * 获取<p>Client's last offline time</p>
                     * @return AgentLastOfflineTime <p>Client's last offline time</p>
                     * 
                     */
                    std::string GetAgentLastOfflineTime() const;

                    /**
                     * 设置<p>Client's last offline time</p>
                     * @param _agentLastOfflineTime <p>Client's last offline time</p>
                     * 
                     */
                    void SetAgentLastOfflineTime(const std::string& _agentLastOfflineTime);

                    /**
                     * 判断参数 AgentLastOfflineTime 是否已赋值
                     * @return AgentLastOfflineTime 是否已赋值
                     * 
                     */
                    bool AgentLastOfflineTimeHasBeenSet() const;

                    /**
                     * 获取<p>Creation time.</p>
                     * @return CreateTime <p>Creation time.</p>
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置<p>Creation time.</p>
                     * @param _createTime <p>Creation time.</p>
                     * 
                     */
                    void SetCreateTime(const std::string& _createTime);

                    /**
                     * 判断参数 CreateTime 是否已赋值
                     * @return CreateTime 是否已赋值
                     * 
                     */
                    bool CreateTimeHasBeenSet() const;

                private:

                    /**
                     * <p>ID value</p>
                     */
                    uint64_t m_id;
                    bool m_idHasBeenSet;

                    /**
                     * <p>Instance ID.</p>
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * <p>Instance name.</p>
                     */
                    std::string m_instanceName;
                    bool m_instanceNameHasBeenSet;

                    /**
                     * <p>Public IP address</p>
                     */
                    std::string m_publicIp;
                    bool m_publicIpHasBeenSet;

                    /**
                     * <p>Private IP address.</p>
                     */
                    std::string m_privateIp;
                    bool m_privateIpHasBeenSet;

                    /**
                     * <p>Client's last offline time</p>
                     */
                    std::string m_agentLastOfflineTime;
                    bool m_agentLastOfflineTimeHasBeenSet;

                    /**
                     * <p>Creation time.</p>
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_MACHINECLEARHISTORY_H_
