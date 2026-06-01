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
                     * 获取Instance ID, which can be obtained through the [DescribeDBInstances](https://www.tencentcloud.com/document/product/236/15872?from_cn_redirect=1) API.
Description: Fill in either the instance ID or the read-only group ID. To query the SSL activation status of two-node or three-node instances, enter the instance ID parameter. Single-node (cloud disk) and cloud disk edition instances do not support enabling SSL, so queries are not supported.
                     * @return InstanceId Instance ID, which can be obtained through the [DescribeDBInstances](https://www.tencentcloud.com/document/product/236/15872?from_cn_redirect=1) API.
Description: Fill in either the instance ID or the read-only group ID. To query the SSL activation status of two-node or three-node instances, enter the instance ID parameter. Single-node (cloud disk) and cloud disk edition instances do not support enabling SSL, so queries are not supported.
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置Instance ID, which can be obtained through the [DescribeDBInstances](https://www.tencentcloud.com/document/product/236/15872?from_cn_redirect=1) API.
Description: Fill in either the instance ID or the read-only group ID. To query the SSL activation status of two-node or three-node instances, enter the instance ID parameter. Single-node (cloud disk) and cloud disk edition instances do not support enabling SSL, so queries are not supported.
                     * @param _instanceId Instance ID, which can be obtained through the [DescribeDBInstances](https://www.tencentcloud.com/document/product/236/15872?from_cn_redirect=1) API.
Description: Fill in either the instance ID or the read-only group ID. To query the SSL activation status of two-node or three-node instances, enter the instance ID parameter. Single-node (cloud disk) and cloud disk edition instances do not support enabling SSL, so queries are not supported.
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
                     * 获取Read-only group ID. Obtain through the [DescribeRoGroups](https://www.tencentcloud.com/document/api/236/40939?from_cn_redirect=1) API.
Description: Fill in either the instance ID or the read-only group ID. To query the SSL activation status of a read-only instance or read-only group, fill in the RoGroupId parameter. Note that you should always enter the read-only group ID. Single-node (cloud disk) and cloud disk edition instances do not support enabling SSL, so they do not support querying.
                     * @return RoGroupId Read-only group ID. Obtain through the [DescribeRoGroups](https://www.tencentcloud.com/document/api/236/40939?from_cn_redirect=1) API.
Description: Fill in either the instance ID or the read-only group ID. To query the SSL activation status of a read-only instance or read-only group, fill in the RoGroupId parameter. Note that you should always enter the read-only group ID. Single-node (cloud disk) and cloud disk edition instances do not support enabling SSL, so they do not support querying.
                     * 
                     */
                    std::string GetRoGroupId() const;

                    /**
                     * 设置Read-only group ID. Obtain through the [DescribeRoGroups](https://www.tencentcloud.com/document/api/236/40939?from_cn_redirect=1) API.
Description: Fill in either the instance ID or the read-only group ID. To query the SSL activation status of a read-only instance or read-only group, fill in the RoGroupId parameter. Note that you should always enter the read-only group ID. Single-node (cloud disk) and cloud disk edition instances do not support enabling SSL, so they do not support querying.
                     * @param _roGroupId Read-only group ID. Obtain through the [DescribeRoGroups](https://www.tencentcloud.com/document/api/236/40939?from_cn_redirect=1) API.
Description: Fill in either the instance ID or the read-only group ID. To query the SSL activation status of a read-only instance or read-only group, fill in the RoGroupId parameter. Note that you should always enter the read-only group ID. Single-node (cloud disk) and cloud disk edition instances do not support enabling SSL, so they do not support querying.
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
                     * Instance ID, which can be obtained through the [DescribeDBInstances](https://www.tencentcloud.com/document/product/236/15872?from_cn_redirect=1) API.
Description: Fill in either the instance ID or the read-only group ID. To query the SSL activation status of two-node or three-node instances, enter the instance ID parameter. Single-node (cloud disk) and cloud disk edition instances do not support enabling SSL, so queries are not supported.
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * Read-only group ID. Obtain through the [DescribeRoGroups](https://www.tencentcloud.com/document/api/236/40939?from_cn_redirect=1) API.
Description: Fill in either the instance ID or the read-only group ID. To query the SSL activation status of a read-only instance or read-only group, fill in the RoGroupId parameter. Note that you should always enter the read-only group ID. Single-node (cloud disk) and cloud disk edition instances do not support enabling SSL, so they do not support querying.
                     */
                    std::string m_roGroupId;
                    bool m_roGroupIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CDB_V20170320_MODEL_DESCRIBESSLSTATUSREQUEST_H_
