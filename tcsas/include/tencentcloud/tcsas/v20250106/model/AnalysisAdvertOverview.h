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

#ifndef TENCENTCLOUD_TCSAS_V20250106_MODEL_ANALYSISADVERTOVERVIEW_H_
#define TENCENTCLOUD_TCSAS_V20250106_MODEL_ANALYSISADVERTOVERVIEW_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tcsas/v20250106/model/AdvertDataOverview.h>


namespace TencentCloud
{
    namespace Tcsas
    {
        namespace V20250106
        {
            namespace Model
            {
                /**
                * Advertising analysis data overview
                */
                class AnalysisAdvertOverview : public AbstractModel
                {
                public:
                    AnalysisAdvertOverview();
                    ~AnalysisAdvertOverview() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Advertising overview
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return OverviewData Advertising overview
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    AdvertDataOverview GetOverviewData() const;

                    /**
                     * 设置Advertising overview
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _overviewData Advertising overview
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetOverviewData(const AdvertDataOverview& _overviewData);

                    /**
                     * 判断参数 OverviewData 是否已赋值
                     * @return OverviewData 是否已赋值
                     * 
                     */
                    bool OverviewDataHasBeenSet() const;

                private:

                    /**
                     * Advertising overview
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    AdvertDataOverview m_overviewData;
                    bool m_overviewDataHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCSAS_V20250106_MODEL_ANALYSISADVERTOVERVIEW_H_
