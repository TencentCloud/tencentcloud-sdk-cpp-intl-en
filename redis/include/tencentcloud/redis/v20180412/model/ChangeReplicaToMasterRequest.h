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

#ifndef TENCENTCLOUD_REDIS_V20180412_MODEL_CHANGEREPLICATOMASTERREQUEST_H_
#define TENCENTCLOUD_REDIS_V20180412_MODEL_CHANGEREPLICATOMASTERREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Redis
    {
        namespace V20180412
        {
            namespace Model
            {
                /**
                * ChangeReplicaToMaster request structure.
                */
                class ChangeReplicaToMasterRequest : public AbstractModel
                {
                public:
                    ChangeReplicaToMasterRequest();
                    ~ChangeReplicaToMasterRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取ID of the specified instance,  such as  "crs-xjhsdj****" Log in to the [Redis console](https://console.cloud.tencent.com/redis) and copy the instance ID in the instance list.

                     * @return InstanceId ID of the specified instance,  such as  "crs-xjhsdj****" Log in to the [Redis console](https://console.cloud.tencent.com/redis) and copy the instance ID in the instance list.

                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置ID of the specified instance,  such as  "crs-xjhsdj****" Log in to the [Redis console](https://console.cloud.tencent.com/redis) and copy the instance ID in the instance list.

                     * @param _instanceId ID of the specified instance,  such as  "crs-xjhsdj****" Log in to the [Redis console](https://console.cloud.tencent.com/redis) and copy the instance ID in the instance list.

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
                     * 获取ID of the replica node group. You can get more ID information of the multi-AZ replica node group though the [DescribeInstanceZoneInfo](https://intl.cloud.tencent.com/document/product/239/50312?from_cn_redirect=1) API.  This parameter is not required for a single-AZ replica node group.
                     * @return GroupId ID of the replica node group. You can get more ID information of the multi-AZ replica node group though the [DescribeInstanceZoneInfo](https://intl.cloud.tencent.com/document/product/239/50312?from_cn_redirect=1) API.  This parameter is not required for a single-AZ replica node group.
                     * 
                     */
                    int64_t GetGroupId() const;

                    /**
                     * 设置ID of the replica node group. You can get more ID information of the multi-AZ replica node group though the [DescribeInstanceZoneInfo](https://intl.cloud.tencent.com/document/product/239/50312?from_cn_redirect=1) API.  This parameter is not required for a single-AZ replica node group.
                     * @param _groupId ID of the replica node group. You can get more ID information of the multi-AZ replica node group though the [DescribeInstanceZoneInfo](https://intl.cloud.tencent.com/document/product/239/50312?from_cn_redirect=1) API.  This parameter is not required for a single-AZ replica node group.
                     * 
                     */
                    void SetGroupId(const int64_t& _groupId);

                    /**
                     * 判断参数 GroupId 是否已赋值
                     * @return GroupId 是否已赋值
                     * 
                     */
                    bool GroupIdHasBeenSet() const;

                private:

                    /**
                     * ID of the specified instance,  such as  "crs-xjhsdj****" Log in to the [Redis console](https://console.cloud.tencent.com/redis) and copy the instance ID in the instance list.

                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * ID of the replica node group. You can get more ID information of the multi-AZ replica node group though the [DescribeInstanceZoneInfo](https://intl.cloud.tencent.com/document/product/239/50312?from_cn_redirect=1) API.  This parameter is not required for a single-AZ replica node group.
                     */
                    int64_t m_groupId;
                    bool m_groupIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_REDIS_V20180412_MODEL_CHANGEREPLICATOMASTERREQUEST_H_
