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

#ifndef TENCENTCLOUD_LIVE_V20180801_MODEL_DESCRIBELIVEDOMAINRESPONSE_H_
#define TENCENTCLOUD_LIVE_V20180801_MODEL_DESCRIBELIVEDOMAINRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/live/v20180801/model/DomainInfo.h>


namespace TencentCloud
{
    namespace Live
    {
        namespace V20180801
        {
            namespace Model
            {
                /**
                * DescribeLiveDomain response structure.
                */
                class DescribeLiveDomainResponse : public AbstractModel
                {
                public:
                    DescribeLiveDomainResponse();
                    ~DescribeLiveDomainResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取Domain name information.
Note: this field may return `null`, indicating that no valid value is obtained.
                     * @return DomainInfo Domain name information.
Note: this field may return `null`, indicating that no valid value is obtained.
                     * 
                     */
                    DomainInfo GetDomainInfo() const;

                    /**
                     * 判断参数 DomainInfo 是否已赋值
                     * @return DomainInfo 是否已赋值
                     * 
                     */
                    bool DomainInfoHasBeenSet() const;

                private:

                    /**
                     * Domain name information.
Note: this field may return `null`, indicating that no valid value is obtained.
                     */
                    DomainInfo m_domainInfo;
                    bool m_domainInfoHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_LIVE_V20180801_MODEL_DESCRIBELIVEDOMAINRESPONSE_H_
