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

#ifndef TENCENTCLOUD_REDIS_V20180412_MODEL_INSTANCESECURITYGROUPDETAIL_H_
#define TENCENTCLOUD_REDIS_V20180412_MODEL_INSTANCESECURITYGROUPDETAIL_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/redis/v20180412/model/SecurityGroupDetail.h>


namespace TencentCloud
{
    namespace Redis
    {
        namespace V20180412
        {
            namespace Model
            {
                /**
                * Security group information of the instance
                */
                class InstanceSecurityGroupDetail : public AbstractModel
                {
                public:
                    InstanceSecurityGroupDetail();
                    ~InstanceSecurityGroupDetail() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Instance ID
                     * @return InstanceId Instance ID
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置Instance ID
                     * @param InstanceId Instance ID
                     */
                    void SetInstanceId(const std::string& _instanceId);

                    /**
                     * 判断参数 InstanceId 是否已赋值
                     * @return InstanceId 是否已赋值
                     */
                    bool InstanceIdHasBeenSet() const;

                    /**
                     * 获取Security group information
                     * @return SecurityGroupDetails Security group information
                     */
                    std::vector<SecurityGroupDetail> GetSecurityGroupDetails() const;

                    /**
                     * 设置Security group information
                     * @param SecurityGroupDetails Security group information
                     */
                    void SetSecurityGroupDetails(const std::vector<SecurityGroupDetail>& _securityGroupDetails);

                    /**
                     * 判断参数 SecurityGroupDetails 是否已赋值
                     * @return SecurityGroupDetails 是否已赋值
                     */
                    bool SecurityGroupDetailsHasBeenSet() const;

                private:

                    /**
                     * Instance ID
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * Security group information
                     */
                    std::vector<SecurityGroupDetail> m_securityGroupDetails;
                    bool m_securityGroupDetailsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_REDIS_V20180412_MODEL_INSTANCESECURITYGROUPDETAIL_H_
