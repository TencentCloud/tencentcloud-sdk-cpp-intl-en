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

#ifndef TENCENTCLOUD_TCSS_V20201101_MODEL_SECLOGJOINOBJECTINFO_H_
#define TENCENTCLOUD_TCSS_V20201101_MODEL_SECLOGJOINOBJECTINFO_H_

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
                * Details of the accessed security log object
                */
                class SecLogJoinObjectInfo : public AbstractModel
                {
                public:
                    SecLogJoinObjectInfo();
                    ~SecLogJoinObjectInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Server ID
                     * @return HostID Server ID
                     */
                    std::string GetHostID() const;

                    /**
                     * 设置Server ID
                     * @param HostID Server ID
                     */
                    void SetHostID(const std::string& _hostID);

                    /**
                     * 判断参数 HostID 是否已赋值
                     * @return HostID 是否已赋值
                     */
                    bool HostIDHasBeenSet() const;

                    /**
                     * 获取Server name
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return HostName Server name
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string GetHostName() const;

                    /**
                     * 设置Server name
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param HostName Server name
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    void SetHostName(const std::string& _hostName);

                    /**
                     * 判断参数 HostName 是否已赋值
                     * @return HostName 是否已赋值
                     */
                    bool HostNameHasBeenSet() const;

                    /**
                     * 获取Server IP
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return HostIP Server IP
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string GetHostIP() const;

                    /**
                     * 设置Server IP
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param HostIP Server IP
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    void SetHostIP(const std::string& _hostIP);

                    /**
                     * 判断参数 HostIP 是否已赋值
                     * @return HostIP 是否已赋值
                     */
                    bool HostIPHasBeenSet() const;

                    /**
                     * 获取Server status
                     * @return HostStatus Server status
                     */
                    std::string GetHostStatus() const;

                    /**
                     * 设置Server status
                     * @param HostStatus Server status
                     */
                    void SetHostStatus(const std::string& _hostStatus);

                    /**
                     * 判断参数 HostStatus 是否已赋值
                     * @return HostStatus 是否已赋值
                     */
                    bool HostStatusHasBeenSet() const;

                    /**
                     * 获取Cluster ID
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return ClusterID Cluster ID
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string GetClusterID() const;

                    /**
                     * 设置Cluster ID
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param ClusterID Cluster ID
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    void SetClusterID(const std::string& _clusterID);

                    /**
                     * 判断参数 ClusterID 是否已赋值
                     * @return ClusterID 是否已赋值
                     */
                    bool ClusterIDHasBeenSet() const;

                    /**
                     * 获取Cluster name
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return ClusterName Cluster name
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string GetClusterName() const;

                    /**
                     * 设置Cluster name
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param ClusterName Cluster name
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    void SetClusterName(const std::string& _clusterName);

                    /**
                     * 判断参数 ClusterName 是否已赋值
                     * @return ClusterName 是否已赋值
                     */
                    bool ClusterNameHasBeenSet() const;

                    /**
                     * 获取Public IP
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return PublicIP Public IP
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string GetPublicIP() const;

                    /**
                     * 设置Public IP
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param PublicIP Public IP
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    void SetPublicIP(const std::string& _publicIP);

                    /**
                     * 判断参数 PublicIP 是否已赋值
                     * @return PublicIP 是否已赋值
                     */
                    bool PublicIPHasBeenSet() const;

                    /**
                     * 获取Access status. Valid values: `true` (accessed); `false` (not accessed).
                     * @return JoinState Access status. Valid values: `true` (accessed); `false` (not accessed).
                     */
                    bool GetJoinState() const;

                    /**
                     * 设置Access status. Valid values: `true` (accessed); `false` (not accessed).
                     * @param JoinState Access status. Valid values: `true` (accessed); `false` (not accessed).
                     */
                    void SetJoinState(const bool& _joinState);

                    /**
                     * 判断参数 JoinState 是否已赋值
                     * @return JoinState 是否已赋值
                     */
                    bool JoinStateHasBeenSet() const;

                    /**
                     * 获取Cluster version
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return ClusterVersion Cluster version
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string GetClusterVersion() const;

                    /**
                     * 设置Cluster version
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param ClusterVersion Cluster version
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    void SetClusterVersion(const std::string& _clusterVersion);

                    /**
                     * 判断参数 ClusterVersion 是否已赋值
                     * @return ClusterVersion 是否已赋值
                     */
                    bool ClusterVersionHasBeenSet() const;

                    /**
                     * 获取Master node address of the cluster
                     * @return ClusterMainAddress Master node address of the cluster
                     */
                    std::string GetClusterMainAddress() const;

                    /**
                     * 设置Master node address of the cluster
                     * @param ClusterMainAddress Master node address of the cluster
                     */
                    void SetClusterMainAddress(const std::string& _clusterMainAddress);

                    /**
                     * 判断参数 ClusterMainAddress 是否已赋值
                     * @return ClusterMainAddress 是否已赋值
                     */
                    bool ClusterMainAddressHasBeenSet() const;

                private:

                    /**
                     * Server ID
                     */
                    std::string m_hostID;
                    bool m_hostIDHasBeenSet;

                    /**
                     * Server name
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_hostName;
                    bool m_hostNameHasBeenSet;

                    /**
                     * Server IP
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_hostIP;
                    bool m_hostIPHasBeenSet;

                    /**
                     * Server status
                     */
                    std::string m_hostStatus;
                    bool m_hostStatusHasBeenSet;

                    /**
                     * Cluster ID
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_clusterID;
                    bool m_clusterIDHasBeenSet;

                    /**
                     * Cluster name
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_clusterName;
                    bool m_clusterNameHasBeenSet;

                    /**
                     * Public IP
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_publicIP;
                    bool m_publicIPHasBeenSet;

                    /**
                     * Access status. Valid values: `true` (accessed); `false` (not accessed).
                     */
                    bool m_joinState;
                    bool m_joinStateHasBeenSet;

                    /**
                     * Cluster version
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_clusterVersion;
                    bool m_clusterVersionHasBeenSet;

                    /**
                     * Master node address of the cluster
                     */
                    std::string m_clusterMainAddress;
                    bool m_clusterMainAddressHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCSS_V20201101_MODEL_SECLOGJOINOBJECTINFO_H_
