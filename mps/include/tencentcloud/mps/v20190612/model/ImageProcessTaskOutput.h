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

#ifndef TENCENTCLOUD_MPS_V20190612_MODEL_IMAGEPROCESSTASKOUTPUT_H_
#define TENCENTCLOUD_MPS_V20190612_MODEL_IMAGEPROCESSTASKOUTPUT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/mps/v20190612/model/TaskOutputStorage.h>


namespace TencentCloud
{
    namespace Mps
    {
        namespace V20190612
        {
            namespace Model
            {
                /**
                * Image processing result information.
                */
                class ImageProcessTaskOutput : public AbstractModel
                {
                public:
                    ImageProcessTaskOutput();
                    ~ImageProcessTaskOutput() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Path of the output file.
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return Path Path of the output file.
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    std::string GetPath() const;

                    /**
                     * 设置Path of the output file.
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _path Path of the output file.
Note: This field may return null, indicating that no valid value can be obtained.
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
                     * 获取Storage location of the output file.
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return OutputStorage Storage location of the output file.
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    TaskOutputStorage GetOutputStorage() const;

                    /**
                     * 设置Storage location of the output file.
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _outputStorage Storage location of the output file.
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetOutputStorage(const TaskOutputStorage& _outputStorage);

                    /**
                     * 判断参数 OutputStorage 是否已赋值
                     * @return OutputStorage 是否已赋值
                     * 
                     */
                    bool OutputStorageHasBeenSet() const;

                private:

                    /**
                     * Path of the output file.
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    std::string m_path;
                    bool m_pathHasBeenSet;

                    /**
                     * Storage location of the output file.
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    TaskOutputStorage m_outputStorage;
                    bool m_outputStorageHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MPS_V20190612_MODEL_IMAGEPROCESSTASKOUTPUT_H_
