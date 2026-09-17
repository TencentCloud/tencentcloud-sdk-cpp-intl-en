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

#ifndef TENCENTCLOUD_VOD_V20180717_MODEL_MEDIASOURCEDATA_H_
#define TENCENTCLOUD_VOD_V20180717_MODEL_MEDIASOURCEDATA_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/vod/v20180717/model/LiveRecordInfo.h>
#include <tencentcloud/vod/v20180717/model/TrtcRecordInfo.h>
#include <tencentcloud/vod/v20180717/model/WebPageRecordInfo.h>


namespace TencentCloud
{
    namespace Vod
    {
        namespace V20180717
        {
            namespace Model
            {
                /**
                * 
                */
                class MediaSourceData : public AbstractModel
                {
                public:
                    MediaSourceData();
                    ~MediaSourceData() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取
                     * @return SourceType 
                     * 
                     */
                    std::string GetSourceType() const;

                    /**
                     * 设置
                     * @param _sourceType 
                     * 
                     */
                    void SetSourceType(const std::string& _sourceType);

                    /**
                     * 判断参数 SourceType 是否已赋值
                     * @return SourceType 是否已赋值
                     * 
                     */
                    bool SourceTypeHasBeenSet() const;

                    /**
                     * 获取
                     * @return SourceContext 
                     * 
                     */
                    std::string GetSourceContext() const;

                    /**
                     * 设置
                     * @param _sourceContext 
                     * 
                     */
                    void SetSourceContext(const std::string& _sourceContext);

                    /**
                     * 判断参数 SourceContext 是否已赋值
                     * @return SourceContext 是否已赋值
                     * 
                     */
                    bool SourceContextHasBeenSet() const;

                    /**
                     * 获取
                     * @return LiveRecordInfo 
                     * 
                     */
                    LiveRecordInfo GetLiveRecordInfo() const;

                    /**
                     * 设置
                     * @param _liveRecordInfo 
                     * 
                     */
                    void SetLiveRecordInfo(const LiveRecordInfo& _liveRecordInfo);

                    /**
                     * 判断参数 LiveRecordInfo 是否已赋值
                     * @return LiveRecordInfo 是否已赋值
                     * 
                     */
                    bool LiveRecordInfoHasBeenSet() const;

                    /**
                     * 获取
                     * @return TrtcRecordInfo 
                     * 
                     */
                    TrtcRecordInfo GetTrtcRecordInfo() const;

                    /**
                     * 设置
                     * @param _trtcRecordInfo 
                     * 
                     */
                    void SetTrtcRecordInfo(const TrtcRecordInfo& _trtcRecordInfo);

                    /**
                     * 判断参数 TrtcRecordInfo 是否已赋值
                     * @return TrtcRecordInfo 是否已赋值
                     * 
                     */
                    bool TrtcRecordInfoHasBeenSet() const;

                    /**
                     * 获取
                     * @return WebPageRecordInfo 
                     * 
                     */
                    WebPageRecordInfo GetWebPageRecordInfo() const;

                    /**
                     * 设置
                     * @param _webPageRecordInfo 
                     * 
                     */
                    void SetWebPageRecordInfo(const WebPageRecordInfo& _webPageRecordInfo);

                    /**
                     * 判断参数 WebPageRecordInfo 是否已赋值
                     * @return WebPageRecordInfo 是否已赋值
                     * 
                     */
                    bool WebPageRecordInfoHasBeenSet() const;

                private:

                    /**
                     * 
                     */
                    std::string m_sourceType;
                    bool m_sourceTypeHasBeenSet;

                    /**
                     * 
                     */
                    std::string m_sourceContext;
                    bool m_sourceContextHasBeenSet;

                    /**
                     * 
                     */
                    LiveRecordInfo m_liveRecordInfo;
                    bool m_liveRecordInfoHasBeenSet;

                    /**
                     * 
                     */
                    TrtcRecordInfo m_trtcRecordInfo;
                    bool m_trtcRecordInfoHasBeenSet;

                    /**
                     * 
                     */
                    WebPageRecordInfo m_webPageRecordInfo;
                    bool m_webPageRecordInfoHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20180717_MODEL_MEDIASOURCEDATA_H_
