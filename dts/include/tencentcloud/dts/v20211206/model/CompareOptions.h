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

#ifndef TENCENTCLOUD_DTS_V20211206_MODEL_COMPAREOPTIONS_H_
#define TENCENTCLOUD_DTS_V20211206_MODEL_COMPAREOPTIONS_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Dts
    {
        namespace V20211206
        {
            namespace Model
            {
                /**
                * Consistency check options
                */
                class CompareOptions : public AbstractModel
                {
                public:
                    CompareOptions();
                    ~CompareOptions() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Comparative Method: dataCheck (Complete Data Comparison), sampleDataCheck (Sampling Data Comparison), rowsCount (Row Count Comparison)Note: This field may return null, indicating that no valid value can be obtained.
                     * @return Method Comparative Method: dataCheck (Complete Data Comparison), sampleDataCheck (Sampling Data Comparison), rowsCount (Row Count Comparison)Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    std::string GetMethod() const;

                    /**
                     * 设置Comparative Method: dataCheck (Complete Data Comparison), sampleDataCheck (Sampling Data Comparison), rowsCount (Row Count Comparison)Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _method Comparative Method: dataCheck (Complete Data Comparison), sampleDataCheck (Sampling Data Comparison), rowsCount (Row Count Comparison)Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetMethod(const std::string& _method);

                    /**
                     * 判断参数 Method 是否已赋值
                     * @return Method 是否已赋值
                     * 
                     */
                    bool MethodHasBeenSet() const;

                    /**
                     * 获取Sampling rate. Value range: 0-100%.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return SampleRate Sampling rate. Value range: 0-100%.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    int64_t GetSampleRate() const;

                    /**
                     * 设置Sampling rate. Value range: 0-100%.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _sampleRate Sampling rate. Value range: 0-100%.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetSampleRate(const int64_t& _sampleRate);

                    /**
                     * 判断参数 SampleRate 是否已赋值
                     * @return SampleRate 是否已赋值
                     * 
                     */
                    bool SampleRateHasBeenSet() const;

                    /**
                     * 获取The number of threads, which defaults to 1. Value range: 1-5.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return ThreadCount The number of threads, which defaults to 1. Value range: 1-5.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    int64_t GetThreadCount() const;

                    /**
                     * 设置The number of threads, which defaults to 1. Value range: 1-5.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _threadCount The number of threads, which defaults to 1. Value range: 1-5.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetThreadCount(const int64_t& _threadCount);

                    /**
                     * 判断参数 ThreadCount 是否已赋值
                     * @return ThreadCount 是否已赋值
                     * 
                     */
                    bool ThreadCountHasBeenSet() const;

                private:

                    /**
                     * Comparative Method: dataCheck (Complete Data Comparison), sampleDataCheck (Sampling Data Comparison), rowsCount (Row Count Comparison)Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    std::string m_method;
                    bool m_methodHasBeenSet;

                    /**
                     * Sampling rate. Value range: 0-100%.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t m_sampleRate;
                    bool m_sampleRateHasBeenSet;

                    /**
                     * The number of threads, which defaults to 1. Value range: 1-5.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t m_threadCount;
                    bool m_threadCountHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DTS_V20211206_MODEL_COMPAREOPTIONS_H_
