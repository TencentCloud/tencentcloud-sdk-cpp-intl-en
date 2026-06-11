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

#ifndef TENCENTCLOUD_CLS_V20201016_MODEL_DESCRIBESPLUNKPREVIEWRESPONSE_H_
#define TENCENTCLOUD_CLS_V20201016_MODEL_DESCRIBESPLUNKPREVIEWRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cls/v20201016/model/FilterStatistics.h>


namespace TencentCloud
{
    namespace Cls
    {
        namespace V20201016
        {
            namespace Model
            {
                /**
                * DescribeSplunkPreview response structure.
                */
                class DescribeSplunkPreviewResponse : public AbstractModel
                {
                public:
                    DescribeSplunkPreviewResponse();
                    ~DescribeSplunkPreviewResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>Preview result</p>
                     * @return PreviewInfos <p>Preview result</p>
                     * 
                     */
                    std::vector<std::string> GetPreviewInfos() const;

                    /**
                     * 判断参数 PreviewInfos 是否已赋值
                     * @return PreviewInfos 是否已赋值
                     * 
                     */
                    bool PreviewInfosHasBeenSet() const;

                    /**
                     * 获取<p>Filtered results</p>
                     * @return FilterStats <p>Filtered results</p>
                     * 
                     */
                    FilterStatistics GetFilterStats() const;

                    /**
                     * 判断参数 FilterStats 是否已赋值
                     * @return FilterStats 是否已赋值
                     * 
                     */
                    bool FilterStatsHasBeenSet() const;

                private:

                    /**
                     * <p>Preview result</p>
                     */
                    std::vector<std::string> m_previewInfos;
                    bool m_previewInfosHasBeenSet;

                    /**
                     * <p>Filtered results</p>
                     */
                    FilterStatistics m_filterStats;
                    bool m_filterStatsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CLS_V20201016_MODEL_DESCRIBESPLUNKPREVIEWRESPONSE_H_
