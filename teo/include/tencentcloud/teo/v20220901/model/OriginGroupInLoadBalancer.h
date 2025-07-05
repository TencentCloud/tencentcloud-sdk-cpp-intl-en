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

#ifndef TENCENTCLOUD_TEO_V20220901_MODEL_ORIGINGROUPINLOADBALANCER_H_
#define TENCENTCLOUD_TEO_V20220901_MODEL_ORIGINGROUPINLOADBALANCER_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Teo
    {
        namespace V20220901
        {
            namespace Model
            {
                /**
                * The origin server groups that need to be bound in a LoadBalancer and their priorities.
                */
                class OriginGroupInLoadBalancer : public AbstractModel
                {
                public:
                    OriginGroupInLoadBalancer();
                    ~OriginGroupInLoadBalancer() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Priority, in the format of "priority_" + "number". The highest priority is "priority_1". Reference values:
<li>priority_1: first priority.</li>
<li>priority_2: second priority.</li>
<li>priority_3: third priority.</li> You can increase numbers for other priorities, up to "priority_10".
                     * @return Priority Priority, in the format of "priority_" + "number". The highest priority is "priority_1". Reference values:
<li>priority_1: first priority.</li>
<li>priority_2: second priority.</li>
<li>priority_3: third priority.</li> You can increase numbers for other priorities, up to "priority_10".
                     * 
                     */
                    std::string GetPriority() const;

                    /**
                     * 设置Priority, in the format of "priority_" + "number". The highest priority is "priority_1". Reference values:
<li>priority_1: first priority.</li>
<li>priority_2: second priority.</li>
<li>priority_3: third priority.</li> You can increase numbers for other priorities, up to "priority_10".
                     * @param _priority Priority, in the format of "priority_" + "number". The highest priority is "priority_1". Reference values:
<li>priority_1: first priority.</li>
<li>priority_2: second priority.</li>
<li>priority_3: third priority.</li> You can increase numbers for other priorities, up to "priority_10".
                     * 
                     */
                    void SetPriority(const std::string& _priority);

                    /**
                     * 判断参数 Priority 是否已赋值
                     * @return Priority 是否已赋值
                     * 
                     */
                    bool PriorityHasBeenSet() const;

                    /**
                     * 获取Origin server group ID.
                     * @return OriginGroupId Origin server group ID.
                     * 
                     */
                    std::string GetOriginGroupId() const;

                    /**
                     * 设置Origin server group ID.
                     * @param _originGroupId Origin server group ID.
                     * 
                     */
                    void SetOriginGroupId(const std::string& _originGroupId);

                    /**
                     * 判断参数 OriginGroupId 是否已赋值
                     * @return OriginGroupId 是否已赋值
                     * 
                     */
                    bool OriginGroupIdHasBeenSet() const;

                private:

                    /**
                     * Priority, in the format of "priority_" + "number". The highest priority is "priority_1". Reference values:
<li>priority_1: first priority.</li>
<li>priority_2: second priority.</li>
<li>priority_3: third priority.</li> You can increase numbers for other priorities, up to "priority_10".
                     */
                    std::string m_priority;
                    bool m_priorityHasBeenSet;

                    /**
                     * Origin server group ID.
                     */
                    std::string m_originGroupId;
                    bool m_originGroupIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220901_MODEL_ORIGINGROUPINLOADBALANCER_H_
