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

#ifndef TENCENTCLOUD_GWLB_V20240906_MODEL_ASSOCIATETARGETGROUPSREQUEST_H_
#define TENCENTCLOUD_GWLB_V20240906_MODEL_ASSOCIATETARGETGROUPSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/gwlb/v20240906/model/TargetGroupAssociation.h>


namespace TencentCloud
{
    namespace Gwlb
    {
        namespace V20240906
        {
            namespace Model
            {
                /**
                * AssociateTargetGroups request structure.
                */
                class AssociateTargetGroupsRequest : public AbstractModel
                {
                public:
                    AssociateTargetGroupsRequest();
                    ~AssociateTargetGroupsRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Binding relationship array. A single request supports up to 20 items.
                     * @return Associations Binding relationship array. A single request supports up to 20 items.
                     * 
                     */
                    std::vector<TargetGroupAssociation> GetAssociations() const;

                    /**
                     * 设置Binding relationship array. A single request supports up to 20 items.
                     * @param _associations Binding relationship array. A single request supports up to 20 items.
                     * 
                     */
                    void SetAssociations(const std::vector<TargetGroupAssociation>& _associations);

                    /**
                     * 判断参数 Associations 是否已赋值
                     * @return Associations 是否已赋值
                     * 
                     */
                    bool AssociationsHasBeenSet() const;

                private:

                    /**
                     * Binding relationship array. A single request supports up to 20 items.
                     */
                    std::vector<TargetGroupAssociation> m_associations;
                    bool m_associationsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_GWLB_V20240906_MODEL_ASSOCIATETARGETGROUPSREQUEST_H_
