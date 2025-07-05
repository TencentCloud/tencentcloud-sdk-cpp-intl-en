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

#ifndef TENCENTCLOUD_MDL_V20200326_MODEL_STREAMSCTE35INFO_H_
#define TENCENTCLOUD_MDL_V20200326_MODEL_STREAMSCTE35INFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Mdl
    {
        namespace V20200326
        {
            namespace Model
            {
                /**
                * SCTE-35 information.
                */
                class StreamScte35Info : public AbstractModel
                {
                public:
                    StreamScte35Info();
                    ~StreamScte35Info() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取SCTE-35 `Pid`.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return Pid SCTE-35 `Pid`.
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    int64_t GetPid() const;

                    /**
                     * 设置SCTE-35 `Pid`.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param _pid SCTE-35 `Pid`.
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetPid(const int64_t& _pid);

                    /**
                     * 判断参数 Pid 是否已赋值
                     * @return Pid 是否已赋值
                     * 
                     */
                    bool PidHasBeenSet() const;

                private:

                    /**
                     * SCTE-35 `Pid`.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t m_pid;
                    bool m_pidHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MDL_V20200326_MODEL_STREAMSCTE35INFO_H_
