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

#ifndef TENCENTCLOUD_VOD_V20180717_MODEL_DELETEAIGCQUOTAREQUEST_H_
#define TENCENTCLOUD_VOD_V20180717_MODEL_DELETEAIGCQUOTAREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Vod
    {
        namespace V20180717
        {
            namespace Model
            {
                /**
                * DeleteAigcQuota request structure.
                */
                class DeleteAigcQuotaRequest : public AbstractModel
                {
                public:
                    DeleteAigcQuotaRequest();
                    ~DeleteAigcQuotaRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p><strong>VOD application ID. From December 25, 2023, customers who activate on-demand services must fill in this field with the app ID when accessing resources in on-demand applications, whether it is the default application or a newly created application.</strong></p>
                     * @return SubAppId <p><strong>VOD application ID. From December 25, 2023, customers who activate on-demand services must fill in this field with the app ID when accessing resources in on-demand applications, whether it is the default application or a newly created application.</strong></p>
                     * 
                     */
                    uint64_t GetSubAppId() const;

                    /**
                     * 设置<p><strong>VOD application ID. From December 25, 2023, customers who activate on-demand services must fill in this field with the app ID when accessing resources in on-demand applications, whether it is the default application or a newly created application.</strong></p>
                     * @param _subAppId <p><strong>VOD application ID. From December 25, 2023, customers who activate on-demand services must fill in this field with the app ID when accessing resources in on-demand applications, whether it is the default application or a newly created application.</strong></p>
                     * 
                     */
                    void SetSubAppId(const uint64_t& _subAppId);

                    /**
                     * 判断参数 SubAppId 是否已赋值
                     * @return SubAppId 是否已赋值
                     * 
                     */
                    bool SubAppIdHasBeenSet() const;

                    /**
                     * 获取<p>Quota type</p><p>Enumeration values:</p><ul><li>Image: AIGC image generation task</li><li>Video: AIGC video generation task</li><li>Text: AIGC text generation task</li></ul>
                     * @return QuotaType <p>Quota type</p><p>Enumeration values:</p><ul><li>Image: AIGC image generation task</li><li>Video: AIGC video generation task</li><li>Text: AIGC text generation task</li></ul>
                     * 
                     */
                    std::string GetQuotaType() const;

                    /**
                     * 设置<p>Quota type</p><p>Enumeration values:</p><ul><li>Image: AIGC image generation task</li><li>Video: AIGC video generation task</li><li>Text: AIGC text generation task</li></ul>
                     * @param _quotaType <p>Quota type</p><p>Enumeration values:</p><ul><li>Image: AIGC image generation task</li><li>Video: AIGC video generation task</li><li>Text: AIGC text generation task</li></ul>
                     * 
                     */
                    void SetQuotaType(const std::string& _quotaType);

                    /**
                     * 判断参数 QuotaType 是否已赋值
                     * @return QuotaType 是否已赋值
                     * 
                     */
                    bool QuotaTypeHasBeenSet() const;

                    /**
                     * 获取<p>Valid only when QuotaType=Text. It is used to select the ApiToken that needs to be subject to quota limit.</p>
                     * @return ApiToken <p>Valid only when QuotaType=Text. It is used to select the ApiToken that needs to be subject to quota limit.</p>
                     * 
                     */
                    std::string GetApiToken() const;

                    /**
                     * 设置<p>Valid only when QuotaType=Text. It is used to select the ApiToken that needs to be subject to quota limit.</p>
                     * @param _apiToken <p>Valid only when QuotaType=Text. It is used to select the ApiToken that needs to be subject to quota limit.</p>
                     * 
                     */
                    void SetApiToken(const std::string& _apiToken);

                    /**
                     * 判断参数 ApiToken 是否已赋值
                     * @return ApiToken 是否已赋值
                     * 
                     */
                    bool ApiTokenHasBeenSet() const;

                private:

                    /**
                     * <p><strong>VOD application ID. From December 25, 2023, customers who activate on-demand services must fill in this field with the app ID when accessing resources in on-demand applications, whether it is the default application or a newly created application.</strong></p>
                     */
                    uint64_t m_subAppId;
                    bool m_subAppIdHasBeenSet;

                    /**
                     * <p>Quota type</p><p>Enumeration values:</p><ul><li>Image: AIGC image generation task</li><li>Video: AIGC video generation task</li><li>Text: AIGC text generation task</li></ul>
                     */
                    std::string m_quotaType;
                    bool m_quotaTypeHasBeenSet;

                    /**
                     * <p>Valid only when QuotaType=Text. It is used to select the ApiToken that needs to be subject to quota limit.</p>
                     */
                    std::string m_apiToken;
                    bool m_apiTokenHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20180717_MODEL_DELETEAIGCQUOTAREQUEST_H_
