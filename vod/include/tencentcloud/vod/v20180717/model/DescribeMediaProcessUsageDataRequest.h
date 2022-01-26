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

#ifndef TENCENTCLOUD_VOD_V20180717_MODEL_DESCRIBEMEDIAPROCESSUSAGEDATAREQUEST_H_
#define TENCENTCLOUD_VOD_V20180717_MODEL_DESCRIBEMEDIAPROCESSUSAGEDATAREQUEST_H_

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
                * DescribeMediaProcessUsageData request structure.
                */
                class DescribeMediaProcessUsageDataRequest : public AbstractModel
                {
                public:
                    DescribeMediaProcessUsageDataRequest();
                    ~DescribeMediaProcessUsageDataRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Start date in [ISO date format](https://intl.cloud.tencent.com/document/product/266/11732?from_cn_redirect=1#iso-.E6.97.A5.E6.9C.9F.E6.A0.BC.E5.BC.8F).
                     * @return StartTime Start date in [ISO date format](https://intl.cloud.tencent.com/document/product/266/11732?from_cn_redirect=1#iso-.E6.97.A5.E6.9C.9F.E6.A0.BC.E5.BC.8F).
                     */
                    std::string GetStartTime() const;

                    /**
                     * 设置Start date in [ISO date format](https://intl.cloud.tencent.com/document/product/266/11732?from_cn_redirect=1#iso-.E6.97.A5.E6.9C.9F.E6.A0.BC.E5.BC.8F).
                     * @param StartTime Start date in [ISO date format](https://intl.cloud.tencent.com/document/product/266/11732?from_cn_redirect=1#iso-.E6.97.A5.E6.9C.9F.E6.A0.BC.E5.BC.8F).
                     */
                    void SetStartTime(const std::string& _startTime);

                    /**
                     * 判断参数 StartTime 是否已赋值
                     * @return StartTime 是否已赋值
                     */
                    bool StartTimeHasBeenSet() const;

                    /**
                     * 获取End date in [ISO date format](https://intl.cloud.tencent.com/document/product/266/11732?from_cn_redirect=1#iso-.E6.97.A5.E6.9C.9F.E6.A0.BC.E5.BC.8F). The end date must be on or after the start date.
                     * @return EndTime End date in [ISO date format](https://intl.cloud.tencent.com/document/product/266/11732?from_cn_redirect=1#iso-.E6.97.A5.E6.9C.9F.E6.A0.BC.E5.BC.8F). The end date must be on or after the start date.
                     */
                    std::string GetEndTime() const;

                    /**
                     * 设置End date in [ISO date format](https://intl.cloud.tencent.com/document/product/266/11732?from_cn_redirect=1#iso-.E6.97.A5.E6.9C.9F.E6.A0.BC.E5.BC.8F). The end date must be on or after the start date.
                     * @param EndTime End date in [ISO date format](https://intl.cloud.tencent.com/document/product/266/11732?from_cn_redirect=1#iso-.E6.97.A5.E6.9C.9F.E6.A0.BC.E5.BC.8F). The end date must be on or after the start date.
                     */
                    void SetEndTime(const std::string& _endTime);

                    /**
                     * 判断参数 EndTime 是否已赋值
                     * @return EndTime 是否已赋值
                     */
                    bool EndTimeHasBeenSet() const;

                    /**
                     * 获取This API is used to query video processing task types. Valid values:
<li>Transcoding: basic transcoding</li>
<li>Transcoding-TESHD: TESHD transcoding</li>
<li>Editing: video editing</li>
<li>AdaptiveBitrateStreaming: adaptive bitrate streaming</li>
<li>ContentAudit: content moderation</li>
<li>Transcode: transcoding types, including basic transcoding, TESHD transcoding and video editing. This value is not recommended.</li>
                     * @return Type This API is used to query video processing task types. Valid values:
<li>Transcoding: basic transcoding</li>
<li>Transcoding-TESHD: TESHD transcoding</li>
<li>Editing: video editing</li>
<li>AdaptiveBitrateStreaming: adaptive bitrate streaming</li>
<li>ContentAudit: content moderation</li>
<li>Transcode: transcoding types, including basic transcoding, TESHD transcoding and video editing. This value is not recommended.</li>
                     */
                    std::string GetType() const;

                    /**
                     * 设置This API is used to query video processing task types. Valid values:
<li>Transcoding: basic transcoding</li>
<li>Transcoding-TESHD: TESHD transcoding</li>
<li>Editing: video editing</li>
<li>AdaptiveBitrateStreaming: adaptive bitrate streaming</li>
<li>ContentAudit: content moderation</li>
<li>Transcode: transcoding types, including basic transcoding, TESHD transcoding and video editing. This value is not recommended.</li>
                     * @param Type This API is used to query video processing task types. Valid values:
<li>Transcoding: basic transcoding</li>
<li>Transcoding-TESHD: TESHD transcoding</li>
<li>Editing: video editing</li>
<li>AdaptiveBitrateStreaming: adaptive bitrate streaming</li>
<li>ContentAudit: content moderation</li>
<li>Transcode: transcoding types, including basic transcoding, TESHD transcoding and video editing. This value is not recommended.</li>
                     */
                    void SetType(const std::string& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     */
                    bool TypeHasBeenSet() const;

                    /**
                     * 获取[Subapplication](https://intl.cloud.tencent.com/document/product/266/14574?from_cn_redirect=1) ID in VOD. If you need to access a resource in a subapplication, enter the subapplication ID in this field; otherwise, leave it empty.
                     * @return SubAppId [Subapplication](https://intl.cloud.tencent.com/document/product/266/14574?from_cn_redirect=1) ID in VOD. If you need to access a resource in a subapplication, enter the subapplication ID in this field; otherwise, leave it empty.
                     */
                    uint64_t GetSubAppId() const;

                    /**
                     * 设置[Subapplication](https://intl.cloud.tencent.com/document/product/266/14574?from_cn_redirect=1) ID in VOD. If you need to access a resource in a subapplication, enter the subapplication ID in this field; otherwise, leave it empty.
                     * @param SubAppId [Subapplication](https://intl.cloud.tencent.com/document/product/266/14574?from_cn_redirect=1) ID in VOD. If you need to access a resource in a subapplication, enter the subapplication ID in this field; otherwise, leave it empty.
                     */
                    void SetSubAppId(const uint64_t& _subAppId);

                    /**
                     * 判断参数 SubAppId 是否已赋值
                     * @return SubAppId 是否已赋值
                     */
                    bool SubAppIdHasBeenSet() const;

                private:

                    /**
                     * Start date in [ISO date format](https://intl.cloud.tencent.com/document/product/266/11732?from_cn_redirect=1#iso-.E6.97.A5.E6.9C.9F.E6.A0.BC.E5.BC.8F).
                     */
                    std::string m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * End date in [ISO date format](https://intl.cloud.tencent.com/document/product/266/11732?from_cn_redirect=1#iso-.E6.97.A5.E6.9C.9F.E6.A0.BC.E5.BC.8F). The end date must be on or after the start date.
                     */
                    std::string m_endTime;
                    bool m_endTimeHasBeenSet;

                    /**
                     * This API is used to query video processing task types. Valid values:
<li>Transcoding: basic transcoding</li>
<li>Transcoding-TESHD: TESHD transcoding</li>
<li>Editing: video editing</li>
<li>AdaptiveBitrateStreaming: adaptive bitrate streaming</li>
<li>ContentAudit: content moderation</li>
<li>Transcode: transcoding types, including basic transcoding, TESHD transcoding and video editing. This value is not recommended.</li>
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * [Subapplication](https://intl.cloud.tencent.com/document/product/266/14574?from_cn_redirect=1) ID in VOD. If you need to access a resource in a subapplication, enter the subapplication ID in this field; otherwise, leave it empty.
                     */
                    uint64_t m_subAppId;
                    bool m_subAppIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20180717_MODEL_DESCRIBEMEDIAPROCESSUSAGEDATAREQUEST_H_
