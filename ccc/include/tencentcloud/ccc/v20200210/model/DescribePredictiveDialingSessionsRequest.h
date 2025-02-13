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

#ifndef TENCENTCLOUD_CCC_V20200210_MODEL_DESCRIBEPREDICTIVEDIALINGSESSIONSREQUEST_H_
#define TENCENTCLOUD_CCC_V20200210_MODEL_DESCRIBEPREDICTIVEDIALINGSESSIONSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Ccc
    {
        namespace V20200210
        {
            namespace Model
            {
                /**
                * DescribePredictiveDialingSessions request structure.
                */
                class DescribePredictiveDialingSessionsRequest : public AbstractModel
                {
                public:
                    DescribePredictiveDialingSessionsRequest();
                    ~DescribePredictiveDialingSessionsRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Application id (required) can be found at https://console.cloud.tencent.com/ccc.
                     * @return SdkAppId Application id (required) can be found at https://console.cloud.tencent.com/ccc.
                     * 
                     */
                    int64_t GetSdkAppId() const;

                    /**
                     * 设置Application id (required) can be found at https://console.cloud.tencent.com/ccc.
                     * @param _sdkAppId Application id (required) can be found at https://console.cloud.tencent.com/ccc.
                     * 
                     */
                    void SetSdkAppId(const int64_t& _sdkAppId);

                    /**
                     * 判断参数 SdkAppId 是否已赋值
                     * @return SdkAppId 是否已赋值
                     * 
                     */
                    bool SdkAppIdHasBeenSet() const;

                    /**
                     * 获取Generated task id.
                     * @return CampaignId Generated task id.
                     * 
                     */
                    int64_t GetCampaignId() const;

                    /**
                     * 设置Generated task id.
                     * @param _campaignId Generated task id.
                     * 
                     */
                    void SetCampaignId(const int64_t& _campaignId);

                    /**
                     * 判断参数 CampaignId 是否已赋值
                     * @return CampaignId 是否已赋值
                     * 
                     */
                    bool CampaignIdHasBeenSet() const;

                    /**
                     * 获取Page size, maximum of 1000.
                     * @return PageSize Page size, maximum of 1000.
                     * 
                     */
                    int64_t GetPageSize() const;

                    /**
                     * 设置Page size, maximum of 1000.
                     * @param _pageSize Page size, maximum of 1000.
                     * 
                     */
                    void SetPageSize(const int64_t& _pageSize);

                    /**
                     * 判断参数 PageSize 是否已赋值
                     * @return PageSize 是否已赋值
                     * 
                     */
                    bool PageSizeHasBeenSet() const;

                    /**
                     * 获取Page number starting from 0.
                     * @return PageNumber Page number starting from 0.
                     * 
                     */
                    int64_t GetPageNumber() const;

                    /**
                     * 设置Page number starting from 0.
                     * @param _pageNumber Page number starting from 0.
                     * 
                     */
                    void SetPageNumber(const int64_t& _pageNumber);

                    /**
                     * 判断参数 PageNumber 是否已赋值
                     * @return PageNumber 是否已赋值
                     * 
                     */
                    bool PageNumberHasBeenSet() const;

                private:

                    /**
                     * Application id (required) can be found at https://console.cloud.tencent.com/ccc.
                     */
                    int64_t m_sdkAppId;
                    bool m_sdkAppIdHasBeenSet;

                    /**
                     * Generated task id.
                     */
                    int64_t m_campaignId;
                    bool m_campaignIdHasBeenSet;

                    /**
                     * Page size, maximum of 1000.
                     */
                    int64_t m_pageSize;
                    bool m_pageSizeHasBeenSet;

                    /**
                     * Page number starting from 0.
                     */
                    int64_t m_pageNumber;
                    bool m_pageNumberHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CCC_V20200210_MODEL_DESCRIBEPREDICTIVEDIALINGSESSIONSREQUEST_H_
