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

#ifndef TENCENTCLOUD_LIGHTHOUSE_V20200324_MODEL_DESCRIBEDISKSRETURNABLERESPONSE_H_
#define TENCENTCLOUD_LIGHTHOUSE_V20200324_MODEL_DESCRIBEDISKSRETURNABLERESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/lighthouse/v20200324/model/DiskReturnable.h>


namespace TencentCloud
{
    namespace Lighthouse
    {
        namespace V20200324
        {
            namespace Model
            {
                /**
                * DescribeDisksReturnable response structure.
                */
                class DescribeDisksReturnableResponse : public AbstractModel
                {
                public:
                    DescribeDisksReturnableResponse();
                    ~DescribeDisksReturnableResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取List of returnable cloud disks.
                     * @return DiskReturnableSet List of returnable cloud disks.
                     * 
                     */
                    std::vector<DiskReturnable> GetDiskReturnableSet() const;

                    /**
                     * 判断参数 DiskReturnableSet 是否已赋值
                     * @return DiskReturnableSet 是否已赋值
                     * 
                     */
                    bool DiskReturnableSetHasBeenSet() const;

                    /**
                     * 获取Number of eligible cloud disks.
                     * @return TotalCount Number of eligible cloud disks.
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
                     * List of returnable cloud disks.
                     */
                    std::vector<DiskReturnable> m_diskReturnableSet;
                    bool m_diskReturnableSetHasBeenSet;

                    /**
                     * Number of eligible cloud disks.
                     */
                    int64_t m_totalCount;
                    bool m_totalCountHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_LIGHTHOUSE_V20200324_MODEL_DESCRIBEDISKSRETURNABLERESPONSE_H_
