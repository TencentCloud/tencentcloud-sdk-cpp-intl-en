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

#ifndef TENCENTCLOUD_LIGHTHOUSE_V20200324_MODEL_ISOLATEINSTANCESREQUEST_H_
#define TENCENTCLOUD_LIGHTHOUSE_V20200324_MODEL_ISOLATEINSTANCESREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Lighthouse
    {
        namespace V20200324
        {
            namespace Model
            {
                /**
                * IsolateInstances request structure.
                */
                class IsolateInstancesRequest : public AbstractModel
                {
                public:
                    IsolateInstancesRequest();
                    ~IsolateInstancesRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取IDs of target instances. You can get the IDs from the `InstanceId` parameter returned by the `DescribeInstances` API. Up to 20 instances can be specified at the same time.
                     * @return InstanceIds IDs of target instances. You can get the IDs from the `InstanceId` parameter returned by the `DescribeInstances` API. Up to 20 instances can be specified at the same time.
                     * 
                     */
                    std::vector<std::string> GetInstanceIds() const;

                    /**
                     * 设置IDs of target instances. You can get the IDs from the `InstanceId` parameter returned by the `DescribeInstances` API. Up to 20 instances can be specified at the same time.
                     * @param _instanceIds IDs of target instances. You can get the IDs from the `InstanceId` parameter returned by the `DescribeInstances` API. Up to 20 instances can be specified at the same time.
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
                     * 获取Whether to return data disks mounted on the instance together with the instance. Valid values: 
`TRUE`: Return the mounted data disks at the same time 
`FALSE`: Do not return the mounted data disks at the same time 
Default value: `TRUE`.
                     * @return IsolateDataDisk Whether to return data disks mounted on the instance together with the instance. Valid values: 
`TRUE`: Return the mounted data disks at the same time 
`FALSE`: Do not return the mounted data disks at the same time 
Default value: `TRUE`.
                     * 
                     */
                    bool GetIsolateDataDisk() const;

                    /**
                     * 设置Whether to return data disks mounted on the instance together with the instance. Valid values: 
`TRUE`: Return the mounted data disks at the same time 
`FALSE`: Do not return the mounted data disks at the same time 
Default value: `TRUE`.
                     * @param _isolateDataDisk Whether to return data disks mounted on the instance together with the instance. Valid values: 
`TRUE`: Return the mounted data disks at the same time 
`FALSE`: Do not return the mounted data disks at the same time 
Default value: `TRUE`.
                     * 
                     */
                    void SetIsolateDataDisk(const bool& _isolateDataDisk);

                    /**
                     * 判断参数 IsolateDataDisk 是否已赋值
                     * @return IsolateDataDisk 是否已赋值
                     * 
                     */
                    bool IsolateDataDiskHasBeenSet() const;

                private:

                    /**
                     * IDs of target instances. You can get the IDs from the `InstanceId` parameter returned by the `DescribeInstances` API. Up to 20 instances can be specified at the same time.
                     */
                    std::vector<std::string> m_instanceIds;
                    bool m_instanceIdsHasBeenSet;

                    /**
                     * Whether to return data disks mounted on the instance together with the instance. Valid values: 
`TRUE`: Return the mounted data disks at the same time 
`FALSE`: Do not return the mounted data disks at the same time 
Default value: `TRUE`.
                     */
                    bool m_isolateDataDisk;
                    bool m_isolateDataDiskHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_LIGHTHOUSE_V20200324_MODEL_ISOLATEINSTANCESREQUEST_H_
