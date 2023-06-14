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

#ifndef TENCENTCLOUD_CVM_V20170312_MODEL_DELETEDISASTERRECOVERGROUPSREQUEST_H_
#define TENCENTCLOUD_CVM_V20170312_MODEL_DELETEDISASTERRECOVERGROUPSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cvm
    {
        namespace V20170312
        {
            namespace Model
            {
                /**
                * DeleteDisasterRecoverGroups request structure.
                */
                class DeleteDisasterRecoverGroupsRequest : public AbstractModel
                {
                public:
                    DeleteDisasterRecoverGroupsRequest();
                    ~DeleteDisasterRecoverGroupsRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取ID list of spread placement groups, obtainable via the [DescribeDisasterRecoverGroups](https://intl.cloud.tencent.com/document/api/213/17810?from_cn_redirect=1) API. You can operate up to 100 spread placement groups in each request.
                     * @return DisasterRecoverGroupIds ID list of spread placement groups, obtainable via the [DescribeDisasterRecoverGroups](https://intl.cloud.tencent.com/document/api/213/17810?from_cn_redirect=1) API. You can operate up to 100 spread placement groups in each request.
                     * 
                     */
                    std::vector<std::string> GetDisasterRecoverGroupIds() const;

                    /**
                     * 设置ID list of spread placement groups, obtainable via the [DescribeDisasterRecoverGroups](https://intl.cloud.tencent.com/document/api/213/17810?from_cn_redirect=1) API. You can operate up to 100 spread placement groups in each request.
                     * @param _disasterRecoverGroupIds ID list of spread placement groups, obtainable via the [DescribeDisasterRecoverGroups](https://intl.cloud.tencent.com/document/api/213/17810?from_cn_redirect=1) API. You can operate up to 100 spread placement groups in each request.
                     * 
                     */
                    void SetDisasterRecoverGroupIds(const std::vector<std::string>& _disasterRecoverGroupIds);

                    /**
                     * 判断参数 DisasterRecoverGroupIds 是否已赋值
                     * @return DisasterRecoverGroupIds 是否已赋值
                     * 
                     */
                    bool DisasterRecoverGroupIdsHasBeenSet() const;

                private:

                    /**
                     * ID list of spread placement groups, obtainable via the [DescribeDisasterRecoverGroups](https://intl.cloud.tencent.com/document/api/213/17810?from_cn_redirect=1) API. You can operate up to 100 spread placement groups in each request.
                     */
                    std::vector<std::string> m_disasterRecoverGroupIds;
                    bool m_disasterRecoverGroupIdsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CVM_V20170312_MODEL_DELETEDISASTERRECOVERGROUPSREQUEST_H_
