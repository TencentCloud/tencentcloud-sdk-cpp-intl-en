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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_CREATECLUSTERNODELISTEXPORTJOBREQUEST_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_CREATECLUSTERNODELISTEXPORTJOBREQUEST_H_

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
                * CreateClusterNodeListExportJob request structure.
                */
                class CreateClusterNodeListExportJobRequest : public AbstractModel
                {
                public:
                    CreateClusterNodeListExportJobRequest();
                    ~CreateClusterNodeListExportJobRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>Cluster CA certificate MD5 (32-bit hexadecimal; unique ID)<br>Input limitation: length must equal 32 characters</p>
                     * @return ClusterCaMD5 <p>Cluster CA certificate MD5 (32-bit hexadecimal; unique ID)<br>Input limitation: length must equal 32 characters</p>
                     * 
                     */
                    std::string GetClusterCaMD5() const;

                    /**
                     * 设置<p>Cluster CA certificate MD5 (32-bit hexadecimal; unique ID)<br>Input limitation: length must equal 32 characters</p>
                     * @param _clusterCaMD5 <p>Cluster CA certificate MD5 (32-bit hexadecimal; unique ID)<br>Input limitation: length must equal 32 characters</p>
                     * 
                     */
                    void SetClusterCaMD5(const std::string& _clusterCaMD5);

                    /**
                     * 判断参数 ClusterCaMD5 是否已赋值
                     * @return ClusterCaMD5 是否已赋值
                     * 
                     */
                    bool ClusterCaMD5HasBeenSet() const;

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
                     * 获取<p>List of Universal Filter Criteria. Supported filter fields:<br>NodeName: node name, fuzzy matching.<br>NodeId: node ID, exact matching.<br>NodeUniqueID: node unique ID, exact matching (NodeAssetID is an equivalent alias).<br>NodeType: node type, exact matching. Values: SUPER (super node), MASTER (primary node), WORKER (work node).<br>RunStatus: node running status, exact matching.<br>InternalIP: private IP address, exact matching.<br>ClientStatus: client status, exact matching. Values: ONLINE (online), OFFLINE (offline), UNINSTALL (not installed).</p>
                     * @return Filter <p>List of Universal Filter Criteria. Supported filter fields:<br>NodeName: node name, fuzzy matching.<br>NodeId: node ID, exact matching.<br>NodeUniqueID: node unique ID, exact matching (NodeAssetID is an equivalent alias).<br>NodeType: node type, exact matching. Values: SUPER (super node), MASTER (primary node), WORKER (work node).<br>RunStatus: node running status, exact matching.<br>InternalIP: private IP address, exact matching.<br>ClientStatus: client status, exact matching. Values: ONLINE (online), OFFLINE (offline), UNINSTALL (not installed).</p>
                     * 
                     */
                    Filter GetFilter() const;

                    /**
                     * 设置<p>List of Universal Filter Criteria. Supported filter fields:<br>NodeName: node name, fuzzy matching.<br>NodeId: node ID, exact matching.<br>NodeUniqueID: node unique ID, exact matching (NodeAssetID is an equivalent alias).<br>NodeType: node type, exact matching. Values: SUPER (super node), MASTER (primary node), WORKER (work node).<br>RunStatus: node running status, exact matching.<br>InternalIP: private IP address, exact matching.<br>ClientStatus: client status, exact matching. Values: ONLINE (online), OFFLINE (offline), UNINSTALL (not installed).</p>
                     * @param _filter <p>List of Universal Filter Criteria. Supported filter fields:<br>NodeName: node name, fuzzy matching.<br>NodeId: node ID, exact matching.<br>NodeUniqueID: node unique ID, exact matching (NodeAssetID is an equivalent alias).<br>NodeType: node type, exact matching. Values: SUPER (super node), MASTER (primary node), WORKER (work node).<br>RunStatus: node running status, exact matching.<br>InternalIP: private IP address, exact matching.<br>ClientStatus: client status, exact matching. Values: ONLINE (online), OFFLINE (offline), UNINSTALL (not installed).</p>
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
                     * 获取<p>Export field list (all fields will be exported if not specified)<br>Enumeration values:<br>NodeId: node ID<br>NodeName: node name<br>PublicIP: public IP address<br>InternalIP: private IP address<br>NodeType: node type (NORMAL common node / SUPER Super Node / WORKER / MASTER / ETCD)<br>CoresCount: core count<br>ClientStatus: client status (ONLINE online / OFFLINE offline / UNINSTALL not installed)<br>RunStatus: running state (Running running / Exception exception)</p>
                     * @return ExportFields <p>Export field list (all fields will be exported if not specified)<br>Enumeration values:<br>NodeId: node ID<br>NodeName: node name<br>PublicIP: public IP address<br>InternalIP: private IP address<br>NodeType: node type (NORMAL common node / SUPER Super Node / WORKER / MASTER / ETCD)<br>CoresCount: core count<br>ClientStatus: client status (ONLINE online / OFFLINE offline / UNINSTALL not installed)<br>RunStatus: running state (Running running / Exception exception)</p>
                     * 
                     */
                    std::vector<std::string> GetExportFields() const;

                    /**
                     * 设置<p>Export field list (all fields will be exported if not specified)<br>Enumeration values:<br>NodeId: node ID<br>NodeName: node name<br>PublicIP: public IP address<br>InternalIP: private IP address<br>NodeType: node type (NORMAL common node / SUPER Super Node / WORKER / MASTER / ETCD)<br>CoresCount: core count<br>ClientStatus: client status (ONLINE online / OFFLINE offline / UNINSTALL not installed)<br>RunStatus: running state (Running running / Exception exception)</p>
                     * @param _exportFields <p>Export field list (all fields will be exported if not specified)<br>Enumeration values:<br>NodeId: node ID<br>NodeName: node name<br>PublicIP: public IP address<br>InternalIP: private IP address<br>NodeType: node type (NORMAL common node / SUPER Super Node / WORKER / MASTER / ETCD)<br>CoresCount: core count<br>ClientStatus: client status (ONLINE online / OFFLINE offline / UNINSTALL not installed)<br>RunStatus: running state (Running running / Exception exception)</p>
                     * 
                     */
                    void SetExportFields(const std::vector<std::string>& _exportFields);

                    /**
                     * 判断参数 ExportFields 是否已赋值
                     * @return ExportFields 是否已赋值
                     * 
                     */
                    bool ExportFieldsHasBeenSet() const;

                private:

                    /**
                     * <p>Cluster CA certificate MD5 (32-bit hexadecimal; unique ID)<br>Input limitation: length must equal 32 characters</p>
                     */
                    std::string m_clusterCaMD5;
                    bool m_clusterCaMD5HasBeenSet;

                    /**
                     * <p>Group account member id</p>
                     */
                    std::vector<std::string> m_memberId;
                    bool m_memberIdHasBeenSet;

                    /**
                     * <p>List of Universal Filter Criteria. Supported filter fields:<br>NodeName: node name, fuzzy matching.<br>NodeId: node ID, exact matching.<br>NodeUniqueID: node unique ID, exact matching (NodeAssetID is an equivalent alias).<br>NodeType: node type, exact matching. Values: SUPER (super node), MASTER (primary node), WORKER (work node).<br>RunStatus: node running status, exact matching.<br>InternalIP: private IP address, exact matching.<br>ClientStatus: client status, exact matching. Values: ONLINE (online), OFFLINE (offline), UNINSTALL (not installed).</p>
                     */
                    Filter m_filter;
                    bool m_filterHasBeenSet;

                    /**
                     * <p>Export field list (all fields will be exported if not specified)<br>Enumeration values:<br>NodeId: node ID<br>NodeName: node name<br>PublicIP: public IP address<br>InternalIP: private IP address<br>NodeType: node type (NORMAL common node / SUPER Super Node / WORKER / MASTER / ETCD)<br>CoresCount: core count<br>ClientStatus: client status (ONLINE online / OFFLINE offline / UNINSTALL not installed)<br>RunStatus: running state (Running running / Exception exception)</p>
                     */
                    std::vector<std::string> m_exportFields;
                    bool m_exportFieldsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_CREATECLUSTERNODELISTEXPORTJOBREQUEST_H_
