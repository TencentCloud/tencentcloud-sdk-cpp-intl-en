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

#ifndef TENCENTCLOUD_CDWPG_V20201230_MODEL_DESCRIBEUPGRADELISTRESPONSE_H_
#define TENCENTCLOUD_CDWPG_V20201230_MODEL_DESCRIBEUPGRADELISTRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cdwpg/v20201230/model/UpgradeItem.h>


namespace TencentCloud
{
    namespace Cdwpg
    {
        namespace V20201230
        {
            namespace Model
            {
                /**
                * DescribeUpgradeList response structure.
                */
                class DescribeUpgradeListResponse : public AbstractModel
                {
                public:
                    DescribeUpgradeListResponse();
                    ~DescribeUpgradeListResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取Details of instance upgrade records.Note: This field may return null, indicating that no valid values can be obtained.
                     * @return UpgradeItems Details of instance upgrade records.Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::vector<UpgradeItem> GetUpgradeItems() const;

                    /**
                     * 判断参数 UpgradeItems 是否已赋值
                     * @return UpgradeItems 是否已赋值
                     * 
                     */
                    bool UpgradeItemsHasBeenSet() const;

                    /**
                     * 获取Total count of upgrade records.
                     * @return TotalCount Total count of upgrade records.
                     * 
                     */
                    std::string GetTotalCount() const;

                    /**
                     * 判断参数 TotalCount 是否已赋值
                     * @return TotalCount 是否已赋值
                     * 
                     */
                    bool TotalCountHasBeenSet() const;

                private:

                    /**
                     * Details of instance upgrade records.Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<UpgradeItem> m_upgradeItems;
                    bool m_upgradeItemsHasBeenSet;

                    /**
                     * Total count of upgrade records.
                     */
                    std::string m_totalCount;
                    bool m_totalCountHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CDWPG_V20201230_MODEL_DESCRIBEUPGRADELISTRESPONSE_H_
