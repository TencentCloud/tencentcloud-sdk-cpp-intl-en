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

#ifndef TENCENTCLOUD_VOD_V20180717_MODEL_MEDIASOURCEDATA_H_
#define TENCENTCLOUD_VOD_V20180717_MODEL_MEDIASOURCEDATA_H_

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
                * Source file information
                */
                class MediaSourceData : public AbstractModel
                {
                public:
                    MediaSourceData();
                    ~MediaSourceData() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Source of a media file:
<li>`Record`: recording, such as live or time-shift recording</li>
<li>`Upload`: upload, such as pull for upload, upload from server, and UGC upload from client</li>
<li>`VideoProcessing`: video processing, such as video splicing and video clipping</li>
<li>`WebPageRecord`: panoramic recording </li>
<li>`Unknown`: unknown source</li>
                     * @return SourceType Source of a media file:
<li>`Record`: recording, such as live or time-shift recording</li>
<li>`Upload`: upload, such as pull for upload, upload from server, and UGC upload from client</li>
<li>`VideoProcessing`: video processing, such as video splicing and video clipping</li>
<li>`WebPageRecord`: panoramic recording </li>
<li>`Unknown`: unknown source</li>
                     */
                    std::string GetSourceType() const;

                    /**
                     * 设置Source of a media file:
<li>`Record`: recording, such as live or time-shift recording</li>
<li>`Upload`: upload, such as pull for upload, upload from server, and UGC upload from client</li>
<li>`VideoProcessing`: video processing, such as video splicing and video clipping</li>
<li>`WebPageRecord`: panoramic recording </li>
<li>`Unknown`: unknown source</li>
                     * @param SourceType Source of a media file:
<li>`Record`: recording, such as live or time-shift recording</li>
<li>`Upload`: upload, such as pull for upload, upload from server, and UGC upload from client</li>
<li>`VideoProcessing`: video processing, such as video splicing and video clipping</li>
<li>`WebPageRecord`: panoramic recording </li>
<li>`Unknown`: unknown source</li>
                     */
                    void SetSourceType(const std::string& _sourceType);

                    /**
                     * 判断参数 SourceType 是否已赋值
                     * @return SourceType 是否已赋值
                     */
                    bool SourceTypeHasBeenSet() const;

                    /**
                     * 获取Field passed through when a file is created.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return SourceContext Field passed through when a file is created.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string GetSourceContext() const;

                    /**
                     * 设置Field passed through when a file is created.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param SourceContext Field passed through when a file is created.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    void SetSourceContext(const std::string& _sourceContext);

                    /**
                     * 判断参数 SourceContext 是否已赋值
                     * @return SourceContext 是否已赋值
                     */
                    bool SourceContextHasBeenSet() const;

                private:

                    /**
                     * Source of a media file:
<li>`Record`: recording, such as live or time-shift recording</li>
<li>`Upload`: upload, such as pull for upload, upload from server, and UGC upload from client</li>
<li>`VideoProcessing`: video processing, such as video splicing and video clipping</li>
<li>`WebPageRecord`: panoramic recording </li>
<li>`Unknown`: unknown source</li>
                     */
                    std::string m_sourceType;
                    bool m_sourceTypeHasBeenSet;

                    /**
                     * Field passed through when a file is created.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_sourceContext;
                    bool m_sourceContextHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20180717_MODEL_MEDIASOURCEDATA_H_
