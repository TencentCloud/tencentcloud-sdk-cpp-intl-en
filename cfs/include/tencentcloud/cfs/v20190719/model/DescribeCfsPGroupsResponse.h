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

#ifndef TENCENTCLOUD_CFS_V20190719_MODEL_DESCRIBECFSPGROUPSRESPONSE_H_
#define TENCENTCLOUD_CFS_V20190719_MODEL_DESCRIBECFSPGROUPSRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cfs/v20190719/model/PGroupInfo.h>


namespace TencentCloud
{
    namespace Cfs
    {
        namespace V20190719
        {
            namespace Model
            {
                /**
                * DescribeCfsPGroups response structure.
                */
                class DescribeCfsPGroupsResponse : public AbstractModel
                {
                public:
                    DescribeCfsPGroupsResponse();
                    ~DescribeCfsPGroupsResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取Permission group information list
                     * @return PGroupList Permission group information list
                     * 
                     */
                    std::vector<PGroupInfo> GetPGroupList() const;

                    /**
                     * 判断参数 PGroupList 是否已赋值
                     * @return PGroupList 是否已赋值
                     * 
                     */
                    bool PGroupListHasBeenSet() const;

                private:

                    /**
                     * Permission group information list
                     */
                    std::vector<PGroupInfo> m_pGroupList;
                    bool m_pGroupListHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CFS_V20190719_MODEL_DESCRIBECFSPGROUPSRESPONSE_H_
