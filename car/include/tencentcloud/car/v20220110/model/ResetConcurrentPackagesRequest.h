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

#ifndef TENCENTCLOUD_CAR_V20220110_MODEL_RESETCONCURRENTPACKAGESREQUEST_H_
#define TENCENTCLOUD_CAR_V20220110_MODEL_RESETCONCURRENTPACKAGESREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Car
    {
        namespace V20220110
        {
            namespace Model
            {
                /**
                * ResetConcurrentPackages request structure.
                */
                class ResetConcurrentPackagesRequest : public AbstractModel
                {
                public:
                    ResetConcurrentPackagesRequest();
                    ~ResetConcurrentPackagesRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Concurrency pack ID array.
                     * @return ConcurrentPackageIds Concurrency pack ID array.
                     * 
                     */
                    std::vector<std::string> GetConcurrentPackageIds() const;

                    /**
                     * 设置Concurrency pack ID array.
                     * @param _concurrentPackageIds Concurrency pack ID array.
                     * 
                     */
                    void SetConcurrentPackageIds(const std::vector<std::string>& _concurrentPackageIds);

                    /**
                     * 判断参数 ConcurrentPackageIds 是否已赋值
                     * @return ConcurrentPackageIds 是否已赋值
                     * 
                     */
                    bool ConcurrentPackageIdsHasBeenSet() const;

                private:

                    /**
                     * Concurrency pack ID array.
                     */
                    std::vector<std::string> m_concurrentPackageIds;
                    bool m_concurrentPackageIdsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CAR_V20220110_MODEL_RESETCONCURRENTPACKAGESREQUEST_H_
