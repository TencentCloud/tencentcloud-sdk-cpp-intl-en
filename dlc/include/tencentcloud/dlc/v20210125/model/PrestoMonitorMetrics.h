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

#ifndef TENCENTCLOUD_DLC_V20210125_MODEL_PRESTOMONITORMETRICS_H_
#define TENCENTCLOUD_DLC_V20210125_MODEL_PRESTOMONITORMETRICS_H_

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
                * Presto monitoring metrics
                */
                class PrestoMonitorMetrics : public AbstractModel
                {
                public:
                    PrestoMonitorMetrics();
                    ~PrestoMonitorMetrics() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Note: This field may return null, indicating that no valid values can be obtained.
                     * @return LocalCacheHitRate Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    double GetLocalCacheHitRate() const;

                    /**
                     * 设置Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _localCacheHitRate Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetLocalCacheHitRate(const double& _localCacheHitRate);

                    /**
                     * 判断参数 LocalCacheHitRate 是否已赋值
                     * @return LocalCacheHitRate 是否已赋值
                     * 
                     */
                    bool LocalCacheHitRateHasBeenSet() const;

                    /**
                     * 获取Note: This field may return null, indicating that no valid values can be obtained.
                     * @return FragmentCacheHitRate Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    double GetFragmentCacheHitRate() const;

                    /**
                     * 设置Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _fragmentCacheHitRate Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetFragmentCacheHitRate(const double& _fragmentCacheHitRate);

                    /**
                     * 判断参数 FragmentCacheHitRate 是否已赋值
                     * @return FragmentCacheHitRate 是否已赋值
                     * 
                     */
                    bool FragmentCacheHitRateHasBeenSet() const;

                private:

                    /**
                     * Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    double m_localCacheHitRate;
                    bool m_localCacheHitRateHasBeenSet;

                    /**
                     * Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    double m_fragmentCacheHitRate;
                    bool m_fragmentCacheHitRateHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DLC_V20210125_MODEL_PRESTOMONITORMETRICS_H_
