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

#ifndef TENCENTCLOUD_LCIC_V20220817_MODEL_DESCRIBESUPERVISORSREQUEST_H_
#define TENCENTCLOUD_LCIC_V20220817_MODEL_DESCRIBESUPERVISORSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Lcic
    {
        namespace V20220817
        {
            namespace Model
            {
                /**
                * DescribeSupervisors request structure.
                */
                class DescribeSupervisorsRequest : public AbstractModel
                {
                public:
                    DescribeSupervisorsRequest();
                    ~DescribeSupervisorsRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取The SDKAppID assigned by LCIC.

                     * @return SdkAppId The SDKAppID assigned by LCIC.

                     * 
                     */
                    uint64_t GetSdkAppId() const;

                    /**
                     * 设置The SDKAppID assigned by LCIC.

                     * @param _sdkAppId The SDKAppID assigned by LCIC.

                     * 
                     */
                    void SetSdkAppId(const uint64_t& _sdkAppId);

                    /**
                     * 判断参数 SdkAppId 是否已赋值
                     * @return SdkAppId 是否已赋值
                     * 
                     */
                    bool SdkAppIdHasBeenSet() const;

                    /**
                     * 获取The maximum number of records per page. The maximum value allowed is 100, and the default value is 20.
                     * @return Limit The maximum number of records per page. The maximum value allowed is 100, and the default value is 20.
                     * 
                     */
                    uint64_t GetLimit() const;

                    /**
                     * 设置The maximum number of records per page. The maximum value allowed is 100, and the default value is 20.
                     * @param _limit The maximum number of records per page. The maximum value allowed is 100, and the default value is 20.
                     * 
                     */
                    void SetLimit(const uint64_t& _limit);

                    /**
                     * 判断参数 Limit 是否已赋值
                     * @return Limit 是否已赋值
                     * 
                     */
                    bool LimitHasBeenSet() const;

                    /**
                     * 获取The page to return records from. Pagination starts from 1, which is also the default value of this parameter.
                     * @return Page The page to return records from. Pagination starts from 1, which is also the default value of this parameter.
                     * 
                     */
                    uint64_t GetPage() const;

                    /**
                     * 设置The page to return records from. Pagination starts from 1, which is also the default value of this parameter.
                     * @param _page The page to return records from. Pagination starts from 1, which is also the default value of this parameter.
                     * 
                     */
                    void SetPage(const uint64_t& _page);

                    /**
                     * 判断参数 Page 是否已赋值
                     * @return Page 是否已赋值
                     * 
                     */
                    bool PageHasBeenSet() const;

                private:

                    /**
                     * The SDKAppID assigned by LCIC.

                     */
                    uint64_t m_sdkAppId;
                    bool m_sdkAppIdHasBeenSet;

                    /**
                     * The maximum number of records per page. The maximum value allowed is 100, and the default value is 20.
                     */
                    uint64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * The page to return records from. Pagination starts from 1, which is also the default value of this parameter.
                     */
                    uint64_t m_page;
                    bool m_pageHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_LCIC_V20220817_MODEL_DESCRIBESUPERVISORSREQUEST_H_
