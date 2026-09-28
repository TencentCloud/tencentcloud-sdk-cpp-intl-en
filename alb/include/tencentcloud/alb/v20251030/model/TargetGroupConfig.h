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

#ifndef TENCENTCLOUD_ALB_V20251030_MODEL_TARGETGROUPCONFIG_H_
#define TENCENTCLOUD_ALB_V20251030_MODEL_TARGETGROUPCONFIG_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/alb/v20251030/model/TargetGroupTuple.h>
#include <tencentcloud/alb/v20251030/model/TargetGroupStickySession.h>


namespace TencentCloud
{
    namespace Alb
    {
        namespace V20251030
        {
            namespace Model
            {
                /**
                * Target group configuration
                */
                class TargetGroupConfig : public AbstractModel
                {
                public:
                    TargetGroupConfig();
                    ~TargetGroupConfig() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Target group list.
                     * @return TargetGroups Target group list.
                     * 
                     */
                    std::vector<TargetGroupTuple> GetTargetGroups() const;

                    /**
                     * 设置Target group list.
                     * @param _targetGroups Target group list.
                     * 
                     */
                    void SetTargetGroups(const std::vector<TargetGroupTuple>& _targetGroups);

                    /**
                     * 判断参数 TargetGroups 是否已赋值
                     * @return TargetGroups 是否已赋值
                     * 
                     */
                    bool TargetGroupsHasBeenSet() const;

                    /**
                     * 获取Session persistence between target groups
                     * @return TargetGroupStickySession Session persistence between target groups
                     * 
                     */
                    TargetGroupStickySession GetTargetGroupStickySession() const;

                    /**
                     * 设置Session persistence between target groups
                     * @param _targetGroupStickySession Session persistence between target groups
                     * 
                     */
                    void SetTargetGroupStickySession(const TargetGroupStickySession& _targetGroupStickySession);

                    /**
                     * 判断参数 TargetGroupStickySession 是否已赋值
                     * @return TargetGroupStickySession 是否已赋值
                     * 
                     */
                    bool TargetGroupStickySessionHasBeenSet() const;

                private:

                    /**
                     * Target group list.
                     */
                    std::vector<TargetGroupTuple> m_targetGroups;
                    bool m_targetGroupsHasBeenSet;

                    /**
                     * Session persistence between target groups
                     */
                    TargetGroupStickySession m_targetGroupStickySession;
                    bool m_targetGroupStickySessionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ALB_V20251030_MODEL_TARGETGROUPCONFIG_H_
