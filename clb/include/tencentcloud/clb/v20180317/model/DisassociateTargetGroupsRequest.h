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

#ifndef TENCENTCLOUD_CLB_V20180317_MODEL_DISASSOCIATETARGETGROUPSREQUEST_H_
#define TENCENTCLOUD_CLB_V20180317_MODEL_DISASSOCIATETARGETGROUPSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/clb/v20180317/model/TargetGroupAssociation.h>


namespace TencentCloud
{
    namespace Clb
    {
        namespace V20180317
        {
            namespace Model
            {
                /**
                * DisassociateTargetGroups request structure.
                */
                class DisassociateTargetGroupsRequest : public AbstractModel
                {
                public:
                    DisassociateTargetGroupsRequest();
                    ~DisassociateTargetGroupsRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Array of rules to be unbound
                     * @return Associations Array of rules to be unbound
                     * 
                     */
                    std::vector<TargetGroupAssociation> GetAssociations() const;

                    /**
                     * 设置Array of rules to be unbound
                     * @param _associations Array of rules to be unbound
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
                     * Array of rules to be unbound
                     */
                    std::vector<TargetGroupAssociation> m_associations;
                    bool m_associationsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CLB_V20180317_MODEL_DISASSOCIATETARGETGROUPSREQUEST_H_
