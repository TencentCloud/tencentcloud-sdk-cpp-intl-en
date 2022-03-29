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

#ifndef TENCENTCLOUD_VM_V20201229_MODEL_MEDIAINFO_H_
#define TENCENTCLOUD_VM_V20201229_MODEL_MEDIAINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Vm
    {
        namespace V20201229
        {
            namespace Model
            {
                /**
                * Media type
                */
                class MediaInfo : public AbstractModel
                {
                public:
                    MediaInfo();
                    ~MediaInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取This field is used to return the segment length of the input video stream in seconds. It is **5 seconds by default** and is customizable.<br>Note: this field will take effect only when the moderated file is streaming media. If it returns 0, no valid value has been obtained.
                     * @return Duration This field is used to return the segment length of the input video stream in seconds. It is **5 seconds by default** and is customizable.<br>Note: this field will take effect only when the moderated file is streaming media. If it returns 0, no valid value has been obtained.
                     */
                    int64_t GetDuration() const;

                    /**
                     * 设置This field is used to return the segment length of the input video stream in seconds. It is **5 seconds by default** and is customizable.<br>Note: this field will take effect only when the moderated file is streaming media. If it returns 0, no valid value has been obtained.
                     * @param Duration This field is used to return the segment length of the input video stream in seconds. It is **5 seconds by default** and is customizable.<br>Note: this field will take effect only when the moderated file is streaming media. If it returns 0, no valid value has been obtained.
                     */
                    void SetDuration(const int64_t& _duration);

                    /**
                     * 判断参数 Duration 是否已赋值
                     * @return Duration 是否已赋值
                     */
                    bool DurationHasBeenSet() const;

                private:

                    /**
                     * This field is used to return the segment length of the input video stream in seconds. It is **5 seconds by default** and is customizable.<br>Note: this field will take effect only when the moderated file is streaming media. If it returns 0, no valid value has been obtained.
                     */
                    int64_t m_duration;
                    bool m_durationHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VM_V20201229_MODEL_MEDIAINFO_H_
