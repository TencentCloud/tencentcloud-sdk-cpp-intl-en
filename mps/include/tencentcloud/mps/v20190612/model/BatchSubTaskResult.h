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
                     * 获取
                     * @return InputInfos 
                     * 
                     */
                    std::vector<MediaInputInfo> GetInputInfos() const;

                    /**
                     * 设置
                     * @param _inputInfos 
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
                     * 获取
                     * @return Metadatas 
                     * 
                     */
                    std::vector<MediaMetaData> GetMetadatas() const;

                    /**
                     * 设置
                     * @param _metadatas 
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
                     * 获取
                     * @return SmartSubtitlesTaskResult 
                     * 
                     */
                    BatchSmartSubtitlesResult GetSmartSubtitlesTaskResult() const;

                    /**
                     * 设置
                     * @param _smartSubtitlesTaskResult 
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
                     * 
                     */
                    std::vector<MediaInputInfo> m_inputInfos;
                    bool m_inputInfosHasBeenSet;

                    /**
                     * 
                     */
                    std::vector<MediaMetaData> m_metadatas;
                    bool m_metadatasHasBeenSet;

                    /**
                     * 
                     */
                    BatchSmartSubtitlesResult m_smartSubtitlesTaskResult;
                    bool m_smartSubtitlesTaskResultHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MPS_V20190612_MODEL_BATCHSUBTASKRESULT_H_
