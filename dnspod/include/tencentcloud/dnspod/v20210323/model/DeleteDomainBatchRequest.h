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

#ifndef TENCENTCLOUD_DNSPOD_V20210323_MODEL_DELETEDOMAINBATCHREQUEST_H_
#define TENCENTCLOUD_DNSPOD_V20210323_MODEL_DELETEDOMAINBATCHREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Dnspod
    {
        namespace V20210323
        {
            namespace Model
            {
                /**
                * DeleteDomainBatch request structure.
                */
                class DeleteDomainBatchRequest : public AbstractModel
                {
                public:
                    DeleteDomainBatchRequest();
                    ~DeleteDomainBatchRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取The domain array.
                     * @return DomainList The domain array.
                     * 
                     */
                    std::vector<std::string> GetDomainList() const;

                    /**
                     * 设置The domain array.
                     * @param _domainList The domain array.
                     * 
                     */
                    void SetDomainList(const std::vector<std::string>& _domainList);

                    /**
                     * 判断参数 DomainList 是否已赋值
                     * @return DomainList 是否已赋值
                     * 
                     */
                    bool DomainListHasBeenSet() const;

                private:

                    /**
                     * The domain array.
                     */
                    std::vector<std::string> m_domainList;
                    bool m_domainListHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DNSPOD_V20210323_MODEL_DELETEDOMAINBATCHREQUEST_H_
