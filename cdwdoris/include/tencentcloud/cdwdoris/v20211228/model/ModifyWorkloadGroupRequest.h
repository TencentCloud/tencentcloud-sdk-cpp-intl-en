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

#ifndef TENCENTCLOUD_CDWDORIS_V20211228_MODEL_MODIFYWORKLOADGROUPREQUEST_H_
#define TENCENTCLOUD_CDWDORIS_V20211228_MODEL_MODIFYWORKLOADGROUPREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cdwdoris/v20211228/model/WorkloadGroupConfig.h>


namespace TencentCloud
{
    namespace Cdwdoris
    {
        namespace V20211228
        {
            namespace Model
            {
                /**
                * ModifyWorkloadGroup request structure.
                */
                class ModifyWorkloadGroupRequest : public AbstractModel
                {
                public:
                    ModifyWorkloadGroupRequest();
                    ~ModifyWorkloadGroupRequest() = default;
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
                     * 获取Modified resource group information
                     * @return WorkloadGroup Modified resource group information
                     * 
                     */
                    WorkloadGroupConfig GetWorkloadGroup() const;

                    /**
                     * 设置Modified resource group information
                     * @param _workloadGroup Modified resource group information
                     * 
                     */
                    void SetWorkloadGroup(const WorkloadGroupConfig& _workloadGroup);

                    /**
                     * 判断参数 WorkloadGroup 是否已赋值
                     * @return WorkloadGroup 是否已赋值
                     * 
                     */
                    bool WorkloadGroupHasBeenSet() const;

                private:

                    /**
                     * Cluster ID
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * Modified resource group information
                     */
                    WorkloadGroupConfig m_workloadGroup;
                    bool m_workloadGroupHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CDWDORIS_V20211228_MODEL_MODIFYWORKLOADGROUPREQUEST_H_
