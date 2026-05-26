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

#ifndef TENCENTCLOUD_TCSAS_V20250106_MODEL_CREATEGLOBALDOMAINRESP_H_
#define TENCENTCLOUD_TCSAS_V20250106_MODEL_CREATEGLOBALDOMAINRESP_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tcsas
    {
        namespace V20250106
        {
            namespace Model
            {
                /**
                * Response for creating a global domain.
                */
                class CreateGlobalDomainResp : public AbstractModel
                {
                public:
                    CreateGlobalDomainResp();
                    ~CreateGlobalDomainResp() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Operation result. 
                     * @return Result Operation result. 
                     * 
                     */
                    bool GetResult() const;

                    /**
                     * 设置Operation result. 
                     * @param _result Operation result. 
                     * 
                     */
                    void SetResult(const bool& _result);

                    /**
                     * 判断参数 Result 是否已赋值
                     * @return Result 是否已赋值
                     * 
                     */
                    bool ResultHasBeenSet() const;

                    /**
                     * 获取Duplicate domains.
                     * @return RepeatUrls Duplicate domains.
                     * 
                     */
                    std::vector<std::string> GetRepeatUrls() const;

                    /**
                     * 设置Duplicate domains.
                     * @param _repeatUrls Duplicate domains.
                     * 
                     */
                    void SetRepeatUrls(const std::vector<std::string>& _repeatUrls);

                    /**
                     * 判断参数 RepeatUrls 是否已赋值
                     * @return RepeatUrls 是否已赋值
                     * 
                     */
                    bool RepeatUrlsHasBeenSet() const;

                    /**
                     * 获取Domains that already exist in the allowlist.
                     * @return ExistsWhiteUrls Domains that already exist in the allowlist.
                     * 
                     */
                    std::vector<std::string> GetExistsWhiteUrls() const;

                    /**
                     * 设置Domains that already exist in the allowlist.
                     * @param _existsWhiteUrls Domains that already exist in the allowlist.
                     * 
                     */
                    void SetExistsWhiteUrls(const std::vector<std::string>& _existsWhiteUrls);

                    /**
                     * 判断参数 ExistsWhiteUrls 是否已赋值
                     * @return ExistsWhiteUrls 是否已赋值
                     * 
                     */
                    bool ExistsWhiteUrlsHasBeenSet() const;

                    /**
                     * 获取Domains that already exist in the blocklist. 
                     * @return ExistsBlackUrls Domains that already exist in the blocklist. 
                     * 
                     */
                    std::vector<std::string> GetExistsBlackUrls() const;

                    /**
                     * 设置Domains that already exist in the blocklist. 
                     * @param _existsBlackUrls Domains that already exist in the blocklist. 
                     * 
                     */
                    void SetExistsBlackUrls(const std::vector<std::string>& _existsBlackUrls);

                    /**
                     * 判断参数 ExistsBlackUrls 是否已赋值
                     * @return ExistsBlackUrls 是否已赋值
                     * 
                     */
                    bool ExistsBlackUrlsHasBeenSet() const;

                private:

                    /**
                     * Operation result. 
                     */
                    bool m_result;
                    bool m_resultHasBeenSet;

                    /**
                     * Duplicate domains.
                     */
                    std::vector<std::string> m_repeatUrls;
                    bool m_repeatUrlsHasBeenSet;

                    /**
                     * Domains that already exist in the allowlist.
                     */
                    std::vector<std::string> m_existsWhiteUrls;
                    bool m_existsWhiteUrlsHasBeenSet;

                    /**
                     * Domains that already exist in the blocklist. 
                     */
                    std::vector<std::string> m_existsBlackUrls;
                    bool m_existsBlackUrlsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCSAS_V20250106_MODEL_CREATEGLOBALDOMAINRESP_H_
