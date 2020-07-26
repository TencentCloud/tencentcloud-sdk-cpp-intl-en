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

#ifndef TENCENTCLOUD_GAAP_V20180529_MODEL_DESCRIBEDOMAINERRORPAGEINFOBYIDSREQUEST_H_
#define TENCENTCLOUD_GAAP_V20180529_MODEL_DESCRIBEDOMAINERRORPAGEINFOBYIDSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Gaap
    {
        namespace V20180529
        {
            namespace Model
            {
                /**
                * DescribeDomainErrorPageInfoByIds request structure.
                */
                class DescribeDomainErrorPageInfoByIdsRequest : public AbstractModel
                {
                public:
                    DescribeDomainErrorPageInfoByIdsRequest();
                    ~DescribeDomainErrorPageInfoByIdsRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取List of custom error IDs. Up to 10 IDs are supported
                     * @return ErrorPageIds List of custom error IDs. Up to 10 IDs are supported
                     */
                    std::vector<std::string> GetErrorPageIds() const;

                    /**
                     * 设置List of custom error IDs. Up to 10 IDs are supported
                     * @param ErrorPageIds List of custom error IDs. Up to 10 IDs are supported
                     */
                    void SetErrorPageIds(const std::vector<std::string>& _errorPageIds);

                    /**
                     * 判断参数 ErrorPageIds 是否已赋值
                     * @return ErrorPageIds 是否已赋值
                     */
                    bool ErrorPageIdsHasBeenSet() const;

                private:

                    /**
                     * List of custom error IDs. Up to 10 IDs are supported
                     */
                    std::vector<std::string> m_errorPageIds;
                    bool m_errorPageIdsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_GAAP_V20180529_MODEL_DESCRIBEDOMAINERRORPAGEINFOBYIDSREQUEST_H_
