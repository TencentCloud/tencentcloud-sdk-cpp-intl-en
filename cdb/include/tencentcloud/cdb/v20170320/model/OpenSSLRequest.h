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

#ifndef TENCENTCLOUD_CDB_V20170320_MODEL_OPENSSLREQUEST_H_
#define TENCENTCLOUD_CDB_V20170320_MODEL_OPENSSLREQUEST_H_

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
                * OpenSSL request structure.
                */
                class OpenSSLRequest : public AbstractModel
                {
                public:
                    OpenSSLRequest();
                    ~OpenSSLRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Instance ID. Required when the read-only group ID is empty. Can be obtained through the [DescribeDBInstances](https://www.tencentcloud.com/document/product/236/15872?from_cn_redirect=1) API.
                     * @return InstanceId Instance ID. Required when the read-only group ID is empty. Can be obtained through the [DescribeDBInstances](https://www.tencentcloud.com/document/product/236/15872?from_cn_redirect=1) API.
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置Instance ID. Required when the read-only group ID is empty. Can be obtained through the [DescribeDBInstances](https://www.tencentcloud.com/document/product/236/15872?from_cn_redirect=1) API.
                     * @param _instanceId Instance ID. Required when the read-only group ID is empty. Can be obtained through the [DescribeDBInstances](https://www.tencentcloud.com/document/product/236/15872?from_cn_redirect=1) API.
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
                     * 获取Read-only group ID. Required when the instance ID is empty. Can be obtained through the [DescribeRoGroups](https://www.tencentcloud.com/document/api/236/40939?from_cn_redirect=1) API.
                     * @return RoGroupId Read-only group ID. Required when the instance ID is empty. Can be obtained through the [DescribeRoGroups](https://www.tencentcloud.com/document/api/236/40939?from_cn_redirect=1) API.
                     * 
                     */
                    std::string GetRoGroupId() const;

                    /**
                     * 设置Read-only group ID. Required when the instance ID is empty. Can be obtained through the [DescribeRoGroups](https://www.tencentcloud.com/document/api/236/40939?from_cn_redirect=1) API.
                     * @param _roGroupId Read-only group ID. Required when the instance ID is empty. Can be obtained through the [DescribeRoGroups](https://www.tencentcloud.com/document/api/236/40939?from_cn_redirect=1) API.
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
                     * Instance ID. Required when the read-only group ID is empty. Can be obtained through the [DescribeDBInstances](https://www.tencentcloud.com/document/product/236/15872?from_cn_redirect=1) API.
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * Read-only group ID. Required when the instance ID is empty. Can be obtained through the [DescribeRoGroups](https://www.tencentcloud.com/document/api/236/40939?from_cn_redirect=1) API.
                     */
                    std::string m_roGroupId;
                    bool m_roGroupIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CDB_V20170320_MODEL_OPENSSLREQUEST_H_
