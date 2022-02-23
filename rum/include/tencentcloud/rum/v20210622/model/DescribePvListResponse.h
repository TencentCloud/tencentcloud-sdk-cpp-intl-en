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

#ifndef TENCENTCLOUD_RUM_V20210622_MODEL_DESCRIBEPVLISTRESPONSE_H_
#define TENCENTCLOUD_RUM_V20210622_MODEL_DESCRIBEPVLISTRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/rum/v20210622/model/RumPvInfo.h>


namespace TencentCloud
{
    namespace Rum
    {
        namespace V20210622
        {
            namespace Model
            {
                /**
                * DescribePvList response structure.
                */
                class DescribePvListResponse : public AbstractModel
                {
                public:
                    DescribePvListResponse();
                    ~DescribePvListResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取PV list
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return ProjectPvSet PV list
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<RumPvInfo> GetProjectPvSet() const;

                    /**
                     * 判断参数 ProjectPvSet 是否已赋值
                     * @return ProjectPvSet 是否已赋值
                     */
                    bool ProjectPvSetHasBeenSet() const;

                private:

                    /**
                     * PV list
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<RumPvInfo> m_projectPvSet;
                    bool m_projectPvSetHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_RUM_V20210622_MODEL_DESCRIBEPVLISTRESPONSE_H_
