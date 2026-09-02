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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_CLUSTERCONTAINERLISTITEM_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_CLUSTERCONTAINERLISTITEM_H_

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
                * Cluster container list item
                */
                class ClusterContainerListItem : public AbstractModel
                {
                public:
                    ClusterContainerListItem();
                    ~ClusterContainerListItem() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


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
                     * 获取<p>Asset id</p>
                     * @return AssetId <p>Asset id</p>
                     * @deprecated
                     */
                    std::string GetAssetId() const;

                    /**
                     * 设置<p>Asset id</p>
                     * @param _assetId <p>Asset id</p>
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
                     * 获取<p>Container id</p>
                     * @return ContainerId <p>Container id</p>
                     * 
                     */
                    std::string GetContainerId() const;

                    /**
                     * 设置<p>Container id</p>
                     * @param _containerId <p>Container id</p>
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
                     * 获取<p>Container name</p>
                     * @return ContainerName <p>Container name</p>
                     * 
                     */
                    std::string GetContainerName() const;

                    /**
                     * 设置<p>Container name</p>
                     * @param _containerName <p>Container name</p>
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
                     * 获取<p>Unique pod id</p>
                     * @return PodUid <p>Unique pod id</p>
                     * 
                     */
                    std::string GetPodUid() const;

                    /**
                     * 设置<p>Unique pod id</p>
                     * @param _podUid <p>Unique pod id</p>
                     * 
                     */
                    void SetPodUid(const std::string& _podUid);

                    /**
                     * 判断参数 PodUid 是否已赋值
                     * @return PodUid 是否已赋值
                     * 
                     */
                    bool PodUidHasBeenSet() const;

                    /**
                     * 获取<p>Pod name.</p>
                     * @return PodName <p>Pod name.</p>
                     * 
                     */
                    std::string GetPodName() const;

                    /**
                     * 设置<p>Pod name.</p>
                     * @param _podName <p>Pod name.</p>
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
                     * 获取<p>Image ID.</p>
                     * @return ImageId <p>Image ID.</p>
                     * 
                     */
                    std::string GetImageId() const;

                    /**
                     * 设置<p>Image ID.</p>
                     * @param _imageId <p>Image ID.</p>
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
                     * 获取<p>Image name.</p>
                     * @return ImageName <p>Image name.</p>
                     * 
                     */
                    std::string GetImageName() const;

                    /**
                     * 设置<p>Image name.</p>
                     * @param _imageName <p>Image name.</p>
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
                     * 获取<p>Isolation status</p>
                     * @return IsolateStatus <p>Isolation status</p>
                     * 
                     */
                    std::string GetIsolateStatus() const;

                    /**
                     * 设置<p>Isolation status</p>
                     * @param _isolateStatus <p>Isolation status</p>
                     * 
                     */
                    void SetIsolateStatus(const std::string& _isolateStatus);

                    /**
                     * 判断参数 IsolateStatus 是否已赋值
                     * @return IsolateStatus 是否已赋值
                     * 
                     */
                    bool IsolateStatusHasBeenSet() const;

                    /**
                     * 获取<p>Critical risk count</p>
                     * @return RiskEventCriticalCount <p>Critical risk count</p>
                     * @deprecated
                     */
                    uint64_t GetRiskEventCriticalCount() const;

                    /**
                     * 设置<p>Critical risk count</p>
                     * @param _riskEventCriticalCount <p>Critical risk count</p>
                     * @deprecated
                     */
                    void SetRiskEventCriticalCount(const uint64_t& _riskEventCriticalCount);

                    /**
                     * 判断参数 RiskEventCriticalCount 是否已赋值
                     * @return RiskEventCriticalCount 是否已赋值
                     * @deprecated
                     */
                    bool RiskEventCriticalCountHasBeenSet() const;

                    /**
                     * 获取<p>Number of high-level risks</p>
                     * @return RiskEventHighCount <p>Number of high-level risks</p>
                     * @deprecated
                     */
                    uint64_t GetRiskEventHighCount() const;

                    /**
                     * 设置<p>Number of high-level risks</p>
                     * @param _riskEventHighCount <p>Number of high-level risks</p>
                     * @deprecated
                     */
                    void SetRiskEventHighCount(const uint64_t& _riskEventHighCount);

                    /**
                     * 判断参数 RiskEventHighCount 是否已赋值
                     * @return RiskEventHighCount 是否已赋值
                     * @deprecated
                     */
                    bool RiskEventHighCountHasBeenSet() const;

                    /**
                     * 获取<p>Number of medium-risk items</p>
                     * @return RiskEventMiddleCount <p>Number of medium-risk items</p>
                     * @deprecated
                     */
                    uint64_t GetRiskEventMiddleCount() const;

                    /**
                     * 设置<p>Number of medium-risk items</p>
                     * @param _riskEventMiddleCount <p>Number of medium-risk items</p>
                     * @deprecated
                     */
                    void SetRiskEventMiddleCount(const uint64_t& _riskEventMiddleCount);

                    /**
                     * 判断参数 RiskEventMiddleCount 是否已赋值
                     * @return RiskEventMiddleCount 是否已赋值
                     * @deprecated
                     */
                    bool RiskEventMiddleCountHasBeenSet() const;

                    /**
                     * 获取<p>Number of low risks</p>
                     * @return RiskEventLowCount <p>Number of low risks</p>
                     * @deprecated
                     */
                    uint64_t GetRiskEventLowCount() const;

                    /**
                     * 设置<p>Number of low risks</p>
                     * @param _riskEventLowCount <p>Number of low risks</p>
                     * @deprecated
                     */
                    void SetRiskEventLowCount(const uint64_t& _riskEventLowCount);

                    /**
                     * 判断参数 RiskEventLowCount 是否已赋值
                     * @return RiskEventLowCount 是否已赋值
                     * @deprecated
                     */
                    bool RiskEventLowCountHasBeenSet() const;

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

                    /**
                     * 获取<p>Number of associated alarms</p>
                     * @return AlarmCount <p>Number of associated alarms</p>
                     * 
                     */
                    uint64_t GetAlarmCount() const;

                    /**
                     * 设置<p>Number of associated alarms</p>
                     * @param _alarmCount <p>Number of associated alarms</p>
                     * 
                     */
                    void SetAlarmCount(const uint64_t& _alarmCount);

                    /**
                     * 判断参数 AlarmCount 是否已赋值
                     * @return AlarmCount 是否已赋值
                     * 
                     */
                    bool AlarmCountHasBeenSet() const;

                private:

                    /**
                     * <p>appid</p>
                     */
                    uint64_t m_appID;
                    bool m_appIDHasBeenSet;

                    /**
                     * <p>Asset id</p>
                     */
                    std::string m_assetId;
                    bool m_assetIdHasBeenSet;

                    /**
                     * <p>Container id</p>
                     */
                    std::string m_containerId;
                    bool m_containerIdHasBeenSet;

                    /**
                     * <p>Container name</p>
                     */
                    std::string m_containerName;
                    bool m_containerNameHasBeenSet;

                    /**
                     * <p>Running state</p>
                     */
                    std::string m_runStatus;
                    bool m_runStatusHasBeenSet;

                    /**
                     * <p>Node ID.</p>
                     */
                    std::string m_nodeId;
                    bool m_nodeIdHasBeenSet;

                    /**
                     * <p>Node type</p>
                     */
                    std::string m_nodeType;
                    bool m_nodeTypeHasBeenSet;

                    /**
                     * <p>Unique pod id</p>
                     */
                    std::string m_podUid;
                    bool m_podUidHasBeenSet;

                    /**
                     * <p>Pod name.</p>
                     */
                    std::string m_podName;
                    bool m_podNameHasBeenSet;

                    /**
                     * <p>Image ID.</p>
                     */
                    std::string m_imageId;
                    bool m_imageIdHasBeenSet;

                    /**
                     * <p>Image name.</p>
                     */
                    std::string m_imageName;
                    bool m_imageNameHasBeenSet;

                    /**
                     * <p>Isolation status</p>
                     */
                    std::string m_isolateStatus;
                    bool m_isolateStatusHasBeenSet;

                    /**
                     * <p>Critical risk count</p>
                     */
                    uint64_t m_riskEventCriticalCount;
                    bool m_riskEventCriticalCountHasBeenSet;

                    /**
                     * <p>Number of high-level risks</p>
                     */
                    uint64_t m_riskEventHighCount;
                    bool m_riskEventHighCountHasBeenSet;

                    /**
                     * <p>Number of medium-risk items</p>
                     */
                    uint64_t m_riskEventMiddleCount;
                    bool m_riskEventMiddleCountHasBeenSet;

                    /**
                     * <p>Number of low risks</p>
                     */
                    uint64_t m_riskEventLowCount;
                    bool m_riskEventLowCountHasBeenSet;

                    /**
                     * <p>Creation time.</p>
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * <p>Number of associated alarms</p>
                     */
                    uint64_t m_alarmCount;
                    bool m_alarmCountHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_CLUSTERCONTAINERLISTITEM_H_
