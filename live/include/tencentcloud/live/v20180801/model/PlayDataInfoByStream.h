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

#ifndef TENCENTCLOUD_LIVE_V20180801_MODEL_PLAYDATAINFOBYSTREAM_H_
#define TENCENTCLOUD_LIVE_V20180801_MODEL_PLAYDATAINFOBYSTREAM_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Live
    {
        namespace V20180801
        {
            namespace Model
            {
                /**
                * Playback information at the stream level.
                */
                class PlayDataInfoByStream : public AbstractModel
                {
                public:
                    PlayDataInfoByStream();
                    ~PlayDataInfoByStream() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Stream name.
                     * @return StreamName Stream name.
                     * 
                     */
                    std::string GetStreamName() const;

                    /**
                     * 设置Stream name.
                     * @param _streamName Stream name.
                     * 
                     */
                    void SetStreamName(const std::string& _streamName);

                    /**
                     * 判断参数 StreamName 是否已赋值
                     * @return StreamName 是否已赋值
                     * 
                     */
                    bool StreamNameHasBeenSet() const;

                    /**
                     * 获取Total traffic in MB.
                     * @return TotalFlux Total traffic in MB.
                     * 
                     */
                    double GetTotalFlux() const;

                    /**
                     * 设置Total traffic in MB.
                     * @param _totalFlux Total traffic in MB.
                     * 
                     */
                    void SetTotalFlux(const double& _totalFlux);

                    /**
                     * 判断参数 TotalFlux 是否已赋值
                     * @return TotalFlux 是否已赋值
                     * 
                     */
                    bool TotalFluxHasBeenSet() const;

                private:

                    /**
                     * Stream name.
                     */
                    std::string m_streamName;
                    bool m_streamNameHasBeenSet;

                    /**
                     * Total traffic in MB.
                     */
                    double m_totalFlux;
                    bool m_totalFluxHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_LIVE_V20180801_MODEL_PLAYDATAINFOBYSTREAM_H_
