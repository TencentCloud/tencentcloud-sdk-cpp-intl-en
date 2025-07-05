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

#ifndef TENCENTCLOUD_CLS_V20201016_MODEL_HISTOGRAMINFO_H_
#define TENCENTCLOUD_CLS_V20201016_MODEL_HISTOGRAMINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cls
    {
        namespace V20201016
        {
            namespace Model
            {
                /**
                * Histogram details
                */
                class HistogramInfo : public AbstractModel
                {
                public:
                    HistogramInfo();
                    ~HistogramInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取The number of logs within the statistical period
                     * @return Count The number of logs within the statistical period
                     * 
                     */
                    int64_t GetCount() const;

                    /**
                     * 设置The number of logs within the statistical period
                     * @param _count The number of logs within the statistical period
                     * 
                     */
                    void SetCount(const int64_t& _count);

                    /**
                     * 判断参数 Count 是否已赋值
                     * @return Count 是否已赋值
                     * 
                     */
                    bool CountHasBeenSet() const;

                    /**
                     * 获取Unix timestamp rounded by `period`, in milliseconds
                     * @return BTime Unix timestamp rounded by `period`, in milliseconds
                     * 
                     */
                    int64_t GetBTime() const;

                    /**
                     * 设置Unix timestamp rounded by `period`, in milliseconds
                     * @param _bTime Unix timestamp rounded by `period`, in milliseconds
                     * 
                     */
                    void SetBTime(const int64_t& _bTime);

                    /**
                     * 判断参数 BTime 是否已赋值
                     * @return BTime 是否已赋值
                     * 
                     */
                    bool BTimeHasBeenSet() const;

                private:

                    /**
                     * The number of logs within the statistical period
                     */
                    int64_t m_count;
                    bool m_countHasBeenSet;

                    /**
                     * Unix timestamp rounded by `period`, in milliseconds
                     */
                    int64_t m_bTime;
                    bool m_bTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CLS_V20201016_MODEL_HISTOGRAMINFO_H_
