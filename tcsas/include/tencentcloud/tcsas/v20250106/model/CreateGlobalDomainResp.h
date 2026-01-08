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
                * Response of creating a global domain name
                */
                class CreateGlobalDomainResp : public AbstractModel
                {
                public:
                    CreateGlobalDomainResp();
                    ~CreateGlobalDomainResp() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Result
                     * @return Result Result
                     * 
                     */
                    bool GetResult() const;

                    /**
                     * 设置Result
                     * @param _result Result
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
                     * 获取Indicates the duplicate domain name.
                     * @return RepeatUrls Indicates the duplicate domain name.
                     * 
                     */
                    std::vector<std::string> GetRepeatUrls() const;

                    /**
                     * 设置Indicates the duplicate domain name.
                     * @param _repeatUrls Indicates the duplicate domain name.
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
                     * 获取Lists allowed domain names.
                     * @return ExistsWhiteUrls Lists allowed domain names.
                     * 
                     */
                    std::vector<std::string> GetExistsWhiteUrls() const;

                    /**
                     * 设置Lists allowed domain names.
                     * @param _existsWhiteUrls Lists allowed domain names.
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
                     * 获取Indicates the domain name already exists in the blocklist.
                     * @return ExistsBlackUrls Indicates the domain name already exists in the blocklist.
                     * 
                     */
                    std::vector<std::string> GetExistsBlackUrls() const;

                    /**
                     * 设置Indicates the domain name already exists in the blocklist.
                     * @param _existsBlackUrls Indicates the domain name already exists in the blocklist.
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
                     * Result
                     */
                    bool m_result;
                    bool m_resultHasBeenSet;

                    /**
                     * Indicates the duplicate domain name.
                     */
                    std::vector<std::string> m_repeatUrls;
                    bool m_repeatUrlsHasBeenSet;

                    /**
                     * Lists allowed domain names.
                     */
                    std::vector<std::string> m_existsWhiteUrls;
                    bool m_existsWhiteUrlsHasBeenSet;

                    /**
                     * Indicates the domain name already exists in the blocklist.
                     */
                    std::vector<std::string> m_existsBlackUrls;
                    bool m_existsBlackUrlsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCSAS_V20250106_MODEL_CREATEGLOBALDOMAINRESP_H_
