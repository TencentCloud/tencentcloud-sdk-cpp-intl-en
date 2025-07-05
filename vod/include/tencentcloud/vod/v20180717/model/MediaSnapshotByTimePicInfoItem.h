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

#ifndef TENCENTCLOUD_VOD_V20180717_MODEL_MEDIASNAPSHOTBYTIMEPICINFOITEM_H_
#define TENCENTCLOUD_VOD_V20180717_MODEL_MEDIASNAPSHOTBYTIMEPICINFOITEM_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Vod
    {
        namespace V20180717
        {
            namespace Model
            {
                /**
                * Time point screenshot information
                */
                class MediaSnapshotByTimePicInfoItem : public AbstractModel
                {
                public:
                    MediaSnapshotByTimePicInfoItem();
                    ~MediaSnapshotByTimePicInfoItem() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Time offset corresponding to the screenshot in the video in <font color=red>milliseconds</font>.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return TimeOffset Time offset corresponding to the screenshot in the video in <font color=red>milliseconds</font>.
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    double GetTimeOffset() const;

                    /**
                     * 设置Time offset corresponding to the screenshot in the video in <font color=red>milliseconds</font>.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param _timeOffset Time offset corresponding to the screenshot in the video in <font color=red>milliseconds</font>.
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetTimeOffset(const double& _timeOffset);

                    /**
                     * 判断参数 TimeOffset 是否已赋值
                     * @return TimeOffset 是否已赋值
                     * 
                     */
                    bool TimeOffsetHasBeenSet() const;

                    /**
                     * 获取Screenshot URL.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return Url Screenshot URL.
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetUrl() const;

                    /**
                     * 设置Screenshot URL.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param _url Screenshot URL.
Note: this field may return null, indicating that no valid values can be obtained.
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
                     * 获取List of watermarking template IDs if the screenshots are watermarked.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return WaterMarkDefinition List of watermarking template IDs if the screenshots are watermarked.
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::vector<int64_t> GetWaterMarkDefinition() const;

                    /**
                     * 设置List of watermarking template IDs if the screenshots are watermarked.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param _waterMarkDefinition List of watermarking template IDs if the screenshots are watermarked.
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetWaterMarkDefinition(const std::vector<int64_t>& _waterMarkDefinition);

                    /**
                     * 判断参数 WaterMarkDefinition 是否已赋值
                     * @return WaterMarkDefinition 是否已赋值
                     * 
                     */
                    bool WaterMarkDefinitionHasBeenSet() const;

                private:

                    /**
                     * Time offset corresponding to the screenshot in the video in <font color=red>milliseconds</font>.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    double m_timeOffset;
                    bool m_timeOffsetHasBeenSet;

                    /**
                     * Screenshot URL.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_url;
                    bool m_urlHasBeenSet;

                    /**
                     * List of watermarking template IDs if the screenshots are watermarked.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<int64_t> m_waterMarkDefinition;
                    bool m_waterMarkDefinitionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20180717_MODEL_MEDIASNAPSHOTBYTIMEPICINFOITEM_H_
