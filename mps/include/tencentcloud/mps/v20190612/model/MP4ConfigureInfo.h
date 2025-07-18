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

#ifndef TENCENTCLOUD_MPS_V20190612_MODEL_MP4CONFIGUREINFO_H_
#define TENCENTCLOUD_MPS_V20190612_MODEL_MP4CONFIGUREINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Mps
    {
        namespace V20190612
        {
            namespace Model
            {
                /**
                * MP4 configuration parameter.
                */
                class MP4ConfigureInfo : public AbstractModel
                {
                public:
                    MP4ConfigureInfo();
                    ~MP4ConfigureInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Recording duration, in seconds. The interval can range from 10 minutes to 720 minutes. It is 60 minutes (3,600 seconds) by default.
                     * @return Interval Recording duration, in seconds. The interval can range from 10 minutes to 720 minutes. It is 60 minutes (3,600 seconds) by default.
                     * 
                     */
                    int64_t GetInterval() const;

                    /**
                     * 设置Recording duration, in seconds. The interval can range from 10 minutes to 720 minutes. It is 60 minutes (3,600 seconds) by default.
                     * @param _interval Recording duration, in seconds. The interval can range from 10 minutes to 720 minutes. It is 60 minutes (3,600 seconds) by default.
                     * 
                     */
                    void SetInterval(const int64_t& _interval);

                    /**
                     * 判断参数 Interval 是否已赋值
                     * @return Interval 是否已赋值
                     * 
                     */
                    bool IntervalHasBeenSet() const;

                private:

                    /**
                     * Recording duration, in seconds. The interval can range from 10 minutes to 720 minutes. It is 60 minutes (3,600 seconds) by default.
                     */
                    int64_t m_interval;
                    bool m_intervalHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MPS_V20190612_MODEL_MP4CONFIGUREINFO_H_
