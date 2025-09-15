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

#ifndef TENCENTCLOUD_EMR_V20190103_MODEL_DESCRIBERESOURCESCHEDULEDIFFDETAILRESPONSE_H_
#define TENCENTCLOUD_EMR_V20190103_MODEL_DESCRIBERESOURCESCHEDULEDIFFDETAILRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/emr/v20190103/model/DiffDetail.h>


namespace TencentCloud
{
    namespace Emr
    {
        namespace V20190103
        {
            namespace Model
            {
                /**
                * DescribeResourceScheduleDiffDetail response structure.
                */
                class DescribeResourceScheduleDiffDetailResponse : public AbstractModel
                {
                public:
                    DescribeResourceScheduleDiffDetailResponse();
                    ~DescribeResourceScheduleDiffDetailResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取Details of change items.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Details Details of change items.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::vector<DiffDetail> GetDetails() const;

                    /**
                     * 判断参数 Details 是否已赋值
                     * @return Details 是否已赋值
                     * 
                     */
                    bool DetailsHasBeenSet() const;

                private:

                    /**
                     * Details of change items.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<DiffDetail> m_details;
                    bool m_detailsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_EMR_V20190103_MODEL_DESCRIBERESOURCESCHEDULEDIFFDETAILRESPONSE_H_
