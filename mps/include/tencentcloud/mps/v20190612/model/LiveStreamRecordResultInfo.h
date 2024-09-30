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
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return RecordOver Whether recording ends.
0: Recording does not end, returning a single file.
1: Recording ends, returning all recording files.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    uint64_t GetRecordOver() const;

                    /**
                     * 设置Whether recording ends.
0: Recording does not end, returning a single file.
1: Recording ends, returning all recording files.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _recordOver Whether recording ends.
0: Recording does not end, returning a single file.
1: Recording ends, returning all recording files.
Note: This field may return null, indicating that no valid values can be obtained.
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

Note: This field may return null, indicating that no valid values can be obtained.
                     * @return FileResults File list.

Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::vector<LiveRecordFile> GetFileResults() const;

                    /**
                     * 设置File list.

Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _fileResults File list.

Note: This field may return null, indicating that no valid values can be obtained.
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
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    uint64_t m_recordOver;
                    bool m_recordOverHasBeenSet;

                    /**
                     * File list.

Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<LiveRecordFile> m_fileResults;
                    bool m_fileResultsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MPS_V20190612_MODEL_LIVESTREAMRECORDRESULTINFO_H_
