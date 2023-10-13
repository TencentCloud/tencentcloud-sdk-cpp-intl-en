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

#ifndef TENCENTCLOUD_MPS_V20190612_MODEL_LIVERECORDFILE_H_
#define TENCENTCLOUD_MPS_V20190612_MODEL_LIVERECORDFILE_H_

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
                * The information of a live recording file.
                */
                class LiveRecordFile : public AbstractModel
                {
                public:
                    LiveRecordFile();
                    ~LiveRecordFile() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取The URL of the recording file.
Note: This field may return·null, indicating that no valid values can be obtained.
                     * @return Url The URL of the recording file.
Note: This field may return·null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetUrl() const;

                    /**
                     * 设置The URL of the recording file.
Note: This field may return·null, indicating that no valid values can be obtained.
                     * @param _url The URL of the recording file.
Note: This field may return·null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetUrl(const std::string& _url);

                    /**
                     * 判断参数 Url 是否已赋值
                     * @return Url 是否已赋值
                     * 
                     */
                    bool UrlHasBeenSet() const;

                    /**
                     * 获取The size of the recording file.
Note: This field may return·null, indicating that no valid values can be obtained.
                     * @return Size The size of the recording file.
Note: This field may return·null, indicating that no valid values can be obtained.
                     * 
                     */
                    int64_t GetSize() const;

                    /**
                     * 设置The size of the recording file.
Note: This field may return·null, indicating that no valid values can be obtained.
                     * @param _size The size of the recording file.
Note: This field may return·null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetSize(const int64_t& _size);

                    /**
                     * 判断参数 Size 是否已赋值
                     * @return Size 是否已赋值
                     * 
                     */
                    bool SizeHasBeenSet() const;

                    /**
                     * 获取The duration of the recording file.
Note: This field may return·null, indicating that no valid values can be obtained.
                     * @return Duration The duration of the recording file.
Note: This field may return·null, indicating that no valid values can be obtained.
                     * 
                     */
                    int64_t GetDuration() const;

                    /**
                     * 设置The duration of the recording file.
Note: This field may return·null, indicating that no valid values can be obtained.
                     * @param _duration The duration of the recording file.
Note: This field may return·null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetDuration(const int64_t& _duration);

                    /**
                     * 判断参数 Duration 是否已赋值
                     * @return Duration 是否已赋值
                     * 
                     */
                    bool DurationHasBeenSet() const;

                    /**
                     * 获取The recording start time in [ISO date format](https://intl.cloud.tencent.com/document/product/862/37710?from_cn_redirect=1#52).
Note: This field may return·null, indicating that no valid values can be obtained.
                     * @return StartTime The recording start time in [ISO date format](https://intl.cloud.tencent.com/document/product/862/37710?from_cn_redirect=1#52).
Note: This field may return·null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetStartTime() const;

                    /**
                     * 设置The recording start time in [ISO date format](https://intl.cloud.tencent.com/document/product/862/37710?from_cn_redirect=1#52).
Note: This field may return·null, indicating that no valid values can be obtained.
                     * @param _startTime The recording start time in [ISO date format](https://intl.cloud.tencent.com/document/product/862/37710?from_cn_redirect=1#52).
Note: This field may return·null, indicating that no valid values can be obtained.
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
                     * 获取The recording end time in [ISO date format](https://intl.cloud.tencent.com/document/product/862/37710?from_cn_redirect=1#52).
Note: This field may return·null, indicating that no valid values can be obtained.
                     * @return EndTime The recording end time in [ISO date format](https://intl.cloud.tencent.com/document/product/862/37710?from_cn_redirect=1#52).
Note: This field may return·null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetEndTime() const;

                    /**
                     * 设置The recording end time in [ISO date format](https://intl.cloud.tencent.com/document/product/862/37710?from_cn_redirect=1#52).
Note: This field may return·null, indicating that no valid values can be obtained.
                     * @param _endTime The recording end time in [ISO date format](https://intl.cloud.tencent.com/document/product/862/37710?from_cn_redirect=1#52).
Note: This field may return·null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetEndTime(const std::string& _endTime);

                    /**
                     * 判断参数 EndTime 是否已赋值
                     * @return EndTime 是否已赋值
                     * 
                     */
                    bool EndTimeHasBeenSet() const;

                private:

                    /**
                     * The URL of the recording file.
Note: This field may return·null, indicating that no valid values can be obtained.
                     */
                    std::string m_url;
                    bool m_urlHasBeenSet;

                    /**
                     * The size of the recording file.
Note: This field may return·null, indicating that no valid values can be obtained.
                     */
                    int64_t m_size;
                    bool m_sizeHasBeenSet;

                    /**
                     * The duration of the recording file.
Note: This field may return·null, indicating that no valid values can be obtained.
                     */
                    int64_t m_duration;
                    bool m_durationHasBeenSet;

                    /**
                     * The recording start time in [ISO date format](https://intl.cloud.tencent.com/document/product/862/37710?from_cn_redirect=1#52).
Note: This field may return·null, indicating that no valid values can be obtained.
                     */
                    std::string m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * The recording end time in [ISO date format](https://intl.cloud.tencent.com/document/product/862/37710?from_cn_redirect=1#52).
Note: This field may return·null, indicating that no valid values can be obtained.
                     */
                    std::string m_endTime;
                    bool m_endTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MPS_V20190612_MODEL_LIVERECORDFILE_H_
