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

#ifndef TENCENTCLOUD_CWP_V20180228_MODEL_BASELINEHOSTTOPLIST_H_
#define TENCENTCLOUD_CWP_V20180228_MODEL_BASELINEHOSTTOPLIST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cwp/v20180228/model/BaselineEventLevelInfo.h>


namespace TencentCloud
{
    namespace Cwp
    {
        namespace V20180228
        {
            namespace Model
            {
                /**
                * Baseline affected servers list data
                */
                class BaselineHostTopList : public AbstractModel
                {
                public:
                    BaselineHostTopList();
                    ~BaselineHostTopList() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取List of event levels and occurrences
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return EventLevelList List of event levels and occurrences
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::vector<BaselineEventLevelInfo> GetEventLevelList() const;

                    /**
                     * 设置List of event levels and occurrences
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _eventLevelList List of event levels and occurrences
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetEventLevelList(const std::vector<BaselineEventLevelInfo>& _eventLevelList);

                    /**
                     * 判断参数 EventLevelList 是否已赋值
                     * @return EventLevelList 是否已赋值
                     * 
                     */
                    bool EventLevelListHasBeenSet() const;

                    /**
                     * 获取Host name
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return HostName Host name
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetHostName() const;

                    /**
                     * 设置Host name
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _hostName Host name
Note: This field may return null, indicating that no valid values can be obtained.
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
                     * 获取Host QUUID
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Quuid Host QUUID
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetQuuid() const;

                    /**
                     * 设置Host QUUID
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _quuid Host QUUID
Note: This field may return null, indicating that no valid values can be obtained.
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
                     * 获取Score for calculating weight
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Score Score for calculating weight
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    uint64_t GetScore() const;

                    /**
                     * 设置Score for calculating weight
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _score Score for calculating weight
Note: This field may return null, indicating that no valid values can be obtained.
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
                     * List of event levels and occurrences
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<BaselineEventLevelInfo> m_eventLevelList;
                    bool m_eventLevelListHasBeenSet;

                    /**
                     * Host name
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_hostName;
                    bool m_hostNameHasBeenSet;

                    /**
                     * Host QUUID
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_quuid;
                    bool m_quuidHasBeenSet;

                    /**
                     * Score for calculating weight
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    uint64_t m_score;
                    bool m_scoreHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CWP_V20180228_MODEL_BASELINEHOSTTOPLIST_H_
