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

#ifndef TENCENTCLOUD_TOKENHUB_V20260322_MODEL_USAGERANKITEM_H_
#define TENCENTCLOUD_TOKENHUB_V20260322_MODEL_USAGERANKITEM_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tokenhub/v20260322/model/UsageStats.h>
#include <tencentcloud/tokenhub/v20260322/model/UsageSeries.h>


namespace TencentCloud
{
    namespace Tokenhub
    {
        namespace V20260322
        {
            namespace Model
            {
                /**
                * Usage item of an individual object in the ranking list, including the object identifier, statistical values within a time period (Stats), and a list of time series points within a time period (Series, returned only when ShowAll=false).
                */
                class UsageRankItem : public AbstractModel
                {
                public:
                    UsageRankItem();
                    ~UsageRankItem() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Global ranking (starting from 1). In pagination scenarios, this is still the position in the full sorting order, not the serial number within the page.
                     * @return Rank Global ranking (starting from 1). In pagination scenarios, this is still the position in the full sorting order, not the serial number within the page.
                     * 
                     */
                    int64_t GetRank() const;

                    /**
                     * 设置Global ranking (starting from 1). In pagination scenarios, this is still the position in the full sorting order, not the serial number within the page.
                     * @param _rank Global ranking (starting from 1). In pagination scenarios, this is still the position in the full sorting order, not the serial number within the page.
                     * 
                     */
                    void SetRank(const int64_t& _rank);

                    /**
                     * 判断参数 Rank 是否已赋值
                     * @return Rank 是否已赋值
                     * 
                     */
                    bool RankHasBeenSet() const;

                    /**
                     * 获取Object identifier. The apikey dimension is the APIKey ID; the endpoint dimension is the access point; the model dimension is the model name.
                     * @return Key Object identifier. The apikey dimension is the APIKey ID; the endpoint dimension is the access point; the model dimension is the model name.
                     * 
                     */
                    std::string GetKey() const;

                    /**
                     * 设置Object identifier. The apikey dimension is the APIKey ID; the endpoint dimension is the access point; the model dimension is the model name.
                     * @param _key Object identifier. The apikey dimension is the APIKey ID; the endpoint dimension is the access point; the model dimension is the model name.
                     * 
                     */
                    void SetKey(const std::string& _key);

                    /**
                     * 判断参数 Key 是否已赋值
                     * @return Key 是否已赋值
                     * 
                     */
                    bool KeyHasBeenSet() const;

                    /**
                     * 获取Display name of the object. In the apikey dimension, return the APIKey name (deleted APIKeys retain their original names);
Key whose endpoint and model dimensions are equal.
                     * @return Name Display name of the object. In the apikey dimension, return the APIKey name (deleted APIKeys retain their original names);
Key whose endpoint and model dimensions are equal.
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置Display name of the object. In the apikey dimension, return the APIKey name (deleted APIKeys retain their original names);
Key whose endpoint and model dimensions are equal.
                     * @param _name Display name of the object. In the apikey dimension, return the APIKey name (deleted APIKeys retain their original names);
Key whose endpoint and model dimensions are equal.
                     * 
                     */
                    void SetName(const std::string& _name);

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     * 
                     */
                    bool NameHasBeenSet() const;

                    /**
                     * 获取Statistical value within a time period
                     * @return Stats Statistical value within a time period
                     * 
                     */
                    UsageStats GetStats() const;

                    /**
                     * 设置Statistical value within a time period
                     * @param _stats Statistical value within a time period
                     * 
                     */
                    void SetStats(const UsageStats& _stats);

                    /**
                     * 判断参数 Stats 是否已赋值
                     * @return Stats 是否已赋值
                     * 
                     */
                    bool StatsHasBeenSet() const;

                    /**
                     * 获取List of time series points within a time period
                     * @return Series List of time series points within a time period
                     * 
                     */
                    UsageSeries GetSeries() const;

                    /**
                     * 设置List of time series points within a time period
                     * @param _series List of time series points within a time period
                     * 
                     */
                    void SetSeries(const UsageSeries& _series);

                    /**
                     * 判断参数 Series 是否已赋值
                     * @return Series 是否已赋值
                     * 
                     */
                    bool SeriesHasBeenSet() const;

                private:

                    /**
                     * Global ranking (starting from 1). In pagination scenarios, this is still the position in the full sorting order, not the serial number within the page.
                     */
                    int64_t m_rank;
                    bool m_rankHasBeenSet;

                    /**
                     * Object identifier. The apikey dimension is the APIKey ID; the endpoint dimension is the access point; the model dimension is the model name.
                     */
                    std::string m_key;
                    bool m_keyHasBeenSet;

                    /**
                     * Display name of the object. In the apikey dimension, return the APIKey name (deleted APIKeys retain their original names);
Key whose endpoint and model dimensions are equal.
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * Statistical value within a time period
                     */
                    UsageStats m_stats;
                    bool m_statsHasBeenSet;

                    /**
                     * List of time series points within a time period
                     */
                    UsageSeries m_series;
                    bool m_seriesHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TOKENHUB_V20260322_MODEL_USAGERANKITEM_H_
