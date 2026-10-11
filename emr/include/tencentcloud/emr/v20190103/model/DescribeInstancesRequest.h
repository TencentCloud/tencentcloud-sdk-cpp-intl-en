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

#ifndef TENCENTCLOUD_EMR_V20190103_MODEL_DESCRIBEINSTANCESREQUEST_H_
#define TENCENTCLOUD_EMR_V20190103_MODEL_DESCRIBEINSTANCESREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Emr
    {
        namespace V20190103
        {
            namespace Model
            {
                /**
                * DescribeInstances request structure.
                */
                class DescribeInstancesRequest : public AbstractModel
                {
                public:
                    DescribeInstancesRequest();
                    ~DescribeInstancesRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Cluster filtering policy. Valid values:
<li>clusterList: Queries the list of clusters except for those that have been terminated.</li>
<li>monitorManage: Queries the list of clusters except for those that have been terminated, are being created, or fail to be created.</li><li>cloudHardwareManage/componentManage: Currently these two values are reserved and temporarily have the same meaning as monitorManage.</li>
                     * @return DisplayStrategy Cluster filtering policy. Valid values:
<li>clusterList: Queries the list of clusters except for those that have been terminated.</li>
<li>monitorManage: Queries the list of clusters except for those that have been terminated, are being created, or fail to be created.</li><li>cloudHardwareManage/componentManage: Currently these two values are reserved and temporarily have the same meaning as monitorManage.</li>
                     * 
                     */
                    std::string GetDisplayStrategy() const;

                    /**
                     * 设置Cluster filtering policy. Valid values:
<li>clusterList: Queries the list of clusters except for those that have been terminated.</li>
<li>monitorManage: Queries the list of clusters except for those that have been terminated, are being created, or fail to be created.</li><li>cloudHardwareManage/componentManage: Currently these two values are reserved and temporarily have the same meaning as monitorManage.</li>
                     * @param _displayStrategy Cluster filtering policy. Valid values:
<li>clusterList: Queries the list of clusters except for those that have been terminated.</li>
<li>monitorManage: Queries the list of clusters except for those that have been terminated, are being created, or fail to be created.</li><li>cloudHardwareManage/componentManage: Currently these two values are reserved and temporarily have the same meaning as monitorManage.</li>
                     * 
                     */
                    void SetDisplayStrategy(const std::string& _displayStrategy);

                    /**
                     * 判断参数 DisplayStrategy 是否已赋值
                     * @return DisplayStrategy 是否已赋值
                     * 
                     */
                    bool DisplayStrategyHasBeenSet() const;

                    /**
                     * 获取Query by one or more instance IDs. The instance ID is in the format of emr-xxxxxxxx. (For the specific format of this parameter, see the section Ids.N in the API [Introduction](https://www.tencentcloud.com/document/api/213/15688?from_cn_redirect=1)). If the instance ID is not specified, the list of all the instances for the APPID is returned.
                     * @return InstanceIds Query by one or more instance IDs. The instance ID is in the format of emr-xxxxxxxx. (For the specific format of this parameter, see the section Ids.N in the API [Introduction](https://www.tencentcloud.com/document/api/213/15688?from_cn_redirect=1)). If the instance ID is not specified, the list of all the instances for the APPID is returned.
                     * 
                     */
                    std::vector<std::string> GetInstanceIds() const;

                    /**
                     * 设置Query by one or more instance IDs. The instance ID is in the format of emr-xxxxxxxx. (For the specific format of this parameter, see the section Ids.N in the API [Introduction](https://www.tencentcloud.com/document/api/213/15688?from_cn_redirect=1)). If the instance ID is not specified, the list of all the instances for the APPID is returned.
                     * @param _instanceIds Query by one or more instance IDs. The instance ID is in the format of emr-xxxxxxxx. (For the specific format of this parameter, see the section Ids.N in the API [Introduction](https://www.tencentcloud.com/document/api/213/15688?from_cn_redirect=1)). If the instance ID is not specified, the list of all the instances for the APPID is returned.
                     * 
                     */
                    void SetInstanceIds(const std::vector<std::string>& _instanceIds);

                    /**
                     * 判断参数 InstanceIds 是否已赋值
                     * @return InstanceIds 是否已赋值
                     * 
                     */
                    bool InstanceIdsHasBeenSet() const;

                    /**
                     * 获取
                     * @return Offset 
                     * 
                     */
                    uint64_t GetOffset() const;

                    /**
                     * 设置
                     * @param _offset 
                     * 
                     */
                    void SetOffset(const uint64_t& _offset);

                    /**
                     * 判断参数 Offset 是否已赋值
                     * @return Offset 是否已赋值
                     * 
                     */
                    bool OffsetHasBeenSet() const;

                    /**
                     * 获取Number of items returned per page. Default value: 100. Maximum value: 100.
                     * @return Limit Number of items returned per page. Default value: 100. Maximum value: 100.
                     * 
                     */
                    uint64_t GetLimit() const;

                    /**
                     * 设置Number of items returned per page. Default value: 100. Maximum value: 100.
                     * @param _limit Number of items returned per page. Default value: 100. Maximum value: 100.
                     * 
                     */
                    void SetLimit(const uint64_t& _limit);

                    /**
                     * 判断参数 Limit 是否已赋值
                     * @return Limit 是否已赋值
                     * 
                     */
                    bool LimitHasBeenSet() const;

                    /**
                     * 获取It is recommended to set this parameter to -1, indicating all clusters under all projects are pulled.
If not specified, the default value is 0, indicating the clusters under the default project are pulled.
ID of the project to which the instance belongs. This parameter can be obtained from the projectId field in the return value of [DescribeProjects](https://www.tencentcloud.com/document/product/651/78725?from_cn_redirect=1).
                     * @return ProjectId It is recommended to set this parameter to -1, indicating all clusters under all projects are pulled.
If not specified, the default value is 0, indicating the clusters under the default project are pulled.
ID of the project to which the instance belongs. This parameter can be obtained from the projectId field in the return value of [DescribeProjects](https://www.tencentcloud.com/document/product/651/78725?from_cn_redirect=1).
                     * 
                     */
                    int64_t GetProjectId() const;

                    /**
                     * 设置It is recommended to set this parameter to -1, indicating all clusters under all projects are pulled.
If not specified, the default value is 0, indicating the clusters under the default project are pulled.
ID of the project to which the instance belongs. This parameter can be obtained from the projectId field in the return value of [DescribeProjects](https://www.tencentcloud.com/document/product/651/78725?from_cn_redirect=1).
                     * @param _projectId It is recommended to set this parameter to -1, indicating all clusters under all projects are pulled.
If not specified, the default value is 0, indicating the clusters under the default project are pulled.
ID of the project to which the instance belongs. This parameter can be obtained from the projectId field in the return value of [DescribeProjects](https://www.tencentcloud.com/document/product/651/78725?from_cn_redirect=1).
                     * 
                     */
                    void SetProjectId(const int64_t& _projectId);

                    /**
                     * 判断参数 ProjectId 是否已赋值
                     * @return ProjectId 是否已赋值
                     * 
                     */
                    bool ProjectIdHasBeenSet() const;

                    /**
                     * 获取Sorting field. Valid values:
<li>clusterId: sort by instance ID.</li>
<li>addTime: sort by instance creation time.</li>
<li>status: sort by instance status code.</li>
                     * @return OrderField Sorting field. Valid values:
<li>clusterId: sort by instance ID.</li>
<li>addTime: sort by instance creation time.</li>
<li>status: sort by instance status code.</li>
                     * 
                     */
                    std::string GetOrderField() const;

                    /**
                     * 设置Sorting field. Valid values:
<li>clusterId: sort by instance ID.</li>
<li>addTime: sort by instance creation time.</li>
<li>status: sort by instance status code.</li>
                     * @param _orderField Sorting field. Valid values:
<li>clusterId: sort by instance ID.</li>
<li>addTime: sort by instance creation time.</li>
<li>status: sort by instance status code.</li>
                     * 
                     */
                    void SetOrderField(const std::string& _orderField);

                    /**
                     * 判断参数 OrderField 是否已赋值
                     * @return OrderField 是否已赋值
                     * 
                     */
                    bool OrderFieldHasBeenSet() const;

                    /**
                     * 获取Sorts by OrderField in ascending or descending order. Valid values:<li>0: descending order</li>
<li>1: ascending order</li>The default value is 0.
                     * @return Asc Sorts by OrderField in ascending or descending order. Valid values:<li>0: descending order</li>
<li>1: ascending order</li>The default value is 0.
                     * 
                     */
                    int64_t GetAsc() const;

                    /**
                     * 设置Sorts by OrderField in ascending or descending order. Valid values:<li>0: descending order</li>
<li>1: ascending order</li>The default value is 0.
                     * @param _asc Sorts by OrderField in ascending or descending order. Valid values:<li>0: descending order</li>
<li>1: ascending order</li>The default value is 0.
                     * 
                     */
                    void SetAsc(const int64_t& _asc);

                    /**
                     * 判断参数 Asc 是否已赋值
                     * @return Asc 是否已赋值
                     * 
                     */
                    bool AscHasBeenSet() const;

                private:

                    /**
                     * Cluster filtering policy. Valid values:
<li>clusterList: Queries the list of clusters except for those that have been terminated.</li>
<li>monitorManage: Queries the list of clusters except for those that have been terminated, are being created, or fail to be created.</li><li>cloudHardwareManage/componentManage: Currently these two values are reserved and temporarily have the same meaning as monitorManage.</li>
                     */
                    std::string m_displayStrategy;
                    bool m_displayStrategyHasBeenSet;

                    /**
                     * Query by one or more instance IDs. The instance ID is in the format of emr-xxxxxxxx. (For the specific format of this parameter, see the section Ids.N in the API [Introduction](https://www.tencentcloud.com/document/api/213/15688?from_cn_redirect=1)). If the instance ID is not specified, the list of all the instances for the APPID is returned.
                     */
                    std::vector<std::string> m_instanceIds;
                    bool m_instanceIdsHasBeenSet;

                    /**
                     * 
                     */
                    uint64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * Number of items returned per page. Default value: 100. Maximum value: 100.
                     */
                    uint64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * It is recommended to set this parameter to -1, indicating all clusters under all projects are pulled.
If not specified, the default value is 0, indicating the clusters under the default project are pulled.
ID of the project to which the instance belongs. This parameter can be obtained from the projectId field in the return value of [DescribeProjects](https://www.tencentcloud.com/document/product/651/78725?from_cn_redirect=1).
                     */
                    int64_t m_projectId;
                    bool m_projectIdHasBeenSet;

                    /**
                     * Sorting field. Valid values:
<li>clusterId: sort by instance ID.</li>
<li>addTime: sort by instance creation time.</li>
<li>status: sort by instance status code.</li>
                     */
                    std::string m_orderField;
                    bool m_orderFieldHasBeenSet;

                    /**
                     * Sorts by OrderField in ascending or descending order. Valid values:<li>0: descending order</li>
<li>1: ascending order</li>The default value is 0.
                     */
                    int64_t m_asc;
                    bool m_ascHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_EMR_V20190103_MODEL_DESCRIBEINSTANCESREQUEST_H_
