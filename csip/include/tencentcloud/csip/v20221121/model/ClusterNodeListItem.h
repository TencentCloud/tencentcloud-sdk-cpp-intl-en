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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_CLUSTERNODELISTITEM_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_CLUSTERNODELISTITEM_H_

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
                * Cluster node list item
                */
                class ClusterNodeListItem : public AbstractModel
                {
                public:
                    ClusterNodeListItem();
                    ~ClusterNodeListItem() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>Asset ID.</p>
                     * @return AssetId <p>Asset ID.</p>
                     * @deprecated
                     */
                    std::string GetAssetId() const;

                    /**
                     * 设置<p>Asset ID.</p>
                     * @param _assetId <p>Asset ID.</p>
                     * @deprecated
                     */
                    void SetAssetId(const std::string& _assetId);

                    /**
                     * 判断参数 AssetId 是否已赋值
                     * @return AssetId 是否已赋值
                     * @deprecated
                     */
                    bool AssetIdHasBeenSet() const;

                    /**
                     * 获取<p>appid</p>
                     * @return AppID <p>appid</p>
                     * 
                     */
                    uint64_t GetAppID() const;

                    /**
                     * 设置<p>appid</p>
                     * @param _appID <p>appid</p>
                     * 
                     */
                    void SetAppID(const uint64_t& _appID);

                    /**
                     * 判断参数 AppID 是否已赋值
                     * @return AppID 是否已赋值
                     * 
                     */
                    bool AppIDHasBeenSet() const;

                    /**
                     * 获取<p>Node ID.</p>
                     * @return NodeId <p>Node ID.</p>
                     * 
                     */
                    std::string GetNodeId() const;

                    /**
                     * 设置<p>Node ID.</p>
                     * @param _nodeId <p>Node ID.</p>
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
                     * 获取<p>Node name.</p>
                     * @return NodeName <p>Node name.</p>
                     * 
                     */
                    std::string GetNodeName() const;

                    /**
                     * 设置<p>Node name.</p>
                     * @param _nodeName <p>Node name.</p>
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
                     * 获取<p>Public ip address</p>
                     * @return PublicIP <p>Public ip address</p>
                     * 
                     */
                    std::string GetPublicIP() const;

                    /**
                     * 设置<p>Public ip address</p>
                     * @param _publicIP <p>Public ip address</p>
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
                     * 获取<p>Private ip</p>
                     * @return InternalIP <p>Private ip</p>
                     * 
                     */
                    std::string GetInternalIP() const;

                    /**
                     * 设置<p>Private ip</p>
                     * @param _internalIP <p>Private ip</p>
                     * 
                     */
                    void SetInternalIP(const std::string& _internalIP);

                    /**
                     * 判断参数 InternalIP 是否已赋值
                     * @return InternalIP 是否已赋值
                     * 
                     */
                    bool InternalIPHasBeenSet() const;

                    /**
                     * 获取<p>Node type</p>
                     * @return NodeType <p>Node type</p>
                     * 
                     */
                    std::string GetNodeType() const;

                    /**
                     * 设置<p>Node type</p>
                     * @param _nodeType <p>Node type</p>
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
                     * 获取<p>Number of cores.</p>
                     * @return CoresCount <p>Number of cores.</p>
                     * 
                     */
                    int64_t GetCoresCount() const;

                    /**
                     * 设置<p>Number of cores.</p>
                     * @param _coresCount <p>Number of cores.</p>
                     * 
                     */
                    void SetCoresCount(const int64_t& _coresCount);

                    /**
                     * 判断参数 CoresCount 是否已赋值
                     * @return CoresCount 是否已赋值
                     * 
                     */
                    bool CoresCountHasBeenSet() const;

                    /**
                     * 获取<p>Tag.</p>
                     * @return Tags <p>Tag.</p>
                     * 
                     */
                    std::vector<std::string> GetTags() const;

                    /**
                     * 设置<p>Tag.</p>
                     * @param _tags <p>Tag.</p>
                     * 
                     */
                    void SetTags(const std::vector<std::string>& _tags);

                    /**
                     * 判断参数 Tags 是否已赋值
                     * @return Tags 是否已赋值
                     * 
                     */
                    bool TagsHasBeenSet() const;

                    /**
                     * 获取<p>Running state</p>
                     * @return RunStatus <p>Running state</p>
                     * 
                     */
                    std::string GetRunStatus() const;

                    /**
                     * 设置<p>Running state</p>
                     * @param _runStatus <p>Running state</p>
                     * 
                     */
                    void SetRunStatus(const std::string& _runStatus);

                    /**
                     * 判断参数 RunStatus 是否已赋值
                     * @return RunStatus 是否已赋值
                     * 
                     */
                    bool RunStatusHasBeenSet() const;

                    /**
                     * 获取<p>Whether it is a new asset</p>
                     * @return IsNew <p>Whether it is a new asset</p>
                     * 
                     */
                    bool GetIsNew() const;

                    /**
                     * 设置<p>Whether it is a new asset</p>
                     * @param _isNew <p>Whether it is a new asset</p>
                     * 
                     */
                    void SetIsNew(const bool& _isNew);

                    /**
                     * 判断参数 IsNew 是否已赋值
                     * @return IsNew 是否已赋值
                     * 
                     */
                    bool IsNewHasBeenSet() const;

                    /**
                     * 获取<p>Unique ID of the node</p>
                     * @return UniqueID <p>Unique ID of the node</p>
                     * 
                     */
                    std::string GetUniqueID() const;

                    /**
                     * 设置<p>Unique ID of the node</p>
                     * @param _uniqueID <p>Unique ID of the node</p>
                     * 
                     */
                    void SetUniqueID(const std::string& _uniqueID);

                    /**
                     * 判断参数 UniqueID 是否已赋值
                     * @return UniqueID 是否已赋值
                     * 
                     */
                    bool UniqueIDHasBeenSet() const;

                    /**
                     * 获取<p>Client status</p><p>Enumeration values:</p><ul><li>ONLINE: online</li><li>OFFLINE: offline</li><li>UNINSTALL: not installed</li></ul>
                     * @return ClientStatus <p>Client status</p><p>Enumeration values:</p><ul><li>ONLINE: online</li><li>OFFLINE: offline</li><li>UNINSTALL: not installed</li></ul>
                     * 
                     */
                    std::string GetClientStatus() const;

                    /**
                     * 设置<p>Client status</p><p>Enumeration values:</p><ul><li>ONLINE: online</li><li>OFFLINE: offline</li><li>UNINSTALL: not installed</li></ul>
                     * @param _clientStatus <p>Client status</p><p>Enumeration values:</p><ul><li>ONLINE: online</li><li>OFFLINE: offline</li><li>UNINSTALL: not installed</li></ul>
                     * 
                     */
                    void SetClientStatus(const std::string& _clientStatus);

                    /**
                     * 判断参数 ClientStatus 是否已赋值
                     * @return ClientStatus 是否已赋值
                     * 
                     */
                    bool ClientStatusHasBeenSet() const;

                    /**
                     * 获取<p>Node instance ID</p>
                     * @return InstanceId <p>Node instance ID</p>
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置<p>Node instance ID</p>
                     * @param _instanceId <p>Node instance ID</p>
                     * 
                     */
                    void SetInstanceId(const std::string& _instanceId);

                    /**
                     * 判断参数 InstanceId 是否已赋值
                     * @return InstanceId 是否已赋值
                     * 
                     */
                    bool InstanceIdHasBeenSet() const;

                private:

                    /**
                     * <p>Asset ID.</p>
                     */
                    std::string m_assetId;
                    bool m_assetIdHasBeenSet;

                    /**
                     * <p>appid</p>
                     */
                    uint64_t m_appID;
                    bool m_appIDHasBeenSet;

                    /**
                     * <p>Node ID.</p>
                     */
                    std::string m_nodeId;
                    bool m_nodeIdHasBeenSet;

                    /**
                     * <p>Node name.</p>
                     */
                    std::string m_nodeName;
                    bool m_nodeNameHasBeenSet;

                    /**
                     * <p>Public ip address</p>
                     */
                    std::string m_publicIP;
                    bool m_publicIPHasBeenSet;

                    /**
                     * <p>Private ip</p>
                     */
                    std::string m_internalIP;
                    bool m_internalIPHasBeenSet;

                    /**
                     * <p>Node type</p>
                     */
                    std::string m_nodeType;
                    bool m_nodeTypeHasBeenSet;

                    /**
                     * <p>Number of cores.</p>
                     */
                    int64_t m_coresCount;
                    bool m_coresCountHasBeenSet;

                    /**
                     * <p>Tag.</p>
                     */
                    std::vector<std::string> m_tags;
                    bool m_tagsHasBeenSet;

                    /**
                     * <p>Running state</p>
                     */
                    std::string m_runStatus;
                    bool m_runStatusHasBeenSet;

                    /**
                     * <p>Whether it is a new asset</p>
                     */
                    bool m_isNew;
                    bool m_isNewHasBeenSet;

                    /**
                     * <p>Unique ID of the node</p>
                     */
                    std::string m_uniqueID;
                    bool m_uniqueIDHasBeenSet;

                    /**
                     * <p>Client status</p><p>Enumeration values:</p><ul><li>ONLINE: online</li><li>OFFLINE: offline</li><li>UNINSTALL: not installed</li></ul>
                     */
                    std::string m_clientStatus;
                    bool m_clientStatusHasBeenSet;

                    /**
                     * <p>Node instance ID</p>
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_CLUSTERNODELISTITEM_H_
