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

#ifndef TENCENTCLOUD_MPS_V20190612_MODEL_BATCHSUBTASKRESULT_H_
#define TENCENTCLOUD_MPS_V20190612_MODEL_BATCHSUBTASKRESULT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/mps/v20190612/model/MediaInputInfo.h>
#include <tencentcloud/mps/v20190612/model/MediaMetaData.h>
#include <tencentcloud/mps/v20190612/model/BatchSmartSubtitlesResult.h>


namespace TencentCloud
{
    namespace Mps
    {
        namespace V20190612
        {
            namespace Model
            {
                /**
                * Results of subtasks for a batch task.
                */
                class BatchSubTaskResult : public AbstractModel
                {
                public:
                    BatchSubTaskResult();
                    ~BatchSubTaskResult() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Input information for a batch task.
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return InputInfos Input information for a batch task.
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    std::vector<MediaInputInfo> GetInputInfos() const;

                    /**
                     * 设置Input information for a batch task.
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _inputInfos Input information for a batch task.
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetInputInfos(const std::vector<MediaInputInfo>& _inputInfos);

                    /**
                     * 判断参数 InputInfos 是否已赋值
                     * @return InputInfos 是否已赋值
                     * 
                     */
                    bool InputInfosHasBeenSet() const;

                    /**
                     * 获取Metadata of the original video.
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return Metadatas Metadata of the original video.
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    std::vector<MediaMetaData> GetMetadatas() const;

                    /**
                     * 设置Metadata of the original video.
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _metadatas Metadata of the original video.
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetMetadatas(const std::vector<MediaMetaData>& _metadatas);

                    /**
                     * 判断参数 Metadatas 是否已赋值
                     * @return Metadatas 是否已赋值
                     * 
                     */
                    bool MetadatasHasBeenSet() const;

                    /**
                     * 获取Execution result of the smart subtitle task.
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return SmartSubtitlesTaskResult Execution result of the smart subtitle task.
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    BatchSmartSubtitlesResult GetSmartSubtitlesTaskResult() const;

                    /**
                     * 设置Execution result of the smart subtitle task.
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _smartSubtitlesTaskResult Execution result of the smart subtitle task.
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetSmartSubtitlesTaskResult(const BatchSmartSubtitlesResult& _smartSubtitlesTaskResult);

                    /**
                     * 判断参数 SmartSubtitlesTaskResult 是否已赋值
                     * @return SmartSubtitlesTaskResult 是否已赋值
                     * 
                     */
                    bool SmartSubtitlesTaskResultHasBeenSet() const;

                private:

                    /**
                     * Input information for a batch task.
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    std::vector<MediaInputInfo> m_inputInfos;
                    bool m_inputInfosHasBeenSet;

                    /**
                     * Metadata of the original video.
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    std::vector<MediaMetaData> m_metadatas;
                    bool m_metadatasHasBeenSet;

                    /**
                     * Execution result of the smart subtitle task.
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    BatchSmartSubtitlesResult m_smartSubtitlesTaskResult;
                    bool m_smartSubtitlesTaskResultHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MPS_V20190612_MODEL_BATCHSUBTASKRESULT_H_
