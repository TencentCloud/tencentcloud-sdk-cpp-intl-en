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

#ifndef TENCENTCLOUD_TCMPP_V20240801_MODEL_GLOBALDOMAINCHECKRESP_H_
#define TENCENTCLOUD_TCMPP_V20240801_MODEL_GLOBALDOMAINCHECKRESP_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tcmpp
    {
        namespace V20240801
        {
            namespace Model
            {
                /**
                * Result of global domain name check
                */
                class GlobalDomainCheckResp : public AbstractModel
                {
                public:
                    GlobalDomainCheckResp();
                    ~GlobalDomainCheckResp() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取List of duplicate domain names
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return RepeatUrls List of duplicate domain names
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::vector<std::string> GetRepeatUrls() const;

                    /**
                     * 设置List of duplicate domain names
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _repeatUrls List of duplicate domain names
Note: This field may return null, indicating that no valid values can be obtained.
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
                     * 获取List of allowed domain names
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return ExistsWhiteUrls List of allowed domain names
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::vector<std::string> GetExistsWhiteUrls() const;

                    /**
                     * 设置List of allowed domain names
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _existsWhiteUrls List of allowed domain names
Note: This field may return null, indicating that no valid values can be obtained.
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
                     * 获取List of blocked domain names
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return ExistsBlackUrls List of blocked domain names
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::vector<std::string> GetExistsBlackUrls() const;

                    /**
                     * 设置List of blocked domain names
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _existsBlackUrls List of blocked domain names
Note: This field may return null, indicating that no valid values can be obtained.
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
                     * List of duplicate domain names
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<std::string> m_repeatUrls;
                    bool m_repeatUrlsHasBeenSet;

                    /**
                     * List of allowed domain names
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<std::string> m_existsWhiteUrls;
                    bool m_existsWhiteUrlsHasBeenSet;

                    /**
                     * List of blocked domain names
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<std::string> m_existsBlackUrls;
                    bool m_existsBlackUrlsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCMPP_V20240801_MODEL_GLOBALDOMAINCHECKRESP_H_
