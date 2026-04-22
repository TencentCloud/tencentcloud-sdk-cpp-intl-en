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

#ifndef TENCENTCLOUD_TCSAS_V20250106_MODEL_MNPADVERTISINGOVERVIEW_H_
#define TENCENTCLOUD_TCSAS_V20250106_MODEL_MNPADVERTISINGOVERVIEW_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tcsas/v20250106/model/MNPAdOverview.h>


namespace TencentCloud
{
    namespace Tcsas
    {
        namespace V20250106
        {
            namespace Model
            {
                /**
                * Mini program advertising revenue
                */
                class MNPAdvertisingOverview : public AbstractModel
                {
                public:
                    MNPAdvertisingOverview();
                    ~MNPAdvertisingOverview() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Data
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return OverviewData Data
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    MNPAdOverview GetOverviewData() const;

                    /**
                     * 设置Data
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _overviewData Data
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetOverviewData(const MNPAdOverview& _overviewData);

                    /**
                     * 判断参数 OverviewData 是否已赋值
                     * @return OverviewData 是否已赋值
                     * 
                     */
                    bool OverviewDataHasBeenSet() const;

                private:

                    /**
                     * Data
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    MNPAdOverview m_overviewData;
                    bool m_overviewDataHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCSAS_V20250106_MODEL_MNPADVERTISINGOVERVIEW_H_
