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

#ifndef TENCENTCLOUD_CCC_V20200210_MODEL_DESCRIBEPREDICTIVEDIALINGCAMPAIGNSREQUEST_H_
#define TENCENTCLOUD_CCC_V20200210_MODEL_DESCRIBEPREDICTIVEDIALINGCAMPAIGNSREQUEST_H_

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
                * DescribePredictiveDialingCampaigns request structure.
                */
                class DescribePredictiveDialingCampaignsRequest : public AbstractModel
                {
                public:
                    DescribePredictiveDialingCampaignsRequest();
                    ~DescribePredictiveDialingCampaignsRequest() = default;
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
                     * 获取Page size, 100 maximum.
                     * @return PageSize Page size, 100 maximum.
                     * 
                     */
                    int64_t GetPageSize() const;

                    /**
                     * 设置Page size, 100 maximum.
                     * @param _pageSize Page size, 100 maximum.
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

                    /**
                     * 获取Query the task list name keyword.
                     * @return Name Query the task list name keyword.
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置Query the task list name keyword.
                     * @param _name Query the task list name keyword.
                     * 
                     */
                    void SetName(const std::string& _name);

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     * 
                     */
                    bool NameHasBeenSet() const;

                    /**
                     * 获取Query task list skill group id.
                     * @return SkillGroupId Query task list skill group id.
                     * 
                     */
                    int64_t GetSkillGroupId() const;

                    /**
                     * 设置Query task list skill group id.
                     * @param _skillGroupId Query task list skill group id.
                     * 
                     */
                    void SetSkillGroupId(const int64_t& _skillGroupId);

                    /**
                     * 判断参数 SkillGroupId 是否已赋值
                     * @return SkillGroupId 是否已赋值
                     * 
                     */
                    bool SkillGroupIdHasBeenSet() const;

                private:

                    /**
                     * Application id (required) can be found at https://console.cloud.tencent.com/ccc.
                     */
                    int64_t m_sdkAppId;
                    bool m_sdkAppIdHasBeenSet;

                    /**
                     * Page size, 100 maximum.
                     */
                    int64_t m_pageSize;
                    bool m_pageSizeHasBeenSet;

                    /**
                     * Page number starting from 0.
                     */
                    int64_t m_pageNumber;
                    bool m_pageNumberHasBeenSet;

                    /**
                     * Query the task list name keyword.
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * Query task list skill group id.
                     */
                    int64_t m_skillGroupId;
                    bool m_skillGroupIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CCC_V20200210_MODEL_DESCRIBEPREDICTIVEDIALINGCAMPAIGNSREQUEST_H_
