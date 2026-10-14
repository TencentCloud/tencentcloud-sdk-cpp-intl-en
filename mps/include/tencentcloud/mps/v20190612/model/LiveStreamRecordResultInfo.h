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

#ifndef TENCENTCLOUD_MPS_V20190612_MODEL_LIVESTREAMRECORDRESULTINFO_H_
#define TENCENTCLOUD_MPS_V20190612_MODEL_LIVESTREAMRECORDRESULTINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/mps/v20190612/model/LiveRecordFile.h>


namespace TencentCloud
{
    namespace Mps
    {
        namespace V20190612
        {
            namespace Model
            {
                /**
                * Live stream recording result.
                */
                class LiveStreamRecordResultInfo : public AbstractModel
                {
                public:
                    LiveStreamRecordResultInfo();
                    ~LiveStreamRecordResultInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Whether recording ends.
0: Recording does not end, returning a single file.
1: Recording ends, returning all recording files.
                     * @return RecordOver Whether recording ends.
0: Recording does not end, returning a single file.
1: Recording ends, returning all recording files.
                     * 
                     */
                    uint64_t GetRecordOver() const;

                    /**
                     * 设置Whether recording ends.
0: Recording does not end, returning a single file.
1: Recording ends, returning all recording files.
                     * @param _recordOver Whether recording ends.
0: Recording does not end, returning a single file.
1: Recording ends, returning all recording files.
                     * 
                     */
                    void SetRecordOver(const uint64_t& _recordOver);

                    /**
                     * 判断参数 RecordOver 是否已赋值
                     * @return RecordOver 是否已赋值
                     * 
                     */
                    bool RecordOverHasBeenSet() const;

                    /**
                     * 获取File list.
                     * @return FileResults File list.
                     * 
                     */
                    std::vector<LiveRecordFile> GetFileResults() const;

                    /**
                     * 设置File list.
                     * @param _fileResults File list.
                     * 
                     */
                    void SetFileResults(const std::vector<LiveRecordFile>& _fileResults);

                    /**
                     * 判断参数 FileResults 是否已赋值
                     * @return FileResults 是否已赋值
                     * 
                     */
                    bool FileResultsHasBeenSet() const;

                private:

                    /**
                     * Whether recording ends.
0: Recording does not end, returning a single file.
1: Recording ends, returning all recording files.
                     */
                    uint64_t m_recordOver;
                    bool m_recordOverHasBeenSet;

                    /**
                     * File list.
                     */
                    std::vector<LiveRecordFile> m_fileResults;
                    bool m_fileResultsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MPS_V20190612_MODEL_LIVESTREAMRECORDRESULTINFO_H_
