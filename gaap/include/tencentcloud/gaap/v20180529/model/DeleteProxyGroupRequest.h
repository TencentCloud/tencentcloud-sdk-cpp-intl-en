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

#ifndef TENCENTCLOUD_GAAP_V20180529_MODEL_DELETEPROXYGROUPREQUEST_H_
#define TENCENTCLOUD_GAAP_V20180529_MODEL_DELETEPROXYGROUPREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Gaap
    {
        namespace V20180529
        {
            namespace Model
            {
                /**
                * DeleteProxyGroup request structure.
                */
                class DeleteProxyGroupRequest : public AbstractModel
                {
                public:
                    DeleteProxyGroupRequest();
                    ~DeleteProxyGroupRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取ID of the connection group to be deleted.
                     * @return GroupId ID of the connection group to be deleted.
                     * 
                     */
                    std::string GetGroupId() const;

                    /**
                     * 设置ID of the connection group to be deleted.
                     * @param _groupId ID of the connection group to be deleted.
                     * 
                     */
                    void SetGroupId(const std::string& _groupId);

                    /**
                     * 判断参数 GroupId 是否已赋值
                     * @return GroupId 是否已赋值
                     * 
                     */
                    bool GroupIdHasBeenSet() const;

                    /**
                     * 获取Whether to enable forced deletion. Valid values:
`0`: No;
`1`: Yes.
Default value: 0. If there is a connection or listener/rule bound to an origin server in the connection group and `Force` is 0, the operation will return a failure.
                     * @return Force Whether to enable forced deletion. Valid values:
`0`: No;
`1`: Yes.
Default value: 0. If there is a connection or listener/rule bound to an origin server in the connection group and `Force` is 0, the operation will return a failure.
                     * 
                     */
                    uint64_t GetForce() const;

                    /**
                     * 设置Whether to enable forced deletion. Valid values:
`0`: No;
`1`: Yes.
Default value: 0. If there is a connection or listener/rule bound to an origin server in the connection group and `Force` is 0, the operation will return a failure.
                     * @param _force Whether to enable forced deletion. Valid values:
`0`: No;
`1`: Yes.
Default value: 0. If there is a connection or listener/rule bound to an origin server in the connection group and `Force` is 0, the operation will return a failure.
                     * 
                     */
                    void SetForce(const uint64_t& _force);

                    /**
                     * 判断参数 Force 是否已赋值
                     * @return Force 是否已赋值
                     * 
                     */
                    bool ForceHasBeenSet() const;

                private:

                    /**
                     * ID of the connection group to be deleted.
                     */
                    std::string m_groupId;
                    bool m_groupIdHasBeenSet;

                    /**
                     * Whether to enable forced deletion. Valid values:
`0`: No;
`1`: Yes.
Default value: 0. If there is a connection or listener/rule bound to an origin server in the connection group and `Force` is 0, the operation will return a failure.
                     */
                    uint64_t m_force;
                    bool m_forceHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_GAAP_V20180529_MODEL_DELETEPROXYGROUPREQUEST_H_
