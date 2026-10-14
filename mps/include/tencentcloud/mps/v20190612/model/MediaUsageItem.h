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

#ifndef TENCENTCLOUD_MPS_V20190612_MODEL_MEDIAUSAGEITEM_H_
#define TENCENTCLOUD_MPS_V20190612_MODEL_MEDIAUSAGEITEM_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Mps
    {
        namespace V20190612
        {
            namespace Model
            {
                /**
                * AIGC usage data display
                */
                class MediaUsageItem : public AbstractModel
                {
                public:
                    MediaUsageItem();
                    ~MediaUsageItem() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>Number of input images</p><p>Unit: count</p>
                     * @return InputImageCount <p>Number of input images</p><p>Unit: count</p>
                     * 
                     */
                    int64_t GetInputImageCount() const;

                    /**
                     * 设置<p>Number of input images</p><p>Unit: count</p>
                     * @param _inputImageCount <p>Number of input images</p><p>Unit: count</p>
                     * 
                     */
                    void SetInputImageCount(const int64_t& _inputImageCount);

                    /**
                     * 判断参数 InputImageCount 是否已赋值
                     * @return InputImageCount 是否已赋值
                     * 
                     */
                    bool InputImageCountHasBeenSet() const;

                    /**
                     * 获取<p>Input seconds</p><p>Unit: seconds</p>
                     * @return InputSeconds <p>Input seconds</p><p>Unit: seconds</p>
                     * 
                     */
                    int64_t GetInputSeconds() const;

                    /**
                     * 设置<p>Input seconds</p><p>Unit: seconds</p>
                     * @param _inputSeconds <p>Input seconds</p><p>Unit: seconds</p>
                     * 
                     */
                    void SetInputSeconds(const int64_t& _inputSeconds);

                    /**
                     * 判断参数 InputSeconds 是否已赋值
                     * @return InputSeconds 是否已赋值
                     * 
                     */
                    bool InputSecondsHasBeenSet() const;

                    /**
                     * 获取<p>Output seconds</p><p>Measurement unit: seconds</p>
                     * @return OutputSeconds <p>Output seconds</p><p>Measurement unit: seconds</p>
                     * 
                     */
                    int64_t GetOutputSeconds() const;

                    /**
                     * 设置<p>Output seconds</p><p>Measurement unit: seconds</p>
                     * @param _outputSeconds <p>Output seconds</p><p>Measurement unit: seconds</p>
                     * 
                     */
                    void SetOutputSeconds(const int64_t& _outputSeconds);

                    /**
                     * 判断参数 OutputSeconds 是否已赋值
                     * @return OutputSeconds 是否已赋值
                     * 
                     */
                    bool OutputSecondsHasBeenSet() const;

                    /**
                     * 获取<p>Total number of seconds</p><p>Unit: seconds</p>
                     * @return TotalSeconds <p>Total number of seconds</p><p>Unit: seconds</p>
                     * 
                     */
                    int64_t GetTotalSeconds() const;

                    /**
                     * 设置<p>Total number of seconds</p><p>Unit: seconds</p>
                     * @param _totalSeconds <p>Total number of seconds</p><p>Unit: seconds</p>
                     * 
                     */
                    void SetTotalSeconds(const int64_t& _totalSeconds);

                    /**
                     * 判断参数 TotalSeconds 是否已赋值
                     * @return TotalSeconds 是否已赋值
                     * 
                     */
                    bool TotalSecondsHasBeenSet() const;

                private:

                    /**
                     * <p>Number of input images</p><p>Unit: count</p>
                     */
                    int64_t m_inputImageCount;
                    bool m_inputImageCountHasBeenSet;

                    /**
                     * <p>Input seconds</p><p>Unit: seconds</p>
                     */
                    int64_t m_inputSeconds;
                    bool m_inputSecondsHasBeenSet;

                    /**
                     * <p>Output seconds</p><p>Measurement unit: seconds</p>
                     */
                    int64_t m_outputSeconds;
                    bool m_outputSecondsHasBeenSet;

                    /**
                     * <p>Total number of seconds</p><p>Unit: seconds</p>
                     */
                    int64_t m_totalSeconds;
                    bool m_totalSecondsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MPS_V20190612_MODEL_MEDIAUSAGEITEM_H_
