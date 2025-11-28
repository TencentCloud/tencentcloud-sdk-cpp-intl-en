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

#ifndef TENCENTCLOUD_TROCKET_V20230308_MODEL_DELETEROLEREQUEST_H_
#define TENCENTCLOUD_TROCKET_V20230308_MODEL_DELETEROLEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Trocket
    {
        namespace V20230308
        {
            namespace Model
            {
                /**
                * DeleteRole request structure.
                */
                class DeleteRoleRequest : public AbstractModel
                {
                public:
                    DeleteRoleRequest();
                    ~DeleteRoleRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取TDMQ RocketMQ instance ID. It can be obtained from the API [DescribeFusionInstanceList](https://www.tencentcloud.comom/document/api/1493/106745?from_cn_redirect=1) or the console.
                     * @return InstanceId TDMQ RocketMQ instance ID. It can be obtained from the API [DescribeFusionInstanceList](https://www.tencentcloud.comom/document/api/1493/106745?from_cn_redirect=1) or the console.
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置TDMQ RocketMQ instance ID. It can be obtained from the API [DescribeFusionInstanceList](https://www.tencentcloud.comom/document/api/1493/106745?from_cn_redirect=1) or the console.
                     * @param _instanceId TDMQ RocketMQ instance ID. It can be obtained from the API [DescribeFusionInstanceList](https://www.tencentcloud.comom/document/api/1493/106745?from_cn_redirect=1) or the console.
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
                     * 获取Role name. It can be obtained from [RoleItem](https://www.tencentcloud.comom/document/api/1493/96031?from_cn_redirect=1#RoleItem) returned by the API [DescribeRoleList](https://www.tencentcloud.comom/document/api/1493/98862?from_cn_redirect=1) or from the console.
                     * @return Role Role name. It can be obtained from [RoleItem](https://www.tencentcloud.comom/document/api/1493/96031?from_cn_redirect=1#RoleItem) returned by the API [DescribeRoleList](https://www.tencentcloud.comom/document/api/1493/98862?from_cn_redirect=1) or from the console.
                     * 
                     */
                    std::string GetRole() const;

                    /**
                     * 设置Role name. It can be obtained from [RoleItem](https://www.tencentcloud.comom/document/api/1493/96031?from_cn_redirect=1#RoleItem) returned by the API [DescribeRoleList](https://www.tencentcloud.comom/document/api/1493/98862?from_cn_redirect=1) or from the console.
                     * @param _role Role name. It can be obtained from [RoleItem](https://www.tencentcloud.comom/document/api/1493/96031?from_cn_redirect=1#RoleItem) returned by the API [DescribeRoleList](https://www.tencentcloud.comom/document/api/1493/98862?from_cn_redirect=1) or from the console.
                     * 
                     */
                    void SetRole(const std::string& _role);

                    /**
                     * 判断参数 Role 是否已赋值
                     * @return Role 是否已赋值
                     * 
                     */
                    bool RoleHasBeenSet() const;

                private:

                    /**
                     * TDMQ RocketMQ instance ID. It can be obtained from the API [DescribeFusionInstanceList](https://www.tencentcloud.comom/document/api/1493/106745?from_cn_redirect=1) or the console.
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * Role name. It can be obtained from [RoleItem](https://www.tencentcloud.comom/document/api/1493/96031?from_cn_redirect=1#RoleItem) returned by the API [DescribeRoleList](https://www.tencentcloud.comom/document/api/1493/98862?from_cn_redirect=1) or from the console.
                     */
                    std::string m_role;
                    bool m_roleHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TROCKET_V20230308_MODEL_DELETEROLEREQUEST_H_
