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

#ifndef TENCENTCLOUD_TCSAS_V20250106_MODEL_MAUCHARTDATA_H_
#define TENCENTCLOUD_TCSAS_V20250106_MODEL_MAUCHARTDATA_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tcsas
    {
        namespace V20250106
        {
            namespace Model
            {
                /**
                * MAU line chart data.
                */
                class MAUChartData : public AbstractModel
                {
                public:
                    MAUChartData();
                    ~MAUChartData() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Date in YYYYMM format.
                     * @return DataTime Date in YYYYMM format.
                     * 
                     */
                    int64_t GetDataTime() const;

                    /**
                     * 设置Date in YYYYMM format.
                     * @param _dataTime Date in YYYYMM format.
                     * 
                     */
                    void SetDataTime(const int64_t& _dataTime);

                    /**
                     * 判断参数 DataTime 是否已赋值
                     * @return DataTime 是否已赋值
                     * 
                     */
                    bool DataTimeHasBeenSet() const;

                    /**
                     * 获取MAU count.
                     * @return MAUCount MAU count.
                     * 
                     */
                    int64_t GetMAUCount() const;

                    /**
                     * 设置MAU count.
                     * @param _mAUCount MAU count.
                     * 
                     */
                    void SetMAUCount(const int64_t& _mAUCount);

                    /**
                     * 判断参数 MAUCount 是否已赋值
                     * @return MAUCount 是否已赋值
                     * 
                     */
                    bool MAUCountHasBeenSet() const;

                    /**
                     * 获取Data update time. Only has a value when MAUCount is greater than 0.
                     * @return UpdateTime Data update time. Only has a value when MAUCount is greater than 0.
                     * 
                     */
                    int64_t GetUpdateTime() const;

                    /**
                     * 设置Data update time. Only has a value when MAUCount is greater than 0.
                     * @param _updateTime Data update time. Only has a value when MAUCount is greater than 0.
                     * 
                     */
                    void SetUpdateTime(const int64_t& _updateTime);

                    /**
                     * 判断参数 UpdateTime 是否已赋值
                     * @return UpdateTime 是否已赋值
                     * 
                     */
                    bool UpdateTimeHasBeenSet() const;

                private:

                    /**
                     * Date in YYYYMM format.
                     */
                    int64_t m_dataTime;
                    bool m_dataTimeHasBeenSet;

                    /**
                     * MAU count.
                     */
                    int64_t m_mAUCount;
                    bool m_mAUCountHasBeenSet;

                    /**
                     * Data update time. Only has a value when MAUCount is greater than 0.
                     */
                    int64_t m_updateTime;
                    bool m_updateTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCSAS_V20250106_MODEL_MAUCHARTDATA_H_
