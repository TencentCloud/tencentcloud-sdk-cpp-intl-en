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

#ifndef TENCENTCLOUD_VPC_V20170312_MODEL_ACCEPTATTACHCCNINSTANCESREQUEST_H_
#define TENCENTCLOUD_VPC_V20170312_MODEL_ACCEPTATTACHCCNINSTANCESREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/vpc/v20170312/model/CcnInstance.h>


namespace TencentCloud
{
    namespace Vpc
    {
        namespace V20170312
        {
            namespace Model
            {
                /**
                * AcceptAttachCcnInstances request structure.
                */
                class AcceptAttachCcnInstancesRequest : public AbstractModel
                {
                public:
                    AcceptAttachCcnInstancesRequest();
                    ~AcceptAttachCcnInstancesRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取The CCN instance ID, such as `ccn-f49l6u0z`.
                     * @return CcnId The CCN instance ID, such as `ccn-f49l6u0z`.
                     * 
                     */
                    std::string GetCcnId() const;

                    /**
                     * 设置The CCN instance ID, such as `ccn-f49l6u0z`.
                     * @param _ccnId The CCN instance ID, such as `ccn-f49l6u0z`.
                     * 
                     */
                    void SetCcnId(const std::string& _ccnId);

                    /**
                     * 判断参数 CcnId 是否已赋值
                     * @return CcnId 是否已赋值
                     * 
                     */
                    bool CcnIdHasBeenSet() const;

                    /**
                     * 获取List of associated instances.
                     * @return Instances List of associated instances.
                     * 
                     */
                    std::vector<CcnInstance> GetInstances() const;

                    /**
                     * 设置List of associated instances.
                     * @param _instances List of associated instances.
                     * 
                     */
                    void SetInstances(const std::vector<CcnInstance>& _instances);

                    /**
                     * 判断参数 Instances 是否已赋值
                     * @return Instances 是否已赋值
                     * 
                     */
                    bool InstancesHasBeenSet() const;

                private:

                    /**
                     * The CCN instance ID, such as `ccn-f49l6u0z`.
                     */
                    std::string m_ccnId;
                    bool m_ccnIdHasBeenSet;

                    /**
                     * List of associated instances.
                     */
                    std::vector<CcnInstance> m_instances;
                    bool m_instancesHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VPC_V20170312_MODEL_ACCEPTATTACHCCNINSTANCESREQUEST_H_
