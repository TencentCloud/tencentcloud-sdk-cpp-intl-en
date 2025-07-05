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

#ifndef TENCENTCLOUD_VOD_V20180717_MODEL_WEBPAGERECORDINFO_H_
#define TENCENTCLOUD_VOD_V20180717_MODEL_WEBPAGERECORDINFO_H_

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
                * Panoramic recording information
                */
                class WebPageRecordInfo : public AbstractModel
                {
                public:
                    WebPageRecordInfo();
                    ~WebPageRecordInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Panoramic recording Url.
                     * @return RecordUrl Panoramic recording Url.
                     * 
                     */
                    std::string GetRecordUrl() const;

                    /**
                     * 设置Panoramic recording Url.
                     * @param _recordUrl Panoramic recording Url.
                     * 
                     */
                    void SetRecordUrl(const std::string& _recordUrl);

                    /**
                     * 判断参数 RecordUrl 是否已赋值
                     * @return RecordUrl 是否已赋值
                     * 
                     */
                    bool RecordUrlHasBeenSet() const;

                    /**
                     * 获取Panoramic recording task ID.
                     * @return RecordTaskId Panoramic recording task ID.
                     * 
                     */
                    std::string GetRecordTaskId() const;

                    /**
                     * 设置Panoramic recording task ID.
                     * @param _recordTaskId Panoramic recording task ID.
                     * 
                     */
                    void SetRecordTaskId(const std::string& _recordTaskId);

                    /**
                     * 判断参数 RecordTaskId 是否已赋值
                     * @return RecordTaskId 是否已赋值
                     * 
                     */
                    bool RecordTaskIdHasBeenSet() const;

                private:

                    /**
                     * Panoramic recording Url.
                     */
                    std::string m_recordUrl;
                    bool m_recordUrlHasBeenSet;

                    /**
                     * Panoramic recording task ID.
                     */
                    std::string m_recordTaskId;
                    bool m_recordTaskIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20180717_MODEL_WEBPAGERECORDINFO_H_
