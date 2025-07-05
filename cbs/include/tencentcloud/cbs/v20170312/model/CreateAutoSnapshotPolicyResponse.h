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

#ifndef TENCENTCLOUD_CBS_V20170312_MODEL_CREATEAUTOSNAPSHOTPOLICYRESPONSE_H_
#define TENCENTCLOUD_CBS_V20170312_MODEL_CREATEAUTOSNAPSHOTPOLICYRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cbs
    {
        namespace V20170312
        {
            namespace Model
            {
                /**
                * CreateAutoSnapshotPolicy response structure.
                */
                class CreateAutoSnapshotPolicyResponse : public AbstractModel
                {
                public:
                    CreateAutoSnapshotPolicyResponse();
                    ~CreateAutoSnapshotPolicyResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取The ID of the newly created scheduled snapshot policy.
                     * @return AutoSnapshotPolicyId The ID of the newly created scheduled snapshot policy.
                     * 
                     */
                    std::string GetAutoSnapshotPolicyId() const;

                    /**
                     * 判断参数 AutoSnapshotPolicyId 是否已赋值
                     * @return AutoSnapshotPolicyId 是否已赋值
                     * 
                     */
                    bool AutoSnapshotPolicyIdHasBeenSet() const;

                    /**
                     * 获取The time that initial backup will start.
                     * @return NextTriggerTime The time that initial backup will start.
                     * 
                     */
                    std::string GetNextTriggerTime() const;

                    /**
                     * 判断参数 NextTriggerTime 是否已赋值
                     * @return NextTriggerTime 是否已赋值
                     * 
                     */
                    bool NextTriggerTimeHasBeenSet() const;

                private:

                    /**
                     * The ID of the newly created scheduled snapshot policy.
                     */
                    std::string m_autoSnapshotPolicyId;
                    bool m_autoSnapshotPolicyIdHasBeenSet;

                    /**
                     * The time that initial backup will start.
                     */
                    std::string m_nextTriggerTime;
                    bool m_nextTriggerTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CBS_V20170312_MODEL_CREATEAUTOSNAPSHOTPOLICYRESPONSE_H_
