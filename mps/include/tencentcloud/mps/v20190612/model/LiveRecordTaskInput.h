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

#ifndef TENCENTCLOUD_MPS_V20190612_MODEL_LIVERECORDTASKINPUT_H_
#define TENCENTCLOUD_MPS_V20190612_MODEL_LIVERECORDTASKINPUT_H_

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
                * The input parameters of a live recording task.
                */
                class LiveRecordTaskInput : public AbstractModel
                {
                public:
                    LiveRecordTaskInput();
                    ~LiveRecordTaskInput() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取The live recording template ID.
                     * @return Definition The live recording template ID.
                     * 
                     */
                    int64_t GetDefinition() const;

                    /**
                     * 设置The live recording template ID.
                     * @param _definition The live recording template ID.
                     * 
                     */
                    void SetDefinition(const int64_t& _definition);

                    /**
                     * 判断参数 Definition 是否已赋值
                     * @return Definition 是否已赋值
                     * 
                     */
                    bool DefinitionHasBeenSet() const;

                    /**
                     * 获取The storage of the recording file. If this parameter is left empty, the `OutputStorage` value of the parent folder will be inherited.
Note: This field may return·null, indicating that no valid values can be obtained.
                     * @return OutputStorage The storage of the recording file. If this parameter is left empty, the `OutputStorage` value of the parent folder will be inherited.
Note: This field may return·null, indicating that no valid values can be obtained.
                     * 
                     */
                    TaskOutputStorage GetOutputStorage() const;

                    /**
                     * 设置The storage of the recording file. If this parameter is left empty, the `OutputStorage` value of the parent folder will be inherited.
Note: This field may return·null, indicating that no valid values can be obtained.
                     * @param _outputStorage The storage of the recording file. If this parameter is left empty, the `OutputStorage` value of the parent folder will be inherited.
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
                     * 获取The output path of the recording file.
Note: This field may return·null, indicating that no valid values can be obtained.
                     * @return OutputObjectPath The output path of the recording file.
Note: This field may return·null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetOutputObjectPath() const;

                    /**
                     * 设置The output path of the recording file.
Note: This field may return·null, indicating that no valid values can be obtained.
                     * @param _outputObjectPath The output path of the recording file.
Note: This field may return·null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetOutputObjectPath(const std::string& _outputObjectPath);

                    /**
                     * 判断参数 OutputObjectPath 是否已赋值
                     * @return OutputObjectPath 是否已赋值
                     * 
                     */
                    bool OutputObjectPathHasBeenSet() const;

                private:

                    /**
                     * The live recording template ID.
                     */
                    int64_t m_definition;
                    bool m_definitionHasBeenSet;

                    /**
                     * The storage of the recording file. If this parameter is left empty, the `OutputStorage` value of the parent folder will be inherited.
Note: This field may return·null, indicating that no valid values can be obtained.
                     */
                    TaskOutputStorage m_outputStorage;
                    bool m_outputStorageHasBeenSet;

                    /**
                     * The output path of the recording file.
Note: This field may return·null, indicating that no valid values can be obtained.
                     */
                    std::string m_outputObjectPath;
                    bool m_outputObjectPathHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MPS_V20190612_MODEL_LIVERECORDTASKINPUT_H_
