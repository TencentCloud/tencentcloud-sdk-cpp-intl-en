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

#ifndef TENCENTCLOUD_CDB_V20170320_MODEL_DESCRIBESSLSTATUSREQUEST_H_
#define TENCENTCLOUD_CDB_V20170320_MODEL_DESCRIBESSLSTATUSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cdb
    {
        namespace V20170320
        {
            namespace Model
            {
                /**
                * DescribeSSLStatus request structure.
                */
                class DescribeSSLStatusRequest : public AbstractModel
                {
                public:
                    DescribeSSLStatusRequest();
                    ~DescribeSSLStatusRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Instance ID, which can be obtained through the [DescribeDBInstances](https://www.tencentcloud.com/document/product/236/15872) API. Note: Either the instance ID or read-only group ID parameter needs to be specified. To query the enabling status of the SSL for two-node or three-node instances, you need to specify the instance ID parameter. Single-node (cloud disk) and Cluster Edition instances do not support enabling SSL; thus, queries are not supported.
                     * @return InstanceId Instance ID, which can be obtained through the [DescribeDBInstances](https://www.tencentcloud.com/document/product/236/15872) API. Note: Either the instance ID or read-only group ID parameter needs to be specified. To query the enabling status of the SSL for two-node or three-node instances, you need to specify the instance ID parameter. Single-node (cloud disk) and Cluster Edition instances do not support enabling SSL; thus, queries are not supported.
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置Instance ID, which can be obtained through the [DescribeDBInstances](https://www.tencentcloud.com/document/product/236/15872) API. Note: Either the instance ID or read-only group ID parameter needs to be specified. To query the enabling status of the SSL for two-node or three-node instances, you need to specify the instance ID parameter. Single-node (cloud disk) and Cluster Edition instances do not support enabling SSL; thus, queries are not supported.
                     * @param _instanceId Instance ID, which can be obtained through the [DescribeDBInstances](https://www.tencentcloud.com/document/product/236/15872) API. Note: Either the instance ID or read-only group ID parameter needs to be specified. To query the enabling status of the SSL for two-node or three-node instances, you need to specify the instance ID parameter. Single-node (cloud disk) and Cluster Edition instances do not support enabling SSL; thus, queries are not supported.
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
                     * 获取Read-only group ID, which can be obtained through the [DescribeRoGroups](https://www.tencentcloud.com/document/product/236/35704) API. Note: Either the instance ID or read-only group ID parameter needs to be specified. To query the enabling status of the SSL for read-only instances or groups, you need to specify the RoGroupId parameter. Note that the value should be the read-only group ID. Single-node (cloud disk) and Cluster Edition instances do not support enabling SSL; thus, queries are not supported.
                     * @return RoGroupId Read-only group ID, which can be obtained through the [DescribeRoGroups](https://www.tencentcloud.com/document/product/236/35704) API. Note: Either the instance ID or read-only group ID parameter needs to be specified. To query the enabling status of the SSL for read-only instances or groups, you need to specify the RoGroupId parameter. Note that the value should be the read-only group ID. Single-node (cloud disk) and Cluster Edition instances do not support enabling SSL; thus, queries are not supported.
                     * 
                     */
                    std::string GetRoGroupId() const;

                    /**
                     * 设置Read-only group ID, which can be obtained through the [DescribeRoGroups](https://www.tencentcloud.com/document/product/236/35704) API. Note: Either the instance ID or read-only group ID parameter needs to be specified. To query the enabling status of the SSL for read-only instances or groups, you need to specify the RoGroupId parameter. Note that the value should be the read-only group ID. Single-node (cloud disk) and Cluster Edition instances do not support enabling SSL; thus, queries are not supported.
                     * @param _roGroupId Read-only group ID, which can be obtained through the [DescribeRoGroups](https://www.tencentcloud.com/document/product/236/35704) API. Note: Either the instance ID or read-only group ID parameter needs to be specified. To query the enabling status of the SSL for read-only instances or groups, you need to specify the RoGroupId parameter. Note that the value should be the read-only group ID. Single-node (cloud disk) and Cluster Edition instances do not support enabling SSL; thus, queries are not supported.
                     * 
                     */
                    void SetRoGroupId(const std::string& _roGroupId);

                    /**
                     * 判断参数 RoGroupId 是否已赋值
                     * @return RoGroupId 是否已赋值
                     * 
                     */
                    bool RoGroupIdHasBeenSet() const;

                private:

                    /**
                     * Instance ID, which can be obtained through the [DescribeDBInstances](https://www.tencentcloud.com/document/product/236/15872) API. Note: Either the instance ID or read-only group ID parameter needs to be specified. To query the enabling status of the SSL for two-node or three-node instances, you need to specify the instance ID parameter. Single-node (cloud disk) and Cluster Edition instances do not support enabling SSL; thus, queries are not supported.
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * Read-only group ID, which can be obtained through the [DescribeRoGroups](https://www.tencentcloud.com/document/product/236/35704) API. Note: Either the instance ID or read-only group ID parameter needs to be specified. To query the enabling status of the SSL for read-only instances or groups, you need to specify the RoGroupId parameter. Note that the value should be the read-only group ID. Single-node (cloud disk) and Cluster Edition instances do not support enabling SSL; thus, queries are not supported.
                     */
                    std::string m_roGroupId;
                    bool m_roGroupIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CDB_V20170320_MODEL_DESCRIBESSLSTATUSREQUEST_H_
