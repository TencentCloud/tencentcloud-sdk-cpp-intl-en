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

#ifndef TENCENTCLOUD_VOD_V20180717_MODEL_IMAGEREVIEWUSAGEDATAITEM_H_
#define TENCENTCLOUD_VOD_V20180717_MODEL_IMAGEREVIEWUSAGEDATAITEM_H_

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
                * The usage statistics for the image recognition feature.
                */
                class ImageReviewUsageDataItem : public AbstractModel
                {
                public:
                    ImageReviewUsageDataItem();
                    ~ImageReviewUsageDataItem() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取The start time (in [ISO date format](https://intl.cloud.tencent.com/document/product/266/11732#iso-date-format)) of the data returned. For example, if the granularity is a day, `2018-12-01T00:00:00+08:00` indicates that the data is for the whole day of December 1, 2018.
                     * @return Time The start time (in [ISO date format](https://intl.cloud.tencent.com/document/product/266/11732#iso-date-format)) of the data returned. For example, if the granularity is a day, `2018-12-01T00:00:00+08:00` indicates that the data is for the whole day of December 1, 2018.
                     * 
                     */
                    std::string GetTime() const;

                    /**
                     * 设置The start time (in [ISO date format](https://intl.cloud.tencent.com/document/product/266/11732#iso-date-format)) of the data returned. For example, if the granularity is a day, `2018-12-01T00:00:00+08:00` indicates that the data is for the whole day of December 1, 2018.
                     * @param _time The start time (in [ISO date format](https://intl.cloud.tencent.com/document/product/266/11732#iso-date-format)) of the data returned. For example, if the granularity is a day, `2018-12-01T00:00:00+08:00` indicates that the data is for the whole day of December 1, 2018.
                     * 
                     */
                    void SetTime(const std::string& _time);

                    /**
                     * 判断参数 Time 是否已赋值
                     * @return Time 是否已赋值
                     * 
                     */
                    bool TimeHasBeenSet() const;

                    /**
                     * 获取The number of times the image recognition feature is used.
                     * @return Count The number of times the image recognition feature is used.
                     * 
                     */
                    int64_t GetCount() const;

                    /**
                     * 设置The number of times the image recognition feature is used.
                     * @param _count The number of times the image recognition feature is used.
                     * 
                     */
                    void SetCount(const int64_t& _count);

                    /**
                     * 判断参数 Count 是否已赋值
                     * @return Count 是否已赋值
                     * 
                     */
                    bool CountHasBeenSet() const;

                private:

                    /**
                     * The start time (in [ISO date format](https://intl.cloud.tencent.com/document/product/266/11732#iso-date-format)) of the data returned. For example, if the granularity is a day, `2018-12-01T00:00:00+08:00` indicates that the data is for the whole day of December 1, 2018.
                     */
                    std::string m_time;
                    bool m_timeHasBeenSet;

                    /**
                     * The number of times the image recognition feature is used.
                     */
                    int64_t m_count;
                    bool m_countHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20180717_MODEL_IMAGEREVIEWUSAGEDATAITEM_H_
