/*
 * Copyright (c) 2017-2019 THL A29 Limited, a Tencent company. All Rights Reserved.
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

#ifndef TENCENTCLOUD_TEO_V20220901_MODEL_SPEEDTESTINGINFO_H_
#define TENCENTCLOUD_TEO_V20220901_MODEL_SPEEDTESTINGINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/teo/v20220901/model/SpeedTestingConfig.h>
#include <tencentcloud/teo/v20220901/model/SpeedTestingStatistics.h>


namespace TencentCloud
{
    namespace Teo
    {
        namespace V20220901
        {
            namespace Model
            {
                /**
                * The site test information
                */
                class SpeedTestingInfo : public AbstractModel
                {
                public:
                    SpeedTestingInfo();
                    ~SpeedTestingInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取The task status. Values:
<li>`200`: The task completed.</li>
<li>`100`: The task is running.</li>
<li>`503`: The task failed.</li>
                     * @return StatusCode The task status. Values:
<li>`200`: The task completed.</li>
<li>`100`: The task is running.</li>
<li>`503`: The task failed.</li>
                     * 
                     */
                    int64_t GetStatusCode() const;

                    /**
                     * 设置The task status. Values:
<li>`200`: The task completed.</li>
<li>`100`: The task is running.</li>
<li>`503`: The task failed.</li>
                     * @param _statusCode The task status. Values:
<li>`200`: The task completed.</li>
<li>`100`: The task is running.</li>
<li>`503`: The task failed.</li>
                     * 
                     */
                    void SetStatusCode(const int64_t& _statusCode);

                    /**
                     * 判断参数 StatusCode 是否已赋值
                     * @return StatusCode 是否已赋值
                     * 
                     */
                    bool StatusCodeHasBeenSet() const;

                    /**
                     * 获取ID of the site test task.
                     * @return TestId ID of the site test task.
                     * 
                     */
                    std::string GetTestId() const;

                    /**
                     * 设置ID of the site test task.
                     * @param _testId ID of the site test task.
                     * 
                     */
                    void SetTestId(const std::string& _testId);

                    /**
                     * 判断参数 TestId 是否已赋值
                     * @return TestId 是否已赋值
                     * 
                     */
                    bool TestIdHasBeenSet() const;

                    /**
                     * 获取The settings of the site test task.
                     * @return SpeedTestingConfig The settings of the site test task.
                     * 
                     */
                    SpeedTestingConfig GetSpeedTestingConfig() const;

                    /**
                     * 设置The settings of the site test task.
                     * @param _speedTestingConfig The settings of the site test task.
                     * 
                     */
                    void SetSpeedTestingConfig(const SpeedTestingConfig& _speedTestingConfig);

                    /**
                     * 判断参数 SpeedTestingConfig 是否已赋值
                     * @return SpeedTestingConfig 是否已赋值
                     * 
                     */
                    bool SpeedTestingConfigHasBeenSet() const;

                    /**
                     * 获取The site test result.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return SpeedTestingStatistics The site test result.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    SpeedTestingStatistics GetSpeedTestingStatistics() const;

                    /**
                     * 设置The site test result.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _speedTestingStatistics The site test result.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetSpeedTestingStatistics(const SpeedTestingStatistics& _speedTestingStatistics);

                    /**
                     * 判断参数 SpeedTestingStatistics 是否已赋值
                     * @return SpeedTestingStatistics 是否已赋值
                     * 
                     */
                    bool SpeedTestingStatisticsHasBeenSet() const;

                private:

                    /**
                     * The task status. Values:
<li>`200`: The task completed.</li>
<li>`100`: The task is running.</li>
<li>`503`: The task failed.</li>
                     */
                    int64_t m_statusCode;
                    bool m_statusCodeHasBeenSet;

                    /**
                     * ID of the site test task.
                     */
                    std::string m_testId;
                    bool m_testIdHasBeenSet;

                    /**
                     * The settings of the site test task.
                     */
                    SpeedTestingConfig m_speedTestingConfig;
                    bool m_speedTestingConfigHasBeenSet;

                    /**
                     * The site test result.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    SpeedTestingStatistics m_speedTestingStatistics;
                    bool m_speedTestingStatisticsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220901_MODEL_SPEEDTESTINGINFO_H_
