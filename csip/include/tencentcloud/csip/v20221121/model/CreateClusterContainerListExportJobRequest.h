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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_CREATECLUSTERCONTAINERLISTEXPORTJOBREQUEST_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_CREATECLUSTERCONTAINERLISTEXPORTJOBREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/csip/v20221121/model/Filter.h>


namespace TencentCloud
{
    namespace Csip
    {
        namespace V20221121
        {
            namespace Model
            {
                /**
                * CreateClusterContainerListExportJob request structure.
                */
                class CreateClusterContainerListExportJobRequest : public AbstractModel
                {
                public:
                    CreateClusterContainerListExportJobRequest();
                    ~CreateClusterContainerListExportJobRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>Group account member id</p>
                     * @return MemberId <p>Group account member id</p>
                     * 
                     */
                    std::vector<std::string> GetMemberId() const;

                    /**
                     * 设置<p>Group account member id</p>
                     * @param _memberId <p>Group account member id</p>
                     * 
                     */
                    void SetMemberId(const std::vector<std::string>& _memberId);

                    /**
                     * 判断参数 MemberId 是否已赋值
                     * @return MemberId 是否已赋值
                     * 
                     */
                    bool MemberIdHasBeenSet() const;

                    /**
                     * 获取<p>List of universal filter criteria. Supported filter fields:<br>ContainerId: container ID, exact match.<br>ContainerName: container name, fuzzy match.<br>RunStatus: container running status, exact match. Values: RUNNING, PAUSED, STOPPED, CREATED, DESTROYED, RESTARTING, REMOVING, DEAD, UNKNOWN.<br>ImageId: image ID, exact match.<br>ImageName: image name, fuzzy match.<br>IsolateStatus: isolation status, exact match. Values: NORMAL (unisolated), ISOLATED (isolated), ISOLATING (isolating), ISOLATE_FAILED (isolation failed), RESTORING (restoring isolation), RESTORE_FAILED (isolation removal failed).<br>NodeUniqueId: unique ID of the node to which it belongs, exact match (NodeAssetId is an equivalent alias).<br>UUID: host UUID, exact match.</p>
                     * @return Filter <p>List of universal filter criteria. Supported filter fields:<br>ContainerId: container ID, exact match.<br>ContainerName: container name, fuzzy match.<br>RunStatus: container running status, exact match. Values: RUNNING, PAUSED, STOPPED, CREATED, DESTROYED, RESTARTING, REMOVING, DEAD, UNKNOWN.<br>ImageId: image ID, exact match.<br>ImageName: image name, fuzzy match.<br>IsolateStatus: isolation status, exact match. Values: NORMAL (unisolated), ISOLATED (isolated), ISOLATING (isolating), ISOLATE_FAILED (isolation failed), RESTORING (restoring isolation), RESTORE_FAILED (isolation removal failed).<br>NodeUniqueId: unique ID of the node to which it belongs, exact match (NodeAssetId is an equivalent alias).<br>UUID: host UUID, exact match.</p>
                     * 
                     */
                    Filter GetFilter() const;

                    /**
                     * 设置<p>List of universal filter criteria. Supported filter fields:<br>ContainerId: container ID, exact match.<br>ContainerName: container name, fuzzy match.<br>RunStatus: container running status, exact match. Values: RUNNING, PAUSED, STOPPED, CREATED, DESTROYED, RESTARTING, REMOVING, DEAD, UNKNOWN.<br>ImageId: image ID, exact match.<br>ImageName: image name, fuzzy match.<br>IsolateStatus: isolation status, exact match. Values: NORMAL (unisolated), ISOLATED (isolated), ISOLATING (isolating), ISOLATE_FAILED (isolation failed), RESTORING (restoring isolation), RESTORE_FAILED (isolation removal failed).<br>NodeUniqueId: unique ID of the node to which it belongs, exact match (NodeAssetId is an equivalent alias).<br>UUID: host UUID, exact match.</p>
                     * @param _filter <p>List of universal filter criteria. Supported filter fields:<br>ContainerId: container ID, exact match.<br>ContainerName: container name, fuzzy match.<br>RunStatus: container running status, exact match. Values: RUNNING, PAUSED, STOPPED, CREATED, DESTROYED, RESTARTING, REMOVING, DEAD, UNKNOWN.<br>ImageId: image ID, exact match.<br>ImageName: image name, fuzzy match.<br>IsolateStatus: isolation status, exact match. Values: NORMAL (unisolated), ISOLATED (isolated), ISOLATING (isolating), ISOLATE_FAILED (isolation failed), RESTORING (restoring isolation), RESTORE_FAILED (isolation removal failed).<br>NodeUniqueId: unique ID of the node to which it belongs, exact match (NodeAssetId is an equivalent alias).<br>UUID: host UUID, exact match.</p>
                     * 
                     */
                    void SetFilter(const Filter& _filter);

                    /**
                     * 判断参数 Filter 是否已赋值
                     * @return Filter 是否已赋值
                     * 
                     */
                    bool FilterHasBeenSet() const;

                    /**
                     * 获取<p>Cluster ca certificate md5 value, the unique identifier of the cluster</p>
                     * @return ClusterCaMD5 <p>Cluster ca certificate md5 value, the unique identifier of the cluster</p>
                     * 
                     */
                    std::string GetClusterCaMD5() const;

                    /**
                     * 设置<p>Cluster ca certificate md5 value, the unique identifier of the cluster</p>
                     * @param _clusterCaMD5 <p>Cluster ca certificate md5 value, the unique identifier of the cluster</p>
                     * 
                     */
                    void SetClusterCaMD5(const std::string& _clusterCaMD5);

                    /**
                     * 判断参数 ClusterCaMD5 是否已赋值
                     * @return ClusterCaMD5 是否已赋值
                     * 
                     */
                    bool ClusterCaMD5HasBeenSet() const;

                private:

                    /**
                     * <p>Group account member id</p>
                     */
                    std::vector<std::string> m_memberId;
                    bool m_memberIdHasBeenSet;

                    /**
                     * <p>List of universal filter criteria. Supported filter fields:<br>ContainerId: container ID, exact match.<br>ContainerName: container name, fuzzy match.<br>RunStatus: container running status, exact match. Values: RUNNING, PAUSED, STOPPED, CREATED, DESTROYED, RESTARTING, REMOVING, DEAD, UNKNOWN.<br>ImageId: image ID, exact match.<br>ImageName: image name, fuzzy match.<br>IsolateStatus: isolation status, exact match. Values: NORMAL (unisolated), ISOLATED (isolated), ISOLATING (isolating), ISOLATE_FAILED (isolation failed), RESTORING (restoring isolation), RESTORE_FAILED (isolation removal failed).<br>NodeUniqueId: unique ID of the node to which it belongs, exact match (NodeAssetId is an equivalent alias).<br>UUID: host UUID, exact match.</p>
                     */
                    Filter m_filter;
                    bool m_filterHasBeenSet;

                    /**
                     * <p>Cluster ca certificate md5 value, the unique identifier of the cluster</p>
                     */
                    std::string m_clusterCaMD5;
                    bool m_clusterCaMD5HasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_CREATECLUSTERCONTAINERLISTEXPORTJOBREQUEST_H_
