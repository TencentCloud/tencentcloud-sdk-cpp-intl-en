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

#ifndef TENCENTCLOUD_GWLB_V20240906_MODEL_DEREGISTERTARGETGROUPINSTANCESREQUEST_H_
#define TENCENTCLOUD_GWLB_V20240906_MODEL_DEREGISTERTARGETGROUPINSTANCESREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/gwlb/v20240906/model/TargetGroupInstance.h>


namespace TencentCloud
{
    namespace Gwlb
    {
        namespace V20240906
        {
            namespace Model
            {
                /**
                * DeregisterTargetGroupInstances request structure.
                */
                class DeregisterTargetGroupInstancesRequest : public AbstractModel
                {
                public:
                    DeregisterTargetGroupInstancesRequest();
                    ~DeregisterTargetGroupInstancesRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Target group ID.
                     * @return TargetGroupId Target group ID.
                     * 
                     */
                    std::string GetTargetGroupId() const;

                    /**
                     * 设置Target group ID.
                     * @param _targetGroupId Target group ID.
                     * 
                     */
                    void SetTargetGroupId(const std::string& _targetGroupId);

                    /**
                     * 判断参数 TargetGroupId 是否已赋值
                     * @return TargetGroupId 是否已赋值
                     * 
                     */
                    bool TargetGroupIdHasBeenSet() const;

                    /**
                     * 获取Information on server to be unbound.
                     * @return TargetGroupInstances Information on server to be unbound.
                     * 
                     */
                    std::vector<TargetGroupInstance> GetTargetGroupInstances() const;

                    /**
                     * 设置Information on server to be unbound.
                     * @param _targetGroupInstances Information on server to be unbound.
                     * 
                     */
                    void SetTargetGroupInstances(const std::vector<TargetGroupInstance>& _targetGroupInstances);

                    /**
                     * 判断参数 TargetGroupInstances 是否已赋值
                     * @return TargetGroupInstances 是否已赋值
                     * 
                     */
                    bool TargetGroupInstancesHasBeenSet() const;

                private:

                    /**
                     * Target group ID.
                     */
                    std::string m_targetGroupId;
                    bool m_targetGroupIdHasBeenSet;

                    /**
                     * Information on server to be unbound.
                     */
                    std::vector<TargetGroupInstance> m_targetGroupInstances;
                    bool m_targetGroupInstancesHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_GWLB_V20240906_MODEL_DEREGISTERTARGETGROUPINSTANCESREQUEST_H_
