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

#ifndef TENCENTCLOUD_CWP_V20180228_MODEL_VULHOSTTOPINFO_H_
#define TENCENTCLOUD_CWP_V20180228_MODEL_VULHOSTTOPINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cwp/v20180228/model/VulLevelCountInfo.h>


namespace TencentCloud
{
    namespace Cwp
    {
        namespace V20180228
        {
            namespace Model
            {
                /**
                * Top 5 server risk entities
                */
                class VulHostTopInfo : public AbstractModel
                {
                public:
                    VulHostTopInfo();
                    ~VulHostTopInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取host name
                     * @return HostName host name
                     * 
                     */
                    std::string GetHostName() const;

                    /**
                     * 设置host name
                     * @param _hostName host name
                     * 
                     */
                    void SetHostName(const std::string& _hostName);

                    /**
                     * 判断参数 HostName 是否已赋值
                     * @return HostName 是否已赋值
                     * 
                     */
                    bool HostNameHasBeenSet() const;

                    /**
                     * 获取Vulnerability level and quantity statistics list
                     * @return VulLevelList Vulnerability level and quantity statistics list
                     * 
                     */
                    std::vector<VulLevelCountInfo> GetVulLevelList() const;

                    /**
                     * 设置Vulnerability level and quantity statistics list
                     * @param _vulLevelList Vulnerability level and quantity statistics list
                     * 
                     */
                    void SetVulLevelList(const std::vector<VulLevelCountInfo>& _vulLevelList);

                    /**
                     * 判断参数 VulLevelList 是否已赋值
                     * @return VulLevelList 是否已赋值
                     * 
                     */
                    bool VulLevelListHasBeenSet() const;

                    /**
                     * 获取Host QUUID
                     * @return Quuid Host QUUID
                     * 
                     */
                    std::string GetQuuid() const;

                    /**
                     * 设置Host QUUID
                     * @param _quuid Host QUUID
                     * 
                     */
                    void SetQuuid(const std::string& _quuid);

                    /**
                     * 判断参数 Quuid 是否已赋值
                     * @return Quuid 是否已赋值
                     * 
                     */
                    bool QuuidHasBeenSet() const;

                    /**
                     * 获取top rating
                     * @return Score top rating
                     * 
                     */
                    uint64_t GetScore() const;

                    /**
                     * 设置top rating
                     * @param _score top rating
                     * 
                     */
                    void SetScore(const uint64_t& _score);

                    /**
                     * 判断参数 Score 是否已赋值
                     * @return Score 是否已赋值
                     * 
                     */
                    bool ScoreHasBeenSet() const;

                private:

                    /**
                     * host name
                     */
                    std::string m_hostName;
                    bool m_hostNameHasBeenSet;

                    /**
                     * Vulnerability level and quantity statistics list
                     */
                    std::vector<VulLevelCountInfo> m_vulLevelList;
                    bool m_vulLevelListHasBeenSet;

                    /**
                     * Host QUUID
                     */
                    std::string m_quuid;
                    bool m_quuidHasBeenSet;

                    /**
                     * top rating
                     */
                    uint64_t m_score;
                    bool m_scoreHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CWP_V20180228_MODEL_VULHOSTTOPINFO_H_
