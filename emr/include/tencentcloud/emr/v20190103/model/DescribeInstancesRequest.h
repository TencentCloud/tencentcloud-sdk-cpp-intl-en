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
<li>clusterList: queries the list of clusters except terminated ones.</li>
<li>monitorManage: queries the list of clusters except those that have been terminated, are being created, or failed to be created.</li>
<li>cloudHardwareManage/componentManage: reserved fields with the same meaning as `monitorManage`.</li>
                     * @return DisplayStrategy Cluster filtering policy. Valid values:
<li>clusterList: queries the list of clusters except terminated ones.</li>
<li>monitorManage: queries the list of clusters except those that have been terminated, are being created, or failed to be created.</li>
<li>cloudHardwareManage/componentManage: reserved fields with the same meaning as `monitorManage`.</li>
                     * 
                     */
                    std::string GetDisplayStrategy() const;

                    /**
                     * 设置Cluster filtering policy. Valid values:
<li>clusterList: queries the list of clusters except terminated ones.</li>
<li>monitorManage: queries the list of clusters except those that have been terminated, are being created, or failed to be created.</li>
<li>cloudHardwareManage/componentManage: reserved fields with the same meaning as `monitorManage`.</li>
                     * @param _displayStrategy Cluster filtering policy. Valid values:
<li>clusterList: queries the list of clusters except terminated ones.</li>
<li>monitorManage: queries the list of clusters except those that have been terminated, are being created, or failed to be created.</li>
<li>cloudHardwareManage/componentManage: reserved fields with the same meaning as `monitorManage`.</li>
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
                     * 获取Queries by one or more instance IDs in the format of `emr-xxxxxxxx`. For the format of this parameter, please see the `id.N` section in [API Overview](https://intl.cloud.tencent.com/document/api/213/15688). If no instance ID is entered, the list of all instances under this `APPID` will be returned.
                     * @return InstanceIds Queries by one or more instance IDs in the format of `emr-xxxxxxxx`. For the format of this parameter, please see the `id.N` section in [API Overview](https://intl.cloud.tencent.com/document/api/213/15688). If no instance ID is entered, the list of all instances under this `APPID` will be returned.
                     * 
                     */
                    std::vector<std::string> GetInstanceIds() const;

                    /**
                     * 设置Queries by one or more instance IDs in the format of `emr-xxxxxxxx`. For the format of this parameter, please see the `id.N` section in [API Overview](https://intl.cloud.tencent.com/document/api/213/15688). If no instance ID is entered, the list of all instances under this `APPID` will be returned.
                     * @param _instanceIds Queries by one or more instance IDs in the format of `emr-xxxxxxxx`. For the format of this parameter, please see the `id.N` section in [API Overview](https://intl.cloud.tencent.com/document/api/213/15688). If no instance ID is entered, the list of all instances under this `APPID` will be returned.
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
                     * 获取Page number. Default value: 0, indicating the first page.
                     * @return Offset Page number. Default value: 0, indicating the first page.
                     * 
                     */
                    uint64_t GetOffset() const;

                    /**
                     * 设置Page number. Default value: 0, indicating the first page.
                     * @param _offset Page number. Default value: 0, indicating the first page.
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
                     * 获取Number of returned results per page. Default value: 10. Maximum value: 100
                     * @return Limit Number of returned results per page. Default value: 10. Maximum value: 100
                     * 
                     */
                    uint64_t GetLimit() const;

                    /**
                     * 设置Number of returned results per page. Default value: 10. Maximum value: 100
                     * @param _limit Number of returned results per page. Default value: 10. Maximum value: 100
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
                     * 获取ID of the project to which the instance belongs. This parameter can be obtained from the `projectId` field in the return value of the `DescribeProject` API. If this value is -1, the list of all instances will be returned.
                     * @return ProjectId ID of the project to which the instance belongs. This parameter can be obtained from the `projectId` field in the return value of the `DescribeProject` API. If this value is -1, the list of all instances will be returned.
                     * 
                     */
                    int64_t GetProjectId() const;

                    /**
                     * 设置ID of the project to which the instance belongs. This parameter can be obtained from the `projectId` field in the return value of the `DescribeProject` API. If this value is -1, the list of all instances will be returned.
                     * @param _projectId ID of the project to which the instance belongs. This parameter can be obtained from the `projectId` field in the return value of the `DescribeProject` API. If this value is -1, the list of all instances will be returned.
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
<li>clusterId: sorts by cluster ID.</li>
<li>addTime: sorts by instance creation time.</li>
<li>status: sorts by instance status code.</li>
                     * @return OrderField Sorting field. Valid values:
<li>clusterId: sorts by cluster ID.</li>
<li>addTime: sorts by instance creation time.</li>
<li>status: sorts by instance status code.</li>
                     * 
                     */
                    std::string GetOrderField() const;

                    /**
                     * 设置Sorting field. Valid values:
<li>clusterId: sorts by cluster ID.</li>
<li>addTime: sorts by instance creation time.</li>
<li>status: sorts by instance status code.</li>
                     * @param _orderField Sorting field. Valid values:
<li>clusterId: sorts by cluster ID.</li>
<li>addTime: sorts by instance creation time.</li>
<li>status: sorts by instance status code.</li>
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
                     * 获取Sorts according to `OrderField` in ascending or descending order. Valid values:
<li>0: descending order.</li>
<li>1: ascending order.</li>Default value: 0.
                     * @return Asc Sorts according to `OrderField` in ascending or descending order. Valid values:
<li>0: descending order.</li>
<li>1: ascending order.</li>Default value: 0.
                     * 
                     */
                    int64_t GetAsc() const;

                    /**
                     * 设置Sorts according to `OrderField` in ascending or descending order. Valid values:
<li>0: descending order.</li>
<li>1: ascending order.</li>Default value: 0.
                     * @param _asc Sorts according to `OrderField` in ascending or descending order. Valid values:
<li>0: descending order.</li>
<li>1: ascending order.</li>Default value: 0.
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
<li>clusterList: queries the list of clusters except terminated ones.</li>
<li>monitorManage: queries the list of clusters except those that have been terminated, are being created, or failed to be created.</li>
<li>cloudHardwareManage/componentManage: reserved fields with the same meaning as `monitorManage`.</li>
                     */
                    std::string m_displayStrategy;
                    bool m_displayStrategyHasBeenSet;

                    /**
                     * Queries by one or more instance IDs in the format of `emr-xxxxxxxx`. For the format of this parameter, please see the `id.N` section in [API Overview](https://intl.cloud.tencent.com/document/api/213/15688). If no instance ID is entered, the list of all instances under this `APPID` will be returned.
                     */
                    std::vector<std::string> m_instanceIds;
                    bool m_instanceIdsHasBeenSet;

                    /**
                     * Page number. Default value: 0, indicating the first page.
                     */
                    uint64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * Number of returned results per page. Default value: 10. Maximum value: 100
                     */
                    uint64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * ID of the project to which the instance belongs. This parameter can be obtained from the `projectId` field in the return value of the `DescribeProject` API. If this value is -1, the list of all instances will be returned.
                     */
                    int64_t m_projectId;
                    bool m_projectIdHasBeenSet;

                    /**
                     * Sorting field. Valid values:
<li>clusterId: sorts by cluster ID.</li>
<li>addTime: sorts by instance creation time.</li>
<li>status: sorts by instance status code.</li>
                     */
                    std::string m_orderField;
                    bool m_orderFieldHasBeenSet;

                    /**
                     * Sorts according to `OrderField` in ascending or descending order. Valid values:
<li>0: descending order.</li>
<li>1: ascending order.</li>Default value: 0.
                     */
                    int64_t m_asc;
                    bool m_ascHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_EMR_V20190103_MODEL_DESCRIBEINSTANCESREQUEST_H_
