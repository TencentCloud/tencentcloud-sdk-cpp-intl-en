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

#ifndef TENCENTCLOUD_VOD_V20180717_MODEL_LIVERECORDINFO_H_
#define TENCENTCLOUD_VOD_V20180717_MODEL_LIVERECORDINFO_H_

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
                * Live streaming recording information.
                */
                class LiveRecordInfo : public AbstractModel
                {
                public:
                    LiveRecordInfo();
                    ~LiveRecordInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Live streaming recording ID
                     * @return StreamId Live streaming recording ID
                     * 
                     */
                    std::string GetStreamId() const;

                    /**
                     * 设置Live streaming recording ID
                     * @param _streamId Live streaming recording ID
                     * 
                     */
                    void SetStreamId(const std::string& _streamId);

                    /**
                     * 判断参数 StreamId 是否已赋值
                     * @return StreamId 是否已赋值
                     * 
                     */
                    bool StreamIdHasBeenSet() const;

                    /**
                     * 获取Recording start time, using [ISO date format](https://intl.cloud.tencent.com/document/product/266/11732?from_cn_redirect=1#I).
                     * @return RecordStartTime Recording start time, using [ISO date format](https://intl.cloud.tencent.com/document/product/266/11732?from_cn_redirect=1#I).
                     * 
                     */
                    std::string GetRecordStartTime() const;

                    /**
                     * 设置Recording start time, using [ISO date format](https://intl.cloud.tencent.com/document/product/266/11732?from_cn_redirect=1#I).
                     * @param _recordStartTime Recording start time, using [ISO date format](https://intl.cloud.tencent.com/document/product/266/11732?from_cn_redirect=1#I).
                     * 
                     */
                    void SetRecordStartTime(const std::string& _recordStartTime);

                    /**
                     * 判断参数 RecordStartTime 是否已赋值
                     * @return RecordStartTime 是否已赋值
                     * 
                     */
                    bool RecordStartTimeHasBeenSet() const;

                    /**
                     * 获取Recording end time, using [ISO date format](https://intl.cloud.tencent.com/document/product/266/11732?from_cn_redirect=1#I).
                     * @return RecordEndTime Recording end time, using [ISO date format](https://intl.cloud.tencent.com/document/product/266/11732?from_cn_redirect=1#I).
                     * 
                     */
                    std::string GetRecordEndTime() const;

                    /**
                     * 设置Recording end time, using [ISO date format](https://intl.cloud.tencent.com/document/product/266/11732?from_cn_redirect=1#I).
                     * @param _recordEndTime Recording end time, using [ISO date format](https://intl.cloud.tencent.com/document/product/266/11732?from_cn_redirect=1#I).
                     * 
                     */
                    void SetRecordEndTime(const std::string& _recordEndTime);

                    /**
                     * 判断参数 RecordEndTime 是否已赋值
                     * @return RecordEndTime 是否已赋值
                     * 
                     */
                    bool RecordEndTimeHasBeenSet() const;

                private:

                    /**
                     * Live streaming recording ID
                     */
                    std::string m_streamId;
                    bool m_streamIdHasBeenSet;

                    /**
                     * Recording start time, using [ISO date format](https://intl.cloud.tencent.com/document/product/266/11732?from_cn_redirect=1#I).
                     */
                    std::string m_recordStartTime;
                    bool m_recordStartTimeHasBeenSet;

                    /**
                     * Recording end time, using [ISO date format](https://intl.cloud.tencent.com/document/product/266/11732?from_cn_redirect=1#I).
                     */
                    std::string m_recordEndTime;
                    bool m_recordEndTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20180717_MODEL_LIVERECORDINFO_H_
