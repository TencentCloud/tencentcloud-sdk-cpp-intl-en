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

#ifndef TENCENTCLOUD_CWP_V20180228_MODEL_SCREENEVENTSCNT_H_
#define TENCENTCLOUD_CWP_V20180228_MODEL_SCREENEVENTSCNT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cwp/v20180228/model/ScreenNameValue.h>


namespace TencentCloud
{
    namespace Cwp
    {
        namespace V20180228
        {
            namespace Model
            {
                /**
                * Intrusion detection statistics
                */
                class ScreenEventsCnt : public AbstractModel
                {
                public:
                    ScreenEventsCnt();
                    ~ScreenEventsCnt() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Displayed content: Total number of pending risks and total number of affected assets
                     * @return Title Displayed content: Total number of pending risks and total number of affected assets
                     * 
                     */
                    std::string GetTitle() const;

                    /**
                     * 设置Displayed content: Total number of pending risks and total number of affected assets
                     * @param _title Displayed content: Total number of pending risks and total number of affected assets
                     * 
                     */
                    void SetTitle(const std::string& _title);

                    /**
                     * 判断参数 Title 是否已赋值
                     * @return Title 是否已赋值
                     * 
                     */
                    bool TitleHasBeenSet() const;

                    /**
                     * 获取Total number of events
                     * @return Total Total number of events
                     * 
                     */
                    uint64_t GetTotal() const;

                    /**
                     * 设置Total number of events
                     * @param _total Total number of events
                     * 
                     */
                    void SetTotal(const uint64_t& _total);

                    /**
                     * 判断参数 Total 是否已赋值
                     * @return Total 是否已赋值
                     * 
                     */
                    bool TotalHasBeenSet() const;

                    /**
                     * 获取name: Specific type of the displayed content, including attack event, potential risk, compromised asset, and potentially risky asset
Value: event count after statistics
                     * @return Category name: Specific type of the displayed content, including attack event, potential risk, compromised asset, and potentially risky asset
Value: event count after statistics
                     * 
                     */
                    std::vector<ScreenNameValue> GetCategory() const;

                    /**
                     * 设置name: Specific type of the displayed content, including attack event, potential risk, compromised asset, and potentially risky asset
Value: event count after statistics
                     * @param _category name: Specific type of the displayed content, including attack event, potential risk, compromised asset, and potentially risky asset
Value: event count after statistics
                     * 
                     */
                    void SetCategory(const std::vector<ScreenNameValue>& _category);

                    /**
                     * 判断参数 Category 是否已赋值
                     * @return Category 是否已赋值
                     * 
                     */
                    bool CategoryHasBeenSet() const;

                private:

                    /**
                     * Displayed content: Total number of pending risks and total number of affected assets
                     */
                    std::string m_title;
                    bool m_titleHasBeenSet;

                    /**
                     * Total number of events
                     */
                    uint64_t m_total;
                    bool m_totalHasBeenSet;

                    /**
                     * name: Specific type of the displayed content, including attack event, potential risk, compromised asset, and potentially risky asset
Value: event count after statistics
                     */
                    std::vector<ScreenNameValue> m_category;
                    bool m_categoryHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CWP_V20180228_MODEL_SCREENEVENTSCNT_H_
