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

#ifndef TENCENTCLOUD_CDWDORIS_V20211228_MODEL_UPDATECOOLDOWNREQUEST_H_
#define TENCENTCLOUD_CDWDORIS_V20211228_MODEL_UPDATECOOLDOWNREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cdwdoris
    {
        namespace V20211228
        {
            namespace Model
            {
                /**
                * UpdateCoolDown request structure.
                */
                class UpdateCoolDownRequest : public AbstractModel
                {
                public:
                    UpdateCoolDownRequest();
                    ~UpdateCoolDownRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Cluster ID
                     * @return InstanceId Cluster ID
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置Cluster ID
                     * @param _instanceId Cluster ID
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
                     * 获取Whether to enable. 0: disable; 1: enable.
                     * @return Enable Whether to enable. 0: disable; 1: enable.
                     * 
                     */
                    int64_t GetEnable() const;

                    /**
                     * 设置Whether to enable. 0: disable; 1: enable.
                     * @param _enable Whether to enable. 0: disable; 1: enable.
                     * 
                     */
                    void SetEnable(const int64_t& _enable);

                    /**
                     * 判断参数 Enable 是否已赋值
                     * @return Enable 是否已赋值
                     * 
                     */
                    bool EnableHasBeenSet() const;

                    /**
                     * 获取Address of the COS bucket where the user stores layered hot and cold data
                     * @return Bucket Address of the COS bucket where the user stores layered hot and cold data
                     * 
                     */
                    std::string GetBucket() const;

                    /**
                     * 设置Address of the COS bucket where the user stores layered hot and cold data
                     * @param _bucket Address of the COS bucket where the user stores layered hot and cold data
                     * 
                     */
                    void SetBucket(const std::string& _bucket);

                    /**
                     * 判断参数 Bucket 是否已赋值
                     * @return Bucket 是否已赋值
                     * 
                     */
                    bool BucketHasBeenSet() const;

                private:

                    /**
                     * Cluster ID
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * Whether to enable. 0: disable; 1: enable.
                     */
                    int64_t m_enable;
                    bool m_enableHasBeenSet;

                    /**
                     * Address of the COS bucket where the user stores layered hot and cold data
                     */
                    std::string m_bucket;
                    bool m_bucketHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CDWDORIS_V20211228_MODEL_UPDATECOOLDOWNREQUEST_H_
