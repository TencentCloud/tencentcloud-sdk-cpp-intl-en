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

#ifndef TENCENTCLOUD_GWLB_V20240906_MODEL_TARGETGROUPASSOCIATION_H_
#define TENCENTCLOUD_GWLB_V20240906_MODEL_TARGETGROUPASSOCIATION_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Gwlb
    {
        namespace V20240906
        {
            namespace Model
            {
                /**
                * Association relationship between rules and target groups.
                */
                class TargetGroupAssociation : public AbstractModel
                {
                public:
                    TargetGroupAssociation();
                    ~TargetGroupAssociation() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取GWLB instance ID.
                     * @return LoadBalancerId GWLB instance ID.
                     * 
                     */
                    std::string GetLoadBalancerId() const;

                    /**
                     * 设置GWLB instance ID.
                     * @param _loadBalancerId GWLB instance ID.
                     * 
                     */
                    void SetLoadBalancerId(const std::string& _loadBalancerId);

                    /**
                     * 判断参数 LoadBalancerId 是否已赋值
                     * @return LoadBalancerId 是否已赋值
                     * 
                     */
                    bool LoadBalancerIdHasBeenSet() const;

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

                private:

                    /**
                     * GWLB instance ID.
                     */
                    std::string m_loadBalancerId;
                    bool m_loadBalancerIdHasBeenSet;

                    /**
                     * Target group ID.
                     */
                    std::string m_targetGroupId;
                    bool m_targetGroupIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_GWLB_V20240906_MODEL_TARGETGROUPASSOCIATION_H_
