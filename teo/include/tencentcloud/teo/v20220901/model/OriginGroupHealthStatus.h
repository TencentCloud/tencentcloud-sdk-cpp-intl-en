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

#ifndef TENCENTCLOUD_TEO_V20220901_MODEL_ORIGINGROUPHEALTHSTATUS_H_
#define TENCENTCLOUD_TEO_V20220901_MODEL_ORIGINGROUPHEALTHSTATUS_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/teo/v20220901/model/OriginHealthStatus.h>


namespace TencentCloud
{
    namespace Teo
    {
        namespace V20220901
        {
            namespace Model
            {
                /**
                * Origin server group health status.
                */
                class OriginGroupHealthStatus : public AbstractModel
                {
                public:
                    OriginGroupHealthStatus();
                    ~OriginGroupHealthStatus() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Origin server group ID.
                     * @return OriginGroupID Origin server group ID.
                     * 
                     */
                    std::string GetOriginGroupID() const;

                    /**
                     * 设置Origin server group ID.
                     * @param _originGroupID Origin server group ID.
                     * 
                     */
                    void SetOriginGroupID(const std::string& _originGroupID);

                    /**
                     * 判断参数 OriginGroupID 是否已赋值
                     * @return OriginGroupID 是否已赋值
                     * 
                     */
                    bool OriginGroupIDHasBeenSet() const;

                    /**
                     * 获取Origin server group name.
                     * @return OriginGroupName Origin server group name.
                     * 
                     */
                    std::string GetOriginGroupName() const;

                    /**
                     * 设置Origin server group name.
                     * @param _originGroupName Origin server group name.
                     * 
                     */
                    void SetOriginGroupName(const std::string& _originGroupName);

                    /**
                     * 判断参数 OriginGroupName 是否已赋值
                     * @return OriginGroupName 是否已赋值
                     * 
                     */
                    bool OriginGroupNameHasBeenSet() const;

                    /**
                     * 获取Origin server group type. Valid values:
<li>HTTP: HTTP-specific.</li>
<li>GENERAL: general.</li>
                     * @return OriginType Origin server group type. Valid values:
<li>HTTP: HTTP-specific.</li>
<li>GENERAL: general.</li>
                     * 
                     */
                    std::string GetOriginType() const;

                    /**
                     * 设置Origin server group type. Valid values:
<li>HTTP: HTTP-specific.</li>
<li>GENERAL: general.</li>
                     * @param _originType Origin server group type. Valid values:
<li>HTTP: HTTP-specific.</li>
<li>GENERAL: general.</li>
                     * 
                     */
                    void SetOriginType(const std::string& _originType);

                    /**
                     * 判断参数 OriginType 是否已赋值
                     * @return OriginType 是否已赋值
                     * 
                     */
                    bool OriginTypeHasBeenSet() const;

                    /**
                     * 获取Priority.
                     * @return Priority Priority.
                     * 
                     */
                    std::string GetPriority() const;

                    /**
                     * 设置Priority.
                     * @param _priority Priority.
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
                     * 获取Health status of each origin server in an origin server group.
                     * @return OriginHealthStatus Health status of each origin server in an origin server group.
                     * 
                     */
                    std::vector<OriginHealthStatus> GetOriginHealthStatus() const;

                    /**
                     * 设置Health status of each origin server in an origin server group.
                     * @param _originHealthStatus Health status of each origin server in an origin server group.
                     * 
                     */
                    void SetOriginHealthStatus(const std::vector<OriginHealthStatus>& _originHealthStatus);

                    /**
                     * 判断参数 OriginHealthStatus 是否已赋值
                     * @return OriginHealthStatus 是否已赋值
                     * 
                     */
                    bool OriginHealthStatusHasBeenSet() const;

                private:

                    /**
                     * Origin server group ID.
                     */
                    std::string m_originGroupID;
                    bool m_originGroupIDHasBeenSet;

                    /**
                     * Origin server group name.
                     */
                    std::string m_originGroupName;
                    bool m_originGroupNameHasBeenSet;

                    /**
                     * Origin server group type. Valid values:
<li>HTTP: HTTP-specific.</li>
<li>GENERAL: general.</li>
                     */
                    std::string m_originType;
                    bool m_originTypeHasBeenSet;

                    /**
                     * Priority.
                     */
                    std::string m_priority;
                    bool m_priorityHasBeenSet;

                    /**
                     * Health status of each origin server in an origin server group.
                     */
                    std::vector<OriginHealthStatus> m_originHealthStatus;
                    bool m_originHealthStatusHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220901_MODEL_ORIGINGROUPHEALTHSTATUS_H_
