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

#ifndef TENCENTCLOUD_DNSPOD_V20210323_MODEL_DESCRIBEDOMAINSHAREINFORESPONSE_H_
#define TENCENTCLOUD_DNSPOD_V20210323_MODEL_DESCRIBEDOMAINSHAREINFORESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/dnspod/v20210323/model/DomainShareInfo.h>


namespace TencentCloud
{
    namespace Dnspod
    {
        namespace V20210323
        {
            namespace Model
            {
                /**
                * DescribeDomainShareInfo response structure.
                */
                class DescribeDomainShareInfoResponse : public AbstractModel
                {
                public:
                    DescribeDomainShareInfoResponse();
                    ~DescribeDomainShareInfoResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取Domain sharing information
                     * @return ShareList Domain sharing information
                     * 
                     */
                    std::vector<DomainShareInfo> GetShareList() const;

                    /**
                     * 判断参数 ShareList 是否已赋值
                     * @return ShareList 是否已赋值
                     * 
                     */
                    bool ShareListHasBeenSet() const;

                    /**
                     * 获取Owner account of the domain
                     * @return Owner Owner account of the domain
                     * 
                     */
                    std::string GetOwner() const;

                    /**
                     * 判断参数 Owner 是否已赋值
                     * @return Owner 是否已赋值
                     * 
                     */
                    bool OwnerHasBeenSet() const;

                private:

                    /**
                     * Domain sharing information
                     */
                    std::vector<DomainShareInfo> m_shareList;
                    bool m_shareListHasBeenSet;

                    /**
                     * Owner account of the domain
                     */
                    std::string m_owner;
                    bool m_ownerHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DNSPOD_V20210323_MODEL_DESCRIBEDOMAINSHAREINFORESPONSE_H_
