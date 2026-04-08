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

#ifndef TENCENTCLOUD_MPS_V20190612_MODEL_SMARTSUBTITLETASKTRANSTEXTRESULTOUTPUT_H_
#define TENCENTCLOUD_MPS_V20190612_MODEL_SMARTSUBTITLETASKTRANSTEXTRESULTOUTPUT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/mps/v20190612/model/SmartSubtitleTaskTransTextSegmentItem.h>
#include <tencentcloud/mps/v20190612/model/TaskOutputStorage.h>
#include <tencentcloud/mps/v20190612/model/SubtitleTransResultItem.h>


namespace TencentCloud
{
    namespace Mps
    {
        namespace V20190612
        {
            namespace Model
            {
                /**
                * Translation result.
                */
                class SmartSubtitleTaskTransTextResultOutput : public AbstractModel
                {
                public:
                    SmartSubtitleTaskTransTextResultOutput();
                    ~SmartSubtitleTaskTransTextResultOutput() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>List of segments for translation.</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return SegmentSet <p>List of segments for translation.</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::vector<SmartSubtitleTaskTransTextSegmentItem> GetSegmentSet() const;

                    /**
                     * 设置<p>List of segments for translation.</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _segmentSet <p>List of segments for translation.</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetSegmentSet(const std::vector<SmartSubtitleTaskTransTextSegmentItem>& _segmentSet);

                    /**
                     * 判断参数 SegmentSet 是否已赋值
                     * @return SegmentSet 是否已赋值
                     * 
                     */
                    bool SegmentSetHasBeenSet() const;

                    /**
                     * 获取<p>Subtitle file URL.</p>
                     * @return SubtitlePath <p>Subtitle file URL.</p>
                     * 
                     */
                    std::string GetSubtitlePath() const;

                    /**
                     * 设置<p>Subtitle file URL.</p>
                     * @param _subtitlePath <p>Subtitle file URL.</p>
                     * 
                     */
                    void SetSubtitlePath(const std::string& _subtitlePath);

                    /**
                     * 判断参数 SubtitlePath 是否已赋值
                     * @return SubtitlePath 是否已赋值
                     * 
                     */
                    bool SubtitlePathHasBeenSet() const;

                    /**
                     * 获取<p>Smart subtitling result storage information.</p>
                     * @return OutputStorage <p>Smart subtitling result storage information.</p>
                     * 
                     */
                    TaskOutputStorage GetOutputStorage() const;

                    /**
                     * 设置<p>Smart subtitling result storage information.</p>
                     * @param _outputStorage <p>Smart subtitling result storage information.</p>
                     * 
                     */
                    void SetOutputStorage(const TaskOutputStorage& _outputStorage);

                    /**
                     * 判断参数 OutputStorage 是否已赋值
                     * @return OutputStorage 是否已赋值
                     * 
                     */
                    bool OutputStorageHasBeenSet() const;

                    /**
                     * 获取<p>Subtitle file path</p>
                     * @return Path <p>Subtitle file path</p>
                     * 
                     */
                    std::string GetPath() const;

                    /**
                     * 设置<p>Subtitle file path</p>
                     * @param _path <p>Subtitle file path</p>
                     * 
                     */
                    void SetPath(const std::string& _path);

                    /**
                     * 判断参数 Path 是否已赋值
                     * @return Path 是否已赋值
                     * 
                     */
                    bool PathHasBeenSet() const;

                    /**
                     * 获取<p>Returned translation result during multilingual translation.</p>
                     * @return SubtitleResults <p>Returned translation result during multilingual translation.</p>
                     * 
                     */
                    std::vector<SubtitleTransResultItem> GetSubtitleResults() const;

                    /**
                     * 设置<p>Returned translation result during multilingual translation.</p>
                     * @param _subtitleResults <p>Returned translation result during multilingual translation.</p>
                     * 
                     */
                    void SetSubtitleResults(const std::vector<SubtitleTransResultItem>& _subtitleResults);

                    /**
                     * 判断参数 SubtitleResults 是否已赋值
                     * @return SubtitleResults 是否已赋值
                     * 
                     */
                    bool SubtitleResultsHasBeenSet() const;

                private:

                    /**
                     * <p>List of segments for translation.</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<SmartSubtitleTaskTransTextSegmentItem> m_segmentSet;
                    bool m_segmentSetHasBeenSet;

                    /**
                     * <p>Subtitle file URL.</p>
                     */
                    std::string m_subtitlePath;
                    bool m_subtitlePathHasBeenSet;

                    /**
                     * <p>Smart subtitling result storage information.</p>
                     */
                    TaskOutputStorage m_outputStorage;
                    bool m_outputStorageHasBeenSet;

                    /**
                     * <p>Subtitle file path</p>
                     */
                    std::string m_path;
                    bool m_pathHasBeenSet;

                    /**
                     * <p>Returned translation result during multilingual translation.</p>
                     */
                    std::vector<SubtitleTransResultItem> m_subtitleResults;
                    bool m_subtitleResultsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MPS_V20190612_MODEL_SMARTSUBTITLETASKTRANSTEXTRESULTOUTPUT_H_
