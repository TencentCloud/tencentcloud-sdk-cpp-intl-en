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

#ifndef TENCENTCLOUD_CLB_V20180317_MODEL_MODIFYTARGETGROUPINSTANCESPORTREQUEST_H_
#define TENCENTCLOUD_CLB_V20180317_MODEL_MODIFYTARGETGROUPINSTANCESPORTREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/clb/v20180317/model/TargetGroupInstance.h>


namespace TencentCloud
{
    namespace Clb
    {
        namespace V20180317
        {
            namespace Model
            {
                /**
                * ModifyTargetGroupInstancesPort request structure.
                */
                class ModifyTargetGroupInstancesPortRequest : public AbstractModel
                {
                public:
                    ModifyTargetGroupInstancesPortRequest();
                    ~ModifyTargetGroupInstancesPortRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Target group ID
                     * @return TargetGroupId Target group ID
                     * 
                     */
                    std::string GetTargetGroupId() const;

                    /**
                     * 设置Target group ID
                     * @param _targetGroupId Target group ID
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
                     * 获取Array of servers whose Port is to be modified. NewPort and Port are required items in this api.
                     * @return TargetGroupInstances Array of servers whose Port is to be modified. NewPort and Port are required items in this api.
                     * 
                     */
                    std::vector<TargetGroupInstance> GetTargetGroupInstances() const;

                    /**
                     * 设置Array of servers whose Port is to be modified. NewPort and Port are required items in this api.
                     * @param _targetGroupInstances Array of servers whose Port is to be modified. NewPort and Port are required items in this api.
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
                     * Target group ID
                     */
                    std::string m_targetGroupId;
                    bool m_targetGroupIdHasBeenSet;

                    /**
                     * Array of servers whose Port is to be modified. NewPort and Port are required items in this api.
                     */
                    std::vector<TargetGroupInstance> m_targetGroupInstances;
                    bool m_targetGroupInstancesHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CLB_V20180317_MODEL_MODIFYTARGETGROUPINSTANCESPORTREQUEST_H_
