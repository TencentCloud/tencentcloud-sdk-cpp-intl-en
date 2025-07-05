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

#ifndef TENCENTCLOUD_DLC_V20210125_MODEL_DATAENGINESCALEINFODETAIL_H_
#define TENCENTCLOUD_DLC_V20210125_MODEL_DATAENGINESCALEINFODETAIL_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Dlc
    {
        namespace V20210125
        {
            namespace Model
            {
                /**
                * Engine specification details
                */
                class DataEngineScaleInfoDetail : public AbstractModel
                {
                public:
                    DataEngineScaleInfoDetail();
                    ~DataEngineScaleInfoDetail() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Start time of counting in the format of yyyy-MM-dd HH:mm:ss
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return StartTime Start time of counting in the format of yyyy-MM-dd HH:mm:ss
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetStartTime() const;

                    /**
                     * 设置Start time of counting in the format of yyyy-MM-dd HH:mm:ss
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _startTime Start time of counting in the format of yyyy-MM-dd HH:mm:ss
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetStartTime(const std::string& _startTime);

                    /**
                     * 判断参数 StartTime 是否已赋值
                     * @return StartTime 是否已赋值
                     * 
                     */
                    bool StartTimeHasBeenSet() const;

                    /**
                     * 获取End time of counting in the format of yyyy-MM-dd HH:mm:ss
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return EndTime End time of counting in the format of yyyy-MM-dd HH:mm:ss
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetEndTime() const;

                    /**
                     * 设置End time of counting in the format of yyyy-MM-dd HH:mm:ss
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _endTime End time of counting in the format of yyyy-MM-dd HH:mm:ss
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetEndTime(const std::string& _endTime);

                    /**
                     * 判断参数 EndTime 是否已赋值
                     * @return EndTime 是否已赋值
                     * 
                     */
                    bool EndTimeHasBeenSet() const;

                    /**
                     * 获取Current statistical time period and engine specifications
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return CU Current statistical time period and engine specifications
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    int64_t GetCU() const;

                    /**
                     * 设置Current statistical time period and engine specifications
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _cU Current statistical time period and engine specifications
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetCU(const int64_t& _cU);

                    /**
                     * 判断参数 CU 是否已赋值
                     * @return CU 是否已赋值
                     * 
                     */
                    bool CUHasBeenSet() const;

                private:

                    /**
                     * Start time of counting in the format of yyyy-MM-dd HH:mm:ss
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * End time of counting in the format of yyyy-MM-dd HH:mm:ss
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_endTime;
                    bool m_endTimeHasBeenSet;

                    /**
                     * Current statistical time period and engine specifications
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t m_cU;
                    bool m_cUHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DLC_V20210125_MODEL_DATAENGINESCALEINFODETAIL_H_
