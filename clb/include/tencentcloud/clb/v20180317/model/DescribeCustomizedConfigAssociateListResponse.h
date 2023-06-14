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

#ifndef TENCENTCLOUD_CLB_V20180317_MODEL_DESCRIBECUSTOMIZEDCONFIGASSOCIATELISTRESPONSE_H_
#define TENCENTCLOUD_CLB_V20180317_MODEL_DESCRIBECUSTOMIZEDCONFIGASSOCIATELISTRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/clb/v20180317/model/BindDetailItem.h>


namespace TencentCloud
{
    namespace Clb
    {
        namespace V20180317
        {
            namespace Model
            {
                /**
                * DescribeCustomizedConfigAssociateList response structure.
                */
                class DescribeCustomizedConfigAssociateListResponse : public AbstractModel
                {
                public:
                    DescribeCustomizedConfigAssociateListResponse();
                    ~DescribeCustomizedConfigAssociateListResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取List of bound resources
                     * @return BindList List of bound resources
                     * 
                     */
                    std::vector<BindDetailItem> GetBindList() const;

                    /**
                     * 判断参数 BindList 是否已赋值
                     * @return BindList 是否已赋值
                     * 
                     */
                    bool BindListHasBeenSet() const;

                    /**
                     * 获取Total number of bound resources
                     * @return TotalCount Total number of bound resources
                     * 
                     */
                    int64_t GetTotalCount() const;

                    /**
                     * 判断参数 TotalCount 是否已赋值
                     * @return TotalCount 是否已赋值
                     * 
                     */
                    bool TotalCountHasBeenSet() const;

                private:

                    /**
                     * List of bound resources
                     */
                    std::vector<BindDetailItem> m_bindList;
                    bool m_bindListHasBeenSet;

                    /**
                     * Total number of bound resources
                     */
                    int64_t m_totalCount;
                    bool m_totalCountHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CLB_V20180317_MODEL_DESCRIBECUSTOMIZEDCONFIGASSOCIATELISTRESPONSE_H_
