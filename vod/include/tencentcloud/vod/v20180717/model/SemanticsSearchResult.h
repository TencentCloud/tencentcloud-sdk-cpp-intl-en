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

#ifndef TENCENTCLOUD_VOD_V20180717_MODEL_SEMANTICSSEARCHRESULT_H_
#define TENCENTCLOUD_VOD_V20180717_MODEL_SEMANTICSSEARCHRESULT_H_

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
                * Semantic search result.
                */
                class SemanticsSearchResult : public AbstractModel
                {
                public:
                    SemanticsSearchResult();
                    ~SemanticsSearchResult() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Specifies the unique identifier of the media file.
                     * @return FileId Specifies the unique identifier of the media file.
                     * 
                     */
                    std::string GetFileId() const;

                    /**
                     * 设置Specifies the unique identifier of the media file.
                     * @param _fileId Specifies the unique identifier of the media file.
                     * 
                     */
                    void SetFileId(const std::string& _fileId);

                    /**
                     * 判断参数 FileId 是否已赋值
                     * @return FileId 是否已赋值
                     * 
                     */
                    bool FileIdHasBeenSet() const;

                    /**
                     * 获取Score of the video in this retrieval. higher score indicates greater similarity to the retrieval value. value ranges from 0 to 1.
                     * @return Score Score of the video in this retrieval. higher score indicates greater similarity to the retrieval value. value ranges from 0 to 1.
                     * 
                     */
                    double GetScore() const;

                    /**
                     * 设置Score of the video in this retrieval. higher score indicates greater similarity to the retrieval value. value ranges from 0 to 1.
                     * @param _score Score of the video in this retrieval. higher score indicates greater similarity to the retrieval value. value ranges from 0 to 1.
                     * 
                     */
                    void SetScore(const double& _score);

                    /**
                     * 判断参数 Score 是否已赋值
                     * @return Score 是否已赋值
                     * 
                     */
                    bool ScoreHasBeenSet() const;

                    /**
                     * 获取Specifies the start time of the video clip, in seconds.
                     * @return StartTimeOffset Specifies the start time of the video clip, in seconds.
                     * 
                     */
                    double GetStartTimeOffset() const;

                    /**
                     * 设置Specifies the start time of the video clip, in seconds.
                     * @param _startTimeOffset Specifies the start time of the video clip, in seconds.
                     * 
                     */
                    void SetStartTimeOffset(const double& _startTimeOffset);

                    /**
                     * 判断参数 StartTimeOffset 是否已赋值
                     * @return StartTimeOffset 是否已赋值
                     * 
                     */
                    bool StartTimeOffsetHasBeenSet() const;

                    /**
                     * 获取Specifies the end time of the video clip, in seconds.
                     * @return EndTimeOffset Specifies the end time of the video clip, in seconds.
                     * 
                     */
                    double GetEndTimeOffset() const;

                    /**
                     * 设置Specifies the end time of the video clip, in seconds.
                     * @param _endTimeOffset Specifies the end time of the video clip, in seconds.
                     * 
                     */
                    void SetEndTimeOffset(const double& _endTimeOffset);

                    /**
                     * 判断参数 EndTimeOffset 是否已赋值
                     * @return EndTimeOffset 是否已赋值
                     * 
                     */
                    bool EndTimeOffsetHasBeenSet() const;

                private:

                    /**
                     * Specifies the unique identifier of the media file.
                     */
                    std::string m_fileId;
                    bool m_fileIdHasBeenSet;

                    /**
                     * Score of the video in this retrieval. higher score indicates greater similarity to the retrieval value. value ranges from 0 to 1.
                     */
                    double m_score;
                    bool m_scoreHasBeenSet;

                    /**
                     * Specifies the start time of the video clip, in seconds.
                     */
                    double m_startTimeOffset;
                    bool m_startTimeOffsetHasBeenSet;

                    /**
                     * Specifies the end time of the video clip, in seconds.
                     */
                    double m_endTimeOffset;
                    bool m_endTimeOffsetHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20180717_MODEL_SEMANTICSSEARCHRESULT_H_
