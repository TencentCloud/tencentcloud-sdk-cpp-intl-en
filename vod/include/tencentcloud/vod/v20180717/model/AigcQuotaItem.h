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

#ifndef TENCENTCLOUD_VOD_V20180717_MODEL_AIGCQUOTAITEM_H_
#define TENCENTCLOUD_VOD_V20180717_MODEL_AIGCQUOTAITEM_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
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
                * AIGC quota
                */
                class AigcQuotaItem : public AbstractModel
                {
                public:
                    AigcQuotaItem();
                    ~AigcQuotaItem() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>Quota type</p><p>Enumeration value:</p><ul><li>Image: AIGC image generation task</li><li>Video: AIGC video generation task</li><li>Text: AIGC text generation task</li></ul>
                     * @return QuotaType <p>Quota type</p><p>Enumeration value:</p><ul><li>Image: AIGC image generation task</li><li>Video: AIGC video generation task</li><li>Text: AIGC text generation task</li></ul>
                     * 
                     */
                    std::string GetQuotaType() const;

                    /**
                     * 设置<p>Quota type</p><p>Enumeration value:</p><ul><li>Image: AIGC image generation task</li><li>Video: AIGC video generation task</li><li>Text: AIGC text generation task</li></ul>
                     * @param _quotaType <p>Quota type</p><p>Enumeration value:</p><ul><li>Image: AIGC image generation task</li><li>Video: AIGC video generation task</li><li>Text: AIGC text generation task</li></ul>
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
                     * 获取<p>Valid only when QuotaLimit=Text, used to select the ApiToken that needs quota limit</p>
                     * @return ApiToken <p>Valid only when QuotaLimit=Text, used to select the ApiToken that needs quota limit</p>
                     * 
                     */
                    std::string GetApiToken() const;

                    /**
                     * 设置<p>Valid only when QuotaLimit=Text, used to select the ApiToken that needs quota limit</p>
                     * @param _apiToken <p>Valid only when QuotaLimit=Text, used to select the ApiToken that needs quota limit</p>
                     * 
                     */
                    void SetApiToken(const std::string& _apiToken);

                    /**
                     * 判断参数 ApiToken 是否已赋值
                     * @return ApiToken 是否已赋值
                     * 
                     */
                    bool ApiTokenHasBeenSet() const;

                    /**
                     * 获取<p>Number of task quotas</p><p>Unit:</p><ul><li>When QuotaLimit=Image, unit: piece</li><li>When QuotaLimit=Video, unit: seconds</li><li>When QuotaLimit=Text, unit: token</li></ul>
                     * @return QuotaLimit <p>Number of task quotas</p><p>Unit:</p><ul><li>When QuotaLimit=Image, unit: piece</li><li>When QuotaLimit=Video, unit: seconds</li><li>When QuotaLimit=Text, unit: token</li></ul>
                     * 
                     */
                    uint64_t GetQuotaLimit() const;

                    /**
                     * 设置<p>Number of task quotas</p><p>Unit:</p><ul><li>When QuotaLimit=Image, unit: piece</li><li>When QuotaLimit=Video, unit: seconds</li><li>When QuotaLimit=Text, unit: token</li></ul>
                     * @param _quotaLimit <p>Number of task quotas</p><p>Unit:</p><ul><li>When QuotaLimit=Image, unit: piece</li><li>When QuotaLimit=Video, unit: seconds</li><li>When QuotaLimit=Text, unit: token</li></ul>
                     * 
                     */
                    void SetQuotaLimit(const uint64_t& _quotaLimit);

                    /**
                     * 判断参数 QuotaLimit 是否已赋值
                     * @return QuotaLimit 是否已赋值
                     * 
                     */
                    bool QuotaLimitHasBeenSet() const;

                    /**
                     * 获取<p>Amount already used</p><p>Unit:</p><ul><li>When QuotaLimit=Image, unit: piece</li><li>When QuotaLimit=Video, unit: seconds</li><li>When QuotaLimit=Text, unit: token</li></ul>
                     * @return Usage <p>Amount already used</p><p>Unit:</p><ul><li>When QuotaLimit=Image, unit: piece</li><li>When QuotaLimit=Video, unit: seconds</li><li>When QuotaLimit=Text, unit: token</li></ul>
                     * 
                     */
                    uint64_t GetUsage() const;

                    /**
                     * 设置<p>Amount already used</p><p>Unit:</p><ul><li>When QuotaLimit=Image, unit: piece</li><li>When QuotaLimit=Video, unit: seconds</li><li>When QuotaLimit=Text, unit: token</li></ul>
                     * @param _usage <p>Amount already used</p><p>Unit:</p><ul><li>When QuotaLimit=Image, unit: piece</li><li>When QuotaLimit=Video, unit: seconds</li><li>When QuotaLimit=Text, unit: token</li></ul>
                     * 
                     */
                    void SetUsage(const uint64_t& _usage);

                    /**
                     * 判断参数 Usage 是否已赋值
                     * @return Usage 是否已赋值
                     * 
                     */
                    bool UsageHasBeenSet() const;

                private:

                    /**
                     * <p>Quota type</p><p>Enumeration value:</p><ul><li>Image: AIGC image generation task</li><li>Video: AIGC video generation task</li><li>Text: AIGC text generation task</li></ul>
                     */
                    std::string m_quotaType;
                    bool m_quotaTypeHasBeenSet;

                    /**
                     * <p>Valid only when QuotaLimit=Text, used to select the ApiToken that needs quota limit</p>
                     */
                    std::string m_apiToken;
                    bool m_apiTokenHasBeenSet;

                    /**
                     * <p>Number of task quotas</p><p>Unit:</p><ul><li>When QuotaLimit=Image, unit: piece</li><li>When QuotaLimit=Video, unit: seconds</li><li>When QuotaLimit=Text, unit: token</li></ul>
                     */
                    uint64_t m_quotaLimit;
                    bool m_quotaLimitHasBeenSet;

                    /**
                     * <p>Amount already used</p><p>Unit:</p><ul><li>When QuotaLimit=Image, unit: piece</li><li>When QuotaLimit=Video, unit: seconds</li><li>When QuotaLimit=Text, unit: token</li></ul>
                     */
                    uint64_t m_usage;
                    bool m_usageHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20180717_MODEL_AIGCQUOTAITEM_H_
