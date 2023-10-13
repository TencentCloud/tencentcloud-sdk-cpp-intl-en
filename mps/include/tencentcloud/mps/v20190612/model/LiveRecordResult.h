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

#ifndef TENCENTCLOUD_MPS_V20190612_MODEL_LIVERECORDRESULT_H_
#define TENCENTCLOUD_MPS_V20190612_MODEL_LIVERECORDRESULT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/mps/v20190612/model/TaskOutputStorage.h>
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
                * The live recording result.
                */
                class LiveRecordResult : public AbstractModel
                {
                public:
                    LiveRecordResult();
                    ~LiveRecordResult() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取The storage of the recording file.
Note: This field may return·null, indicating that no valid values can be obtained.
                     * @return OutputStorage The storage of the recording file.
Note: This field may return·null, indicating that no valid values can be obtained.
                     * 
                     */
                    TaskOutputStorage GetOutputStorage() const;

                    /**
                     * 设置The storage of the recording file.
Note: This field may return·null, indicating that no valid values can be obtained.
                     * @param _outputStorage The storage of the recording file.
Note: This field may return·null, indicating that no valid values can be obtained.
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
                     * 获取The recording segments.
Note: This field may return·null, indicating that no valid values can be obtained.
                     * @return FileList The recording segments.
Note: This field may return·null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::vector<LiveRecordFile> GetFileList() const;

                    /**
                     * 设置The recording segments.
Note: This field may return·null, indicating that no valid values can be obtained.
                     * @param _fileList The recording segments.
Note: This field may return·null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetFileList(const std::vector<LiveRecordFile>& _fileList);

                    /**
                     * 判断参数 FileList 是否已赋值
                     * @return FileList 是否已赋值
                     * 
                     */
                    bool FileListHasBeenSet() const;

                private:

                    /**
                     * The storage of the recording file.
Note: This field may return·null, indicating that no valid values can be obtained.
                     */
                    TaskOutputStorage m_outputStorage;
                    bool m_outputStorageHasBeenSet;

                    /**
                     * The recording segments.
Note: This field may return·null, indicating that no valid values can be obtained.
                     */
                    std::vector<LiveRecordFile> m_fileList;
                    bool m_fileListHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MPS_V20190612_MODEL_LIVERECORDRESULT_H_
