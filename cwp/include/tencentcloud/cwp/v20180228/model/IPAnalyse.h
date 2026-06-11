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

#ifndef TENCENTCLOUD_CWP_V20180228_MODEL_IPANALYSE_H_
#define TENCENTCLOUD_CWP_V20180228_MODEL_IPANALYSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cwp
    {
        namespace V20180228
        {
            namespace Model
            {
                /**
                * ip analysis
                */
                class IPAnalyse : public AbstractModel
                {
                public:
                    IPAnalyse();
                    ~IPAnalyse() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取0: safe
1: Suspicious
2 Malicious
3 Unknown
                     * @return Status 0: safe
1: Suspicious
2 Malicious
3 Unknown
                     * 
                     */
                    uint64_t GetStatus() const;

                    /**
                     * 设置0: safe
1: Suspicious
2 Malicious
3 Unknown
                     * @param _status 0: safe
1: Suspicious
2 Malicious
3 Unknown
                     * 
                     */
                    void SetStatus(const uint64_t& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取Tag feature
                     * @return Tags Tag feature
                     * 
                     */
                    std::vector<std::string> GetTags() const;

                    /**
                     * 设置Tag feature
                     * @param _tags Tag feature
                     * 
                     */
                    void SetTags(const std::vector<std::string>& _tags);

                    /**
                     * 判断参数 Tags 是否已赋值
                     * @return Tags 是否已赋值
                     * 
                     */
                    bool TagsHasBeenSet() const;

                    /**
                     * 获取Family information
                     * @return Family Family information
                     * 
                     */
                    std::vector<std::string> GetFamily() const;

                    /**
                     * 设置Family information
                     * @param _family Family information
                     * 
                     */
                    void SetFamily(const std::vector<std::string>& _family);

                    /**
                     * 判断参数 Family 是否已赋值
                     * @return Family 是否已赋值
                     * 
                     */
                    bool FamilyHasBeenSet() const;

                    /**
                     * 获取profile
                     * @return Profile profile
                     * 
                     */
                    std::vector<std::string> GetProfile() const;

                    /**
                     * 设置profile
                     * @param _profile profile
                     * 
                     */
                    void SetProfile(const std::vector<std::string>& _profile);

                    /**
                     * 判断参数 Profile 是否已赋值
                     * @return Profile 是否已赋值
                     * 
                     */
                    bool ProfileHasBeenSet() const;

                    /**
                     * 获取Internet service provider.
                     * @return Isp Internet service provider.
                     * 
                     */
                    std::string GetIsp() const;

                    /**
                     * 设置Internet service provider.
                     * @param _isp Internet service provider.
                     * 
                     */
                    void SetIsp(const std::string& _isp);

                    /**
                     * 判断参数 Isp 是否已赋值
                     * @return Isp 是否已赋值
                     * 
                     */
                    bool IspHasBeenSet() const;

                private:

                    /**
                     * 0: safe
1: Suspicious
2 Malicious
3 Unknown
                     */
                    uint64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * Tag feature
                     */
                    std::vector<std::string> m_tags;
                    bool m_tagsHasBeenSet;

                    /**
                     * Family information
                     */
                    std::vector<std::string> m_family;
                    bool m_familyHasBeenSet;

                    /**
                     * profile
                     */
                    std::vector<std::string> m_profile;
                    bool m_profileHasBeenSet;

                    /**
                     * Internet service provider.
                     */
                    std::string m_isp;
                    bool m_ispHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CWP_V20180228_MODEL_IPANALYSE_H_
