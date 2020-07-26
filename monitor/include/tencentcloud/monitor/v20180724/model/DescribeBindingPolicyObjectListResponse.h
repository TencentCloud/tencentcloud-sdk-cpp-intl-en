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

#ifndef TENCENTCLOUD_MONITOR_V20180724_MODEL_DESCRIBEBINDINGPOLICYOBJECTLISTRESPONSE_H_
#define TENCENTCLOUD_MONITOR_V20180724_MODEL_DESCRIBEBINDINGPOLICYOBJECTLISTRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/monitor/v20180724/model/DescribeBindingPolicyObjectListInstance.h>
#include <tencentcloud/monitor/v20180724/model/DescribeBindingPolicyObjectListInstanceGroup.h>


namespace TencentCloud
{
    namespace Monitor
    {
        namespace V20180724
        {
            namespace Model
            {
                /**
                * DescribeBindingPolicyObjectList response structure.
                */
                class DescribeBindingPolicyObjectListResponse : public AbstractModel
                {
                public:
                    DescribeBindingPolicyObjectListResponse();
                    ~DescribeBindingPolicyObjectListResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);


                    /**
                     * 获取List of bound object instances.
Note: This field may return null, indicating that no valid value was found.
                     * @return List List of bound object instances.
Note: This field may return null, indicating that no valid value was found.
                     */
                    std::vector<DescribeBindingPolicyObjectListInstance> GetList() const;

                    /**
                     * 判断参数 List 是否已赋值
                     * @return List 是否已赋值
                     */
                    bool ListHasBeenSet() const;

                    /**
                     * 获取Total number of bound object instances.
                     * @return Total Total number of bound object instances.
                     */
                    int64_t GetTotal() const;

                    /**
                     * 判断参数 Total 是否已赋值
                     * @return Total 是否已赋值
                     */
                    bool TotalHasBeenSet() const;

                    /**
                     * 获取Number of object instances that are not shielded.
                     * @return NoShieldedSum Number of object instances that are not shielded.
                     */
                    int64_t GetNoShieldedSum() const;

                    /**
                     * 判断参数 NoShieldedSum 是否已赋值
                     * @return NoShieldedSum 是否已赋值
                     */
                    bool NoShieldedSumHasBeenSet() const;

                    /**
                     * 获取Bound instance group information. This parameter is not configured if no instance group is bound.
Note: This field may return null, indicating that no valid value was found.
                     * @return InstanceGroup Bound instance group information. This parameter is not configured if no instance group is bound.
Note: This field may return null, indicating that no valid value was found.
                     */
                    DescribeBindingPolicyObjectListInstanceGroup GetInstanceGroup() const;

                    /**
                     * 判断参数 InstanceGroup 是否已赋值
                     * @return InstanceGroup 是否已赋值
                     */
                    bool InstanceGroupHasBeenSet() const;

                private:

                    /**
                     * List of bound object instances.
Note: This field may return null, indicating that no valid value was found.
                     */
                    std::vector<DescribeBindingPolicyObjectListInstance> m_list;
                    bool m_listHasBeenSet;

                    /**
                     * Total number of bound object instances.
                     */
                    int64_t m_total;
                    bool m_totalHasBeenSet;

                    /**
                     * Number of object instances that are not shielded.
                     */
                    int64_t m_noShieldedSum;
                    bool m_noShieldedSumHasBeenSet;

                    /**
                     * Bound instance group information. This parameter is not configured if no instance group is bound.
Note: This field may return null, indicating that no valid value was found.
                     */
                    DescribeBindingPolicyObjectListInstanceGroup m_instanceGroup;
                    bool m_instanceGroupHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MONITOR_V20180724_MODEL_DESCRIBEBINDINGPOLICYOBJECTLISTRESPONSE_H_
