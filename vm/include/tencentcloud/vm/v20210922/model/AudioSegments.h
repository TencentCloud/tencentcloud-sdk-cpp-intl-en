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

#ifndef TENCENTCLOUD_VM_V20210922_MODEL_AUDIOSEGMENTS_H_
#define TENCENTCLOUD_VM_V20210922_MODEL_AUDIOSEGMENTS_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/vm/v20210922/model/AudioResult.h>


namespace TencentCloud
{
    namespace Vm
    {
        namespace V20210922
        {
            namespace Model
            {
                /**
                * Information of the audio segment
                */
                class AudioSegments : public AbstractModel
                {
                public:
                    AudioSegments();
                    ~AudioSegments() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Capture time.
For VOD files, it indicates the video offset time given in seconds (e.g., 0, 5, 10).
For live files, it indicates a timestamp (e.g., 1594650717).
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return OffsetTime Capture time.
For VOD files, it indicates the video offset time given in seconds (e.g., 0, 5, 10).
For live files, it indicates a timestamp (e.g., 1594650717).
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetOffsetTime() const;

                    /**
                     * 设置Capture time.
For VOD files, it indicates the video offset time given in seconds (e.g., 0, 5, 10).
For live files, it indicates a timestamp (e.g., 1594650717).
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _offsetTime Capture time.
For VOD files, it indicates the video offset time given in seconds (e.g., 0, 5, 10).
For live files, it indicates a timestamp (e.g., 1594650717).
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetOffsetTime(const std::string& _offsetTime);

                    /**
                     * 判断参数 OffsetTime 是否已赋值
                     * @return OffsetTime 是否已赋值
                     * 
                     */
                    bool OffsetTimeHasBeenSet() const;

                    /**
                     * 获取Result set
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Result Result set
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    AudioResult GetResult() const;

                    /**
                     * 设置Result set
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _result Result set
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetResult(const AudioResult& _result);

                    /**
                     * 判断参数 Result 是否已赋值
                     * @return Result 是否已赋值
                     * 
                     */
                    bool ResultHasBeenSet() const;

                private:

                    /**
                     * Capture time.
For VOD files, it indicates the video offset time given in seconds (e.g., 0, 5, 10).
For live files, it indicates a timestamp (e.g., 1594650717).
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_offsetTime;
                    bool m_offsetTimeHasBeenSet;

                    /**
                     * Result set
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    AudioResult m_result;
                    bool m_resultHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VM_V20210922_MODEL_AUDIOSEGMENTS_H_
