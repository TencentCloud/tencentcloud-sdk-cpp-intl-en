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

#ifndef TENCENTCLOUD_CLB_V20180317_MODEL_CREATETARGETGROUPRESPONSE_H_
#define TENCENTCLOUD_CLB_V20180317_MODEL_CREATETARGETGROUPRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Clb
    {
        namespace V20180317
        {
            namespace Model
            {
                /**
                * CreateTargetGroup response structure.
                */
                class CreateTargetGroupResponse : public AbstractModel
                {
                public:
                    CreateTargetGroupResponse();
                    ~CreateTargetGroupResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);


                    /**
                     * 获取ID generated after target group creation
                     * @return TargetGroupId ID generated after target group creation
                     */
                    std::string GetTargetGroupId() const;

                    /**
                     * 判断参数 TargetGroupId 是否已赋值
                     * @return TargetGroupId 是否已赋值
                     */
                    bool TargetGroupIdHasBeenSet() const;

                private:

                    /**
                     * ID generated after target group creation
                     */
                    std::string m_targetGroupId;
                    bool m_targetGroupIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CLB_V20180317_MODEL_CREATETARGETGROUPRESPONSE_H_