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

#ifndef TENCENTCLOUD_VOD_V20180717_MODEL_DESCRIBEMEDIAINFOSREQUEST_H_
#define TENCENTCLOUD_VOD_V20180717_MODEL_DESCRIBEMEDIAINFOSREQUEST_H_

#include <string>
#include <vector>
#include <map>
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
                * DescribeMediaInfos request structure.
                */
                class DescribeMediaInfosRequest : public AbstractModel
                {
                public:
                    DescribeMediaInfosRequest();
                    ~DescribeMediaInfosRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取List of media file IDs. N starts from 0 and can be up to 19.
                     * @return FileIds List of media file IDs. N starts from 0 and can be up to 19.
                     * 
                     */
                    std::vector<std::string> GetFileIds() const;

                    /**
                     * 设置List of media file IDs. N starts from 0 and can be up to 19.
                     * @param _fileIds List of media file IDs. N starts from 0 and can be up to 19.
                     * 
                     */
                    void SetFileIds(const std::vector<std::string>& _fileIds);

                    /**
                     * 判断参数 FileIds 是否已赋值
                     * @return FileIds 是否已赋值
                     * 
                     */
                    bool FileIdsHasBeenSet() const;

                    /**
                     * 获取<b>The VOD [subapplication](https://intl.cloud.tencent.com/document/product/266/14574?from_cn_redirect=1) ID. If you need to access a resource in a subapplication, set this parameter to the subapplication ID; otherwise, leave it empty.</b>
                     * @return SubAppId <b>The VOD [subapplication](https://intl.cloud.tencent.com/document/product/266/14574?from_cn_redirect=1) ID. If you need to access a resource in a subapplication, set this parameter to the subapplication ID; otherwise, leave it empty.</b>
                     * 
                     */
                    uint64_t GetSubAppId() const;

                    /**
                     * 设置<b>The VOD [subapplication](https://intl.cloud.tencent.com/document/product/266/14574?from_cn_redirect=1) ID. If you need to access a resource in a subapplication, set this parameter to the subapplication ID; otherwise, leave it empty.</b>
                     * @param _subAppId <b>The VOD [subapplication](https://intl.cloud.tencent.com/document/product/266/14574?from_cn_redirect=1) ID. If you need to access a resource in a subapplication, set this parameter to the subapplication ID; otherwise, leave it empty.</b>
                     * 
                     */
                    void SetSubAppId(const uint64_t& _subAppId);

                    /**
                     * 判断参数 SubAppId 是否已赋值
                     * @return SubAppId 是否已赋值
                     * 
                     */
                    bool SubAppIdHasBeenSet() const;

                    /**
                     * 获取The types of information to return. You can specify multiple information types. `N` starts from 0. If you do not specify this parameter, all information will be returned. The supported information types are as follows:
<li>`basicInfo` (basic information)</li>
<li>`metaData` (video metadata)</li>
<li>`transcodeInfo` (transcoding information)</li>
<li>`animatedGraphicsInfo` (animated image information)</li>
<li>`imageSpriteInfo` (image sprite information)</li>
<li>`snapshotByTimeOffsetInfo` (time point screenshot information)</li>
<li>`sampleSnapshotInfo` (sampled screenshot information)</li>
<li>`keyFrameDescInfo` (timestamp information)</li>
<li>`adaptiveDynamicStreamingInfo` (adaptive bitrate information)</li>
<li>`miniProgramReviewInfo` (WeChat Mini Program moderation information)</li>
<li>`subtitleInfo` (subtitle information)</li>
<li>`reviewInfo` (moderation information)</li>
                     * @return Filters The types of information to return. You can specify multiple information types. `N` starts from 0. If you do not specify this parameter, all information will be returned. The supported information types are as follows:
<li>`basicInfo` (basic information)</li>
<li>`metaData` (video metadata)</li>
<li>`transcodeInfo` (transcoding information)</li>
<li>`animatedGraphicsInfo` (animated image information)</li>
<li>`imageSpriteInfo` (image sprite information)</li>
<li>`snapshotByTimeOffsetInfo` (time point screenshot information)</li>
<li>`sampleSnapshotInfo` (sampled screenshot information)</li>
<li>`keyFrameDescInfo` (timestamp information)</li>
<li>`adaptiveDynamicStreamingInfo` (adaptive bitrate information)</li>
<li>`miniProgramReviewInfo` (WeChat Mini Program moderation information)</li>
<li>`subtitleInfo` (subtitle information)</li>
<li>`reviewInfo` (moderation information)</li>
                     * 
                     */
                    std::vector<std::string> GetFilters() const;

                    /**
                     * 设置The types of information to return. You can specify multiple information types. `N` starts from 0. If you do not specify this parameter, all information will be returned. The supported information types are as follows:
<li>`basicInfo` (basic information)</li>
<li>`metaData` (video metadata)</li>
<li>`transcodeInfo` (transcoding information)</li>
<li>`animatedGraphicsInfo` (animated image information)</li>
<li>`imageSpriteInfo` (image sprite information)</li>
<li>`snapshotByTimeOffsetInfo` (time point screenshot information)</li>
<li>`sampleSnapshotInfo` (sampled screenshot information)</li>
<li>`keyFrameDescInfo` (timestamp information)</li>
<li>`adaptiveDynamicStreamingInfo` (adaptive bitrate information)</li>
<li>`miniProgramReviewInfo` (WeChat Mini Program moderation information)</li>
<li>`subtitleInfo` (subtitle information)</li>
<li>`reviewInfo` (moderation information)</li>
                     * @param _filters The types of information to return. You can specify multiple information types. `N` starts from 0. If you do not specify this parameter, all information will be returned. The supported information types are as follows:
<li>`basicInfo` (basic information)</li>
<li>`metaData` (video metadata)</li>
<li>`transcodeInfo` (transcoding information)</li>
<li>`animatedGraphicsInfo` (animated image information)</li>
<li>`imageSpriteInfo` (image sprite information)</li>
<li>`snapshotByTimeOffsetInfo` (time point screenshot information)</li>
<li>`sampleSnapshotInfo` (sampled screenshot information)</li>
<li>`keyFrameDescInfo` (timestamp information)</li>
<li>`adaptiveDynamicStreamingInfo` (adaptive bitrate information)</li>
<li>`miniProgramReviewInfo` (WeChat Mini Program moderation information)</li>
<li>`subtitleInfo` (subtitle information)</li>
<li>`reviewInfo` (moderation information)</li>
                     * 
                     */
                    void SetFilters(const std::vector<std::string>& _filters);

                    /**
                     * 判断参数 Filters 是否已赋值
                     * @return Filters 是否已赋值
                     * 
                     */
                    bool FiltersHasBeenSet() const;

                private:

                    /**
                     * List of media file IDs. N starts from 0 and can be up to 19.
                     */
                    std::vector<std::string> m_fileIds;
                    bool m_fileIdsHasBeenSet;

                    /**
                     * <b>The VOD [subapplication](https://intl.cloud.tencent.com/document/product/266/14574?from_cn_redirect=1) ID. If you need to access a resource in a subapplication, set this parameter to the subapplication ID; otherwise, leave it empty.</b>
                     */
                    uint64_t m_subAppId;
                    bool m_subAppIdHasBeenSet;

                    /**
                     * The types of information to return. You can specify multiple information types. `N` starts from 0. If you do not specify this parameter, all information will be returned. The supported information types are as follows:
<li>`basicInfo` (basic information)</li>
<li>`metaData` (video metadata)</li>
<li>`transcodeInfo` (transcoding information)</li>
<li>`animatedGraphicsInfo` (animated image information)</li>
<li>`imageSpriteInfo` (image sprite information)</li>
<li>`snapshotByTimeOffsetInfo` (time point screenshot information)</li>
<li>`sampleSnapshotInfo` (sampled screenshot information)</li>
<li>`keyFrameDescInfo` (timestamp information)</li>
<li>`adaptiveDynamicStreamingInfo` (adaptive bitrate information)</li>
<li>`miniProgramReviewInfo` (WeChat Mini Program moderation information)</li>
<li>`subtitleInfo` (subtitle information)</li>
<li>`reviewInfo` (moderation information)</li>
                     */
                    std::vector<std::string> m_filters;
                    bool m_filtersHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20180717_MODEL_DESCRIBEMEDIAINFOSREQUEST_H_
