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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_TRAFFICSANDBOXDLPURLRULEITEM_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_TRAFFICSANDBOXDLPURLRULEITEM_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Csip
    {
        namespace V20221121
        {
            namespace Model
            {
                /**
                * Outbound domain name detection dimensions (URL/excluded URL)
                */
                class TrafficSandboxDLPURLRuleItem : public AbstractModel
                {
                public:
                    TrafficSandboxDLPURLRuleItem();
                    ~TrafficSandboxDLPURLRuleItem() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Outbound object list (domain name/URL)
                     * @return URL Outbound object list (domain name/URL)
                     * 
                     */
                    std::vector<std::string> GetURL() const;

                    /**
                     * 设置Outbound object list (domain name/URL)
                     * @param _uRL Outbound object list (domain name/URL)
                     * 
                     */
                    void SetURL(const std::vector<std::string>& _uRL);

                    /**
                     * 判断参数 URL 是否已赋值
                     * @return URL 是否已赋值
                     * 
                     */
                    bool URLHasBeenSet() const;

                    /**
                     * 获取exclusion object list
                     * @return URLExcept exclusion object list
                     * 
                     */
                    std::vector<std::string> GetURLExcept() const;

                    /**
                     * 设置exclusion object list
                     * @param _uRLExcept exclusion object list
                     * 
                     */
                    void SetURLExcept(const std::vector<std::string>& _uRLExcept);

                    /**
                     * 判断参数 URLExcept 是否已赋值
                     * @return URLExcept 是否已赋值
                     * 
                     */
                    bool URLExceptHasBeenSet() const;

                private:

                    /**
                     * Outbound object list (domain name/URL)
                     */
                    std::vector<std::string> m_uRL;
                    bool m_uRLHasBeenSet;

                    /**
                     * exclusion object list
                     */
                    std::vector<std::string> m_uRLExcept;
                    bool m_uRLExceptHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_TRAFFICSANDBOXDLPURLRULEITEM_H_
