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

#ifndef TENCENTCLOUD_VOD_V20180717_MODEL_MEDIAMINIPROGRAMREVIEWINFOITEM_H_
#define TENCENTCLOUD_VOD_V20180717_MODEL_MEDIAMINIPROGRAMREVIEWINFOITEM_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/vod/v20180717/model/MediaMetaData.h>
#include <tencentcloud/vod/v20180717/model/MediaMiniProgramReviewElem.h>


namespace TencentCloud
{
    namespace Vod
    {
        namespace V20180717
        {
            namespace Model
            {
                /**
                * WeChat Mini Program audit information unit
                */
                class MediaMiniProgramReviewInfoItem : public AbstractModel
                {
                public:
                    MediaMiniProgramReviewInfoItem();
                    ~MediaMiniProgramReviewInfoItem() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Template ID, which is the ID of the transcoding template corresponding to the video published on WeChat Mini Program. 0 represents the source video.
                     * @return Definition Template ID, which is the ID of the transcoding template corresponding to the video published on WeChat Mini Program. 0 represents the source video.
                     */
                    int64_t GetDefinition() const;

                    /**
                     * 设置Template ID, which is the ID of the transcoding template corresponding to the video published on WeChat Mini Program. 0 represents the source video.
                     * @param Definition Template ID, which is the ID of the transcoding template corresponding to the video published on WeChat Mini Program. 0 represents the source video.
                     */
                    void SetDefinition(const int64_t& _definition);

                    /**
                     * 判断参数 Definition 是否已赋值
                     * @return Definition 是否已赋值
                     */
                    bool DefinitionHasBeenSet() const;

                    /**
                     * 获取Video metadata.
                     * @return MetaData Video metadata.
                     */
                    MediaMetaData GetMetaData() const;

                    /**
                     * 设置Video metadata.
                     * @param MetaData Video metadata.
                     */
                    void SetMetaData(const MediaMetaData& _metaData);

                    /**
                     * 判断参数 MetaData 是否已赋值
                     * @return MetaData 是否已赋值
                     */
                    bool MetaDataHasBeenSet() const;

                    /**
                     * 获取Video playback address for WeChat Mini Program audit
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return Url Video playback address for WeChat Mini Program audit
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string GetUrl() const;

                    /**
                     * 设置Video playback address for WeChat Mini Program audit
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param Url Video playback address for WeChat Mini Program audit
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    void SetUrl(const std::string& _url);

                    /**
                     * 判断参数 Url 是否已赋值
                     * @return Url 是否已赋值
                     */
                    bool UrlHasBeenSet() const;

                    /**
                     * 获取Status of video release on WeChat Mini Program
<li>Pass: succeeded.</li>
<li>Rejected: rejected.</li>
                     * @return ReviewResult Status of video release on WeChat Mini Program
<li>Pass: succeeded.</li>
<li>Rejected: rejected.</li>
                     */
                    std::string GetReviewResult() const;

                    /**
                     * 设置Status of video release on WeChat Mini Program
<li>Pass: succeeded.</li>
<li>Rejected: rejected.</li>
                     * @param ReviewResult Status of video release on WeChat Mini Program
<li>Pass: succeeded.</li>
<li>Rejected: rejected.</li>
                     */
                    void SetReviewResult(const std::string& _reviewResult);

                    /**
                     * 判断参数 ReviewResult 是否已赋值
                     * @return ReviewResult 是否已赋值
                     */
                    bool ReviewResultHasBeenSet() const;

                    /**
                     * 获取WeChat Mini Program audit element.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return ReviewSummary WeChat Mini Program audit element.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<MediaMiniProgramReviewElem> GetReviewSummary() const;

                    /**
                     * 设置WeChat Mini Program audit element.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param ReviewSummary WeChat Mini Program audit element.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    void SetReviewSummary(const std::vector<MediaMiniProgramReviewElem>& _reviewSummary);

                    /**
                     * 判断参数 ReviewSummary 是否已赋值
                     * @return ReviewSummary 是否已赋值
                     */
                    bool ReviewSummaryHasBeenSet() const;

                private:

                    /**
                     * Template ID, which is the ID of the transcoding template corresponding to the video published on WeChat Mini Program. 0 represents the source video.
                     */
                    int64_t m_definition;
                    bool m_definitionHasBeenSet;

                    /**
                     * Video metadata.
                     */
                    MediaMetaData m_metaData;
                    bool m_metaDataHasBeenSet;

                    /**
                     * Video playback address for WeChat Mini Program audit
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_url;
                    bool m_urlHasBeenSet;

                    /**
                     * Status of video release on WeChat Mini Program
<li>Pass: succeeded.</li>
<li>Rejected: rejected.</li>
                     */
                    std::string m_reviewResult;
                    bool m_reviewResultHasBeenSet;

                    /**
                     * WeChat Mini Program audit element.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<MediaMiniProgramReviewElem> m_reviewSummary;
                    bool m_reviewSummaryHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20180717_MODEL_MEDIAMINIPROGRAMREVIEWINFOITEM_H_
