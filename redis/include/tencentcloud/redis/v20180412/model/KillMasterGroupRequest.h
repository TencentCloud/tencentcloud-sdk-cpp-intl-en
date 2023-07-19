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

#ifndef TENCENTCLOUD_REDIS_V20180412_MODEL_KILLMASTERGROUPREQUEST_H_
#define TENCENTCLOUD_REDIS_V20180412_MODEL_KILLMASTERGROUPREQUEST_H_

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
                * KillMasterGroup request structure.
                */
                class KillMasterGroupRequest : public AbstractModel
                {
                public:
                    KillMasterGroupRequest();
                    ~KillMasterGroupRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取ID of a specified instance,  such as  "crs-xjhsdj****" Log in to the [Redis console](https://console.cloud.tencent.com/redis) and copy the instance ID in the instance list.
                     * @return InstanceId ID of a specified instance,  such as  "crs-xjhsdj****" Log in to the [Redis console](https://console.cloud.tencent.com/redis) and copy the instance ID in the instance list.
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置ID of a specified instance,  such as  "crs-xjhsdj****" Log in to the [Redis console](https://console.cloud.tencent.com/redis) and copy the instance ID in the instance list.
                     * @param _instanceId ID of a specified instance,  such as  "crs-xjhsdj****" Log in to the [Redis console](https://console.cloud.tencent.com/redis) and copy the instance ID in the instance list.
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
                     * 获取A parameter used to configure the access password for a specified instance. If password-free authentication is enabled, this parameter will not be required. Required password strength. - It must contains 8-30 characters. We recommend that you use a password of more than 12 characters. - It must contain at least two of the following types: lowercase letters, uppercase letters, digits, and symbols (()`~!@#$%^&*-+=_|{}[]:;<>,.?/), and it cannot start with a slash (/).
                     * @return Password A parameter used to configure the access password for a specified instance. If password-free authentication is enabled, this parameter will not be required. Required password strength. - It must contains 8-30 characters. We recommend that you use a password of more than 12 characters. - It must contain at least two of the following types: lowercase letters, uppercase letters, digits, and symbols (()`~!@#$%^&*-+=_|{}[]:;<>,.?/), and it cannot start with a slash (/).
                     * 
                     */
                    std::string GetPassword() const;

                    /**
                     * 设置A parameter used to configure the access password for a specified instance. If password-free authentication is enabled, this parameter will not be required. Required password strength. - It must contains 8-30 characters. We recommend that you use a password of more than 12 characters. - It must contain at least two of the following types: lowercase letters, uppercase letters, digits, and symbols (()`~!@#$%^&*-+=_|{}[]:;<>,.?/), and it cannot start with a slash (/).
                     * @param _password A parameter used to configure the access password for a specified instance. If password-free authentication is enabled, this parameter will not be required. Required password strength. - It must contains 8-30 characters. We recommend that you use a password of more than 12 characters. - It must contain at least two of the following types: lowercase letters, uppercase letters, digits, and symbols (()`~!@#$%^&*-+=_|{}[]:;<>,.?/), and it cannot start with a slash (/).
                     * 
                     */
                    void SetPassword(const std::string& _password);

                    /**
                     * 判断参数 Password 是否已赋值
                     * @return Password 是否已赋值
                     * 
                     */
                    bool PasswordHasBeenSet() const;

                    /**
                     * 获取Shard ID of a sharded cluster
                     * @return ShardIds Shard ID of a sharded cluster
                     * 
                     */
                    std::vector<int64_t> GetShardIds() const;

                    /**
                     * 设置Shard ID of a sharded cluster
                     * @param _shardIds Shard ID of a sharded cluster
                     * 
                     */
                    void SetShardIds(const std::vector<int64_t>& _shardIds);

                    /**
                     * 判断参数 ShardIds 是否已赋值
                     * @return ShardIds 是否已赋值
                     * 
                     */
                    bool ShardIdsHasBeenSet() const;

                private:

                    /**
                     * ID of a specified instance,  such as  "crs-xjhsdj****" Log in to the [Redis console](https://console.cloud.tencent.com/redis) and copy the instance ID in the instance list.
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * A parameter used to configure the access password for a specified instance. If password-free authentication is enabled, this parameter will not be required. Required password strength. - It must contains 8-30 characters. We recommend that you use a password of more than 12 characters. - It must contain at least two of the following types: lowercase letters, uppercase letters, digits, and symbols (()`~!@#$%^&*-+=_|{}[]:;<>,.?/), and it cannot start with a slash (/).
                     */
                    std::string m_password;
                    bool m_passwordHasBeenSet;

                    /**
                     * Shard ID of a sharded cluster
                     */
                    std::vector<int64_t> m_shardIds;
                    bool m_shardIdsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_REDIS_V20180412_MODEL_KILLMASTERGROUPREQUEST_H_
