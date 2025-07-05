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

#ifndef TENCENTCLOUD_MDL_V20200326_MODEL_PIPELINEOUTPUTSTATISTICS_H_
#define TENCENTCLOUD_MDL_V20200326_MODEL_PIPELINEOUTPUTSTATISTICS_H_

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
                * Channel output statistics.
                */
                class PipelineOutputStatistics : public AbstractModel
                {
                public:
                    PipelineOutputStatistics();
                    ~PipelineOutputStatistics() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Timestamp.
In seconds, indicating data time.
                     * @return Timestamp Timestamp.
In seconds, indicating data time.
                     * 
                     */
                    uint64_t GetTimestamp() const;

                    /**
                     * 设置Timestamp.
In seconds, indicating data time.
                     * @param _timestamp Timestamp.
In seconds, indicating data time.
                     * 
                     */
                    void SetTimestamp(const uint64_t& _timestamp);

                    /**
                     * 判断参数 Timestamp 是否已赋值
                     * @return Timestamp 是否已赋值
                     * 
                     */
                    bool TimestampHasBeenSet() const;

                    /**
                     * 获取Output bandwidth in bps.
                     * @return NetworkOut Output bandwidth in bps.
                     * 
                     */
                    uint64_t GetNetworkOut() const;

                    /**
                     * 设置Output bandwidth in bps.
                     * @param _networkOut Output bandwidth in bps.
                     * 
                     */
                    void SetNetworkOut(const uint64_t& _networkOut);

                    /**
                     * 判断参数 NetworkOut 是否已赋值
                     * @return NetworkOut 是否已赋值
                     * 
                     */
                    bool NetworkOutHasBeenSet() const;

                private:

                    /**
                     * Timestamp.
In seconds, indicating data time.
                     */
                    uint64_t m_timestamp;
                    bool m_timestampHasBeenSet;

                    /**
                     * Output bandwidth in bps.
                     */
                    uint64_t m_networkOut;
                    bool m_networkOutHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MDL_V20200326_MODEL_PIPELINEOUTPUTSTATISTICS_H_
