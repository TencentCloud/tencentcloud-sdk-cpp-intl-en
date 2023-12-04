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

#ifndef TENCENTCLOUD_TCSS_V20201101_MODEL_VULDEFENCEHOST_H_
#define TENCENTCLOUD_TCSS_V20201101_MODEL_VULDEFENCEHOST_H_

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
                * Information of the server with exploit prevention enabled
                */
                class VulDefenceHost : public AbstractModel
                {
                public:
                    VulDefenceHost();
                    ~VulDefenceHost() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取General node/Super node name
                     * @return HostName General node/Super node name
                     * 
                     */
                    std::string GetHostName() const;

                    /**
                     * 设置General node/Super node name
                     * @param _hostName General node/Super node name
                     * 
                     */
                    void SetHostName(const std::string& _hostName);

                    /**
                     * 判断参数 HostName 是否已赋值
                     * @return HostName 是否已赋值
                     * 
                     */
                    bool HostNameHasBeenSet() const;

                    /**
                     * 获取Server IP, which is the private IP
                     * @return HostIP Server IP, which is the private IP
                     * 
                     */
                    std::string GetHostIP() const;

                    /**
                     * 设置Server IP, which is the private IP
                     * @param _hostIP Server IP, which is the private IP
                     * 
                     */
                    void SetHostIP(const std::string& _hostIP);

                    /**
                     * 判断参数 HostIP 是否已赋值
                     * @return HostIP 是否已赋值
                     * 
                     */
                    bool HostIPHasBeenSet() const;

                    /**
                     * 获取Node QUuid/Super node ID
                     * @return HostID Node QUuid/Super node ID
                     * 
                     */
                    std::string GetHostID() const;

                    /**
                     * 设置Node QUuid/Super node ID
                     * @param _hostID Node QUuid/Super node ID
                     * 
                     */
                    void SetHostID(const std::string& _hostID);

                    /**
                     * 判断参数 HostID 是否已赋值
                     * @return HostID 是否已赋值
                     * 
                     */
                    bool HostIDHasBeenSet() const;

                    /**
                     * 获取Plugin status. Valid values: `SUCCESS` (normal); `FAIL` (abnormal); `NO_DEFENDED` (not defended).
                     * @return Status Plugin status. Valid values: `SUCCESS` (normal); `FAIL` (abnormal); `NO_DEFENDED` (not defended).
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置Plugin status. Valid values: `SUCCESS` (normal); `FAIL` (abnormal); `NO_DEFENDED` (not defended).
                     * @param _status Plugin status. Valid values: `SUCCESS` (normal); `FAIL` (abnormal); `NO_DEFENDED` (not defended).
                     * 
                     */
                    void SetStatus(const std::string& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取Public IP
                     * @return PublicIP Public IP
                     * 
                     */
                    std::string GetPublicIP() const;

                    /**
                     * 设置Public IP
                     * @param _publicIP Public IP
                     * 
                     */
                    void SetPublicIP(const std::string& _publicIP);

                    /**
                     * 判断参数 PublicIP 是否已赋值
                     * @return PublicIP 是否已赋值
                     * 
                     */
                    bool PublicIPHasBeenSet() const;

                    /**
                     * 获取First enablement time
                     * @return CreateTime First enablement time
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置First enablement time
                     * @param _createTime First enablement time
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
                     * @return ModifyTime Update time
                     * 
                     */
                    std::string GetModifyTime() const;

                    /**
                     * 设置Update time
                     * @param _modifyTime Update time
                     * 
                     */
                    void SetModifyTime(const std::string& _modifyTime);

                    /**
                     * 判断参数 ModifyTime 是否已赋值
                     * @return ModifyTime 是否已赋值
                     * 
                     */
                    bool ModifyTimeHasBeenSet() const;

                    /**
                     * 获取Node type. Values: `NORMAL` (general node), `SUPER` (super node).
                     * @return NodeType Node type. Values: `NORMAL` (general node), `SUPER` (super node).
                     * 
                     */
                    std::string GetNodeType() const;

                    /**
                     * 设置Node type. Values: `NORMAL` (general node), `SUPER` (super node).
                     * @param _nodeType Node type. Values: `NORMAL` (general node), `SUPER` (super node).
                     * 
                     */
                    void SetNodeType(const std::string& _nodeType);

                    /**
                     * 判断参数 NodeType 是否已赋值
                     * @return NodeType 是否已赋值
                     * 
                     */
                    bool NodeTypeHasBeenSet() const;

                    /**
                     * 获取Super node subnet name
                     * @return NodeSubNetName Super node subnet name
                     * 
                     */
                    std::string GetNodeSubNetName() const;

                    /**
                     * 设置Super node subnet name
                     * @param _nodeSubNetName Super node subnet name
                     * 
                     */
                    void SetNodeSubNetName(const std::string& _nodeSubNetName);

                    /**
                     * 判断参数 NodeSubNetName 是否已赋值
                     * @return NodeSubNetName 是否已赋值
                     * 
                     */
                    bool NodeSubNetNameHasBeenSet() const;

                    /**
                     * 获取Super node subnet IP range
                     * @return NodeSubNetCIDR Super node subnet IP range
                     * 
                     */
                    std::string GetNodeSubNetCIDR() const;

                    /**
                     * 设置Super node subnet IP range
                     * @param _nodeSubNetCIDR Super node subnet IP range
                     * 
                     */
                    void SetNodeSubNetCIDR(const std::string& _nodeSubNetCIDR);

                    /**
                     * 判断参数 NodeSubNetCIDR 是否已赋值
                     * @return NodeSubNetCIDR 是否已赋值
                     * 
                     */
                    bool NodeSubNetCIDRHasBeenSet() const;

                    /**
                     * 获取Super node subnet ID
                     * @return NodeSubNetID Super node subnet ID
                     * 
                     */
                    std::string GetNodeSubNetID() const;

                    /**
                     * 设置Super node subnet ID
                     * @param _nodeSubNetID Super node subnet ID
                     * 
                     */
                    void SetNodeSubNetID(const std::string& _nodeSubNetID);

                    /**
                     * 判断参数 NodeSubNetID 是否已赋值
                     * @return NodeSubNetID 是否已赋值
                     * 
                     */
                    bool NodeSubNetIDHasBeenSet() const;

                    /**
                     * 获取UID of a super node
                     * @return NodeUniqueID UID of a super node
                     * 
                     */
                    std::string GetNodeUniqueID() const;

                    /**
                     * 设置UID of a super node
                     * @param _nodeUniqueID UID of a super node
                     * 
                     */
                    void SetNodeUniqueID(const std::string& _nodeUniqueID);

                    /**
                     * 判断参数 NodeUniqueID 是否已赋值
                     * @return NodeUniqueID 是否已赋值
                     * 
                     */
                    bool NodeUniqueIDHasBeenSet() const;

                    /**
                     * 获取ID of a super node
                     * @return NodeID ID of a super node
                     * 
                     */
                    std::string GetNodeID() const;

                    /**
                     * 设置ID of a super node
                     * @param _nodeID ID of a super node
                     * 
                     */
                    void SetNodeID(const std::string& _nodeID);

                    /**
                     * 判断参数 NodeID 是否已赋值
                     * @return NodeID 是否已赋值
                     * 
                     */
                    bool NodeIDHasBeenSet() const;

                    /**
                     * 获取Pod IP
                     * @return PodIP Pod IP
                     * 
                     */
                    std::string GetPodIP() const;

                    /**
                     * 设置Pod IP
                     * @param _podIP Pod IP
                     * 
                     */
                    void SetPodIP(const std::string& _podIP);

                    /**
                     * 判断参数 PodIP 是否已赋值
                     * @return PodIP 是否已赋值
                     * 
                     */
                    bool PodIPHasBeenSet() const;

                    /**
                     * 获取Pod name
                     * @return PodName Pod name
                     * 
                     */
                    std::string GetPodName() const;

                    /**
                     * 设置Pod name
                     * @param _podName Pod name
                     * 
                     */
                    void SetPodName(const std::string& _podName);

                    /**
                     * 判断参数 PodName 是否已赋值
                     * @return PodName 是否已赋值
                     * 
                     */
                    bool PodNameHasBeenSet() const;

                private:

                    /**
                     * General node/Super node name
                     */
                    std::string m_hostName;
                    bool m_hostNameHasBeenSet;

                    /**
                     * Server IP, which is the private IP
                     */
                    std::string m_hostIP;
                    bool m_hostIPHasBeenSet;

                    /**
                     * Node QUuid/Super node ID
                     */
                    std::string m_hostID;
                    bool m_hostIDHasBeenSet;

                    /**
                     * Plugin status. Valid values: `SUCCESS` (normal); `FAIL` (abnormal); `NO_DEFENDED` (not defended).
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * Public IP
                     */
                    std::string m_publicIP;
                    bool m_publicIPHasBeenSet;

                    /**
                     * First enablement time
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * Update time
                     */
                    std::string m_modifyTime;
                    bool m_modifyTimeHasBeenSet;

                    /**
                     * Node type. Values: `NORMAL` (general node), `SUPER` (super node).
                     */
                    std::string m_nodeType;
                    bool m_nodeTypeHasBeenSet;

                    /**
                     * Super node subnet name
                     */
                    std::string m_nodeSubNetName;
                    bool m_nodeSubNetNameHasBeenSet;

                    /**
                     * Super node subnet IP range
                     */
                    std::string m_nodeSubNetCIDR;
                    bool m_nodeSubNetCIDRHasBeenSet;

                    /**
                     * Super node subnet ID
                     */
                    std::string m_nodeSubNetID;
                    bool m_nodeSubNetIDHasBeenSet;

                    /**
                     * UID of a super node
                     */
                    std::string m_nodeUniqueID;
                    bool m_nodeUniqueIDHasBeenSet;

                    /**
                     * ID of a super node
                     */
                    std::string m_nodeID;
                    bool m_nodeIDHasBeenSet;

                    /**
                     * Pod IP
                     */
                    std::string m_podIP;
                    bool m_podIPHasBeenSet;

                    /**
                     * Pod name
                     */
                    std::string m_podName;
                    bool m_podNameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCSS_V20201101_MODEL_VULDEFENCEHOST_H_
